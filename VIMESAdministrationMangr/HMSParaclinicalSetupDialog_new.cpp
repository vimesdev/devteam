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
static int _OnSalaryCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnSalaryCheckValue();
} 
static void _OnGroupLabelSelectFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupLabelSelect();
}
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupSelendok();
}
static void _OnObstetricSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnObstetricSelect();
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
static long _OnParaPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnParaPlaceLoadData();
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
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPerformPlaceKillfocus();
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
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new *pVw = (CHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new *pVw = (CHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnInsurancePaymentSelect();
}
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnPolicyPaymentSelect();
}
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnDifferencePaymentSelect();
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

static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnActiveSelect();
}

static void _OnRequestPriceLabelFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnRequestPriceLabel();
}

static void _OnInsDiffPaymentLabelFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new*)pWnd)->OnInsDiffPaymentLabel();
}

static void _OnPolDiffPaymentLabelFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new*)pWnd)->OnPolDiffPaymentLabel();
}
static void _OnReturnDepartmentLabelFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnReturnDepartmentLabel();
}
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

static long _OnAdviceLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnAdviceLoadData();
}
static long _OnApointmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnApointmentLoadData();
}
static void _OnAdviceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnAdviceSelectChange(nOldItemSel, nNewItemSel);
}

static void _OnApointmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnApointmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnParaPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new* )pWnd)->OnParaPlaceSelectChange(nOldItemSel, nNewItemSel);
}

static int _OnGiangansachCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnGiangansachCheckValue();
} 
static void _OnNgansachtraSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnNgansachtraSelect();
}
static void _OnIsBloodSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnIsBloodSelect();
}
static void _OnXncovid19SelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnXncovid19Select();
}

static long _OnNhomBHLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSParaclinicalSetupDialog_new *)pWnd)->OnNhomBHLoadData();
}
static void _OnbhquankottSelectFnc(CWnd *pWnd)
{
	 ((CHMSParaclinicalSetupDialog_new*)pWnd)->OnbhquankottSelect();
}

