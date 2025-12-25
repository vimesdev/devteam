#include "GlassProductDialog.h"
#include "MainFrm.h"
static void _OnProductTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnProductTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductTypeSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductTypeSelendok();
}
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductTypeKillfocus();
}*/
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductTypeKillfocus();
}*/
static long _OnProductTypeLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnProductTypeLoadData();
}
/*static void _OnProductTypeAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductTypeAddNew();
}*/
static void _OnProductCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnProductCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCategorySelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCategorySelendok();
}
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCategoryKillfocus();
}*/
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCategoryKillfocus();
}*/
static long _OnProductCategoryLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnProductCategoryLoadData();
}
/*static void _OnProductCategoryAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCategoryAddNew();
}*/
/*static void _OnProductCodeChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCodeChange();
} */
/*static void _OnProductCodeSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCodeSetfocus();} */ 
/*static void _OnProductCodeKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductCodeKillfocus();
} */
static int _OnProductCodeCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnProductCodeCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnProductNameChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductNameChange();
} */
/*static void _OnProductNameSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductNameSetfocus();} */ 
/*static void _OnProductNameKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnProductNameKillfocus();
} */
static int _OnProductNameCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnProductNameCheckValue();
} 
static void _OnUomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnUomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUomSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUomSelendok();
}
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUomKillfocus();
}*/
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUomKillfocus();
}*/
static long _OnUomLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnUomLoadData();
}
/*static void _OnUomAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUomAddNew();
}*/
static void _OnMfgSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnMfgSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMfgSelendok();
}
/*static void _OnMfgSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMfgKillfocus();
}*/
/*static void _OnMfgKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMfgKillfocus();
}*/
static long _OnMfgLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnMfgLoadData();
}
/*static void _OnMfgAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMfgAddNew();
}*/
/*static void _OnOriginChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnOriginChange();
} */
/*static void _OnOriginSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnOriginSetfocus();} */ 
/*static void _OnOriginKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnOriginKillfocus();
} */
static int _OnOriginCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnOriginCheckValue();
} 
static void _OnMaterialSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnMaterialSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMaterialSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMaterialSelendok();
}
/*static void _OnMaterialSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMaterialKillfocus();
}*/
/*static void _OnMaterialKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMaterialKillfocus();
}*/
static long _OnMaterialLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnMaterialLoadData();
}
/*static void _OnMaterialAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnMaterialAddNew();
}*/
static void _OnAttributeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnAttributeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAttributeSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnAttributeSelendok();
}
/*static void _OnAttributeSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnAttributeKillfocus();
}*/
/*static void _OnAttributeKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnAttributeKillfocus();
}*/
static long _OnAttributeLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnAttributeLoadData();
}
/*static void _OnAttributeAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnAttributeAddNew();
}*/
static void _OnColorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnColorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnColorSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnColorSelendok();
}
/*static void _OnColorSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnColorKillfocus();
}*/
/*static void _OnColorKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnColorKillfocus();
}*/
static long _OnColorLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnColorLoadData();
}
/*static void _OnColorAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnColorAddNew();
}*/
/*static void _OnGuaranteeDaysChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeDaysChange();
} */
/*static void _OnGuaranteeDaysSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeDaysSetfocus();} */ 
/*static void _OnGuaranteeDaysKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeDaysKillfocus();
} */
static int _OnGuaranteeDaysCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnGuaranteeDaysCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnPurchasePriceSetfocus();} */ 
/*static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnPurchasePriceKillfocus();
} */
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnPurchasePriceCheckValue();
} 
/*static void _OnSalePriceChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSalePriceChange();
} */
/*static void _OnSalePriceSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSalePriceSetfocus();} */ 
/*static void _OnSalePriceKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnSalePriceKillfocus();
} */
static int _OnSalePriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnSalePriceCheckValue();
} 
/*static void _OnRetainPriceChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnRetainPriceChange();
} */
/*static void _OnRetainPriceSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnRetainPriceSetfocus();} */ 
/*static void _OnRetainPriceKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnRetainPriceKillfocus();
} */
static int _OnRetainPriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnRetainPriceCheckValue();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CGlassProductDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CGlassProductDialog*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddGlassProductDialogFnc(CWnd *pWnd){
	 return ((CGlassProductDialog*)pWnd)->OnAddGlassProductDialog();
} 
static int _OnEditGlassProductDialogFnc(CWnd *pWnd){
	 return ((CGlassProductDialog*)pWnd)->OnEditGlassProductDialog();
} 
static int _OnDeleteGlassProductDialogFnc(CWnd *pWnd){
	 return ((CGlassProductDialog*)pWnd)->OnDeleteGlassProductDialog();
} 
static int _OnSaveGlassProductDialogFnc(CWnd *pWnd){
	 return ((CGlassProductDialog*)pWnd)->OnSaveGlassProductDialog();
} 
static int _OnCancelGlassProductDialogFnc(CWnd *pWnd){
	 return ((CGlassProductDialog*)pWnd)->OnCancelGlassProductDialog();
} 
CGlassProductDialog::CGlassProductDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 938;
	m_nDlgHeight = 707;
	SetDefaultValues();
}
CGlassProductDialog::~CGlassProductDialog(){
}
void CGlassProductDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Product Information"), 5, 5, 800, 360);
	m_wndProductTypeLabel.Create(this, _T("Type"), 10, 30, 130, 55);
	m_wndProductType.Create(this,135, 30, 445, 55); 
	m_wndProductCategoryLabel.Create(this, _T("Category"), 450, 30, 570, 55);
	m_wndProductCategory.Create(this,575, 30, 795, 55); 
	m_wndProductCodeLabel.Create(this, _T("Product code"), 10, 60, 130, 85);
	m_wndProductCode.Create(this,135, 60, 445, 85); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 450, 60, 570, 85);
	m_wndSerialNo.Create(this,575, 60, 795, 85); 
	m_wndProductNameLabel.Create(this, _T("Name"), 10, 90, 130, 115);
	m_wndProductName.Create(this,135, 90, 445, 115); 
	m_wndUomLabel.Create(this, _T("Uom"), 450, 90, 570, 115);
	m_wndUom.Create(this,575, 90, 795, 115); 
	m_wndMfgLabel.Create(this, _T("Mfg"), 10, 120, 130, 145);
	m_wndMfg.Create(this,135, 120, 445, 145); 
	m_wndOriginLabel.Create(this, _T("Origin"), 450, 120, 570, 145);
	m_wndOrigin.Create(this,575, 120, 795, 145); 
	m_wndMaterialLabel.Create(this, _T("Material"), 11, 150, 131, 175);
	m_wndMaterial.Create(this,136, 150, 445, 175); 
	m_wndAttributeLabel.Create(this, _T("Attribute"), 450, 150, 570, 175);
	m_wndAttribute.Create(this,575, 150, 795, 175); 
	m_wndColorLabel.Create(this, _T("Color"), 12, 180, 132, 205);
	m_wndColor.Create(this,137, 180, 445, 205); 
	m_wndGuaranteeDaysLabel.Create(this, _T("GuaranteeDays"), 450, 180, 570, 205);
	m_wndGuaranteeDays.Create(this,575, 180, 655, 205); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 210, 130, 235);
	m_wndDescription.Create(this,135, 210, 655, 295); 
	m_wndImage.Create(this, _T("Image"), 660, 180, 795, 295);
	m_wndNoteLabel.Create(this, _T("Note"), 10, 300, 130, 325);
	m_wndNote.Create(this,135, 300, 795, 325); 
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 10, 330, 130, 355);
	m_wndPurchasePrice.Create(this,135, 330, 255, 355); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 260, 330, 380, 355);
	m_wndSalePrice.Create(this,385, 330, 505, 355); 
	m_wndRetainPriceLabel.Create(this, _T("Retain Price"), 510, 330, 630, 355);
	m_wndRetainPrice.Create(this,635, 330, 755, 355); 
	m_wndTab.Create(this,5, 365, 800, 585); 
	m_wndActive.Create(this, _T("Active"), 5, 590, 125, 615);
	m_wndAdd.Create(this, _T("&Add"), 515, 590, 605, 615);
	m_wndSave.Create(this, _T("&Save"), 610, 590, 700, 615);
	m_wndClose.Create(this, _T("&Close"), 705, 590, 800, 615);

}
void CGlassProductDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProductType.SetCheckValue(true);
	m_wndProductType.LimitText(35);
	m_wndProductCategory.SetCheckValue(true);
	m_wndProductCategory.LimitText(35);
	m_wndProductCode.SetLimitText(35);
	m_wndProductCode.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndProductName.SetLimitText(81);
	m_wndProductName.SetCheckValue(true);
	m_wndUom.SetCheckValue(true);
	m_wndUom.LimitText(15);
	m_wndMfg.SetCheckValue(true);
	m_wndMfg.LimitText(35);
	m_wndOrigin.SetLimitText(35);
	m_wndOrigin.SetCheckValue(true);
	m_wndMaterial.SetCheckValue(true);
	m_wndMaterial.LimitText(35);
	m_wndAttribute.SetCheckValue(true);
	m_wndAttribute.LimitText(35);
	m_wndColor.SetCheckValue(true);
	m_wndColor.LimitText(35);
	m_wndGuaranteeDays.SetLimitText(16);
	m_wndGuaranteeDays.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndPurchasePrice.SetLimitText(16);
	m_wndPurchasePrice.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
	m_wndSalePrice.SetCheckValue(true);
	m_wndRetainPrice.SetLimitText(16);
	m_wndRetainPrice.SetCheckValue(true);


	m_wndProductType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProductType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProductCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProductCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndUom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMfg.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfg.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);




	m_wndAttribute.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAttribute.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndColor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndColor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_m_productTbl.SetTableName(_T("m_product"));
	m_m_productTbl.AddField(_T("MP_PRODUCT_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_CLIENT_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_ORG_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_ISACTIVE"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_CREATEDDATE"), dfDateTime); 
	m_m_productTbl.AddField(_T("MP_CREATEDBY"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_UPDATEDDATE"), dfDateTime); 
	m_m_productTbl.AddField(_T("MP_UPDATEDBY"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_VALUE"), dfText, 40); 
	m_m_productTbl.AddField(_T("MP_NAME"), dfText, 128); 
	m_m_productTbl.AddField(_T("MP_DESCRIPTION"), dfText, 255); 
	m_m_productTbl.AddField(_T("MP_DOCUMENTNOTE"), dfText, 2000); 
	m_m_productTbl.AddField(_T("MP_HELP"), dfText, 2000); 
	m_m_productTbl.AddField(_T("MP_UOM_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_ISSUMMARY"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISSTOCKED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISPURCHASED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISSOLD"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISBOM"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISINVOICEPRINTDETAILS"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISPICKLISTPRINTDETAILS"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISVERIFIED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_PRODUCT_CATEGORY_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_CLASSIFICATION"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_VOLUME"), dfLong); 
	m_m_productTbl.AddField(_T("MP_WEIGHT"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SHELFWIDTH"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SHELFHEIGHT"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SHELFDEPTH"), dfLong); 
	m_m_productTbl.AddField(_T("MP_UNITSPERPALLET"), dfLong); 
	m_m_productTbl.AddField(_T("MP_TAXCATEGORY_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_RESOURCE_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_DISCONTINUED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_DISCONTINUEDBY"), dfDateTime); 
	m_m_productTbl.AddField(_T("MP_PROCESSING"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_EXPENSETYPE_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_PRODUCTTYPE"), dfText, 60); 
	m_m_productTbl.AddField(_T("MP_IMAGEURL"), dfText, 120); 
	m_m_productTbl.AddField(_T("MP_DESCRIPTIONURL"), dfText, 120); 
	m_m_productTbl.AddField(_T("MP_GUARANTEEDAYS"), dfLong); 
	m_m_productTbl.AddField(_T("MP_VERSIONNO"), dfText, 20); 
	m_m_productTbl.AddField(_T("MP_ATTRIBUTESET_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_ATTRIBUTESETINSTANCE_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_DOWNLOADURL"), dfText, 120); 
	m_m_productTbl.AddField(_T("MP_FREIGHTCATEGORY_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_LOCATOR_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_IMAGE_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_BPARTNER_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_ISPRICEPRINTED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_NAME2"), dfText, 60); 
	m_m_productTbl.AddField(_T("MP_COSTTYPE"), dfText, 60); 
	m_m_productTbl.AddField(_T("MP_COSTSTD"), dfLong); 
	m_m_productTbl.AddField(_T("MP_STOCK_MIN"), dfLong); 
	m_m_productTbl.AddField(_T("MP_ENFORCE_ATTRIBUTE"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_CALCULATED"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_QTYMAX"), dfLong); 
	m_m_productTbl.AddField(_T("MP_QTYMIN"), dfLong); 
	m_m_productTbl.AddField(_T("MP_QTYSTD"), dfLong); 
	m_m_productTbl.AddField(_T("MP_QTYWARNING"), dfLong); 
	m_m_productTbl.AddField(_T("MP_QTYTYPE"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_STOCKMIN"), dfLong); 
	m_m_productTbl.AddField(_T("MP_PERIODNUMBER"), dfLong); 
	m_m_productTbl.AddField(_T("MP_PRODUCT_CLASS_ID"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_UNITPRICE"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SALEPRICE1"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SALEPRICE2"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SALEPRICE3"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SALEPRICE4"), dfLong); 
	m_m_productTbl.AddField(_T("MP_ISPAID1"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISPAID2"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISPAID3"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISPRECISION"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_ISROUND"), dfText, 1); 
	m_m_productTbl.AddField(_T("MP_PRIORITY"), dfLong); 
	m_m_productTbl.AddField(_T("MP_REGCODE"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_ATCCODE"), dfText, 32); 
	m_m_productTbl.AddField(_T("MP_MANUFACTURE_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_LINE"), dfLong); 
	m_m_productTbl.AddField(_T("MP_CODE"), dfText, 15); 
	m_m_productTbl.AddField(_T("MP_SOUOM_ID"), dfLong); 
	m_m_productTbl.AddField(_T("MP_SOUOM_RATE"), dfLong); 
	m_m_productTbl.AddField(_T("MP_ISSOUOM"), dfText, 1); 

}
void CGlassProductDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProductType.SetEvent(WE_SELENDOK, _OnProductTypeSelendokFnc);
	//m_wndProductType.SetEvent(WE_SETFOCUS, _OnProductTypeSetfocusFnc);
	//m_wndProductType.SetEvent(WE_KILLFOCUS, _OnProductTypeKillfocusFnc);
	m_wndProductType.SetEvent(WE_SELCHANGE, _OnProductTypeSelectChangeFnc);
	m_wndProductType.SetEvent(WE_LOADDATA, _OnProductTypeLoadDataFnc);
	//m_wndProductType.SetEvent(WE_ADDNEW, _OnProductTypeAddNewFnc);
	m_wndProductCategory.SetEvent(WE_SELENDOK, _OnProductCategorySelendokFnc);
	//m_wndProductCategory.SetEvent(WE_SETFOCUS, _OnProductCategorySetfocusFnc);
	//m_wndProductCategory.SetEvent(WE_KILLFOCUS, _OnProductCategoryKillfocusFnc);
	m_wndProductCategory.SetEvent(WE_SELCHANGE, _OnProductCategorySelectChangeFnc);
	m_wndProductCategory.SetEvent(WE_LOADDATA, _OnProductCategoryLoadDataFnc);
	//m_wndProductCategory.SetEvent(WE_ADDNEW, _OnProductCategoryAddNewFnc);
	//m_wndProductCode.SetEvent(WE_CHANGE, _OnProductCodeChangeFnc);
	//m_wndProductCode.SetEvent(WE_SETFOCUS, _OnProductCodeSetfocusFnc);
	//m_wndProductCode.SetEvent(WE_KILLFOCUS, _OnProductCodeKillfocusFnc);
	m_wndProductCode.SetEvent(WE_CHECKVALUE, _OnProductCodeCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndProductName.SetEvent(WE_CHANGE, _OnProductNameChangeFnc);
	//m_wndProductName.SetEvent(WE_SETFOCUS, _OnProductNameSetfocusFnc);
	//m_wndProductName.SetEvent(WE_KILLFOCUS, _OnProductNameKillfocusFnc);
	m_wndProductName.SetEvent(WE_CHECKVALUE, _OnProductNameCheckValueFnc);
	m_wndUom.SetEvent(WE_SELENDOK, _OnUomSelendokFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_SELCHANGE, _OnUomSelectChangeFnc);
	m_wndUom.SetEvent(WE_LOADDATA, _OnUomLoadDataFnc);
	//m_wndUom.SetEvent(WE_ADDNEW, _OnUomAddNewFnc);
	m_wndMfg.SetEvent(WE_SELENDOK, _OnMfgSelendokFnc);
	//m_wndMfg.SetEvent(WE_SETFOCUS, _OnMfgSetfocusFnc);
	//m_wndMfg.SetEvent(WE_KILLFOCUS, _OnMfgKillfocusFnc);
	m_wndMfg.SetEvent(WE_SELCHANGE, _OnMfgSelectChangeFnc);
	m_wndMfg.SetEvent(WE_LOADDATA, _OnMfgLoadDataFnc);
	//m_wndMfg.SetEvent(WE_ADDNEW, _OnMfgAddNewFnc);
	//m_wndOrigin.SetEvent(WE_CHANGE, _OnOriginChangeFnc);
	//m_wndOrigin.SetEvent(WE_SETFOCUS, _OnOriginSetfocusFnc);
	//m_wndOrigin.SetEvent(WE_KILLFOCUS, _OnOriginKillfocusFnc);
	m_wndOrigin.SetEvent(WE_CHECKVALUE, _OnOriginCheckValueFnc);
	m_wndMaterial.SetEvent(WE_SELENDOK, _OnMaterialSelendokFnc);
	//m_wndMaterial.SetEvent(WE_SETFOCUS, _OnMaterialSetfocusFnc);
	//m_wndMaterial.SetEvent(WE_KILLFOCUS, _OnMaterialKillfocusFnc);
	m_wndMaterial.SetEvent(WE_SELCHANGE, _OnMaterialSelectChangeFnc);
	m_wndMaterial.SetEvent(WE_LOADDATA, _OnMaterialLoadDataFnc);
	//m_wndMaterial.SetEvent(WE_ADDNEW, _OnMaterialAddNewFnc);
	m_wndAttribute.SetEvent(WE_SELENDOK, _OnAttributeSelendokFnc);
	//m_wndAttribute.SetEvent(WE_SETFOCUS, _OnAttributeSetfocusFnc);
	//m_wndAttribute.SetEvent(WE_KILLFOCUS, _OnAttributeKillfocusFnc);
	m_wndAttribute.SetEvent(WE_SELCHANGE, _OnAttributeSelectChangeFnc);
	m_wndAttribute.SetEvent(WE_LOADDATA, _OnAttributeLoadDataFnc);
	//m_wndAttribute.SetEvent(WE_ADDNEW, _OnAttributeAddNewFnc);
	m_wndColor.SetEvent(WE_SELENDOK, _OnColorSelendokFnc);
	//m_wndColor.SetEvent(WE_SETFOCUS, _OnColorSetfocusFnc);
	//m_wndColor.SetEvent(WE_KILLFOCUS, _OnColorKillfocusFnc);
	m_wndColor.SetEvent(WE_SELCHANGE, _OnColorSelectChangeFnc);
	m_wndColor.SetEvent(WE_LOADDATA, _OnColorLoadDataFnc);
	//m_wndColor.SetEvent(WE_ADDNEW, _OnColorAddNewFnc);
	//m_wndGuaranteeDays.SetEvent(WE_CHANGE, _OnGuaranteeDaysChangeFnc);
	//m_wndGuaranteeDays.SetEvent(WE_SETFOCUS, _OnGuaranteeDaysSetfocusFnc);
	//m_wndGuaranteeDays.SetEvent(WE_KILLFOCUS, _OnGuaranteeDaysKillfocusFnc);
	m_wndGuaranteeDays.SetEvent(WE_CHECKVALUE, _OnGuaranteeDaysCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	//m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	//m_wndRetainPrice.SetEvent(WE_CHANGE, _OnRetainPriceChangeFnc);
	//m_wndRetainPrice.SetEvent(WE_SETFOCUS, _OnRetainPriceSetfocusFnc);
	//m_wndRetainPrice.SetEvent(WE_KILLFOCUS, _OnRetainPriceKillfocusFnc);
	m_wndRetainPrice.SetEvent(WE_CHECKVALUE, _OnRetainPriceCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CGlassProductDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductTypeKey);
	DDX_TextEx(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_Text(pDX, m_wndProductCode.GetDlgCtrlID(), m_szProductCode);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndProductName.GetDlgCtrlID(), m_szProductName);
	DDX_TextEx(pDX, m_wndUom.GetDlgCtrlID(), m_szUomKey);
	DDX_TextEx(pDX, m_wndMfg.GetDlgCtrlID(), m_szMfgKey);
	DDX_Text(pDX, m_wndOrigin.GetDlgCtrlID(), m_szOrigin);
	DDX_TextEx(pDX, m_wndMaterial.GetDlgCtrlID(), m_szMaterialKey);
	DDX_TextEx(pDX, m_wndAttribute.GetDlgCtrlID(), m_szAttributeKey);
	DDX_TextEx(pDX, m_wndColor.GetDlgCtrlID(), m_szColorKey);
	DDX_Text(pDX, m_wndGuaranteeDays.GetDlgCtrlID(), m_nGuaranteeDays);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndRetainPrice.GetDlgCtrlID(), m_nRetainPrice);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CGlassProductDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ProductType")] =  m_szProductTypeKey;
	m_jData[_T("ProductCategory")] =  m_szProductCategoryKey;
	m_jData[_T("ProductCode")] =  m_szProductCode;
	m_jData[_T("SerialNo")] =  m_szSerialNo;
	m_jData[_T("ProductName")] =  m_szProductName;
	m_jData[_T("Uom")] =  m_szUomKey;
	m_jData[_T("Mfg")] =  m_szMfgKey;
	m_jData[_T("Origin")] =  m_szOrigin;
	m_jData[_T("Material")] =  m_szMaterialKey;
	m_jData[_T("Attribute")] =  m_szAttributeKey;
	m_jData[_T("Color")] =  m_szColorKey;
	m_jData[_T("GuaranteeDays")] =  m_nGuaranteeDays;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("PurchasePrice")] =  m_nPurchasePrice;
	m_jData[_T("SalePrice")] =  m_nSalePrice;
	m_jData[_T("RetainPrice")] =  m_nRetainPrice;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("ProductType")].GetValue(m_szProductTypeKey);
	m_jData[_T("ProductCategory")].GetValue(m_szProductCategoryKey);
	m_jData[_T("ProductCode")].GetValue(m_szProductCode);
	m_jData[_T("SerialNo")].GetValue(m_szSerialNo);
	m_jData[_T("ProductName")].GetValue(m_szProductName);
	m_jData[_T("Uom")].GetValue(m_szUomKey);
	m_jData[_T("Mfg")].GetValue(m_szMfgKey);
	m_jData[_T("Origin")].GetValue(m_szOrigin);
	m_jData[_T("Material")].GetValue(m_szMaterialKey);
	m_jData[_T("Attribute")].GetValue(m_szAttributeKey);
	m_jData[_T("Color")].GetValue(m_szColorKey);
	m_jData[_T("GuaranteeDays")].GetValue(m_nGuaranteeDays);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("PurchasePrice")].GetValue(m_nPurchasePrice);
	m_jData[_T("SalePrice")].GetValue(m_nSalePrice);
	m_jData[_T("RetainPrice")].GetValue(m_nRetainPrice);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CGlassProductDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CGlassProductDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CGlassProductDialog::SetDefaultValues(){

	m_szProductTypeKey.Empty();
	m_szProductCategoryKey.Empty();
	m_szProductCode.Empty();
	m_szSerialNo.Empty();
	m_szProductName.Empty();
	m_szUomKey.Empty();
	m_szMfgKey.Empty();
	m_szOrigin.Empty();
	m_szMaterialKey.Empty();
	m_szAttributeKey.Empty();
	m_szColorKey.Empty();
	m_nGuaranteeDays=0;
	m_szDescription.Empty();
	m_szNote.Empty();
	m_nPurchasePrice=0;
	m_nSalePrice=0;
	m_nRetainPrice=0;
	m_bActive=FALSE;

}
int CGlassProductDialog::SetMode(int nMode){
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
void CGlassProductDialog::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnProductTypeSelendok(){
	 
}
/*void CGlassProductDialog::OnProductTypeSetfocus(){
	
}*/
/*void CGlassProductDialog::OnProductTypeKillfocus(){
	
}*/
long CGlassProductDialog::OnProductTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductType.IsSearchKey() && !m_szProductTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductTypeKey
};
	m_wndProductType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnProductTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CGlassProductDialog::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnProductCategorySelendok(){
	 
}
/*void CGlassProductDialog::OnProductCategorySetfocus(){
	
}*/
/*void CGlassProductDialog::OnProductCategoryKillfocus(){
	
}*/
long CGlassProductDialog::OnProductCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductCategory.IsSearchKey() && !m_szProductCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductCategoryKey
};
	m_wndProductCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnProductCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassProductDialog::OnProductCodeChange(){
	
} */
/*void CGlassProductDialog::OnProductCodeSetfocus(){
	
} */
/*void CGlassProductDialog::OnProductCodeKillfocus(){
	
} */
int CGlassProductDialog::OnProductCodeCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnSerialNoChange(){
	
} */
/*void CGlassProductDialog::OnSerialNoSetfocus(){
	
} */
/*void CGlassProductDialog::OnSerialNoKillfocus(){
	
} */
int CGlassProductDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnProductNameChange(){
	
} */
/*void CGlassProductDialog::OnProductNameSetfocus(){
	
} */
/*void CGlassProductDialog::OnProductNameKillfocus(){
	
} */
int CGlassProductDialog::OnProductNameCheckValue(){
	return 0;
} 
void CGlassProductDialog::OnUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnUomSelendok(){
	 
}
/*void CGlassProductDialog::OnUomSetfocus(){
	
}*/
/*void CGlassProductDialog::OnUomKillfocus(){
	
}*/
long CGlassProductDialog::OnUomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUom.IsSearchKey() && !m_szUomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUomKey
};
	m_wndUom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnUomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CGlassProductDialog::OnMfgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnMfgSelendok(){
	 
}
/*void CGlassProductDialog::OnMfgSetfocus(){
	
}*/
/*void CGlassProductDialog::OnMfgKillfocus(){
	
}*/
long CGlassProductDialog::OnMfgLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMfg.IsSearchKey() && !m_szMfgKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMfgKey
};
	m_wndMfg.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMfg.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnMfgAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassProductDialog::OnOriginChange(){
	
} */
/*void CGlassProductDialog::OnOriginSetfocus(){
	
} */
/*void CGlassProductDialog::OnOriginKillfocus(){
	
} */
int CGlassProductDialog::OnOriginCheckValue(){
	return 0;
} 
void CGlassProductDialog::OnMaterialSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnMaterialSelendok(){
	 
}
/*void CGlassProductDialog::OnMaterialSetfocus(){
	
}*/
/*void CGlassProductDialog::OnMaterialKillfocus(){
	
}*/
long CGlassProductDialog::OnMaterialLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMaterial.IsSearchKey() && !m_szMaterialKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMaterialKey
};
	m_wndMaterial.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterial.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnMaterialAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CGlassProductDialog::OnAttributeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnAttributeSelendok(){
	 
}
/*void CGlassProductDialog::OnAttributeSetfocus(){
	
}*/
/*void CGlassProductDialog::OnAttributeKillfocus(){
	
}*/
long CGlassProductDialog::OnAttributeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAttribute.IsSearchKey() && !m_szAttributeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAttributeKey
};
	m_wndAttribute.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAttribute.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnAttributeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CGlassProductDialog::OnColorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnColorSelendok(){
	 
}
/*void CGlassProductDialog::OnColorSetfocus(){
	
}*/
/*void CGlassProductDialog::OnColorKillfocus(){
	
}*/
long CGlassProductDialog::OnColorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndColor.IsSearchKey() && !m_szColorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szColorKey
};
	m_wndColor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndColor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnColorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassProductDialog::OnGuaranteeDaysChange(){
	
} */
/*void CGlassProductDialog::OnGuaranteeDaysSetfocus(){
	
} */
/*void CGlassProductDialog::OnGuaranteeDaysKillfocus(){
	
} */
int CGlassProductDialog::OnGuaranteeDaysCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnDescriptionChange(){
	
} */
/*void CGlassProductDialog::OnDescriptionSetfocus(){
	
} */
/*void CGlassProductDialog::OnDescriptionKillfocus(){
	
} */
int CGlassProductDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnNoteChange(){
	
} */
/*void CGlassProductDialog::OnNoteSetfocus(){
	
} */
/*void CGlassProductDialog::OnNoteKillfocus(){
	
} */
int CGlassProductDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnPurchasePriceChange(){
	
} */
/*void CGlassProductDialog::OnPurchasePriceSetfocus(){
	
} */
/*void CGlassProductDialog::OnPurchasePriceKillfocus(){
	
} */
int CGlassProductDialog::OnPurchasePriceCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnSalePriceChange(){
	
} */
/*void CGlassProductDialog::OnSalePriceSetfocus(){
	
} */
/*void CGlassProductDialog::OnSalePriceKillfocus(){
	
} */
int CGlassProductDialog::OnSalePriceCheckValue(){
	return 0;
} 
/*void CGlassProductDialog::OnRetainPriceChange(){
	
} */
/*void CGlassProductDialog::OnRetainPriceSetfocus(){
	
} */
/*void CGlassProductDialog::OnRetainPriceKillfocus(){
	
} */
int CGlassProductDialog::OnRetainPriceCheckValue(){
	return 0;
} 
void CGlassProductDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CGlassProductDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CGlassProductDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CGlassProductDialog::OnAddGlassProductDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGlassProductDialog::OnEditGlassProductDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGlassProductDialog::OnDeleteGlassProductDialog(){
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
 		OnCancelGlassProductDialog();
 	}
	return 0;
}
int CGlassProductDialog::OnSaveGlassProductDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_m_productTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_m_productTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnGlassProductDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CGlassProductDialog::OnCancelGlassProductDialog(){
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
int CGlassProductDialog::OnGlassProductDialogListLoadData(){
	return 0;
}
