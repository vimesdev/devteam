#include "FAMAsset.h"
#include "MainFrm.h"

/*static void _OnAssetNumberChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnAssetNumberChange();
} */
/*static void _OnAssetNumberSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnAssetNumberSetfocus();} */ 
/*static void _OnAssetNumberKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnAssetNumberKillfocus();
} */
static int _OnAssetNumberCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnAssetNumberCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnNameCheckValue();
} 
/*static void _OnPurchaseNumberChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseNumberChange();
} */
/*static void _OnPurchaseNumberSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseNumberSetfocus();} */ 
/*static void _OnPurchaseNumberKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseNumberKillfocus();
} */
static int _OnPurchaseNumberCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnPurchaseNumberCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCategoryAddNew();
}*/
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnVendorAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnPurchaseDateChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseDateChange();
} */
/*static void _OnPurchaseDateSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseDateSetfocus();} */ 
static void _OnPurchaseDateKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchaseDateKillfocus();
}
static int _OnPurchaseDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnPurchaseDateCheckValue();
} 
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnLocationCheckValue();
} 
/*static void _OnInServiceChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnInServiceChange();
} */
static void _OnInServiceSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnInServiceSetfocus();}
static void _OnInServiceKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnInServiceKillfocus();
}
static int _OnInServiceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnInServiceCheckValue();
} 
static void _OnSubLocationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnSubLocationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSubLocationSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSubLocationSelendok();
}
/*static void _OnSubLocationChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSubLocationChange();
} */
/*static void _OnSubLocationSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSubLocationSetfocus();} */ 
/*static void _OnSubLocationKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSubLocationKillfocus();
} */
//static int _OnSubLocationCheckValueFnc(CWnd *pWnd){
	//return ((CFAMAsset *)pWnd)->OnSubLocationCheckValue();
