#include "FAMAssetDlg.h"
#include "MainFrm.h"
#include "FAMAttachAccessories.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnAssetNoKillfocus();
} */
static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnAssetNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnModelCheckValue();
} 
/*static void _OnDeprTimeChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDeprTimeChange();
} */
/*static void _OnDeprTimeSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDeprTimeSetfocus();} */ 
/*static void _OnDeprTimeKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnDeprTimeKillfocus();
} */
static int _OnDeprTimeCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnDeprTimeCheckValue();
} 
static void _OnMadeInSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnMadeInSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMadeInSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnMadeInSelendok();
}
/*static void _OnMadeInSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnMadeInKillfocus();
}*/
/*static void _OnMadeInKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnMadeInKillfocus();
}*/
static long _OnMadeInLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnMadeInLoadData();
}
/*static void _OnMadeInAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnMadeInAddNew();
}*/
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnManufactureAddNew();
}*/
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnUnitAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCategoryAddNew();
}*/
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVendorAddNew();
}*/
static void _OnPowerCircuitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDlg* )pWnd)->OnPowerCircuitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPowerCircuitSelendokFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPowerCircuitSelendok();
}
/*static void _OnPowerCircuitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPowerCircuitKillfocus();
}*/
/*static void _OnPowerCircuitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPowerCircuitKillfocus();
}*/
static long _OnPowerCircuitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnPowerCircuitLoadData();
}
/*static void _OnPowerCircuitAddNewFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPowerCircuitAddNew();
}*/
/*static void _OnVoltageChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVoltageChange();
} */
/*static void _OnVoltageSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVoltageSetfocus();} */ 
/*static void _OnVoltageKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnVoltageKillfocus();
} */
static int _OnVoltageCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnVoltageCheckValue();
} 
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnCapacityCheckValue();
} 
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPurchasePriceSetfocus();} */ 
/*static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDlg *)pWnd)->OnPurchasePriceKillfocus();
} */
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDlg *)pWnd)->OnPurchasePriceCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAMAssetDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnListDeleteItem();
} 
static int _OnListAddItem(CWnd *pWnd){
	CFAMAssetDlg *pVw = (CFAMAssetDlg *)pWnd;
	return ((CFAMAssetDlg*)pWnd)->OnListAddItem();
}
static int _OnListEditItem(CWnd *pWnd){
	CFAMAssetDlg *pVw = (CFAMAssetDlg *)pWnd;
	return ((CFAMAssetDlg*)pWnd)->OnListEditItem();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAssetDlg *pVw = (CFAMAssetDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAssetDlg *pVw = (CFAMAssetDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMAssetDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnAddFAMAssetDlg();
} 
static int _OnEditFAMAssetDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnEditFAMAssetDlg();
} 
static int _OnDeleteFAMAssetDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnDeleteFAMAssetDlg();
} 
static int _OnSaveFAMAssetDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnSaveFAMAssetDlg();
} 
static int _OnCancelFAMAssetDlgFnc(CWnd *pWnd){
	 return ((CFAMAssetDlg*)pWnd)->OnCancelFAMAssetDlg();
} 
CFAMAssetDlg::CFAMAssetDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 650;
	m_nDlgHeight = 490;
	SetDefaultValues();
}
CFAMAssetDlg::~CFAMAssetDlg(){
}
void CFAMAssetDlg::OnCreateComponents(){
	m_wndAssetInformation.Create(this, _T("Asset Information"), 5, 5, 745, 300);
	m_wndAccessoriesList.Create(this, _T("Accessories List"), 5, 305, 745, 495);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 110, 55);
	m_wndType.Create(this,115, 30, 355, 55); 
	m_wndCategoryLabel.Create(this, _T("Category"), 360, 30, 460, 55);
	m_wndCategory.Create(this,465, 30, 740, 55); 
	m_wndAssetNoLabel.Create(this, _T("Asset No"), 10, 60, 110, 85);
	m_wndAssetNo.Create(this,115, 60, 740, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 110, 115);
	m_wndName.Create(this,115, 90, 740, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 110, 145);
	m_wndDescription.Create(this,115, 120, 740, 145); 
	m_wndModelLabel.Create(this, _T("Model"), 10, 150, 110, 175);
	m_wndModel.Create(this,115, 150, 355, 175); 
	m_wndDeprTimeLabel.Create(this, _T("Depr Time"), 360, 150, 460, 175);
	m_wndDeprTime.Create(this,465, 150, 740, 175); 
	m_wndMadeInLabel.Create(this, _T("Made In"), 10, 180, 110, 205);
	m_wndMadeIn.Create(this,115, 180, 355, 205); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 360, 180, 460, 205);
	m_wndManufacture.Create(this,465, 181, 740, 206); 
	m_wndVendorLabel.Create(this, _T("Vendor"), 10, 210, 110, 235);
	m_wndVendor.Create(this,115, 210, 355, 235); 
	m_wndUnitLabel.Create(this, _T("Calc Unit"), 360, 210, 460, 235);
	m_wndUnit.Create(this,465, 210, 740, 235); 
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 10, 240, 110, 265);
	m_wndPurchasePrice.Create(this,115, 240, 355, 265); 
	m_wndPowerCircuitLabel.Create(this, _T("Power Circuit"), 360, 240, 460, 265);
	m_wndPowerCircuit.Create(this,465, 240, 740, 265); 
	m_wndVoltageLabel.Create(this, _T("Voltage"), 10, 270, 110, 295);
	m_wndVoltage.Create(this,115, 270, 355, 295); 
	m_wndCapacityLabel.Create(this, _T("Capacity"), 360, 270, 460, 295);
	m_wndCapacity.Create(this,465, 270, 740, 295); 
	m_wndList.Create(this,10, 330, 740, 490); 
	m_wndSave.Create(this, _T("&Save"), 580, 505, 660, 530);
	m_wndCancel.Create(this, _T("&Close"), 665, 505, 745, 530);

	m_wndSerialLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndSerialLabel.ShowWindow(SW_HIDE);
	m_wndSerialLabel.EnableWindow(FALSE);
	m_wndSerial.Create(this, 0, 0, 0, 0);
	m_wndSerial.ShowWindow(SW_HIDE);
	m_wndSerial.EnableWindow(FALSE);
	m_wndQuantityLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndQuantityLabel.ShowWindow(SW_HIDE);
	m_wndQuantityLabel.EnableWindow(FALSE);
	m_wndQuantity.Create(this, 0, 0, 0, 0);
	m_wndQuantity.ShowWindow(SW_HIDE);
	m_wndQuantity.EnableWindow(FALSE);
	m_wndConditionLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndConditionLabel.ShowWindow(SW_HIDE);
	m_wndConditionLabel.EnableWindow(FALSE);
	m_wndCondition.Create(this, 0, 0, 0, 0);
	m_wndCondition.ShowWindow(SW_HIDE);
	m_wndCondition.EnableWindow(FALSE);
	m_wndDepartmentLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndDepartmentLabel.ShowWindow(SW_HIDE);
	m_wndDepartmentLabel.EnableWindow(FALSE);
	m_wndDepartment.Create(this, 0, 0, 0, 0);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndDepartment.EnableWindow(FALSE);
	m_wndEmployeerLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndEmployeerLabel.ShowWindow(SW_HIDE);
	m_wndEmployeerLabel.EnableWindow(FALSE);
	m_wndEmployeer.Create(this, 0, 0, 0, 0);
	m_wndEmployeer.ShowWindow(SW_HIDE);
	m_wndEmployeer.EnableWindow(FALSE);
	m_wndPurchaseInvoiceLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndPurchaseInvoiceLabel.ShowWindow(SW_HIDE);
	m_wndPurchaseInvoiceLabel.EnableWindow(FALSE);
	m_wndPurchaseInvoice.Create(this, 0, 0, 0, 0);
	m_wndPurchaseInvoice.ShowWindow(SW_HIDE);
	m_wndPurchaseInvoice.EnableWindow(FALSE);
	m_wndPurchaseDateLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndPurchaseDateLabel.ShowWindow(SW_HIDE);
	m_wndPurchaseDateLabel.EnableWindow(FALSE);
	m_wndPurchaseDate.Create(this, 0, 0, 0, 0);
	m_wndPurchaseDate.ShowWindow(SW_HIDE);
	m_wndPurchaseDate.EnableWindow(FALSE);
	m_wndSourcesLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndSourcesLabel.ShowWindow(SW_HIDE);
	m_wndSourcesLabel.EnableWindow(FALSE);
	m_wndSources.Create(this, 0, 0, 0, 0);
	m_wndSources.ShowWindow(SW_HIDE);
	m_wndSources.EnableWindow(FALSE);
	m_wndIncDateLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndIncDateLabel.ShowWindow(SW_HIDE);
	m_wndIncDateLabel.EnableWindow(FALSE);
	m_wndIncDate.Create(this, 0, 0, 0, 0);
	m_wndIncDate.ShowWindow(SW_HIDE);
	m_wndIncDate.EnableWindow(FALSE);
	m_wndIncReasonLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndIncReasonLabel.ShowWindow(SW_HIDE);
	m_wndIncReasonLabel.EnableWindow(FALSE);
	m_wndIncReason.Create(this, 0, 0, 0, 0);
	m_wndIncReason.ShowWindow(SW_HIDE);
	m_wndIncReason.EnableWindow(FALSE);
	m_wndUsedDateLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndUsedDateLabel.ShowWindow(SW_HIDE);
	m_wndUsedDateLabel.EnableWindow(FALSE);
	m_wndUsedDate.Create(this, 0, 0, 0, 0);
	m_wndUsedDate.ShowWindow(SW_HIDE);
	m_wndUsedDate.EnableWindow(FALSE);
	m_wndDeprValueLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndDeprValueLabel.ShowWindow(SW_HIDE);
	m_wndDeprValueLabel.EnableWindow(FALSE);
	m_wndDeprValue.Create(this, 0, 0, 0, 0);
	m_wndDeprValue.ShowWindow(SW_HIDE);
	m_wndDeprValue.EnableWindow(FALSE);
}
void CFAMAssetDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndAssetNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndAssetNo.SetLimitText(15);
	m_wndAssetNo.SetCheckValue(true);
	//m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###"));
	m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###"));
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndModel.SetLimitText(35);
	//m_wndModel.SetCheckValue(true);
	m_wndManufactureLabel.SetHyperlink(true);
	m_wndMadeIn.SetCheckValue(true);
	m_wndMadeIn.LimitText(35);
	//m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(15);
	//m_wndUnit.SetLimitText(15);
	m_wndUnit.SetCheckValue(true);
	//m_wndAccessories.SetMultiLine(TRUE);
	//m_wndAccessories.SetLimitText(512);
	//m_wndAccessories.SetCheckValue(true);
	m_wndCategoryLabel.SetHyperlink(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndConditionLabel.SetHyperlink(true);
	//m_wndVendor.SetCheckValue(true);
	m_wndVendor.LimitText(15);
	m_wndPurchasePrice.SetLimitText(20);
	//m_wndPurchasePrice.SetCheckValue(true);
	m_wndPurchasePrice.SetCurrencyFormat(TRUE);
	
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndMadeIn.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMadeIn.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndManufacture.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndUnit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 120);

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndPowerCircuit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPowerCircuit.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Type"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Model"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Speed"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Data Size"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Capacity"), CFMT_TEXT, 100);


	m_fam_assetTbl.SetTableName(_T("storage_item_list"));
	m_fam_assetTbl.AddField(_T("sil_createdby"), dfText, 25); 
	m_fam_assetTbl.AddField(_T("sil_createddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("sil_updatedby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_updateddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("sil_item_list_id"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_name"), dfText, 254); 
	m_fam_assetTbl.AddField(_T("sil_category"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("sil_type"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_madein"), dfText, 3); 
	m_fam_assetTbl.AddField(_T("sil_mfgid"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_model"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("sil_uom_id"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_vendorid"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("sil_purchaseprice"), dfDouble); 
	m_fam_assetTbl.AddField(_T("sil_mfgyear"), dfLong); 
	m_fam_assetTbl.AddField(_T("sil_guaranteeduration"), dfText, 35);
	m_fam_assetTbl.AddField(_T("sil_deprtime"), dfLong);
	m_fam_assetTbl.AddField(_T("sil_desc"), dfText, 254); 
	m_fam_assetTbl.AddField(_T("sil_power"), dfText, 15);
	m_fam_assetTbl.AddField(_T("sil_voltage"), dfText, 6);
	m_fam_assetTbl.AddField(_T("sil_powercircuit"), dfText, 2);
	m_fam_assetTbl.AddField(_T("sil_org_id"), dfText, 3);
}
void CFAMAssetDlg::OnSetWindowEvents(){
	
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
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
	//m_wndDeprTime.SetEvent(WE_CHANGE, _OnDeprTimeChangeFnc);
	//m_wndDeprTime.SetEvent(WE_SETFOCUS, _OnDeprTimeSetfocusFnc);
	//m_wndDeprTime.SetEvent(WE_KILLFOCUS, _OnDeprTimeKillfocusFnc);
	m_wndDeprTime.SetEvent(WE_CHECKVALUE, _OnDeprTimeCheckValueFnc);
	m_wndMadeIn.SetEvent(WE_SELENDOK, _OnMadeInSelendokFnc);
	//m_wndMadeIn.SetEvent(WE_SETFOCUS, _OnMadeInSetfocusFnc);
	//m_wndMadeIn.SetEvent(WE_KILLFOCUS, _OnMadeInKillfocusFnc);
	m_wndMadeIn.SetEvent(WE_SELCHANGE, _OnMadeInSelectChangeFnc);
	m_wndMadeIn.SetEvent(WE_LOADDATA, _OnMadeInLoadDataFnc);
	//m_wndMadeIn.SetEvent(WE_ADDNEW, _OnMadeInAddNewFnc);
	m_wndManufacture.SetEvent(WE_SELENDOK, _OnManufactureSelendokFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_SELCHANGE, _OnManufactureSelectChangeFnc);
	m_wndManufacture.SetEvent(WE_LOADDATA, _OnManufactureLoadDataFnc);
	//m_wndManufacture.SetEvent(WE_ADDNEW, _OnManufactureAddNewFnc);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndVendor.SetEvent(WE_SELENDOK, _OnVendorSelendokFnc);
	//m_wndVendor.SetEvent(WE_SETFOCUS, _OnVendorSetfocusFnc);
	//m_wndVendor.SetEvent(WE_KILLFOCUS, _OnVendorKillfocusFnc);
	m_wndVendor.SetEvent(WE_SELCHANGE, _OnVendorSelectChangeFnc);
	m_wndVendor.SetEvent(WE_LOADDATA, _OnVendorLoadDataFnc);
	//m_wndVendor.SetEvent(WE_ADDNEW, _OnVendorAddNewFnc);
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
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	//m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItem, 0,0,0);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItem, 0,0,0);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0,0,0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	if(GetMode() == VM_EDIT)
	{
		m_wndAssetNo.EnableWindow(FALSE);
		GetDataToScreen();
	}

}
void CFAMAssetDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndDeprTime.GetDlgCtrlID(), m_nDeprTime);
	DDX_TextEx(pDX, m_wndMadeIn.GetDlgCtrlID(), m_szMadeInKey);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	//DDX_Text(pDX, m_wndAccessories.GetDlgCtrlID(), m_szAccessories);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndPowerCircuit.GetDlgCtrlID(), m_szPowerCircuitKey);
	DDX_Text(pDX, m_wndVoltage.GetDlgCtrlID(), m_szVoltage);
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_szCapacity);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);

}
void CFAMAssetDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sil_name, sil_category, sil_madein, sil_mfgid, sil_model, sil_type, sil_item_list_id,") \
		_T(" sil_uom_id, sil_vendorid, sil_purchaseprice, ") \
		_T(" sil_mfgyear, sil_guaranteeduration, sil_desc, sil_power, ") \
		_T(" sil_voltage, sil_powercircuit ") \
		_T(" FROM storage_item_list WHERE sil_item_list_id='%s' AND sil_org_id = '%s'"), szAssetNo, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{//check doan nay
		
		//m_szAssetNo = szAssetNo;
		rs.GetValue(_T("sil_item_list_id"), m_szAssetNo);
		rs.GetValue(_T("sil_type"), m_szTypeKey);
		_fmsg(_T("%s"), rs.GetValue(_T("sil_type")));
		rs.GetValue(_T("sil_name"), m_szName);
		rs.GetValue(_T("sil_category"), m_szCategoryKey);
		rs.GetValue(_T("sil_madein"), m_szMadeInKey);
		rs.GetValue(_T("sil_mfgid"), m_szManufactureKey);
		rs.GetValue(_T("sil_model"), m_szModel);
		rs.GetValue(_T("sil_vendorid"), m_szVendorKey);
		rs.GetValue(_T("sil_purchaseprice"), m_nPurchasePrice);
		rs.GetValue(_T("sil_deprtime"), m_nDeprTime);
		rs.GetValue(_T("sil_uom_id"), m_szUnitKey);
		rs.GetValue(_T("sil_deprtime"), m_nDeprTime);
		rs.GetValue(_T("sil_desc"), m_szDescription);
		rs.GetValue(_T("sil_power"), m_szCapacity);
		rs.GetValue(_T("sil_voltage"), m_szVoltage);
		rs.GetValue(_T("sil_powercircuit"), m_szPowerCircuitKey);
		pMF->m_nCost = m_nPurchasePrice;
		//pMF->m_nCurValue = m_nCurrentValue;
		pMF->m_szCategory = m_szCategoryKey.Trim();
		OnListLoadData();
		UpdateData(FALSE);
	}
	
	else
	{
		SetMode(VM_NONE);
	}

}
void CFAMAssetDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_assetTbl.SetValue(_T("sil_createdby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("sil_createddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("sil_updatedby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("sil_updateddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("sil_item_list_id"), m_szAssetNo);
	m_fam_assetTbl.SetValue(_T("sil_name"), m_szName);
	m_fam_assetTbl.SetValue(_T("sil_category"), m_szCategoryKey);
	m_fam_assetTbl.SetValue(_T("sil_type"), m_szTypeKey);
	m_fam_assetTbl.SetValue(_T("sil_madein"), m_szMadeInKey);
	m_fam_assetTbl.SetValue(_T("sil_mfgid"), m_szManufactureKey);
	m_fam_assetTbl.SetValue(_T("sil_model"), m_szModel);
	//m_fam_assetTbl.SetValue(_T("sil_status"), _T("I"));
	m_fam_assetTbl.SetValue(_T("sil_uom_id"), m_szUnitKey);
	m_fam_assetTbl.SetValue(_T("sil_voltage"), m_szVoltage);
	m_fam_assetTbl.SetValue(_T("sil_powercircuit"), m_szPowerCircuitKey);
	m_fam_assetTbl.SetValue(_T("sil_vendorid"), m_szVendorKey);
	m_fam_assetTbl.SetValue(_T("sil_purchaseprice"), m_nPurchasePrice);
	m_fam_assetTbl.SetValue(_T("sil_deprtime"), m_nDeprTime);
	m_fam_assetTbl.SetValue(_T("sil_desc"), m_szDescription);
	m_fam_assetTbl.SetValue(_T("sil_power"), m_szCapacity);
	m_fam_assetTbl.SetValue(_T("sil_org_id"), pMF->GetModuleID());
}
void CFAMAssetDlg::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szAssetNo.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_szModel.Empty();
	m_nDeprTime = 0;
	m_szMadeInKey.Empty();
	m_szManufactureKey.Empty();
	m_szUnitKey.Empty();
	m_szCategoryKey.Empty();
	m_szVendorKey.Empty();
	m_szPowerCircuitKey.Empty();
	m_szVoltage.Empty();
	m_szCapacity.Empty();
	m_nPurchasePrice=0;

}
int CFAMAssetDlg::SetMode(int nMode){
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
			m_wndAssetNo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndAssetInformation.SetFocus();
			m_wndName.SetFocus();
			m_wndName.SetSel(m_wndName.GetWindowTextLength(), m_wndName.GetWindowTextLength());
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

void CFAMAssetDlg::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnTypeSelendok(){
	 
}
/*void CFAMAssetDlg::OnTypeSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnTypeKillfocus(){
	
}*/
long CFAMAssetDlg::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and fast_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fast_id, fast_desc FROM fam_assettype WHERE fast_org_id = '%s' %s ORDER BY fast_id"), pMF->GetModuleID(), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDlg::OnAssetNoChange(){
	
} */
/*void CFAMAssetDlg::OnAssetNoSetfocus(){
	
} */
/*void CFAMAssetDlg::OnAssetNoKillfocus(){
	
} */
int CFAMAssetDlg::OnAssetNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T("SELECT Count(*) FROM storage_item_list WHERE sil_item_list_id='%s' and sil_org_id = '%s'"), m_szAssetNo, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndAssetNo.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CFAMAssetDlg::OnNameChange(){
	
} */
/*void CFAMAssetDlg::OnNameSetfocus(){
	
} */
/*void CFAMAssetDlg::OnNameKillfocus(){
	
} */
int CFAMAssetDlg::OnNameCheckValue(){
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	//UpdateData(FALSE);
	return 0;
} 
/*void CFAMAssetDlg::OnDescriptionChange(){
	
} */
/*void CFAMAssetDlg::OnDescriptionSetfocus(){
	
} */
/*void CFAMAssetDlg::OnDescriptionKillfocus(){
	
} */
int CFAMAssetDlg::OnDescriptionCheckValue(){
	return 0;
} 
/*void CFAMAssetDlg::OnModelChange(){
	
} */
/*void CFAMAssetDlg::OnModelSetfocus(){
	
} */
/*void CFAMAssetDlg::OnModelKillfocus(){
	
} */
int CFAMAssetDlg::OnModelCheckValue(){
	return 0;
} 