CHMSParaclinicalSetupDialog_new::CHMSParaclinicalSetupDialog_new(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szType = _T("O");
}
CHMSParaclinicalSetupDialog_new::~CHMSParaclinicalSetupDialog_new()
{
}
void CHMSParaclinicalSetupDialog_new::OnCreateComponents()
{
	
	m_wndThuoctinh.Create(this, _T("Thuộc tính"), 559, 4, 666, 685);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 160, 55);
	m_wndApplyDate.Create(this,165, 30, 265, 55); 
	m_wndNewPriceLabel.Create(this, _T("New Price(01/07)"), 270, 30, 430, 55);
	m_wndNewPrice.Create(this,435, 30, 551, 55); 
	m_wndInformationOfTestFee.Create(this, _T("Fee Item Information"), 5, 4, 559, 685);
	m_wndHitech.Create(this, _T("Hitech"), 565, 30, 661, 55);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 160, 85);
	m_wndGroup.Create(this,165, 60, 385, 85); 
	m_wndInsMapLabel.Create(this, _T("InsMap"), 390, 60, 445, 85);
	m_wndInsMap.Create(this,450, 60, 551, 85); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 565, 60, 661, 85);
	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 90, 160, 115);
	m_wndFeeCategory.Create(this,165, 90, 385, 115); 
	m_wndCiculerMapLabel.Create(this, _T("Ciculer Map"), 390, 90, 445, 115);
	m_wndCiculerMap.Create(this,450, 90, 551, 115); 
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 565, 90, 661, 115);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 160, 145);
	m_wndDepartment.Create(this,165, 120, 551, 145); 
	m_wndObstetric.Create(this, _T("Obstetric"), 565, 120, 661, 145);
	m_wndPerformPlaceLabel.Create(this, _T("Perform Place"), 10, 150, 160, 175);
	m_wndPerformPlace.Create(this,165, 150, 551, 175); 
	m_wndPrintBold.Create(this, _T("Print Bold"), 565, 150, 661, 175);
	m_wndIDLabel.Create(this, _T("ID"), 10, 180, 160, 205);
	m_wndID.Create(this,165, 180, 265, 205); 
	m_wndNhomBHLabel.Create(this, _T("Nhóm BH"), 270, 180, 350, 205);
	m_wndNhomBH.Create(this,355, 180, 551, 205); 
	m_wndIsBlood.Create(this, _T("Máu + CPM"), 565, 181, 661, 206);
	m_wndNameLabel.Create(this, _T("Name /Unit"), 10, 210, 160, 235);
	m_wndXncovid19.Create(this, _T("XN Covid19"), 565, 212, 661, 237);
	m_wndName.Create(this,165, 210, 551, 263, 1, 0, 1); 
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
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 10, 417, 160, 442);
	m_wndPolDiffPayment.Create(this,165, 417, 265, 442); 
	m_wndSalaryLabel.Create(this, _T("Salary Label"), 270, 417, 430, 442);
	m_wndSalary.Create(this,435, 417, 551, 442); 
	m_wndGiangansach.Create(this,165, 446, 265, 471); 
	m_wndGiangansachlabel.Create(this, _T("Giá ngân sách"), 10, 447, 160, 472);
	m_wndNgansachtra.Create(this, _T("Ngân sách trả (dùng cho BN Covid)"), 270, 447, 551, 472);
	m_wndObjectAppliedLabel.Create(this, _T("Object Applied"), 10, 477, 160, 502);
	m_wndObjectApplied.Create(this,165, 477, 265, 502); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 270, 477, 430, 502);
	m_wndReturnDept.Create(this,435, 477, 551, 502); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 10, 507, 160, 532);
	m_wndMaleIndex.Create(this,165, 507, 265, 532); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 270, 507, 430, 532);
	m_wndFemaleIndex.Create(this,435, 507, 551, 532); 
	m_wndMaxTimeLabel.Create(this, _T("Max Time"), 10, 538, 160, 563);
	m_wndMaxTime.Create(this,165, 538, 265, 563); 
	m_wndDurationLabel.Create(this, _T("Duration(day)"), 271, 538, 351, 563);
	m_wndDuration.Create(this,356, 538, 406, 563); 
	m_wndGenderLabel.Create(this, _T("Gender"), 411, 538, 466, 563);
	m_wndGender.Create(this,471, 538, 551, 563); 
	m_wndParaPlaceLabel.Create(this, _T("ParaPlace Label"), 10, 568, 160, 593);
	m_wndParaPlace.Create(this,165, 568, 551, 593); 
	m_wndAdviceLabel.Create(this, _T("Advice Label"), 10, 598, 160, 623);
	m_wndAdvice.Create(this,165, 598, 551, 623); 
	m_wndApointmentLabel.Create(this, _T("Apointment Label"), 10, 628, 160, 653);
	m_wndApointment.Create(this,165, 628, 551, 653); 
	m_wndActive.Create(this, _T("Active"), 10, 658, 160, 683);
	m_wndSave.Create(this, _T("&Save"), 364, 658, 454, 683);
	m_wndClose.Create(this, _T("&Close"), 459, 658, 551, 683);
	m_wndbhquankott.Create(this, _T("BHQ_ko_TT"), 565, 242, 661, 267);




	m_wndGiangansachlabel.SetTextColor(RGB(255,0,0));
	m_wndNgansachtra.SetTextColor(RGB(255,0,0));
	m_wndGiangansach.SetReadOnly(true);

	m_wndNhomBH.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNhomBH.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	
	m_wndNewPrice.ModifyStyle(WS_TABSTOP, 0);
	m_wndInsurancePayment.ModifyStyle(WS_TABSTOP, 0);
	m_wndPolicyPayment.ModifyStyle(WS_TABSTOP, 0);
	m_wndDifferencePayment.ModifyStyle(WS_TABSTOP, 0);
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndRequestPriceLabel.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_wndGroupLabel.ModifyStyle(WS_TABSTOP, 0);
	m_wndInsMap.ModifyStyle(WS_TABSTOP, 0);
	m_wndCiculerMap.ModifyStyle(WS_TABSTOP, 0);

}
void CHMSParaclinicalSetupDialog_new::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetCheckValue(true);
	//m_wndName.SetInitCap(true);
	m_wndID.SetLimitText(13);
	//m_wndID.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnit.SetLimitText(15);
	//m_wndUnit.SetInitCap(true);
	//m_wndUnit.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(10);
	m_wndServicePrice.SetCurrencyFormat(true);
	//m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(10);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	//m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(10);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	//m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequestPrice.SetLimitText(10);
	m_wndRequestPrice.SetCurrencyFormat(true);
	//m_wndRequestPrice.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(10);
	m_wndReturnDept.SetCurrencyFormat(true);
	//m_wndReturnDept.SetCheckValue(true);
	m_wndInsMap.SetLimitText(30);
	m_wndCiculerMap.SetLimitText(30);

	m_wndInsDiffPayment.SetLimitText(16);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(16);
	m_wndPolDiffPayment.SetCheckValue(true);
	m_wndSalary.SetLimitText(10);
	m_wndSalary.SetCheckValue(true);
	
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndPolDiffPayment.SetCurrencyFormat(true);
	m_wndInsDiffPayment.SetCurrencyFormat(true);

	m_wndMaxTime.SetLimitText(4);
	m_wndMaxTime.SetCheckValue(true);

	m_wndDuration.SetLimitText(5);
	m_wndDuration.SetCheckValue(false);
	m_wndGender.SetCheckValue(false);
	m_wndGender.LimitText(35);
	

	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);

	m_wndFeeCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPerformPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndObjectApplied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 20);
	m_wndObjectApplied.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndAdvice.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndAdvice.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndApointment.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndApointment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndParaPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndParaPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndGender.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGender.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_hms_fee_listTbl.SetTableName(_T("hms_fee_list"));
	m_hms_fee_listTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_fee_listTbl.AddField(_T("hfl_idx"), dfLong); 
	m_hms_fee_listTbl.AddField(_T("hfl_line"), dfLong); 
	m_hms_fee_listTbl.AddField(_T("hfl_deptid"), dfText, 7); 
	m_hms_fee_listTbl.AddField(_T("hfl_typeid"), dfText, 3);
	m_hms_fee_listTbl.AddField(_T("hfl_itype"), dfInteger); 