//} 
static long _OnSubLocationLoadDataFnc(CWnd *pWnd){
return ((CFAMAsset *)pWnd)->OnSubLocationLoadData();
}
/*static void _OnSubLocationAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSubLocationAddNew();
}*/
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchasePriceSetfocus();} */ 
/*static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnPurchasePriceKillfocus();
} */
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnPurchasePriceCheckValue();
} 
/*static void _OnEmployeeChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnEmployeeChange();
} */
/*static void _OnEmployeeSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnEmployeeSetfocus();} */ 
/*static void _OnEmployeeKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnEmployeeKillfocus();
} */
static int _OnEmployeeCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnEmployeeCheckValue();
} 
/*static void _OnCurrentDeprValueChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentDeprValueChange();
} */
/*static void _OnCurrentDeprValueSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentDeprValueSetfocus();} */ 
/*static void _OnCurrentDeprValueKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentDeprValueKillfocus();
} */
static int _OnCurrentDeprValueCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnCurrentDeprValueCheckValue();
} 
/*static void _OnManufactureChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnManufactureChange();
} */
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnManufactureSetfocus();} */ 
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnManufactureKillfocus();
} */
static int _OnManufactureCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnManufactureCheckValue();
} 
/*static void _OnCurrentValueChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentValueChange();
} */
/*static void _OnCurrentValueSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentValueSetfocus();} */ 
/*static void _OnCurrentValueKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnCurrentValueKillfocus();
} */
static int _OnCurrentValueCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnCurrentValueCheckValue();
} 
/*static void _OnBrandChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnBrandChange();
} */
/*static void _OnBrandSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnBrandSetfocus();} */ 
/*static void _OnBrandKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnBrandKillfocus();
} */
static int _OnBrandCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnBrandCheckValue();
} 
/*static void _OnSalvageChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSalvageChange();
} */
/*static void _OnSalvageSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSalvageSetfocus();} */ 
/*static void _OnSalvageKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSalvageKillfocus();
} */
static int _OnSalvageCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnSalvageCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnModelCheckValue();
} 
/*static void _OnSerialChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSerialChange();
} */
/*static void _OnSerialSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSerialSetfocus();} */ 
/*static void _OnSerialKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSerialKillfocus();
} */
static int _OnSerialCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnSerialCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnStatusSelendok();
}
static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnStatusSetfocus();
}
static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnStatusKillfocus();
}
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnStatusAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAMAsset*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAsset*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnListDeleteItem();
} 
static void _OnConditionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnConditionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnConditionSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnConditionSelendok();
}
/*static void _OnConditionSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnConditionKillfocus();
}*/
static void _OnConditionKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnConditionKillfocus();
}
static long _OnConditionLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnConditionLoadData();
}
/*static void _OnConditionAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnConditionAddNew();
}*/
static void _OnSearchTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAsset*)pWnd)->OnSearchTabSelectChange(nOld, nNew);
} 
static void _OnAssetTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAsset*)pWnd)->OnAssetTabSelectChange(nOld, nNew);
} 
static void _OnImageSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAsset*)pWnd)->OnImageSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnAddFAMAsset();
} 
static int _OnEditFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnEditFAMAsset();
} 
static int _OnDeleteFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnDeleteFAMAsset();
} 
static int _OnSaveFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnSaveFAMAsset();
} 
static int _OnCancelFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnCancelFAMAsset(); 
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnUnitCheckValue();
} 
CFAMAsset::CFAMAsset()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 715;	
	SetDefaultValues();
}
CFAMAsset::~CFAMAsset()
{
}
void CFAMAsset::OnCreateComponents(){
	m_wndAssetInformation.Create(this, _T("Asset Information"), 365, 5, 1015, 705);
	m_wndAssets.Create(this, _T("Assets"), 5, 5, 360, 705);
	m_wndAssetNumberLabel.Create(this, _T("Asset Number"), 370, 30, 470, 55);
	m_wndAssetNumber.Create(this,475, 30, 625, 55);

	m_wndNameLabel.Create(this, _T("Name"), 370, 60, 470, 85);
	m_wndName.Create(this,475, 60, 625, 85);

	m_wndCategoryLabel.Create(this, _T("Category"), 370, 90, 470, 115);
	m_wndCategory.Create(this,475, 90, 625, 115);
	
	m_wndTypeLabel.Create(this, _T("Type"), 370, 120, 470, 145);
	m_wndType.Create(this,475, 120, 625, 145);
	
	m_wndLocationLabel.Create(this, _T("Location"), 370, 150, 470, 175);
	m_wndLocation.Create(this,475, 150, 625, 175); 
	
	m_wndSubLocationLabel.Create(this, _T("Department"), 370, 180, 470, 205);
	m_wndSubLocation.Create(this,475, 180, 625, 205);
	
	m_wndEmployeeLabel.Create(this, _T("Employee"), 370, 210, 470, 235);
	m_wndEmployee.Create(this,475, 210, 625, 235); 
	
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 370, 240, 470, 265);
	m_wndManufacture.Create(this,475, 240, 625, 265); 
	
	m_wndBrandLabel.Create(this, _T("Branch"), 370, 270, 470, 295);
	m_wndBrand.Create(this,475, 270, 625, 295); 
	
	m_wndModelLabel.Create(this, _T("Model"), 370, 300, 470, 325);
	m_wndModel.Create(this,475, 300, 625, 325); 
	m_wndSerialLabel.Create(this, _T("Serial"), 370, 330, 470, 355);
	m_wndSerial.Create(this,475, 330, 625, 355); 
	m_wndStatusLabel.Create(this, _T("Status"), 370, 360, 470, 385);
	m_wndStatus.Create(this,475, 360, 625, 385); 
	m_wndConditionLabel.Create(this, _T("Condition"), 370, 390, 470, 415);
	m_wndCondition.Create(this,475, 390, 625, 415);
	m_wndPurchaseNumberLabel.Create(this, _T("Purchase Number"), 630, 30, 735, 55);
	m_wndPurchaseNumber.Create(this,740, 30, 830, 55); 
	m_wndUnitLabel.Create(this, _T("Unit"), 835, 30, 920, 55);
	m_wndUnit.Create(this,925, 30, 1010, 55); 
	m_wndVendorLabel.Create(this, _T("Vendor"), 630, 60, 735, 85);
	m_wndVendor.Create(this,740, 60, 1010, 85); 
	m_wndPurchaseDateLabel.Create(this, _T("Purchase Date"), 630, 90, 735, 115);
	m_wndPurchaseDate.Create(this,740, 90, 830, 115); 
	m_wndInServiceLabel.Create(this, _T("In Service"), 835, 90, 920, 115);
	m_wndInService.Create(this,925, 90, 1010, 115);
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 630, 120, 735, 145);
	m_wndPurchasePrice.Create(this,740, 120, 830, 145); 
	m_wndCurrentDeprValueLabel.Create(this, _T("Total Depr Value"), 630, 150, 735, 175);
	m_wndCurrentDeprValue.Create(this,740, 150, 830, 175); 
	m_wndCurrentValueLabel.Create(this, _T("Current Value"), 835, 120, 920, 145);
	m_wndCurrentValue.Create(this,925, 120, 1010, 145); 
	m_wndSalvageValueLabel.Create(this, _T("Salvage Value"), 835, 150, 920, 175);
	m_wndSalvage.Create(this,925, 150, 1010, 175); 
	//m_wndSearchTab.Create(this,10, 420, 355, 700); 
	//m_wndAssetTab.Create(this,370, 420, 1010, 700); 
	//m_wndImage.Create(this,630, 180, 1010, 385);
	m_wndAdd.Create(this, _T("&Add"), 635, 390, 705, 415);
	m_wndEdit.Create(this, _T("&Edit"), 710, 390, 780, 415);
	m_wndDelete.Create(this, _T("&Delete"), 785, 390, 855, 415);
	m_wndSave.Create(this, _T("&Save"), 860, 390, 930, 415);
	m_wndCancel.Create(this, _T("&Cancel"), 935, 390, 1005, 415);
	m_wndList.Create(this,10, 30, 355, 415); 
	m_wndSearchTab.Create(this,10, 420, 355, 700); 
	m_wndAssetTab.Create(this,370, 420, 1010, 700);

	//m_wndAssetType.Create(&m_wndSearchTab);
	//m_wndTemp.Create(&m_wndSearchTab);
	m_wndAssetType.Create(&m_wndSearchTab);
	m_wndAssetDept.Create(&m_wndSearchTab);
	m_wndImage.Create(&m_wndAssetTab, 5, 5, 630, 250);
	m_wndAssetDeprec.Create(&m_wndAssetTab);
	m_wndAssetMaint.Create(&m_wndAssetTab);
	m_wndAssetNote.Create(&m_wndAssetTab);
	m_wndAttachment.Create(&m_wndAssetTab);
	m_wndUsageProcess.Create(&m_wndAssetTab);

	m_wndSearchTab.Add(_T("Type"), &m_wndAssetType);
	m_wndSearchTab.Add(_T("Department"), &m_wndAssetDept);
	m_wndAssetTab.Add(_T("Image"), &m_wndImage);
	m_wndAssetTab.Add(_T("Depreciation"), &m_wndAssetDeprec);
	m_wndAssetTab.Add(_T("Maintenance"), &m_wndAssetMaint);
	m_wndAssetTab.Add(_T("Attachment"), &m_wndAttachment);
	m_wndAssetTab.Add(_T("Note"), &m_wndAssetNote);
	m_wndAssetTab.Add(_T("Usage Process"), &m_wndUsageProcess);

}
void CFAMAsset::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndAssetNumber.SetLimitText(15);
	m_wndAssetNumber.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndPurchaseNumber.SetLimitText(15);
	m_wndPurchaseNumber.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	//m_wndCategory.LimitText(7);
	m_wndVendor.SetCheckValue(true);
	m_wndVendor.LimitText(15);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	m_wndPurchaseDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPurchaseDate.SetCheckValue(true);
	m_wndLocation.SetLimitText(35);
	//m_wndLocation.SetCheckValue(true);
	m_wndInService.SetMax(CDate(pMF->GetSysDate()));
	//m_wndInService.SetCheckValue(true);
	m_wndSubLocation.LimitText(7);
	m_wndSubLocation.SetCheckValue(true);
	m_wndPurchasePrice.SetLimitText(1048578);
	m_wndPurchasePrice.SetCheckValue(true);
	m_wndEmployee.SetLimitText(15);
	m_wndEmployee.SetCheckValue(true);
	m_wndCurrentDeprValue.SetLimitText(1048578);
	m_wndCurrentDeprValue.SetCheckValue(true);
	m_wndManufacture.SetLimitText(35);
	m_wndManufacture.SetCheckValue(true);
	m_wndCurrentValue.SetLimitText(1048578);
	m_wndCurrentValue.SetCheckValue(true);
	m_wndBrand.SetLimitText(35);
	m_wndBrand.SetCheckValue(true);
	m_wndSalvage.SetLimitText(1);
	m_wndSalvage.SetCheckValue(true);
	m_wndModel.SetLimitText(35);
	m_wndModel.SetCheckValue(true);
	m_wndSerial.SetLimitText(15);
	m_wndSerial.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndCondition.SetCheckValue(true);
	m_wndCondition.LimitText(1);
	m_wndSearchTab.SetCurSel(0);
	m_wndAssetTab.SetCurSel(4);
	m_wndUnit.SetLimitText(15);
	m_wndUnit.SetCheckValue(true);

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVendor.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSubLocation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSubLocation.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndCondition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCondition.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);

	m_fam_assetTbl.SetTableName(_T("fam_asset"));
	m_fam_assetTbl.AddField(_T("fa_createdby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_createddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_updatedby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_updateddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_assetno"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_name"), dfText, 254); 
	m_fam_assetTbl.AddField(_T("fa_category"), dfLong); 
	m_fam_assetTbl.AddField(_T("fa_type"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_location"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_department"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("fa_employee"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_manufacture"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_brand"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_model"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_serial"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_barcode"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_status"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_condition"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_duedate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_accountcode"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_ponumber"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_vendor"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_purchasedate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_inservicedate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_outservicedate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_purchaseprice"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_currentvalue"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_depreciation"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_salvage"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_note"), dfText, 1024); 
	m_fam_assetTbl.AddField(_T("fa_method"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_year"), dfLong); 
	m_fam_assetTbl.AddField(_T("fa_nextschedmaint"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_unit"), dfText, 15);
}
void CFAMAsset::OnSetWindowEvents(){
	//m_wndAssetNumber.SetEvent(WE_CHANGE, _OnAssetNumberChangeFnc);
	//m_wndAssetNumber.SetEvent(WE_SETFOCUS, _OnAssetNumberSetfocusFnc);
	//m_wndAssetNumber.SetEvent(WE_KILLFOCUS, _OnAssetNumberKillfocusFnc);
	m_wndAssetNumber.SetEvent(WE_CHECKVALUE, _OnAssetNumberCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndPurchaseNumber.SetEvent(WE_CHANGE, _OnPurchaseNumberChangeFnc);
	//m_wndPurchaseNumber.SetEvent(WE_SETFOCUS, _OnPurchaseNumberSetfocusFnc);
	//m_wndPurchaseNumber.SetEvent(WE_KILLFOCUS, _OnPurchaseNumberKillfocusFnc);
	m_wndPurchaseNumber.SetEvent(WE_CHECKVALUE, _OnPurchaseNumberCheckValueFnc);
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndPurchaseDate.SetEvent(WE_CHANGE, _OnPurchaseDateChangeFnc);
	//m_wndPurchaseDate.SetEvent(WE_SETFOCUS, _OnPurchaseDateSetfocusFnc);
	m_wndPurchaseDate.SetEvent(WE_KILLFOCUS, _OnPurchaseDateKillfocusFnc);
	m_wndPurchaseDate.SetEvent(WE_CHECKVALUE, _OnPurchaseDateCheckValueFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	//m_wndInService.SetEvent(WE_CHANGE, _OnInServiceChangeFnc);
	m_wndInService.SetEvent(WE_SETFOCUS, _OnInServiceSetfocusFnc);
	m_wndInService.SetEvent(WE_KILLFOCUS, _OnInServiceKillfocusFnc);
	m_wndInService.SetEvent(WE_CHECKVALUE, _OnInServiceCheckValueFnc);
	m_wndSubLocation.SetEvent(WE_LOADDATA, _OnSubLocationLoadDataFnc);
	//m_wndSubLocation.SetEvent(WE_SETFOCUS, _OnSubLocationSetfocusFnc);
	//m_wndSubLocation.SetEvent(WE_KILLFOCUS, _OnSubLocationKillfocusFnc);
	m_wndSubLocation.SetEvent(WE_SELENDOK, _OnSubLocationSelendokFnc);
	m_wndSubLocation.SetEvent(WE_SELCHANGE, _OnSubLocationSelectChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	//m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	//m_wndEmployee.SetEvent(WE_CHANGE, _OnEmployeeChangeFnc);
	//m_wndEmployee.SetEvent(WE_SETFOCUS, _OnEmployeeSetfocusFnc);
	//m_wndEmployee.SetEvent(WE_KILLFOCUS, _OnEmployeeKillfocusFnc);
	m_wndEmployee.SetEvent(WE_CHECKVALUE, _OnEmployeeCheckValueFnc);
	//m_wndCurrentDeprValue.SetEvent(WE_CHANGE, _OnCurrentDeprValueChangeFnc);
	//m_wndCurrentDeprValue.SetEvent(WE_SETFOCUS, _OnCurrentDeprValueSetfocusFnc);
	//m_wndCurrentDeprValue.SetEvent(WE_KILLFOCUS, _OnCurrentDeprValueKillfocusFnc);
	m_wndCurrentDeprValue.SetEvent(WE_CHECKVALUE, _OnCurrentDeprValueCheckValueFnc);
	//m_wndManufacture.SetEvent(WE_CHANGE, _OnManufactureChangeFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_CHECKVALUE, _OnManufactureCheckValueFnc);
	//m_wndCurrentValue.SetEvent(WE_CHANGE, _OnCurrentValueChangeFnc);
	//m_wndCurrentValue.SetEvent(WE_SETFOCUS, _OnCurrentValueSetfocusFnc);
	//m_wndCurrentValue.SetEvent(WE_KILLFOCUS, _OnCurrentValueKillfocusFnc);
	m_wndCurrentValue.SetEvent(WE_CHECKVALUE, _OnCurrentValueCheckValueFnc);
	//m_wndBrand.SetEvent(WE_CHANGE, _OnBrandChangeFnc);
	//m_wndBrand.SetEvent(WE_SETFOCUS, _OnBrandSetfocusFnc);
	//m_wndBrand.SetEvent(WE_KILLFOCUS, _OnBrandKillfocusFnc);
	m_wndBrand.SetEvent(WE_CHECKVALUE, _OnBrandCheckValueFnc);
	//m_wndSalvage.SetEvent(WE_CHANGE, _OnSalvageChangeFnc);
	//m_wndSalvage.SetEvent(WE_SETFOCUS, _OnSalvageSetfocusFnc);
	//m_wndSalvage.SetEvent(WE_KILLFOCUS, _OnSalvageKillfocusFnc);
	m_wndSalvage.SetEvent(WE_CHECKVALUE, _OnSalvageCheckValueFnc);
	//m_wndModel.SetEvent(WE_CHANGE, _OnModelChangeFnc);
	//m_wndModel.SetEvent(WE_SETFOCUS, _OnModelSetfocusFnc);
	//m_wndModel.SetEvent(WE_KILLFOCUS, _OnModelKillfocusFnc);
	m_wndModel.SetEvent(WE_CHECKVALUE, _OnModelCheckValueFnc);
	//m_wndSerial.SetEvent(WE_CHANGE, _OnSerialChangeFnc);
	//m_wndSerial.SetEvent(WE_SETFOCUS, _OnSerialSetfocusFnc);
	//m_wndSerial.SetEvent(WE_KILLFOCUS, _OnSerialKillfocusFnc);
	m_wndSerial.SetEvent(WE_CHECKVALUE, _OnSerialCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.SetWindowText(_T("Asset"));
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndCondition.SetEvent(WE_SELENDOK, _OnConditionSelendokFnc);
	//m_wndCondition.SetEvent(WE_SETFOCUS, _OnConditionSetfocusFnc);
	m_wndCondition.SetEvent(WE_KILLFOCUS, _OnConditionKillfocusFnc);
	m_wndCondition.SetEvent(WE_SELCHANGE, _OnConditionSelectChangeFnc);
	m_wndCondition.SetEvent(WE_LOADDATA, _OnConditionLoadDataFnc);
	//m_wndCondition.SetEvent(WE_ADDNEW, _OnConditionAddNewFnc);
	m_wndSearchTab.SetEvent(WE_SELCHANGE, _OnSearchTabSelectChangeFnc);
	m_wndAssetTab.SetEvent(WE_SELCHANGE, _OnAssetTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);

	SetWindowText(_T("Asset Information"));
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAMAssetFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAMAssetFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAMAssetFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAMAssetFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAMAssetFnc, 0, 'T', VK_CONTROL);

	m_isDeposed = false;
	m_nIndex = -1;
	m_szOStatus = _T("O");
	m_szType = _T("E");
	SetMode(VM_NONE);
	OnListLoadData();

}
void CFAMAsset::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAssetNumber.GetDlgCtrlID(), m_szAssetNumber);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndPurchaseNumber.GetDlgCtrlID(), m_szPurchaseNumber);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndPurchaseDate.GetDlgCtrlID(), m_szPurchaseDate);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_TextEx(pDX, m_wndInService.GetDlgCtrlID(), m_szInService);
	DDX_TextEx(pDX, m_wndSubLocation.GetDlgCtrlID(), m_szSubLocation);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_Text(pDX, m_wndEmployee.GetDlgCtrlID(), m_szEmployee);
	DDX_Text(pDX, m_wndCurrentDeprValue.GetDlgCtrlID(), m_nCurrentDeprValue);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);
	DDX_Text(pDX, m_wndCurrentValue.GetDlgCtrlID(), m_nCurrentValue);
	DDX_Text(pDX, m_wndBrand.GetDlgCtrlID(), m_szBrand);
	DDX_Text(pDX, m_wndSalvage.GetDlgCtrlID(), m_nSalvage);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndSerial.GetDlgCtrlID(), m_szSerial);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndCondition.GetDlgCtrlID(), m_szConditionKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
}
void CFAMAsset::GetDataToScreen(){
	//MessageBox(_T("OK"));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_asset WHERE fa_assetno='%s' "), m_szAssetNumber);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		pMF->m_szAssetNo = m_szAssetNumber;
		rs.GetValue(_T("fa_name"), m_szName);
		rs.GetValue(_T("fa_category"), m_szCategoryKey);
		rs.GetValue(_T("fa_type"), m_szTypeKey);
		rs.GetValue(_T("fa_location"), m_szLocation);
		rs.GetValue(_T("fa_department"), m_szSubLocation);
		rs.GetValue(_T("fa_employee"), m_szEmployee);
		rs.GetValue(_T("fa_manufacture"), m_szManufacture);
		rs.GetValue(_T("fa_brand"), m_szBrand);
		rs.GetValue(_T("fa_model"), m_szModel);
		rs.GetValue(_T("fa_serial"), m_szSerial);
		rs.GetValue(_T("fa_status"), m_szStatusKey);
		rs.GetValue(_T("fa_condition"), m_szConditionKey);
		rs.GetValue(_T("fa_ponumber"), m_szPurchaseNumber);
		rs.GetValue(_T("fa_vendor"), m_szVendorKey);
		rs.GetValue(_T("fa_purchasedate"), m_szPurchaseDate);
		rs.GetValue(_T("fa_inservicedate"), m_szInService);
		rs.GetValue(_T("fa_purchaseprice"), m_nPurchasePrice);
		rs.GetValue(_T("fa_currentvalue"), m_nCurrentValue);
		rs.GetValue(_T("fa_depreciation"), m_nCurrentDeprValue);
		rs.GetValue(_T("fa_salvage"), m_nSalvage);
		rs.GetValue(_T("fa_unit"), m_szUnit);
		pMF->m_nCost = m_nPurchasePrice;
		pMF->m_nCurValue = m_nCurrentValue;
		pMF->m_szCategory = m_szCategoryKey;
		pMF->m_szPurchaseDate = m_szPurchaseDate;
		pMF->m_szInService = m_szInService;
		pMF->m_szStatus = m_szStatusKey;
		//pMF->m_nSalvag = m_nSalvage;
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CFAMAsset::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_assetTbl.SetValue(_T("fa_createdby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_createddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("fa_updatedby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_updateddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("fa_assetno"), m_szAssetNumber);
	m_fam_assetTbl.SetValue(_T("fa_name"), m_szName);
	m_fam_assetTbl.SetValue(_T("fa_category"), m_szCategoryKey);
	m_fam_assetTbl.SetValue(_T("fa_type"), m_szTypeKey);
	m_fam_assetTbl.SetValue(_T("fa_location"), m_szLocation);
	m_fam_assetTbl.SetValue(_T("fa_department"), m_szSubLocation);
	m_fam_assetTbl.SetValue(_T("fa_employee"), m_szEmployee);
	m_fam_assetTbl.SetValue(_T("fa_manufacture"), m_szManufacture);
	m_fam_assetTbl.SetValue(_T("fa_brand"), m_szBrand);
	m_fam_assetTbl.SetValue(_T("fa_model"), m_szModel);
	m_fam_assetTbl.SetValue(_T("fa_serial"), m_szSerial);
	m_fam_assetTbl.SetValue(_T("fa_status"), m_szStatusKey);
	m_fam_assetTbl.SetValue(_T("fa_condition"), m_szConditionKey);
	m_fam_assetTbl.SetValue(_T("fa_ponumber"), m_szPurchaseNumber);
	m_fam_assetTbl.SetValue(_T("fa_vendor"), m_szVendorKey);
	m_fam_assetTbl.SetValue(_T("fa_purchasedate"), m_szPurchaseDate);
	m_fam_assetTbl.SetValue(_T("fa_inservicedate"), m_szInService);
	m_fam_assetTbl.SetValue(_T("fa_purchaseprice"), m_nPurchasePrice);
	m_fam_assetTbl.SetValue(_T("fa_currentvalue"), m_nCurrentValue);
	m_fam_assetTbl.SetValue(_T("fa_depreciation"), m_nCurrentDeprValue);
	m_fam_assetTbl.SetValue(_T("fa_salvage"), m_nSalvage);
	m_fam_assetTbl.SetValue(_T("fa_unit"), m_szUnit);
}

void CFAMAsset::SetDefaultValues(){

	m_szAssetNumber.Empty();
	m_szName.Empty();
	m_szPurchaseNumber.Empty();
	m_szCategoryKey.Empty();
	m_szVendorKey.Empty();
	m_szTypeKey.Empty();
	m_szPurchaseDate.Empty();
	m_szLocation.Empty();
	m_szInService.Empty();
	m_szSubLocation.Empty();
	m_nPurchasePrice=0;
	m_szEmployee.Empty();
	m_nCurrentDeprValue=0;
	m_szManufacture.Empty();
	m_nCurrentValue=0;
	m_szBrand.Empty();
	m_nSalvage=0;
	m_szModel.Empty();
	m_szSerial.Empty();
	m_szStatusKey.Empty();
	m_szConditionKey.Empty();
	m_szUnit.Empty();
}
int CFAMAsset::SetMode(int nMode)
{
		CString strTemp;
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
			m_wndList.ModifyStyle(WS_TABSTOP, 0);
			m_wndSearchTab.ModifyStyle(WS_TABSTOP, 0);
			m_wndImage.ModifyStyle(WS_TABSTOP, 0);
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndCurrentValue.EnableWindow(false);
			m_wndCurrentDeprValue.EnableWindow(false);
			m_wndSalvage.EnableWindow(false);
 			SetDefaultValues(); 
			m_wndAssetNumber.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndAssetNumber.EnableWindow(false);
			m_wndCurrentValue.EnableWindow(false);
			m_wndCurrentDeprValue.EnableWindow(false);
			m_wndSalvage.EnableWindow(false);
			m_wndAssetInformation.SetFocus();
			m_wndName.SetFocus();
			m_wndName.GetWindowText(strTemp);
			m_wndName.SetSel(0, strTemp.GetLength());
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
			if (m_nSalvage > 0)
			{
				m_isDeposed = true;
				EnableButtons(FALSE, 0, 1, 2, 3, 4, 5, 6, -1);
			}
			else
			{
				//MessageBox(m_szAssetNumber);
				szSQL.Format(_T("Select Count(*) From fam_usingprocess Where faup_assetno='%s' And faup_type='%s'"), 
					         m_szAssetNumber, m_szType);
				rs.ExecSQL(szSQL);
				int nCount = rs.GetIntValue();
				if (nCount > 0)
				{
					m_isDeposed = true;
					EnableButtons(FALSE, 0, 1, 2, 3, 4, 5, 6, -1);
				}
				else
				{
					m_isDeposed = false;
 					EnableButtons(FALSE, 3, 4, -1); 
				}
			}
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


/*void CFAMAsset::OnAssetNumberChange(){
	
} */
/*void CFAMAsset::OnAssetNumberSetfocus(){
	
} */
/*void CFAMAsset::OnAssetNumberKillfocus(){
	
} */
int CFAMAsset::OnAssetNumberCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("SELECT count(*) FROM fam_asset WHERE fa_assetno='%s' "), m_szAssetNumber);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndAssetNumber.SetToolTipMessage(_T("This asset is existing on the database"));
			return -1;
		}
	}

	return 0;
} 
/*void CFAMAsset::OnNameChange(){
	
} */
/*void CFAMAsset::OnNameSetfocus(){
	
} */
/*void CFAMAsset::OnNameKillfocus(){
	
} */
int CFAMAsset::OnNameCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnPurchaseNumberChange(){
	
} */
/*void CFAMAsset::OnPurchaseNumberSetfocus(){
	
} */
/*void CFAMAsset::OnPurchaseNumberKillfocus(){
	
} */
int CFAMAsset::OnPurchaseNumberCheckValue()
{
	if (GetMode() == VM_ADD)
	{
		CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("Select Count(*) From fam_asset Where fa_ponumber='%s'"), m_szPurchaseNumber);
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() > 0)
		{
			m_wndPurchaseNumber.SetToolTipMessage(_T("This purchase number is existing on the database"));
			return -1;
		}
	}
	return 0;
} 
void CFAMAsset::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnCategorySelendok(){
	 
}
/*void CFAMAsset::OnCategorySetfocus(){
	
}*/
/*void CFAMAsset::OnCategoryKillfocus(){
	
}*/
long CFAMAsset::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
		//szWhere.Format(_T(" and ss_code='%s' "), ToString(m_nCategoryKey));
	};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_idx as id, famc_name as name FROM fam_category ORDER BY famc_idx"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAsset::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnVendorSelendok(){
	 
}
/*void CFAMAsset::OnVendorSetfocus(){
	
}*/
/*void CFAMAsset::OnVendorKillfocus(){
	
}*/
long CFAMAsset::OnVendorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVendor.IsSearchKey() && !m_szVendorKey.IsEmpty()){
		szWhere.Format(_T(" WHERE fav_id='%s' "), m_szVendorKey);
	};
	m_wndVendor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fav_id as id, fav_name as name FROM fam_vendor %s ORDER BY fav_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVendor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnVendorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAsset::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnTypeSelendok(){
	 
}
/*void CFAMAsset::OnTypeSetfocus(){
	
}*/
/*void CFAMAsset::OnTypeKillfocus(){
	
}*/
long CFAMAsset::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='fam_type' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAsset::OnPurchaseDateChange(){
	
} */
/*void CFAMAsset::OnPurchaseDateSetfocus(){
	
} */
void CFAMAsset::OnPurchaseDateKillfocus()
{
	CString szDate = _T("");
	CStringArray szStrArray;
	StringSplit(m_szPurchaseDate, szStrArray, _T('/'));
	if (szStrArray.GetSize() == 3)
	{
		szDate.Format(_T("%s/%s/%s"), szStrArray[2], szStrArray[1], szStrArray[0]);  
		m_wndInService.SetWindowText(szDate);
	}
}
int CFAMAsset::OnPurchaseDateCheckValue()
{
	return 0;
} 
/*void CFAMAsset::OnLocationChange(){
	
} */
/*void CFAMAsset::OnLocationSetfocus(){
	
} */
/*void CFAMAsset::OnLocationKillfocus(){
	
} */
int CFAMAsset::OnLocationCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnInServiceChange(){
	
} */
void CFAMAsset::OnInServiceSetfocus()
{
	//MessageBox(_T("Set Focus"));
	
}
void CFAMAsset::OnInServiceKillfocus()
{
	//MessageBox(_T("Kill Focus"));
}
int CFAMAsset::OnCheckInServiceDate()
{
	//UpdateData(TRUE);
	////MessageBox(m_szStatusKey);
	//if (m_szStatusKey == "O")
	//	return -1;
	//if (CompareDate(m_szPurchaseDate, m_szInService) > 0)
	//{
	//	m_wndInService.SetToolTipMessage(_T("InService Date must be greater than or equal to Purchase Date"));
	//	return -1;
	//}
	return 0;
}
int CFAMAsset::OnInServiceCheckValue()
{
	//UpdateData(TRUE);
	////MessageBox(m_szStatusKey);
	//if (m_szStatusKey == "O")
		//return -1;
	if (CompareDate(m_szPurchaseDate, m_szInService) > 0)
	{
		m_wndInService.SetToolTipMessage(_T("This value must be greater than or equal to Purchase Date"));
		return -1;
	}
	return 0;
}
void CFAMAsset::OnSubLocationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnSubLocationSelendok()
{
}
/*void CFAMAsset::OnSubLocationChange(){
	
} */
/*void CFAMAsset::OnSubLocationSetfocus(){
	
} */
/*void CFAMAsset::OnSubLocationKillfocus(){
	
} */
//int CFAMAsset::OnSubLocationCheckValue(){
	//return 0;
