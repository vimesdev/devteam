#include "CHMSParaclinicalSetupDialog_new.h"
#include "MainFrm.h"
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSParaclinicalSetupDialog_new* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnGroupAddNew();
}*/
static void _OnFeeCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSParaclinicalSetupDialog_new* )pWnd)->OnFeeCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeCategorySelendokFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategorySelendok();
}
/*static void _OnFeeCategorySetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryKillfocus();
}*/
/*static void _OnFeeCategoryKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryKillfocus();
}*/
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryLoadData();
}
/*static void _OnFeeCategoryAddNewFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFeeCategoryAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnIDCheckValue();
} 
static void _OnObjectAppliedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSParaclinicalSetupDialog_new* )pWnd)->OnObjectAppliedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectAppliedSelendokFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedSelendok();
}
/*static void _OnObjectAppliedSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedKillfocus();
}*/
/*static void _OnObjectAppliedKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedKillfocus();
}*/
static long _OnObjectAppliedLoadDataFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedLoadData();
}
/*static void _OnObjectAppliedAddNewFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnObjectAppliedAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnApplyDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSParaclinicalSetupDialog_new* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnServicePriceCheckValue();
} 
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnDifferencePaymentSelect();
}
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsurancePriceCheckValue();
} 
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnInsurancePaymentSelect();
}
/*static void _OnInsDiffPaymentChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentChange();
} */
/*static void _OnInsDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentSetfocus();} */ 
/*static void _OnInsDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentKillfocus();
} */
static int _OnInsDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnInsDiffPaymentCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolicyPriceCheckValue();
} 
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnPolicyPaymentSelect();
}
/*static void _OnPolDiffPaymentChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentChange();
} */
/*static void _OnPolDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentSetfocus();} */ 
/*static void _OnPolDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentKillfocus();
} */
static int _OnPolDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnPolDiffPaymentCheckValue();
} 
static void _OnRequestPriceLabelSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnRequestPriceLabelSelect();
}
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnRequestPriceCheckValue();
} 
static void _OnReturnDeptLabelSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnReturnDeptLabelSelect();
}
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnReturnDeptCheckValue();
} 
/*static void _OnMaleIndexChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexChange();
} */
/*static void _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexSetfocus();} */ 
/*static void _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnMaleIndexCheckValue();
} 
/*static void _OnFemaleIndexChangeFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexChange();
} */
/*static void _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexSetfocus();} */ 
/*static void _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CCHMSParaclinicalSetupDialog_new *)pWnd)->OnFemaleIndexCheckValue();
} 
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnHitechSelect();
}
static void _OnPlasticSurgerySelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnPlasticSurgerySelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnHitechMachineSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSParaclinicalSetupDialog_new *pVw = (CCHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSParaclinicalSetupDialog_new *pVw = (CCHMSParaclinicalSetupDialog_new *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnAddCHMSParaclinicalSetupDialog_new();
} 
static int _OnEditCHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnEditCHMSParaclinicalSetupDialog_new();
} 
static int _OnDeleteCHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnDeleteCHMSParaclinicalSetupDialog_new();
} 
static int _OnSaveCHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnSaveCHMSParaclinicalSetupDialog_new();
} 
static int _OnCancelCHMSParaclinicalSetupDialog_newFnc(CWnd *pWnd){
	 return ((CCHMSParaclinicalSetupDialog_new*)pWnd)->OnCancelCHMSParaclinicalSetupDialog_new();
} 
CCHMSParaclinicalSetupDialog_new::CCHMSParaclinicalSetupDialog_new(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 495;
	SetDefaultValues();
}
CCHMSParaclinicalSetupDialog_new::~CCHMSParaclinicalSetupDialog_new(){
}
void CCHMSParaclinicalSetupDialog_new::OnCreateComponents(){
	m_wndInformationOfTestFee.Create(this, _T("FEE_ITEM_INFORMATION"), 5, 5, 455, 455);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 110, 55);
	m_wndGroup.Create(this,115, 30, 450, 55); 
	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 60, 110, 85);
	m_wndFeeCategory.Create(this,115, 60, 450, 85); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 90, 110, 115);
	m_wndID.Create(this,115, 90, 215, 115); 
	m_wndObjectAppliedLabel.Create(this, _T("Object Applied"), 220, 90, 320, 115);
	m_wndObjectApplied.Create(this,325, 90, 450, 115); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 120, 110, 145);
	m_wndName.Create(this,115, 120, 450, 210); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 215, 110, 240);
	m_wndUnit.Create(this,115, 215, 215, 240); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 220, 215, 345, 240);
	m_wndApplyDate.Create(this,350, 215, 450, 240); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 245, 110, 270);
	m_wndDepartment.Create(this,115, 245, 450, 270); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 275, 110, 300);
	m_wndServicePrice.Create(this,115, 275, 215, 300); 
	m_wndDifferencePayment.Create(this, _T("Difference Payment"), 220, 275, 345, 300);
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 10, 305, 110, 330);
	m_wndInsurancePrice.Create(this,115, 305, 215, 330); 
	m_wndInsurancePayment.Create(this, _T("Insurance Payment"), 220, 305, 345, 330);
	m_wndInsDiffPayment.Create(this,350, 305, 450, 330); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 335, 110, 360);
	m_wndPolicyPrice.Create(this,115, 335, 215, 360); 
	m_wndPolicyPayment.Create(this, _T("Policy Payment"), 220, 335, 345, 360);
	m_wndPolDiffPayment.Create(this,350, 335, 450, 360); 
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 10, 365, 110, 390);
	m_wndRequestPrice.Create(this,115, 365, 215, 390); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 220, 365, 345, 390);
	m_wndReturnDept.Create(this,350, 365, 450, 390); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 10, 395, 110, 420);
	m_wndMaleIndex.Create(this,115, 395, 215, 420); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 220, 395, 345, 420);
	m_wndFemaleIndex.Create(this,350, 395, 450, 420); 
	m_wndHitech.Create(this, _T("Hitech"), 10, 425, 110, 450);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 115, 425, 215, 450);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 220, 425, 450, 450);
	m_wndActive.Create(this, _T("Active"), 10, 460, 110, 485);
	m_wndSave.Create(this, _T("&Save"), 270, 460, 360, 485);
	m_wndClose.Create(this, _T("&Close"), 365, 460, 455, 485);

}
void CCHMSParaclinicalSetupDialog_new::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndFeeCategory.SetCheckValue(true);
	m_wndFeeCategory.LimitText(1024);
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndObjectApplied.SetCheckValue(true);
	m_wndObjectApplied.LimitText(1024);
	m_wndName.SetMultiLine(TRUE);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndServicePrice.SetLimitText(1024);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(1024);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndInsDiffPayment.SetLimitText(1024);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(1024);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(1024);
	m_wndPolDiffPayment.SetCheckValue(true);
	m_wndRequestPrice.SetLimitText(1024);
	m_wndRequestPrice.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(1024);
	m_wndReturnDept.SetCheckValue(true);
	m_wndMaleIndex.SetLimitText(1024);
	m_wndMaleIndex.SetCheckValue(true);
	m_wndFemaleIndex.SetLimitText(1024);
	m_wndFemaleIndex.SetCheckValue(true);









}
void CCHMSParaclinicalSetupDialog_new::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndObjectApplied.SetEvent(WE_SELENDOK, _OnObjectAppliedSelendokFnc);
	//m_wndObjectApplied.SetEvent(WE_SETFOCUS, _OnObjectAppliedSetfocusFnc);
	//m_wndObjectApplied.SetEvent(WE_KILLFOCUS, _OnObjectAppliedKillfocusFnc);
	m_wndObjectApplied.SetEvent(WE_SELCHANGE, _OnObjectAppliedSelectChangeFnc);
	m_wndObjectApplied.SetEvent(WE_LOADDATA, _OnObjectAppliedLoadDataFnc);
	//m_wndObjectApplied.SetEvent(WE_ADDNEW, _OnObjectAppliedAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	m_wndInsurancePayment.SetEvent(WE_CLICK, _OnInsurancePaymentSelectFnc);
	//m_wndInsDiffPayment.SetEvent(WE_CHANGE, _OnInsDiffPaymentChangeFnc);
	//m_wndInsDiffPayment.SetEvent(WE_SETFOCUS, _OnInsDiffPaymentSetfocusFnc);
	//m_wndInsDiffPayment.SetEvent(WE_KILLFOCUS, _OnInsDiffPaymentKillfocusFnc);
	m_wndInsDiffPayment.SetEvent(WE_CHECKVALUE, _OnInsDiffPaymentCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	m_wndPolicyPayment.SetEvent(WE_CLICK, _OnPolicyPaymentSelectFnc);
	//m_wndPolDiffPayment.SetEvent(WE_CHANGE, _OnPolDiffPaymentChangeFnc);
	//m_wndPolDiffPayment.SetEvent(WE_SETFOCUS, _OnPolDiffPaymentSetfocusFnc);
	//m_wndPolDiffPayment.SetEvent(WE_KILLFOCUS, _OnPolDiffPaymentKillfocusFnc);
	m_wndPolDiffPayment.SetEvent(WE_CHECKVALUE, _OnPolDiffPaymentCheckValueFnc);
	m_wndRequestPriceLabel.SetEvent(WE_CLICK, _OnRequestPriceLabelSelectFnc);
	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
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
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCHMSParaclinicalSetupDialog_new::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndObjectApplied.GetDlgCtrlID(), m_szObjectAppliedKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Check(pDX, m_wndDifferencePayment.GetDlgCtrlID(), m_bDifferencePayment);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Check(pDX, m_wndInsurancePayment.GetDlgCtrlID(), m_bInsurancePayment);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndPolicyPayment.GetDlgCtrlID(), m_bPolicyPayment);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_Check(pDX, m_wndRequestPriceLabel.GetDlgCtrlID(), m_bRequestPriceLabel);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_nRequestPrice);
	DDX_Check(pDX, m_wndReturnDeptLabel.GetDlgCtrlID(), m_bReturnDeptLabel);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CCHMSParaclinicalSetupDialog_new::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSParaclinicalSetupDialog_new::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSParaclinicalSetupDialog_new::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szFeeCategoryKey.Empty();
	m_szID.Empty();
	m_szObjectAppliedKey.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szApplyDate.Empty();
	m_szDepartmentKey.Empty();
	m_nServicePrice=0;
	m_bDifferencePayment=FALSE;
	m_nInsurancePrice=0;
	m_bInsurancePayment=FALSE;
	m_nInsDiffPayment=0;
	m_nPolicyPrice=0;
	m_bPolicyPayment=FALSE;
	m_nPolDiffPayment=0;
	m_bRequestPriceLabel=FALSE;
	m_nRequestPrice=0;
	m_bReturnDeptLabel=FALSE;
	m_nReturnDept=0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bHitech=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bHitechMachine=FALSE;
	m_bActive=FALSE;

}
int CCHMSParaclinicalSetupDialog_new::SetMode(int nMode){
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
void CCHMSParaclinicalSetupDialog_new::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSParaclinicalSetupDialog_new::OnGroupSelendok(){
	 
}
/*void CCHMSParaclinicalSetupDialog_new::OnGroupSetfocus(){
	
}*/
/*void CCHMSParaclinicalSetupDialog_new::OnGroupKillfocus(){
	
}*/
long CCHMSParaclinicalSetupDialog_new::OnGroupLoadData(){
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
/*void CCHMSParaclinicalSetupDialog_new::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSParaclinicalSetupDialog_new::OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSParaclinicalSetupDialog_new::OnFeeCategorySelendok(){
	 
}
/*void CCHMSParaclinicalSetupDialog_new::OnFeeCategorySetfocus(){
	
}*/
/*void CCHMSParaclinicalSetupDialog_new::OnFeeCategoryKillfocus(){
	
}*/
long CCHMSParaclinicalSetupDialog_new::OnFeeCategoryLoadData(){
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
/*void CCHMSParaclinicalSetupDialog_new::OnFeeCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnIDChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnIDSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnIDKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnIDCheckValue(){
	return 0;
} 
void CCHMSParaclinicalSetupDialog_new::OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSParaclinicalSetupDialog_new::OnObjectAppliedSelendok(){
	 
}
/*void CCHMSParaclinicalSetupDialog_new::OnObjectAppliedSetfocus(){
	
}*/
/*void CCHMSParaclinicalSetupDialog_new::OnObjectAppliedKillfocus(){
	
}*/
long CCHMSParaclinicalSetupDialog_new::OnObjectAppliedLoadData(){
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
/*void CCHMSParaclinicalSetupDialog_new::OnObjectAppliedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnNameChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnNameSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnNameKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnNameCheckValue(){
	return 0;
} 
/*void CCHMSParaclinicalSetupDialog_new::OnUnitChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnUnitSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnUnitKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnUnitCheckValue(){
	return 0;
} 
/*void CCHMSParaclinicalSetupDialog_new::OnApplyDateChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnApplyDateSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnApplyDateKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnApplyDateCheckValue(){
	return 0;
} 
void CCHMSParaclinicalSetupDialog_new::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSParaclinicalSetupDialog_new::OnDepartmentSelendok(){
	 
}
/*void CCHMSParaclinicalSetupDialog_new::OnDepartmentSetfocus(){
	
}*/
/*void CCHMSParaclinicalSetupDialog_new::OnDepartmentKillfocus(){
	
}*/
long CCHMSParaclinicalSetupDialog_new::OnDepartmentLoadData(){
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
/*void CCHMSParaclinicalSetupDialog_new::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnServicePriceChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnServicePriceSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnServicePriceKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnServicePriceCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnDifferencePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSParaclinicalSetupDialog_new::OnInsurancePriceChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnInsurancePriceSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnInsurancePriceKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnInsurancePriceCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSParaclinicalSetupDialog_new::OnInsDiffPaymentChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnInsDiffPaymentSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnInsDiffPaymentKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnInsDiffPaymentCheckValue(){
	return 0;
} 
/*void CCHMSParaclinicalSetupDialog_new::OnPolicyPriceChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnPolicyPriceSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnPolicyPriceKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnPolicyPriceCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSParaclinicalSetupDialog_new::OnPolDiffPaymentChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnPolDiffPaymentSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnPolDiffPaymentKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnPolDiffPaymentCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnRequestPriceLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSParaclinicalSetupDialog_new::OnRequestPriceChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnRequestPriceSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnRequestPriceKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnRequestPriceCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnReturnDeptLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSParaclinicalSetupDialog_new::OnReturnDeptChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnReturnDeptSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnReturnDeptKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CCHMSParaclinicalSetupDialog_new::OnMaleIndexChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnMaleIndexSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnMaleIndexKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnMaleIndexCheckValue(){
	return 0;
} 
/*void CCHMSParaclinicalSetupDialog_new::OnFemaleIndexChange(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnFemaleIndexSetfocus(){
	
} */
/*void CCHMSParaclinicalSetupDialog_new::OnFemaleIndexKillfocus(){
	
} */
int CCHMSParaclinicalSetupDialog_new::OnFemaleIndexCheckValue(){
	return 0;
} 
	void CCHMSParaclinicalSetupDialog_new::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSParaclinicalSetupDialog_new::OnPlasticSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSParaclinicalSetupDialog_new::OnHitechMachineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSParaclinicalSetupDialog_new::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCHMSParaclinicalSetupDialog_new::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSParaclinicalSetupDialog_new::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSParaclinicalSetupDialog_new::OnAddCHMSParaclinicalSetupDialog_new(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSParaclinicalSetupDialog_new::OnEditCHMSParaclinicalSetupDialog_new(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSParaclinicalSetupDialog_new::OnDeleteCHMSParaclinicalSetupDialog_new(){
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
 		OnCancelCHMSParaclinicalSetupDialog_new();
 	}
	return 0;
}
int CCHMSParaclinicalSetupDialog_new::OnSaveCHMSParaclinicalSetupDialog_new(){
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
 		//OnCHMSParaclinicalSetupDialog_newListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSParaclinicalSetupDialog_new::OnCancelCHMSParaclinicalSetupDialog_new(){
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
int CCHMSParaclinicalSetupDialog_new::OnCHMSParaclinicalSetupDialog_newListLoadData(){
	return 0;
}