//	m_hms_fee_listTbl.AddField(_T("hfl_category"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_groupid"), dfText, 5); 
	m_hms_fee_listTbl.AddField(_T("hfl_subgroup"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_subitem"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_fee_listTbl.AddField(_T("hfl_unit"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_index1"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_index2"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_polprice"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_retprice"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("HFL_SALARY"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_hitech"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_active"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("HFL_OBSTETRIC"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_typeid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_categoryid"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_hostname"), dfText, 100); 
	m_hms_fee_listTbl.AddField(_T("hfl_insdiff"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_poldiff"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_plasticsurgery"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_hitechmachine"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_applydate"), dfDate);
	m_hms_fee_listTbl.AddField(_T("hfl_object"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_opt_group"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_isopt_group"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_reqapply"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_01072016price"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_print_bold"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_performplace"), dfText, 15);
	m_hms_fee_listTbl.AddField(_T("hfl_maxtime"), dfInteger);
	m_hms_fee_listTbl.AddField(_T("hfl_description"), dfText, 15);
	m_hms_fee_listTbl.AddField(_T("hfl_fixdescription"), dfText, 15);
	m_hms_fee_listTbl.AddField(_T("hfl_paraplace"), dfText, 15);
	m_hms_fee_listTbl.AddField(_T("hfl_apply_duration"), dfInteger);
	m_hms_fee_listTbl.AddField(_T("hfl_apply_gender"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_insmap"), dfText, 30);
	m_hms_fee_listTbl.AddField(_T("hfl_cicularmap"), dfText, 30);
	m_hms_fee_listTbl.AddField(_T("HFL_GIANGANSACH"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_ngansachtra"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("HFL_BLOODFEE"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("HFL_XNCOVID19"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_manhom"), dfText, 2);
	m_hms_fee_listTbl.AddField(_T("hfl_bhquan_ko_tt"), dfText, 1);
}

void CHMSParaclinicalSetupDialog_new::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
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
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
	//m_wndInsDiffPayment.SetEvent(WE_CHANGE, _OnInsDiffPaymentChangeFnc);
	//m_wndInsDiffPayment.SetEvent(WE_SETFOCUS, _OnInsDiffPaymentSetfocusFnc);
	//m_wndInsDiffPayment.SetEvent(WE_KILLFOCUS, _OnInsDiffPaymentKillfocusFnc);
	m_wndInsDiffPayment.SetEvent(WE_CHECKVALUE, _OnInsDiffPaymentCheckValueFnc);
	//m_wndPolDiffPayment.SetEvent(WE_CHANGE, _OnPolDiffPaymentChangeFnc);
	//m_wndPolDiffPayment.SetEvent(WE_SETFOCUS, _OnPolDiffPaymentSetfocusFnc);
	//m_wndPolDiffPayment.SetEvent(WE_KILLFOCUS, _OnPolDiffPaymentKillfocusFnc);
	m_wndPolDiffPayment.SetEvent(WE_CHECKVALUE, _OnPolDiffPaymentCheckValueFnc);
	m_wndObjectApplied.SetEvent(WE_SELENDOK, _OnObjectAppliedSelendokFnc);
	//m_wndObjectApplied.SetEvent(WE_SETFOCUS, _OnObjectAppliedSetfocusFnc);
	//m_wndObjectApplied.SetEvent(WE_KILLFOCUS, _OnObjectAppliedKillfocusFnc);
	m_wndObjectApplied.SetEvent(WE_SELCHANGE, _OnObjectAppliedSelectChangeFnc);
	m_wndObjectApplied.SetEvent(WE_LOADDATA, _OnObjectAppliedLoadDataFnc);
	//m_wndObjectApplied.SetEvent(WE_ADDNEW, _OnObjectAppliedAddNewFnc);
	//m_wndMaleIndex.SetEvent(WE_CHANGE, _OnMaleIndexChangeFnc);
	//m_wndMaleIndex.SetEvent(WE_SETFOCUS, _OnMaleIndexSetfocusFnc);
	//m_wndMaleIndex.SetEvent(WE_KILLFOCUS, _OnMaleIndexKillfocusFnc);
	m_wndMaleIndex.SetEvent(WE_CHECKVALUE, _OnMaleIndexCheckValueFnc);
	//m_wndFemaleIndex.SetEvent(WE_CHANGE, _OnFemaleIndexChangeFnc);
	//m_wndFemaleIndex.SetEvent(WE_SETFOCUS, _OnFemaleIndexSetfocusFnc);
	//m_wndFemaleIndex.SetEvent(WE_KILLFOCUS, _OnFemaleIndexKillfocusFnc);
	m_wndFemaleIndex.SetEvent(WE_CHECKVALUE, _OnFemaleIndexCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndInsurancePayment.SetEvent(WE_CLICK, _OnInsurancePaymentSelectFnc);
	m_wndPolicyPayment.SetEvent(WE_CLICK, _OnPolicyPaymentSelectFnc);
	m_wndSalary.SetEvent(WE_CHECKVALUE, _OnSalaryCheckValueFnc);
	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

	m_wndRequestPriceLabel.SetEvent(WE_CLICK, _OnRequestPriceLabelFnc);
	m_wndReturnDeptLabel.SetEvent(WE_CLICK, _OnReturnDepartmentLabelFnc);

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
	m_wndAdvice.SetEvent(WE_SELCHANGE, _OnAdviceSelectChangeFnc);
	m_wndAdvice.SetEvent(WE_LOADDATA, _OnAdviceLoadDataFnc);	
	m_wndApointment.SetEvent(WE_SELCHANGE, _OnApointmentSelectChangeFnc);
	m_wndApointment.SetEvent(WE_LOADDATA, _OnApointmentLoadDataFnc);
	m_wndParaPlace.SetEvent(WE_SELCHANGE, _OnParaPlaceSelectChangeFnc);
	m_wndParaPlace.SetEvent(WE_LOADDATA, _OnParaPlaceLoadDataFnc);
	m_wndObstetric.SetEvent(WE_CLICK, _OnObstetricSelectFnc);
	m_wndGiangansach.SetEvent(WE_CHECKVALUE, _OnGiangansachCheckValueFnc);
	m_wndNgansachtra.SetEvent(WE_CLICK, _OnNgansachtraSelectFnc);
	m_wndIsBlood.SetEvent(WE_CLICK, _OnIsBloodSelectFnc);
	m_wndXncovid19.SetEvent(WE_CLICK, _OnXncovid19SelectFnc);
	m_wndNhomBH.SetEvent(WE_LOADDATA, _OnNhomBHLoadDataFnc);
	m_wndbhquankott.SetEvent(WE_CLICK, _OnbhquankottSelectFnc);

	int nMode = GetMode();
	if (nMode == VM_EDIT)
		GetDataToScreen();
	else
		nMode = VM_ADD;

	SetMode(nMode);
}
void CHMSParaclinicalSetupDialog_new::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndNewPrice.GetDlgCtrlID(), m_nNewPrice);
	DDX_Check(pDX, m_wndGroupLabel.GetDlgCtrlID(), m_bGroup);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndPerformPlace.GetDlgCtrlID(), m_szPerformPlaceKey);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_nRequestPrice);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_TextEx(pDX, m_wndObjectApplied.GetDlgCtrlID(), m_szObjectAppliedKey);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Check(pDX, m_wndInsurancePayment.GetDlgCtrlID(), m_bInsurancePayment);
	DDX_Check(pDX, m_wndPolicyPayment.GetDlgCtrlID(), m_bPolicyPayment);
	DDX_Check(pDX, m_wndDifferencePayment.GetDlgCtrlID(), m_bDifferencePayment);
	DDX_Text(pDX, m_wndSalary.GetDlgCtrlID(), m_nSalary);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndPrintBold.GetDlgCtrlID(), m_bPrintBold);
	DDX_Check(pDX, m_wndRequestPriceLabel.GetDlgCtrlID(), m_bRequestPriceFlg);
	DDX_Check(pDX, m_wndReturnDeptLabel.GetDlgCtrlID(), m_bReturnDeptFlag);
	DDX_Text(pDX, m_wndMaxTime.GetDlgCtrlID(), m_nMaxTime);
	DDX_Text(pDX, m_wndDuration.GetDlgCtrlID(), m_nDuration);
	DDX_TextEx(pDX, m_wndGender.GetDlgCtrlID(), m_szGenderKey);
	DDX_TextEx(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdviceKey);
	DDX_TextEx(pDX, m_wndApointment.GetDlgCtrlID(), m_szApointmentKey);
	DDX_TextEx(pDX, m_wndParaPlace.GetDlgCtrlID(), m_szParaPlaceKey);
	DDX_Check(pDX, m_wndObstetric.GetDlgCtrlID(), m_bObstetric);

	DDX_Text(pDX, m_wndInsMap.GetDlgCtrlID(), m_szInsMap);
	DDX_Text(pDX, m_wndCiculerMap.GetDlgCtrlID(), m_szCiculerMap);
	DDX_Text(pDX, m_wndGiangansach.GetDlgCtrlID(), m_nGiangansach);
	DDX_Check(pDX, m_wndNgansachtra.GetDlgCtrlID(), m_bNgansachtra);
	DDX_Check(pDX, m_wndIsBlood.GetDlgCtrlID(), m_bIsBlood);
	DDX_Check(pDX, m_wndXncovid19.GetDlgCtrlID(), m_bXncovid19);
	DDX_TextEx(pDX, m_wndNhomBH.GetDlgCtrlID(), m_szNhomBHKey);
	DDX_Check(pDX, m_wndbhquankott.GetDlgCtrlID(), m_bbhquankott);
}

