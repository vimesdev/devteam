#include "HMSParaclinicalSetupDialog_new2.h"
#include "MainFrm.h"
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnApplyDateCheckValue();
} 
static void _OnGroupLabelSelectFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupLabelSelect();
}
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new2* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnGroupAddNew();
}*/
static void _OnFeeCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new2* )pWnd)->OnFeeCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeCategorySelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFeeCategorySelendok();
}
/*static void _OnFeeCategorySetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFeeCategoryKillfocus();
}*/
/*static void _OnFeeCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFeeCategoryKillfocus();
}*/
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFeeCategoryLoadData();
}
/*static void _OnFeeCategoryAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFeeCategoryAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnIDCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new2* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnReturnDeptCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnRequestPriceCheckValue();
} 
/*static void _OnInsDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsDiffPaymentChange();
} */
/*static void _OnInsDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsDiffPaymentSetfocus();} */ 
/*static void _OnInsDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsDiffPaymentKillfocus();
} */
static int _OnInsDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnInsDiffPaymentCheckValue();
} 
/*static void _OnPolDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolDiffPaymentChange();
} */
/*static void _OnPolDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolDiffPaymentSetfocus();} */ 
/*static void _OnPolDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolDiffPaymentKillfocus();
} */
static int _OnPolDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnPolDiffPaymentCheckValue();
} 
static void _OnObjectAppliedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog_new2* )pWnd)->OnObjectAppliedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectAppliedSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnObjectAppliedSelendok();
}
/*static void _OnObjectAppliedSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnObjectAppliedKillfocus();
}*/
/*static void _OnObjectAppliedKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnObjectAppliedKillfocus();
}*/
static long _OnObjectAppliedLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnObjectAppliedLoadData();
}
/*static void _OnObjectAppliedAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnObjectAppliedAddNew();
}*/
/*static void _OnMaleIndexChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnMaleIndexChange();
} */
/*static void _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnMaleIndexSetfocus();} */ 
/*static void _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnMaleIndexCheckValue();
} 
/*static void _OnFemaleIndexChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFemaleIndexChange();
} */
/*static void _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFemaleIndexSetfocus();} */ 
/*static void _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog_new2 *)pWnd)->OnFemaleIndexCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new2 *pVw = (CHMSParaclinicalSetupDialog_new2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog_new2 *pVw = (CHMSParaclinicalSetupDialog_new2 *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnInsurancePaymentSelect();
}
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnPolicyPaymentSelect();
}
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnDifferencePaymentSelect();
}
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnHitechSelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnHitechMachineSelect();
}
static void _OnPlasticSurgerySelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnPlasticSurgerySelect();
}

static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnActiveSelect();
}

static void _OnRequestPriceLabelFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnRequestPriceLabel();
}

static void _OnInsDiffPaymentLabelFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnInsDiffPaymentLabel();
}

static void _OnPolDiffPaymentLabelFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnPolDiffPaymentLabel();
}


static void _OnReturnDepartmentLabelFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog_new2*)pWnd)->OnReturnDepartmentLabel();
}

CHMSParaclinicalSetupDialog_new2::CHMSParaclinicalSetupDialog_new2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szType = _T("O");
}
CHMSParaclinicalSetupDialog_new2::~CHMSParaclinicalSetupDialog_new2(){
}
void CHMSParaclinicalSetupDialog_new2::OnCreateComponents(){
	
	m_wndInformationOfTestFee.Create(this, _T("Fee Item Information"), 5, 5, 550, 550);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 170, 55);
	m_wndApplyDate.Create(this,175, 30, 275, 55); 
	m_wndNewPriceLabel.Create(this, _T("New Price(01/07)"), 280, 31, 440, 56);
	m_wndNewPrice.Create(this,445, 31, 545, 56); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 61, 170, 86);
	m_wndGroup.Create(this,175, 61, 545, 86); 
	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 90, 170, 115);
	m_wndFeeCategory.Create(this,175, 90, 545, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 170, 145);
	m_wndDepartment.Create(this,175, 120, 545, 145); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 150, 170, 175);
	m_wndID.Create(this,175, 150, 275, 175); 
	m_wndNameLabel.Create(this, _T("Name /nit"), 10, 180, 170, 205);
	m_wndName.Create(this,175, 180, 545, 245, TRUE, FALSE, TRUE); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 250, 170, 275);
	m_wndUnit.Create(this,175, 250, 275, 275); 
	m_wndServicePriceLabel.Create(this, _T("Service Price (Old)"), 10, 280, 170, 305);
	m_wndServicePrice.Create(this,175, 280, 275, 305); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price (Old)"), 10, 310, 170, 335);
	m_wndInsurancePrice.Create(this,175, 310, 275, 335); 
	m_wndInsurancePayment.Create(this, _T("Insurance Payment"), 280, 310, 440, 335);
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price (Old)"), 10, 340, 170, 365);
	m_wndPolicyPrice.Create(this,175, 340, 275, 365); 
	m_wndPolicyPayment.Create(this, _T("Policy Payment"), 280, 340, 440, 365);
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 10, 370, 170, 395);
	m_wndRequestPrice.Create(this,175, 370, 275, 395); 
	m_wndDifferencePayment.Create(this, _T("Difference Payment"), 280, 400, 440, 425);
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 10, 400, 170, 425);
	m_wndInsDiffPayment.Create(this,175, 400, 275, 425); 
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 10, 430, 170, 455);
	m_wndPolDiffPayment.Create(this,175, 430, 275, 455); 
	m_wndObjectAppliedLabel.Create(this, _T("Object Applied"), 10, 460, 170, 485);
	m_wndObjectApplied.Create(this,175, 460, 275, 485); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 280, 460, 440, 485);
	m_wndReturnDept.Create(this,445, 460, 545, 485); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 10, 490, 170, 515);
	m_wndMaleIndex.Create(this,175, 490, 275, 515); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 280, 490, 440, 515);
	m_wndFemaleIndex.Create(this,445, 490, 545, 515); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 280, 520, 440, 545);
	m_wndHitech.Create(this, _T("Hitech"), 175, 520, 275, 545);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 445, 520, 545, 545);
	m_wndActive.Create(this, _T("Active"), 5, 555, 165, 580);
	m_wndPrintBold.Create(this, _T("Print Bold"), 170, 555, 270, 580);
	m_wndSave.Create(this, _T("&Save"), 365, 555, 455, 580);
	m_wndClose.Create(this, _T("&Close"), 460, 555, 550, 580);
	
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
	m_wndGroupLabel.ModifyStyle(WS_TABSTOP, 0);

}
void CHMSParaclinicalSetupDialog_new2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
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

	m_wndInsDiffPayment.SetLimitText(16);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(16);
	m_wndPolDiffPayment.SetCheckValue(true);

	
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndPolDiffPayment.SetCurrencyFormat(true);
	m_wndInsDiffPayment.SetCurrencyFormat(true);

	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);

	m_wndFeeCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndObjectApplied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 20);
	m_wndObjectApplied.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_hms_fee_listTbl.SetTableName(_T("hms_fee_list"));
	m_hms_fee_listTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_fee_listTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_line"), dfInteger); 
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
	m_hms_fee_listTbl.AddField(_T("hfl_servprice_prev"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_insprice_prev"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_polprice_prev"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_retprice"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_hitech"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_active"), dfText, 1); 
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
}

void CHMSParaclinicalSetupDialog_new2::OnSetWindowEvents(){
	
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
	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

	m_wndRequestPriceLabel.SetEvent(WE_CLICK, _OnRequestPriceLabelFnc);
	m_wndReturnDeptLabel.SetEvent(WE_CLICK, _OnReturnDepartmentLabelFnc);
//	m_wndInsDiffPaymentLabel.SetEvent(WE_CLICK, _OnInsDiffPaymentLabelFnc);
//	m_wndPolDiffPaymentLabel.SetEvent(WE_CLICK, _OnPolDiffPaymentLabelFnc);

	int nMode = GetMode();
	if (nMode == VM_EDIT)
		GetDataToScreen();
	else
		nMode = VM_ADD;

	SetMode(nMode);
}
void CHMSParaclinicalSetupDialog_new2::OnDoDataExchange(CDataExchange* pDX){
	return;
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndNewPrice.GetDlgCtrlID(), m_nNewPrice);
	DDX_Check(pDX, m_wndGroupLabel.GetDlgCtrlID(), m_bGroup);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
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
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndPrintBold.GetDlgCtrlID(), m_bPrintBold);
	DDX_Check(pDX, m_wndRequestPriceLabel.GetDlgCtrlID(), m_bRequestPriceFlg);
	DDX_Check(pDX, m_wndReturnDeptLabel.GetDlgCtrlID(), m_bReturnDeptFlag);
	

}

void CHMSParaclinicalSetupDialog_new2::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){

		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_servprice_prev"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice_prev"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice_prev"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);
		rs.GetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
		rs.GetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
		rs.GetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
		CString szDif, szIns, szPol, szHiTech, szPlasticSurgery, szHitechMachine;

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
		rs.GetValue(_T("hfl_print_bold"), tmpStr);
		m_bPrintBold = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bPlasticSurgery = TRUE;

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bHitechMachine = true;
		
		rs.GetValue(_T("hfl_deptid"), m_szDepartmentKey);
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
		//m_szCurID = m_szID;
	}
	else
	{
		SetDefaultValues();
	}
	UpdateData(false);
}

void CHMSParaclinicalSetupDialog_new2::GetScreenToData()
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

	m_hms_fee_listTbl.SetValue(_T("hfl_idx"), m_nIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_fee_listTbl.SetValue(_T("hfl_line"), m_nLine);
	m_hms_fee_listTbl.SetValue(_T("hfl_deptid"), m_szDepartmentKey);
	
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
	m_hms_fee_listTbl.SetValue(_T("hfl_servprice_prev"), m_nServicePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_insprice_prev"), m_nInsurancePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_polprice_prev"), m_nPolicyPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_retprice"), m_nReturnDept);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);


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
	
	CString szDif, szIns, szPol, szHiTech;

	if (m_bDifferencePayment)
		szDif = _T("Y");
	else
		szDif = _T("N");

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

	m_hms_fee_listTbl.SetValue(_T("hfl_inspaid"), szIns);
	m_hms_fee_listTbl.SetValue(_T("hfl_polpaid"), szPol);
	m_hms_fee_listTbl.SetValue(_T("hfl_diffpaid"), szDif);
	m_hms_fee_listTbl.SetValue(_T("hfl_hitech"), szHiTech);

	m_hms_fee_listTbl.SetValue(_T("hfl_typeid"), m_szType);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);

	m_hms_fee_listTbl.SetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_print_bold"), m_bPrintBold?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_plasticsurgery"), m_bPlasticSurgery?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_hitechmachine"), m_bHitechMachine?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_applydate"), m_szApplyDate);
	m_hms_fee_listTbl.SetValue(_T("hfl_opt_group"), m_szGroupKey);
	if(m_szType == _T("T"))
	{
		
		m_hms_fee_listTbl.SetValue(_T("hfl_isopt_group"), m_bGroup?_T("Y"):_T("N"));	
	}
	m_hms_fee_listTbl.SetValue(_T("hfl_object"), m_szObjectAppliedKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_01072016price"), m_nNewPrice);
}


void CHMSParaclinicalSetupDialog_new2::SetDefaultValues(){
	m_szApplyDate = AfxGetApp()->GetProfileString(_T("Formerly Data"), _T("Ins Apply Date"));
	//m_szApplyDate.Empty();
	m_szName.Empty();
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
	m_nLine=0;
	m_bHitechMachine=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bActive = TRUE;
	m_bPrintBold = FALSE;
	m_nInsDiffPayment = 0;
	m_nPolDiffPayment = 0;
	m_nIndex = 0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bRequestPriceFlg = FALSE;
	//m_bInsDiffPaymentFlg = m_bPolDiffPaymentFlg = FALSE;
	m_bReturnDeptFlag = FALSE;

}

int CHMSParaclinicalSetupDialog_new2::SetMode(int nMode){ 
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

/*void CHMSParaclinicalSetupDialog_new2::OnApplyDateChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnApplyDateSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnApplyDateKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnApplyDateCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new2::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
}
 
void CHMSParaclinicalSetupDialog_new2::OnGroupSelendok(){

}

/*void CHMSParaclinicalSetupDialog_new2::OnGroupSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new2::OnGroupKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new2::OnGroupLoadData(){
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

/*void CHMSParaclinicalSetupDialog_new2::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalSetupDialog_new2::OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new2::OnFeeCategorySelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new2::OnFeeCategorySetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new2::OnFeeCategoryKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new2::OnFeeCategoryLoadData(){
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

/*void CHMSParaclinicalSetupDialog_new2::OnFeeCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnIDChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnIDSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnIDKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnIDCheckValue(){
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new2::OnUnitChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnUnitSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnUnitKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnUnitCheckValue(){
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new2::OnNameChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnNameSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnNameKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnNameCheckValue(){
	UpdateData(true);
	CString tmpStr;
	PreInitCap(m_szName, tmpStr);
	m_szName = tmpStr;
	UpdateData(false);
	return 0;
}
 
void CHMSParaclinicalSetupDialog_new2::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
 
void CHMSParaclinicalSetupDialog_new2::OnDepartmentSelendok(){

}

/*void CHMSParaclinicalSetupDialog_new2::OnDepartmentSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new2::OnDepartmentKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new2::OnDepartmentLoadData(){
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

/*void CHMSParaclinicalSetupDialog_new2::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnReturnDeptChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnReturnDeptSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnReturnDeptKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new2::OnServicePriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnServicePriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnServicePriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnServicePriceCheckValue(){
	UpdateData(true);
	m_nInsurancePrice = m_nPolicyPrice = m_nServicePrice;
	UpdateData(false);
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new2::OnInsurancePriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnInsurancePriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnInsurancePriceCheckValue(){
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new2::OnPolicyPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnPolicyPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnPolicyPriceCheckValue(){
	return 0;
}
 
/*void CHMSParaclinicalSetupDialog_new2::OnRequestPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnRequestPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnRequestPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnRequestPriceCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new2::OnInsDiffPaymentChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnInsDiffPaymentSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnInsDiffPaymentKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnInsDiffPaymentCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new2::OnPolDiffPaymentChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnPolDiffPaymentSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnPolDiffPaymentKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnPolDiffPaymentCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new2::OnObjectAppliedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog_new2::OnObjectAppliedSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog_new2::OnObjectAppliedSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog_new2::OnObjectAppliedKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog_new2::OnObjectAppliedLoadData(){
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
/*void CHMSParaclinicalSetupDialog_new2::OnObjectAppliedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnMaleIndexChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnMaleIndexSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnMaleIndexKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnMaleIndexCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog_new2::OnFemaleIndexChange(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnFemaleIndexSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog_new2::OnFemaleIndexKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog_new2::OnFemaleIndexCheckValue(){
	return 0;
} 
void CHMSParaclinicalSetupDialog_new2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveParaclinicalSetupDialog_new();
} 
void CHMSParaclinicalSetupDialog_new2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSParaclinicalSetupDialog_new2::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new2::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new2::OnDifferencePaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndInsDiffPayment.EnableWindow(m_bDifferencePayment);
	m_wndPolDiffPayment.EnableWindow(m_bDifferencePayment);
	UpdateData(FALSE);
}
void CHMSParaclinicalSetupDialog_new2::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new2::OnHitechMachineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalSetupDialog_new2::OnPlasticSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSParaclinicalSetupDialog_new2::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}



void CHMSParaclinicalSetupDialog_new2::OnGroupLabelSelect(){
	UpdateData(true);
	m_wndGroup.EnableWindow(m_bGroup);
}

int CHMSParaclinicalSetupDialog_new2::OnSaveParaclinicalSetupDialog_new(){
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
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
//		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		szSQL.Format(_T(" INSERT") \
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
_T("     HFL_SERVPRICE_PREV ,") \
_T("     HFL_INSPRICE_PREV ,") \
_T("     HFL_POLPRICE_PREV ") \
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
_T("     HFL_SERVPRICE_PREV ,") \
_T("     HFL_INSPRICE_PREV ,") \
_T("     HFL_POLPRICE_PREV ") \
_T(" FROM hms_fee_list") \
_T(" WHERE hfl_feeid ='%s' "), m_szID);

		pMF->ExecSQL(szSQL);

		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szID); 
 		szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("hfl_feeid,hfl_createdby,hfl_createddate")); 
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


void CHMSParaclinicalSetupDialog_new2::OnRequestPriceLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndRequestPrice.EnableWindow(m_bRequestPriceFlg);	
}

void CHMSParaclinicalSetupDialog_new2::OnInsDiffPaymentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

}

void CHMSParaclinicalSetupDialog_new2::OnPolDiffPaymentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

}

void CHMSParaclinicalSetupDialog_new2::OnReturnDepartmentLabel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndReturnDept.EnableWindow(m_bReturnDeptFlag);

}
