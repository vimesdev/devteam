#include "FAMAssetDetailDlg.h"
#include "MainFrm.h"
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnAssetNoKillfocus();
} */
static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnAssetNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnModelCheckValue();
} 
/*static void _OnSerialChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnSerialChange();
} */
/*static void _OnSerialSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnSerialSetfocus();} */ 
/*static void _OnSerialKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnSerialKillfocus();
} */
static int _OnSerialCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnSerialCheckValue();
} 
static void _OnMadeInSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnMadeInSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMadeInSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnMadeInSelendok();
}
/*static void _OnMadeInSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnMadeInKillfocus();
}*/
/*static void _OnMadeInKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnMadeInKillfocus();
}*/
static long _OnMadeInLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnMadeInLoadData();
}
/*static void _OnMadeInAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnMadeInAddNew();
}*/
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVendorAddNew();
}*/
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnManufacturedDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufacturedDateChange();
} */
/*static void _OnManufacturedDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufacturedDateSetfocus();} */ 
/*static void _OnManufacturedDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnManufacturedDateKillfocus();
} */
static int _OnManufacturedDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnManufacturedDateCheckValue();
} 
/*static void _OnGuaranteeDurationChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnGuaranteeDurationChange();
} */
/*static void _OnGuaranteeDurationSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnGuaranteeDurationSetfocus();} */ 
/*static void _OnGuaranteeDurationKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnGuaranteeDurationKillfocus();
} */
static int _OnGuaranteeDurationCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnGuaranteeDurationCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnQuantityCheckValue();
} 
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUnitAddNew();
}*/
static void _OnConditionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnConditionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnConditionSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnConditionSelendok();
}
/*static void _OnConditionSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnConditionKillfocus();
}*/
/*static void _OnConditionKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnConditionKillfocus();
}*/
static long _OnConditionLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnConditionLoadData();
}
/*static void _OnConditionAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnConditionAddNew();
}*/
static void _OnPowerCircuitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnPowerCircuitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPowerCircuitSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPowerCircuitSelendok();
}
/*static void _OnPowerCircuitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPowerCircuitKillfocus();
}*/
/*static void _OnPowerCircuitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPowerCircuitKillfocus();
}*/
static long _OnPowerCircuitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnPowerCircuitLoadData();
}
/*static void _OnPowerCircuitAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPowerCircuitAddNew();
}*/
/*static void _OnVoltageChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVoltageChange();
} */
/*static void _OnVoltageSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVoltageSetfocus();} */ 
/*static void _OnVoltageKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnVoltageKillfocus();
} */
static int _OnVoltageCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnVoltageCheckValue();
} 
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnCapacityCheckValue();
} 
/*static void _OnPurchaseDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchaseDateChange();
} */
/*static void _OnPurchaseDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchaseDateSetfocus();} */ 
/*static void _OnPurchaseDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchaseDateKillfocus();
} */
static int _OnPurchaseDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnPurchaseDateCheckValue();
} 
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchasePriceSetfocus();} */ 
/*static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnPurchasePriceKillfocus();
} */
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnPurchasePriceCheckValue();
} 
/*static void _OnUsedDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUsedDateChange();
} */
/*static void _OnUsedDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUsedDateSetfocus();} */ 
/*static void _OnUsedDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnUsedDateKillfocus();
} */
static int _OnUsedDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnUsedDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetailDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetailDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetailDlg *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMAssetDetailDlg *pVw = (CFAMAssetDetailDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAssetDetailDlg *pVw = (CFAMAssetDetailDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAssetDetailDlg *pVw = (CFAMAssetDetailDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAssetDetailDlg *pVw = (CFAMAssetDetailDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMAssetDetailDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDetailDlg*)pWnd)->OnAddFAMAssetDetailDlg();
} 
static int _OnEditFAMAssetDetailDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDetailDlg*)pWnd)->OnEditFAMAssetDetailDlg();
} 
static int _OnDeleteFAMAssetDetailDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDetailDlg*)pWnd)->OnDeleteFAMAssetDetailDlg();
} 
static int _OnSaveFAMAssetDetailDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDetailDlg*)pWnd)->OnSaveFAMAssetDetailDlg();
} 
static int _OnCancelFAMAssetDetailDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDetailDlg*)pWnd)->OnCancelFAMAssetDetailDlg();
} 
CFAMAssetDetailDlg::CFAMAssetDetailDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAssetDetailDlg::~CFAMAssetDetailDlg(){
}
void CFAMAssetDetailDlg::OnCreateComponents(){
	m_wndAssetInformation.Create(this, _T("Asset Information"), 5, 5, 825, 270);
	m_wndAssetNoLabel.Create(this, _T("Asset No"), 10, 30, 90, 55);
	m_wndAssetNo.Create(this,95, 30, 280, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 285, 30, 365, 55);
	m_wndName.Create(this,370, 30, 820, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 820, 85); 
	m_wndModelLabel.Create(this, _T("Model"), 10, 90, 90, 115);
	m_wndModel.Create(this,95, 90, 280, 115); 
	m_wndSerialLabel.Create(this, _T("Serial"), 285, 90, 365, 115);
	m_wndSerial.Create(this,370, 90, 575, 115); 
	m_wndMadeInLabel.Create(this, _T("Made In"), 580, 91, 660, 116);
	m_wndMadeIn.Create(this,665, 90, 820, 115); 
	m_wndVendorLabel.Create(this, _T("Vendor"), 10, 120, 90, 145);
	m_wndVendor.Create(this,95, 120, 280, 145); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 285, 120, 365, 145);
	m_wndManufacture.Create(this,370, 120, 575, 145); 
	m_wndManufacturedDateLabel.Create(this, _T("Mfg Year"), 580, 120, 660, 145);
	m_wndManufacturedDate.Create(this,665, 120, 705, 145); 
	m_wndGuaranteeDurationLabel.Create(this, _T("Guarantee"), 710, 120, 785, 145);
	m_wndGuaranteeDuration.Create(this,790, 120, 820, 145); 
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 150, 90, 175);
	m_wndCategory.Create(this,95, 150, 280, 175); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 285, 150, 365, 175);
	m_wndQuantity.Create(this,370, 150, 575, 175); 
	m_wndUnitLabel.Create(this, _T("Calc Unit"), 580, 150, 660, 175);
	m_wndUnit.Create(this,665, 150, 820, 175); 
	m_wndConditionLabel.Create(this, _T("Condition"), 10, 180, 90, 205);
	m_wndCondition.Create(this,95, 180, 280, 205); 
	m_wndPowerCircuitLabel.Create(this, _T("Power Circuit"), 285, 180, 365, 205);
	m_wndPowerCircuit.Create(this,370, 180, 575, 205); 
	m_wndVoltageLabel.Create(this, _T("Voltage"), 580, 180, 660, 205);
	m_wndVoltage.Create(this,665, 180, 820, 205); 
	m_wndCapacityLabel.Create(this, _T("Capacity"), 10, 210, 90, 235);
	m_wndCapacity.Create(this,95, 210, 280, 235); 
	m_wndPurchaseDateLabel.Create(this, _T("Purchase Date"), 285, 210, 365, 235);
	m_wndPurchaseDate.Create(this,370, 210, 575, 235); 
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 580, 210, 660, 235);
	m_wndPurchasePrice.Create(this,665, 210, 820, 235); 
	m_wndUsedDateLabel.Create(this, _T("Used Date"), 10, 240, 90, 265);
	m_wndUsedDate.Create(this,95, 240, 280, 265); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 285, 240, 365, 265);
	m_wndDepartment.Create(this,370, 240, 820, 265); 
	m_wndClose.Create(this, _T("Close"), 745, 275, 825, 300);
	m_wndEdit.Create(this, _T("Edit"), 490, 275, 570, 300);
	m_wndSave.Create(this, _T("Save"), 575, 275, 655, 300);
	m_wndCancel.Create(this, _T("Cancel"), 660, 275, 740, 300);

}
void CFAMAssetDetailDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndAssetNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndAssetNo.SetLimitText(15);
	m_wndAssetNo.SetCheckValue(true);
	m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###.####")); //ma ts them stt
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndModel.SetLimitText(1024);
	m_wndModel.SetCheckValue(true);
	m_wndSerial.SetLimitText(1024);
	m_wndSerial.SetCheckValue(true);
	m_wndMadeIn.SetCheckValue(true);
	m_wndMadeIn.LimitText(1024);
	m_wndVendor.SetCheckValue(true);
	m_wndVendor.LimitText(1024);
	m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(1024);
	m_wndManufacturedDate.SetLimitText(1024);
	m_wndManufacturedDate.SetCheckValue(true);
	m_wndGuaranteeDuration.SetLimitText(1024);
	m_wndGuaranteeDuration.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnit.SetCheckValue(true);
	m_wndUnit.LimitText(1024);
	m_wndCondition.SetCheckValue(true);
	m_wndCondition.LimitText(1024);
	m_wndPowerCircuit.SetCheckValue(true);
	m_wndPowerCircuit.LimitText(1024);
	m_wndVoltage.SetLimitText(1024);
	m_wndVoltage.SetCheckValue(true);
	m_wndCapacity.SetLimitText(1024);
	m_wndCapacity.SetCheckValue(true);
	m_wndPurchaseDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPurchaseDate.SetCheckValue(true);
	m_wndPurchasePrice.SetLimitText(1024);
	m_wndPurchasePrice.SetCurrencyFormat(TRUE);
	m_wndPurchasePrice.SetCheckValue(true);
	m_wndUsedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndUsedDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndMadeIn.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMadeIn.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndManufacture.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndUnit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 120);

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndCondition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCondition.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndPowerCircuit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPowerCircuit.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CFAMAssetDetailDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndAssetNo.SetEvent(WE_CHANGE, _OnAssetNoChangeFnc);
	//m_wndAssetNo.SetEvent(WE_SETFOCUS, _OnAssetNoSetfocusFnc);
	//m_wndAssetNo.SetEvent(WE_KILLFOCUS, _OnAssetNoKillfocusFnc);
	m_wndAssetNo.SetEvent(WE_CHECKVALUE, _OnAssetNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndModel.SetEvent(WE_CHANGE, _OnModelChangeFnc);
	//m_wndModel.SetEvent(WE_SETFOCUS, _OnModelSetfocusFnc);
	//m_wndModel.SetEvent(WE_KILLFOCUS, _OnModelKillfocusFnc);
	m_wndModel.SetEvent(WE_CHECKVALUE, _OnModelCheckValueFnc);
	//m_wndSerial.SetEvent(WE_CHANGE, _OnSerialChangeFnc);
	//m_wndSerial.SetEvent(WE_SETFOCUS, _OnSerialSetfocusFnc);
	//m_wndSerial.SetEvent(WE_KILLFOCUS, _OnSerialKillfocusFnc);
	m_wndSerial.SetEvent(WE_CHECKVALUE, _OnSerialCheckValueFnc);
	m_wndMadeIn.SetEvent(WE_SELENDOK, _OnMadeInSelendokFnc);
	//m_wndMadeIn.SetEvent(WE_SETFOCUS, _OnMadeInSetfocusFnc);
	//m_wndMadeIn.SetEvent(WE_KILLFOCUS, _OnMadeInKillfocusFnc);
	m_wndMadeIn.SetEvent(WE_SELCHANGE, _OnMadeInSelectChangeFnc);
	m_wndMadeIn.SetEvent(WE_LOADDATA, _OnMadeInLoadDataFnc);
	//m_wndMadeIn.SetEvent(WE_ADDNEW, _OnMadeInAddNewFnc);
	m_wndVendor.SetEvent(WE_SELENDOK, _OnVendorSelendokFnc);
	//m_wndVendor.SetEvent(WE_SETFOCUS, _OnVendorSetfocusFnc);
	//m_wndVendor.SetEvent(WE_KILLFOCUS, _OnVendorKillfocusFnc);
	m_wndVendor.SetEvent(WE_SELCHANGE, _OnVendorSelectChangeFnc);
	m_wndVendor.SetEvent(WE_LOADDATA, _OnVendorLoadDataFnc);
	//m_wndVendor.SetEvent(WE_ADDNEW, _OnVendorAddNewFnc);
	m_wndManufacture.SetEvent(WE_SELENDOK, _OnManufactureSelendokFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_SELCHANGE, _OnManufactureSelectChangeFnc);
	m_wndManufacture.SetEvent(WE_LOADDATA, _OnManufactureLoadDataFnc);
	//m_wndManufacture.SetEvent(WE_ADDNEW, _OnManufactureAddNewFnc);
	//m_wndManufacturedDate.SetEvent(WE_CHANGE, _OnManufacturedDateChangeFnc);
	//m_wndManufacturedDate.SetEvent(WE_SETFOCUS, _OnManufacturedDateSetfocusFnc);
	//m_wndManufacturedDate.SetEvent(WE_KILLFOCUS, _OnManufacturedDateKillfocusFnc);
	m_wndManufacturedDate.SetEvent(WE_CHECKVALUE, _OnManufacturedDateCheckValueFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_CHANGE, _OnGuaranteeDurationChangeFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_SETFOCUS, _OnGuaranteeDurationSetfocusFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_KILLFOCUS, _OnGuaranteeDurationKillfocusFnc);
	m_wndGuaranteeDuration.SetEvent(WE_CHECKVALUE, _OnGuaranteeDurationCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	m_wndCondition.SetEvent(WE_SELENDOK, _OnConditionSelendokFnc);
	//m_wndCondition.SetEvent(WE_SETFOCUS, _OnConditionSetfocusFnc);
	//m_wndCondition.SetEvent(WE_KILLFOCUS, _OnConditionKillfocusFnc);
	m_wndCondition.SetEvent(WE_SELCHANGE, _OnConditionSelectChangeFnc);
	m_wndCondition.SetEvent(WE_LOADDATA, _OnConditionLoadDataFnc);
	//m_wndCondition.SetEvent(WE_ADDNEW, _OnConditionAddNewFnc);
	m_wndPowerCircuit.SetEvent(WE_SELENDOK, _OnPowerCircuitSelendokFnc);
	//m_wndPowerCircuit.SetEvent(WE_SETFOCUS, _OnPowerCircuitSetfocusFnc);
	//m_wndPowerCircuit.SetEvent(WE_KILLFOCUS, _OnPowerCircuitKillfocusFnc);
	m_wndPowerCircuit.SetEvent(WE_SELCHANGE, _OnPowerCircuitSelectChangeFnc);
	m_wndPowerCircuit.SetEvent(WE_LOADDATA, _OnPowerCircuitLoadDataFnc);
	//m_wndPowerCircuit.SetEvent(WE_ADDNEW, _OnPowerCircuitAddNewFnc);
	//m_wndVoltage.SetEvent(WE_CHANGE, _OnVoltageChangeFnc);
	//m_wndVoltage.SetEvent(WE_SETFOCUS, _OnVoltageSetfocusFnc);
	//m_wndVoltage.SetEvent(WE_KILLFOCUS, _OnVoltageKillfocusFnc);
	m_wndVoltage.SetEvent(WE_CHECKVALUE, _OnVoltageCheckValueFnc);
	//m_wndCapacity.SetEvent(WE_CHANGE, _OnCapacityChangeFnc);
	//m_wndCapacity.SetEvent(WE_SETFOCUS, _OnCapacitySetfocusFnc);
	//m_wndCapacity.SetEvent(WE_KILLFOCUS, _OnCapacityKillfocusFnc);
	m_wndCapacity.SetEvent(WE_CHECKVALUE, _OnCapacityCheckValueFnc);
	//m_wndPurchaseDate.SetEvent(WE_CHANGE, _OnPurchaseDateChangeFnc);
	//m_wndPurchaseDate.SetEvent(WE_SETFOCUS, _OnPurchaseDateSetfocusFnc);
	//m_wndPurchaseDate.SetEvent(WE_KILLFOCUS, _OnPurchaseDateKillfocusFnc);
	m_wndPurchaseDate.SetEvent(WE_CHECKVALUE, _OnPurchaseDateCheckValueFnc);
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	//m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	//m_wndUsedDate.SetEvent(WE_CHANGE, _OnUsedDateChangeFnc);
	//m_wndUsedDate.SetEvent(WE_SETFOCUS, _OnUsedDateSetfocusFnc);
	//m_wndUsedDate.SetEvent(WE_KILLFOCUS, _OnUsedDateKillfocusFnc);
	m_wndUsedDate.SetEvent(WE_CHECKVALUE, _OnUsedDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	GetDataToScreen();
}
void CFAMAssetDetailDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndSerial.GetDlgCtrlID(), m_szSerial);
	DDX_TextEx(pDX, m_wndMadeIn.GetDlgCtrlID(), m_szMadeInKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndManufacturedDate.GetDlgCtrlID(), m_nManufacturedDate);
	DDX_Text(pDX, m_wndGuaranteeDuration.GetDlgCtrlID(), m_szGuaranteeDuration);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_TextEx(pDX, m_wndCondition.GetDlgCtrlID(), m_szConditionKey);
	DDX_TextEx(pDX, m_wndPowerCircuit.GetDlgCtrlID(), m_szPowerCircuitKey);
	DDX_Text(pDX, m_wndVoltage.GetDlgCtrlID(), m_szVoltage);
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_szCapacity);
	DDX_TextEx(pDX, m_wndPurchaseDate.GetDlgCtrlID(), m_szPurchaseDate);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_TextEx(pDX, m_wndUsedDate.GetDlgCtrlID(), m_szUsedDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CFAMAssetDetailDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT assetno, assetname, sil_category, sil_madein, sil_mfgid, sil_model, si_serial, sil_uom_id, sil_vendorid,") \
				_T("	purchaseprice, ngaysx, sil_guaranteeduration,  sil_power, sil_voltage, sil_powercircuit, stockqty, sb_storage_id ") \
				_T("  FROM ") \
				_T(" ( ") \
				_T("	select si_item_id as assetno, si_name as assetname, sil_category, sil_madein, sil_mfgid, sil_model, si_serial, ") \
				_T("	sil_uom_id, 'qty', sil_vendorid, 'purchasedate', 'useddate', si_exp_price as purchaseprice, ") \
				_T("	sil_mfgyear as ngaysx, sil_guaranteeduration, 'fa_description', sil_power, sil_voltage, sil_powercircuit, ") \
				_T("	sb_storage_id, COALESCE(SUM(SB_QTYONHAND-SB_QTYORDERED-SB_QTYPREORDERED), 0) as stockqty ") \
				_T("	FROM storage_item ") \
				_T("	LEFT JOIN storage_item_list ON(sil_item_list_id = si_item_list_id) ") \
				_T("	LEFT JOIN storage_bin ON(sb_item_id = si_item_id) ") \
				_T("	WHERE  si_org_id = 'ITS' AND si_item_id = '%s'") \
				_T("	GROUP BY si_item_id, si_name,sil_category, sil_madein, sil_mfgid, sil_model, si_serial, sil_uom_id,  ") \
				_T("	sil_vendorid, si_exp_price, sil_mfgyear, sil_guaranteeduration, sil_power, sil_voltage, sil_powercircuit, sb_storage_id ") \
				_T("	ORDER BY si_name  ) ") \
				_T(" WHERE stockqty > 0 "), m_szCurAssetNo);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("assetno"), m_szAssetNo);
		rs.GetValue(_T("assetname"), m_szName);
		rs.GetValue(_T("sil_category"), m_szCategoryKey);
		rs.GetValue(_T("sb_storage_id"), m_szDepartmentKey);
		rs.GetValue(_T("sil_madein"), m_szMadeInKey);
		rs.GetValue(_T("sil_mfgid"), m_szManufactureKey);
		rs.GetValue(_T("sil_model"), m_szModel);
		rs.GetValue(_T("si_serial"), m_szSerial);
		rs.GetValue(_T("si_condition"), m_szConditionKey);
		rs.GetValue(_T("sil_uom_id"), m_szUnitKey);
		rs.GetValue(_T("stockqty"), m_nQuantity);
		rs.GetValue(_T("sil_vendorid"), m_szVendorKey);
		rs.GetValue(_T("purchaseprice"), m_nPurchasePrice);
		//rs.GetValue(_T("fa_currentvalue"), m_nCurrentValue); 
		rs.GetValue(_T("ngaysx"), m_nManufacturedDate);
		rs.GetValue(_T("sil_guaranteeduration"), m_szGuaranteeDuration);
		rs.GetValue(_T("sil_power"), m_szCapacity);
		rs.GetValue(_T("sil_voltage"), m_szVoltage);
		rs.GetValue(_T("sil_powercircuit"), m_szPowerCircuitKey);

		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	

}
void CFAMAssetDetailDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetDetailDlg::SetDefaultValues(){

	m_szAssetNo.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_szModel.Empty();
	m_szSerial.Empty();
	m_szMadeInKey.Empty();
	m_szVendorKey.Empty();
	m_szManufactureKey.Empty();
	m_nManufacturedDate=0;
	m_szGuaranteeDuration.Empty();
	m_szCategoryKey.Empty();
	m_nQuantity=0;
	m_szUnitKey.Empty();
	m_szConditionKey.Empty();
	m_szPowerCircuitKey.Empty();
	m_szVoltage.Empty();
	m_szCapacity.Empty();
	m_szPurchaseDate.Empty();
	m_nPurchasePrice=0;
	m_szUsedDate.Empty();
	m_szDepartmentKey.Empty();

}
int CFAMAssetDetailDlg::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 2, 3, -1);
			m_wndAssetNo.EnableWindow(FALSE);
			m_wndDepartment.EnableWindow(FALSE);
			m_wndUsedDate.EnableWindow(FALSE);//
			m_wndModel.EnableWindow(FALSE);//
			m_wndCategory.EnableWindow(FALSE);//
			m_wndSerial.EnableWindow(FALSE);
			m_wndPurchasePrice.EnableWindow(FALSE);
			m_wndAssetInformation.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
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
/*void CFAMAssetDetailDlg::OnAssetNoChange(){
	
} */
/*void CFAMAssetDetailDlg::OnAssetNoSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnAssetNoKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnAssetNoCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnNameChange(){
	
} */
/*void CFAMAssetDetailDlg::OnNameSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnNameKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnNameCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnDescriptionChange(){
	
} */
/*void CFAMAssetDetailDlg::OnDescriptionSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnDescriptionKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnDescriptionCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnModelChange(){
	
} */
/*void CFAMAssetDetailDlg::OnModelSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnModelKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnModelCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnSerialChange(){
	
} */
/*void CFAMAssetDetailDlg::OnSerialSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnSerialKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnSerialCheckValue(){
	return 0;
} 
void CFAMAssetDetailDlg::OnMadeInSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnMadeInSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnMadeInSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnMadeInKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnMadeInLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndMadeIn.IsSearchKey() && !m_szMadeInKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sc_id='%s' "), m_szMadeInKey);
	}
	m_wndMadeIn.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sc_id AS id, sc_name AS name FROM sys_country %s ORDER BY sc_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndMadeIn.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	//UpdateData(TRUE);
	return nCount;
}
/*void CFAMAssetDetailDlg::OnMadeInAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetailDlg::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnVendorSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnVendorSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnVendorKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnVendorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndVendor.IsSearchKey() && !m_szVendorKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fav_id='%s' "), m_szVendorKey);
	}
	m_wndVendor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fav_id AS id, fav_name AS name FROM fam_vendor %s and fav_org_id = 'ITS' ORDER BY fav_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndVendor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnVendorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetailDlg::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnManufactureSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnManufactureSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnManufactureKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnManufactureLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndManufacture.IsSearchKey() && !m_szManufactureKey.IsEmpty())
	{
		szWhere.Format(_T(" AND famm_id='%s' "), m_szManufactureKey);
	}
	m_wndManufacture.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famm_id AS id, famm_name AS name FROM fam_manufacture WHERE famm_countryid='%s' %s ORDER BY famm_id"), 
				 m_szMadeInKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndManufacture.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnManufactureAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDetailDlg::OnManufacturedDateChange(){
	
} */
/*void CFAMAssetDetailDlg::OnManufacturedDateSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnManufacturedDateKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnManufacturedDateCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnGuaranteeDurationChange(){
	
} */
/*void CFAMAssetDetailDlg::OnGuaranteeDurationSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnGuaranteeDurationKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnGuaranteeDurationCheckValue(){
	return 0;
} 
void CFAMAssetDetailDlg::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnCategorySelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnCategorySetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnCategoryKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere1;
	szWhere.Empty();
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty())
	{
		szWhere.Format(_T(" and famc_id='%s'"), m_szCategoryKey);
	}
	
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_id AS id, famc_name AS description FROM fam_category")\
		_T(" WHERE famc_org_id = '%s' %s ORDER BY famc_id"), pMF->GetModuleID() ,szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAssetDetailDlg::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDetailDlg::OnQuantityChange(){
	
} */
/*void CFAMAssetDetailDlg::OnQuantitySetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnQuantityKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnQuantityCheckValue(){
	return 0;
} 
void CFAMAssetDetailDlg::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnUnitSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnUnitSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnUnitKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnUnitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndUnit.IsSearchKey() && !m_szUnitKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szUnitKey);
	}
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'its_uom' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetailDlg::OnConditionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnConditionSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnConditionSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnConditionKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnConditionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndCondition.IsSearchKey() && !m_szConditionKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fac_id='%s' "), m_szConditionKey);
	}
	m_wndCondition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_condition %s ORDER BY fac_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCondition.AddItems(
			rs.GetValue(_T("fac_id")), 
			rs.GetValue(_T("fac_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnConditionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetailDlg::OnPowerCircuitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnPowerCircuitSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnPowerCircuitSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnPowerCircuitKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnPowerCircuitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPowerCircuit.IsSearchKey() && !m_szPowerCircuitKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szPowerCircuitKey);
	}
	m_wndPowerCircuit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'fa_powercircuit' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPowerCircuit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnPowerCircuitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDetailDlg::OnVoltageChange(){
	
} */
/*void CFAMAssetDetailDlg::OnVoltageSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnVoltageKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnVoltageCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnCapacityChange(){
	
} */
/*void CFAMAssetDetailDlg::OnCapacitySetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnCapacityKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnCapacityCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnPurchaseDateChange(){
	
} */
/*void CFAMAssetDetailDlg::OnPurchaseDateSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnPurchaseDateKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnPurchaseDateCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnPurchasePriceChange(){
	
} */
/*void CFAMAssetDetailDlg::OnPurchasePriceSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnPurchasePriceKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnPurchasePriceCheckValue(){
	return 0;
} 
/*void CFAMAssetDetailDlg::OnUsedDateChange(){
	
} */
/*void CFAMAssetDetailDlg::OnUsedDateSetfocus(){
	
} */
/*void CFAMAssetDetailDlg::OnUsedDateKillfocus(){
	
} */
int CFAMAssetDetailDlg::OnUsedDateCheckValue(){
	return 0;
} 
void CFAMAssetDetailDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetailDlg::OnDepartmentSelendok(){
	 
}
/*void CFAMAssetDetailDlg::OnDepartmentSetfocus(){
	
}*/
/*void CFAMAssetDetailDlg::OnDepartmentKillfocus(){
	
}*/
long CFAMAssetDetailDlg::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T("	WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDetailDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetailDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CFAMAssetDetailDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMAssetDetailDlg();
} 
void CFAMAssetDetailDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAssetDetailDlg();
} 
void CFAMAssetDetailDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMAssetDetailDlg();
} 
int CFAMAssetDetailDlg::OnAddFAMAssetDetailDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAssetDetailDlg::OnEditFAMAssetDetailDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetDetailDlg::OnDeleteFAMAssetDetailDlg(){
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
 		OnCancelFAMAssetDetailDlg();
 	}
	return 0;
}
int CFAMAssetDetailDlg::OnSaveFAMAssetDetailDlg(){
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
 		//OnFAMAssetDetailDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMAssetDetailDlg::OnCancelFAMAssetDetailDlg(){
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
int CFAMAssetDetailDlg::OnFAMAssetDetailDlgListLoadData(){
	return 0;
}