void CHMSParaclinicalSetupDialog_new::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){

		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);
		rs.GetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
		rs.GetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
		rs.GetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
		rs.GetValue(_T("HFL_SALARY"), m_nSalary);
		rs.GetValue(_T("HFL_GIANGANSACH"), m_nGiangansach);
		rs.GetValue(_T("hfl_manhom"), m_szNhomBHKey);

		CString szDif, szIns, szPol, szHiTech, szPlasticSurgery, szHitechMachine, szNgansachtra, szLamau, szLaxncovid, szBhquan_ko_tt;

		rs.GetValue(_T("HFL_BLOODFEE"), szLamau);
		if(szLamau == _T("Y"))
			m_bIsBlood = TRUE;
		else
			m_bIsBlood = FALSE;

		rs.GetValue(_T("HFL_XNCOVID19"), szLaxncovid);
		if(szLaxncovid == _T("Y"))
			m_bXncovid19 = TRUE;
		else
			m_bXncovid19 = FALSE;

		rs.GetValue(_T("hfl_ngansachtra"), szNgansachtra);
		if(szNgansachtra == _T("Y"))
			m_bNgansachtra = TRUE;
		else
			m_bNgansachtra = FALSE;

		rs.GetValue(_T("hfl_diffpaid"), szDif);
		if(szDif == _T("Y"))
			m_bDifferencePayment = TRUE;
		else
			m_bDifferencePayment = FALSE;

		rs.GetValue(_T("hfl_inspaid"), szIns);
		if (szIns == _T("Y"))
			m_bInsurancePayment = TRUE;
		else
			m_bInsurancePayment = FALSE;


		rs.GetValue(_T("hfl_polpaid"), szPol);
		if (szPol == _T("Y"))
			m_bPolicyPayment = TRUE;
		else
			m_bPolicyPayment = FALSE;


		rs.GetValue(_T("hfl_hitech"), szHiTech);
		

		rs.GetValue(_T("hfl_01072016price"), m_nNewPrice);
		
		m_bRequestPriceFlg = false;
		rs.GetValue(_T("hfl_reqapply"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bRequestPriceFlg = TRUE;

		

		if (szHiTech == _T("Y"))
			m_bHitech = TRUE;
		else
			m_bHitech = FALSE;

		rs.GetValue(_T("hfl_active"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bActive = true;
		else m_bActive = false;

		rs.GetValue(_T("HFL_OBSTETRIC"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bObstetric = true;
		else m_bObstetric = false;

		rs.GetValue(_T("hfl_print_bold"), tmpStr);
		m_bPrintBold = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bPlasticSurgery = TRUE;

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bHitechMachine = true;

		rs.GetValue(_T("hfl_bhquan_ko_tt"), szBhquan_ko_tt);
		if(szBhquan_ko_tt == _T("Y"))
			m_bbhquankott = TRUE;
		else
			m_bbhquankott = FALSE;
		
		rs.GetValue(_T("hfl_deptid"), m_szDepartmentKey);
		rs.GetValue(_T("hfl_performplace"), m_szPerformPlaceKey);
		rs.GetValue(_T("hfl_groupid"), m_szParentGroup);
		
		//m_szCurGroup = m_szGroupKey;
		rs.GetValue(_T("hfl_line"), m_nLine);
		rs.GetValue(_T("hfl_idx"), m_nIndex);
		rs.GetValue(_T("hfl_applydate"), m_szApplyDate);
		rs.GetValue(_T("hfl_index1"), m_szMaleIndex);
		rs.GetValue(_T("hfl_index2"), m_szFemaleIndex);
		if(m_szType != _T("T"))
		{
			m_szGroupKey = m_szParentGroup;
		}
		else
		{
			rs.GetValue(_T("hfl_opt_group"), m_szGroupKey);
			rs.GetValue(_T("hfl_isopt_group"))?m_bGroup=true:m_bGroup=false;
		}
		rs.GetValue(_T("hfl_object"), m_szObjectAppliedKey);
		rs.GetValue(_T("hfl_maxtime"), m_nMaxTime);
		rs.GetValue(_T("hfl_paraplace"), m_szParaPlaceKey);
		rs.GetValue(_T("hfl_description"), m_szAdviceKey);
		rs.GetValue(_T("hfl_fixdescription"), m_szApointmentKey);
		rs.GetValue(_T("hfl_apply_gender"), m_szGenderKey);
		rs.GetValue(_T("hfl_apply_duration"), m_nDuration);
		rs.GetValue(_T("hfl_insmap"), m_szInsMap);
		rs.GetValue(_T("hfl_cicularmap"), m_szCiculerMap);
		
		//m_szCurID = m_szID;
	}
	else
	{
		SetDefaultValues();
	}
	UpdateData(false);
}

void CHMSParaclinicalSetupDialog_new::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(m_szType != _T("T"))
	{
		m_szParentGroup = m_szGroupKey;
	}

	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list "));
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
		//_msg(_T("m_szID: %s, m_szParentGroup: %s"), m_szID, m_szParentGroup);
		m_szID.Format(_T("%s%.5d"), m_szParentGroup, m_nIndex);		
		//_msg(_T("m_szID: %s, m_szParentGroup: %s"), m_szID, m_szParentGroup);

		m_nLine = m_nIndex;
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szID);
		m_hms_fee_listTbl.Open(&pMF->m_db, szWhere);
	}
	m_hms_fee_listTbl.SetValue(_T("hfl_idx"), m_nIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_fee_listTbl.SetValue(_T("hfl_line"), m_nLine);
	m_hms_fee_listTbl.SetValue(_T("hfl_deptid"), m_szDepartmentKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_performplace"), m_szPerformPlaceKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_manhom"), m_szNhomBHKey);
	
	m_hms_fee_listTbl.SetValue(_T("hfl_itype"), 0);
	m_hms_fee_listTbl.SetValue(_T("hfl_subgroup"), _T("N"));
	if(m_szType != _T("T"))
	{
		m_hms_fee_listTbl.SetValue(_T("hfl_subitem"), _T("N"));
		m_szParentGroup = m_szGroupKey;
	}
	m_hms_fee_listTbl.SetValue(_T("hfl_groupid"), m_szParentGroup);
	m_hms_fee_listTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_fee_listTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_fee_listTbl.SetValue(_T("hfl_index1"), m_szMaleIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_index2"), m_szFemaleIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	m_hms_fee_listTbl.SetValue(_T("HFL_SALARY"), m_nSalary);
	m_hms_fee_listTbl.SetValue(_T("hfl_retprice"), m_nReturnDept);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	m_hms_fee_listTbl.SetValue(_T("HFL_GIANGANSACH"), m_nGiangansach);
	


	CString tmpStr;

	tmpStr = _T("N");
	if(m_bRequestPriceFlg && m_nRequestPrice > 0)
	{
		m_hms_fee_listTbl.SetValue(_T("hfl_reqapply"), _T("Y"));
	}
	else
	{
		m_nRequestPrice = 0;
		m_hms_fee_listTbl.SetValue(_T("hfl_reqprice"), 0);
		m_hms_fee_listTbl.SetValue(_T("hfl_reqapply"), _T("N"));

	}
	
	CString szDif, szIns, szPol, szHiTech, szObstetric, szNgansachtra, szLamau, szLaxncovid, szBhquan_ko_tt;

	if (m_bDifferencePayment)
		szDif = _T("Y");
	else
		szDif = _T("N");

	if (m_bNgansachtra)
		szNgansachtra = _T("Y");
	else
		szNgansachtra = _T("N");

	if (m_bIsBlood)
		szLamau = _T("Y");
	else
		szLamau = _T("N");

	if (m_bXncovid19)
		szLaxncovid = _T("Y");
	else
		szLaxncovid = _T("N");

	if (m_bbhquankott)
		szBhquan_ko_tt = _T("Y");
	else
		szBhquan_ko_tt = _T("N");


	if (m_bInsurancePayment)
		szIns = _T("Y");
	else
		szIns = _T("N");

	if (m_bPolicyPayment)
		szPol = _T("Y");
	else
		szPol = _T("N");

	if (m_bHitech)
		szHiTech = _T("Y");
	else
		szHiTech = _T("N");

	if (m_bObstetric)
		szObstetric = _T("Y");
	else
		szObstetric = _T("N");

	m_hms_fee_listTbl.SetValue(_T("hfl_inspaid"), szIns);
	m_hms_fee_listTbl.SetValue(_T("hfl_polpaid"), szPol);
	m_hms_fee_listTbl.SetValue(_T("hfl_diffpaid"), szDif);
	m_hms_fee_listTbl.SetValue(_T("hfl_hitech"), szHiTech);
	m_hms_fee_listTbl.SetValue(_T("HFL_BLOODFEE"), szLamau);
	m_hms_fee_listTbl.SetValue(_T("HFL_XNCOVID19"), szLaxncovid);
	m_hms_fee_listTbl.SetValue(_T("hfl_bhquan_ko_tt"), szBhquan_ko_tt);

	m_hms_fee_listTbl.SetValue(_T("hfl_typeid"), m_szType);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);

	m_hms_fee_listTbl.SetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("HFL_OBSTETRIC"), m_bObstetric?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_print_bold"), m_bPrintBold?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_plasticsurgery"), m_bPlasticSurgery?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_hitechmachine"), m_bHitechMachine?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_applydate"), m_szApplyDate);
	m_hms_fee_listTbl.SetValue(_T("hfl_opt_group"), m_szGroupKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_ngansachtra"), szNgansachtra);
	if(m_szType == _T("T"))
	{
		
		m_hms_fee_listTbl.SetValue(_T("hfl_isopt_group"), m_bGroup?_T("Y"):_T("N"));	
	}
	m_hms_fee_listTbl.SetValue(_T("hfl_object"), m_szObjectAppliedKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_01072016price"), m_nNewPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_maxtime"), m_nMaxTime);
	m_hms_fee_listTbl.SetValue(_T("hfl_description"), m_szAdviceKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_fixdescription"), m_szApointmentKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_paraplace"), m_szParaPlaceKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_apply_duration"), m_nDuration);
	m_hms_fee_listTbl.SetValue(_T("hfl_apply_gender"), m_szGenderKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_insmap"), m_szInsMap);
	m_hms_fee_listTbl.SetValue(_T("hfl_cicularmap"), m_szCiculerMap);
}