/*void CFAMAssetDlg::OnDeprTimeChange(){
	
} */
/*void CFAMAssetDlg::OnDeprTimeSetfocus(){
	
} */
/*void CFAMAssetDlg::OnDeprTimeKillfocus(){
	
} */
int CFAMAssetDlg::OnDeprTimeCheckValue(){
	return 0;
} 
void CFAMAssetDlg::OnMadeInSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnMadeInSelendok(){
	 
}
/*void CFAMAssetDlg::OnMadeInSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnMadeInKillfocus(){
	
}*/
long CFAMAssetDlg::OnMadeInLoadData(){
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
/*void CFAMAssetDlg::OnMadeInAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDlg::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnManufactureSelendok(){
	 
}
/*void CFAMAssetDlg::OnManufactureSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnManufactureKillfocus(){
	
}*/
long CFAMAssetDlg::OnManufactureLoadData(){
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
/*void CFAMAssetDlg::OnManufactureAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CFAMAssetDlg::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnUnitSelendok(){
	 
}
/*void CFAMAssetDlg::OnUnitSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnUnitKillfocus(){
	
}*/
long CFAMAssetDlg::OnUnitLoadData(){
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
/*void CFAMAssetDlg::OnUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDlg::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnCategorySelendok(){
	 
}
/*void CFAMAssetDlg::OnCategorySetfocus(){
	
}*/
/*void CFAMAssetDlg::OnCategoryKillfocus(){
	
}*/
long CFAMAssetDlg::OnCategoryLoadData(){
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
		_T(" WHERE famc_org_id = '%s' %s ORDER BY famc_id"), pMF->GetModuleID(),szWhere);
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
/*void CFAMAssetDlg::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CFAMAssetDlg::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnVendorSelendok(){
	 
}
/*void CFAMAssetDlg::OnVendorSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnVendorKillfocus(){
	
}*/
long CFAMAssetDlg::OnVendorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndVendor.IsSearchKey() && !m_szVendorKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fav_id='%s' "), m_szVendorKey);
		//szWhere.Format(_T(" AND adp_partner_type_id = '%s'"), m_szVendorKey);
	}
	m_wndVendor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fav_id AS id, fav_name AS name FROM fam_vendor %s and fav_org_id = 'ITS' ORDER BY fav_id"), szWhere);
	//szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name FROM ad_partner WHERE 1=1 %s ORDER BY adp_partner_id"), szWhere);
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
/*void CFAMAssetDlg::OnVendorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CFAMAssetDlg::OnPowerCircuitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDlg::OnPowerCircuitSelendok(){
	 
}
/*void CFAMAssetDlg::OnPowerCircuitSetfocus(){
	
}*/
/*void CFAMAssetDlg::OnPowerCircuitKillfocus(){
	
}*/
long CFAMAssetDlg::OnPowerCircuitLoadData(){
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
/*void CFAMAssetDlg::OnPowerCircuitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDlg::OnVoltageChange(){
	
} */
/*void CFAMAssetDlg::OnVoltageSetfocus(){
	
} */
/*void CFAMAssetDlg::OnVoltageKillfocus(){
	
} */
int CFAMAssetDlg::OnVoltageCheckValue(){
	return 0;
} 
/*void CFAMAssetDlg::OnCapacityChange(){
	
} */
/*void CFAMAssetDlg::OnCapacitySetfocus(){
	
} */
/*void CFAMAssetDlg::OnCapacityKillfocus(){
	
} */
int CFAMAssetDlg::OnCapacityCheckValue(){
	return 0;
} 

/*void CFAMAssetDlg::OnPurchasePriceChange(){
	
} */
/*void CFAMAssetDlg::OnPurchasePriceSetfocus(){
	
} */
/*void CFAMAssetDlg::OnPurchasePriceKillfocus(){
	
} */
int CFAMAssetDlg::OnPurchasePriceCheckValue(){
	if (m_nPurchasePrice <= 0)
	{
		//_msg(_T("%d"), m_nPurchasePrice);
		m_wndPurchasePrice.SetToolTipMessage(_T("This value must be greater than zero"));
		return -1;
	}
	return 0;
} 

void CFAMAssetDlg::OnListDblClick(){
	
} 
void CFAMAssetDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nAccessIdx = ToInt(m_wndList.GetItemText(nNewItem, 0));
	_fmsg(_T("%d"), m_nAccessIdx);
} 
int CFAMAssetDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" DELETE FROM fam_attach_accessories WHERE faa_assetno = '%s' AND faa_idx = %ld "), m_szAssetNo, m_nAccessIdx);
	int nCount = pMF->ExecSQL(szSQL);
	if(nCount < 0)
		return -1;
	else
		OnListLoadData();
	 return 0;
} 
long CFAMAssetDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT * FROM fam_attach_accessories WHERE faa_assetno = '%s'"), m_szAssetNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("faa_idx")),
			rs.GetValue(_T("faa_name")),
			rs.GetValue(_T("faa_type")),
			rs.GetValue(_T("faa_model")),
			rs.GetValue(_T("faa_speed")), 
			rs.GetValue(_T("faa_datasize")),
			rs.GetValue(_T("faa_capacity")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CFAMAssetDlg::OnListAddItem()
{
	CFAMAttachAccessories dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_szAssetNo = m_szAssetNo;
	dlg.m_pWnd = this;
	dlg.DoModal();
	return 0;
}

int CFAMAssetDlg::OnListEditItem()
{
	CFAMAttachAccessories dlg(this);
	dlg.m_szAssetNo = m_szAssetNo;
	dlg.m_nIdx = m_nAccessIdx;
	dlg.SetMode(VM_EDIT);
	dlg.m_pWnd = this;
	dlg.DoModal();
	return 0;
}

void CFAMAssetDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAssetDlg();
} 
void CFAMAssetDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMAssetDlg::OnAddFAMAssetDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAssetDlg::OnEditFAMAssetDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetDlg::OnDeleteFAMAssetDlg(){
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
 		OnCancelFAMAssetDlg();
 	}
	return 0;
}
int CFAMAssetDlg::OnSaveFAMAssetDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	if(m_szAssetNo.IsEmpty())
	{
		m_wndAssetNo.SetToolTipMessage(_T("This value cannot be null"));
		return -1;
	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false, bChangeMethod = false, bChangeCurValue = false;
	CRecord rs(&pMF->m_db);
	CRecord rsm(&pMF->m_db);
	//CRecord rsn(&pMF->m_db);
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_fam_assetTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere, szWhere1; 
		szWhere.Format(_T(" WHERE sil_item_list_id='%s' "), szAssetNo); 
 		//szSQL = m_fam_assetTbl.GetUpdateSQL(_T("fa_createdby, fa_createddate, fa_assetno, fa_deprunit"));
		szSQL = m_fam_assetTbl.GetUpdateSQL(_T("sil_createdby, sil_createddate, sil_item_list_id"));
 		szSQL += szWhere; 
 	} 
	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 	

		pMF->m_wndAsset.OnListLoadData();
		szSQL.Format(_T("UPDATE storage_item_list SET sil_type=(SELECT famc_typeid FROM fam_category WHERE famc_id='%s'), ")\
						 _T("sil_deprmethod=(SELECT distinct famc_depr_method FROM fam_category WHERE famc_id='%s') ")\
						 _T("WHERE sil_item_list_id='%s'"), m_szCategoryKey, m_szCategoryKey, m_szAssetNo);
		rsm.ExecSQL(szSQL);
		if(GetMode() == VM_EDIT)
			SetMode(VM_VIEW);
		else
			SetMode(VM_ADD); 
 	} 
 	return ret; 
}
int CFAMAssetDlg::OnCancelFAMAssetDlg(){
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
int CFAMAssetDlg::OnFAMAssetDlgListLoadData(){
	return 0;
}
