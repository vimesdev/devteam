#include "HMSCommanderExamine.h"
#include "MainFrm.h"
#include "HMSDiseaseConclusionDialog.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnSexCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnObjectCheckValue();
} 
static void _OnBloodTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCommanderExamine* )pWnd)->OnBloodTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBloodTypeSelendokFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodTypeSelendok();
}
/*static void _OnBloodTypeSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodTypeKillfocus();
}*/
/*static void _OnBloodTypeKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodTypeKillfocus();
}*/
static long _OnBloodTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBloodTypeLoadData();
}
/*static void _OnBloodTypeAddNewFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodTypeAddNew();
}*/
/*static void _OnDrugAllergyChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrugAllergyChange();
} */
/*static void _OnDrugAllergySetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrugAllergySetfocus();} */ 
/*static void _OnDrugAllergyKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrugAllergyKillfocus();
} */
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDrugAllergyCheckValue();
} 
/*static void _OnChronicDiseaseChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChronicDiseaseChange();
} */
/*static void _OnChronicDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChronicDiseaseSetfocus();} */ 
/*static void _OnChronicDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChronicDiseaseKillfocus();
} */
static int _OnChronicDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnChronicDiseaseCheckValue();
} 
/*static void _OnOperationChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOperationChange();
} */
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOperationSetfocus();} */ 
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOperationKillfocus();
} */
static int _OnOperationCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnOperationCheckValue();
} 
/*static void _OnSmokingChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokingChange();
} */
/*static void _OnSmokingSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokingSetfocus();} */ 
/*static void _OnSmokingKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokingKillfocus();
} */
static int _OnSmokingCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnSmokingCheckValue();
} 
/*static void _OnSmokeQuantityChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokeQuantityChange();
} */
/*static void _OnSmokeQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokeQuantitySetfocus();} */ 
/*static void _OnSmokeQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSmokeQuantityKillfocus();
} */
static int _OnSmokeQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnSmokeQuantityCheckValue();
} 
/*static void _OnDrinkChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrinkChange();
} */
/*static void _OnDrinkSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrinkSetfocus();} */ 
/*static void _OnDrinkKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDrinkKillfocus();
} */
static int _OnDrinkCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDrinkCheckValue();
} 
/*static void _OnOtherHabitChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherHabitChange();
} */
/*static void _OnOtherHabitSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherHabitSetfocus();} */ 
/*static void _OnOtherHabitKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherHabitKillfocus();
} */
static int _OnOtherHabitCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnOtherHabitCheckValue();
} 
/*static void _OnFatherChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnFatherChange();
} */
/*static void _OnFatherSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnFatherSetfocus();} */ 
/*static void _OnFatherKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnFatherKillfocus();
} */
static int _OnFatherCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnFatherCheckValue();
} 
/*static void _OnMotherChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMotherChange();
} */
/*static void _OnMotherSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMotherSetfocus();} */ 
/*static void _OnMotherKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMotherKillfocus();
} */
static int _OnMotherCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnMotherCheckValue();
} 
/*static void _OnConnubialChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnConnubialChange();
} */
/*static void _OnConnubialSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnConnubialSetfocus();} */ 
/*static void _OnConnubialKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnConnubialKillfocus();
} */
static int _OnConnubialCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnConnubialCheckValue();
} 
/*static void _OnSiblingsChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSiblingsChange();
} */
/*static void _OnSiblingsSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSiblingsSetfocus();} */ 
/*static void _OnSiblingsKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnSiblingsKillfocus();
} */
static int _OnSiblingsCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnSiblingsCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnChestChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChestChange();
} */
/*static void _OnChestSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChestSetfocus();} */ 
/*static void _OnChestKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnChestKillfocus();
} */
static int _OnChestCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnChestCheckValue();
} 
/*static void _OnBMIChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBMIChange();
} */
/*static void _OnBMISetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBMISetfocus();} */ 
/*static void _OnBMIKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBMIKillfocus();
} */
static int _OnBMICheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBMICheckValue();
} 
/*static void _OnBodyChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBodyChange();
} */
/*static void _OnBodySetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBodySetfocus();} */ 
/*static void _OnBodyKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBodyKillfocus();
} */
static int _OnBodyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBodyCheckValue();
} 
/*static void _OnBreathingChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBreathingChange();
} */
/*static void _OnBreathingSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBreathingSetfocus();} */ 
/*static void _OnBreathingKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBreathingKillfocus();
} */
static int _OnBreathingCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBreathingCheckValue();
} 
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnCirculationChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnCirculationChange();
} */
/*static void _OnCirculationSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnCirculationSetfocus();} */ 
/*static void _OnCirculationKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnCirculationKillfocus();
} */
static int _OnCirculationCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnCirculationCheckValue();
}
/*static void _OnDigestionChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDigestionChange();
} */
/*static void _OnDigestionSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDigestionSetfocus();} */ 
/*static void _OnDigestionKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDigestionKillfocus();
} */
static int _OnDigestionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDigestionCheckValue();
}
/*static void _OnGenitalUrinaryChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnGenitalUrinaryChange();
} */
/*static void _OnGenitalUrinarySetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnGenitalUrinarySetfocus();} */ 
/*static void _OnGenitalUrinaryKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnGenitalUrinaryKillfocus();
} */
static int _OnGenitalUrinaryCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnGenitalUrinaryCheckValue();
} 
/*static void _OnMentalNerveChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMentalNerveChange();
} */
/*static void _OnMentalNerveSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMentalNerveSetfocus();} */ 
/*static void _OnMentalNerveKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnMentalNerveKillfocus();
} */
static int _OnMentalNerveCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnMentalNerveCheckValue();
} 
/*static void _OnBoneChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBoneChange();
} */
/*static void _OnBoneSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBoneSetfocus();} */ 
/*static void _OnBoneKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnBoneKillfocus();
} */
static int _OnBoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnBoneCheckValue();
} 
/*static void _OnEndocrineChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEndocrineChange();
} */
/*static void _OnEndocrineSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEndocrineSetfocus();} */ 
/*static void _OnEndocrineKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEndocrineKillfocus();
} */
static int _OnEndocrineCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnEndocrineCheckValue();
} 
/*static void _OnOtherPartChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherPartChange();
} */
/*static void _OnOtherPartSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherPartSetfocus();} */ 
/*static void _OnOtherPartKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnOtherPartKillfocus();
} */
static int _OnOtherPartCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnOtherPartCheckValue();
} 
/*static void _OnENTChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnENTChange();
} */
/*static void _OnENTSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnENTSetfocus();} */ 
/*static void _OnENTKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnENTKillfocus();
} */
static int _OnENTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnENTCheckValue();
} 
/*static void _OnTCFChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnTCFChange();
} */
/*static void _OnTCFSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnTCFSetfocus();} */ 
/*static void _OnTCFKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnTCFKillfocus();
} */
static int _OnTCFCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnTCFCheckValue();
} 
/*static void _OnEyeChangeFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEyeChange();
} */
/*static void _OnEyeSetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEyeSetfocus();} */ 
/*static void _OnEyeKillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnEyeKillfocus();
} */
static int _OnEyeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnEyeCheckValue();
} 
static void _OnDoctor1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCommanderExamine* )pWnd)->OnDoctor1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor1SelendokFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor1Selendok();
}
/*static void _OnDoctor1SetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor1Killfocus();
}*/
/*static void _OnDoctor1KillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor1Killfocus();
}*/
static long _OnDoctor1LoadDataFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDoctor1LoadData();
}
/*static void _OnDoctor1AddNewFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor1AddNew();
}*/
static void _OnDoctor2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCommanderExamine* )pWnd)->OnDoctor2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor2SelendokFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor2Selendok();
}
/*static void _OnDoctor2SetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor2Killfocus();
}*/
/*static void _OnDoctor2KillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor2Killfocus();
}*/
static long _OnDoctor2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDoctor2LoadData();
}
/*static void _OnDoctor2AddNewFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor2AddNew();
}*/
static void _OnDoctor3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCommanderExamine* )pWnd)->OnDoctor3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor3SelendokFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor3Selendok();
}
/*static void _OnDoctor3SetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor3Killfocus();
}*/
/*static void _OnDoctor3KillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor3Killfocus();
}*/
static long _OnDoctor3LoadDataFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDoctor3LoadData();
}
/*static void _OnDoctor3AddNewFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor3AddNew();
}*/
static void _OnDoctor4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCommanderExamine* )pWnd)->OnDoctor4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor4SelendokFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor4Selendok();
}
/*static void _OnDoctor4SetfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor4Killfocus();
}*/
/*static void _OnDoctor4KillfocusFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor4Killfocus();
}*/
static long _OnDoctor4LoadDataFnc(CWnd *pWnd){
	return ((CHMSCommanderExamine *)pWnd)->OnDoctor4LoadData();
}
/*static void _OnDoctor4AddNewFnc(CWnd *pWnd){
	((CHMSCommanderExamine *)pWnd)->OnDoctor4AddNew();
}*/
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnConclusionSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnConclusionSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSCommanderExamine *pVw = (CHMSCommanderExamine *)pWnd;
	pVw->OnPrintSelect();
}
static int _OnAddHMSCommanderExamineFnc(CWnd *pWnd){
	 return ((CHMSCommanderExamine*)pWnd)->OnAddHMSCommanderExamine();
} 
static int _OnEditHMSCommanderExamineFnc(CWnd *pWnd){
	 return ((CHMSCommanderExamine*)pWnd)->OnEditHMSCommanderExamine();
} 
static int _OnDeleteHMSCommanderExamineFnc(CWnd *pWnd){
	 return ((CHMSCommanderExamine*)pWnd)->OnDeleteHMSCommanderExamine();
} 
static int _OnSaveHMSCommanderExamineFnc(CWnd *pWnd){
	 return ((CHMSCommanderExamine*)pWnd)->OnSaveHMSCommanderExamine();
} 
static int _OnCancelHMSCommanderExamineFnc(CWnd *pWnd){
	 return ((CHMSCommanderExamine*)pWnd)->OnCancelHMSCommanderExamine();
} 
CHMSCommanderExamine::CHMSCommanderExamine(){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_bIsInsert = true;
	m_bIsTerminated = false;
	m_nDocumentNo = 0;
	m_rs = NULL;
}
CHMSCommanderExamine::~CHMSCommanderExamine()
{
	if (m_rs)
		delete m_rs;
}
void CHMSCommanderExamine::OnCreateComponents()
{
	m_wndProfileInfo.Create(this, _T("Profiles"), 5, 5, 385, 150);
	m_wndOwnerInfo.Create(this, _T("Owner"), 5, 155, 385, 495);
	m_wndStrengthExamInfo.Create(this, _T("Strength Examination"), 5, 500, 385, 620);
	m_wndExamineInfo.Create(this, _T("Examine"), 390, 5, 1010, 590);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 115, 55);
	m_wndPatientNo.Create(this,120, 30, 200, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 205, 30, 285, 55);
	m_wndDocumentNo.Create(this,290, 30, 380, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 115, 85);
	m_wndPatientName.Create(this,120, 60, 380, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 115, 115);
	m_wndAge.Create(this,120, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 285, 115);
	m_wndSex.Create(this,290, 90, 380, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 115, 145);
	m_wndObject.Create(this,120, 120, 200, 145); 
	m_wndBloodTypeLabel.Create(this, _T("Blood Type"), 205, 120, 285, 145);
	m_wndBloodType.Create(this,290, 120, 380, 145); 
	m_wndDrugAllergyLabel.Create(this, _T("Food/Drug Allergy"), 10, 180, 115, 205);
	m_wndDrugAllergy.Create(this,120, 180, 380, 210, 1, 0, 1); 
	m_wndChronicDiseaseLabel.Create(this, _T("Chronic Disease"), 10, 215, 115, 240);
	m_wndChronicDisease.Create(this,120, 215, 380, 245, 1, 0, 1); 
	m_wndOperationLabel.Create(this, _T("Operations"), 10, 250, 115, 275);
	m_wndOperation.Create(this,120, 250, 380, 280, 1, 0, 1); 
	m_wndSmokingLabel.Create(this, _T("Smoking"), 10, 285, 115, 310);
	m_wndSmoking.Create(this,120, 285, 335, 310); 
	m_wndSmokeQuantity.Create(this,340, 285, 380, 310); 
	m_wndDrinkLabel.Create(this, _T("Drink"), 10, 315, 115, 340);
	m_wndDrink.Create(this,120, 315, 380, 340); 
	m_wndOtherHabitLabel.Create(this, _T("Other Habit"), 10, 345, 115, 370);
	m_wndOtherHabit.Create(this,120, 345, 380, 370); 
	m_wndFatherLabel.Create(this, _T("Father"), 10, 375, 115, 400);
	m_wndFather.Create(this,120, 375, 380, 400); 
	m_wndMotherLabel.Create(this, _T("Mother"), 10, 405, 115, 430);
	m_wndMother.Create(this,120, 405, 380, 430); 
	m_wndConnubialLabel.Create(this, _T("Connubial"), 10, 435, 115, 460);
	m_wndConnubial.Create(this,120, 435, 380, 460); 
	m_wndSiblingsLabel.Create(this, _T("Siblings"), 10, 465, 115, 490);
	m_wndSiblings.Create(this,120, 465, 380, 490); 
	m_wndHeightLabel.Create(this, _T("Height"), 10, 525, 115, 550);
	m_wndHeight.Create(this,120, 525, 195, 550); 
	m_wndWeightLabel.Create(this, _T("Weight"), 200, 525, 305, 550);
	m_wndWeight.Create(this,310, 525, 380, 550); 
	m_wndChestLabel.Create(this, _T("Chest"), 10, 555, 115, 580);
	m_wndChest.Create(this,120, 555, 195, 580); 
	m_wndBMILabel.Create(this, _T("BMI"), 200, 555, 305, 580);
	m_wndBMI.Create(this,310, 555, 380, 580); 
	m_wndBodyLabel.Create(this, _T("Body"), 10, 585, 115, 610);
	m_wndBody.Create(this,120, 585, 380, 615, 1, 0, 1); 
	m_wndBreathingLabel.Create(this, _T("Breathing"), 395, 30, 535, 55);
	m_wndBreathing.Create(this,540, 30, 1005, 65, 1, 0, 1); 
	m_wndPulseLabel.Create(this, _T("Pulses"), 395, 70, 535, 95);
	m_wndPulse.Create(this,540, 70, 705, 95); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressures"), 710, 70, 845, 95);
	m_wndBloodPressure.Create(this,850, 70, 1005, 95); 
	m_wndCirculationLabel.Create(this, _T("Circulation"), 395, 100, 535, 125);
	m_wndCirculation.Create(this,540, 100, 1005, 135, 1, 0, 1); 
	m_wndDigestionLabel.Create(this, _T("Digestion"), 395, 140, 535, 165);
	m_wndDigestion.Create(this,540, 140, 1005, 175, 1, 0, 1); 
	m_wndGenitalUrinaryLabel.Create(this, _T("Genital - Urinary"), 395, 180, 535, 205);
	m_wndGenitalUrinary.Create(this,540, 180, 1005, 215, 1, 0, 1); 
	m_wndMentalNerveLabel.Create(this, _T("Mental - Nerve"), 395, 220, 535, 245);
	m_wndMentalNerve.Create(this,540, 220, 1005, 255, 1, 0, 1); 
	m_wndBoneLabel.Create(this, _T("Bone"), 395, 260, 535, 285);
	m_wndBone.Create(this,540, 260, 1005, 295, 1, 0, 1); 
	m_wndEndocrineLabel.Create(this, _T("Endocrine"), 395, 300, 535, 325);
	m_wndEndocrine.Create(this,540, 300, 1005, 335, 1, 0, 1); 
	m_wndOtherPartLabel.Create(this, _T("Other Part"), 395, 340, 535, 365);
	m_wndOtherPart.Create(this,540, 340, 1005, 375, 1, 0, 1); 
	m_wndENTLabel.Create(this, _T("ENT"), 395, 380, 535, 405);
	m_wndENT.Create(this,540, 380, 1005, 425, 1, 0, 1); 
	m_wndTCFLabel.Create(this, _T("TCF"), 395, 430, 535, 455);
	m_wndTCF.Create(this,540, 430, 1005, 475, 1, 0, 1); 
	m_wndEyeLabel.Create(this, _T("Eye"), 395, 480, 535, 505);
	m_wndEye.Create(this,540, 480, 1005, 525, 1, 0, 1); 
	m_wndDoctor1Label.Create(this, _T("Doctor 1"), 395, 530, 535, 555);
	m_wndDoctor1.Create(this,540, 530, 705, 555); 
	m_wndDoctor2Label.Create(this, _T("Doctor 2"), 710, 530, 845, 555);
	m_wndDoctor2.Create(this,850, 530, 1005, 555); 
	m_wndDoctor3Label.Create(this, _T("Doctor 3"), 395, 559, 535, 584);
	m_wndDoctor3.Create(this,540, 559, 705, 584); 
	m_wndDoctor4Label.Create(this, _T("Doctor 4"), 710, 560, 845, 585);
	m_wndDoctor4.Create(this,850, 560, 1005, 585); 
	m_wndUpdate.Create(this, _T("&Update"), 415, 595, 510, 620);
	m_wndConclusion.Create(this, _T("Conclusion"), 515, 595, 610, 620);
	m_wndDelete.Create(this, _T("&Delete"), 615, 595, 710, 620);
	m_wndSave.Create(this, _T("&Save"), 715, 595, 810, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 815, 595, 910, 620);
	m_wndPrint.Create(this, _T("&Print"), 915, 595, 1010, 620);

	m_wndStrengthExamInfo2.Create(this, _T(""), 0, 0, 0, 0);
	m_wndStrengthExamInfo2.ShowWindow(SW_HIDE);
	m_wndStrengthExamInfo2.EnableWindow(FALSE);

}
void CHMSCommanderExamine::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndPatientNo.SetLimitText(16);
	//m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);

	m_wndPatientName.SetLimitText(75);
	//m_wndPatientName.SetCheckValue(true);

	m_wndAge.SetLimitText(35);
	//m_wndAge.SetCheckValue(true);

	m_wndSex.SetLimitText(81);
	//m_wndSex.SetCheckValue(true);

	m_wndObject.SetLimitText(35);
	//m_wndObject.SetCheckValue(true);

	//m_wndBloodType.SetCheckValue(true);
	m_wndBloodType.LimitText(81);

	m_wndDrugAllergy.SetLimitText(512);
	//m_wndDrugAllergy.SetCheckValue(true);

	m_wndChronicDisease.SetLimitText(512);
	//m_wndChronicDisease.SetCheckValue(true);

	m_wndOperation.SetLimitText(512);
	//m_wndOperation.SetCheckValue(true);

	m_wndSmoking.SetLimitText(254);
	//m_wndSmoking.SetCheckValue(true);

	m_wndSmokeQuantity.SetLimitText(16);
	//m_wndSmokeQuantity.SetCheckValue(true);

	m_wndDrink.SetLimitText(254);
	//m_wndDrink.SetCheckValue(true);

	m_wndOtherHabit.SetLimitText(254);
	//m_wndOtherHabit.SetCheckValue(true);

	m_wndFather.SetLimitText(254);
	//m_wndFather.SetCheckValue(true);

	m_wndMother.SetLimitText(254);
	//m_wndMother.SetCheckValue(true);

	m_wndConnubial.SetLimitText(254);
	//m_wndConnubial.SetCheckValue(true);

	m_wndSiblings.SetLimitText(254);
	//m_wndSiblings.SetCheckValue(true);

	m_wndHeight.SetLimitText(16);
	//m_wndHeight.SetCheckValue(true);

	m_wndWeight.SetLimitText(16);
	m_wndWeight.SetNumberDecimal(1);
	//m_wndWeight.SetCheckValue(true);

	m_wndChest.SetLimitText(16);
	m_wndChest.SetNumberDecimal(1);
	//m_wndChest.SetCheckValue(true);

	m_wndBMI.SetLimitText(16);
	m_wndChest.SetNumberDecimal(2);
	//m_wndBMI.SetCheckValue(true);

	m_wndBody.SetLimitText(1024);
	//m_wndBody.SetCheckValue(true);

	m_wndBreathing.SetLimitText(1024);
	//m_wndBreathing.SetCheckValue(true);

	m_wndPulse.SetLimitText(16);
	//m_wndPulse.SetCheckValue(true);

	m_wndBloodPressure.SetLimitText(35);
	//m_wndBloodPressure.SetCheckValue(true);

	m_wndCirculation.SetLimitText(1024);
	//m_wndCirculation.SetCheckValue(true);

	m_wndDigestion.SetLimitText(1024);
	//m_wndDigestion.SetCheckValue(true);

	m_wndGenitalUrinary.SetLimitText(1024);
	//m_wndGenitalUrinary.SetCheckValue(true);

	m_wndMentalNerve.SetLimitText(1024);
	//m_wndMentalNerve.SetCheckValue(true);

	m_wndBone.SetLimitText(1024);
	//m_wndBone.SetCheckValue(true);

	m_wndEndocrine.SetLimitText(1024);
	//m_wndEndocrine.SetCheckValue(true);

	m_wndOtherPart.SetLimitText(1024);
	//m_wndOtherPart.SetCheckValue(true);

	m_wndENT.SetLimitText(1024);
	//m_wndENT.SetCheckValue(true);
	m_wndTCF.SetLimitText(1024);
	//m_wndTCF.SetCheckValue(true);
	m_wndEye.SetLimitText(1024);
	//m_wndEye.SetCheckValue(true);

	//m_wndDoctor1.SetCheckValue(true);
	m_wndDoctor1.LimitText(65);

	//m_wndDoctor2.SetCheckValue(true);
	m_wndDoctor2.LimitText(65);

	//m_wndDoctor3.SetCheckValue(true);
	m_wndDoctor3.LimitText(65);

	//m_wndDoctor4.SetCheckValue(true);
	m_wndDoctor4.LimitText(65);


	m_wndBloodType.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndBloodType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor1.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDoctor1.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDoctor1.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndDoctor2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor2.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDoctor2.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndDoctor3.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDoctor3.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDoctor3.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndDoctor4.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDoctor4.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDoctor4.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);

	m_hms_commander_exam_Tbl.SetTableName(_T("hms_commander_exam"));
	m_hms_commander_exam_Tbl.AddField(_T("hce_createdby"), dfText, 15);
	m_hms_commander_exam_Tbl.AddField(_T("hce_createddate"), dfDateTime);
	m_hms_commander_exam_Tbl.AddField(_T("hce_updatedby"), dfText, 15);
	m_hms_commander_exam_Tbl.AddField(_T("hce_updateddate"), dfDateTime);

	m_hms_commander_exam_Tbl.AddField(_T("hce_idx"), dfLong);
	m_hms_commander_exam_Tbl.AddField(_T("hce_docno"), dfLong);

	m_hms_commander_exam_Tbl.AddField(_T("hce_bloodtype"), dfText, 3);

	m_hms_commander_exam_Tbl.AddField(_T("hce_drugfood_allergy"), dfText, 512);
	m_hms_commander_exam_Tbl.AddField(_T("hce_chronic_disease"), dfText, 512);
	m_hms_commander_exam_Tbl.AddField(_T("hce_operation"), dfText, 512);

	m_hms_commander_exam_Tbl.AddField(_T("hce_smoke"), dfText, 254);
	m_hms_commander_exam_Tbl.AddField(_T("hce_smokeqty"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_drink"), dfText, 254);

	m_hms_commander_exam_Tbl.AddField(_T("hce_other_habit"), dfText, 254);

	m_hms_commander_exam_Tbl.AddField(_T("hce_father"), dfText, 254);
	m_hms_commander_exam_Tbl.AddField(_T("hce_mother"), dfText, 254);
	m_hms_commander_exam_Tbl.AddField(_T("hce_connubial"), dfText, 254);
	m_hms_commander_exam_Tbl.AddField(_T("hce_siblings"), dfText, 254);

	m_hms_commander_exam_Tbl.AddField(_T("hce_height"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_weight"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_chest"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_bmi"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_body"), dfText, 512);

	m_hms_commander_exam_Tbl.AddField(_T("hce_breathing"), dfText, 1024);

	m_hms_commander_exam_Tbl.AddField(_T("hce_pulse"), dfFloat);
	m_hms_commander_exam_Tbl.AddField(_T("hce_bloodpressure"), dfText, 35);
	m_hms_commander_exam_Tbl.AddField(_T("hce_circulation"), dfText, 1024);

	m_hms_commander_exam_Tbl.AddField(_T("hce_digestion"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_urinary"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_nerve"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_bone"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_endocrine"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_other_part"), dfText, 1024);

	m_hms_commander_exam_Tbl.AddField(_T("hce_ent"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_tcf"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_eye"), dfText, 1024);

	m_hms_commander_exam_Tbl.AddField(_T("hce_doctor1"), dfText, 15);
	m_hms_commander_exam_Tbl.AddField(_T("hce_doctor2"), dfText, 15);
	m_hms_commander_exam_Tbl.AddField(_T("hce_doctor3"), dfText, 15);
	m_hms_commander_exam_Tbl.AddField(_T("hce_doctor4"), dfText, 15);

	m_hms_commander_exam_Tbl.AddField(_T("hce_health_rank"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_tracking_disease"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_other_issue"), dfText, 1024);
	m_hms_commander_exam_Tbl.AddField(_T("hce_status"), dfText, 1);


	m_rs = new CRecord(&pMF->m_db);
}
void CHMSCommanderExamine::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	m_wndBloodType.SetEvent(WE_SELENDOK, _OnBloodTypeSelendokFnc);
	//m_wndBloodType.SetEvent(WE_SETFOCUS, _OnBloodTypeSetfocusFnc);
	//m_wndBloodType.SetEvent(WE_KILLFOCUS, _OnBloodTypeKillfocusFnc);
	m_wndBloodType.SetEvent(WE_SELCHANGE, _OnBloodTypeSelectChangeFnc);
	m_wndBloodType.SetEvent(WE_LOADDATA, _OnBloodTypeLoadDataFnc);
	//m_wndBloodType.SetEvent(WE_ADDNEW, _OnBloodTypeAddNewFnc);
	//m_wndDrugAllergy.SetEvent(WE_CHANGE, _OnDrugAllergyChangeFnc);
	//m_wndDrugAllergy.SetEvent(WE_SETFOCUS, _OnDrugAllergySetfocusFnc);
	//m_wndDrugAllergy.SetEvent(WE_KILLFOCUS, _OnDrugAllergyKillfocusFnc);
	m_wndDrugAllergy.SetEvent(WE_CHECKVALUE, _OnDrugAllergyCheckValueFnc);
	//m_wndChronicDisease.SetEvent(WE_CHANGE, _OnChronicDiseaseChangeFnc);
	//m_wndChronicDisease.SetEvent(WE_SETFOCUS, _OnChronicDiseaseSetfocusFnc);
	//m_wndChronicDisease.SetEvent(WE_KILLFOCUS, _OnChronicDiseaseKillfocusFnc);
	m_wndChronicDisease.SetEvent(WE_CHECKVALUE, _OnChronicDiseaseCheckValueFnc);
	//m_wndOperation.SetEvent(WE_CHANGE, _OnOperationChangeFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_CHECKVALUE, _OnOperationCheckValueFnc);
	//m_wndSmoking.SetEvent(WE_CHANGE, _OnSmokingChangeFnc);
	//m_wndSmoking.SetEvent(WE_SETFOCUS, _OnSmokingSetfocusFnc);
	//m_wndSmoking.SetEvent(WE_KILLFOCUS, _OnSmokingKillfocusFnc);
	m_wndSmoking.SetEvent(WE_CHECKVALUE, _OnSmokingCheckValueFnc);
	//m_wndSmokeQuantity.SetEvent(WE_CHANGE, _OnSmokeQuantityChangeFnc);
	//m_wndSmokeQuantity.SetEvent(WE_SETFOCUS, _OnSmokeQuantitySetfocusFnc);
	//m_wndSmokeQuantity.SetEvent(WE_KILLFOCUS, _OnSmokeQuantityKillfocusFnc);
	m_wndSmokeQuantity.SetEvent(WE_CHECKVALUE, _OnSmokeQuantityCheckValueFnc);
	//m_wndDrink.SetEvent(WE_CHANGE, _OnDrinkChangeFnc);
	//m_wndDrink.SetEvent(WE_SETFOCUS, _OnDrinkSetfocusFnc);
	//m_wndDrink.SetEvent(WE_KILLFOCUS, _OnDrinkKillfocusFnc);
	m_wndDrink.SetEvent(WE_CHECKVALUE, _OnDrinkCheckValueFnc);
	//m_wndOtherHabit.SetEvent(WE_CHANGE, _OnOtherHabitChangeFnc);
	//m_wndOtherHabit.SetEvent(WE_SETFOCUS, _OnOtherHabitSetfocusFnc);
	//m_wndOtherHabit.SetEvent(WE_KILLFOCUS, _OnOtherHabitKillfocusFnc);
	m_wndOtherHabit.SetEvent(WE_CHECKVALUE, _OnOtherHabitCheckValueFnc);
	//m_wndFather.SetEvent(WE_CHANGE, _OnFatherChangeFnc);
	//m_wndFather.SetEvent(WE_SETFOCUS, _OnFatherSetfocusFnc);
	//m_wndFather.SetEvent(WE_KILLFOCUS, _OnFatherKillfocusFnc);
	m_wndFather.SetEvent(WE_CHECKVALUE, _OnFatherCheckValueFnc);
	//m_wndMother.SetEvent(WE_CHANGE, _OnMotherChangeFnc);
	//m_wndMother.SetEvent(WE_SETFOCUS, _OnMotherSetfocusFnc);
	//m_wndMother.SetEvent(WE_KILLFOCUS, _OnMotherKillfocusFnc);
	m_wndMother.SetEvent(WE_CHECKVALUE, _OnMotherCheckValueFnc);
	//m_wndConnubial.SetEvent(WE_CHANGE, _OnConnubialChangeFnc);
	//m_wndConnubial.SetEvent(WE_SETFOCUS, _OnConnubialSetfocusFnc);
	//m_wndConnubial.SetEvent(WE_KILLFOCUS, _OnConnubialKillfocusFnc);
	m_wndConnubial.SetEvent(WE_CHECKVALUE, _OnConnubialCheckValueFnc);
	//m_wndSiblings.SetEvent(WE_CHANGE, _OnSiblingsChangeFnc);
	//m_wndSiblings.SetEvent(WE_SETFOCUS, _OnSiblingsSetfocusFnc);
	//m_wndSiblings.SetEvent(WE_KILLFOCUS, _OnSiblingsKillfocusFnc);
	m_wndSiblings.SetEvent(WE_CHECKVALUE, _OnSiblingsCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	//m_wndChest.SetEvent(WE_CHANGE, _OnChestChangeFnc);
	//m_wndChest.SetEvent(WE_SETFOCUS, _OnChestSetfocusFnc);
	//m_wndChest.SetEvent(WE_KILLFOCUS, _OnChestKillfocusFnc);
	m_wndChest.SetEvent(WE_CHECKVALUE, _OnChestCheckValueFnc);
	//m_wndBMI.SetEvent(WE_CHANGE, _OnBMIChangeFnc);
	//m_wndBMI.SetEvent(WE_SETFOCUS, _OnBMISetfocusFnc);
	//m_wndBMI.SetEvent(WE_KILLFOCUS, _OnBMIKillfocusFnc);
	m_wndBMI.SetEvent(WE_CHECKVALUE, _OnBMICheckValueFnc);
	//m_wndBody.SetEvent(WE_CHANGE, _OnBodyChangeFnc);
	//m_wndBody.SetEvent(WE_SETFOCUS, _OnBodySetfocusFnc);
	//m_wndBody.SetEvent(WE_KILLFOCUS, _OnBodyKillfocusFnc);
	m_wndBody.SetEvent(WE_CHECKVALUE, _OnBodyCheckValueFnc);
	//m_wndBreathing.SetEvent(WE_CHANGE, _OnBreathingChangeFnc);
	//m_wndBreathing.SetEvent(WE_SETFOCUS, _OnBreathingSetfocusFnc);
	//m_wndBreathing.SetEvent(WE_KILLFOCUS, _OnBreathingKillfocusFnc);
	m_wndBreathing.SetEvent(WE_CHECKVALUE, _OnBreathingCheckValueFnc);
	//m_wndPulse.SetEvent(WE_CHANGE, _OnPulseChangeFnc);
	//m_wndPulse.SetEvent(WE_SETFOCUS, _OnPulseSetfocusFnc);
	//m_wndPulse.SetEvent(WE_KILLFOCUS, _OnPulseKillfocusFnc);
	m_wndPulse.SetEvent(WE_CHECKVALUE, _OnPulseCheckValueFnc);
	//m_wndBloodPressure.SetEvent(WE_CHANGE, _OnBloodPressureChangeFnc);
	//m_wndBloodPressure.SetEvent(WE_SETFOCUS, _OnBloodPressureSetfocusFnc);
	//m_wndBloodPressure.SetEvent(WE_KILLFOCUS, _OnBloodPressureKillfocusFnc);
	m_wndBloodPressure.SetEvent(WE_CHECKVALUE, _OnBloodPressureCheckValueFnc);
	//m_wndCirculation.SetEvent(WE_CHANGE, _OnCirculationChangeFnc);
	//m_wndCirculation.SetEvent(WE_SETFOCUS, _OnCirculationSetfocusFnc);
	//m_wndCirculation.SetEvent(WE_KILLFOCUS, _OnCirculationKillfocusFnc);
	m_wndCirculation.SetEvent(WE_CHECKVALUE, _OnCirculationCheckValueFnc);
	//m_wndDigestion.SetEvent(WE_CHANGE, _OnDigestionChangeFnc);
	//m_wndDigestion.SetEvent(WE_SETFOCUS, _OnDigestionSetfocusFnc);
	//m_wndDigestion.SetEvent(WE_KILLFOCUS, _OnDigestionKillfocusFnc);
	m_wndDigestion.SetEvent(WE_CHECKVALUE, _OnDigestionCheckValueFnc);

	//m_wndGenitalUrinary.SetEvent(WE_CHANGE, _OnGenitalUrinaryChangeFnc);
	//m_wndGenitalUrinary.SetEvent(WE_SETFOCUS, _OnGenitalUrinarySetfocusFnc);
	//m_wndGenitalUrinary.SetEvent(WE_KILLFOCUS, _OnGenitalUrinaryKillfocusFnc);
	m_wndGenitalUrinary.SetEvent(WE_CHECKVALUE, _OnGenitalUrinaryCheckValueFnc);
	//m_wndMentalNerve.SetEvent(WE_CHANGE, _OnMentalNerveChangeFnc);
	//m_wndMentalNerve.SetEvent(WE_SETFOCUS, _OnMentalNerveSetfocusFnc);
	//m_wndMentalNerve.SetEvent(WE_KILLFOCUS, _OnMentalNerveKillfocusFnc);
	m_wndMentalNerve.SetEvent(WE_CHECKVALUE, _OnMentalNerveCheckValueFnc);
	//m_wndBone.SetEvent(WE_CHANGE, _OnBoneChangeFnc);
	//m_wndBone.SetEvent(WE_SETFOCUS, _OnBoneSetfocusFnc);
	//m_wndBone.SetEvent(WE_KILLFOCUS, _OnBoneKillfocusFnc);
	m_wndBone.SetEvent(WE_CHECKVALUE, _OnBoneCheckValueFnc);
	//m_wndEndocrine.SetEvent(WE_CHANGE, _OnEndocrineChangeFnc);
	//m_wndEndocrine.SetEvent(WE_SETFOCUS, _OnEndocrineSetfocusFnc);
	//m_wndEndocrine.SetEvent(WE_KILLFOCUS, _OnEndocrineKillfocusFnc);
	m_wndEndocrine.SetEvent(WE_CHECKVALUE, _OnEndocrineCheckValueFnc);
	//m_wndOtherPart.SetEvent(WE_CHANGE, _OnOtherPartChangeFnc);
	//m_wndOtherPart.SetEvent(WE_SETFOCUS, _OnOtherPartSetfocusFnc);
	//m_wndOtherPart.SetEvent(WE_KILLFOCUS, _OnOtherPartKillfocusFnc);
	m_wndOtherPart.SetEvent(WE_CHECKVALUE, _OnOtherPartCheckValueFnc);
	//m_wndENT.SetEvent(WE_CHANGE, _OnENTChangeFnc);
	//m_wndENT.SetEvent(WE_SETFOCUS, _OnENTSetfocusFnc);
	//m_wndENT.SetEvent(WE_KILLFOCUS, _OnENTKillfocusFnc);
	m_wndENT.SetEvent(WE_CHECKVALUE, _OnENTCheckValueFnc);
	//m_wndTCF.SetEvent(WE_CHANGE, _OnTCFChangeFnc);
	//m_wndTCF.SetEvent(WE_SETFOCUS, _OnTCFSetfocusFnc);
	//m_wndTCF.SetEvent(WE_KILLFOCUS, _OnTCFKillfocusFnc);
	m_wndTCF.SetEvent(WE_CHECKVALUE, _OnTCFCheckValueFnc);
	//m_wndEye.SetEvent(WE_CHANGE, _OnEyeChangeFnc);
	//m_wndEye.SetEvent(WE_SETFOCUS, _OnEyeSetfocusFnc);
	//m_wndEye.SetEvent(WE_KILLFOCUS, _OnEyeKillfocusFnc);
	m_wndEye.SetEvent(WE_CHECKVALUE, _OnEyeCheckValueFnc);
	m_wndDoctor1.SetEvent(WE_SELENDOK, _OnDoctor1SelendokFnc);
	//m_wndDoctor1.SetEvent(WE_SETFOCUS, _OnDoctor1SetfocusFnc);
	//m_wndDoctor1.SetEvent(WE_KILLFOCUS, _OnDoctor1KillfocusFnc);
	m_wndDoctor1.SetEvent(WE_SELCHANGE, _OnDoctor1SelectChangeFnc);
	m_wndDoctor1.SetEvent(WE_LOADDATA, _OnDoctor1LoadDataFnc);
	//m_wndDoctor1.SetEvent(WE_ADDNEW, _OnDoctor1AddNewFnc);
	m_wndDoctor2.SetEvent(WE_SELENDOK, _OnDoctor2SelendokFnc);
	//m_wndDoctor2.SetEvent(WE_SETFOCUS, _OnDoctor2SetfocusFnc);
	//m_wndDoctor2.SetEvent(WE_KILLFOCUS, _OnDoctor2KillfocusFnc);
	m_wndDoctor2.SetEvent(WE_SELCHANGE, _OnDoctor2SelectChangeFnc);
	m_wndDoctor2.SetEvent(WE_LOADDATA, _OnDoctor2LoadDataFnc);
	//m_wndDoctor2.SetEvent(WE_ADDNEW, _OnDoctor2AddNewFnc);
	m_wndDoctor3.SetEvent(WE_SELENDOK, _OnDoctor3SelendokFnc);
	//m_wndDoctor3.SetEvent(WE_SETFOCUS, _OnDoctor3SetfocusFnc);
	//m_wndDoctor3.SetEvent(WE_KILLFOCUS, _OnDoctor3KillfocusFnc);
	m_wndDoctor3.SetEvent(WE_SELCHANGE, _OnDoctor3SelectChangeFnc);
	m_wndDoctor3.SetEvent(WE_LOADDATA, _OnDoctor3LoadDataFnc);
	//m_wndDoctor3.SetEvent(WE_ADDNEW, _OnDoctor3AddNewFnc);
	m_wndDoctor4.SetEvent(WE_SELENDOK, _OnDoctor4SelendokFnc);
	//m_wndDoctor4.SetEvent(WE_SETFOCUS, _OnDoctor4SetfocusFnc);
	//m_wndDoctor4.SetEvent(WE_KILLFOCUS, _OnDoctor4KillfocusFnc);
	m_wndDoctor4.SetEvent(WE_SELCHANGE, _OnDoctor4SelectChangeFnc);
	m_wndDoctor4.SetEvent(WE_LOADDATA, _OnDoctor4LoadDataFnc);
	//m_wndDoctor4.SetEvent(WE_ADDNEW, _OnDoctor4AddNewFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndConclusion.SetEvent(WE_CLICK, _OnConclusionSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 3, true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize() + 3, true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));

	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCommanderExamineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCommanderExamineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCommanderExamineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCommanderExamineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCommanderExamineFnc, 0, 'T', VK_CONTROL);*/
	SetMode(VM_NONE);

}
void CHMSCommanderExamine::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_TextEx(pDX, m_wndBloodType.GetDlgCtrlID(), m_szBloodTypeKey);
	DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);
	DDX_Text(pDX, m_wndChronicDisease.GetDlgCtrlID(), m_szChronicDisease);
	DDX_Text(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperation);
	DDX_Text(pDX, m_wndSmoking.GetDlgCtrlID(), m_szSmoking);
	DDX_Text(pDX, m_wndSmokeQuantity.GetDlgCtrlID(), m_nSmokeQuantity);
	DDX_Text(pDX, m_wndDrink.GetDlgCtrlID(), m_szDrink);
	DDX_Text(pDX, m_wndOtherHabit.GetDlgCtrlID(), m_szOtherHabit);
	DDX_Text(pDX, m_wndFather.GetDlgCtrlID(), m_szFather);
	DDX_Text(pDX, m_wndMother.GetDlgCtrlID(), m_szMother);
	DDX_Text(pDX, m_wndConnubial.GetDlgCtrlID(), m_szConnubial);
	DDX_Text(pDX, m_wndSiblings.GetDlgCtrlID(), m_szSiblings);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndChest.GetDlgCtrlID(), m_nChest);
	DDX_Text(pDX, m_wndBMI.GetDlgCtrlID(), m_nBMI);
	DDX_Text(pDX, m_wndBody.GetDlgCtrlID(), m_szBody);
	DDX_Text(pDX, m_wndBreathing.GetDlgCtrlID(), m_szBreathing);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_szBloodPressure);
	DDX_Text(pDX, m_wndCirculation.GetDlgCtrlID(), m_szCirculation);
	DDX_Text(pDX, m_wndDigestion.GetDlgCtrlID(), m_szDigestion);
	DDX_Text(pDX, m_wndGenitalUrinary.GetDlgCtrlID(), m_szGenitalUrinary);
	DDX_Text(pDX, m_wndMentalNerve.GetDlgCtrlID(), m_szMentalNerve);
	DDX_Text(pDX, m_wndBone.GetDlgCtrlID(), m_szBone);
	DDX_Text(pDX, m_wndEndocrine.GetDlgCtrlID(), m_szEndocrine);
	DDX_Text(pDX, m_wndOtherPart.GetDlgCtrlID(), m_szOtherPart);
	DDX_Text(pDX, m_wndENT.GetDlgCtrlID(), m_szENT);
	DDX_Text(pDX, m_wndTCF.GetDlgCtrlID(), m_szTCF);
	DDX_Text(pDX, m_wndEye.GetDlgCtrlID(), m_szEye);
	DDX_TextEx(pDX, m_wndDoctor1.GetDlgCtrlID(), m_szDoctor1Key);
	DDX_TextEx(pDX, m_wndDoctor2.GetDlgCtrlID(), m_szDoctor2Key);
	DDX_TextEx(pDX, m_wndDoctor3.GetDlgCtrlID(), m_szDoctor3Key);
	DDX_TextEx(pDX, m_wndDoctor4.GetDlgCtrlID(), m_szDoctor4Key);

}

