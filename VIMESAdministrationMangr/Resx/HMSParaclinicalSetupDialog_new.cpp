#include "HMSParaclinicalSetupDialog_new.h"
#include "MainFrm.h"
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnNewPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNewPriceChange();
} */
/*static void _OnNewPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNewPriceSetfocus();} */ 
/*static void _OnNewPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNewPriceKillfocus();
} */
static int _OnNewPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNewPriceCheckValue();
} 
static void _OnGroupLabelSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnGroupLabelSelect();
}
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupAddNew();
}*/
static void _OnFeeCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnFeeCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeCategorySelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategorySelendok();
}
/*static void _OnFeeCategorySetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryKillfocus();
}*/
/*static void _OnFeeCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryKillfocus();
}*/
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryLoadData();
}
/*static void _OnFeeCategoryAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPerformPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnPerformPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformPlaceSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceSelendok();
}
/*static void _OnPerformPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceKillfocus();
}*/
/*static void _OnPerformPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceKillfocus();
}*/
static long _OnPerformPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceLoadData();
}
/*static void _OnPerformPlaceAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceCheckValue();
} 
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnInsurancePaymentSelect();
}
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceCheckValue();
} 
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnPolicyPaymentSelect();
}
static void _OnRequestPriceLabelSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnRequestPriceLabelSelect();
}
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceCheckValue();
} 
/*static void _OnInsDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentChange();
} */
/*static void _OnInsDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentSetfocus();} */ 
/*static void _OnInsDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentKillfocus();
} */
static int _OnInsDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentCheckValue();
} 
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnDifferencePaymentSelect();
}
/*static void _OnPolDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentChange();
} */
/*static void _OnPolDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentSetfocus();} */ 
/*static void _OnPolDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentKillfocus();
} */
static int _OnPolDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentCheckValue();
} 
/*static void _OnSalaryChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnSalaryChange();
} */
/*static void _OnSalarySetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnSalarySetfocus();} */ 
/*static void _OnSalaryKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnSalaryKillfocus();
} */
static int _OnSalaryCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnSalaryCheckValue();
} 
static void _OnObjectAppliedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnObjectAppliedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectAppliedSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedSelendok();
}
/*static void _OnObjectAppliedSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedKillfocus();
}*/
/*static void _OnObjectAppliedKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedKillfocus();
}*/
static long _OnObjectAppliedLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedLoadData();
}
/*static void _OnObjectAppliedAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedAddNew();
}*/
static void _OnReturnDeptLabelSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnReturnDeptLabelSelect();
}
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptCheckValue();
} 
/*static void _OnMaleIndexChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexChange();
} */
/*static void _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexSetfocus();} */ 
/*static void _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexCheckValue();
} 
/*static void _OnFemaleIndexChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexChange();
} */
/*static void _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexSetfocus();} */ 
/*static void _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexCheckValue();
} 
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnHitechSelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnHitechMachineSelect();
}
static void _OnPlasticSurgerySelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnPlasticSurgerySelect();
}
static void _OnObstetricSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnObstetricSelect();
}
static void _OnPrintBoldSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnPrintBoldSelect();
}
/*static void _OnMaxTimeChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaxTimeChange();
} */
/*static void _OnMaxTimeSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaxTimeSetfocus();} */ 
/*static void _OnMaxTimeKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaxTimeKillfocus();
} */
static int _OnMaxTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnMaxTimeCheckValue();
} 
/*static void _OnDurationChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDurationChange();
} */
/*static void _OnDurationSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDurationSetfocus();} */ 
/*static void _OnDurationKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDurationKillfocus();
} */
static int _OnDurationCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnDurationCheckValue();
} 
static void _OnGenderSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnGenderSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGenderSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGenderSelendok();
}
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGenderKillfocus();
}*/
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGenderKillfocus();
}*/
static long _OnGenderLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGenderLoadData();
}
/*static void _OnGenderAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGenderAddNew();
}*/
static void _OnParaPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnParaPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParaPlaceSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceSelendok();
}
/*static void _OnParaPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceKillfocus();
}*/
/*static void _OnParaPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceKillfocus();
}*/
static long _OnParaPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceLoadData();
}
/*static void _OnParaPlaceAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceAddNew();
}*/
static void _OnAdviceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnAdviceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdviceSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceSelendok();
}
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceKillfocus();
}*/
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceKillfocus();
}*/
static long _OnAdviceLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceLoadData();
}
/*static void _OnAdviceAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceAddNew();
}*/
static void _OnApointmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnApointmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnApointmentSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentSelendok();
}
/*static void _OnApointmentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentKillfocus();
}*/
/*static void _OnApointmentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentKillfocus();
}*/
static long _OnApointmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentLoadData();
}
/*static void _OnApointmentAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentAddNew();
}*/
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new *pVw = (CHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new *pVw = (CHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnAddHMSParaclinicalSetupDialog_new();
} 
static int _OnEditHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnEditHMSParaclinicalSetupDialog_new();
} 
static int _OnDeleteHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnDeleteHMSParaclinicalSetupDialog_new();
} 
static int _OnSaveHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnSaveHMSParaclinicalSetupDialog_new();
} 
static int _OnCancelHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnCancelHMSParaclinicalSetupDialog_new();
} 
CHMSParaclinicalSetupDialog_new::CHMSParaclinicalSetupDialog_new(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSParaclinicalSetupDialog_new::~CHMSParaclinicalSetupDialog_new(){
}
void CHMSParaclinicalSetupDialog_new::OnCreateComponents(){
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 160, 55);
	m_wndApplyDate.Create(this,165, 30, 265, 55); 
	m_wndNewPriceLabel.Create(this, _T("New Price(01/07)"), 270, 30, 430, 55);
	m_wndNewPrice.Create(this,435, 30, 550, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 160, 85);
	m_wndGroup.Create(this,165, 60, 550, 85); 
	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 90, 160, 115);
	m_wndInformationOfTestFee.Create(this, _T("Fee Item Information"), 5, 4, 559, 685);
	m_wndFeeCategory.Create(this,165, 90, 550, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 160, 145);
	m_wndDepartment.Create(this,165, 120, 550, 145); 
	m_wndPerformPlaceLabel.Create(this, _T("Perform Place"), 10, 150, 160, 175);
	m_wndPerformPlace.Create(this,165, 150, 550, 175); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 180, 160, 205);
	m_wndID.Create(this,165, 180, 265, 205); 
	m_wndNameLabel.Create(this, _T("Name /nit"), 10, 210, 160, 235);
	m_wndName.Create(this,165, 210, 550, 263); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 268, 160, 293);
	m_wndUnit.Create(this,165, 268, 265, 293); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 298, 160, 323);
	m_wndServicePrice.Create(this,165, 298, 265, 323); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 270, 298, 376, 323);
	m_wndInsurancePrice.Create(this,381, 298, 481, 323); 
	m_wndInsurancePayment.Create(this, _T("Insurance Payment"), 486, 298, 549, 323);
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 328, 160, 353);
	m_wndPolicyPrice.Create(this,165, 328, 265, 353); 
	m_wndPolicyPayment.Create(this, _T("Policy Payment"), 270, 328, 430, 353);
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 10, 358, 160, 383);
	m_wndRequestPrice.Create(this,165, 358, 265, 383); 
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 10, 388, 160, 413);
	m_wndInsDiffPayment.Create(this,165, 388, 265, 413); 
	m_wndDifferencePayment.Create(this, _T("Difference Payment"), 270, 388, 430, 413);
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 10, 418, 160, 443);
	m_wndPolDiffPayment.Create(this,165, 418, 265, 443); 
	m_wndSalaryLabel.Create(this, _T("Salary Label"), 270, 418, 430, 443);
	m_wndSalary.Create(this,435, 418, 550, 443); 
	m_wndObjectAppliedLabel.Create(this, _T("Object Applied"), 10, 448, 160, 473);
	m_wndObjectApplied.Create(this,165, 448, 265, 473); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 270, 448, 430, 473);
	m_wndReturnDept.Create(this,435, 448, 550, 473); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 10, 478, 160, 503);
	m_wndMaleIndex.Create(this,165, 478, 265, 503); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 270, 478, 430, 503);
	m_wndFemaleIndex.Create(this,435, 478, 550, 503); 
	m_wndHitech.Create(this, _T("Hitech"), 10, 508, 93, 533);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 98, 508, 194, 533);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 199, 508, 292, 533);
	m_wndObstetric.Create(this, _T("Obstetric"), 297, 508, 380, 533);
	m_wndPrintBold.Create(this, _T("Print Bold"), 385, 508, 462, 533);
	m_wndMaxTimeLabel.Create(this, _T("Max Time"), 10, 538, 160, 563);
	m_wndMaxTime.Create(this,165, 538, 265, 563); 
	m_wndDurationLabel.Create(this, _T("Duration(day)"), 270, 538, 350, 563);
	m_wndDuration.Create(this,355, 538, 405, 563); 
	m_wndGenderLabel.Create(this, _T("Gender"), 410, 538, 465, 563);
	m_wndGender.Create(this,470, 538, 550, 563); 
	m_wndParaPlaceLabel.Create(this, _T("ParaPlace Label"), 10, 568, 160, 593);
	m_wndParaPlace.Create(this,165, 568, 550, 593); 
	m_wndAdviceLabel.Create(this, _T("Advice Label"), 10, 598, 160, 623);
	m_wndAdvice.Create(this,165, 598, 550, 623); 
	m_wndApointmentLabel.Create(this, _T("Apointment Label"), 10, 628, 160, 653);
	m_wndApointment.Create(this,165, 628, 550, 653); 
	m_wndActive.Create(this, _T("Active"), 10, 658, 160, 683);
	m_wndSave.Create(this, _T("&Save"), 368, 658, 458, 683);
	m_wndClose.Create(this, _T("&Close"), 463, 658, 553, 683);

}
void CHMSParaclinicalSetupDialog_new::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndNewPrice.SetLimitText(1024);
	m_wndNewPrice.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndFeeCategory.SetCheckValue(true);
	m_wndFeeCategory.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndPerformPlace.SetCheckValue(true);
	m_wndPerformPlace.LimitText(1024);
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(1024);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(1024);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(1024);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequestPrice.SetLimitText(1024);
	m_wndRequestPrice.SetCheckValue(true);
	m_wndInsDiffPayment.SetLimitText(1024);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(1024);
	m_wndPolDiffPayment.SetCheckValue(true);
	m_wndSalary.SetLimitText(1024);
	m_wndSalary.SetCheckValue(true);
	m_wndObjectApplied.SetCheckValue(true);
	m_wndObjectApplied.LimitText(1024);
	m_wndReturnDept.SetLimitText(1024);
	m_wndReturnDept.SetCheckValue(true);
	m_wndMaleIndex.SetLimitText(1024);
	m_wndMaleIndex.SetCheckValue(true);
	m_wndFemaleIndex.SetLimitText(1024);
	m_wndFemaleIndex.SetCheckValue(true);
	m_wndMaxTime.SetLimitText(1024);
	m_wndMaxTime.SetCheckValue(true);
	m_wndDuration.SetLimitText(16);
	m_wndDuration.SetCheckValue(true);
	m_wndGender.SetCheckValue(true);
	m_wndGender.LimitText(35);
	m_wndParaPlace.SetCheckValue(true);
	m_wndParaPlace.LimitText(1024);
	m_wndAdvice.SetCheckValue(true);
	m_wndAdvice.LimitText(1024);
	m_wndApointment.SetCheckValue(true);
	m_wndApointment.LimitText(1024);












	m_wndGender.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGender.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);







}
void CHMSParaclinicalSetupDialog_new::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndNewPrice.SetEvent(WE_CHANGE, _OnNewPriceChangeFnc);
	//m_wndNewPrice.SetEvent(WE_SETFOCUS, _OnNewPriceSetfocusFnc);
	//m_wndNewPrice.SetEvent(WE_KILLFOCUS, _OnNewPriceKillfocusFnc);
	m_wndNewPrice.SetEvent(WE_CHECKVALUE, _OnNewPriceCheckValueFnc);
	m_wndGroupLabel.SetEvent(WE_CLICK, _OnGroupLabelSelectFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndFeeCategory.SetEvent(WE_SELENDOK, _OnFeeCategorySelendokFnc);
	//m_wndFeeCategory.SetEvent(WE_SETFOCUS, _OnFeeCategorySetfocusFnc);
	//m_wndFeeCategory.SetEvent(WE_KILLFOCUS, _OnFeeCategoryKillfocusFnc);
	m_wndFeeCategory.SetEvent(WE_SELCHANGE, _OnFeeCategorySelectChangeFnc);
	m_wndFeeCategory.SetEvent(WE_LOADDATA, _OnFeeCategoryLoadDataFnc);
	//m_wndFeeCategory.SetEvent(WE_ADDNEW, _OnFeeCategoryAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPerformPlace.SetEvent(WE_SELENDOK, _OnPerformPlaceSelendokFnc);
	//m_wndPerformPlace.SetEvent(WE_SETFOCUS, _OnPerformPlaceSetfocusFnc);
	//m_wndPerformPlace.SetEvent(WE_KILLFOCUS, _OnPerformPlaceKillfocusFnc);
	m_wndPerformPlace.SetEvent(WE_SELCHANGE, _OnPerformPlaceSelectChangeFnc);
	m_wndPerformPlace.SetEvent(WE_LOADDATA, _OnPerformPlaceLoadDataFnc);
	//m_wndPerformPlace.SetEvent(WE_ADDNEW, _OnPerformPlaceAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	m_wndInsurancePayment.SetEvent(WE_CLICK, _OnInsurancePaymentSelectFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	m_wndPolicyPayment.SetEvent(WE_CLICK, _OnPolicyPaymentSelectFnc);
	m_wndRequestPriceLabel.SetEvent(WE_CLICK, _OnRequestPriceLabelSelectFnc);
	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
	//m_wndInsDiffPayment.SetEvent(WE_CHANGE, _OnInsDiffPaymentChangeFnc);
	//m_wndInsDiffPayment.SetEvent(WE_SETFOCUS, _OnInsDiffPaymentSetfocusFnc);
	//m_wndInsDiffPayment.SetEvent(WE_KILLFOCUS, _OnInsDiffPaymentKillfocusFnc);
	m_wndInsDiffPayment.SetEvent(WE_CHECKVALUE, _OnInsDiffPaymentCheckValueFnc);
	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	//m_wndPolDiffPayment.SetEvent(WE_CHANGE, _OnPolDiffPaymentChangeFnc);
	//m_wndPolDiffPayment.SetEvent(WE_SETFOCUS, _OnPolDiffPaymentSetfocusFnc);
	//m_wndPolDiffPayment.SetEvent(WE_KILLFOCUS, _OnPolDiffPaymentKillfocusFnc);
	m_wndPolDiffPayment.SetEvent(WE_CHECKVALUE, _OnPolDiffPaymentCheckValueFnc);
	//m_wndSalary.SetEvent(WE_CHANGE, _OnSalaryChangeFnc);
	//m_wndSalary.SetEvent(WE_SETFOCUS, _OnSalarySetfocusFnc);
	//m_wndSalary.SetEvent(WE_KILLFOCUS, _OnSalaryKillfocusFnc);
	m_wndSalary.SetEvent(WE_CHECKVALUE, _OnSalaryCheckValueFnc);
	m_wndObjectApplied.SetEvent(WE_SELENDOK, _OnObjectAppliedSelendokFnc);
	//m_wndObjectApplied.SetEvent(WE_SETFOCUS, _OnObjectAppliedSetfocusFnc);
	//m_wndObjectApplied.SetEvent(WE_KILLFOCUS, _OnObjectAppliedKillfocusFnc);
	m_wndObjectApplied.SetEvent(WE_SELCHANGE, _OnObjectAppliedSelectChangeFnc);
	m_wndObjectApplied.SetEvent(WE_LOADDATA, _OnObjectAppliedLoadDataFnc);
	//m_wndObjectApplied.SetEvent(WE_ADDNEW, _OnObjectAppliedAddNewFnc);
	m_wndReturnDeptLabel.SetEvent(WE_CLICK, _OnReturnDeptLabelSelectFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	//m_wndMaleIndex.SetEvent(WE_CHANGE, _OnMaleIndexChangeFnc);
	//m_wndMaleIndex.SetEvent(WE_SETFOCUS, _OnMaleIndexSetfocusFnc);
	//m_wndMaleIndex.SetEvent(WE_KILLFOCUS, _OnMaleIndexKillfocusFnc);
	m_wndMaleIndex.SetEvent(WE_CHECKVALUE, _OnMaleIndexCheckValueFnc);
	//m_wndFemaleIndex.SetEvent(WE_CHANGE, _OnFemaleIndexChangeFnc);
	//m_wndFemaleIndex.SetEvent(WE_SETFOCUS, _OnFemaleIndexSetfocusFnc);
	//m_wndFemaleIndex.SetEvent(WE_KILLFOCUS, _OnFemaleIndexKillfocusFnc);
	m_wndFemaleIndex.SetEvent(WE_CHECKVALUE, _OnFemaleIndexCheckValueFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndObstetric.SetEvent(WE_CLICK, _OnObstetricSelectFnc);
	m_wndPrintBold.SetEvent(WE_CLICK, _OnPrintBoldSelectFnc);
	//m_wndMaxTime.SetEvent(WE_CHANGE, _OnMaxTimeChangeFnc);
	//m_wndMaxTime.SetEvent(WE_SETFOCUS, _OnMaxTimeSetfocusFnc);
	//m_wndMaxTime.SetEvent(WE_KILLFOCUS, _OnMaxTimeKillfocusFnc);
	m_wndMaxTime.SetEvent(WE_CHECKVALUE, _OnMaxTimeCheckValueFnc);
	//m_wndDuration.SetEvent(WE_CHANGE, _OnDurationChangeFnc);
	//m_wndDuration.SetEvent(WE_SETFOCUS, _OnDurationSetfocusFnc);
	//m_wndDuration.SetEvent(WE_KILLFOCUS, _OnDurationKillfocusFnc);
	m_wndDuration.SetEvent(WE_CHECKVALUE, _OnDurationCheckValueFnc);
	m_wndGender.SetEvent(WE_SELENDOK, _OnGenderSelendokFnc);
	//m_wndGender.SetEvent(WE_SETFOCUS, _OnGenderSetfocusFnc);
	//m_wndGender.SetEvent(WE_KILLFOCUS, _OnGenderKillfocusFnc);
	m_wndGender.SetEvent(WE_SELCHANGE, _OnGenderSelectChangeFnc);
	m_wndGender.SetEvent(WE_LOADDATA, _OnGenderLoadDataFnc);
	//m_wndGender.SetEvent(WE_ADDNEW, _OnGenderAddNewFnc);
	m_wndParaPlace.SetEvent(WE_SELENDOK, _OnParaPlaceSelendokFnc);
	//m_wndParaPlace.SetEvent(WE_SETFOCUS, _OnParaPlaceSetfocusFnc);
	//m_wndParaPlace.SetEvent(WE_KILLFOCUS, _OnParaPlaceKillfocusFnc);
	m_wndParaPlace.SetEvent(WE_SELCHANGE, _OnParaPlaceSelectChangeFnc);
	m_wndParaPlace.SetEvent(WE_LOADDATA, _OnParaPlaceLoadDataFnc);
	//m_wndParaPlace.SetEvent(WE_ADDNEW, _OnParaPlaceAddNewFnc);
	m_wndAdvice.SetEvent(WE_SELENDOK, _OnAdviceSelendokFnc);
	//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
	//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
	m_wndAdvice.SetEvent(WE_SELCHANGE, _OnAdviceSelectChangeFnc);
	m_wndAdvice.SetEvent(WE_LOADDATA, _OnAdviceLoadDataFnc);
	//m_wndAdvice.SetEvent(WE_ADDNEW, _OnAdviceAddNewFnc);
	m_wndApointment.SetEvent(WE_SELENDOK, _OnApointmentSelendokFnc);
	//m_wndApointment.SetEvent(WE_SETFOCUS, _OnApointmentSetfocusFnc);
	//m_wndApointment.SetEvent(WE_KILLFOCUS, _OnApointmentKillfocusFnc);
	m_wndApointment.SetEvent(WE_SELCHANGE, _OnApointmentSelectChangeFnc);
	m_wndApointment.SetEvent(WE_LOADDATA, _OnApointmentLoadDataFnc);
	//m_wndApointment.SetEvent(WE_ADDNEW, _OnApointmentAddNewFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSParaclinicalSetupDialog_new::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndNewPrice.GetDlgCtrlID(), m_nNewPrice);
	DDX_Check(pDX, m_wndGroupLabel.GetDlgCtrlID(), m_bGroupLabel);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndPerformPlace.GetDlgCtrlID(), m_szPerformPlaceKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Check(pDX, m_wndInsurancePayment.GetDlgCtrlID(), m_bInsurancePayment);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndPolicyPayment.GetDlgCtrlID(), m_bPolicyPayment);
	DDX_Check(pDX, m_wndRequestPriceLabel.GetDlgCtrlID(), m_bRequestPriceLabel);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_nRequestPrice);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Check(pDX, m_wndDifferencePayment.GetDlgCtrlID(), m_bDifferencePayment);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_Text(pDX, m_wndSalary.GetDlgCtrlID(), m_nSalary);
	DDX_TextEx(pDX, m_wndObjectApplied.GetDlgCtrlID(), m_szObjectAppliedKey);
	DDX_Check(pDX, m_wndReturnDeptLabel.GetDlgCtrlID(), m_bReturnDeptLabel);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndObstetric.GetDlgCtrlID(), m_bObstetric);
	DDX_Check(pDX, m_wndPrintBold.GetDlgCtrlID(), m_bPrintBold);
	DDX_Text(pDX, m_wndMaxTime.GetDlgCtrlID(), m_nMaxTime);
	DDX_Text(pDX, m_wndDuration.GetDlgCtrlID(), m_nDuration);
	DDX_TextEx(pDX, m_wndGender.GetDlgCtrlID(), m_szGenderKey);
	DDX_TextEx(pDX, m_wndParaPlace.GetDlgCtrlID(), m_szParaPlaceKey);
	DDX_TextEx(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdviceKey);
	DDX_TextEx(pDX, m_wndApointment.GetDlgCtrlID(), m_szApointmentKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSParaclinicalSetupDialog_new::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	m_jData[_T("NewPrice")] =  m_nNewPrice;
	m_jData[_T("GroupLabel")] =  m_bGroupLabel;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("FeeCategory")] =  m_szFeeCategoryKey;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("PerformPlace")] =  m_szPerformPlaceKey;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("ServicePrice")] =  m_nServicePrice;
	m_jData[_T("InsurancePrice")] =  m_nInsurancePrice;
	m_jData[_T("InsurancePayment")] =  m_bInsurancePayment;
	m_jData[_T("PolicyPrice")] =  m_nPolicyPrice;
	m_jData[_T("PolicyPayment")] =  m_bPolicyPayment;
	m_jData[_T("RequestPriceLabel")] =  m_bRequestPriceLabel;
	m_jData[_T("RequestPrice")] =  m_nRequestPrice;
	m_jData[_T("InsDiffPayment")] =  m_nInsDiffPayment;
	m_jData[_T("DifferencePayment")] =  m_bDifferencePayment;
	m_jData[_T("PolDiffPayment")] =  m_nPolDiffPayment;
	m_jData[_T("Salary")] =  m_nSalary;
	m_jData[_T("ObjectApplied")] =  m_szObjectAppliedKey;
	m_jData[_T("ReturnDeptLabel")] =  m_bReturnDeptLabel;
	m_jData[_T("ReturnDept")] =  m_nReturnDept;
	m_jData[_T("MaleIndex")] =  m_szMaleIndex;
	m_jData[_T("FemaleIndex")] =  m_szFemaleIndex;
	m_jData[_T("Hitech")] =  m_bHitech;
	m_jData[_T("HitechMachine")] =  m_bHitechMachine;
	m_jData[_T("PlasticSurgery")] =  m_bPlasticSurgery;
	m_jData[_T("Obstetric")] =  m_bObstetric;
	m_jData[_T("PrintBold")] =  m_bPrintBold;
	m_jData[_T("MaxTime")] =  m_nMaxTime;
	m_jData[_T("Duration")] =  m_nDuration;
	m_jData[_T("Gender")] =  m_szGenderKey;
	m_jData[_T("ParaPlace")] =  m_szParaPlaceKey;
	m_jData[_T("Advice")] =  m_szAdviceKey;
	m_jData[_T("Apointment")] =  m_szApointmentKey;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	m_jData[_T("NewPrice")].GetValue(m_nNewPrice);
	m_jData[_T("GroupLabel")].GetValue(m_bGroupLabel);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("FeeCategory")].GetValue(m_szFeeCategoryKey);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("PerformPlace")].GetValue(m_szPerformPlaceKey);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("ServicePrice")].GetValue(m_nServicePrice);
	m_jData[_T("InsurancePrice")].GetValue(m_nInsurancePrice);
	m_jData[_T("InsurancePayment")].GetValue(m_bInsurancePayment);
	m_jData[_T("PolicyPrice")].GetValue(m_nPolicyPrice);
	m_jData[_T("PolicyPayment")].GetValue(m_bPolicyPayment);
	m_jData[_T("RequestPriceLabel")].GetValue(m_bRequestPriceLabel);
	m_jData[_T("RequestPrice")].GetValue(m_nRequestPrice);
	m_jData[_T("InsDiffPayment")].GetValue(m_nInsDiffPayment);
	m_jData[_T("DifferencePayment")].GetValue(m_bDifferencePayment);
	m_jData[_T("PolDiffPayment")].GetValue(m_nPolDiffPayment);
	m_jData[_T("Salary")].GetValue(m_nSalary);
	m_jData[_T("ObjectApplied")].GetValue(m_szObjectAppliedKey);
	m_jData[_T("ReturnDeptLabel")].GetValue(m_bReturnDeptLabel);
	m_jData[_T("ReturnDept")].GetValue(m_nReturnDept);
	m_jData[_T("MaleIndex")].GetValue(m_szMaleIndex);
	m_jData[_T("FemaleIndex")].GetValue(m_szFemaleIndex);
	m_jData[_T("Hitech")].GetValue(m_bHitech);
	m_jData[_T("HitechMachine")].GetValue(m_bHitechMachine);
	m_jData[_T("PlasticSurgery")].GetValue(m_bPlasticSurgery);
	m_jData[_T("Obstetric")].GetValue(m_bObstetric);
	m_jData[_T("PrintBold")].GetValue(m_bPrintBold);
	m_jData[_T("MaxTime")].GetValue(m_nMaxTime);
	m_jData[_T("Duration")].GetValue(m_nDuration);
	m_jData[_T("Gender")].GetValue(m_szGenderKey);
	m_jData[_T("ParaPlace")].GetValue(m_szParaPlaceKey);
	m_jData[_T("Advice")].GetValue(m_szAdviceKey);
	m_jData[_T("Apointment")].GetValue(m_szApointmentKey);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CHMSParaclinicalSetupDialog_new::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaclinicalSetupDialog_new::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalSetupDialog_new::SetDefaultValues(){

	m_szApplyDate.Empty();
	m_nNewPrice=0;
	m_bGroupLabel=FALSE;
	m_szGroupKey.Empty();
	m_szFeeCategoryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szPerformPlaceKey.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_bInsurancePayment=FALSE;
	m_nPolicyPrice=0;
	m_bPolicyPayment=FALSE;
	m_bRequestPriceLabel=FALSE;
	m_nRequestPrice=0;
	m_nInsDiffPayment=0;
	m_bDifferencePayment=FALSE;
	m_nPolDiffPayment=0;
	m_nSalary=0;
	m_szObjectAppliedKey.Empty();
	m_bReturnDeptLabel=FALSE;
	m_nReturnDept=0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bHitech=FALSE;
	m_bHitechMachine=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bObstetric=FALSE;
	m_bPrintBold=FALSE;
	m_nMaxTime=0;
	m_nDuration=0;
	m_szGenderKey.Empty();
	m_szParaPlaceKey.Empty();
	m_szAdviceKey.Empty();
	m_szApointmentKey.Empty();
	m_bActive=FALSE;

}
int CHMSParaclinicalSetupDialog_new::SetMode(int nMode){
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
/*void CHMSParaclinicalSetupDialog_new::OnApplyDateChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnApplyDateSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnApplyDateKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnApplyDateCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnNewPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNewPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNewPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnNewPriceCheckValue(){
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnGroupLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnGroupSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnGroupSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnGroupKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnFeeCategorySelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnFeeCategorySetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnFeeCategoryKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnFeeCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeCategory.IsSearchKey() && !m_szFeeCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeCategoryKey
};
	m_wndFeeCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeCategory.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnFeeCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnDepartmentSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnDepartmentSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnDepartmentKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnDepartmentLoadData(){
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
/*void CHMSParaclinicalSetupDialog_new::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnPerformPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnPerformPlaceSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnPerformPlaceSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnPerformPlaceKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnPerformPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformPlace.IsSearchKey() && !m_szPerformPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformPlaceKey
};
	m_wndPerformPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnPerformPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnIDChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnIDSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnIDKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnIDCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnNameChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNameSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNameKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnNameCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnUnitChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnUnitSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnUnitKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnInsurancePriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnInsurancePriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnInsurancePriceCheckValue(){
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnPolicyPriceCheckValue(){
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSParaclinicalSetupDialog_new::OnRequestPriceLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnRequestPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnRequestPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnRequestPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnRequestPriceCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnInsDiffPaymentChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnInsDiffPaymentSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnInsDiffPaymentKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnInsDiffPaymentCheckValue(){
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnDifferencePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnSalaryChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnSalarySetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnSalaryKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnSalaryCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnObjectAppliedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObjectApplied.IsSearchKey() && !m_szObjectAppliedKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectAppliedKey
};
	m_wndObjectApplied.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectApplied.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSParaclinicalSetupDialog_new::OnReturnDeptLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnMaleIndexChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnMaleIndexSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnMaleIndexKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnMaleIndexCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnFemaleIndexChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnFemaleIndexSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnFemaleIndexKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnFemaleIndexCheckValue(){
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSParaclinicalSetupDialog_new::OnHitechMachineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSParaclinicalSetupDialog_new::OnPlasticSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSParaclinicalSetupDialog_new::OnObstetricSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSParaclinicalSetupDialog_new::OnPrintBoldSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnMaxTimeChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnMaxTimeSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnMaxTimeKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnMaxTimeCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnDurationChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnDurationSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnDurationKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnDurationCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new::OnGenderSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnGenderSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnGenderSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnGenderKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnGenderLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGender.IsSearchKey() && !m_szGenderKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGenderKey
};
	m_wndGender.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGender.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnGenderAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnParaPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnParaPlaceSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnParaPlaceSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnParaPlaceKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnParaPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParaPlace.IsSearchKey() && !m_szParaPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szParaPlaceKey
};
	m_wndParaPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnParaPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnAdviceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnAdviceSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnAdviceSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnAdviceKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnAdviceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdvice.IsSearchKey() && !m_szAdviceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAdviceKey
};
	m_wndAdvice.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdvice.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnAdviceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new::OnApointmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnApointmentSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new::OnApointmentSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnApointmentKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnApointmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndApointment.IsSearchKey() && !m_szApointmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szApointmentKey
};
	m_wndApointment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndApointment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalSetupDialog_new::OnApointmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSParaclinicalSetupDialog_new::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalSetupDialog_new::OnAddHMSParaclinicalSetupDialog_new(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSParaclinicalSetupDialog_new::OnEditHMSParaclinicalSetupDialog_new(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSParaclinicalSetupDialog_new::OnDeleteHMSParaclinicalSetupDialog_new(){
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
 		OnCancelHMSParaclinicalSetupDialog_new();
 	}
	return 0;
}
int CHMSParaclinicalSetupDialog_new::OnSaveHMSParaclinicalSetupDialog_new(){
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
 		//OnHMSParaclinicalSetupDialog_newListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSParaclinicalSetupDialog_new::OnCancelHMSParaclinicalSetupDialog_new(){
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
int CHMSParaclinicalSetupDialog_new::OnHMSParaclinicalSetupDialog_newListLoadData(){
	return 0;
}