void CHMSParaclinicalSetupDialog_new::SetDefaultValues(){
	m_szApplyDate = AfxGetApp()->GetProfileString(_T("Formerly Data"), _T("Ins Apply Date"));
	//m_szApplyDate.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szID.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequestPrice=0;
	m_nReturnDept=0;
	m_nNewPrice = 0;
	m_szFeeCategoryKey.Empty();
	m_bDifferencePayment=FALSE;
	m_bInsurancePayment=TRUE;
	m_bPolicyPayment=TRUE;
	m_bHitech=FALSE;
	m_bObstetric=FALSE;
	m_nLine=0;
	m_bHitechMachine=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bActive = TRUE;
	m_bPrintBold = FALSE;
	m_nInsDiffPayment = 0;
	m_nPolDiffPayment = 0;
	m_nSalary=0;
	m_nIndex = 0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bRequestPriceFlg = FALSE;
	m_szPerformPlaceKey.Empty();
	//m_bInsDiffPaymentFlg = m_bPolDiffPaymentFlg = FALSE;
	m_bReturnDeptFlag = FALSE;
	m_nMaxTime=0;
	m_nDuration=0;
	m_szGenderKey.Empty();
	m_szAdviceKey.Empty();
	m_szApointmentKey.Empty();
	m_szParaPlaceKey.Empty();

	m_szInsMap.Empty();
	m_szCiculerMap.Empty();
	m_nGiangansach=0;
	m_bNgansachtra=FALSE;
	m_bIsBlood=FALSE;
	m_bXncovid19=FALSE;
	m_bbhquankott=false;

}