void CHMSCommanderExamine::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szSQL;
	CString tmpStr;

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hd_patientno as patientno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        hp_sex,") \
				_T("        get_syssel_desc('sys_sex', hp_sex) as sex,") \
				_T("        ho_desc as objname,") \
				_T("        ho_type as objtype,") \
				_T("        case when hce_docno > 0 then 'Y' else 'N' end as isexist,") \
				_T("        hms_commander_exam.*") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_commander_exam on(hce_docno=hd_docno)") \
				_T(" where hd_docno=%ld") \
				_T("       and hd_admitdept='C1.2'"), m_nDocumentNo);

	m_rs->ExecSQL(szSQL);

	if (!m_rs->IsEOF())
	{
		m_rs->GetValue(_T("docno"), m_nDocumentNo);
		m_rs->GetValue(_T("patientno"), m_nPatientNo);
		m_rs->GetValue(_T("pname"), m_szPatientName);

		m_rs->GetValue(_T("age"), m_szAge);
		m_rs->GetValue(_T("sex"), m_szSex);
		m_rs->GetValue(_T("objname"), m_szObject);

		m_rs->GetValue(_T("hce_idx"), m_nIdx);

		m_rs->GetValue(_T("hce_bloodtype"), m_szBloodTypeKey);
		m_rs->GetValue(_T("hce_drugfood_allergy"), m_szDrugAllergy);

		m_rs->GetValue(_T("hce_chronic_disease"), m_szChronicDisease);
		m_rs->GetValue(_T("hce_operation"), m_szOperation);

		m_rs->GetValue(_T("hce_smoke"), m_szSmoking);
		m_rs->GetValue(_T("hce_smokeqty"), m_nSmokeQuantity);

		m_rs->GetValue(_T("hce_drink"), m_szDrink);
		m_rs->GetValue(_T("hce_other_habit"), m_szOtherHabit);

		m_rs->GetValue(_T("hce_father"), m_szFather);
		m_rs->GetValue(_T("hce_mother"), m_szMother);

		m_rs->GetValue(_T("hce_connubial"), m_szConnubial);
		m_rs->GetValue(_T("hce_siblings"), m_szSiblings);

		m_rs->GetValue(_T("hce_height"), m_nHeight);
		m_rs->GetValue(_T("hce_weight"), m_nWeight);
		m_rs->GetValue(_T("hce_chest"), m_nChest);
		m_rs->GetValue(_T("hce_bmi"), m_nBMI);

		m_rs->GetValue(_T("hce_body"), m_szBody);
		m_rs->GetValue(_T("hce_breathing"), m_szBreathing);

		m_rs->GetValue(_T("hce_pulse"), m_nPulse);
		m_rs->GetValue(_T("hce_bloodpressure"), m_szBloodPressure);

		m_rs->GetValue(_T("hce_circulation"), m_szCirculation);
		m_rs->GetValue(_T("hce_digestion"), m_szDigestion);

		m_rs->GetValue(_T("hce_urinary"), m_szGenitalUrinary);
		m_rs->GetValue(_T("hce_nerve"), m_szMentalNerve);
		m_rs->GetValue(_T("hce_bone"), m_szBone);

		m_rs->GetValue(_T("hce_endocrine"), m_szEndocrine);
		m_rs->GetValue(_T("hce_other_part"), m_szOtherPart);

		m_rs->GetValue(_T("hce_ent"), m_szENT);
		m_rs->GetValue(_T("hce_tcf"), m_szTCF);
		m_rs->GetValue(_T("hce_eye"), m_szEye);

		m_rs->GetValue(_T("hce_doctor1"), m_szDoctor1Key);
		m_rs->GetValue(_T("hce_doctor2"), m_szDoctor2Key);
		m_rs->GetValue(_T("hce_doctor3"), m_szDoctor3Key);
		m_rs->GetValue(_T("hce_doctor4"), m_szDoctor4Key);

		m_rs->GetValue(_T("isexist"), tmpStr);
		if (tmpStr == _T("Y"))
		{
			m_bIsInsert = false;
		}
		else
		{
			m_bIsInsert = true;
		}

		m_rs->GetValue(_T("hce_status"), tmpStr);
		if (tmpStr == _T("T"))
			m_bIsTerminated = true;
		else
			m_bIsTerminated = false;

		SetMode(VM_VIEW);
	}
	else
	{
		m_bIsInsert = true;
		SetMode(VM_NONE);
	}
}

