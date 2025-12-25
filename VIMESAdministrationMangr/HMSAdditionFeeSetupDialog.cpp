#include "HMSAdditionFeeSetupDialog.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnReturnDeptCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnInsDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsDiffPaymentChange();
} */
/*static void _OnInsDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsDiffPaymentSetfocus();} */ 
/*static void _OnInsDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsDiffPaymentKillfocus();
} */
static int _OnInsDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnInsDiffPaymentCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnPolDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolDiffPaymentChange();
} */
/*static void _OnPolDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolDiffPaymentSetfocus();} */ 
/*static void _OnPolDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolDiffPaymentKillfocus();
} */
static int _OnPolDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnPolDiffPaymentCheckValue();
}
/*static void _OnSubGroupChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubGroupChange();
} */
/*static void _OnSubGroupSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubGroupSetfocus();} */ 
/*static void _OnSubGroupKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubGroupKillfocus();
} */
static int _OnSubGroupCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubGroupCheckValue();
} 
/*static void _OnSubItemChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubItemChange();
} */
/*static void _OnSubItemSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubItemSetfocus();} */ 
/*static void _OnSubItemKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubItemKillfocus();
} */
static int _OnSubItemCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnSubItemCheckValue();
} 
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnHitechSelect();
}
static void _OnPlasticSurgerySelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnPlasticSurgerySelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnHitechMachineSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeSetupDialog *pVw = (CHMSAdditionFeeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeSetupDialog *pVw = (CHMSAdditionFeeSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog*)pWnd)->OnAddHMSAdditionFeeSetupDialog();
} 
static int _OnEditHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog*)pWnd)->OnEditHMSAdditionFeeSetupDialog();
} 
static int _OnDeleteHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog*)pWnd)->OnDeleteHMSAdditionFeeSetupDialog();
} 
static int _OnSaveHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog*)pWnd)->OnSaveHMSAdditionFeeSetupDialog();
} 
static int _OnCancelHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog*)pWnd)->OnCancelHMSAdditionFeeSetupDialog();
}
static int _OnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnDeptCheckValue();
}
static int _OnFoodTypeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnFoodTypeCheckValue();
}

static int _OnMa_bh1CheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnMa_bh1CheckValue();
}

static int _OnMa_bh2CheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnMa_bh2CheckValue();
}

static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnfeefoodnnSelectFnc(CWnd *pWnd)
{
	 ((CHMSAdditionFeeSetupDialog*)pWnd)->OnfeefoodnnSelect();
}
static long _OnNhomBHLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSAdditionFeeSetupDialog *)pWnd)->OnNhomBHLoadData();
}