int CHMSParaclinicalSetupDialog_new::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD:			
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT:			
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
		m_wndID.EnableWindow(false);
		m_wndInsDiffPayment.EnableWindow(FALSE);
		m_wndPolDiffPayment.EnableWindow(FALSE);
		m_wndRequestPrice.EnableWindow(FALSE);
		m_wndReturnDept.EnableWindow(FALSE);
		if(m_szType == _T("O"))
		{
			m_wndFemaleIndex.EnableWindow(FALSE);
			m_wndMaleIndex.EnableWindow(FALSE);
			m_bGroup = TRUE;
		}
		UpdateData(FALSE); 


 		return nOldMode; 
}

/*void CHMSParaclinicalSetupDialog_new::OnApplyDateChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnApplyDateSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnApplyDateKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnGiangansachCheckValue()
{
	return 0;
} 
	void CHMSParaclinicalSetupDialog_new::OnNgansachtraSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

int CHMSParaclinicalSetupDialog_new::OnApplyDateCheckValue(){
	return 0;
}
int CHMSParaclinicalSetupDialog_new::OnSalaryCheckValue()
{
	return 0;
}
void CHMSParaclinicalSetupDialog_new::OnbhquankottSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSParaclinicalSetupDialog_new::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
}
 
void CHMSParaclinicalSetupDialog_new::OnGroupSelendok(){

}

/*void CHMSParaclinicalSetupDialog_new::OnGroupSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnGroupKillfocus(){
	
}*/
void CHMSParaclinicalSetupDialog_new::OnIsBloodSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new::OnXncovid19Select()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
long CHMSParaclinicalSetupDialog_new::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') AND hfg_active ='Y'") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' ORDER BY cast(ss_code as integer)"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndFeeCategory.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndFeeCategory.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