//}
long CFAMAsset::OnSubLocationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSubLocation.IsSearchKey() && !m_szSubLocation.IsEmpty()){
		//szWhere.Format(_T(" and ss_code='%s' "), m_szSubLocation);
	};
	m_wndSubLocation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSubLocation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnPurchasePriceChange(){
	
} */
/*void CFAMAsset::OnPurchasePriceSetfocus(){
	
} */
/*void CFAMAsset::OnPurchasePriceKillfocus(){
	
} */
int CFAMAsset::OnPurchasePriceCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnEmployeeChange(){
	
} */
/*void CFAMAsset::OnEmployeeSetfocus(){
	
} */
/*void CFAMAsset::OnEmployeeKillfocus(){
	
} */
int CFAMAsset::OnEmployeeCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnCurrentDeprValueChange(){
	
} */
/*void CFAMAsset::OnCurrentDeprValueSetfocus(){
	
} */
/*void CFAMAsset::OnCurrentDeprValueKillfocus(){
	
} */
int CFAMAsset::OnCurrentDeprValueCheckValue()
{
	/*UpdateData(true);
	if (m_nCurrentDeprValue >= m_nPurchasePrice)
	{
		m_wndCurrentDeprValue.SetToolTipMessage(_T("This value must be less than the Purchase Price value"));
		return -1;
	}*/
	return 0;
} 
/*void CFAMAsset::OnManufactureChange(){
	
} */
/*void CFAMAsset::OnManufactureSetfocus(){
	
} */
/*void CFAMAsset::OnManufactureKillfocus(){
	
} */
int CFAMAsset::OnManufactureCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnCurrentValueChange(){
	
} */
/*void CFAMAsset::OnCurrentValueSetfocus(){
	
} */
/*void CFAMAsset::OnCurrentValueKillfocus(){
	
} */
int CFAMAsset::OnCurrentValueCheckValue()
{
	/*UpdateData(TRUE);
	if (m_nPurchasePrice - m_nCurrentDeprValue != m_nCurrentValue)
	{
		m_wndCurrentDeprValue.SetToolTipMessage(_T("This value = Purchase Price value - Current Depreciation value"));
		return -1;
	}*/
	return 0;
} 
/*void CFAMAsset::OnBrandChange(){
	
} */
/*void CFAMAsset::OnBrandSetfocus(){
	
} */
/*void CFAMAsset::OnBrandKillfocus(){
	
} */
int CFAMAsset::OnBrandCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnSalvageChange(){
	
} */
/*void CFAMAsset::OnSalvageSetfocus(){
	
} */
/*void CFAMAsset::OnSalvageKillfocus(){
	
} */
int CFAMAsset::OnSalvageCheckValue()
{
	/*UpdateData(true);
	if (m_nCurrentValue > 0 && m_nSalvage >= m_nCurrentValue)
	{
		m_wndSalvage.SetToolTipMessage(_T("This value must be less than Current value"));
		return -1;
	}
	else if (m_nCurrentValue == 0 && m_nSalvage >= m_nPurchasePrice)
	{
		m_wndSalvage.SetToolTipMessage(_T("This value must be less than Purchase Price value"));
		return -1;
	}*/
	return 0;
} 
/*void CFAMAsset::OnModelChange(){
	
} */
/*void CFAMAsset::OnModelSetfocus(){
	
} */
/*void CFAMAsset::OnModelKillfocus(){
	
} */
int CFAMAsset::OnModelCheckValue(){
	return 0;
} 
/*void CFAMAsset::OnSerialChange(){
	
} */
/*void CFAMAsset::OnSerialSetfocus(){
	
} */
/*void CFAMAsset::OnSerialKillfocus(){
	
} */
int CFAMAsset::OnSerialCheckValue(){
	return 0;
} 
void CFAMAsset::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnStatusSelendok()
{
	//UpdateData(TRUE);
	/*if (m_szStatusKey == m_szOStatus)
		m_wndInService.SetCheckValue(false);
	else
		m_wndInService.SetCheckValue(true);*/
}
void CFAMAsset::OnStatusSetfocus(){
	
}
void CFAMAsset::OnStatusKillfocus()
{
	
}
long CFAMAsset::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='fam_status' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAsset::OnListDblClick(){
	
} 
void CFAMAsset::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szAssetNumber = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	//m_nIndex = nNewItem;
	/*UpdateData(TRUE);
	if (m_nSalvage > 0)
	{
		m_isDeposed = true;
		SetMode(VM_VIEW);
		return;
	}
	else
		m_isDeposed = false;*/
	/*switch (m_wndAssetTab.GetCurSel())
	{
		case 0:
			m_wndAssetDeprec.OnDeprecListLoadData();
			break;
		case 1:
			m_wndAssetMaint.OnMaintenListLoadData();
			break;
		case 2:
			m_wndAttachment.OnAttachListLoadData();
			break;
		case 3:
			if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
				m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(FALSE);
			else
				m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(TRUE);
			m_wndAssetNote.SetFocus();
			m_wndAssetNote.m_wndtxtNote.SetFocus();
			m_wndAssetNote.m_wndtxtNote.SetSel(0, -1);
			m_wndAssetNote.OntxtNoteLoadData();
			break;
		case 4:
			m_wndUsageProcess.OnUsageProcessListLoadData();
			break;
	}*/
	m_wndAssetDeprec.OnDeprecListLoadData();
	m_wndAssetMaint.OnMaintenListLoadData();
	m_wndAttachment.OnAttachListLoadData();
	m_wndAssetNote.OntxtNoteLoadData();
	m_wndUsageProcess.OnUsageProcessListLoadData();
	if (m_wndAssetTab.GetCurSel() == 3)
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(FALSE);
		else
			m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(TRUE);
		m_wndAssetNote.SetFocus();
		m_wndAssetNote.m_wndtxtNote.SetFocus();
		m_wndAssetNote.m_wndtxtNote.SetSel(0, -1);
	}
	//CString msg;
	//m_wndInService.GetWindowText(msg);
} 
int CFAMAsset::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMAsset();
	return 0;
} 
long CFAMAsset::OnListLoadData()
{
	//CString msg;
	////m_wndSearchTab.GetWindowText(msg);
	//msg.Format(_T("%s"), m_wndAssetDept.isSelected);
	//MessageBox(msg);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
/*
	if (m_wndAssetType.szType == "" && m_wndAssetDept.szDept == "")
		szSQL.Format(_T("SELECT * FROM fam_asset ORDER BY fa_assetno"));
	else if (m_wndAssetType.szType != "" && m_wndAssetType.isSelected)
		szSQL.Format(_T("SELECT * FROM fam_asset WHERE fa_type='%s' ORDER BY fa_assetno"), m_wndAssetType.szType);
	else if (m_wndAssetDept.szDept != "" && m_wndAssetType.isSelected == false)
	{
		//MessageBox(m_wndAssetDept.szDept);
 		szSQL.Format(_T("SELECT * FROM fam_asset WHERE fa_department='%s' ORDER BY fa_assetno"), m_wndAssetDept.szDept);
	}
*/
	if(m_wndSearchTab.GetCurSel() == 0)
		szWhere.Format(_T(" and fa_type='%s' "), m_wndAssetType.m_szType);
	else if (m_wndSearchTab.GetCurSel() == 1)
		szWhere.Format(_T(" and fa_department='%s' "), m_wndAssetDept.m_szDept);
	else
		szWhere.Format(_T(" and 0=1 "));
	szSQL.Format(_T("SELECT * FROM fam_asset WHERE 1=1 %s ORDER BY fa_assetno"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("fa_assetno")), 
			rs.GetValue(_T("fa_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	//pMF->m_szAssetNo = m_szAssetNumber;
	return nCount;

}
void CFAMAsset::OnConditionSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
void CFAMAsset::OnConditionSelendok(){
	 
}
/*void CFAMAsset::OnConditionSetfocus(){
	
}*/
void CFAMAsset::OnConditionKillfocus()
{
	//if (m_szStatusKey == "O")
	//{
	//	//MessageBox(_T("F"));
	//	m_wndInService.SetCheckValue(false);
	//}
	//else
	//{
	//	//MessageBox(_T("T"));
	//	m_wndInService.SetCheckValue(true);
	//}
}
long CFAMAsset::OnConditionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCondition.IsSearchKey() && !m_szConditionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szConditionKey);
	};
	m_wndCondition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='fam_condition' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCondition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAsset::OnConditionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAsset::OnUnitChange(){
	
} */
/*void CFAMAsset::OnUnitSetfocus(){
	
} */
/*void CFAMAsset::OnUnitKillfocus(){
	
} */
int CFAMAsset::OnUnitCheckValue(){
	return 0;
} 
void CFAMAsset::OnSearchTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew < 0)
		return;
	if (nNew == 0 && m_wndAssetType.m_TypeIndex >= 0)
	{
		//m_wndAssetType.m_wndTypeList.SetFocus();
		m_wndAssetType.m_wndTypeList.SetCurSel(m_wndAssetType.m_TypeIndex);
	}
	else if (nNew == 1 && m_wndAssetDept.m_DeptIndex >= 0)
	{
		//m_wndAssetDept.m_wndDeptList.SetFocus();
		m_wndAssetDept.m_wndDeptList.SetCurSel(m_wndAssetDept.m_DeptIndex);
	}
} 
void CFAMAsset::OnAssetTabSelectChange(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew < 0)
		return;
	if (nNew == 3)
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(FALSE);
		else
			m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(TRUE);
		m_wndAssetNote.SetFocus();
		m_wndAssetNote.m_wndtxtNote.SetFocus();
		m_wndAssetNote.m_wndtxtNote.SetSel(0, -1);
	}
	/*m_szAssetNumber = m_wndList.GetItemText(m_nIndex, 0);
	switch (m_nIndex)
	{
		case 0:
			m_wndAssetDeprec.OnDeprecListLoadData();
			break;
		case 1:
			m_wndAssetMaint.OnMaintenListLoadData();
			break;
		case 2:
			m_wndAttachment.OnAttachListLoadData();
			break;
		case 3:
			if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
				m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(FALSE);
			else
				m_wndAssetNote.m_wndbtnUpdateNote.EnableWindow(TRUE);
			m_wndAssetNote.SetFocus();
			m_wndAssetNote.m_wndtxtNote.SetFocus();
			m_wndAssetNote.m_wndtxtNote.SetSel(0, -1);
			m_wndAssetNote.OntxtNoteLoadData();
			break;
		case 4:
			m_wndUsageProcess.OnUsageProcessListLoadData();
			break;
	}*/
} 
void CFAMAsset::OnImageSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAsset::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMAsset();
} 
void CFAMAsset::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMAsset();
} 
void CFAMAsset::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMAsset();
} 
void CFAMAsset::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAsset();
} 
void CFAMAsset::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMAsset();
} 
int CFAMAsset::OnAddFAMAsset(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAsset::OnEditFAMAsset(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAsset::OnDeleteFAMAsset(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	/*{
		int m_Index = m_wndList.GetCurSel();
		if (m_Index < 0)
			return -1;
	}*/
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	//CRecord rs(&pMF->m_db);
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_asset WHERE fa_assetno='%s'"), m_szAssetNumber); 
 	int ret = pMF->ExecSQL(szSQL); 
	//int ret = rs.ExecSQL(szSQL);
	//_msg(_T("%d"), ret);
 	if(ret >= 0)
	{ 
		//MessageBox(_T("OK"));
		if (m_wndList.GetItemCount() > 0)
			OnListLoadData();
 		SetMode(VM_NONE); 
 		OnCancelFAMAsset();
		//m_wndList.DeleteItem(m_Index);
 	}
	else
		ShowMessageBox(_T("Can not delete this record. Maybe violates foreign key constraint"), MB_OK|MB_ICONERROR);
	return 0;
}
int CFAMAsset::OnSaveFAMAsset(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_fam_assetTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
		//if (OnCheckInServiceDate() == -1)
		//{
			//MessageBox(_T("OK"));
			//m_wndInService.SetToolTipMessage(_T("InService Date must be greater than or equal to Purchase Date"));
			//return -1;
		//}
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE fa_assetno='%s' "), m_szAssetNumber); 
 		szSQL = m_fam_assetTbl.GetUpdateSQL(_T("fa_createdby, fa_createddate, fa_updatedby, fa_updateddate, fa_assetno")); 
 		szSQL += szWhere; 
 	} 
	
	_fmsg(_T("%s"), szSQL);
	//MessageBox(m_szStatusKey);
	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		//m_wndAssetInformation.SetFocus();
		//m_wndAdd.SetState(true);
 		OnListLoadData();
 		SetMode(VM_VIEW); 
		m_wndAssetInformation.SetFocus();
		m_wndAdd.SetFocus();
 	} 
 	//else 
 	//{ 
 	//} d
 	return ret; 
 	//return 0; 
}
int CFAMAsset::OnCancelFAMAsset(){
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
int CFAMAsset::OnFAMAssetListLoadData(){
	return 0;
}