void CHMSCommanderExamine::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_commander_exam_Tbl.SetValue(_T("hce_createdby"), pMF->GetCurrentUser());
	m_hms_commander_exam_Tbl.SetValue(_T("hce_createddate"), pMF->GetSysDateTime());
	m_hms_commander_exam_Tbl.SetValue(_T("hce_updatedby"), pMF->GetCurrentUser());
	m_hms_commander_exam_Tbl.SetValue(_T("hce_updateddate"), pMF->GetSysDateTime());

	m_hms_commander_exam_Tbl.SetValue(_T("hce_idx"), 0);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_docno"), m_nDocumentNo);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_bloodtype"), m_szBloodTypeKey);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_drugfood_allergy"), m_szDrugAllergy);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_chronic_disease"), m_szChronicDisease);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_operation"), m_szOperation);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_smoke"), m_szSmoking);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_smokeqty"), m_nSmokeQuantity);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_drink"), m_szDrink);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_other_habit"), m_szOtherHabit);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_father"), m_szFather);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_mother"), m_szMother);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_connubial"), m_szConnubial);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_siblings"), m_szSiblings);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_height"), m_nHeight);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_weight"), m_nWeight);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_chest"), m_nChest);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_bmi"), m_nBMI);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_body"), m_szBody);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_breathing"), m_szBreathing);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_pulse"), m_nPulse);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_bloodpressure"), m_szBloodPressure);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_circulation"), m_szCirculation);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_digestion"), m_szDigestion);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_urinary"), m_szGenitalUrinary);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_nerve"), m_szMentalNerve);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_bone"), m_szBone);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_endocrine"), m_szEndocrine);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_other_part"), m_szOtherPart);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_ent"), m_szENT);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_tcf"), m_szTCF);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_eye"), m_szEye);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_doctor1"), m_szDoctor1Key);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_doctor2"), m_szDoctor2Key);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_doctor3"), m_szDoctor3Key);
	m_hms_commander_exam_Tbl.SetValue(_T("hce_doctor4"), m_szDoctor4Key);

	m_hms_commander_exam_Tbl.SetValue(_T("hce_status"), _T("O"));
}
void CHMSCommanderExamine::SetDefaultValues()
{
	m_nPatientNo=0;
	//m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szObject.Empty();
	m_szBloodTypeKey.Empty();
	m_szDrugAllergy.Empty();
	m_szChronicDisease.Empty();
	m_szOperation.Empty();
	m_szSmoking.Empty();
	m_nSmokeQuantity=0;
	m_szDrink.Empty();
	m_szOtherHabit.Empty();
	m_szFather.Empty();
	m_szMother.Empty();
	m_szConnubial.Empty();
	m_szSiblings.Empty();
	m_nHeight=0;
	m_nWeight=0;
	m_nChest=0;
	m_nBMI=0;
	m_szBody.Empty();
	m_szBreathing.Empty();
	m_nPulse=0;
	m_szBloodPressure.Empty();
	m_szCirculation.Empty();
	m_szDigestion.Empty();
	m_szGenitalUrinary.Empty();
	m_szMentalNerve.Empty();
	m_szBone.Empty();
	m_szEndocrine.Empty();
	m_szOtherPart.Empty();
	m_szENT.Empty();
	m_szTCF.Empty();
	m_szEye.Empty();
	m_szDoctor1Key.Empty();
	m_szDoctor2Key.Empty();
	m_szDoctor3Key.Empty();
	m_szDoctor4Key.Empty();

}
int CHMSCommanderExamine::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndPatientNo.EnableWindow(FALSE);
			m_wndPatientName.EnableWindow(FALSE);
			m_wndAge.EnableWindow(FALSE);
			m_wndSex.EnableWindow(FALSE);
			m_wndObject.EnableWindow(FALSE);

			m_wndBloodType.SetFocus();
			m_wndBloodType.SetEditSel(0, -1);

			if (m_bIsInsert)
				m_szDoctor1Key = pMF->GetCurrentUser();

 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 2, 5, -1);

			m_wndDocumentNo.EnableWindow(TRUE);

			if (m_bIsInsert)
			{
				m_wndDelete.EnableWindow(FALSE);
				m_wndConclusion.EnableWindow(FALSE);
				m_wndPrint.EnableWindow(FALSE);
			}

			if (m_bIsTerminated)
			{
				m_wndUpdate.EnableWindow(FALSE);
				m_wndDelete.EnableWindow(FALSE);
			}

			m_wndUpdate.SetFocus();

 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, -1);
 			SetDefaultValues();
			m_wndDocumentNo.EnableWindow(TRUE);
			m_wndDocumentNo.SetFocus();
			m_wndDocumentNo.SetSel(m_wndDocumentNo.GetWindowTextLength(),
				                   m_wndDocumentNo.GetWindowTextLength());
 			break;
 		};

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCommanderExamine::OnPatientNoChange(){
	
} */
/*void CHMSCommanderExamine::OnPatientNoSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnPatientNoKillfocus(){
	
} */
int CHMSCommanderExamine::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnDocumentNoChange(){
	
} */
/*void CHMSCommanderExamine::OnDocumentNoSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnDocumentNoKillfocus(){
	
} */
int CHMSCommanderExamine::OnDocumentNoCheckValue()
{
	UpdateData(TRUE);
	GetDataToScreen();

	if (m_wndDocumentNo.GetWindowTextLength() > 4)
	{
		//m_wndDocumentNo.SetFocus();
		//m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
	}
	return 1;
} 
/*void CHMSCommanderExamine::OnPatientNameChange(){
	
} */
/*void CHMSCommanderExamine::OnPatientNameSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnPatientNameKillfocus(){
	
} */
int CHMSCommanderExamine::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnAgeChange(){
	
} */
/*void CHMSCommanderExamine::OnAgeSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnAgeKillfocus(){
	
} */
int CHMSCommanderExamine::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnSexChange(){
	
} */
/*void CHMSCommanderExamine::OnSexSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnSexKillfocus(){
	
} */
int CHMSCommanderExamine::OnSexCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnObjectChange(){
	
} */
/*void CHMSCommanderExamine::OnObjectSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnObjectKillfocus(){
	
} */
int CHMSCommanderExamine::OnObjectCheckValue(){
	return 0;
} 
void CHMSCommanderExamine::OnBloodTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCommanderExamine::OnBloodTypeSelendok(){
	 
}
/*void CHMSCommanderExamine::OnBloodTypeSetfocus(){
	
}*/
/*void CHMSCommanderExamine::OnBloodTypeKillfocus(){
	
}*/
long CHMSCommanderExamine::OnBloodTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndBloodType.IsSearchKey() && !m_szBloodTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szBloodTypeKey);
	}

	m_wndBloodType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ") \
		         _T("ss_desc as name ") \
				 _T("FROM sys_sel ") \
				 _T("WHERE 1=1 AND ss_id='hms_blood_type' %s ") \
				 _T("ORDER BY cast(ss_code as integer)"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBloodType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCommanderExamine::OnBloodTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCommanderExamine::OnDrugAllergyChange(){
	
} */
/*void CHMSCommanderExamine::OnDrugAllergySetfocus(){
	
} */
/*void CHMSCommanderExamine::OnDrugAllergyKillfocus(){
	
} */
int CHMSCommanderExamine::OnDrugAllergyCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnChronicDiseaseChange(){
	
} */
/*void CHMSCommanderExamine::OnChronicDiseaseSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnChronicDiseaseKillfocus(){
	
} */
int CHMSCommanderExamine::OnChronicDiseaseCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnOperationChange(){
	
} */
/*void CHMSCommanderExamine::OnOperationSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnOperationKillfocus(){
	
} */
int CHMSCommanderExamine::OnOperationCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnSmokingChange(){
	
} */
/*void CHMSCommanderExamine::OnSmokingSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnSmokingKillfocus(){
	
} */
int CHMSCommanderExamine::OnSmokingCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnSmokeQuantityChange(){
	
} */
/*void CHMSCommanderExamine::OnSmokeQuantitySetfocus(){
	
} */
/*void CHMSCommanderExamine::OnSmokeQuantityKillfocus(){
	
} */
int CHMSCommanderExamine::OnSmokeQuantityCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnDrinkChange(){
	
} */
/*void CHMSCommanderExamine::OnDrinkSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnDrinkKillfocus(){
	
} */
int CHMSCommanderExamine::OnDrinkCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnOtherHabitChange(){
	
} */
/*void CHMSCommanderExamine::OnOtherHabitSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnOtherHabitKillfocus(){
	
} */
int CHMSCommanderExamine::OnOtherHabitCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnFatherChange(){
	
} */
/*void CHMSCommanderExamine::OnFatherSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnFatherKillfocus(){
	
} */
int CHMSCommanderExamine::OnFatherCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnMotherChange(){
	
} */
/*void CHMSCommanderExamine::OnMotherSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnMotherKillfocus(){
	
} */
int CHMSCommanderExamine::OnMotherCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnConnubialChange(){
	
} */
/*void CHMSCommanderExamine::OnConnubialSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnConnubialKillfocus(){
	
} */
int CHMSCommanderExamine::OnConnubialCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnSiblingsChange(){
	
} */
/*void CHMSCommanderExamine::OnSiblingsSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnSiblingsKillfocus(){
	
} */
int CHMSCommanderExamine::OnSiblingsCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnHeightChange(){
	
} */
/*void CHMSCommanderExamine::OnHeightSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnHeightKillfocus(){
	
} */
int CHMSCommanderExamine::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnWeightChange(){
	
} */
/*void CHMSCommanderExamine::OnWeightSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnWeightKillfocus(){
	
} */
int CHMSCommanderExamine::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnChestChange(){
	
} */
/*void CHMSCommanderExamine::OnChestSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnChestKillfocus(){
	
} */
int CHMSCommanderExamine::OnChestCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnBMIChange(){
	
} */
/*void CHMSCommanderExamine::OnBMISetfocus(){
	
} */
/*void CHMSCommanderExamine::OnBMIKillfocus(){
	
} */
int CHMSCommanderExamine::OnBMICheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnBodyChange(){
	
} */
/*void CHMSCommanderExamine::OnBodySetfocus(){
	
} */
/*void CHMSCommanderExamine::OnBodyKillfocus(){
	
} */
int CHMSCommanderExamine::OnBodyCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnBreathingChange(){
	
} */
/*void CHMSCommanderExamine::OnBreathingSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnBreathingKillfocus(){
	
} */
int CHMSCommanderExamine::OnBreathingCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnPulseChange(){
	
} */
/*void CHMSCommanderExamine::OnPulseSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnPulseKillfocus(){
	
} */
int CHMSCommanderExamine::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnBloodPressureChange(){
	
} */
/*void CHMSCommanderExamine::OnBloodPressureSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnBloodPressureKillfocus(){
	
} */
int CHMSCommanderExamine::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnCirculationChange(){
	
} */
/*void CHMSCommanderExamine::OnCirculationSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnCirculationKillfocus(){
	
} */
int CHMSCommanderExamine::OnCirculationCheckValue(){
	return 0;
}
/*void CHMSCommanderExamine::OnDigestionChange(){
	
} */
/*void CHMSCommanderExamine::OnDigestionSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnDigestionKillfocus(){
	
} */
int CHMSCommanderExamine::OnDigestionCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnGenitalUrinaryChange(){
	
} */
/*void CHMSCommanderExamine::OnGenitalUrinarySetfocus(){
	
} */
/*void CHMSCommanderExamine::OnGenitalUrinaryKillfocus(){
	
} */
int CHMSCommanderExamine::OnGenitalUrinaryCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnMentalNerveChange(){
	
} */
/*void CHMSCommanderExamine::OnMentalNerveSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnMentalNerveKillfocus(){
	
} */
int CHMSCommanderExamine::OnMentalNerveCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnBoneChange(){
	
} */
/*void CHMSCommanderExamine::OnBoneSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnBoneKillfocus(){
	
} */
int CHMSCommanderExamine::OnBoneCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnEndocrineChange(){
	
} */
/*void CHMSCommanderExamine::OnEndocrineSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnEndocrineKillfocus(){
	
} */
int CHMSCommanderExamine::OnEndocrineCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnOtherPartChange(){
	
} */
/*void CHMSCommanderExamine::OnOtherPartSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnOtherPartKillfocus(){
	
} */
int CHMSCommanderExamine::OnOtherPartCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnENTChange(){
	
} */
/*void CHMSCommanderExamine::OnENTSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnENTKillfocus(){
	
} */
int CHMSCommanderExamine::OnENTCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnTCFChange(){
	
} */
/*void CHMSCommanderExamine::OnTCFSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnTCFKillfocus(){
	
} */
int CHMSCommanderExamine::OnTCFCheckValue(){
	return 0;
} 
/*void CHMSCommanderExamine::OnEyeChange(){
	
} */
/*void CHMSCommanderExamine::OnEyeSetfocus(){
	
} */
/*void CHMSCommanderExamine::OnEyeKillfocus(){
	
} */
int CHMSCommanderExamine::OnEyeCheckValue(){
	return 0;
} 
void CHMSCommanderExamine::OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCommanderExamine::OnDoctor1Selendok(){
	 
}
/*void CHMSCommanderExamine::OnDoctor1Setfocus(){
	
}*/
/*void CHMSCommanderExamine::OnDoctor1Killfocus(){
	
}*/
long CHMSCommanderExamine::OnDoctor1LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDoctor1.IsSearchKey() && !m_szDoctor1Key.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor1Key);
	}

	m_wndDoctor1.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KD','HC') %s") \
				_T(" ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCommanderExamine::OnDoctor1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCommanderExamine::OnDoctor2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCommanderExamine::OnDoctor2Selendok(){
	 
}
/*void CHMSCommanderExamine::OnDoctor2Setfocus(){
	
}*/
/*void CHMSCommanderExamine::OnDoctor2Killfocus(){
	
}*/
long CHMSCommanderExamine::OnDoctor2LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDoctor2.IsSearchKey() && !m_szDoctor2Key.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor2Key);
	}

	m_wndDoctor2.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KD','HC') %s") \
				_T(" ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCommanderExamine::OnDoctor2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCommanderExamine::OnDoctor3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCommanderExamine::OnDoctor3Selendok(){
	 
}
/*void CHMSCommanderExamine::OnDoctor3Setfocus(){
	
}*/
/*void CHMSCommanderExamine::OnDoctor3Killfocus(){
	
}*/
long CHMSCommanderExamine::OnDoctor3LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDoctor3.IsSearchKey() && !m_szDoctor3Key.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor3Key);
	}

	m_wndDoctor3.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KD','HC') %s") \
				_T(" ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCommanderExamine::OnDoctor3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCommanderExamine::OnDoctor4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCommanderExamine::OnDoctor4Selendok(){
	 
}
/*void CHMSCommanderExamine::OnDoctor4Setfocus(){
	
}*/
/*void CHMSCommanderExamine::OnDoctor4Killfocus(){
	
}*/
long CHMSCommanderExamine::OnDoctor4LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDoctor4.IsSearchKey() && !m_szDoctor4Key.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor4Key);
	}

	m_wndDoctor4.DeleteAllItems();

	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KD','HC') %s") \
				_T(" ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCommanderExamine::OnDoctor4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCommanderExamine::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSCommanderExamine();
} 
void CHMSCommanderExamine::OnConclusionSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(TRUE);
	
	if (m_nDocumentNo <= 0 || m_bIsInsert)
		return;

	CHMSDiseaseConclusionDialog dlg(this);
	dlg.SetMode(VM_EDIT);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.m_nIdx = m_nIdx;

	if (dlg.DoModal() == IDOK)
	{
		m_bIsTerminated = dlg.m_bIsTerminated;
		SetMode(VM_VIEW);
	}
} 
void CHMSCommanderExamine::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSCommanderExamine();
} 
void CHMSCommanderExamine::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCommanderExamine();
} 
void CHMSCommanderExamine::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSCommanderExamine();
}
void CHMSCommanderExamine::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	if (m_nDocumentNo <= 0)
		return;

    OnPrint3(m_nDocumentNo);
	OnPrint2(m_nDocumentNo);
	OnPrint1(m_nDocumentNo);
}