/*void CHMSParaclinicalSetupDialog_new::OnFeeCategoryAddNew(){
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
 
/*void CHMSParaclinicalSetupDialog_new::OnUnitChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnUnitSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnUnitKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnUnitCheckValue()
{
	m_szUnit.Trim();
	if(m_szUnit.IsEmpty())
		return -1;	
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new::OnNameChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNameSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnNameKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnNameCheckValue(){
	UpdateData(true);
	CString tmpStr;
	PreInitCap(m_szName, tmpStr);
	m_szName = tmpStr;
	UpdateData(false);
	return 0;
}
 
void CHMSParaclinicalSetupDialog_new::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
 
void CHMSParaclinicalSetupDialog_new::OnDepartmentSelendok(){

}

/*void CHMSParaclinicalSetupDialog_new::OnDepartmentSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnDepartmentKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey()){
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept %s ORDER BY sd_id "), szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSParaclinicalSetupDialog_new::OnPerformPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformPlace.IsSearchKey() && !m_szPerformPlaceKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id='%s' "), m_szPerformPlaceKey);
	}
	m_wndPerformPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CHMSParaclinicalSetupDialog_new::OnNhomBHLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_4210_manhom' ORDER BY ss_index, ss_code"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndNhomBH.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndNhomBH.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

long CHMSParaclinicalSetupDialog_new::OnParaPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParaPlace.IsSearchKey() && !m_szParaPlaceKey.IsEmpty())
	{
	 szWhere.Format(_T(" and ss_code='%s' "), m_szParaPlaceKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_paraplace' %s ORDER BY cast(ss_code as integer)"), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	m_wndParaPlace.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndParaPlace.AddItems(
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}


long CHMSParaclinicalSetupDialog_new::OnAdviceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdvice.IsSearchKey() && !m_szAdviceKey.IsEmpty())
	{
	 szWhere.Format(_T(" and ss_code='%s' "), m_szAdviceKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_para_advice' %s ORDER BY cast(ss_code as integer)"), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	m_wndAdvice.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndAdvice.AddItems(
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
long CHMSParaclinicalSetupDialog_new::OnApointmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	if(m_wndApointment.IsSearchKey() && !m_szApointmentKey.IsEmpty())
	{
	 szWhere.Format(_T(" and ss_code='%s' "), m_szApointmentKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_para_apointment' %s ORDER BY cast(ss_code as integer)"), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	m_wndApointment.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndApointment.AddItems(
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
int CHMSParaclinicalSetupDialog_new::OnMaxTimeCheckValue()
{
	return 0;
}

void CHMSParaclinicalSetupDialog_new::OnAdviceSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalSetupDialog_new::OnApointmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}

void CHMSParaclinicalSetupDialog_new::OnParaPlaceSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CCHMSParaclinicalSetupDialog_new::OnParaPlaceSetfocus(){
	
}*/
/*void CCHMSParaclinicalSetupDialog_new::OnParaPlaceKillfocus(){
	
}*/


