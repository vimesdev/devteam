#include "HMSRegistration.h"
#include "MainFrm.h"
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CHMSRegistration*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSRegistration*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnRoomListDeleteItem();
} 
static long _OnExamListLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration*)pWnd)->OnExamListLoadData();
} 
static void _OnExamListDblClickFnc(CWnd *pWnd){
	((CHMSRegistration*)pWnd)->OnExamListDblClick();
} 
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSRegistration*)pWnd)->OnExamListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnExamListDeleteItem();
} 
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnCardNoFindChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoFindChange();
} */
/*static void _OnCardNoFindSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoFindSetfocus();} */ 
/*static void _OnCardNoFindKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoFindKillfocus();
} */
static int _OnCardNoFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnCardNoFindCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnEthnicAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnOccupationAddNew();
}*/
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnIDNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnIDNoChange();
} */
/*static void _OnIDNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnIDNoSetfocus();} */ 
/*static void _OnIDNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnIDNoKillfocus();
} */
static int _OnIDNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnIDNoCheckValue();
} 
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnWorkingPlaceCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnPhoneCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRankAddNew();
}*/
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnRelativeCheckValue();
} 
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnContactAddressCheckValue();
} 
static void _OnWorkPlaceButtonSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnWorkPlaceButtonSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardNoButtonSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnCardNoButtonSelect();
} 
static void _OnPatientStateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnPatientStateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientStateSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientStateSelendok();
}
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientStateKillfocus();
}*/
/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientStateKillfocus();
}*/
static long _OnPatientStateLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnPatientStateLoadData();
}
/*static void _OnPatientStateAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnPatientStateAddNew();
}*/
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnSheetNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSheetNoChange();
} */
/*static void _OnSheetNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSheetNoSetfocus();} */ 
/*static void _OnSheetNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnSheetNoKillfocus();
} */
static int _OnSheetNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnSheetNoCheckValue();
} 
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnRoomAddNew();
}*/
static void _OnTransferSelectFnc(CWnd *pWnd){
	 ((CHMSRegistration*)pWnd)->OnTransferSelect();
}
static void _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalSelendokFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnHospitalSelendok();
}
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnHospitalKillfocus();
}*/
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnHospitalKillfocus();
}*/
static long _OnHospitalLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnHospitalLoadData();
}
/*static void _OnHospitalAddNewFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnHospitalAddNew();
}*/
/*static void _OnDiseaseChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDiseaseChange();
} */
/*static void _OnDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDiseaseSetfocus();} */ 
/*static void _OnDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnDiseaseCheckValue();
} 
/*static void _OnExaminePerWeekChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerWeekChange();
} */
/*static void _OnExaminePerWeekSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerWeekSetfocus();} */ 
/*static void _OnExaminePerWeekKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerWeekKillfocus();
} */
static int _OnExaminePerWeekCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnExaminePerWeekCheckValue();
} 
/*static void _OnExaminePerMonthChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerMonthChange();
} */
/*static void _OnExaminePerMonthSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerMonthSetfocus();} */ 
/*static void _OnExaminePerMonthKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnExaminePerMonthKillfocus();
} */
static int _OnExaminePerMonthCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnExaminePerMonthCheckValue();
} 
static void _OnAppointReexamineSelectFnc(CWnd *pWnd){
	 ((CHMSRegistration*)pWnd)->OnAppointReexamineSelect();
}
/*static void _OnAppointReexamineDateChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAppointReexamineDateChange();
} */
/*static void _OnAppointReexamineDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAppointReexamineDateSetfocus();} */ 
/*static void _OnAppointReexamineDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAppointReexamineDateKillfocus();
} */
static int _OnAppointReexamineDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnAppointReexamineDateCheckValue();
} 
/*static void _OnAmountDepositChangeFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAmountDepositChange();
} */
/*static void _OnAmountDepositSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAmountDepositSetfocus();} */ 
/*static void _OnAmountDepositKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration *)pWnd)->OnAmountDepositKillfocus();
} */
static int _OnAmountDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration *)pWnd)->OnAmountDepositCheckValue();
} 
static void _OnAddNewSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnAddNewSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSRegistrationFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnAddHMSRegistration();
} 
static int _OnEditHMSRegistrationFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnEditHMSRegistration();
} 
static int _OnDeleteHMSRegistrationFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnDeleteHMSRegistration();
} 
static int _OnSaveHMSRegistrationFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnSaveHMSRegistration();
} 
static int _OnCancelHMSRegistrationFnc(CWnd *pWnd){
	 return ((CHMSRegistration*)pWnd)->OnCancelHMSRegistration();
} 
CHMSRegistration::CHMSRegistration(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSRegistration::~CHMSRegistration(){
}
void CHMSRegistration::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 690, 270);
	m_wndPatientObject.Create(this, _T("Patient Object"), 5, 275, 690, 330);
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 335, 690, 420);
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 425, 690, 480);
	m_wndRoomsInformation.Create(this, _T("Rooms Information"), 695, 5, 1010, 480);
	m_wndExaminationList.Create(this, _T("Examination History"), 5, 485, 1009, 600);
	m_wndRoomList.Create(this,700, 30, 1005, 475); 
	m_wndExamList.Create(this,10, 510, 690, 595); 
	m_wndPatientNoLabel.Create(this, _T("PID"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 195, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 200, 30, 265, 55);
	m_wndDocumentNo.Create(this,270, 30, 360, 55); 
	m_wndCardNoFindLabel.Create(this, _T("Card"), 365, 30, 445, 55);
	m_wndCardNoFind.Create(this,450, 30, 685, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 360, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 365, 60, 445, 85);
	m_wndAge.Create(this,450, 60, 555, 85); 
	m_wndBirthDate.Create(this,560, 60, 685, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 10, 90, 110, 115);
	m_wndSex.Create(this,115, 90, 195, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 200, 90, 265, 115);
	m_wndEthnic.Create(this,270, 90, 360, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 365, 90, 445, 115);
	m_wndOccupation.Create(this,450, 90, 685, 115); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 120, 110, 145);
	m_wndProvill.Create(this,115, 120, 360, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 363, 120, 443, 145);
	m_wndDistrict.Create(this,450, 120, 685, 145); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 150, 110, 175);
	m_wndVillage.Create(this,115, 150, 360, 175); 
	m_wndDetailAddress.Create(this,115, 150, 360, 175); 
	m_wndIDNoLabel.Create(this, _T("ID No"), 365, 150, 445, 175);
	m_wndIDNo.Create(this,450, 150, 685, 175); 
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 180, 110, 205);
	m_wndWorkingPlace.Create(this,115, 180, 330, 205); 
	m_wndPhoneLabel.Create(this, _T("Telephone"), 365, 180, 445, 205);
	m_wndPhone.Create(this,450, 180, 685, 205); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 210, 110, 235);
	m_wndRank.Create(this,115, 210, 360, 235); 
	m_wndRelative.Create(this,115, 210, 360, 235); 
	m_wndPositionLabel.Create(this, _T("Relation"), 365, 210, 445, 235);
	m_wndPosition.Create(this,450, 210, 685, 235); 
	m_wndContactAddressLabel.Create(this, _T("Contact Addr"), 10, 240, 110, 265);
	m_wndContactAddress.Create(this,115, 240, 685, 265); 
	m_wndWorkPlaceButton.Create(this, _T("..."), 335, 180, 360, 205);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 300, 110, 325);
	m_wndObject.Create(this,115, 300, 360, 325); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 365, 300, 445, 325);
	m_wndCardNo.Create(this,450, 301, 655, 326); 
	m_wndCardNoButton.Create(this, _T("..."), 660, 301, 685, 326);
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 10, 360, 110, 385);
	m_wndPatientState.Create(this,115, 360, 360, 385); 
	m_wndExamDateLabel.Create(this, _T("Date"), 365, 360, 445, 385);
	m_wndExamDate.Create(this,450, 360, 575, 385); 
	m_wndSheetNoLabel.Create(this, _T("Sheet No"), 580, 360, 635, 385);
	m_wndSheetNo.Create(this,640, 360, 685, 385); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 390, 110, 415);
	m_wndExamType.Create(this,115, 390, 360, 415); 
	m_wndRoomLabel.Create(this, _T("Room"), 365, 390, 445, 415);
	m_wndRoom.Create(this,450, 390, 685, 415); 
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 450, 90, 475);
	m_wndTransfer.Create(this, _T(""), 95, 450, 110, 475);
	m_wndHospital.Create(this,115, 450, 360, 475); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 365, 449, 445, 474);
	m_wndDisease.Create(this,450, 449, 685, 474); 
	m_wndExaminePerWeekLabel.Create(this, _T("Examine Per Week"), 700, 510, 910, 535);
	m_wndExaminePerWeek.Create(this,916, 510, 1006, 535); 
	m_wndExaminePerMonthLabel.Create(this, _T("Examine Per Month"), 700, 540, 910, 565);
	m_wndExaminePerMonth.Create(this,916, 540, 1006, 565); 
	m_wndAppointReexamine.Create(this, _T("Appoint Re-examine"), 700, 570, 910, 595);
	m_wndAppointReexamineDate.Create(this,916, 570, 1006, 595); 
	m_wndAmountDepositLabel.Create(this, _T("Deposit"), 700, 605, 910, 630);
	m_wndAmountDeposit.Create(this,916, 605, 1006, 630); 
	m_wndAddNew.Create(this, _T("&Add Patient"), 5, 605, 115, 630);
	m_wndEdit.Create(this, _T("&Edit"), 120, 605, 230, 630);
	m_wndDelete.Create(this, _T("Delete"), 235, 605, 345, 630);
	m_wndSave.Create(this, _T("&Save"), 350, 605, 460, 630);
	m_wndCancel.Create(this, _T("&Cancel"), 465, 605, 575, 630);
	m_wndPrint.Create(this, _T("&Print"), 580, 605, 690, 630);

}
void CHMSRegistration::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndCardNoFind.SetLimitText(1024);
	m_wndCardNoFind.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(1024);
	m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(1024);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(1024);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(1024);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndIDNo.SetLimitText(1024);
	m_wndIDNo.SetCheckValue(true);
	m_wndWorkingPlace.SetLimitText(1024);
	m_wndWorkingPlace.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	m_wndRelative.SetLimitText(1024);
	m_wndRelative.SetCheckValue(true);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(1024);
	m_wndContactAddress.SetLimitText(1024);
	m_wndContactAddress.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndPatientState.SetCheckValue(true);
	m_wndPatientState.LimitText(1024);
	m_wndExamDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndExamDate.SetCheckValue(true);
	m_wndSheetNo.SetLimitText(1024);
	m_wndSheetNo.SetCheckValue(true);
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndHospital.SetCheckValue(true);
	m_wndHospital.LimitText(1024);
	m_wndDisease.SetLimitText(1024);
	m_wndDisease.SetCheckValue(true);
	m_wndExaminePerWeek.SetLimitText(1024);
	m_wndExaminePerWeek.SetCheckValue(true);
	m_wndExaminePerMonth.SetLimitText(1024);
	m_wndExaminePerMonth.SetCheckValue(true);
	m_wndAppointReexamineDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAppointReexamineDate.SetCheckValue(true);
	m_wndAmountDeposit.SetLimitText(1024);
	m_wndAmountDeposit.SetCheckValue(true);































}
void CHMSRegistration::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
	m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
	m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
	m_wndExamList.AddEvent(1, _T("Delete"), _OnExamListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndCardNoFind.SetEvent(WE_CHANGE, _OnCardNoFindChangeFnc);
	//m_wndCardNoFind.SetEvent(WE_SETFOCUS, _OnCardNoFindSetfocusFnc);
	//m_wndCardNoFind.SetEvent(WE_KILLFOCUS, _OnCardNoFindKillfocusFnc);
	m_wndCardNoFind.SetEvent(WE_CHECKVALUE, _OnCardNoFindCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
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
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
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
	//m_wndIDNo.SetEvent(WE_CHANGE, _OnIDNoChangeFnc);
	//m_wndIDNo.SetEvent(WE_SETFOCUS, _OnIDNoSetfocusFnc);
	//m_wndIDNo.SetEvent(WE_KILLFOCUS, _OnIDNoKillfocusFnc);
	m_wndIDNo.SetEvent(WE_CHECKVALUE, _OnIDNoCheckValueFnc);
	//m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
	//m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
	//m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
	m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	//m_wndRelative.SetEvent(WE_CHANGE, _OnRelativeChangeFnc);
	//m_wndRelative.SetEvent(WE_SETFOCUS, _OnRelativeSetfocusFnc);
	//m_wndRelative.SetEvent(WE_KILLFOCUS, _OnRelativeKillfocusFnc);
	m_wndRelative.SetEvent(WE_CHECKVALUE, _OnRelativeCheckValueFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
	//m_wndContactAddress.SetEvent(WE_CHANGE, _OnContactAddressChangeFnc);
	//m_wndContactAddress.SetEvent(WE_SETFOCUS, _OnContactAddressSetfocusFnc);
	//m_wndContactAddress.SetEvent(WE_KILLFOCUS, _OnContactAddressKillfocusFnc);
	m_wndContactAddress.SetEvent(WE_CHECKVALUE, _OnContactAddressCheckValueFnc);
	m_wndWorkPlaceButton.SetEvent(WE_CLICK, _OnWorkPlaceButtonSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardNoButton.SetEvent(WE_CLICK, _OnCardNoButtonSelectFnc);
	m_wndPatientState.SetEvent(WE_SELENDOK, _OnPatientStateSelendokFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_SELCHANGE, _OnPatientStateSelectChangeFnc);
	m_wndPatientState.SetEvent(WE_LOADDATA, _OnPatientStateLoadDataFnc);
	//m_wndPatientState.SetEvent(WE_ADDNEW, _OnPatientStateAddNewFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndSheetNo.SetEvent(WE_CHANGE, _OnSheetNoChangeFnc);
	//m_wndSheetNo.SetEvent(WE_SETFOCUS, _OnSheetNoSetfocusFnc);
	//m_wndSheetNo.SetEvent(WE_KILLFOCUS, _OnSheetNoKillfocusFnc);
	m_wndSheetNo.SetEvent(WE_CHECKVALUE, _OnSheetNoCheckValueFnc);
	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);
	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);
	//m_wndExaminePerWeek.SetEvent(WE_CHANGE, _OnExaminePerWeekChangeFnc);
	//m_wndExaminePerWeek.SetEvent(WE_SETFOCUS, _OnExaminePerWeekSetfocusFnc);
	//m_wndExaminePerWeek.SetEvent(WE_KILLFOCUS, _OnExaminePerWeekKillfocusFnc);
	m_wndExaminePerWeek.SetEvent(WE_CHECKVALUE, _OnExaminePerWeekCheckValueFnc);
	//m_wndExaminePerMonth.SetEvent(WE_CHANGE, _OnExaminePerMonthChangeFnc);
	//m_wndExaminePerMonth.SetEvent(WE_SETFOCUS, _OnExaminePerMonthSetfocusFnc);
	//m_wndExaminePerMonth.SetEvent(WE_KILLFOCUS, _OnExaminePerMonthKillfocusFnc);
	m_wndExaminePerMonth.SetEvent(WE_CHECKVALUE, _OnExaminePerMonthCheckValueFnc);
	m_wndAppointReexamine.SetEvent(WE_CLICK, _OnAppointReexamineSelectFnc);
	//m_wndAppointReexamineDate.SetEvent(WE_CHANGE, _OnAppointReexamineDateChangeFnc);
	//m_wndAppointReexamineDate.SetEvent(WE_SETFOCUS, _OnAppointReexamineDateSetfocusFnc);
	//m_wndAppointReexamineDate.SetEvent(WE_KILLFOCUS, _OnAppointReexamineDateKillfocusFnc);
	m_wndAppointReexamineDate.SetEvent(WE_CHECKVALUE, _OnAppointReexamineDateCheckValueFnc);
	//m_wndAmountDeposit.SetEvent(WE_CHANGE, _OnAmountDepositChangeFnc);
	//m_wndAmountDeposit.SetEvent(WE_SETFOCUS, _OnAmountDepositSetfocusFnc);
	//m_wndAmountDeposit.SetEvent(WE_KILLFOCUS, _OnAmountDepositKillfocusFnc);
	m_wndAmountDeposit.SetEvent(WE_CHECKVALUE, _OnAmountDepositCheckValueFnc);
	m_wndAddNew.SetEvent(WE_CLICK, _OnAddNewSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSRegistrationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSRegistrationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSRegistrationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSRegistrationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSRegistrationFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSRegistration::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndCardNoFind.GetDlgCtrlID(), m_szCardNoFind);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndIDNo.GetDlgCtrlID(), m_szIDNo);
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientStateKey);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndTransfer.GetDlgCtrlID(), m_bTransfer);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
	DDX_Text(pDX, m_wndExaminePerWeek.GetDlgCtrlID(), m_nExaminePerWeek);
	DDX_Text(pDX, m_wndExaminePerMonth.GetDlgCtrlID(), m_nExaminePerMonth);
	DDX_Check(pDX, m_wndAppointReexamine.GetDlgCtrlID(), m_bAppointReexamine);
	DDX_TextEx(pDX, m_wndAppointReexamineDate.GetDlgCtrlID(), m_szAppointReexamineDate);
	DDX_Text(pDX, m_wndAmountDeposit.GetDlgCtrlID(), m_nAmountDeposit);

}
void CHMSRegistration::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSRegistration::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSRegistration::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szCardNoFind.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szOccupationKey.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDetailAddress.Empty();
	m_szIDNo.Empty();
	m_szWorkingPlace.Empty();
	m_szPhone.Empty();
	m_szRankKey.Empty();
	m_szRelative.Empty();
	m_szPositionKey.Empty();
	m_szContactAddress.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szPatientStateKey.Empty();
	m_szExamDate.Empty();
	m_szSheetNo.Empty();
	m_szExamTypeKey.Empty();
	m_szRoomKey.Empty();
	m_bTransfer=FALSE;
	m_szHospitalKey.Empty();
	m_szDisease.Empty();
	m_nExaminePerWeek=0;
	m_nExaminePerMonth=0;
	m_bAppointReexamine=FALSE;
	m_szAppointReexamineDate.Empty();
	m_nAmountDeposit=0;

}
int CHMSRegistration::SetMode(int nMode){
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
void CHMSRegistration::OnRoomListDblClick(){
	
} 
void CHMSRegistration::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSRegistration::OnRoomListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSRegistration::OnExamListDblClick(){
	
} 
void CHMSRegistration::OnExamListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration::OnExamListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSRegistration::OnExamListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamList.AddItems(
		rs.MoveNext();
	}
	m_wndExamList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnPatientNoChange(){
	
} */
/*void CHMSRegistration::OnPatientNoSetfocus(){
	
} */
/*void CHMSRegistration::OnPatientNoKillfocus(){
	
} */
int CHMSRegistration::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnDocumentNoChange(){
	
} */
/*void CHMSRegistration::OnDocumentNoSetfocus(){
	
} */
/*void CHMSRegistration::OnDocumentNoKillfocus(){
	
} */
int CHMSRegistration::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnCardNoFindChange(){
	
} */
/*void CHMSRegistration::OnCardNoFindSetfocus(){
	
} */
/*void CHMSRegistration::OnCardNoFindKillfocus(){
	
} */
int CHMSRegistration::OnCardNoFindCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnPatientNameChange(){
	
} */
/*void CHMSRegistration::OnPatientNameSetfocus(){
	
} */
/*void CHMSRegistration::OnPatientNameKillfocus(){
	
} */
int CHMSRegistration::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnAgeChange(){
	
} */
/*void CHMSRegistration::OnAgeSetfocus(){
	
} */
/*void CHMSRegistration::OnAgeKillfocus(){
	
} */
int CHMSRegistration::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnBirthDateChange(){
	
} */
/*void CHMSRegistration::OnBirthDateSetfocus(){
	
} */
/*void CHMSRegistration::OnBirthDateKillfocus(){
	
} */
int CHMSRegistration::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSRegistration::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnSexSelendok(){
	 
}
/*void CHMSRegistration::OnSexSetfocus(){
	
}*/
/*void CHMSRegistration::OnSexKillfocus(){
	
}*/
long CHMSRegistration::OnSexLoadData(){
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
/*void CHMSRegistration::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnEthnicSelendok(){
	 
}
/*void CHMSRegistration::OnEthnicSetfocus(){
	
}*/
/*void CHMSRegistration::OnEthnicKillfocus(){
	
}*/
long CHMSRegistration::OnEthnicLoadData(){
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
/*void CHMSRegistration::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnOccupationSelendok(){
	 
}
/*void CHMSRegistration::OnOccupationSetfocus(){
	
}*/
/*void CHMSRegistration::OnOccupationKillfocus(){
	
}*/
long CHMSRegistration::OnOccupationLoadData(){
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
/*void CHMSRegistration::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnProvillSelendok(){
	 
}
/*void CHMSRegistration::OnProvillSetfocus(){
	
}*/
/*void CHMSRegistration::OnProvillKillfocus(){
	
}*/
long CHMSRegistration::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProvillKey
};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnDistrictSelendok(){
	 
}
/*void CHMSRegistration::OnDistrictSetfocus(){
	
}*/
/*void CHMSRegistration::OnDistrictKillfocus(){
	
}*/
long CHMSRegistration::OnDistrictLoadData(){
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
/*void CHMSRegistration::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnVillageSelendok(){
	 
}
/*void CHMSRegistration::OnVillageSetfocus(){
	
}*/
/*void CHMSRegistration::OnVillageKillfocus(){
	
}*/
long CHMSRegistration::OnVillageLoadData(){
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
/*void CHMSRegistration::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnDetailAddressChange(){
	
} */
/*void CHMSRegistration::OnDetailAddressSetfocus(){
	
} */
/*void CHMSRegistration::OnDetailAddressKillfocus(){
	
} */
int CHMSRegistration::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnIDNoChange(){
	
} */
/*void CHMSRegistration::OnIDNoSetfocus(){
	
} */
/*void CHMSRegistration::OnIDNoKillfocus(){
	
} */
int CHMSRegistration::OnIDNoCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnWorkingPlaceChange(){
	
} */
/*void CHMSRegistration::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSRegistration::OnWorkingPlaceKillfocus(){
	
} */
int CHMSRegistration::OnWorkingPlaceCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnPhoneChange(){
	
} */
/*void CHMSRegistration::OnPhoneSetfocus(){
	
} */
/*void CHMSRegistration::OnPhoneKillfocus(){
	
} */
int CHMSRegistration::OnPhoneCheckValue(){
	return 0;
} 
void CHMSRegistration::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnRankSelendok(){
	 
}
/*void CHMSRegistration::OnRankSetfocus(){
	
}*/
/*void CHMSRegistration::OnRankKillfocus(){
	
}*/
long CHMSRegistration::OnRankLoadData(){
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
/*void CHMSRegistration::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnRelativeChange(){
	
} */
/*void CHMSRegistration::OnRelativeSetfocus(){
	
} */
/*void CHMSRegistration::OnRelativeKillfocus(){
	
} */
int CHMSRegistration::OnRelativeCheckValue(){
	return 0;
} 
void CHMSRegistration::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnPositionSelendok(){
	 
}
/*void CHMSRegistration::OnPositionSetfocus(){
	
}*/
/*void CHMSRegistration::OnPositionKillfocus(){
	
}*/
long CHMSRegistration::OnPositionLoadData(){
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
/*void CHMSRegistration::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnContactAddressChange(){
	
} */
/*void CHMSRegistration::OnContactAddressSetfocus(){
	
} */
/*void CHMSRegistration::OnContactAddressKillfocus(){
	
} */
int CHMSRegistration::OnContactAddressCheckValue(){
	return 0;
} 
void CHMSRegistration::OnWorkPlaceButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnObjectSelendok(){
	 
}
/*void CHMSRegistration::OnObjectSetfocus(){
	
}*/
/*void CHMSRegistration::OnObjectKillfocus(){
	
}*/
long CHMSRegistration::OnObjectLoadData(){
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
/*void CHMSRegistration::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnCardNoChange(){
	
} */
/*void CHMSRegistration::OnCardNoSetfocus(){
	
} */
/*void CHMSRegistration::OnCardNoKillfocus(){
	
} */
int CHMSRegistration::OnCardNoCheckValue(){
	return 0;
} 
void CHMSRegistration::OnCardNoButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnPatientStateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnPatientStateSelendok(){
	 
}
/*void CHMSRegistration::OnPatientStateSetfocus(){
	
}*/
/*void CHMSRegistration::OnPatientStateKillfocus(){
	
}*/
long CHMSRegistration::OnPatientStateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientState.IsSearchKey() && !m_szPatientStateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPatientStateKey
};
	m_wndPatientState.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientState.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnPatientStateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnExamDateChange(){
	
} */
/*void CHMSRegistration::OnExamDateSetfocus(){
	
} */
/*void CHMSRegistration::OnExamDateKillfocus(){
	
} */
int CHMSRegistration::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnSheetNoChange(){
	
} */
/*void CHMSRegistration::OnSheetNoSetfocus(){
	
} */
/*void CHMSRegistration::OnSheetNoKillfocus(){
	
} */
int CHMSRegistration::OnSheetNoCheckValue(){
	return 0;
} 
void CHMSRegistration::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnExamTypeSelendok(){
	 
}
/*void CHMSRegistration::OnExamTypeSetfocus(){
	
}*/
/*void CHMSRegistration::OnExamTypeKillfocus(){
	
}*/
long CHMSRegistration::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamType.IsSearchKey() && !m_szExamTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szExamTypeKey
};
	m_wndExamType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnRoomSelendok(){
	 
}
/*void CHMSRegistration::OnRoomSetfocus(){
	
}*/
/*void CHMSRegistration::OnRoomKillfocus(){
	
}*/
long CHMSRegistration::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSRegistration::OnTransferSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSRegistration::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnHospitalSelendok(){
	 
}
/*void CHMSRegistration::OnHospitalSetfocus(){
	
}*/
/*void CHMSRegistration::OnHospitalKillfocus(){
	
}*/
long CHMSRegistration::OnHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey() && !m_szHospitalKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHospitalKey
};
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration::OnDiseaseChange(){
	
} */
/*void CHMSRegistration::OnDiseaseSetfocus(){
	
} */
/*void CHMSRegistration::OnDiseaseKillfocus(){
	
} */
int CHMSRegistration::OnDiseaseCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnExaminePerWeekChange(){
	
} */
/*void CHMSRegistration::OnExaminePerWeekSetfocus(){
	
} */
/*void CHMSRegistration::OnExaminePerWeekKillfocus(){
	
} */
int CHMSRegistration::OnExaminePerWeekCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnExaminePerMonthChange(){
	
} */
/*void CHMSRegistration::OnExaminePerMonthSetfocus(){
	
} */
/*void CHMSRegistration::OnExaminePerMonthKillfocus(){
	
} */
int CHMSRegistration::OnExaminePerMonthCheckValue(){
	return 0;
} 
	void CHMSRegistration::OnAppointReexamineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSRegistration::OnAppointReexamineDateChange(){
	
} */
/*void CHMSRegistration::OnAppointReexamineDateSetfocus(){
	
} */
/*void CHMSRegistration::OnAppointReexamineDateKillfocus(){
	
} */
int CHMSRegistration::OnAppointReexamineDateCheckValue(){
	return 0;
} 
/*void CHMSRegistration::OnAmountDepositChange(){
	
} */
/*void CHMSRegistration::OnAmountDepositSetfocus(){
	
} */
/*void CHMSRegistration::OnAmountDepositKillfocus(){
	
} */
int CHMSRegistration::OnAmountDepositCheckValue(){
	return 0;
} 
void CHMSRegistration::OnAddNewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration::OnAddHMSRegistration(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSRegistration::OnEditHMSRegistration(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRegistration::OnDeleteHMSRegistration(){
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
 		OnCancelHMSRegistration();
 	}
	return 0;
}
int CHMSRegistration::OnSaveHMSRegistration(){
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
 		//OnHMSRegistrationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSRegistration::OnCancelHMSRegistration(){
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
int CHMSRegistration::OnHMSRegistrationListLoadData(){
	return 0;
}