void CHMSCommanderExamine::OnPrint1(long nDocumentNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szDate;

	static CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/KHAMSK1.RPT")))
		return;

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hd_patientno as patientno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hp_birthdate as birthdate,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        hp_sex,") \
				_T("        get_syssel_desc('sys_sex', hp_sex) as sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        nvl(hd_dtladdr, hp_dtladdr) as dtladdr,") \
				_T("        get_syssel_desc('sys_occupation', hp_occupation) as occupation,") \
				_T("        get_syssel_desc('hms_rank', hp_rank) as rank,") \
				_T("        get_syssel_desc('hms_position', hp_position) as position,") \
				_T("        ho_desc as objname,") \
				_T("        ho_type as objtype,") \
				_T("        hcr_recordno as recordno,") \
				_T("        get_syssel_desc('hms_blood_type', hce_bloodtype) as bloodtype,") \
				_T("        hms_commander_exam.*") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_commander_exam on(hce_docno=hd_docno)") \
				_T(" where hce_docno=%ld"), m_nDocumentNo);

	m_rs->ExecSQL(szSQL);

	if (m_rs->IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CReportSection* rptDetail = NULL;

	CDate date;
	date.ParseDate(pMF->GetSysDate());

	
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	tmpStr = rpt.GetReportHeader()->GetValue(_T("Year"));
	szDate.Format(tmpStr, int2str(date.GetYear()));
	rpt.GetReportHeader()->SetValue(_T("Year"), szDate);

	m_rs->GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocNo"), tmpStr);

	m_rs->GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);

	m_rs->GetValue(_T("pname"), tmpStr);
	StringUpper(tmpStr, szTemp);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), szTemp);

	m_rs->GetValue(_T("bloodtype"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Blood"), tmpStr);

	m_rs->GetValue(_T("hp_sex"), tmpStr);
	if (tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("F"), _T("X"));
	else if (tmpStr == _T("M"))
		rpt.GetReportHeader()->SetValue(_T("M"), _T("X"));

	m_rs->GetValue(_T("birthdate"), tmpStr);
	//date.ParseDate(tmpStr);
	//szTemp.Format(_T("%d"), date.GetYear());
	szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), szTemp);

	m_rs->GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("hokhau"), tmpStr);

	m_rs->GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

	m_rs->GetValue(_T("occupation"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Occupation"), tmpStr);

	m_rs->GetValue(_T("position"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("chucvu"), tmpStr);

	m_rs->GetValue(_T("hce_drugfood_allergy"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diungthuoc"), tmpStr);

	m_rs->GetValue(_T("hce_chronic_disease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("benhmantinh"), tmpStr);

	m_rs->GetValue(_T("hce_operation"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("pttt"), tmpStr);

	m_rs->GetValue(_T("hce_smoke"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("smoking"), tmpStr);

	m_rs->GetValue(_T("hce_smokeqty"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("numbersmoke"), tmpStr);

	m_rs->GetValue(_T("hce_drink"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("alcohol"), tmpStr);

	m_rs->GetValue(_T("hce_other_habit"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("other"), tmpStr);

	m_rs->GetValue(_T("hce_father"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("father"), tmpStr);

	m_rs->GetValue(_T("hce_mother"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("mother"), tmpStr);

	m_rs->GetValue(_T("hce_connubial"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("vochong"), tmpStr);

	m_rs->GetValue(_T("hce_siblings"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("anhem"), tmpStr);

	m_rs->GetValue(_T("hce_height"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("chieucao"), tmpStr);

	m_rs->GetValue(_T("hce_weight"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("cannang"), tmpStr);

	m_rs->GetValue(_T("hce_chest"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("vongnguc"), tmpStr);

	m_rs->GetValue(_T("hce_bmi"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("bmi"), tmpStr);

	m_rs->GetValue(_T("hce_body"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("body"), tmpStr);


	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void CHMSCommanderExamine::OnPrint2(long nDocumentNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	if (m_rs->IsEOF())
		return;

	static CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/KHAMSK2.RPT")))
		return;

	CReportSection* rptDetail = NULL;

	m_rs->GetValue(_T("hce_breathing"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("hohap"), tmpStr);

	m_rs->GetValue(_T("hce_pulse"), tmpStr);
	if (str2float(tmpStr) > 0)
		rpt.GetReportHeader()->SetValue(_T("mach"), tmpStr);

	m_rs->GetValue(_T("hce_bloodpressure"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("huyetap"), tmpStr);

	m_rs->GetValue(_T("hce_circulation"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("tuanhoan"), tmpStr);

	m_rs->GetValue(_T("hce_digestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("tieuhoa"), tmpStr);

	m_rs->GetValue(_T("hce_urinary"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sinhduc"), tmpStr);

	m_rs->GetValue(_T("hce_nerve"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("thankinh"), tmpStr);

	m_rs->GetValue(_T("hce_bone"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("coxuong"), tmpStr);

	m_rs->GetValue(_T("hce_endocrine"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("noitiet"), tmpStr);

	m_rs->GetValue(_T("hce_other_part"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cacbophan"), tmpStr);

	m_rs->GetValue(_T("hce_ent"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("taimuihong"), tmpStr);

	m_rs->GetValue(_T("hce_doctor1"), tmpStr);
	if (!tmpStr.IsEmpty())
	{
		CReportItem *img = rpt.GetReportHeader()->GetItem(_T("Signature1"));
		if (img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}
		rpt.GetReportHeader()->SetValue(_T("DoctorName1"), pMF->GetDoctorName(tmpStr));
	}

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void CHMSCommanderExamine::OnPrint3(long nDocumentNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szSex;

	if (m_rs->IsEOF())
		return;

	static CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/KHAMSK3.RPT")))
		return;

	CReportSection* detail = NULL;
	CReportSection* grp = NULL;
	CReportSection* grpt2 = NULL;

	m_rs->GetValue(_T("hp_sex"), szSex);

	m_rs->GetValue(_T("hce_tcf"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ranghammat"), tmpStr);

	m_rs->GetValue(_T("hce_eye"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("eye"), tmpStr);

	m_rs->GetValue(_T("hce_doctor2"), tmpStr);
	if (!tmpStr.IsEmpty())
	{
		CReportItem *img = rpt.GetReportHeader()->GetItem(_T("Signature2"));
		if (img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}
		rpt.GetReportHeader()->SetValue(_T("DoctorName2"), pMF->GetDoctorName(tmpStr));
	}

	m_rs->GetValue(_T("hce_doctor3"), tmpStr);
	if (!tmpStr.IsEmpty())
	{
		CReportItem *img = rpt.GetReportHeader()->GetItem(_T("Signature3"));
		if (img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}
		rpt.GetReportHeader()->SetValue(_T("DoctorName3"), pMF->GetDoctorName(tmpStr));
	}

	m_rs->GetValue(_T("hce_doctor4"), tmpStr);
	if (!tmpStr.IsEmpty())
	{
		CReportItem *img = rpt.GetReportHeader()->GetItem(_T("Signature4"));
		if (img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}
		rpt.GetReportHeader()->SetValue(_T("DoctorName4"), pMF->GetDoctorName(tmpStr));
	}

	int nLine = 0;
	int nIndex = 1;

	szSQL.Format(_T(" SELECT distinct hfg_name as groupname,") \
				_T("        hfg_id as groupid,") \
				_T("        hpc_status,") \
				_T("        hfg_index") \
				_T(" FROM hms_testorder") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid)") \
				_T(" WHERE hpc_docno=%ld and hpc_status<>'O'") \
				_T(" ORDER BY hfg_index"), m_nDocumentNo);

	rs.ExecSQL(szSQL);

	//int lineIdx = -1;
	CString szOrderStatus;
	CString szFNorm, szMNorm, szUnit;

	if (!rs.IsEOF())
	{
		grp = rpt.GetGroupHeader(1);
		detail = rpt.AddDetail(grp);

		grp = rpt.GetGroupHeader(2);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. \x58\xE9t nghi\x1EC7m"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);

		nLine = 1;
	
		while (!rs.IsEOF())
		{
			tmpStr.Format(_T(" * %s"), rs.GetValue(_T("groupname")));
			grp = rpt.GetGroupHeader(2);
			detail = rpt.AddDetail(grp);
			detail->GetItem(0)->SetStyle(REPORT_BORDER);

			rs.GetValue(_T("hpc_status"), szOrderStatus);				
			detail->SetValue(_T("OrderName"), tmpStr);

			szSQL.Format(_T(" SELECT hfl_groupid as groupid,") \
						_T("        hfl_name as name,") \
						_T("        hfl_unit as unit,") \
						_T("        hfl_index1 as fnorm,") \
						_T("        hfl_index2 as mnorm,") \
						_T("        hpcl_result as result,") \
						_T("        hpcl_note as note") \
						_T(" FROM hms_testorder") \
						_T(" LEFT JOIN hms_testorderline ON(hpcl_orderid=hpc_orderid)") \
						_T(" LEFT JOIN hms_fee_list ON(hfl_groupid=hpc_groupid AND hpcl_itemid=hfl_feeid)") \
						_T(" WHERE hpc_docno=%ld AND hpc_groupid='%s'") \
						_T(" ORDER BY hfl_groupid, hpcl_orderlineid"),
						m_nDocumentNo, rs.GetValue(_T("groupid")));

			nLine = 1;
			rss.ExecSQL(szSQL);
			
			while (!rss.IsEOF())
			{
				grp = rpt.GetGroupHeader(4);
				detail = rpt.AddDetail(grp);

				tmpStr.Format(_T("%d"), nLine++);
				detail->SetValue(_T("Col1"), tmpStr);

				rss.GetValue(_T("fnorm"), szFNorm);
				rss.GetValue(_T("mnorm"), szMNorm);
				rss.GetValue(_T("unit"), szUnit);


				if (szFNorm.Trim().GetLength() + szMNorm.Trim().GetLength() == 0)
					tmpStr.Empty();
				else
				{
					if (szSex == _T("F"))
						tmpStr.Format(_T("%s"), rss.GetValue(_T("fnorm")));
					else
						tmpStr.Format(_T("%s"), rss.GetValue(_T("mnorm")));
				}


				detail->SetValue(_T("Col4"), tmpStr);
				detail->SetValue(_T("Col2"), rss.GetValue(_T("name")));
				detail->SetValue(_T("Col3"), szUnit);		
				
				if (szOrderStatus == _T("T"))
				{
					detail->SetValue(_T("Col5"), rss.GetValue(_T("result")));
				}

				rss.MoveNext();
			}

			rs.MoveNext();
		}
	}

	CString szSummaryResult;
	CString szResult, szRemark, szConclusion;
	szSummaryResult.Empty();
	
	szSQL.Format(_T(" SELECT hpc_orderid,") \
				_T("         hfg_id as groupid,") \
				_T("         hpcl_note as note,") \
				_T("         hfl_name as ordername,") \
				_T("         Tbl.hpr_desc as result") \
				_T("  FROM hms_pacsorder") \
				_T("  LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
				_T("  LEFT JOIN") \
				_T("  (") \
				_T("     SELECT * FROM hms_pacs_result") \
				_T("     WHERE lower(trim(hpr_name))='conclusion'") \
				_T("  ) Tbl ON(Tbl.hpr_orderid=hpcl_orderid AND Tbl.hpr_itemid=hpcl_itemid)") \
				_T("  LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid)") \
				_T("  LEFT JOIN hms_fee_list ON(hfl_groupid=hpc_groupid AND hfl_feeid=hpcl_itemid)") \
				_T("  WHERE hpc_docno=%ld AND hpc_status<>'O' AND substr(hfg_id, 1, 2)='B2'") \
				_T("  ORDER by hpc_orderid, hfg_id"), m_nDocumentNo);

	//_debug(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	
	szRemark.Empty();
	szConclusion.Empty();

	grp = rpt.GetGroupHeader(2);
	grpt2 = rpt.GetGroupHeader(3);

	if (!rs.IsEOF())
	{
		grp = rpt.GetGroupHeader(2);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. \x43h\x1EA9n \x111o\xE1n h\xECnh \x1EA3nh"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);
	}
	

	while (!rs.IsEOF())
	{
		szResult.Empty();

		detail = rpt.AddDetail(grp);

		tmpStr.Format(_T(" * %s"), rs.GetValue(_T("ordername")));
		detail->SetValue(_T("OrderName"), tmpStr);

		rs.GetValue(_T("result"), szResult);

		if (!szResult.IsEmpty())
		{
			detail = rpt.AddDetail(grpt2);

			detail->SetValue(_T("TestResult"), szResult);

			if (!szSummaryResult.IsEmpty())
			{
				szSummaryResult.AppendFormat(_T("\r\n"));
			}
			szSummaryResult.AppendFormat(_T("+ %s: %s"), rs.GetValue(_T("ordername")), szResult);
		}
		rs.MoveNext();
	}

	szSQL.Format(_T(" SELECT hpc_orderid,") \
				_T("         hfg_id as groupid,") \
				_T("         hpcl_note as note,") \
				_T("         hfl_name as ordername,") \
				_T("         Tbl.hpr_desc as result") \
				_T("  FROM hms_pacsorder") \
				_T("  LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
				_T("  LEFT JOIN") \
				_T("  (") \
				_T("     SELECT * FROM hms_pacs_result") \
				_T("     WHERE lower(trim(hpr_name))='conclusion'") \
				_T("  ) Tbl ON(Tbl.hpr_orderid=hpcl_orderid AND Tbl.hpr_itemid=hpcl_itemid)") \
				_T("  LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid)") \
				_T("  LEFT JOIN hms_fee_list ON(hfl_groupid=hpc_groupid AND hfl_feeid=hpcl_itemid)") \
				_T("  WHERE hpc_docno=%ld AND hpc_status<>'O' AND substr(hfg_id, 1, 2)='B3'") \
				_T("  ORDER by hpc_orderid, hfg_id"), nDocumentNo);

	rs.ExecSQL(szSQL);

	grp = rpt.GetGroupHeader(2);
	grpt2 = rpt.GetGroupHeader(3);
	
	szRemark.Empty();
	szConclusion.Empty();

	if (!rs.IsEOF())
	{
		grp = rpt.GetGroupHeader(2);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. Th\x103m \x64\xF2 \x63h\x1EE9\x63 n\x103ng"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);
	}


	while (!rs.IsEOF())
	{
		szResult.Empty();

		detail = rpt.AddDetail(grp);
		tmpStr.Format(_T(" * %s"), rs.GetValue(_T("ordername")));
		detail->SetValue(_T("OrderName"), tmpStr);

		rs.GetValue(_T("result"), szResult);

		if (!szResult.IsEmpty())
		{
			detail = rpt.AddDetail(grpt2);
			detail->SetValue(_T("TestResult"), szResult);

			if (!szSummaryResult.IsEmpty())
			{
				szSummaryResult.AppendFormat(_T("\r\n"));
			}
			szSummaryResult.AppendFormat(_T("+ %s: %s"), rs.GetValue(_T("ordername")), szResult);
		}
		rs.MoveNext();
	}

	szSQL.Format(_T("SELECT * FROM hms_commander_exam WHERE hce_docno=%ld"), m_nDocumentNo);
	rss.ExecSQL(szSQL);

	if (!rss.IsEOF())
	{
		rss.GetValue(_T("hce_health_rank"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("xeploaisuckhoe"), tmpStr);

		rss.GetValue(_T("hce_tracking_disease"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("cacbenhcantheodoi"), tmpStr);

		rss.GetValue(_T("hce_other_issue"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("cacvandeluuy"), tmpStr);
	}

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

int CHMSCommanderExamine::OnAddHMSCommanderExamine()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCommanderExamine::OnEditHMSCommanderExamine()
{
 	if (GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;
}
int CHMSCommanderExamine::OnDeleteHMSCommanderExamine()
{
 	if (GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	if (m_bIsTerminated)
	{
		ShowMessageBox(_T("Tr\x1EA1ng th\xE1i h\x1ED3 s\x1A1 kh\xE1m \x111\xE3 k\x1EBFt th\xFA\x63. Kh\xF4ng th\x1EC3 \x78\xF3\x61!"),
			           MB_ICONERROR | MB_OK);
		return -1;
	}

 	if (ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM hms_commander_exam WHERE hce_docno=%ld"), m_nDocumentNo);
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret >= 0)
	{
		GetDataToScreen();
 	}
	return 0;
}
int CHMSCommanderExamine::OnSaveHMSCommanderExamine()
{
 	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;

	if (m_nDocumentNo <= 0)
		return -1;

 	if (!IsValidateData())
 		return -1;

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if (GetMode() == VM_ADD)
	{
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
		if (m_bIsInsert)
		{
			szSQL = m_hms_commander_exam_Tbl.GetInsertSQL();
		}
		else
		{
 			CString szWhere;
			szWhere.Format(_T(" WHERE hce_docno=%ld "), m_nDocumentNo);
 			szSQL = m_hms_commander_exam_Tbl.GetUpdateSQL(_T("hce_createdby, hce_createddate, hce_docno, hce_idx, hce_status"));
 			szSQL += szWhere;
		}
 	}
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret > 0)
 	{
 		//OnHMSCommanderExamineListLoadData();
 		//SetMode(VM_VIEW);
		GetDataToScreen();
 	}
 	else
 	{
 	}
 	return ret;
 	//return 0;
}
int CHMSCommanderExamine::OnCancelHMSCommanderExamine()
{
 	if (GetMode() == VM_EDIT)
 	{
 		//SetMode(VM_VIEW);
		GetDataToScreen();
 	}
 	else
 	{
 		SetMode(VM_NONE);
 	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSCommanderExamine::OnHMSCommanderExamineListLoadData(){
	return 0;
}