CHMSAdditionFeeSetupDialog::CHMSAdditionFeeSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSAdditionFeeSetupDialog::~CHMSAdditionFeeSetupDialog()
{
}
void CHMSAdditionFeeSetupDialog::OnCreateComponents()
{
	
	/*m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 6, 468, 365);
	m_wndNameLabel.Create(this, _T("Name"), 11, 29, 131, 54);
	m_wndName.Create(this,136, 30, 465, 55); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 11, 60, 131, 85);
	m_wndServicePrice.Create(this,136, 60, 236, 85); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 241, 60, 361, 85);
	m_wndReturnDept.Create(this,366, 60, 466, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 11, 90, 131, 115);
	m_wndInsurancePrice.Create(this,136, 90, 236, 115); 
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 241, 90, 361, 115);
	m_wndInsDiffPayment.Create(this,366, 90, 466, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 11, 120, 131, 145);
	m_wndPolicyPrice.Create(this,136, 120, 236, 145); 
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 241, 120, 361, 145);
	m_wndPolDiffPayment.Create(this,366, 120, 466, 145); 
	m_wndSubGroupLabel.Create(this, _T("SubGroup"), 11, 150, 131, 175);
	m_wndSubGroup.Create(this,136, 150, 236, 175); 
	m_wndSubItemLabel.Create(this, _T("SubItem"), 241, 150, 361, 175);
	m_wndSubItem.Create(this,366, 150, 466, 175); 
	m_wndDeptLabel.Create(this, _T("Dept"), 11, 182, 131, 207);
	m_wndDept.Create(this,136, 182, 236, 207); 
	m_wndMa_bh1_label.Create(this, _T("Ma_bh1"), 11, 213, 131, 238);
	m_wndMa_bh1.Create(this,136, 213, 466, 238); 
	m_wndMa_bh2_label.Create(this, _T("Ma_bh2"), 11, 243, 131, 268);
	m_wndMa_bh2.Create(this,136, 243, 466, 268); 
	m_wndFoodTypeLabel.Create(this, _T("FoodType"), 241, 182, 361, 207);
	m_wndFoodType.Create(this,366, 182, 466, 207); 
	m_wndHitech.Create(this, _T("Hitech"), 11, 305, 131, 330);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 136, 305, 286, 330);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 291, 305, 441, 330);
	m_wndActive.Create(this, _T("Active"), 11, 371, 131, 396);
	m_wndInsurancePaid.Create(this, _T("InsurancePaid"), 11, 274, 131, 299);
	m_wndPolicyPaid.Create(this, _T("PolicyPaid"), 136, 274, 286, 299);
	m_wndSave.Create(this, _T("&Save"), 304, 371, 384, 396);
	m_wndCancel.Create(this, _T("&Cancel"), 389, 371, 469, 396);
	m_wndfeefoodnn.Create(this, _T("Tiền ăn người nhà (TC)"), 11, 335, 286, 360);*/

	m_wndNameLabel.Create(this, _T("Name"), 11, 29, 131, 54);
	m_wndName.Create(this,136, 30, 465, 55); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 11, 60, 131, 85);
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 6, 468, 393);
	m_wndServicePrice.Create(this,136, 60, 236, 85); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 241, 60, 361, 85);
	m_wndReturnDept.Create(this,366, 60, 466, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 11, 90, 131, 115);
	m_wndInsurancePrice.Create(this,136, 90, 236, 115); 
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 241, 90, 361, 115);
	m_wndInsDiffPayment.Create(this,366, 90, 466, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 11, 120, 131, 145);
	m_wndPolicyPrice.Create(this,136, 120, 236, 145); 
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 241, 120, 361, 145);
	m_wndPolDiffPayment.Create(this,366, 120, 466, 145); 
	m_wndSubGroupLabel.Create(this, _T("SubGroup"), 11, 150, 131, 175);
	m_wndSubGroup.Create(this,136, 150, 236, 175); 
	m_wndSubItemLabel.Create(this, _T("SubItem"), 241, 150, 361, 175);
	m_wndSubItem.Create(this,366, 150, 466, 175); 
	m_wndDeptLabel.Create(this, _T("Dept"), 11, 182, 131, 207);
	m_wndDept.Create(this,136, 182, 236, 207); 
	m_wndFoodTypeLabel.Create(this, _T("FoodType"), 241, 182, 361, 207);
	m_wndFoodType.Create(this,366, 182, 466, 207); 
	m_wndMa_bh1_label.Create(this, _T("Ma_bh1"), 11, 213, 131, 238);
	m_wndMa_bh1.Create(this,136, 213, 466, 238); 
	m_wndMa_bh2_label.Create(this, _T("Ma_bh2"), 11, 243, 131, 268);
	m_wndMa_bh2.Create(this,136, 243, 466, 268); 
	m_wndNhomBHLabel.Create(this, _T("Nhóm BH"), 11, 272, 131, 297);
	m_wndNhomBH.Create(this,136, 272, 466, 297); 
	m_wndInsurancePaid.Create(this, _T("InsurancePaid"), 11, 302, 131, 327);
	m_wndPolicyPaid.Create(this, _T("PolicyPaid"), 136, 302, 286, 327);
	m_wndHitech.Create(this, _T("Hitech"), 11, 333, 131, 358);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 136, 333, 286, 358);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 291, 333, 441, 358);
	m_wndfeefoodnn.Create(this, _T("Tiền ăn người nhà (TC)"), 11, 363, 286, 388);
	m_wndActive.Create(this, _T("Active"), 11, 399, 131, 424);
	m_wndSave.Create(this, _T("&Save"), 304, 399, 384, 424);
	m_wndCancel.Create(this, _T("&Cancel"), 389, 399, 469, 424);

}
void CHMSAdditionFeeSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(16);
	m_wndReturnDept.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndInsDiffPayment.SetLimitText(16);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(16);
	m_wndPolDiffPayment.SetCheckValue(true);
	m_wndSubGroup.SetLimitText(15);
	//m_wndSubGroup.SetCheckValue(true);
	m_wndSubItem.SetLimitText(15);
	//m_wndSubItem.SetCheckValue(true);
	m_wndDept.SetLimitText(20);
	//m_wndDept.SetCheckValue(true);
	m_wndFoodType.SetLimitText(1);
	//m_wndFoodType.SetCheckValue(true);

	m_wndMa_bh1.SetLimitText(35);
	m_wndMa_bh1.SetCheckValue(true);
	m_wndMa_bh2.SetLimitText(35);
	m_wndMa_bh2.SetCheckValue(true);

	
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolDiffPayment.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	m_wndInsDiffPayment.SetCurrencyFormat(true);
	m_wndReturnDept.SetCurrencyFormat(true);
	m_wndFoodType.SetCurrencyFormat(true);
	m_wndNhomBH.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNhomBH.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
}
void CHMSAdditionFeeSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndInsDiffPayment.SetEvent(WE_CHANGE, _OnInsDiffPaymentChangeFnc);
	//m_wndInsDiffPayment.SetEvent(WE_SETFOCUS, _OnInsDiffPaymentSetfocusFnc);
	//m_wndInsDiffPayment.SetEvent(WE_KILLFOCUS, _OnInsDiffPaymentKillfocusFnc);
	m_wndInsDiffPayment.SetEvent(WE_CHECKVALUE, _OnInsDiffPaymentCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	//m_wndPolDiffPayment.SetEvent(WE_CHANGE, _OnPolDiffPaymentChangeFnc);
	//m_wndPolDiffPayment.SetEvent(WE_SETFOCUS, _OnPolDiffPaymentSetfocusFnc);
	//m_wndPolDiffPayment.SetEvent(WE_KILLFOCUS, _OnPolDiffPaymentKillfocusFnc);
	m_wndPolDiffPayment.SetEvent(WE_CHECKVALUE, _OnPolDiffPaymentCheckValueFnc);
	//m_wndSubGroup.SetEvent(WE_CHANGE, _OnSubGroupChangeFnc);
	//m_wndSubGroup.SetEvent(WE_SETFOCUS, _OnSubGroupSetfocusFnc);
	//m_wndSubGroup.SetEvent(WE_KILLFOCUS, _OnSubGroupKillfocusFnc);
	m_wndSubGroup.SetEvent(WE_CHECKVALUE, _OnSubGroupCheckValueFnc);
	//m_wndSubItem.SetEvent(WE_CHANGE, _OnSubItemChangeFnc);
	//m_wndSubItem.SetEvent(WE_SETFOCUS, _OnSubItemSetfocusFnc);
	//m_wndSubItem.SetEvent(WE_KILLFOCUS, _OnSubItemKillfocusFnc);
	m_wndSubItem.SetEvent(WE_CHECKVALUE, _OnSubItemCheckValueFnc);
	m_wndDept.SetEvent(WE_CHECKVALUE, _OnDeptCheckValueFnc);	
	m_wndFoodType.SetEvent(WE_CHECKVALUE, _OnFoodTypeCheckValueFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndfeefoodnn.SetEvent(WE_CLICK, _OnfeefoodnnSelectFnc);

	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);

	m_wndMa_bh1.SetEvent(WE_CHECKVALUE, _OnMa_bh1CheckValueFnc);	
	m_wndMa_bh2.SetEvent(WE_CHECKVALUE, _OnMa_bh2CheckValueFnc);
	m_wndNhomBH.SetEvent(WE_LOADDATA, _OnNhomBHLoadDataFnc);
	GetDataToScreen();
	if(m_szFeeID.Left(2) == _T("B2") || m_szFeeID.Left(2) == _T("B4") || m_szFeeID.Left(5) == _T("B5"))
	{
		m_wndHitech.EnableWindow(true);
	}
	else
	{
		m_wndHitech.EnableWindow(false);
		m_bHitech = false;
	}
	UpdateData(false);
}
void CHMSAdditionFeeSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndSubGroup.GetDlgCtrlID(), m_szSubGroup);
	DDX_Text(pDX, m_wndSubItem.GetDlgCtrlID(), m_szSubItem);
	DDX_Text(pDX, m_wndDept.GetDlgCtrlID(), m_szDept);
	DDX_Text(pDX, m_wndFoodType.GetDlgCtrlID(), m_nFoodType);
	DDX_Text(pDX, m_wndMa_bh1.GetDlgCtrlID(), m_szMa_bh1);
	DDX_Text(pDX, m_wndMa_bh2.GetDlgCtrlID(), m_szMa_bh2);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);
	DDX_Check(pDX, m_wndfeefoodnn.GetDlgCtrlID(), m_bfeefoodnn);
	DDX_TextEx(pDX, m_wndNhomBH.GetDlgCtrlID(), m_szNhomBHKey);
}
void CHMSAdditionFeeSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szFeeID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hfl_name"), m_szName);

		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);

		rs.GetValue(_T("hfl_hitech"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bHitech = true;
		else m_bHitech = false;

		rs.GetValue(_T("hfl_active"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bActive = true;
		else m_bActive = false;

		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bPlasticSurgery = TRUE;

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bHitechMachine = true;

		rs.GetValue(_T("hfl_subgroup"), m_szSubGroup);
		rs.GetValue(_T("hfl_subitem"), m_szSubItem);

		rs.GetValue(_T("hfl_deptid"), m_szDept);
		rs.GetValue(_T("HFL_CATEGORYID"), m_nFoodType);
		rs.GetValue(_T("hfl_insmap"), m_szMa_bh1);
		rs.GetValue(_T("hfl_cicularmap"), m_szMa_bh2);

		rs.GetValue(_T("HFL_INSPAID"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bInsurancePaid = true;
		else m_bInsurancePaid = false;

		rs.GetValue(_T("HFL_POLPAID"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bPolicyPaid = true;
		else m_bPolicyPaid = false;

		rs.GetValue(_T("hfl_feefood_nn"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bfeefoodnn = true;
		else m_bfeefoodnn = false;

		rs.GetValue(_T("hfl_manhom"), m_szNhomBHKey);

		UpdateData(false);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);

}
void CHMSAdditionFeeSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdditionFeeSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_nServicePrice=0;
	m_nReturnDept=0;
	m_nInsurancePrice=0;
	m_nInsDiffPayment=0;
	m_nPolicyPrice=0;
	m_nRequestPrice=0;
	m_nReturnDept=0;
	m_bDifferencePayment=FALSE;
	m_bInsurancePayment=TRUE;
	m_bPolicyPayment=TRUE;
	m_bHitech=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bHitechMachine=FALSE;
	m_bActive=TRUE;
	m_szSubGroup.IsEmpty();
	m_szSubItem.IsEmpty();
	m_szDept.IsEmpty();
	m_nFoodType=0;
	m_szMa_bh1.Empty();
	m_szMa_bh2.Empty();
	m_bInsurancePaid=FALSE;
	m_bPolicyPaid=FALSE;
	m_bfeefoodnn=FALSE;
	

}
int CHMSAdditionFeeSetupDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CHMSAdditionFeeSetupDialog::OnNameChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnNameKillfocus(){
	
} */
void CHMSAdditionFeeSetupDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog::OnPolicyPaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSAdditionFeeSetupDialog::OnfeefoodnnSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

int CHMSAdditionFeeSetupDialog::OnMa_bh1CheckValue(){
	return 0;
} 

int CHMSAdditionFeeSetupDialog::OnMa_bh2CheckValue(){
	return 0;
} 

int CHMSAdditionFeeSetupDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnServicePriceCheckValue(){
	if(m_nServicePrice < 0)
		return -1;
	return 0;
}

int CHMSAdditionFeeSetupDialog::OnFoodTypeCheckValue(){
	if(m_nFoodType < 0)
		return -1;
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnReturnDeptChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnReturnDeptSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnReturnDeptKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnInsurancePriceCheckValue(){
	if(m_nInsurancePrice < 0) return -1;
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnInsDiffPaymentChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnInsDiffPaymentSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnInsDiffPaymentKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnInsDiffPaymentCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnPolicyPriceCheckValue(){
	if(m_nPolicyPrice < 0) return -1;
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog::OnPolDiffPaymentChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnPolDiffPaymentSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnPolDiffPaymentKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnPolDiffPaymentCheckValue(){
	
	return 0;
}
/*void CHMSAdditionFeeSetupDialog::OnSubGroupChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnSubGroupSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnSubGroupKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnSubGroupCheckValue(){
	return 0;
}
int CHMSAdditionFeeSetupDialog::OnDeptCheckValue(){
	return 0;
}
/*void CHMSAdditionFeeSetupDialog::OnSubItemChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnSubItemSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog::OnSubItemKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog::OnSubItemCheckValue(){
	return 0;
} 


	void CHMSAdditionFeeSetupDialog::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog::OnPlasticSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog::OnHitechMachineSelect()
	{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog::OnActiveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
long CHMSAdditionFeeSetupDialog::OnNhomBHLoadData()
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
void CHMSAdditionFeeSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSAdditionFeeSetupDialog() > 0)
		CGuiDialog::OnOK();
} 
void CHMSAdditionFeeSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAdditionFeeSetupDialog::OnAddHMSAdditionFeeSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdditionFeeSetupDialog::OnEditHMSAdditionFeeSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionFeeSetupDialog::OnDeleteHMSAdditionFeeSetupDialog(){
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
 		OnCancelHMSAdditionFeeSetupDialog();
 	}
	return 0;
}
int CHMSAdditionFeeSetupDialog::OnSaveHMSAdditionFeeSetupDialog(){
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
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CDbfMap feeTbl;

	szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szFeeID);
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	feeTbl.SetTableName(_T("hms_fee_list"));
	feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	feeTbl.AddField(_T("hfl_servprice"), dfDouble);
	feeTbl.AddField(_T("hfl_insprice"), dfDouble);
	feeTbl.AddField(_T("hfl_insdiff"), dfDouble);
	feeTbl.AddField(_T("hfl_polprice"), dfDouble);
	feeTbl.AddField(_T("hfl_poldiff"), dfDouble);
	feeTbl.AddField(_T("hfl_retprice"), dfDouble);
	feeTbl.AddField(_T("hfl_reqprice"), dfDouble);
	feeTbl.AddField(_T("hfl_active"), dfText, 1);
	feeTbl.AddField(_T("hfl_hitech"), dfText, 1);
	feeTbl.AddField(_T("hfl_plasticsurgery"), dfText, 1);
	feeTbl.AddField(_T("hfl_hitechmachine"), dfText, 1);
	feeTbl.AddField(_T("hfl_hostname"), dfText, 100);
	feeTbl.AddField(_T("hfl_subgroup"), dfText, 15);
	feeTbl.AddField(_T("hfl_subitem"), dfText, 15);
	feeTbl.AddField(_T("hfl_deptid"), dfText, 15);
	feeTbl.AddField(_T("hfl_categoryid"), dfDouble);
	feeTbl.AddField(_T("hfl_insmap"), dfText, 30);
	feeTbl.AddField(_T("hfl_cicularmap"), dfText, 30);
	feeTbl.AddField(_T("HFL_INSPAID"), dfText, 1);
	feeTbl.AddField(_T("HFL_POLPAID"), dfText, 1);
	feeTbl.AddField(_T("hfl_feefood_nn"), dfText, 1);
	feeTbl.AddField(_T("hfl_manhom"), dfText, 2);
	
	feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	feeTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	feeTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	feeTbl.SetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
	feeTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	feeTbl.SetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
	feeTbl.SetValue(_T("hfl_retprice"), m_nReturnDept);
	feeTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	feeTbl.SetValue(_T("hfl_active"), m_bActive?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hitech"), m_bHitech?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_plasticsurgery"), m_bPlasticSurgery?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hitechmachine"), m_bHitechMachine?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	feeTbl.SetValue(_T("hfl_subgroup"), m_szSubGroup);
	feeTbl.SetValue(_T("hfl_subitem"), m_szSubItem);
	feeTbl.SetValue(_T("hfl_deptid"), m_szDept);
	feeTbl.SetValue(_T("hfl_insmap"), m_szMa_bh1);
	feeTbl.SetValue(_T("hfl_cicularmap"), m_szMa_bh2);
	feeTbl.SetValue(_T("HFL_INSPAID"), m_bInsurancePaid?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("HFL_POLPAID"), m_bPolicyPaid?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_feefood_nn"), m_bfeefoodnn?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_manhom"), m_szNhomBHKey);

	szSQL.Format(_T("%s"), feeTbl.GetUpdateSQL(_T("hfl_feeid")));
	szSQL.AppendFormat(_T(" WHERE hfl_feeid='%s' "), m_szFeeID);
	//_msg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		CString szEvent, szDesc;
		szEvent.Format(_T("Edit"));
		szDesc.Format(_T("ID:%s, Name:%s"), m_szFeeID, m_szName);
		pMF->SystemLog(szEvent, szDesc);
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAdditionFeeSetupDialog::OnCancelHMSAdditionFeeSetupDialog(){
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
int CHMSAdditionFeeSetupDialog::OnHMSAdditionFeeSetupDialogListLoadData(){
	return 0;
}
