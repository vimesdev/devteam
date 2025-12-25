#include "HMSTreatmentPlanDlg.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNoSetfocus();} */ 
static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNoKillfocus();
}
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocIDChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDocIDChange();
} */
/*static void _OnDocIDSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDocIDSetfocus();} */ 
/*static void _OnDocIDKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDocIDKillfocus();
} */
static int _OnDocIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnDocIDCheckValue();
} 
/*static void _OnDetectTimeChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDetectTimeChange();
} */
/*static void _OnDetectTimeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDetectTimeSetfocus();} */ 
/*static void _OnDetectTimeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDetectTimeKillfocus();
} */
static int _OnDetectTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnDetectTimeCheckValue();
} 
/*static void _OnSymptomChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSymptomChange();
} */
/*static void _OnSymptomSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSymptomSetfocus();} */ 
/*static void _OnSymptomKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSymptomKillfocus();
} */
static int _OnSymptomCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnSymptomCheckValue();
} 
/*static void _OnSurgeryChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSurgeryChange();
} */
/*static void _OnSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSurgerySetfocus();} */ 
/*static void _OnSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSurgeryKillfocus();
} */
static int _OnSurgeryCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnSurgeryCheckValue();
} 
/*static void _OnAdditionSurgeryChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAdditionSurgeryChange();
} */
/*static void _OnAdditionSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAdditionSurgerySetfocus();} */ 
/*static void _OnAdditionSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAdditionSurgeryKillfocus();
} */
static int _OnAdditionSurgeryCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnAdditionSurgeryCheckValue();
} 
/*static void _OnAfterSurgeryChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAfterSurgeryChange();
} */
/*static void _OnAfterSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAfterSurgerySetfocus();} */ 
/*static void _OnAfterSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAfterSurgeryKillfocus();
} */
static int _OnAfterSurgeryCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnAfterSurgeryCheckValue();
} 
/*static void _OnGPBLChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnGPBLChange();
} */
/*static void _OnGPBLSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnGPBLSetfocus();} */ 
/*static void _OnGPBLKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnGPBLKillfocus();
} */
static int _OnGPBLCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnGPBLCheckValue();
} 
/*static void _OnRelapseRiskChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnRelapseRiskChange();
} */
/*static void _OnRelapseRiskSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnRelapseRiskSetfocus();} */ 
/*static void _OnRelapseRiskKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnRelapseRiskKillfocus();
} */
static int _OnRelapseRiskCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnRelapseRiskCheckValue();
} 
/*static void _OnNeckGanglionChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnNeckGanglionChange();
} */
/*static void _OnNeckGanglionSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnNeckGanglionSetfocus();} */ 
/*static void _OnNeckGanglionKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnNeckGanglionKillfocus();
} */
static int _OnNeckGanglionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnNeckGanglionCheckValue();
} 
/*static void _OnDiseaseCombineChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiseaseCombineChange();
} */
/*static void _OnDiseaseCombineSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiseaseCombineSetfocus();} */ 
/*static void _OnDiseaseCombineKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiseaseCombineKillfocus();
} */
static int _OnDiseaseCombineCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnDiseaseCombineCheckValue();
} 
/*static void _OnUsingDrugChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUsingDrugChange();
} */
/*static void _OnUsingDrugSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUsingDrugSetfocus();} */ 
/*static void _OnUsingDrugKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUsingDrugKillfocus();
} */
static int _OnUsingDrugCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnUsingDrugCheckValue();
} 
static void _OnFamilySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPlanDlg* )pWnd)->OnFamilySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFamilySelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnFamilySelendok();
}
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnFamilyKillfocus();
}*/
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnFamilyKillfocus();
}*/
static long _OnFamilyLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnFamilyLoadData();
}
/*static void _OnFamilyAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnFamilyAddNew();
}*/
/*static void _OnCQKhacChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCQKhacChange();
} */
/*static void _OnCQKhacSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCQKhacSetfocus();} */ 
/*static void _OnCQKhacKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCQKhacKillfocus();
} */
static int _OnCQKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnCQKhacCheckValue();
} 
/*static void _OnTSHChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTSHChange();
} */
/*static void _OnTSHSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTSHSetfocus();} */ 
/*static void _OnTSHKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTSHKillfocus();
} */
static int _OnTSHCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTSHCheckValue();
} 
/*static void _OnCanxiChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCanxiChange();
} */
/*static void _OnCanxiSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCanxiSetfocus();} */ 
/*static void _OnCanxiKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnCanxiKillfocus();
} */
static int _OnCanxiCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnCanxiCheckValue();
} 
/*static void _OnKaliChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnKaliChange();
} */
/*static void _OnKaliSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnKaliSetfocus();} */ 
/*static void _OnKaliKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnKaliKillfocus();
} */
static int _OnKaliCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnKaliCheckValue();
} 
/*static void _OnTestThaiChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTestThaiChange();
} */
/*static void _OnTestThaiSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTestThaiSetfocus();} */ 
/*static void _OnTestThaiKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTestThaiKillfocus();
} */
static int _OnTestThaiCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTestThaiCheckValue();
} 
/*static void _OnTgATgChangeChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgATgChangeChange();
} */
/*static void _OnTgATgChangeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgATgChangeSetfocus();} */ 
/*static void _OnTgATgChangeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgATgChangeKillfocus();
} */
static int _OnTgATgChangeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTgATgChangeCheckValue();
} 
/*static void _OnSideEffectChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSideEffectChange();
} */
/*static void _OnSideEffectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSideEffectSetfocus();} */ 
/*static void _OnSideEffectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnSideEffectKillfocus();
} */
static int _OnSideEffectCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnSideEffectCheckValue();
} 
/*static void _OnTgChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgChange();
} */
/*static void _OnTgSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgSetfocus();} */ 
/*static void _OnTgKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTgKillfocus();
} */
static int _OnTgCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTgCheckValue();
} 
/*static void _OnATgChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnATgChange();
} */
/*static void _OnATgSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnATgSetfocus();} */ 
/*static void _OnATgKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnATgKillfocus();
} */
static int _OnATgCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnATgCheckValue();
} 
/*static void _OnDoseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDoseChange();
} */
/*static void _OnDoseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDoseSetfocus();} */ 
/*static void _OnDoseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDoseKillfocus();
} */
static int _OnDoseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnDoseCheckValue();
} 
/*static void _OnTimeChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTimeChange();
} */
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTimeSetfocus();} */ 
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTimeKillfocus();
} */
static int _OnTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTimeCheckValue();
} 
static void _OnOBloodChemistrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPlanDlg* )pWnd)->OnOBloodChemistrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOBloodChemistrySelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnOBloodChemistrySelendok();
}
/*static void _OnOBloodChemistrySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnOBloodChemistryKillfocus();
}*/
/*static void _OnOBloodChemistryKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnOBloodChemistryKillfocus();
}*/
static long _OnOBloodChemistryLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnOBloodChemistryLoadData();
}
/*static void _OnOBloodChemistryAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnOBloodChemistryAddNew();
}*/
/*static void _OnBloodWeirdoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodWeirdoChange();
} */
/*static void _OnBloodWeirdoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodWeirdoSetfocus();} */ 
/*static void _OnBloodWeirdoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodWeirdoKillfocus();
} */
static int _OnBloodWeirdoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnBloodWeirdoCheckValue();
} 
static void _OnBloodFormulaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPlanDlg* )pWnd)->OnBloodFormulaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBloodFormulaSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodFormulaSelendok();
}
/*static void _OnBloodFormulaSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodFormulaKillfocus();
}*/
/*static void _OnBloodFormulaKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodFormulaKillfocus();
}*/
static long _OnBloodFormulaLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnBloodFormulaLoadData();
}
/*static void _OnBloodFormulaAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBloodFormulaAddNew();
}*/
/*static void _OnUltraSonicNeckChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicNeckChange();
} */
/*static void _OnUltraSonicNeckSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicNeckSetfocus();} */ 
/*static void _OnUltraSonicNeckKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicNeckKillfocus();
} */
static int _OnUltraSonicNeckCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicNeckCheckValue();
} 
/*static void _OnUltraSonicAbdomenChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicAbdomenChange();
} */
/*static void _OnUltraSonicAbdomenSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicAbdomenSetfocus();} */ 
/*static void _OnUltraSonicAbdomenKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicAbdomenKillfocus();
} */
static int _OnUltraSonicAbdomenCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnUltraSonicAbdomenCheckValue();
} 
/*static void _OnIATSpotChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATSpotChange();
} */
/*static void _OnIATSpotSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATSpotSetfocus();} */ 
/*static void _OnIATSpotKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATSpotKillfocus();
} */
static int _OnIATSpotCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnIATSpotCheckValue();
} 
/*static void _OnIATAllChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATAllChange();
} */
/*static void _OnIATAllSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATAllSetfocus();} */ 
/*static void _OnIATAllKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnIATAllKillfocus();
} */
static int _OnIATAllCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnIATAllCheckValue();
} 
/*static void _OnI2MSpotChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MSpotChange();
} */
/*static void _OnI2MSpotSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MSpotSetfocus();} */ 
/*static void _OnI2MSpotKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MSpotKillfocus();
} */
static int _OnI2MSpotCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnI2MSpotCheckValue();
} 
/*static void _OnI2MAllChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MAllChange();
} */
/*static void _OnI2MAllSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MAllSetfocus();} */ 
/*static void _OnI2MAllKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnI2MAllKillfocus();
} */
static int _OnI2MAllCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnI2MAllCheckValue();
} 
/*static void _OnBISPECTChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBISPECTChange();
} */
/*static void _OnBISPECTSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBISPECTSetfocus();} */ 
/*static void _OnBISPECTKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBISPECTKillfocus();
} */
static int _OnBISPECTCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnBISPECTCheckValue();
} 
/*static void _OnBICTChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBICTChange();
} */
/*static void _OnBICTSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBICTSetfocus();} */ 
/*static void _OnBICTKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnBICTKillfocus();
} */
static int _OnBICTCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnBICTCheckValue();
} 
/*static void _OnDiagnoseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiagnoseChange();
} */
/*static void _OnDiagnoseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiagnoseSetfocus();} */ 
/*static void _OnDiagnoseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnDiagnoseKillfocus();
} */
static int _OnDiagnoseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnDiagnoseCheckValue();
} 
/*static void _OnStageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnStageChange();
} */
/*static void _OnStageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnStageSetfocus();} */ 
/*static void _OnStageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnStageKillfocus();
} */
static int _OnStageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnStageCheckValue();
} 
/*static void _OnAttackDiseaseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAttackDiseaseChange();
} */
/*static void _OnAttackDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAttackDiseaseSetfocus();} */ 
/*static void _OnAttackDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnAttackDiseaseKillfocus();
} */
static int _OnAttackDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnAttackDiseaseCheckValue();
} 
/*static void _OnExpectedTherapeuticDoseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnExpectedTherapeuticDoseChange();
} */
/*static void _OnExpectedTherapeuticDoseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnExpectedTherapeuticDoseSetfocus();} */ 
/*static void _OnExpectedTherapeuticDoseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnExpectedTherapeuticDoseKillfocus();
} */
static int _OnExpectedTherapeuticDoseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnExpectedTherapeuticDoseCheckValue();
} 
/*static void _OnTreatmentReasonChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTreatmentReasonChange();
} */
/*static void _OnTreatmentReasonSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTreatmentReasonSetfocus();} */ 
/*static void _OnTreatmentReasonKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg *)pWnd)->OnTreatmentReasonKillfocus();
} */
static int _OnTreatmentReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg *)pWnd)->OnTreatmentReasonCheckValue();
} 
static long _OnAppointmentListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPlanDlg*)pWnd)->OnAppointmentListLoadData();
} 
static void _OnAppointmentListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentPlanDlg*)pWnd)->OnAppointmentListDblClick();
} 
static void _OnAppointmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentPlanDlg*)pWnd)->OnAppointmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnAppointmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnAppointmentListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSTreatmentPlanDlg *pVw = (CHMSTreatmentPlanDlg *)pWnd;
	pVw->OnUpdateSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentPlanDlg *pVw = (CHMSTreatmentPlanDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPlanDlg *pVw = (CHMSTreatmentPlanDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentPlanDlg *pVw = (CHMSTreatmentPlanDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPlanDlg *pVw = (CHMSTreatmentPlanDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPlanDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnAddHMSTreatmentPlanDlg();
} 
static int _OnEditHMSTreatmentPlanDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnEditHMSTreatmentPlanDlg();
} 
static int _OnDeleteHMSTreatmentPlanDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnDeleteHMSTreatmentPlanDlg();
} 
static int _OnSaveHMSTreatmentPlanDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnSaveHMSTreatmentPlanDlg();
} 
static int _OnCancelHMSTreatmentPlanDlgFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPlanDlg*)pWnd)->OnCancelHMSTreatmentPlanDlg();
} 
CHMSTreatmentPlanDlg::CHMSTreatmentPlanDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentPlanDlg::~CHMSTreatmentPlanDlg(){
}
void CHMSTreatmentPlanDlg::OnCreateComponents(){
	m_wndTreatmentPlan.Create(this, _T("Treatment Plan"), 5, 130, 800, 665);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 155, 110, 180);
	m_wndPatientNo.Create(this,115, 155, 195, 180); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 200, 155, 280, 180);
	m_wndPatientName.Create(this,285, 155, 435, 180); 
	m_wndDocIDLabel.Create(this, _T("Doc ID"), 440, 155, 540, 180);
	m_wndDocID.Create(this,545, 155, 625, 180); 
	m_wndDetectTimeLabel.Create(this, _T("Detect Time"), 630, 155, 710, 180);
	m_wndDetectTime.Create(this,715, 155, 795, 180); 
	m_wndSymptomLabel.Create(this, _T("Symptom"), 10, 185, 110, 210);
	m_wndSymptom.Create(this,115, 185, 435, 210); 
	m_wndSurgeryLabel.Create(this, _T("Surgery"), 440, 185, 540, 210);
	m_wndSurgery.Create(this,546, 185, 796, 210); 
	m_wndAdditionSurgeryLabel.Create(this, _T("Addition Surgery"), 10, 215, 110, 240);
	m_wndAdditionSurgery.Create(this,115, 215, 435, 240); 
	m_wndAfterSurgeryLabel.Create(this, _T("After Surgery"), 440, 215, 540, 240);
	m_wndAfterSurgery.Create(this,546, 215, 796, 240); 
	m_wndGPBLLabel.Create(this, _T("GPBL"), 10, 245, 110, 270);
	m_wndGPBL.Create(this,115, 245, 435, 270); 
	m_wndRelapseRiskLabel.Create(this, _T("Relapse Risk"), 440, 245, 540, 270);
	m_wndRelapseRisk.Create(this,545, 245, 795, 270); 

	m_wndDiseaseCombineLabel.Create(this, _T("Disease Combine"), 10, 275, 110, 300);
	m_wndDiseaseCombine.Create(this,115, 275, 795, 300); 
	m_wndUsingDrugLabel.Create(this, _T("Using Drug"), 10, 305, 110, 330);
	m_wndUsingDrug.Create(this,115, 305, 795, 330); 
	m_wndFamilyLabel.Create(this, _T("Family"), 10, 335, 110, 360);
	m_wndFamily.Create(this,115, 335, 195, 360); 
	m_wndCQKhacLabel.Create(this, _T("CQ Khac"), 200, 335, 280, 360);
	m_wndCQKhac.Create(this,285, 335, 435, 360); 
	m_wndNeckGanglionLabel.Create(this, _T("Neck Ganglion"), 440, 335, 540, 360);
	m_wndNeckGanglion.Create(this,545, 335, 795, 360);
	
	m_wndTSHLabel.Create(this, _T("TSH"), 10, 365, 110, 390);
	m_wndTSH.Create(this,115, 365, 195, 390); 
	m_wndCanxiLabel.Create(this, _T("Canxi"), 200, 365, 280, 390);
	m_wndCanxi.Create(this,285, 365, 435, 390); 
	m_wndKaliLabel.Create(this, _T("Kali"), 440, 365, 540, 390);
	m_wndKali.Create(this,545, 365, 625, 390); 
	m_wndTestThaiLabel.Create(this, _T("Test Thai"), 630, 365, 710, 390);
	m_wndTestThai.Create(this,715, 365, 795, 390); 
	m_wndTgATgChangeLabel.Create(this, _T("TgATg Change"), 10, 395, 110, 420);
	m_wndTgATgChange.Create(this,115, 395, 435, 420); 
	m_wndSideEffectLabel.Create(this, _T("Side Effect I131"), 440, 395, 540, 420);
	m_wndSideEffect.Create(this,545, 395, 795, 420); 
	m_wndTgLabel.Create(this, _T("Tg"), 10, 425, 110, 450);
	m_wndTg.Create(this,115, 425, 195, 450); 
	m_wndATg.Create(this,285, 425, 435, 450); 
	m_wndATgLabel.Create(this, _T("A-Tg"), 200, 425, 280, 450);
	m_wndDose.Create(this,545, 425, 625, 450); 
	m_wndDoseLabel.Create(this, _T("Dose"), 440, 425, 540, 450);
	m_wndTimeLabel.Create(this, _T("Time "), 630, 425, 710, 450);
	m_wndTime.Create(this,715, 425, 795, 450); 
	m_wndOBloodChemistryLabel.Create(this, _T("OBlood Chemistry"), 10, 455, 110, 480);
	m_wndOBloodChemistry.Create(this,115, 455, 195, 480); 
	m_wndBloodWeirdo.Create(this,200, 455, 435, 480); 
	m_wndBloodFormulaLabel.Create(this, _T("Blood Formula"), 440, 455, 540, 480);
	m_wndBloodFormula.Create(this,545, 455, 795, 480); 
	m_wndUltraSonicNeckLabel.Create(this, _T("UltraSonic Neck"), 10, 485, 110, 510);
	m_wndUltraSonicNeck.Create(this,115, 485, 435, 510); 
	m_wndUltraSonicAbdomenLabel.Create(this, _T("UltraSonic Abdomen"), 440, 485, 540, 510);
	m_wndUltraSonicAbdomen.Create(this,545, 485, 795, 510); 
	m_wndImagingAfterTreatLabel.Create(this, _T("Imaging After Treat"), 10, 515, 175, 540);
	m_wndIATSpotLabel.Create(this, _T("Spot"), 200, 515, 280, 540);
	m_wndIATSpot.Create(this,285, 515, 435, 540); 
	m_wndIATAll.Create(this,545, 515, 795, 540); 
	m_wndIATAllLabel.Create(this, _T("All Body"), 440, 515, 540, 540);
	m_wndImaging2MCILabel.Create(this, _T("Imaging 2 mCi"), 10, 545, 175, 570);
	m_wndI2MSpotLabel.Create(this, _T("Spot"), 200, 545, 280, 570);
	m_wndI2MSpot.Create(this,285, 545, 435, 570); 
	m_wndI2MAllLabel.Create(this, _T("All Body"), 440, 545, 540, 570);
	m_wndI2MAll.Create(this,545, 545, 795, 570); 
	m_wndBISPECTLabel.Create(this, _T("SPECT"), 200, 575, 280, 600);
	m_wndBISPECT.Create(this,285, 575, 435, 600); 
	m_wndBoneImagingLabel.Create(this, _T("Bone Imaging"), 10, 575, 175, 600);
	m_wndBICTLabel.Create(this, _T("CT"), 440, 575, 540, 600);
	m_wndBICT.Create(this,545, 575, 795, 600); 
	m_wndStageLabel.Create(this, _T("Stage"), 10, 605, 110, 630);
	m_wndStage.Create(this,115, 605, 195, 630); 
	m_wndAttackDiseaseLabel.Create(this, _T("Attack Disease"), 200, 605, 280, 630);
	m_wndAttackDisease.Create(this,285, 605, 795, 630); 
	m_wndExpectedTherapeuticDoseLabel.Create(this, _T("Expected Therapeutic Dose"), 10, 635, 110, 660);
	m_wndExpectedTherapeuticDose.Create(this,115, 635, 435, 660); 
	m_wndTreatmentReasonLabel.Create(this, _T("Treatment Reason"), 440, 635, 540, 660);
	m_wndTreatmentReason.Create(this,545, 635, 795, 660); 
	
	m_wndSave.Create(this, _T("Save"), 550, 670, 630, 695);
	m_wndCancel.Create(this, _T("Cancel"), 635, 670, 715, 695);
	m_wndClose.Create(this, _T("Close"), 720, 670, 800, 695);
	m_wndPrint.Create(this, _T("Print"), 380, 670, 460, 695);
	m_wndUpdate.Create(this, _T("Update"), 465, 670, 545, 695);
	 
	m_wndAppointmentList.Create(this,5, 5, 800, 125);

	m_wndDiagnoseLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDiagnoseLabel.ShowWindow(SW_HIDE);
	m_wndDiagnoseLabel.EnableWindow(FALSE);
	m_wndDiagnose.Create(this, 0, 0, 0, 0);
	m_wndDiagnose.ShowWindow(SW_HIDE);
	m_wndDiagnose.EnableWindow(FALSE);
}
void CHMSTreatmentPlanDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(35);
	m_wndPatientNo.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocID.SetLimitText(35);
	m_wndDetectTime.SetMax(CDate(pMF->GetSysDate()));
	m_wndDetectTime.SetCheckValue(true);
	m_wndFamily.SetCheckValue(true);
	
	m_wndOBloodChemistry.SetCheckValue(true);
	m_wndBloodWeirdo.SetCheckValue(true);
	m_wndBloodFormula.SetCheckValue(true);

	m_wndFamily.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFamily.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndBloodFormula.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBloodFormula.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndOBloodChemistry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOBloodChemistry.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndAppointmentList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndAppointmentList.InsertColumn(1, _T("MHS"), CFMT_TEXT, 50);
	m_wndAppointmentList.InsertColumn(2, _T("Patient No"), CFMT_TEXT, 150);
	m_wndAppointmentList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 250);
	
	m_tblTreatmentPlan.SetTableName(_T("hms_treatment_plan"));
	m_tblTreatmentPlan.AddField(_T("htp_idx"), dfInteger);
	m_tblTreatmentPlan.AddField(_T("htp_createddate"), dfDateTime);
	m_tblTreatmentPlan.AddField(_T("htp_patientno"), dfLong);
	m_tblTreatmentPlan.AddField(_T("htp_docno"), dfLong);
	m_tblTreatmentPlan.AddField(_T("htp_docid"), dfText, 15);
	m_tblTreatmentPlan.AddField(_T("htp_detect_time"), dfDate);
	m_tblTreatmentPlan.AddField(_T("htp_symptom"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_surgery"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_add_surgery"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_after_surgery"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_gpbl"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_disease_combine"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_using_drug"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_family"), dfText, 5);
	m_tblTreatmentPlan.AddField(_T("htp_cqkhac"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_tsh"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_canxi"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_kali"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_testthai"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_after_i131"), dfText, 50);
	m_tblTreatmentPlan.AddField(_T("htp_tgatg_change"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_tg"), dfText, 15);
	m_tblTreatmentPlan.AddField(_T("htp_atg"), dfText, 15);
	m_tblTreatmentPlan.AddField(_T("htp_dose"), dfText, 15);
	m_tblTreatmentPlan.AddField(_T("htp_time"), dfText, 15);
	m_tblTreatmentPlan.AddField(_T("htp_other_blood"), dfText, 5);
	m_tblTreatmentPlan.AddField(_T("htp_blood_weirdo"), dfText, 50);
	m_tblTreatmentPlan.AddField(_T("htp_blood_formula"), dfText, 5);
	m_tblTreatmentPlan.AddField(_T("htp_usonic_neck"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_usonic_abdomen"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_ita_spot"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_ita_all"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_i2m_spot"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_i2m_all"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_bi_spect"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_bi_ct"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_diagnose"), dfText, 500);
	m_tblTreatmentPlan.AddField(_T("htp_stage"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_relation_disease"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_expected"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_treatment_reason"), dfText, 25);
	m_tblTreatmentPlan.AddField(_T("htp_neck_ganglion"), dfText, 250);
	m_tblTreatmentPlan.AddField(_T("htp_relapse_risk"), dfText, 50);

	m_tblTGATG.SetTableName(_T("hms_tgatg_change"));
	m_tblTGATG.AddField(_T("htc_idx"), dfInteger);
	m_tblTGATG.AddField(_T("htc_patientno"), dfLong);
	m_tblTGATG.AddField(_T("htc_tg"), dfText, 15);
	m_tblTGATG.AddField(_T("htc_atg"), dfText, 15);
	m_tblTGATG.AddField(_T("htc_dose"), dfText, 15);
	m_tblTGATG.AddField(_T("htc_time"), dfText, 15);

}
void CHMSTreatmentPlanDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocID.SetEvent(WE_CHANGE, _OnDocIDChangeFnc);
	//m_wndDocID.SetEvent(WE_SETFOCUS, _OnDocIDSetfocusFnc);
	//m_wndDocID.SetEvent(WE_KILLFOCUS, _OnDocIDKillfocusFnc);
	m_wndDocID.SetEvent(WE_CHECKVALUE, _OnDocIDCheckValueFnc);
	//m_wndDetectTime.SetEvent(WE_CHANGE, _OnDetectTimeChangeFnc);
	//m_wndDetectTime.SetEvent(WE_SETFOCUS, _OnDetectTimeSetfocusFnc);
	//m_wndDetectTime.SetEvent(WE_KILLFOCUS, _OnDetectTimeKillfocusFnc);
	m_wndDetectTime.SetEvent(WE_CHECKVALUE, _OnDetectTimeCheckValueFnc);
	//m_wndSymptom.SetEvent(WE_CHANGE, _OnSymptomChangeFnc);
	//m_wndSymptom.SetEvent(WE_SETFOCUS, _OnSymptomSetfocusFnc);
	//m_wndSymptom.SetEvent(WE_KILLFOCUS, _OnSymptomKillfocusFnc);
	m_wndSymptom.SetEvent(WE_CHECKVALUE, _OnSymptomCheckValueFnc);
	//m_wndSurgery.SetEvent(WE_CHANGE, _OnSurgeryChangeFnc);
	//m_wndSurgery.SetEvent(WE_SETFOCUS, _OnSurgerySetfocusFnc);
	//m_wndSurgery.SetEvent(WE_KILLFOCUS, _OnSurgeryKillfocusFnc);
	m_wndSurgery.SetEvent(WE_CHECKVALUE, _OnSurgeryCheckValueFnc);
	//m_wndAdditionSurgery.SetEvent(WE_CHANGE, _OnAdditionSurgeryChangeFnc);
	//m_wndAdditionSurgery.SetEvent(WE_SETFOCUS, _OnAdditionSurgerySetfocusFnc);
	//m_wndAdditionSurgery.SetEvent(WE_KILLFOCUS, _OnAdditionSurgeryKillfocusFnc);
	m_wndAdditionSurgery.SetEvent(WE_CHECKVALUE, _OnAdditionSurgeryCheckValueFnc);
	//m_wndAfterSurgery.SetEvent(WE_CHANGE, _OnAfterSurgeryChangeFnc);
	//m_wndAfterSurgery.SetEvent(WE_SETFOCUS, _OnAfterSurgerySetfocusFnc);
	//m_wndAfterSurgery.SetEvent(WE_KILLFOCUS, _OnAfterSurgeryKillfocusFnc);
	m_wndAfterSurgery.SetEvent(WE_CHECKVALUE, _OnAfterSurgeryCheckValueFnc);
	//m_wndGPBL.SetEvent(WE_CHANGE, _OnGPBLChangeFnc);
	//m_wndGPBL.SetEvent(WE_SETFOCUS, _OnGPBLSetfocusFnc);
	//m_wndGPBL.SetEvent(WE_KILLFOCUS, _OnGPBLKillfocusFnc);
	m_wndGPBL.SetEvent(WE_CHECKVALUE, _OnGPBLCheckValueFnc);
	//m_wndRelapseRisk.SetEvent(WE_CHANGE, _OnRelapseRiskChangeFnc);
	//m_wndRelapseRisk.SetEvent(WE_SETFOCUS, _OnRelapseRiskSetfocusFnc);
	//m_wndRelapseRisk.SetEvent(WE_KILLFOCUS, _OnRelapseRiskKillfocusFnc);
	m_wndRelapseRisk.SetEvent(WE_CHECKVALUE, _OnRelapseRiskCheckValueFnc);
	//m_wndNeckGanglion.SetEvent(WE_CHANGE, _OnNeckGanglionChangeFnc);
	//m_wndNeckGanglion.SetEvent(WE_SETFOCUS, _OnNeckGanglionSetfocusFnc);
	//m_wndNeckGanglion.SetEvent(WE_KILLFOCUS, _OnNeckGanglionKillfocusFnc);
	m_wndNeckGanglion.SetEvent(WE_CHECKVALUE, _OnNeckGanglionCheckValueFnc);
	//m_wndDiseaseCombine.SetEvent(WE_CHANGE, _OnDiseaseCombineChangeFnc);
	//m_wndDiseaseCombine.SetEvent(WE_SETFOCUS, _OnDiseaseCombineSetfocusFnc);
	//m_wndDiseaseCombine.SetEvent(WE_KILLFOCUS, _OnDiseaseCombineKillfocusFnc);
	m_wndDiseaseCombine.SetEvent(WE_CHECKVALUE, _OnDiseaseCombineCheckValueFnc);
	//m_wndUsingDrug.SetEvent(WE_CHANGE, _OnUsingDrugChangeFnc);
	//m_wndUsingDrug.SetEvent(WE_SETFOCUS, _OnUsingDrugSetfocusFnc);
	//m_wndUsingDrug.SetEvent(WE_KILLFOCUS, _OnUsingDrugKillfocusFnc);
	m_wndUsingDrug.SetEvent(WE_CHECKVALUE, _OnUsingDrugCheckValueFnc);
	m_wndFamily.SetEvent(WE_SELENDOK, _OnFamilySelendokFnc);
	//m_wndFamily.SetEvent(WE_SETFOCUS, _OnFamilySetfocusFnc);
	//m_wndFamily.SetEvent(WE_KILLFOCUS, _OnFamilyKillfocusFnc);
	m_wndFamily.SetEvent(WE_SELCHANGE, _OnFamilySelectChangeFnc);
	m_wndFamily.SetEvent(WE_LOADDATA, _OnFamilyLoadDataFnc);
	//m_wndFamily.SetEvent(WE_ADDNEW, _OnFamilyAddNewFnc);
	//m_wndCQKhac.SetEvent(WE_CHANGE, _OnCQKhacChangeFnc);
	//m_wndCQKhac.SetEvent(WE_SETFOCUS, _OnCQKhacSetfocusFnc);
	//m_wndCQKhac.SetEvent(WE_KILLFOCUS, _OnCQKhacKillfocusFnc);
	m_wndCQKhac.SetEvent(WE_CHECKVALUE, _OnCQKhacCheckValueFnc);

	//m_wndTSH.SetEvent(WE_CHANGE, _OnTSHChangeFnc);
	//m_wndTSH.SetEvent(WE_SETFOCUS, _OnTSHSetfocusFnc);
	//m_wndTSH.SetEvent(WE_KILLFOCUS, _OnTSHKillfocusFnc);
	m_wndTSH.SetEvent(WE_CHECKVALUE, _OnTSHCheckValueFnc);
	//m_wndCanxi.SetEvent(WE_CHANGE, _OnCanxiChangeFnc);
	//m_wndCanxi.SetEvent(WE_SETFOCUS, _OnCanxiSetfocusFnc);
	//m_wndCanxi.SetEvent(WE_KILLFOCUS, _OnCanxiKillfocusFnc);
	m_wndCanxi.SetEvent(WE_CHECKVALUE, _OnCanxiCheckValueFnc);
	//m_wndKali.SetEvent(WE_CHANGE, _OnKaliChangeFnc);
	//m_wndKali.SetEvent(WE_SETFOCUS, _OnKaliSetfocusFnc);
	//m_wndKali.SetEvent(WE_KILLFOCUS, _OnKaliKillfocusFnc);
	m_wndKali.SetEvent(WE_CHECKVALUE, _OnKaliCheckValueFnc);
	//m_wndTestThai.SetEvent(WE_CHANGE, _OnTestThaiChangeFnc);
	//m_wndTestThai.SetEvent(WE_SETFOCUS, _OnTestThaiSetfocusFnc);
	//m_wndTestThai.SetEvent(WE_KILLFOCUS, _OnTestThaiKillfocusFnc);
	m_wndTestThai.SetEvent(WE_CHECKVALUE, _OnTestThaiCheckValueFnc);
	//m_wndTgATgChange.SetEvent(WE_CHANGE, _OnTgATgChangeChangeFnc);
	//m_wndTgATgChange.SetEvent(WE_SETFOCUS, _OnTgATgChangeSetfocusFnc);
	//m_wndTgATgChange.SetEvent(WE_KILLFOCUS, _OnTgATgChangeKillfocusFnc);
	m_wndTgATgChange.SetEvent(WE_CHECKVALUE, _OnTgATgChangeCheckValueFnc);
	//m_wndSideEffect.SetEvent(WE_CHANGE, _OnSideEffectChangeFnc);
	//m_wndSideEffect.SetEvent(WE_SETFOCUS, _OnSideEffectSetfocusFnc);
	//m_wndSideEffect.SetEvent(WE_KILLFOCUS, _OnSideEffectKillfocusFnc);
	m_wndSideEffect.SetEvent(WE_CHECKVALUE, _OnSideEffectCheckValueFnc);
	//m_wndTg.SetEvent(WE_CHANGE, _OnTgChangeFnc);
	//m_wndTg.SetEvent(WE_SETFOCUS, _OnTgSetfocusFnc);
	//m_wndTg.SetEvent(WE_KILLFOCUS, _OnTgKillfocusFnc);
	m_wndTg.SetEvent(WE_CHECKVALUE, _OnTgCheckValueFnc);
	//m_wndATg.SetEvent(WE_CHANGE, _OnATgChangeFnc);
	//m_wndATg.SetEvent(WE_SETFOCUS, _OnATgSetfocusFnc);
	//m_wndATg.SetEvent(WE_KILLFOCUS, _OnATgKillfocusFnc);
	m_wndATg.SetEvent(WE_CHECKVALUE, _OnATgCheckValueFnc);
	//m_wndDose.SetEvent(WE_CHANGE, _OnDoseChangeFnc);
	//m_wndDose.SetEvent(WE_SETFOCUS, _OnDoseSetfocusFnc);
	//m_wndDose.SetEvent(WE_KILLFOCUS, _OnDoseKillfocusFnc);
	m_wndDose.SetEvent(WE_CHECKVALUE, _OnDoseCheckValueFnc);
	//m_wndTime.SetEvent(WE_CHANGE, _OnTimeChangeFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_CHECKVALUE, _OnTimeCheckValueFnc);
	m_wndOBloodChemistry.SetEvent(WE_SELENDOK, _OnOBloodChemistrySelendokFnc);
	//m_wndOBloodChemistry.SetEvent(WE_SETFOCUS, _OnOBloodChemistrySetfocusFnc);
	//m_wndOBloodChemistry.SetEvent(WE_KILLFOCUS, _OnOBloodChemistryKillfocusFnc);
	m_wndOBloodChemistry.SetEvent(WE_SELCHANGE, _OnOBloodChemistrySelectChangeFnc);
	m_wndOBloodChemistry.SetEvent(WE_LOADDATA, _OnOBloodChemistryLoadDataFnc);
	//m_wndOBloodChemistry.SetEvent(WE_ADDNEW, _OnOBloodChemistryAddNewFnc);
	//m_wndBloodWeirdo.SetEvent(WE_CHANGE, _OnBloodWeirdoChangeFnc);
	//m_wndBloodWeirdo.SetEvent(WE_SETFOCUS, _OnBloodWeirdoSetfocusFnc);
	//m_wndBloodWeirdo.SetEvent(WE_KILLFOCUS, _OnBloodWeirdoKillfocusFnc);
	m_wndBloodWeirdo.SetEvent(WE_CHECKVALUE, _OnBloodWeirdoCheckValueFnc);
	m_wndBloodFormula.SetEvent(WE_SELENDOK, _OnBloodFormulaSelendokFnc);
	//m_wndBloodFormula.SetEvent(WE_SETFOCUS, _OnBloodFormulaSetfocusFnc);
	//m_wndBloodFormula.SetEvent(WE_KILLFOCUS, _OnBloodFormulaKillfocusFnc);
	m_wndBloodFormula.SetEvent(WE_SELCHANGE, _OnBloodFormulaSelectChangeFnc);
	m_wndBloodFormula.SetEvent(WE_LOADDATA, _OnBloodFormulaLoadDataFnc);
	//m_wndBloodFormula.SetEvent(WE_ADDNEW, _OnBloodFormulaAddNewFnc);
	//m_wndUltraSonicNeck.SetEvent(WE_CHANGE, _OnUltraSonicNeckChangeFnc);
	//m_wndUltraSonicNeck.SetEvent(WE_SETFOCUS, _OnUltraSonicNeckSetfocusFnc);
	//m_wndUltraSonicNeck.SetEvent(WE_KILLFOCUS, _OnUltraSonicNeckKillfocusFnc);
	m_wndUltraSonicNeck.SetEvent(WE_CHECKVALUE, _OnUltraSonicNeckCheckValueFnc);
	//m_wndUltraSonicAbdomen.SetEvent(WE_CHANGE, _OnUltraSonicAbdomenChangeFnc);
	//m_wndUltraSonicAbdomen.SetEvent(WE_SETFOCUS, _OnUltraSonicAbdomenSetfocusFnc);
	//m_wndUltraSonicAbdomen.SetEvent(WE_KILLFOCUS, _OnUltraSonicAbdomenKillfocusFnc);
	m_wndUltraSonicAbdomen.SetEvent(WE_CHECKVALUE, _OnUltraSonicAbdomenCheckValueFnc);
	//m_wndIATSpot.SetEvent(WE_CHANGE, _OnIATSpotChangeFnc);
	//m_wndIATSpot.SetEvent(WE_SETFOCUS, _OnIATSpotSetfocusFnc);
	//m_wndIATSpot.SetEvent(WE_KILLFOCUS, _OnIATSpotKillfocusFnc);
	m_wndIATSpot.SetEvent(WE_CHECKVALUE, _OnIATSpotCheckValueFnc);
	//m_wndIATAll.SetEvent(WE_CHANGE, _OnIATAllChangeFnc);
	//m_wndIATAll.SetEvent(WE_SETFOCUS, _OnIATAllSetfocusFnc);
	//m_wndIATAll.SetEvent(WE_KILLFOCUS, _OnIATAllKillfocusFnc);
	m_wndIATAll.SetEvent(WE_CHECKVALUE, _OnIATAllCheckValueFnc);
	//m_wndI2MSpot.SetEvent(WE_CHANGE, _OnI2MSpotChangeFnc);
	//m_wndI2MSpot.SetEvent(WE_SETFOCUS, _OnI2MSpotSetfocusFnc);
	//m_wndI2MSpot.SetEvent(WE_KILLFOCUS, _OnI2MSpotKillfocusFnc);
	m_wndI2MSpot.SetEvent(WE_CHECKVALUE, _OnI2MSpotCheckValueFnc);
	//m_wndI2MAll.SetEvent(WE_CHANGE, _OnI2MAllChangeFnc);
	//m_wndI2MAll.SetEvent(WE_SETFOCUS, _OnI2MAllSetfocusFnc);
	//m_wndI2MAll.SetEvent(WE_KILLFOCUS, _OnI2MAllKillfocusFnc);
	m_wndI2MAll.SetEvent(WE_CHECKVALUE, _OnI2MAllCheckValueFnc);
	//m_wndBISPECT.SetEvent(WE_CHANGE, _OnBISPECTChangeFnc);
	//m_wndBISPECT.SetEvent(WE_SETFOCUS, _OnBISPECTSetfocusFnc);
	//m_wndBISPECT.SetEvent(WE_KILLFOCUS, _OnBISPECTKillfocusFnc);
	m_wndBISPECT.SetEvent(WE_CHECKVALUE, _OnBISPECTCheckValueFnc);
	//m_wndBICT.SetEvent(WE_CHANGE, _OnBICTChangeFnc);
	//m_wndBICT.SetEvent(WE_SETFOCUS, _OnBICTSetfocusFnc);
	//m_wndBICT.SetEvent(WE_KILLFOCUS, _OnBICTKillfocusFnc);
	m_wndBICT.SetEvent(WE_CHECKVALUE, _OnBICTCheckValueFnc);
	//m_wndDiagnose.SetEvent(WE_CHANGE, _OnDiagnoseChangeFnc);
	//m_wndDiagnose.SetEvent(WE_SETFOCUS, _OnDiagnoseSetfocusFnc);
	//m_wndDiagnose.SetEvent(WE_KILLFOCUS, _OnDiagnoseKillfocusFnc);
	m_wndDiagnose.SetEvent(WE_CHECKVALUE, _OnDiagnoseCheckValueFnc);
	//m_wndStage.SetEvent(WE_CHANGE, _OnStageChangeFnc);
	//m_wndStage.SetEvent(WE_SETFOCUS, _OnStageSetfocusFnc);
	//m_wndStage.SetEvent(WE_KILLFOCUS, _OnStageKillfocusFnc);
	m_wndStage.SetEvent(WE_CHECKVALUE, _OnStageCheckValueFnc);
	//m_wndAttackDisease.SetEvent(WE_CHANGE, _OnAttackDiseaseChangeFnc);
	//m_wndAttackDisease.SetEvent(WE_SETFOCUS, _OnAttackDiseaseSetfocusFnc);
	//m_wndAttackDisease.SetEvent(WE_KILLFOCUS, _OnAttackDiseaseKillfocusFnc);
	m_wndAttackDisease.SetEvent(WE_CHECKVALUE, _OnAttackDiseaseCheckValueFnc);
	//m_wndExpectedTherapeuticDose.SetEvent(WE_CHANGE, _OnExpectedTherapeuticDoseChangeFnc);
	//m_wndExpectedTherapeuticDose.SetEvent(WE_SETFOCUS, _OnExpectedTherapeuticDoseSetfocusFnc);
	//m_wndExpectedTherapeuticDose.SetEvent(WE_KILLFOCUS, _OnExpectedTherapeuticDoseKillfocusFnc);
	m_wndExpectedTherapeuticDose.SetEvent(WE_CHECKVALUE, _OnExpectedTherapeuticDoseCheckValueFnc);
	//m_wndTreatmentReason.SetEvent(WE_CHANGE, _OnTreatmentReasonChangeFnc);
	//m_wndTreatmentReason.SetEvent(WE_SETFOCUS, _OnTreatmentReasonSetfocusFnc);
	//m_wndTreatmentReason.SetEvent(WE_KILLFOCUS, _OnTreatmentReasonKillfocusFnc);
	m_wndTreatmentReason.SetEvent(WE_CHECKVALUE, _OnTreatmentReasonCheckValueFnc);
	//m_wndNeckGanglion.SetEvent(WE_CHANGE, _OnNeckGanglionChangeFnc);
	//m_wndNeckGanglion.SetEvent(WE_SETFOCUS, _OnNeckGanglionSetfocusFnc);
	//m_wndNeckGanglion.SetEvent(WE_KILLFOCUS, _OnNeckGanglionKillfocusFnc);
	m_wndNeckGanglion.SetEvent(WE_CHECKVALUE, _OnNeckGanglionCheckValueFnc);
	//m_wndRelapseRisk.SetEvent(WE_CHANGE, _OnRelapseRiskChangeFnc);
	//m_wndRelapseRisk.SetEvent(WE_SETFOCUS, _OnRelapseRiskSetfocusFnc);
	//m_wndRelapseRisk.SetEvent(WE_KILLFOCUS, _OnRelapseRiskKillfocusFnc);
	m_wndRelapseRisk.SetEvent(WE_CHECKVALUE, _OnRelapseRiskCheckValueFnc);

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAppointmentList.SetEvent(WE_SELCHANGE, _OnAppointmentListSelectChangeFnc);
	m_wndAppointmentList.SetEvent(WE_LOADDATA, _OnAppointmentListLoadDataFnc);
	m_wndAppointmentList.SetEvent(WE_DBLCLICK, _OnAppointmentListDblClickFnc);

	if(m_nDocNo > 0)
	{
		CString szSQL;
		szSQL.Format(_T("GET_PATIENTNAME(%ld)"), m_nDocNo);
		m_szPatientName = pMF->ExecDML(szSQL);
		UpdateData(FALSE);
		m_wndPatientNo.EnableWindow(FALSE);
		m_wndPatientName.EnableWindow(FALSE);
	}
	OnAppointmentListLoadData();
}
void CHMSTreatmentPlanDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocID.GetDlgCtrlID(), m_szDocID);
	DDX_TextEx(pDX, m_wndDetectTime.GetDlgCtrlID(), m_szDetectTime);
	DDX_Text(pDX, m_wndSymptom.GetDlgCtrlID(), m_szSymptom);
	DDX_Text(pDX, m_wndSurgery.GetDlgCtrlID(), m_szSurgery);
	DDX_Text(pDX, m_wndAdditionSurgery.GetDlgCtrlID(), m_szAdditionSurgery);
	DDX_Text(pDX, m_wndAfterSurgery.GetDlgCtrlID(), m_szAfterSurgery);
	DDX_Text(pDX, m_wndGPBL.GetDlgCtrlID(), m_szGPBL);
	DDX_Text(pDX, m_wndNeckGanglion.GetDlgCtrlID(), m_szNeckGanglion);
	DDX_Text(pDX, m_wndDiseaseCombine.GetDlgCtrlID(), m_szDiseaseCombine);
	DDX_Text(pDX, m_wndUsingDrug.GetDlgCtrlID(), m_szUsingDrug);
	DDX_TextEx(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamilyKey);
	DDX_Text(pDX, m_wndCQKhac.GetDlgCtrlID(), m_szCQKhac);
	DDX_Text(pDX, m_wndTSH.GetDlgCtrlID(), m_szTSH);
	DDX_Text(pDX, m_wndCanxi.GetDlgCtrlID(), m_szCanxi);
	DDX_Text(pDX, m_wndKali.GetDlgCtrlID(), m_szKali);
	DDX_Text(pDX, m_wndTestThai.GetDlgCtrlID(), m_szTestThai);
	DDX_Text(pDX, m_wndTgATgChange.GetDlgCtrlID(), m_szTgATgChange);
	DDX_Text(pDX, m_wndSideEffect.GetDlgCtrlID(), m_szSideEffect);
	DDX_Text(pDX, m_wndTg.GetDlgCtrlID(), m_szTg);
	DDX_Text(pDX, m_wndATg.GetDlgCtrlID(), m_szATg);
	DDX_Text(pDX, m_wndDose.GetDlgCtrlID(), m_szDose);
	DDX_Text(pDX, m_wndTime.GetDlgCtrlID(), m_szTime);
	DDX_TextEx(pDX, m_wndOBloodChemistry.GetDlgCtrlID(), m_szOBloodChemistryKey);
	DDX_Text(pDX, m_wndBloodWeirdo.GetDlgCtrlID(), m_szBloodWeirdo);
	DDX_TextEx(pDX, m_wndBloodFormula.GetDlgCtrlID(), m_szBloodFormulaKey);
	DDX_Text(pDX, m_wndUltraSonicNeck.GetDlgCtrlID(), m_szUltraSonicNeck);
	DDX_Text(pDX, m_wndUltraSonicAbdomen.GetDlgCtrlID(), m_szUltraSonicAbdomen);
	DDX_Text(pDX, m_wndIATSpot.GetDlgCtrlID(), m_szIATSpot);
	DDX_Text(pDX, m_wndIATAll.GetDlgCtrlID(), m_szIATAll);
	DDX_Text(pDX, m_wndI2MSpot.GetDlgCtrlID(), m_szI2MSpot);
	DDX_Text(pDX, m_wndI2MAll.GetDlgCtrlID(), m_szI2MAll);
	DDX_Text(pDX, m_wndBISPECT.GetDlgCtrlID(), m_szBISPECT);
	DDX_Text(pDX, m_wndBICT.GetDlgCtrlID(), m_szBICT);
	DDX_Text(pDX, m_wndDiagnose.GetDlgCtrlID(), m_szDiagnose);
	DDX_Text(pDX, m_wndStage.GetDlgCtrlID(), m_szStage);
	DDX_Text(pDX, m_wndAttackDisease.GetDlgCtrlID(), m_szAttackDisease);
	DDX_Text(pDX, m_wndExpectedTherapeuticDose.GetDlgCtrlID(), m_szExpectedTherapeuticDose);
	DDX_Text(pDX, m_wndTreatmentReason.GetDlgCtrlID(), m_szTreatmentReason);
	DDX_Text(pDX, m_wndNeckGanglion.GetDlgCtrlID(), m_szNeckGanglion);
	DDX_Text(pDX, m_wndRelapseRisk.GetDlgCtrlID(), m_szRelapseRisk);

}
void CHMSTreatmentPlanDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_treatment_plan WHERE htp_patientno = %ld and htp_idx = %d"), m_nPatientNo, m_nIDx);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("htp_patientno"), m_nPatientNo);
		rs.GetValue(_T("htp_docid"), m_szDocID);
		rs.GetValue(_T("htp_detect_time"), m_szDetectTime);
		rs.GetValue(_T("htp_symptom"), m_szSymptom);
		rs.GetValue(_T("htp_surgery"), m_szSurgery);
		rs.GetValue(_T("htp_add_surgery"), m_szAdditionSurgery);
		rs.GetValue(_T("htp_after_surgery"), m_szAfterSurgery);
		rs.GetValue(_T("htp_gpbl"), m_szGPBL);
		rs.GetValue(_T("htp_disease_combine"), m_szDiseaseCombine);
		rs.GetValue(_T("htp_using_drug"), m_szUsingDrug);
		rs.GetValue(_T("htp_family"), m_szFamilyKey);
		rs.GetValue(_T("htp_cqkhac"), m_szCQKhac);
		rs.GetValue(_T("htp_tsh"), m_szTSH);
		rs.GetValue(_T("htp_canxi"), m_szCanxi);
		rs.GetValue(_T("htp_kali"), m_szKali);
		rs.GetValue(_T("htp_testthai"), m_szTestThai);
		rs.GetValue(_T("htp_after_i131"), m_szSideEffect);
		rs.GetValue(_T("htp_tgatg_change"), m_szTgATgChange);
		rs.GetValue(_T("htp_tg"), m_szTg);
		rs.GetValue(_T("htp_atg"), m_szATg);
		rs.GetValue(_T("htp_dose"), m_szDose);
		rs.GetValue(_T("htp_time"), m_szTime);
		rs.GetValue(_T("htp_other_blood"), m_szOBloodChemistryKey);
		rs.GetValue(_T("htp_blood_weirdo"), m_szBloodWeirdo);
		rs.GetValue(_T("htp_blood_formula"), m_szBloodFormulaKey);
		rs.GetValue(_T("htp_usonic_neck"), m_szUltraSonicNeck);
		rs.GetValue(_T("htp_usonic_abdomen"), m_szUltraSonicAbdomen);
		rs.GetValue(_T("htp_ita_spot"), m_szIATSpot);
		rs.GetValue(_T("htp_ita_all"), m_szIATAll);
		rs.GetValue(_T("htp_i2m_spot"), m_szI2MSpot);
		rs.GetValue(_T("htp_i2m_all"), m_szI2MAll);
		rs.GetValue(_T("htp_bi_spect"), m_szBISPECT);
		rs.GetValue(_T("htp_bi_ct"), m_szBICT);
		rs.GetValue(_T("htp_diagnose"), m_szDiagnose);
		rs.GetValue(_T("htp_stage"), m_szStage);
		rs.GetValue(_T("htp_relation_disease"), m_szAttackDisease);
		rs.GetValue(_T("htp_expected"), m_szExpectedTherapeuticDose);
		rs.GetValue(_T("htp_treatment_reason"), m_szTreatmentReason);
		rs.GetValue(_T("htp_neck_ganglion"), m_szNeckGanglion);
		rs.GetValue(_T("htp_relapse_risk"), m_szRelapseRisk);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}

}
void CHMSTreatmentPlanDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT coalesce(max(htp_idx), 0)+1 as nIdx FROM HMS_TREATMENT_PLAN WHERE htp_patientno = %ld "), m_nPatientNo);
	rs.ExecSQL(szSQL);
	int nIdx = str2int(rs.GetValue(_T("nIdx")));
	m_tblTreatmentPlan.SetValue(_T("htp_idx"), nIdx);
	m_tblTreatmentPlan.SetValue(_T("htp_createddate"), pMF->GetSysDateTime());
	m_tblTreatmentPlan.SetValue(_T("htp_patientno"), m_nPatientNo);
	m_tblTreatmentPlan.SetValue(_T("htp_docno"), m_nDocNo);
	m_tblTreatmentPlan.SetValue(_T("htp_docid"), m_szDocID);
	m_tblTreatmentPlan.SetValue(_T("htp_detect_time"), m_szDetectTime);
	m_tblTreatmentPlan.SetValue(_T("htp_symptom"), m_szSymptom);
	m_tblTreatmentPlan.SetValue(_T("htp_surgery"), m_szSurgery);
	m_tblTreatmentPlan.SetValue(_T("htp_add_surgery"), m_szAdditionSurgery);
	m_tblTreatmentPlan.SetValue(_T("htp_after_surgery"), m_szAfterSurgery);
	m_tblTreatmentPlan.SetValue(_T("htp_gpbl"), m_szGPBL);
	m_tblTreatmentPlan.SetValue(_T("htp_disease_combine"), m_szDiseaseCombine);
	m_tblTreatmentPlan.SetValue(_T("htp_using_drug"), m_szUsingDrug);
	m_tblTreatmentPlan.SetValue(_T("htp_family"), m_szFamilyKey);
	m_tblTreatmentPlan.SetValue(_T("htp_cqkhac"), m_szCQKhac);
	m_tblTreatmentPlan.SetValue(_T("htp_tsh"), m_szTSH);
	m_tblTreatmentPlan.SetValue(_T("htp_canxi"), m_szCanxi);
	m_tblTreatmentPlan.SetValue(_T("htp_kali"), m_szKali);
	m_tblTreatmentPlan.SetValue(_T("htp_testthai"), m_szTestThai);
	m_tblTreatmentPlan.SetValue(_T("htp_after_i131"), m_szSideEffect);
	m_tblTreatmentPlan.SetValue(_T("htp_tgatg_change"), m_szTgATgChange);
	m_tblTreatmentPlan.SetValue(_T("htp_tg"), m_szTg);
	m_tblTreatmentPlan.SetValue(_T("htp_atg"), m_szATg);
	m_tblTreatmentPlan.SetValue(_T("htp_dose"), m_szDose);
	m_tblTreatmentPlan.SetValue(_T("htp_time"), m_szTime);
	m_tblTreatmentPlan.SetValue(_T("htp_other_blood"), m_szOBloodChemistryKey);
	m_tblTreatmentPlan.SetValue(_T("htp_blood_weirdo"), m_szBloodWeirdo);
	m_tblTreatmentPlan.SetValue(_T("htp_blood_formula"), m_szBloodFormulaKey);
	m_tblTreatmentPlan.SetValue(_T("htp_usonic_neck"), m_szUltraSonicNeck);
	m_tblTreatmentPlan.SetValue(_T("htp_usonic_abdomen"), m_szUltraSonicAbdomen);
	m_tblTreatmentPlan.SetValue(_T("htp_ita_spot"), m_szIATSpot);
	m_tblTreatmentPlan.SetValue(_T("htp_ita_all"), m_szIATAll);
	m_tblTreatmentPlan.SetValue(_T("htp_i2m_spot"), m_szI2MSpot);
	m_tblTreatmentPlan.SetValue(_T("htp_i2m_all"), m_szI2MAll);
	m_tblTreatmentPlan.SetValue(_T("htp_bi_spect"), m_szBISPECT);
	m_tblTreatmentPlan.SetValue(_T("htp_bi_ct"), m_szBICT);
	m_tblTreatmentPlan.SetValue(_T("htp_diagnose"), m_szDiagnose);
	m_tblTreatmentPlan.SetValue(_T("htp_stage"), m_szStage);
	m_tblTreatmentPlan.SetValue(_T("htp_relation_disease"), m_szAttackDisease);
	m_tblTreatmentPlan.SetValue(_T("htp_expected"), m_szExpectedTherapeuticDose);
	m_tblTreatmentPlan.SetValue(_T("htp_treatment_reason"), m_szTreatmentReason);
	m_tblTreatmentPlan.SetValue(_T("htp_neck_ganglion"), m_szNeckGanglion);
	m_tblTreatmentPlan.SetValue(_T("htp_relapse_risk"), m_szRelapseRisk);

	m_tblTGATG.SetValue(_T("htc_idx"), nIdx);
	m_tblTGATG.SetValue(_T("htc_patientno"), m_nPatientNo);
	m_tblTGATG.SetValue(_T("htc_tg"), m_szTg);
	m_tblTGATG.SetValue(_T("htc_atg"), m_szATg);
	m_tblTGATG.SetValue(_T("htc_dose"), m_szDose);
	m_tblTGATG.SetValue(_T("htc_time"), m_szTime);
	
}
void CHMSTreatmentPlanDlg::SetDefaultValues(){

	m_nPatientNo = 0;
	m_nDocNo = 0;
	m_szPatientName.Empty();
	m_szDocID.Empty();
	m_szDetectTime.Empty();
	m_szSymptom.Empty();
	m_szSurgery.Empty();
	m_szAdditionSurgery.Empty();
	m_szAfterSurgery.Empty();
	m_szGPBL.Empty();
	m_szDiseaseCombine.Empty();

	m_szUsingDrug.Empty();
	m_szFamilyKey.Empty();
	m_szCQKhac.Empty();
	m_szTSH.Empty();
	m_szCanxi.Empty();
	m_szKali.Empty();
	m_szTestThai.Empty();
	m_szTgATgChange.Empty();
	m_szSideEffect.Empty();
	m_szTg.Empty();
	m_szATg.Empty();
	m_szDose.Empty();
	m_szTime.Empty();
	m_szOBloodChemistryKey.Empty();
	m_szBloodWeirdo.Empty();
	m_szBloodFormulaKey.Empty();
	m_szUltraSonicNeck.Empty();
	m_szUltraSonicAbdomen.Empty();
	m_szIATSpot.Empty();
	m_szIATAll.Empty();
	m_szI2MSpot.Empty();
	m_szI2MAll.Empty();
	m_szBISPECT.Empty();
	m_szBICT.Empty();
	m_szDiagnose.Empty();
	m_szStage.Empty();
	m_szAttackDisease.Empty();
	m_szExpectedTherapeuticDose.Empty();
	m_szTreatmentReason.Empty();
	m_szNeckGanglion.Empty();
	m_szRelapseRisk.Empty();

}
int CHMSTreatmentPlanDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2,-1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2,-1);
			m_wndPatientNo.EnableWindow(FALSE);
			m_wndPatientName.EnableWindow(FALSE);
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
/*void CHMSTreatmentPlanDlg::OnPatientNoChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnPatientNoSetfocus(){
	
} */
void CHMSTreatmentPlanDlg::OnPatientNoKillfocus(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CString szSQL;
	szSQL.Format(_T("GET_PATIENTNAME(%ld)"), m_nDocNo);
	m_szPatientName = pMF->ExecDML(szSQL);
	_fmsg(_T("SQL: %s name : %s"), szSQL, m_szPatientName);
	UpdateData(FALSE);
}
int CHMSTreatmentPlanDlg::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnPatientNameChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnPatientNameSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnPatientNameKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnDocIDChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDocIDSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDocIDKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnDocIDCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnDetectTimeChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDetectTimeSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDetectTimeKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnDetectTimeCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnSymptomChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSymptomSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSymptomKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnSymptomCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnSurgeryChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSurgerySetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSurgeryKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnSurgeryCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnAdditionSurgeryChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAdditionSurgerySetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAdditionSurgeryKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnAdditionSurgeryCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnAfterSurgeryChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAfterSurgerySetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAfterSurgeryKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnAfterSurgeryCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnGPBLChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnGPBLSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnGPBLKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnGPBLCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnNeckGanglionChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnNeckGanglionSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnNeckGanglionKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnNeckGanglionCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnDiseaseCombineChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDiseaseCombineSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDiseaseCombineKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnDiseaseCombineCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnUsingDrugChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUsingDrugSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUsingDrugKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnUsingDrugCheckValue(){
	return 0;
} 
void CHMSTreatmentPlanDlg::OnFamilySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPlanDlg::OnFamilySelendok(){
	 
}
/*void CHMSTreatmentPlanDlg::OnFamilySetfocus(){
	
}*/
/*void CHMSTreatmentPlanDlg::OnFamilyKillfocus(){
	
}*/
long CHMSTreatmentPlanDlg::OnFamilyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFamily.IsSearchKey() && !m_szFamilyKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szFamilyKey);
	}
	m_wndFamily.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'htp_family' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFamily.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentPlanDlg::OnFamilyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPlanDlg::OnCQKhacChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnCQKhacSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnCQKhacKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnCQKhacCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTSHChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTSHSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTSHKillfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnRelapseRiskChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnRelapseRiskSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnRelapseRiskKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnRelapseRiskCheckValue(){
	return 0;
} 
int CHMSTreatmentPlanDlg::OnTSHCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnCanxiChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnCanxiSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnCanxiKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnCanxiCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnKaliChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnKaliSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnKaliKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnKaliCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTestThaiChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTestThaiSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTestThaiKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnTestThaiCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTgATgChangeChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTgATgChangeSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTgATgChangeKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnTgATgChangeCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnSideEffectChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSideEffectSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnSideEffectKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnSideEffectCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTgChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTgSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTgKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnTgCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnATgChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnATgSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnATgKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnATgCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnDoseChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDoseSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDoseKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnDoseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTimeChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTimeSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTimeKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnTimeCheckValue(){
	return 0;
} 
void CHMSTreatmentPlanDlg::OnOBloodChemistrySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPlanDlg::OnOBloodChemistrySelendok(){
	 
}
/*void CHMSTreatmentPlanDlg::OnOBloodChemistrySetfocus(){
	
}*/
/*void CHMSTreatmentPlanDlg::OnOBloodChemistryKillfocus(){
	
}*/
long CHMSTreatmentPlanDlg::OnOBloodChemistryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOBloodChemistry.IsSearchKey() && !m_szOBloodChemistryKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szOBloodChemistryKey);
	}
	m_wndOBloodChemistry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'htp_blood' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOBloodChemistry.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}
