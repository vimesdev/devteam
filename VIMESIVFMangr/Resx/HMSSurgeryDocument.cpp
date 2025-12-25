#include "HMSSurgeryDocument.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSexAddNew();
}*/
/*static void _OnProvillChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnProvillChange();
} */
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnProvillSetfocus();} */ 
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnProvillKillfocus();
} */
static int _OnProvillCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnProvillCheckValue();
} 
/*static void _OnDistrictChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDistrictChange();
} */
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDistrictSetfocus();} */ 
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDistrictKillfocus();
} */
static int _OnDistrictCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnDistrictCheckValue();
} 
/*static void _OnVillageChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnVillageChange();
} */
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnVillageSetfocus();} */ 
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnVillageKillfocus();
} */
static int _OnVillageCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnVillageCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAddressCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnObjectAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnRankAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnInsuranceCardChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnInsuranceCardChange();
} */
/*static void _OnInsuranceCardSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnInsuranceCardSetfocus();} */ 
/*static void _OnInsuranceCardKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnInsuranceCardKillfocus();
} */
static int _OnInsuranceCardCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnInsuranceCardCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnSurgeryTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnSurgeryTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryTableSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryTableSelendok();
}
/*static void _OnSurgeryTableSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryTableKillfocus();
}*/
/*static void _OnSurgeryTableKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryTableKillfocus();
}*/
static long _OnSurgeryTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnSurgeryTableLoadData();
}
/*static void _OnSurgeryTableAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryTableAddNew();
}*/
/*static void _OnDiagnosisChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiagnosisChange();
} */
/*static void _OnDiagnosisSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiagnosisSetfocus();} */ 
/*static void _OnDiagnosisKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnDiagnosisKillfocus();
} */
static int _OnDiagnosisCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnDiagnosisCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnCommentCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnCategoryAddNew();
}*/
static void _OnHitechTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnHitechTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHitechTypeSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnHitechTypeSelendok();
}
/*static void _OnHitechTypeSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnHitechTypeKillfocus();
}*/
/*static void _OnHitechTypeKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnHitechTypeKillfocus();
}*/
static long _OnHitechTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnHitechTypeLoadData();
}
/*static void _OnHitechTypeAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnHitechTypeAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnTypeAddNew();
}*/
static void _OnMajorSurgerySelectFnc(CWnd *pWnd){
	  ((CHMSSurgeryDocument*)pWnd)->OnMajorSurgerySelect();
}
static void _OnMinorSurgerySelectFnc(CWnd *pWnd){
	  ((CHMSSurgeryDocument*)pWnd)->OnMinorSurgerySelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnAnesthesiaMethod2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAnesthesiaMethod2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethod2SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethod2Selendok();
}
/*static void _OnAnesthesiaMethod2SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethod2Killfocus();
}*/
/*static void _OnAnesthesiaMethod2KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethod2Killfocus();
}*/
static long _OnAnesthesiaMethod2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethod2LoadData();
}
/*static void _OnAnesthesiaMethod2AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaMethod2AddNew();
}*/
static void _OnAnesthesiaResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAnesthesiaResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaResultSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaResultSelendok();
}
/*static void _OnAnesthesiaResultSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaResultKillfocus();
}*/
/*static void _OnAnesthesiaResultKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaResultKillfocus();
}*/
static long _OnAnesthesiaResultLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaResultLoadData();
}
/*static void _OnAnesthesiaResultAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthesiaResultAddNew();
}*/
static void _OnAnaestheticMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAnaestheticMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnaestheticMethodSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnaestheticMethodSelendok();
}
/*static void _OnAnaestheticMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnaestheticMethodKillfocus();
}*/
/*static void _OnAnaestheticMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnaestheticMethodKillfocus();
}*/
static long _OnAnaestheticMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAnaestheticMethodLoadData();
}
/*static void _OnAnaestheticMethodAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnaestheticMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAnesthetistAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAssist1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist1SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist1Selendok();
}
/*static void _OnAssist1SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist1Killfocus();
}*/
/*static void _OnAssist1KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist1Killfocus();
}*/
static long _OnAssist1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAssist1LoadData();
}
/*static void _OnAssist1AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist1AddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist2AddNew();
}*/
static void _OnAssist3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnAssist3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist3SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist3Selendok();
}
/*static void _OnAssist3SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist3Killfocus();
}*/
/*static void _OnAssist3KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist3Killfocus();
}*/
static long _OnAssist3LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAssist3LoadData();
}
/*static void _OnAssist3AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAssist3AddNew();
}*/
/*static void _OnBeforeSurgeryChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBeforeSurgeryChange();
} */
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBeforeSurgerySetfocus();} */ 
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnBeforeSurgeryKillfocus();
} */
static int _OnBeforeSurgeryCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnBeforeSurgeryCheckValue();
} 
/*static void _OnAfterSurgeryChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAfterSurgeryChange();
} */
/*static void _OnAfterSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAfterSurgerySetfocus();} */ 
/*static void _OnAfterSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnAfterSurgeryKillfocus();
} */
static int _OnAfterSurgeryCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnAfterSurgeryCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSSurgeryDocument *pVw = (CHMSSurgeryDocument *)pWnd;
	pVw->OnAddDrugSelect();
} 
static long _OnSurgeryListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument*)pWnd)->OnSurgeryListLoadData();
} 
static void _OnSurgeryListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryDocument*)pWnd)->OnSurgeryListDblClick();
} 
static void _OnSurgeryListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryDocument*)pWnd)->OnSurgeryListSelectChange(nOldItem, nNewItem);
} 
static int _OnSurgeryListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnSurgeryListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryDocument*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryDocument*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnPayrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDocument* )pWnd)->OnPayrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrateSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPayrateSelendok();
}
/*static void _OnPayrateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPayrateKillfocus();
}*/
/*static void _OnPayrateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPayrateKillfocus();
}*/
static long _OnPayrateLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDocument *)pWnd)->OnPayrateLoadData();
}
/*static void _OnPayrateAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDocument *)pWnd)->OnPayrateAddNew();
}*/
static int _OnAddHMSSurgeryDocumentFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnAddHMSSurgeryDocument();
} 
static int _OnEditHMSSurgeryDocumentFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnEditHMSSurgeryDocument();
} 
static int _OnDeleteHMSSurgeryDocumentFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnDeleteHMSSurgeryDocument();
} 
static int _OnSaveHMSSurgeryDocumentFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnSaveHMSSurgeryDocument();
} 
static int _OnCancelHMSSurgeryDocumentFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDocument*)pWnd)->OnCancelHMSSurgeryDocument();
} 
CHMSSurgeryDocument::CHMSSurgeryDocument(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSSurgeryDocument::~CHMSSurgeryDocument(){
}
void CHMSSurgeryDocument::OnCreateComponents(){
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 395, 615);
	m_wndSurgeryInformation.Create(this, _T("Surgery Information"), 400, 5, 1010, 615);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 135, 55);
	m_wndDocumentNo.Create(this,140, 30, 225, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 230, 30, 310, 55);
	m_wndRecordNo.Create(this,315, 30, 390, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 135, 85);
	m_wndPatientName.Create(this,140, 60, 390, 85); 
	m_wndBirthDateLabel.Create(this, _T("Year of birth"), 10, 90, 135, 115);
	m_wndBirthDate.Create(this,140, 90, 225, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 230, 90, 310, 115);
	m_wndSex.Create(this,315, 90, 390, 115); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 120, 135, 145);
	m_wndProvill.Create(this,140, 120, 390, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 150, 135, 175);
	m_wndDistrict.Create(this,140, 150, 390, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 180, 135, 205);
	m_wndVillage.Create(this,140, 180, 390, 205); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 210, 135, 235);
	m_wndAddress.Create(this,140, 210, 390, 235); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 240, 135, 265);
	m_wndObject.Create(this,140, 240, 390, 265); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 270, 135, 295);
	m_wndRank.Create(this,140, 270, 390, 295); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 300, 135, 325);
	m_wndDepartment.Create(this,140, 300, 390, 325); 
	m_wndInsuranceCardLabel.Create(this, _T("Insurance Card"), 10, 330, 135, 355);
	m_wndInsuranceCard.Create(this,140, 330, 345, 355); 
	m_wndDiscount.Create(this,350, 330, 390, 355); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 405, 30, 530, 55);
	m_wndPerformDate.Create(this,535, 30, 650, 55); 
	m_wndSurgeryTableLabel.Create(this, _T("Table"), 655, 30, 730, 55);
	m_wndSurgeryTable.Create(this,735, 30, 1005, 55); 
	m_wndDiagnosisLabel.Create(this, _T("Diagnosis"), 405, 60, 530, 85);
	m_wndDiagnosis.Create(this,535, 60, 1005, 85); 
	m_wndSurgeryNameLabel.Create(this, _T("Surgery Name"), 405, 90, 530, 115);
	m_wndSurgeryName.Create(this,535, 90, 1005, 115); 
	m_wndSurgeryLabel.Create(this, _T("Surgery Category"), 405, 150, 530, 175);
	m_wndCommentLabel.Create(this, _T("Surgical Method"), 405, 120, 530, 145);
	m_wndComment.Create(this,535, 120, 801, 145); 
	m_wndCategory.Create(this,535, 150, 640, 175); 
	m_wndHitechTypeLabel.Create(this, _T("Hitech Type"), 645, 150, 730, 175);
	m_wndHitechType.Create(this,735, 150, 845, 175); 
	m_wndTypeLabel.Create(this, _T("Type"), 850, 150, 885, 175);
	m_wndType.Create(this,890, 150, 1005, 175); 
	m_wndMajorSurgery.Create(this, _T(""), 0, 0, 25, 25);
	m_wndMinorSurgery.Create(this, _T(""), 0, 0, 25, 25);
	m_wndAnesthesiaMethodLabel.Create(this, _T("Anesthesia Method"), 405, 180, 530, 205);
	m_wndAnesthesiaMethod.Create(this,535, 180, 715, 205); 
	m_wndAnesthesiaMethod2Label.Create(this, _T("-- Method 2"), 720, 180, 820, 205);
	m_wndAnesthesiaMethod2.Create(this,825, 180, 1005, 205); 
	m_wndAnesthesiaResultLabel.Create(this, _T("Anesthesia Result"), 405, 210, 530, 235);
	m_wndAnesthesiaResult.Create(this,535, 210, 715, 235); 
	m_wndAnaestheticMethodLabel.Create(this, _T("Anaesthetic Method"), 720, 210, 820, 235);
	m_wndAnaestheticMethod.Create(this,825, 210, 1005, 235); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 405, 240, 530, 265);
	m_wndSurgeon.Create(this,535, 240, 715, 265); 
	m_wndAnesthetistLabel.Create(this, _T("Anesthetist"), 720, 240, 820, 265);
	m_wndAnesthetist.Create(this,825, 240, 1005, 265); 
	m_wndAssistLabel.Create(this, _T("Assist"), 405, 270, 530, 295);
	m_wndAssist.Create(this,535, 270, 715, 295); 
	m_wndAssist1Label.Create(this, _T("Assist1"), 720, 270, 820, 295);
	m_wndAssist1.Create(this,825, 270, 1005, 295); 
	m_wndAssist2Label.Create(this, _T("Assist2"), 405, 300, 530, 325);
	m_wndAssist2.Create(this,535, 300, 715, 325); 
	m_wndAssist3Label.Create(this, _T("Assist3"), 720, 300, 820, 325);
	m_wndAssist3.Create(this,825, 300, 1005, 325); 
	m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 405, 330, 530, 355);
	m_wndBeforeSurgery.Create(this,535, 330, 1005, 355); 
	m_wndAfterSurgeryLabel.Create(this, _T("After Surgery"), 405, 360, 530, 385);
	m_wndAfterSurgery.Create(this,535, 360, 1005, 385); 
	m_wndQtyLabel.Create(this, _T("Qty"), 806, 120, 841, 145);
	m_wndQty.Create(this,846, 120, 886, 145); 
	m_wndAdd.Create(this, _T("&Add"), 405, 390, 490, 415);
	m_wndEdit.Create(this, _T("&Edit"), 495, 390, 580, 415);
	m_wndDelete.Create(this, _T("&Delete"), 585, 390, 670, 415);
	m_wndSave.Create(this, _T("&Save"), 675, 390, 760, 415);
	m_wndCancel.Create(this, _T("&Cancel"), 765, 390, 850, 415);
	m_wndAddDrug.Create(this, _T("&Add Material && Drug"), 870, 390, 1005, 415);
	m_wndSurgeryList.Create(this,10, 360, 390, 615); 
	m_wndDrugList.Create(this,405, 420, 1005, 615); 
	m_wndPayrateLabel.Create(this, _T("Payrate"), 891, 120, 946, 145);
	m_wndPayrate.Create(this,951, 120, 1006, 145); 

}
void CHMSSurgeryDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(1024);
	m_wndRecordNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndProvill.SetLimitText(1024);
	m_wndProvill.SetCheckValue(true);
	m_wndDistrict.SetLimitText(1024);
	m_wndDistrict.SetCheckValue(true);
	m_wndVillage.SetLimitText(1024);
	m_wndVillage.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndInsuranceCard.SetLimitText(1024);
	m_wndInsuranceCard.SetCheckValue(true);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndSurgeryTable.SetCheckValue(true);
	m_wndSurgeryTable.LimitText(1024);
	m_wndDiagnosis.SetLimitText(1024);
	m_wndDiagnosis.SetCheckValue(true);
	m_wndSurgeryName.SetCheckValue(true);
	m_wndSurgeryName.LimitText(1024);
	m_wndComment.SetLimitText(1024);
	m_wndComment.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(1024);
	m_wndHitechType.SetCheckValue(true);
	m_wndHitechType.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndAnesthesiaMethod.SetCheckValue(true);
	m_wndAnesthesiaMethod.LimitText(1024);
	m_wndAnesthesiaMethod2.SetCheckValue(true);
	m_wndAnesthesiaMethod2.LimitText(1024);
	m_wndAnesthesiaResult.SetCheckValue(true);
	m_wndAnesthesiaResult.LimitText(1024);
	m_wndAnaestheticMethod.SetCheckValue(true);
	m_wndAnaestheticMethod.LimitText(1024);
	m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(1024);
	m_wndAnesthetist.SetCheckValue(true);
	m_wndAnesthetist.LimitText(1024);
	m_wndAssist.SetCheckValue(true);
	m_wndAssist.LimitText(1024);
	m_wndAssist1.SetCheckValue(true);
	m_wndAssist1.LimitText(1024);
	m_wndAssist2.SetCheckValue(true);
	m_wndAssist2.LimitText(1024);
	m_wndAssist3.SetCheckValue(true);
	m_wndAssist3.LimitText(1024);
	m_wndBeforeSurgery.SetLimitText(1024);
	m_wndBeforeSurgery.SetCheckValue(true);
	m_wndAfterSurgery.SetLimitText(1024);
	m_wndAfterSurgery.SetCheckValue(true);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndPayrate.SetCheckValue(true);
	m_wndPayrate.LimitText(35);












































	m_wndPayrate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSSurgeryDocument::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
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
	//m_wndProvill.SetEvent(WE_CHANGE, _OnProvillChangeFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_CHECKVALUE, _OnProvillCheckValueFnc);
	//m_wndDistrict.SetEvent(WE_CHANGE, _OnDistrictChangeFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_CHECKVALUE, _OnDistrictCheckValueFnc);
	//m_wndVillage.SetEvent(WE_CHANGE, _OnVillageChangeFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_CHECKVALUE, _OnVillageCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndInsuranceCard.SetEvent(WE_CHANGE, _OnInsuranceCardChangeFnc);
	//m_wndInsuranceCard.SetEvent(WE_SETFOCUS, _OnInsuranceCardSetfocusFnc);
	//m_wndInsuranceCard.SetEvent(WE_KILLFOCUS, _OnInsuranceCardKillfocusFnc);
	m_wndInsuranceCard.SetEvent(WE_CHECKVALUE, _OnInsuranceCardCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndSurgeryTable.SetEvent(WE_SELENDOK, _OnSurgeryTableSelendokFnc);
	//m_wndSurgeryTable.SetEvent(WE_SETFOCUS, _OnSurgeryTableSetfocusFnc);
	//m_wndSurgeryTable.SetEvent(WE_KILLFOCUS, _OnSurgeryTableKillfocusFnc);
	m_wndSurgeryTable.SetEvent(WE_SELCHANGE, _OnSurgeryTableSelectChangeFnc);
	m_wndSurgeryTable.SetEvent(WE_LOADDATA, _OnSurgeryTableLoadDataFnc);
	//m_wndSurgeryTable.SetEvent(WE_ADDNEW, _OnSurgeryTableAddNewFnc);
	//m_wndDiagnosis.SetEvent(WE_CHANGE, _OnDiagnosisChangeFnc);
	//m_wndDiagnosis.SetEvent(WE_SETFOCUS, _OnDiagnosisSetfocusFnc);
	//m_wndDiagnosis.SetEvent(WE_KILLFOCUS, _OnDiagnosisKillfocusFnc);
	m_wndDiagnosis.SetEvent(WE_CHECKVALUE, _OnDiagnosisCheckValueFnc);
	m_wndSurgeryName.SetEvent(WE_SELENDOK, _OnSurgeryNameSelendokFnc);
	//m_wndSurgeryName.SetEvent(WE_SETFOCUS, _OnSurgeryNameSetfocusFnc);
	//m_wndSurgeryName.SetEvent(WE_KILLFOCUS, _OnSurgeryNameKillfocusFnc);
	m_wndSurgeryName.SetEvent(WE_SELCHANGE, _OnSurgeryNameSelectChangeFnc);
	m_wndSurgeryName.SetEvent(WE_LOADDATA, _OnSurgeryNameLoadDataFnc);
	//m_wndSurgeryName.SetEvent(WE_ADDNEW, _OnSurgeryNameAddNewFnc);
	//m_wndComment.SetEvent(WE_CHANGE, _OnCommentChangeFnc);
	//m_wndComment.SetEvent(WE_SETFOCUS, _OnCommentSetfocusFnc);
	//m_wndComment.SetEvent(WE_KILLFOCUS, _OnCommentKillfocusFnc);
	m_wndComment.SetEvent(WE_CHECKVALUE, _OnCommentCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndHitechType.SetEvent(WE_SELENDOK, _OnHitechTypeSelendokFnc);
	//m_wndHitechType.SetEvent(WE_SETFOCUS, _OnHitechTypeSetfocusFnc);
	//m_wndHitechType.SetEvent(WE_KILLFOCUS, _OnHitechTypeKillfocusFnc);
	m_wndHitechType.SetEvent(WE_SELCHANGE, _OnHitechTypeSelectChangeFnc);
	m_wndHitechType.SetEvent(WE_LOADDATA, _OnHitechTypeLoadDataFnc);
	//m_wndHitechType.SetEvent(WE_ADDNEW, _OnHitechTypeAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndMajorSurgery.SetEvent(WE_CLICK, _OnMajorSurgerySelectFnc);
	m_wndMinorSurgery.SetEvent(WE_CLICK, _OnMinorSurgerySelectFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_SELENDOK, _OnAnesthesiaMethodSelendokFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_SETFOCUS, _OnAnesthesiaMethodSetfocusFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_KILLFOCUS, _OnAnesthesiaMethodKillfocusFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_SELCHANGE, _OnAnesthesiaMethodSelectChangeFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_LOADDATA, _OnAnesthesiaMethodLoadDataFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_ADDNEW, _OnAnesthesiaMethodAddNewFnc);
	m_wndAnesthesiaMethod2.SetEvent(WE_SELENDOK, _OnAnesthesiaMethod2SelendokFnc);
	//m_wndAnesthesiaMethod2.SetEvent(WE_SETFOCUS, _OnAnesthesiaMethod2SetfocusFnc);
	//m_wndAnesthesiaMethod2.SetEvent(WE_KILLFOCUS, _OnAnesthesiaMethod2KillfocusFnc);
	m_wndAnesthesiaMethod2.SetEvent(WE_SELCHANGE, _OnAnesthesiaMethod2SelectChangeFnc);
	m_wndAnesthesiaMethod2.SetEvent(WE_LOADDATA, _OnAnesthesiaMethod2LoadDataFnc);
	//m_wndAnesthesiaMethod2.SetEvent(WE_ADDNEW, _OnAnesthesiaMethod2AddNewFnc);
	m_wndAnesthesiaResult.SetEvent(WE_SELENDOK, _OnAnesthesiaResultSelendokFnc);
	//m_wndAnesthesiaResult.SetEvent(WE_SETFOCUS, _OnAnesthesiaResultSetfocusFnc);
	//m_wndAnesthesiaResult.SetEvent(WE_KILLFOCUS, _OnAnesthesiaResultKillfocusFnc);
	m_wndAnesthesiaResult.SetEvent(WE_SELCHANGE, _OnAnesthesiaResultSelectChangeFnc);
	m_wndAnesthesiaResult.SetEvent(WE_LOADDATA, _OnAnesthesiaResultLoadDataFnc);
	//m_wndAnesthesiaResult.SetEvent(WE_ADDNEW, _OnAnesthesiaResultAddNewFnc);
	m_wndAnaestheticMethod.SetEvent(WE_SELENDOK, _OnAnaestheticMethodSelendokFnc);
	//m_wndAnaestheticMethod.SetEvent(WE_SETFOCUS, _OnAnaestheticMethodSetfocusFnc);
	//m_wndAnaestheticMethod.SetEvent(WE_KILLFOCUS, _OnAnaestheticMethodKillfocusFnc);
	m_wndAnaestheticMethod.SetEvent(WE_SELCHANGE, _OnAnaestheticMethodSelectChangeFnc);
	m_wndAnaestheticMethod.SetEvent(WE_LOADDATA, _OnAnaestheticMethodLoadDataFnc);
	//m_wndAnaestheticMethod.SetEvent(WE_ADDNEW, _OnAnaestheticMethodAddNewFnc);
	m_wndSurgeon.SetEvent(WE_SELENDOK, _OnSurgeonSelendokFnc);
	//m_wndSurgeon.SetEvent(WE_SETFOCUS, _OnSurgeonSetfocusFnc);
	//m_wndSurgeon.SetEvent(WE_KILLFOCUS, _OnSurgeonKillfocusFnc);
	m_wndSurgeon.SetEvent(WE_SELCHANGE, _OnSurgeonSelectChangeFnc);
	m_wndSurgeon.SetEvent(WE_LOADDATA, _OnSurgeonLoadDataFnc);
	//m_wndSurgeon.SetEvent(WE_ADDNEW, _OnSurgeonAddNewFnc);
	m_wndAnesthetist.SetEvent(WE_SELENDOK, _OnAnesthetistSelendokFnc);
	//m_wndAnesthetist.SetEvent(WE_SETFOCUS, _OnAnesthetistSetfocusFnc);
	//m_wndAnesthetist.SetEvent(WE_KILLFOCUS, _OnAnesthetistKillfocusFnc);
	m_wndAnesthetist.SetEvent(WE_SELCHANGE, _OnAnesthetistSelectChangeFnc);
	m_wndAnesthetist.SetEvent(WE_LOADDATA, _OnAnesthetistLoadDataFnc);
	//m_wndAnesthetist.SetEvent(WE_ADDNEW, _OnAnesthetistAddNewFnc);
	m_wndAssist.SetEvent(WE_SELENDOK, _OnAssistSelendokFnc);
	//m_wndAssist.SetEvent(WE_SETFOCUS, _OnAssistSetfocusFnc);
	//m_wndAssist.SetEvent(WE_KILLFOCUS, _OnAssistKillfocusFnc);
	m_wndAssist.SetEvent(WE_SELCHANGE, _OnAssistSelectChangeFnc);
	m_wndAssist.SetEvent(WE_LOADDATA, _OnAssistLoadDataFnc);
	//m_wndAssist.SetEvent(WE_ADDNEW, _OnAssistAddNewFnc);
	m_wndAssist1.SetEvent(WE_SELENDOK, _OnAssist1SelendokFnc);
	//m_wndAssist1.SetEvent(WE_SETFOCUS, _OnAssist1SetfocusFnc);
	//m_wndAssist1.SetEvent(WE_KILLFOCUS, _OnAssist1KillfocusFnc);
	m_wndAssist1.SetEvent(WE_SELCHANGE, _OnAssist1SelectChangeFnc);
	m_wndAssist1.SetEvent(WE_LOADDATA, _OnAssist1LoadDataFnc);
	//m_wndAssist1.SetEvent(WE_ADDNEW, _OnAssist1AddNewFnc);
	m_wndAssist2.SetEvent(WE_SELENDOK, _OnAssist2SelendokFnc);
	//m_wndAssist2.SetEvent(WE_SETFOCUS, _OnAssist2SetfocusFnc);
	//m_wndAssist2.SetEvent(WE_KILLFOCUS, _OnAssist2KillfocusFnc);
	m_wndAssist2.SetEvent(WE_SELCHANGE, _OnAssist2SelectChangeFnc);
	m_wndAssist2.SetEvent(WE_LOADDATA, _OnAssist2LoadDataFnc);
	//m_wndAssist2.SetEvent(WE_ADDNEW, _OnAssist2AddNewFnc);
	m_wndAssist3.SetEvent(WE_SELENDOK, _OnAssist3SelendokFnc);
	//m_wndAssist3.SetEvent(WE_SETFOCUS, _OnAssist3SetfocusFnc);
	//m_wndAssist3.SetEvent(WE_KILLFOCUS, _OnAssist3KillfocusFnc);
	m_wndAssist3.SetEvent(WE_SELCHANGE, _OnAssist3SelectChangeFnc);
	m_wndAssist3.SetEvent(WE_LOADDATA, _OnAssist3LoadDataFnc);
	//m_wndAssist3.SetEvent(WE_ADDNEW, _OnAssist3AddNewFnc);
	//m_wndBeforeSurgery.SetEvent(WE_CHANGE, _OnBeforeSurgeryChangeFnc);
	//m_wndBeforeSurgery.SetEvent(WE_SETFOCUS, _OnBeforeSurgerySetfocusFnc);
	//m_wndBeforeSurgery.SetEvent(WE_KILLFOCUS, _OnBeforeSurgeryKillfocusFnc);
	m_wndBeforeSurgery.SetEvent(WE_CHECKVALUE, _OnBeforeSurgeryCheckValueFnc);
	//m_wndAfterSurgery.SetEvent(WE_CHANGE, _OnAfterSurgeryChangeFnc);
	//m_wndAfterSurgery.SetEvent(WE_SETFOCUS, _OnAfterSurgerySetfocusFnc);
	//m_wndAfterSurgery.SetEvent(WE_KILLFOCUS, _OnAfterSurgeryKillfocusFnc);
	m_wndAfterSurgery.SetEvent(WE_CHECKVALUE, _OnAfterSurgeryCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddDrug.SetEvent(WE_CLICK, _OnAddDrugSelectFnc);
	m_wndSurgeryList.SetEvent(WE_SELCHANGE, _OnSurgeryListSelectChangeFnc);
	m_wndSurgeryList.SetEvent(WE_LOADDATA, _OnSurgeryListLoadDataFnc);
	m_wndSurgeryList.SetEvent(WE_DBLCLICK, _OnSurgeryListDblClickFnc);
	m_wndSurgeryList.AddEvent(1, _T("Delete"), _OnSurgeryListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPayrate.SetEvent(WE_SELENDOK, _OnPayrateSelendokFnc);
	//m_wndPayrate.SetEvent(WE_SETFOCUS, _OnPayrateSetfocusFnc);
	//m_wndPayrate.SetEvent(WE_KILLFOCUS, _OnPayrateKillfocusFnc);
	m_wndPayrate.SetEvent(WE_SELCHANGE, _OnPayrateSelectChangeFnc);
	m_wndPayrate.SetEvent(WE_LOADDATA, _OnPayrateLoadDataFnc);
	//m_wndPayrate.SetEvent(WE_ADDNEW, _OnPayrateAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryDocumentFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSSurgeryDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvill);
	DDX_Text(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrict);
	DDX_Text(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillage);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndInsuranceCard.GetDlgCtrlID(), m_szInsuranceCard);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndSurgeryTable.GetDlgCtrlID(), m_szSurgeryTableKey);
	DDX_Text(pDX, m_wndDiagnosis.GetDlgCtrlID(), m_szDiagnosis);
	DDX_TextEx(pDX, m_wndSurgeryName.GetDlgCtrlID(), m_szSurgeryNameKey);
	DDX_Text(pDX, m_wndComment.GetDlgCtrlID(), m_szComment);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndHitechType.GetDlgCtrlID(), m_szHitechTypeKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Radio(pDX, m_wndMajorSurgery.GetDlgCtrlID(), m_nMajorSurgery);
	DDX_Radio(pDX, m_wndMinorSurgery.GetDlgCtrlID(), m_nMinorSurgery);
	DDX_TextEx(pDX, m_wndAnesthesiaMethod.GetDlgCtrlID(), m_szAnesthesiaMethodKey);
	DDX_TextEx(pDX, m_wndAnesthesiaMethod2.GetDlgCtrlID(), m_szAnesthesiaMethod2Key);
	DDX_TextEx(pDX, m_wndAnesthesiaResult.GetDlgCtrlID(), m_szAnesthesiaResultKey);
	DDX_TextEx(pDX, m_wndAnaestheticMethod.GetDlgCtrlID(), m_szAnaestheticMethodKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_TextEx(pDX, m_wndAnesthetist.GetDlgCtrlID(), m_szAnesthetistKey);
	DDX_TextEx(pDX, m_wndAssist.GetDlgCtrlID(), m_szAssistKey);
	DDX_TextEx(pDX, m_wndAssist1.GetDlgCtrlID(), m_szAssist1Key);
	DDX_TextEx(pDX, m_wndAssist2.GetDlgCtrlID(), m_szAssist2Key);
	DDX_TextEx(pDX, m_wndAssist3.GetDlgCtrlID(), m_szAssist3Key);
	DDX_Text(pDX, m_wndBeforeSurgery.GetDlgCtrlID(), m_szBeforeSurgery);
	DDX_Text(pDX, m_wndAfterSurgery.GetDlgCtrlID(), m_szAfterSurgery);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndPayrate.GetDlgCtrlID(), m_szPayrateKey);

}
void CHMSSurgeryDocument::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Provill")] =  m_szProvill;
	m_jData[_T("District")] =  m_szDistrict;
	m_jData[_T("Village")] =  m_szVillage;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("Rank")] =  m_szRankKey;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("InsuranceCard")] =  m_szInsuranceCard;
	m_jData[_T("Discount")] =  m_nDiscount;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	m_jData[_T("SurgeryTable")] =  m_szSurgeryTableKey;
	m_jData[_T("Diagnosis")] =  m_szDiagnosis;
	m_jData[_T("SurgeryName")] =  m_szSurgeryNameKey;
	m_jData[_T("Comment")] =  m_szComment;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("HitechType")] =  m_szHitechTypeKey;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("MajorSurgery")] =  m_nMajorSurgery;
	m_jData[_T("MinorSurgery")] =  m_nMinorSurgery;
	m_jData[_T("AnesthesiaMethod")] =  m_szAnesthesiaMethodKey;
	m_jData[_T("AnesthesiaMethod2")] =  m_szAnesthesiaMethod2Key;
	m_jData[_T("AnesthesiaResult")] =  m_szAnesthesiaResultKey;
	m_jData[_T("AnaestheticMethod")] =  m_szAnaestheticMethodKey;
	m_jData[_T("Surgeon")] =  m_szSurgeonKey;
	m_jData[_T("Anesthetist")] =  m_szAnesthetistKey;
	m_jData[_T("Assist")] =  m_szAssistKey;
	m_jData[_T("Assist1")] =  m_szAssist1Key;
	m_jData[_T("Assist2")] =  m_szAssist2Key;
	m_jData[_T("Assist3")] =  m_szAssist3Key;
	m_jData[_T("BeforeSurgery")] =  m_szBeforeSurgery;
	m_jData[_T("AfterSurgery")] =  m_szAfterSurgery;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Payrate")] =  m_szPayrateKey;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Provill")].GetValue(m_szProvill);
	m_jData[_T("District")].GetValue(m_szDistrict);
	m_jData[_T("Village")].GetValue(m_szVillage);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("Rank")].GetValue(m_szRankKey);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("InsuranceCard")].GetValue(m_szInsuranceCard);
	m_jData[_T("Discount")].GetValue(m_nDiscount);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	m_jData[_T("SurgeryTable")].GetValue(m_szSurgeryTableKey);
	m_jData[_T("Diagnosis")].GetValue(m_szDiagnosis);
	m_jData[_T("SurgeryName")].GetValue(m_szSurgeryNameKey);
	m_jData[_T("Comment")].GetValue(m_szComment);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("HitechType")].GetValue(m_szHitechTypeKey);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("MajorSurgery")].GetValue(m_nMajorSurgery);
	m_jData[_T("MinorSurgery")].GetValue(m_nMinorSurgery);
	m_jData[_T("AnesthesiaMethod")].GetValue(m_szAnesthesiaMethodKey);
	m_jData[_T("AnesthesiaMethod2")].GetValue(m_szAnesthesiaMethod2Key);
	m_jData[_T("AnesthesiaResult")].GetValue(m_szAnesthesiaResultKey);
	m_jData[_T("AnaestheticMethod")].GetValue(m_szAnaestheticMethodKey);
	m_jData[_T("Surgeon")].GetValue(m_szSurgeonKey);
	m_jData[_T("Anesthetist")].GetValue(m_szAnesthetistKey);
	m_jData[_T("Assist")].GetValue(m_szAssistKey);
	m_jData[_T("Assist1")].GetValue(m_szAssist1Key);
	m_jData[_T("Assist2")].GetValue(m_szAssist2Key);
	m_jData[_T("Assist3")].GetValue(m_szAssist3Key);
	m_jData[_T("BeforeSurgery")].GetValue(m_szBeforeSurgery);
	m_jData[_T("AfterSurgery")].GetValue(m_szAfterSurgery);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Payrate")].GetValue(m_szPayrateKey);
	}

}
void CHMSSurgeryDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryDocument::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szRecordNo.Empty();
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szProvill.Empty();
	m_szDistrict.Empty();
	m_szVillage.Empty();
	m_szAddress.Empty();
	m_szObjectKey.Empty();
	m_szRankKey.Empty();
	m_szDepartmentKey.Empty();
	m_szInsuranceCard.Empty();
	m_nDiscount=0;
	m_szPerformDate.Empty();
	m_szSurgeryTableKey.Empty();
	m_szDiagnosis.Empty();
	m_szSurgeryNameKey.Empty();
	m_szComment.Empty();
	m_szCategoryKey.Empty();
	m_szHitechTypeKey.Empty();
	m_szTypeKey.Empty();
	m_nMajorSurgery=0;
	m_nMinorSurgery=0;
	m_szAnesthesiaMethodKey.Empty();
	m_szAnesthesiaMethod2Key.Empty();
	m_szAnesthesiaResultKey.Empty();
	m_szAnaestheticMethodKey.Empty();
	m_szSurgeonKey.Empty();
	m_szAnesthetistKey.Empty();
	m_szAssistKey.Empty();
	m_szAssist1Key.Empty();
	m_szAssist2Key.Empty();
	m_szAssist3Key.Empty();
	m_szBeforeSurgery.Empty();
	m_szAfterSurgery.Empty();
	m_nQty=0;
	m_szPayrateKey.Empty();

}
int CHMSSurgeryDocument::SetMode(int nMode){
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
/*void CHMSSurgeryDocument::OnDocumentNoChange(){
	
} */
/*void CHMSSurgeryDocument::OnDocumentNoSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnDocumentNoKillfocus(){
	
} */
int CHMSSurgeryDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnRecordNoChange(){
	
} */
/*void CHMSSurgeryDocument::OnRecordNoSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnRecordNoKillfocus(){
	
} */
int CHMSSurgeryDocument::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnPatientNameChange(){
	
} */
/*void CHMSSurgeryDocument::OnPatientNameSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnPatientNameKillfocus(){
	
} */
int CHMSSurgeryDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnBirthDateChange(){
	
} */
/*void CHMSSurgeryDocument::OnBirthDateSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnBirthDateKillfocus(){
	
} */
int CHMSSurgeryDocument::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSexSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnSexSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnSexKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnSexLoadData(){
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
/*void CHMSSurgeryDocument::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryDocument::OnProvillChange(){
	
} */
/*void CHMSSurgeryDocument::OnProvillSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnProvillKillfocus(){
	
} */
int CHMSSurgeryDocument::OnProvillCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnDistrictChange(){
	
} */
/*void CHMSSurgeryDocument::OnDistrictSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnDistrictKillfocus(){
	
} */
int CHMSSurgeryDocument::OnDistrictCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnVillageChange(){
	
} */
/*void CHMSSurgeryDocument::OnVillageSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnVillageKillfocus(){
	
} */
int CHMSSurgeryDocument::OnVillageCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnAddressChange(){
	
} */
/*void CHMSSurgeryDocument::OnAddressSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnAddressKillfocus(){
	
} */
int CHMSSurgeryDocument::OnAddressCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnObjectSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnObjectSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnObjectKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnObjectLoadData(){
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
/*void CHMSSurgeryDocument::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnRankSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnRankSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnRankKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnRankLoadData(){
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
/*void CHMSSurgeryDocument::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnDepartmentSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnDepartmentSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnDepartmentKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryDocument::OnInsuranceCardChange(){
	
} */
/*void CHMSSurgeryDocument::OnInsuranceCardSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnInsuranceCardKillfocus(){
	
} */
int CHMSSurgeryDocument::OnInsuranceCardCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnDiscountChange(){
	
} */
/*void CHMSSurgeryDocument::OnDiscountSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnDiscountKillfocus(){
	
} */
int CHMSSurgeryDocument::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnPerformDateChange(){
	
} */
/*void CHMSSurgeryDocument::OnPerformDateSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnPerformDateKillfocus(){
	
} */
int CHMSSurgeryDocument::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnSurgeryTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSurgeryTableSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnSurgeryTableSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnSurgeryTableKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnSurgeryTableLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryTable.IsSearchKey() && !m_szSurgeryTableKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSurgeryTableKey
};
	m_wndSurgeryTable.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryTable.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnSurgeryTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryDocument::OnDiagnosisChange(){
	
} */
/*void CHMSSurgeryDocument::OnDiagnosisSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnDiagnosisKillfocus(){
	
} */
int CHMSSurgeryDocument::OnDiagnosisCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSurgeryNameSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnSurgeryNameKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnSurgeryNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryName.IsSearchKey() && !m_szSurgeryNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSurgeryNameKey
};
	m_wndSurgeryName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryDocument::OnCommentChange(){
	
} */
/*void CHMSSurgeryDocument::OnCommentSetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnCommentKillfocus(){
	
} */
int CHMSSurgeryDocument::OnCommentCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnCategorySelendok(){
	 
}
/*void CHMSSurgeryDocument::OnCategorySetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnCategoryKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnHitechTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnHitechTypeSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnHitechTypeSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnHitechTypeKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnHitechTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHitechType.IsSearchKey() && !m_szHitechTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHitechTypeKey
};
	m_wndHitechType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHitechType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnHitechTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnTypeSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnTypeSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnTypeKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnMajorSurgerySelect(){
	
}
void CHMSSurgeryDocument::OnMinorSurgerySelect(){
	
}
void CHMSSurgeryDocument::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAnesthesiaMethodSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAnesthesiaMethodKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnAnesthesiaMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthesiaMethod.IsSearchKey() && !m_szAnesthesiaMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthesiaMethodKey
};
	m_wndAnesthesiaMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthesiaMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAnesthesiaMethod2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAnesthesiaMethod2Selendok(){
	 
}
/*void CHMSSurgeryDocument::OnAnesthesiaMethod2Setfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAnesthesiaMethod2Killfocus(){
	
}*/
long CHMSSurgeryDocument::OnAnesthesiaMethod2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthesiaMethod2.IsSearchKey() && !m_szAnesthesiaMethod2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthesiaMethod2Key
};
	m_wndAnesthesiaMethod2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthesiaMethod2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAnesthesiaMethod2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAnesthesiaResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAnesthesiaResultSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnAnesthesiaResultSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAnesthesiaResultKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnAnesthesiaResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthesiaResult.IsSearchKey() && !m_szAnesthesiaResultKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthesiaResultKey
};
	m_wndAnesthesiaResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthesiaResult.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAnesthesiaResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAnaestheticMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAnaestheticMethodSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnAnaestheticMethodSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAnaestheticMethodKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnAnaestheticMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnaestheticMethod.IsSearchKey() && !m_szAnaestheticMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnaestheticMethodKey
};
	m_wndAnaestheticMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnaestheticMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAnaestheticMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSurgeonSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnSurgeonSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnSurgeonKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnSurgeonLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSurgeonKey
};
	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAnesthetistSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAnesthetistKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnAnesthetistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthetist.IsSearchKey() && !m_szAnesthetistKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthetistKey
};
	m_wndAnesthetist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthetist.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAssistSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnAssistSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAssistKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnAssistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist.IsSearchKey() && !m_szAssistKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssistKey
};
	m_wndAssist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAssist1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAssist1Selendok(){
	 
}
/*void CHMSSurgeryDocument::OnAssist1Setfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAssist1Killfocus(){
	
}*/
long CHMSSurgeryDocument::OnAssist1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist1.IsSearchKey() && !m_szAssist1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssist1Key
};
	m_wndAssist1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist1.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAssist1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAssist2Selendok(){
	 
}
/*void CHMSSurgeryDocument::OnAssist2Setfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAssist2Killfocus(){
	
}*/
long CHMSSurgeryDocument::OnAssist2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist2.IsSearchKey() && !m_szAssist2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssist2Key
};
	m_wndAssist2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDocument::OnAssist3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAssist3Selendok(){
	 
}
/*void CHMSSurgeryDocument::OnAssist3Setfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnAssist3Killfocus(){
	
}*/
long CHMSSurgeryDocument::OnAssist3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist3.IsSearchKey() && !m_szAssist3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssist3Key
};
	m_wndAssist3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist3.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnAssist3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryDocument::OnBeforeSurgeryChange(){
	
} */
/*void CHMSSurgeryDocument::OnBeforeSurgerySetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnBeforeSurgeryKillfocus(){
	
} */
int CHMSSurgeryDocument::OnBeforeSurgeryCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnAfterSurgeryChange(){
	
} */
/*void CHMSSurgeryDocument::OnAfterSurgerySetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnAfterSurgeryKillfocus(){
	
} */
int CHMSSurgeryDocument::OnAfterSurgeryCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDocument::OnQtyChange(){
	
} */
/*void CHMSSurgeryDocument::OnQtySetfocus(){
	
} */
/*void CHMSSurgeryDocument::OnQtyKillfocus(){
	
} */
int CHMSSurgeryDocument::OnQtyCheckValue(){
	return 0;
} 
void CHMSSurgeryDocument::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnAddDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnSurgeryListDblClick(){
	
} 
void CHMSSurgeryDocument::OnSurgeryListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryDocument::OnSurgeryListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryDocument::OnSurgeryListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSurgeryList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryList.AddItems(
		rs.MoveNext();
	}
	m_wndSurgeryList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSSurgeryDocument::OnDrugListDblClick(){
	
} 
void CHMSSurgeryDocument::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryDocument::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryDocument::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSSurgeryDocument::OnPayrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDocument::OnPayrateSelendok(){
	 
}
/*void CHMSSurgeryDocument::OnPayrateSetfocus(){
	
}*/
/*void CHMSSurgeryDocument::OnPayrateKillfocus(){
	
}*/
long CHMSSurgeryDocument::OnPayrateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate.IsSearchKey() && !m_szPayrateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrateKey
};
	m_wndPayrate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDocument::OnPayrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSSurgeryDocument::OnAddHMSSurgeryDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSurgeryDocument::OnEditHMSSurgeryDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryDocument::OnDeleteHMSSurgeryDocument(){
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
 		OnCancelHMSSurgeryDocument();
 	}
	return 0;
}
int CHMSSurgeryDocument::OnSaveHMSSurgeryDocument(){
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
 		//OnHMSSurgeryDocumentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSurgeryDocument::OnCancelHMSSurgeryDocument(){
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
int CHMSSurgeryDocument::OnHMSSurgeryDocumentListLoadData(){
	return 0;
}