/*void CHMSParaclinicalSetupDialog_new::OnPerformPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnReturnDeptKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnServicePriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnServicePriceCheckValue(){
	UpdateData(true);
	m_nInsurancePrice = m_nPolicyPrice = m_nServicePrice;
	UpdateData(false);
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
 
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolicyPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnPolicyPriceCheckValue(){
	return 0;
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
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSelendok(){
	 
}
void CHMSParaclinicalSetupDialog_new::OnObstetricSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new::OnObjectAppliedLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as code, ss_desc as descr FROM sys_sel WHERE ss_id = 'hms_fee_object' ORDER BY ss_code"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndObjectApplied.AddItems(
			rs.GetValue(_T("code")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSParaclinicalSetupDialog_new::OnObjectAppliedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
	m_wndGender.AddItems(_T("A"), _T("Nam, N\x1EEF"), NULL);
	m_wndGender.AddItems(_T("M"), _T("Nam"), NULL);
	m_wndGender.AddItems(_T("F"), _T("N\x1EEF"), NULL);
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

void CHMSParaclinicalSetupDialog_new::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveParaclinicalSetupDialog_new();
} 
void CHMSParaclinicalSetupDialog_new::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSParaclinicalSetupDialog_new::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new::OnDifferencePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndInsDiffPayment.EnableWindow(m_bDifferencePayment);
	m_wndPolDiffPayment.EnableWindow(m_bDifferencePayment);
	UpdateData(FALSE);
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

void CHMSParaclinicalSetupDialog_new::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}




void CHMSParaclinicalSetupDialog_new::OnGroupLabelSelect(){
	UpdateData(true);
	m_wndGroup.EnableWindow(m_bGroup);
}

int CHMSParaclinicalSetupDialog_new::OnSaveParaclinicalSetupDialog_new(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1;

	if(m_nInsDiffPayment < 0 || m_nPolDiffPayment < 0 || m_nReturnDept < 0)
		return -1;
	if(m_nInsDiffPayment > m_nServicePrice || m_nPolDiffPayment > m_nServicePrice)
		return -1;
	if(m_nReturnDept > m_nServicePrice)
		return -1;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_fee_listTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
//		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		/*szSQL.Format(_T(" INSERT") \
		_T(" INTO hms_fee_list_edit") \
		_T("   (") \
		_T("     HFL_CREATEDBY ,") \
		_T("     HFL_CREATEDDATE ,") \
		_T("     HFL_UPDATEDBY ,") \
		_T("     HFL_UPDATEDDATE ,") \
		_T("     HFL_FEEID ,") \
		_T("     HFL_IDX ,") \
		_T("     HFL_LINE ,") \
		_T("     HFL_DEPTID ,") \
		_T("     HFL_TYPEID ,") \
		_T("     HFL_GROUPID ,") \
		_T("     HFL_ITYPE ,") \
		_T("     HFL_SUBGROUP ,") \
		_T("     HFL_SUBITEM ,") \
		_T("     HFL_NAME ,") \
		_T("     HFL_UNIT ,") \
		_T("     HFL_INDEX1 ,") \
		_T("     HFL_INDEX2 ,") \
		_T("     HFL_SERVPRICE ,") \
		_T("     HFL_REQPRICE ,") \
		_T("     HFL_INSPRICE ,") \
		_T("     HFL_POLPRICE ,") \
		_T("     HFL_INSPAID ,") \
		_T("     HFL_POLPAID ,") \
		_T("     HFL_DIFFPAID ,") \
		_T("     HFL_HITECH ,") \
		_T("     HFL_ACTIVE ,") \
		_T("     HFL_PRINTSUBITEM ,") \
		_T("     HFL_REPORT ,") \
		_T("     HFL_RETPRICE ,") \
		_T("     HFL_RESULT1 ,") \
		_T("     HFL_RESULT2 ,") \
		_T("     HFL_OLDID ,") \
		_T("     HFL_NAME2 ,") \
		_T("     HFL_PLASTICSURGERY ,") \
		_T("     HFL_HITECHMACHINE ,") \
		_T("     HFL_INSDIFF ,") \
		_T("     HFL_POLDIFF ,") \
		_T("     HFL_BLOODFEE ,") \
		_T("     HFL_CATEGORYID,") \
		_T("     HFL_HOSTNAME ,") \
		_T("     HFL_NUMIMG ,") \
		_T("     HFL_OBJECT ,") \
		_T("     HFL_ORG_ID ,") \
		_T("     hfl_isopt_group ,") \
		_T("     HFL_APPLYDATE ,") \
		_T("     hfl_opt_group ,") \
		_T("     HFL_01072016PRICE ,") \
		_T("     HFL_REQAPPLY,") \
		_T("	 HFL_PRINT_BOLD,") \
		_T("	 HFL_SALARY,") \
		_T("	 HFL_MAXTIME, ") \
		_T("	 HFL_DESCRIPTION, ") \
		_T("	 HFL_FIXDESCRIPTION, ") \
		_T("	 HFL_PARAPLACE, hfl_manhom ") \
		_T("   )") \
		_T(" SELECT HFL_CREATEDBY ,") \
		_T("   HFL_CREATEDDATE ,") \
		_T("   HFL_UPDATEDBY ,") \
		_T("   HFL_UPDATEDDATE ,") \
		_T("   HFL_FEEID ,") \
		_T("   HFL_IDX ,") \
		_T("   HFL_LINE ,") \
		_T("   HFL_DEPTID ,") \
		_T("   HFL_TYPEID ,") \
		_T("   HFL_GROUPID ,") \
		_T("   HFL_ITYPE ,") \
		_T("   HFL_SUBGROUP ,") \
		_T("   HFL_SUBITEM ,") \
		_T("   HFL_NAME ,") \
		_T("   HFL_UNIT ,") \
		_T("   HFL_INDEX1 ,") \
		_T("   HFL_INDEX2 ,") \
		_T("   HFL_SERVPRICE ,") \
		_T("   HFL_REQPRICE ,") \
		_T("   HFL_INSPRICE ,") \
		_T("   HFL_POLPRICE ,") \
		_T("   HFL_INSPAID ,") \
		_T("   HFL_POLPAID ,") \
		_T("   HFL_DIFFPAID ,") \
		_T("   HFL_HITECH ,") \
		_T("   HFL_ACTIVE ,") \
		_T("   HFL_PRINTSUBITEM ,") \
		_T("   HFL_REPORT ,") \
		_T("   HFL_RETPRICE ,") \
		_T("   HFL_RESULT1 ,") \
		_T("   HFL_RESULT2 ,") \
		_T("   HFL_OLDID ,") \
		_T("   HFL_NAME2 ,") \
		_T("   HFL_PLASTICSURGERY ,") \
		_T("   HFL_HITECHMACHINE ,") \
		_T("   HFL_INSDIFF ,") \
		_T("   HFL_POLDIFF ,") \
		_T("   HFL_BLOODFEE ,") \
		_T("   HFL_CATEGORYID ,") \
		_T("   HFL_HOSTNAME ,") \
		_T("   HFL_NUMIMG ,") \
		_T("   HFL_OBJECT ,") \
		_T("   HFL_ORG_ID ,") \
		_T("   hfl_isopt_group ,") \
		_T("   HFL_APPLYDATE ,") \
		_T("   hfl_opt_group ,") \
		_T("   HFL_01072016PRICE ,") \
		_T("   HFL_REQAPPLY,") \
		_T("   HFL_PRINT_BOLD,") \
		_T("   HFL_SALARY,") \
		_T("   HFL_MAXTIME, ") \
		_T("   HFL_DESCRIPTION, ") \
		_T("   HFL_FIXDESCRIPTION, ") \
		_T("   HFL_PARAPLACE, hfl_manhom ") \

		_T(" FROM hms_fee_list") \
		_T(" WHERE hfl_feeid ='%s' "), m_szID);*/
		//Gọi hàm đồng bộ giữa 2 table
		int count = 10;
		int ret = 10;		
		szSQL.Format(_T("SYS_SYNC_TABLE('hms_fee_list', 'hms_fee_list_edit') "));
		count = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("hms_fee_list_sync_update('%s') "), m_szID);
		ret = str2long(pMF->ExecDML(szSQL));
		if (ret <0)
		{
			ShowMessageBox(_T("Có lỗi xảy ra khi lưu log mục phí, hãy thông báo cho admin!"),MB_ICONERROR);
			return -1;
		}	

		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szID); 
 		szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate, hfl_subgroup,hfl_subitem, hfl_feeid")); 
 		szSQL += szWhere; 		
 	} 
_flog(_T("%s"), szSQL);

 	int ret = pMF->ExecSQL(szSQL); 

 	if(ret > 0) 
 	{	
		if (!m_szApplyDate.IsEmpty())
			AfxGetApp()->WriteProfileString(_T("Formerly Data"), _T("Ins Apply Date"), m_szApplyDate);
 		if(GetMode() == VM_EDIT)
		{
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szID, m_szName);
			pMF->SystemLog(szEvent, szDesc);
			OnOK();
		}
		else
		{
 			SetMode(VM_ADD); 
			m_wndName.SetFocus();
		}
		//if(m_wndOperationList) 
		//	m_wndOperationList->OnFeeListLoadData();

 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
void CHMSParaclinicalSetupDialog_new::OnRequestPriceLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndRequestPrice.EnableWindow(m_bRequestPriceFlg);	
}

void CHMSParaclinicalSetupDialog_new::OnInsDiffPaymentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

}

void CHMSParaclinicalSetupDialog_new::OnPolDiffPaymentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

}

void CHMSParaclinicalSetupDialog_new::OnReturnDepartmentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndReturnDept.EnableWindow(m_bReturnDeptFlag);

}