/*void CHMSTreatmentPlanDlg::OnOBloodChemistryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPlanDlg::OnBloodWeirdoChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBloodWeirdoSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBloodWeirdoKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnBloodWeirdoCheckValue(){
	return 0;
} 
void CHMSTreatmentPlanDlg::OnBloodFormulaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPlanDlg::OnBloodFormulaSelendok(){
	 
}
/*void CHMSTreatmentPlanDlg::OnBloodFormulaSetfocus(){
	
}*/
/*void CHMSTreatmentPlanDlg::OnBloodFormulaKillfocus(){
	
}*/
long CHMSTreatmentPlanDlg::OnBloodFormulaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBloodFormula.IsSearchKey() && !m_szBloodFormulaKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szBloodFormulaKey);
	}
	m_wndBloodFormula.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'htp_blood' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBloodFormula.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentPlanDlg::OnBloodFormulaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPlanDlg::OnUltraSonicNeckChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUltraSonicNeckSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUltraSonicNeckKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnUltraSonicNeckCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnUltraSonicAbdomenChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUltraSonicAbdomenSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnUltraSonicAbdomenKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnUltraSonicAbdomenCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnIATSpotChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnIATSpotSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnIATSpotKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnIATSpotCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnIATAllChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnIATAllSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnIATAllKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnIATAllCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnI2MSpotChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnI2MSpotSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnI2MSpotKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnI2MSpotCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnI2MAllChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnI2MAllSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnI2MAllKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnI2MAllCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnBISPECTChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBISPECTSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBISPECTKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnBISPECTCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnBICTChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBICTSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnBICTKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnBICTCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnDiagnoseChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDiagnoseSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnDiagnoseKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnDiagnoseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnStageChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnStageSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnStageKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnStageCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnAttackDiseaseChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAttackDiseaseSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnAttackDiseaseKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnAttackDiseaseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnExpectedTherapeuticDoseChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnExpectedTherapeuticDoseSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnExpectedTherapeuticDoseKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnExpectedTherapeuticDoseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPlanDlg::OnTreatmentReasonChange(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTreatmentReasonSetfocus(){
	
} */
/*void CHMSTreatmentPlanDlg::OnTreatmentReasonKillfocus(){
	
} */
int CHMSTreatmentPlanDlg::OnTreatmentReasonCheckValue(){
	return 0;
} 

void CHMSTreatmentPlanDlg::OnAppointmentListDblClick(){
	
} 
void CHMSTreatmentPlanDlg::OnAppointmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIDx = str2long(m_wndAppointmentList.GetItemText(nNewItem, 0));
	m_nPatientNo = str2long(m_wndAppointmentList.GetItemText(nNewItem, 2));
	GetDataToScreen();
} 
int CHMSTreatmentPlanDlg::OnAppointmentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentPlanDlg::OnAppointmentListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndAppointmentList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT htp_idx, GET_PATIENTNAME(htp_docno) as pname, htp_docid, htp_patientno FROM hms_treatment_plan WHERE htp_patientno = %ld"), m_nPatientNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAppointmentList.AddItems(
			rs.GetValue(_T("htp_idx")),
			rs.GetValue(_T("htp_docid")),
			rs.GetValue(_T("htp_patientno")),
			rs.GetValue(_T("pname")), NULL);
		rs.MoveNext();
	}
	m_wndAppointmentList.EndLoad(); 
	return nCount;

}
void CHMSTreatmentPlanDlg::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTreatmentPlanDlg();
} 
void CHMSTreatmentPlanDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentPlanDlg();
} 
void CHMSTreatmentPlanDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTreatmentPlanDlg();
} 
void CHMSTreatmentPlanDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSTreatmentPlanDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rs3(&pMF->m_db);
	//
	CStringArray szCurrent;
	szCurrent.Add(m_szTg);
	szCurrent.Add(m_szATg);
	szCurrent.Add(m_szDose);
	szCurrent.Add(m_szTime);

	CString szSQL, tmpStr, szTemp, szSQL2, szTmpPatientNo, szSQL3;
	int nIndex = 1;

	szSQL.Format(_T("select htp_docid, GET_PATIENTNAME(htp_docno) as pname, hp_birthdate as age, htp_patientno,") \
		_T(" HMS_GETSEX(hp_sex) as sex, hta_phone, htp_detect_time as ngayphathien, htp_symptom as trieuchung, htp_surgery as phauthuat, hd_contacttel,") \
		_T(" htp_add_surgery as ptbosung,htp_after_surgery as saupt, htp_gpbl as gpbl, htp_disease_combine as benhkethop, htp_relapse_risk as taiphat, ") \
		_T(" htp_using_drug as thuocdangdung, htp_family as giadinh, htp_cqkhac as cqkhac, htp_tsh as tsh, htp_canxi as canxi, htp_kali as kali, ") \
		_T(" htp_testthai as thai, htp_tgatg_change, htp_after_i131, htp_tg as tg, htp_atg as atg, htp_dose as dose, htp_time, htp_other_blood as shmaukhac, ") \
		_T(" htp_blood_weirdo, htp_blood_formula as ctmau, htp_usonic_neck as sieuamco, htp_usonic_abdomen as sieuambung, htp_ita_all, ") \
		_T(" htp_ita_spot, htp_i2m_all, htp_i2m_spot, htp_bi_spect, htp_bi_ct, htp_diagnose as chandoan, htp_stage as giaidoan, htp_neck_ganglion as hachco,") \
		_T(" htp_relation_disease as benhkemtheo, htp_expected as dukiendt, htp_treatment_reason as lydo ") \
		_T(" from hms_treatment_plan ") \
		_T(" left join hms_patient ON(hp_patientno = htp_patientno) ") \
		_T(" left join hms_treatment_appointment ON(hta_docno = htp_patientno) ") \
		_T(" left join hms_doc ON(hd_docno = htp_docno) ") \
		_T(" where htp_patientno = %ld and htp_idx = (select max(htp_idx) from hms_treatment_plan where htp_patientno = %ld)"), m_nPatientNo, m_nPatientNo);
	_fmsg(_T("%s"), szSQL);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	rs.GetValue(_T("htp_patientno"), szTmpPatientNo);
	szSQL2.Format(_T("select type,L1, L2, L3, L4, L5, L6, L7, L8, LS9, L10 ") \
					_T(" FROM( ") \
					_T("	SELECT * FROM ( ") \
					_T("	SELECT 'TG' as type, htc_idx, htc_tg FROM hms_tgatg_change WHERE htc_patientno = %ld) ") \
					_T("	PIVOT ( ") \
					_T("	sum(htc_tg) ") \
					_T("	FOR htc_idx IN (1 as L1, 2 as L2, 3 as L3, 4 as L4, 5 as L5, 6 as L6, 7 as L7, 8 as L8, 9 as LS9, 10 as L10) ") \
					_T("	) ") \
					_T(" UNION ALL ") \
					_T("	SELECT * FROM ( ") \
					_T("	SELECT 'A-Tg' as type, htc_idx, htc_atg FROM hms_tgatg_change WHERE htc_patientno = %ld) ") \
					_T("	PIVOT ( ") \
					_T("	sum(htc_atg) ") \
					_T("	FOR htc_idx IN (1 as L1, 2 as L2, 3 as L3, 4 as L4, 5 as L5, 6 as L6, 7 as L7, 8 as L8, 9 as LS9, 10 as L10) ") \
					_T("	) ") \
					_T(" UNION ALL ") \
					_T("	SELECT * FROM ( ") \
					_T("	SELECT 'Dose' as type, htc_idx, htc_dose FROM hms_tgatg_change WHERE htc_patientno = %ld) ") \
					_T("	PIVOT ( ") \
					_T("	sum(htc_dose) ") \
					_T("	FOR htc_idx IN (1 as L1, 2 as L2, 3 as L3, 4 as L4, 5 as L5, 6 as L6, 7 as L7, 8 as L8, 9 as LS9, 10 as L10) ") \
					_T("	) ") \
					_T(" UNION ALL ") \
					_T("	SELECT * FROM ( ") \
					_T("	SELECT 'Time' as type, htc_idx, htc_time FROM hms_tgatg_change WHERE htc_patientno = %ld) ") \
					_T("	PIVOT ( ") \
					_T("	sum(htc_time) ") \
					_T("	FOR htc_idx IN (1 as L1, 2 as L2, 3 as L3, 4 as L4, 5 as L5, 6 as L6, 7 as L7, 8 as L8, 9 as LS9, 10 as L10) ") \
					_T("	) )") , m_nPatientNo, m_nPatientNo, m_nPatientNo, m_nPatientNo);
	rs2.ExecSQL(szSQL2);

	szSQL3.Format(_T("select GET_OBJECTNAME(hd_object) as obj, GET_TRANSFERHOSPITALNAME(hd_transplaceid) as transplaceid, hd_admitdate, ") \
				_T(" he_pulse, he_weight, he_height, trim(he_bloodpressure||'/'||he_bloodpressurex) as ha , hcr_maindisease ") \
				_T(" from hms_doc ") \
				_T(" left join hms_patient ON(hd_patientno = hp_patientno) ") \
				_T(" left join hms_clinical_record ON(hcr_patientno = hp_patientno) ") \
				_T(" left join hms_exam ON(he_patientno = hp_patientno) ") \
				_T(" where hp_patientno = %ld and hd_admitdate = (select max(hd_admitdate) from hms_doc where hd_patientno = %ld) ") \
				_T(" and he_updateddate = (select max(he_updateddate) from hms_exam where he_patientno = %ld) ") \
				_T(" and hcr_admitdate = (select max(hcr_admitdate) from hms_clinical_record where hcr_patientno = %ld)"), m_nPatientNo, m_nPatientNo, m_nPatientNo, m_nPatientNo);
	rs3.ExecSQL(szSQL3);

	if (!rpt.Init(_T("Reports/HMS/TM_KEHOACHDIEUTRI.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"));
	CString dt;
	dt = pMF->GetSysDate();
	CDate::Convert(dt, yyyymmdd, ddmmyyyy);
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), dt.Right(2), dt.Mid(5,2), dt.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), tmpStr);
	//tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), rs.GetValue(_T("pname")));
	rpt.GetReportHeader()->SetValue(_T("MHS"), rs.GetValue(_T("htp_docid")));
	rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
	rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
	rpt.GetReportHeader()->SetValue(_T("Phone"), rs.GetValue(_T("hd_contacttel")));
	//noigui
	rpt.GetReportHeader()->SetValue(_T("ObjectName"), rs3.GetValue(_T("obj")));
	rpt.GetReportHeader()->SetValue(_T("Transplace"), rs3.GetValue(_T("transplaceid")));
	
	rpt.GetReportHeader()->SetValue(_T("detecttime"), CDate::Convert(rs.GetValue(_T("ngayphathien")), yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("symptom"), rs.GetValue(_T("trieuchung")));
	rpt.GetReportHeader()->SetValue(_T("surgery"), rs.GetValue(_T("phauthuat")));
	rpt.GetReportHeader()->SetValue(_T("addsurgery"), rs.GetValue(_T("ptbosung")));
	rpt.GetReportHeader()->SetValue(_T("aftersurgery"), rs.GetValue(_T("saupt")));
	rpt.GetReportHeader()->SetValue(_T("gpbl"), rs.GetValue(_T("gpbl")));
	rpt.GetReportHeader()->SetValue(_T("taiphat"), rs.GetValue(_T("taiphat")));
	rpt.GetReportHeader()->SetValue(_T("benhkethop"), rs.GetValue(_T("benhkethop")));
	rpt.GetReportHeader()->SetValue(_T("usingdrug"), rs.GetValue(_T("thuocdangdung")));
	//check family to tich
	if(rs.GetValue(_T("giadinh")) == _T("1"))
		rpt.GetReportHeader()->SetValue(_T("gd1"), _T("X"));
	else if(rs.GetValue(_T("giadinh")) == _T("2"))
		rpt.GetReportHeader()->SetValue(_T("gd2"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("gdk"), _T("X"));
	//
	rpt.GetReportHeader()->SetValue(_T("high"), rs3.GetValue(_T("he_height")));
	rpt.GetReportHeader()->SetValue(_T("weight"), rs3.GetValue(_T("he_weight")));
	rpt.GetReportHeader()->SetValue(_T("mach"), rs3.GetValue(_T("he_pulse")));
	rpt.GetReportHeader()->SetValue(_T("huyetap"), rs3.GetValue(_T("ha")));
	//hach co check
	if(!rs.GetValue(_T("hachco")).IsEmpty())
	{
		rpt.GetReportHeader()->SetValue(_T("hachco"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("hachcodetail"), rs.GetValue(_T("hachco")));
	}
	
	rpt.GetReportHeader()->SetValue(_T("cqkhac"), rs.GetValue(_T("cqkhac")));
	rpt.GetReportHeader()->SetValue(_T("tsh"), rs.GetValue(_T("tsh")));
	rpt.GetReportHeader()->SetValue(_T("canxi"), rs.GetValue(_T("canxi")));
	rpt.GetReportHeader()->SetValue(_T("kali"), rs.GetValue(_T("kali")));
	rpt.GetReportHeader()->SetValue(_T("testthai"), rs.GetValue(_T("thai")));
	rpt.GetReportHeader()->SetValue(_T("tdphu131"), rs.GetValue(_T("htp_after_i131")));
	
	//table
	int i =0;
	while(!rs2.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		rs2.GetValue(_T("type"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rptDetail->SetValue(_T("2"), szCurrent.GetAt(i));

		rs2.GetValue(_T("L1"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs2.GetValue(_T("L2"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs2.GetValue(_T("L3"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs2.GetValue(_T("L4"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs2.GetValue(_T("L5"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs2.GetValue(_T("L6"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs2.GetValue(_T("L7"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs2.GetValue(_T("L8"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs2.GetValue(_T("L9"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs2.GetValue(_T("L10"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs2.MoveNext();
		i++;
	}
	
	//under table
	//check shmau
	if(rs.GetValue(_T("shmaukhac")) == _T("1"))
		rpt.GetReportFooter()->SetValue(_T("shmaubt"), _T("X"));
	else
		rpt.GetReportFooter()->SetValue(_T("shmaubat"), _T("X"));
	rpt.GetReportFooter()->SetValue(_T("shmau"), rs.GetValue(_T("htp_blood_weirdo")));
	//check ctmau
	if(rs.GetValue(_T("ctmau")) == _T("1"))
		rpt.GetReportFooter()->SetValue(_T("ctmaubt"), _T("X"));
	else
		rpt.GetReportFooter()->SetValue(_T("ctmaubat"), _T("X"));

	rpt.GetReportFooter()->SetValue(_T("sieuamco"), rs.GetValue(_T("sieuamco")));
	rpt.GetReportFooter()->SetValue(_T("sieuambung"), rs.GetValue(_T("sieuambung")));
	rpt.GetReportFooter()->SetValue(_T("dtcdspot"), rs.GetValue(_T("htp_ita_spot")));
	rpt.GetReportFooter()->SetValue(_T("dtcdall"), rs.GetValue(_T("htp_ita_all")));
	rpt.GetReportFooter()->SetValue(_T("mcispot"), rs.GetValue(_T("htp_i2m_spot")));
	rpt.GetReportFooter()->SetValue(_T("mciall"), rs.GetValue(_T("htp_i2m_all")));
	rpt.GetReportFooter()->SetValue(_T("spect"), rs.GetValue(_T("htp_bi_spect")));
	rpt.GetReportFooter()->SetValue(_T("ct"), rs.GetValue(_T("htp_bi_ct")));
	rpt.GetReportFooter()->SetValue(_T("Diagnostic"), rs3.GetValue(_T("hcr_maindisease")));
	rpt.GetReportFooter()->SetValue(_T("RelationDisease"), rs.GetValue(_T("benhkemtheo")));
	rpt.GetReportFooter()->SetValue(_T("treatmentplan"), rs.GetValue(_T("dukiendt")));
	rpt.GetReportFooter()->SetValue(_T("giaidoan"), rs.GetValue(_T("giaidoan")));
	rpt.GetReportFooter()->SetValue(_T("reasontreatment"), rs.GetValue(_T("lydo")));

	EndWaitCursor();
	rpt.PrintPreview();
} 
int CHMSTreatmentPlanDlg::OnAddHMSTreatmentPlanDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPlanDlg::OnEditHMSTreatmentPlanDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPlanDlg::OnDeleteHMSTreatmentPlanDlg(){
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
 		OnCancelHMSTreatmentPlanDlg();
 	}
	return 0;
}
int CHMSTreatmentPlanDlg::OnSaveHMSTreatmentPlanDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szSQL2;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tblTreatmentPlan.GetInsertSQL();
		szSQL2 = m_tblTGATG.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
		CString szWhere, szWhere2;
		szWhere.Format(_T(" WHERE  htp_idx = %ld AND htp_patientno = %ld"), m_nIDx, m_nPatientNo);
 		szSQL = m_tblTreatmentPlan.GetUpdateSQL(_T("htp_idx,htp_patientno"));
 		szSQL += szWhere;
		
		szWhere2.Format(_T(" WHERE htc_idx = %ld AND htc_patientno = %ld"), m_nIDx, m_nPatientNo);
		szSQL2 = m_tblTreatmentPlan.GetUpdateSQL(_T("htc_idx, htc_patientno"));
		szSQL2 += szWhere2;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSTreatmentPlanDlgListLoadData();
		int ret2 = pMF->ExecSQL(szSQL2);
 		SetMode(VM_VIEW);
		OnAppointmentListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPlanDlg::OnCancelHMSTreatmentPlanDlg(){
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
int CHMSTreatmentPlanDlg::OnHMSTreatmentPlanDlgListLoadData(){
	return 0;
}
