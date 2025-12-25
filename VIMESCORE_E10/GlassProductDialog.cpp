#include "GlassProductDialog.h"
#include "MainFrame_E10.h"
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




static void _OnGuaranteeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassProductDialog* )pWnd)->OnGuaranteeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGuaranteeSelendokFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeSelendok();
}
/*static void _OnGuaranteeSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeKillfocus();
}*/
/*static void _OnGuaranteeKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeKillfocus();
}*/
static long _OnGuaranteeLoadDataFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnGuaranteeLoadData();
}
/*static void _OnGuaranteeAddNewFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnGuaranteeAddNew();
}*/




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


/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CGlassProductDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassProductDialog *)pWnd)->OnUnitPriceCheckValue();
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

static void _OnMaterialClickFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnMaterialClick();
}

static void _OnAttributeSetClickFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnAttributeSetClick();
}

static void _OnColorClickFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnColorClick();
}


static void _OnGuaranteeClickFnc(CWnd *pWnd){
	CGlassProductDialog *pVw = (CGlassProductDialog *)pWnd;
	pVw->OnGuaranteeClick();
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
CGlassProductDialog::CGlassProductDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 800;
	m_nDlgHeight = 600;
	SetDefaultValues();
	m_szProductTypeKey.Empty();
	m_szProductCategoryKey.Empty();

}
CGlassProductDialog::~CGlassProductDialog(){
}
void CGlassProductDialog::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndMaterialLabel.Create(this, _T("Chất liệu"), 11, 150, 131, 175);
	m_wndMaterial.Create(this,136, 150, 445, 175); 
	m_wndAttributeLabel.Create(this, _T("Thuộc tính"), 450, 150, 570, 175);
	m_wndAttribute.Create(this,575, 150, 795, 175); 
	m_wndColorLabel.Create(this, _T("Màu sắc"), 12, 180, 132, 205);
	m_wndColor.Create(this,137, 180, 445, 205); 
	m_wndGuaranteeLabel.Create(this, _T("Bảo hành"), 450, 180, 570, 205);
	m_wndGuarantee.Create(this,575, 180, 655, 205); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 210, 130, 235);
	m_wndDescription.Create(this,135, 210, 655, 295, TRUE, FALSE, TRUE); 
	m_wndImage.Create(this,  660, 180, 795, 295);
	m_wndNoteLabel.Create(this, _T("Note"), 10, 300, 130, 325);
	m_wndNote.Create(this,135, 300, 795, 325); 
	m_wndUnitPriceLabel.Create(this, _T("Purchase Price"), 10, 330, 130, 355);
	m_wndUnitPrice.Create(this,135, 330, 255, 355); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 260, 330, 380, 355);
	m_wndSalePrice.Create(this,385, 330, 505, 355); 
	m_wndRetainPriceLabel.Create(this, _T("Retain Price"), 510, 330, 630, 355);
	m_wndRetainPrice.Create(this,635, 330, 755, 355); 
	m_wndTab.Create(this,5, 365, 800, 585); 
	m_wndActive.Create(this, _T("Active"), 5, 590, 125, 615);
	m_wndAdd.Create(this, _T("&Add"), 515, 590, 605, 615);
	m_wndSave.Create(this, _T("&Save"), 610, 590, 700, 615);
	m_wndClose.Create(this, _T("&Close"), 705, 590, 800, 615);


//	m_wndProductDefault.Create(&m_wndTab);
	m_wndProductPrice.Create(&m_wndTab);
//	m_wndTab.Add(_T("Default Information"), &m_wndProductDefault);
	m_wndTab.Add(_T("Price List"), &m_wndProductPrice);
	m_wndTab.SetPadding(CSize(30, 30));
	m_wndTab.SetCurSel(0);
}
void CGlassProductDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductType.SetCheckValue(true);
	m_wndProductType.LimitText(254);
	m_wndProductCategory.SetCheckValue(true);
	m_wndProductCategory.LimitText(235);
	//m_wndProductClass.SetCheckValue(true);
	m_wndProductCode.SetLimitText(15);
	//m_wndProductCode.SetCheckValue(true);
	m_wndProductCode.ModifyStyle(0, ES_UPPERCASE);
	m_wndSerialNo.SetLimitText(25);
	//m_wndSerialNo.SetCheckValue(true);
	m_wndProductName.SetLimitText(254);
	m_wndProductName.SetCheckValue(true);
	m_wndProductName.SetInitCap(1);
	m_wndUom.SetCheckValue(true);
	m_wndUom.LimitText(35);
	//m_wndAttribute.SetCheckValue(true);
//	m_wndAttribute.LimitText(235);
	//m_wndMfg.SetCheckValue(true);
//	m_wndMfg.LimitText(235);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);

	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
	m_wndSalePrice.SetCheckValue(true);
	m_wndRetainPrice.SetLimitText(16);
	m_wndRetainPrice.SetCheckValue(true);


	m_wndOrigin.SetReadOnly(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndProductType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProductType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndProductCategory.Format(3, 2);
	m_wndProductCategory.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndProductCategory.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndProductCategory.InsertColumn(2, _T("Name"), CFMT_TEXT, 550);


	m_wndUom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndUom.InsertColumn(1, _T("Name"), 256, 200);

	m_wndAttribute.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndAttribute.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndMaterial.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndMaterial.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndColor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndColor.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndGuarantee.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndGuarantee.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndMfg.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndMfg.InsertColumn(1, _T("Code"), CFMT_TEXT, 80);
	m_wndMfg.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);
	m_wndMfg.InsertColumn(3, _T("Country"), CFMT_TEXT , 150);
	m_wndMfg.Format(4, 2);

//	m_wndProductDefault.OnInitDialog();
//	m_wndProductDefault.m_nProductID = m_nProductID;
	m_wndProductPrice.OnInitDialog();
	m_wndProductPrice.m_nProductID = m_nProductID;


	m_productTbl.SetTableName(_T("m_product"));
	m_productTbl.AddField(_T("MP_PRODUCT_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_CLIENT_ID"), dfText, 32); 
	m_productTbl.AddField(_T("MP_ORG_ID"), dfText, 3); 
	m_productTbl.AddField(_T("MP_ISACTIVE"), dfText, 1); 
	m_productTbl.AddField(_T("MP_CREATEDDATE"), dfDateTime); 
	m_productTbl.AddField(_T("MP_CREATEDBY"), dfText, 32); 
	m_productTbl.AddField(_T("MP_UPDATEDDATE"), dfDateTime); 
	m_productTbl.AddField(_T("MP_UPDATEDBY"), dfText, 32); 
	m_productTbl.AddField(_T("MP_NAME"), dfText, 128); 
	m_productTbl.AddField(_T("MP_DESCRIPTION"), dfText, 255); 
	m_productTbl.AddField(_T("MP_DOCUMENTNOTE"), dfText, 2000); 
	m_productTbl.AddField(_T("MP_UOM_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_PRODUCTTYPE"), dfText, 60); 
	m_productTbl.AddField(_T("MP_PRODUCT_CATEGORY_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_UNITSPERPALLET"), dfLong); 
	m_productTbl.AddField(_T("MP_IMAGEURL"), dfText, 120); 
	m_productTbl.AddField(_T("MP_DESCRIPTIONURL"), dfText, 120); 
	m_productTbl.AddField(_T("MP_GUARANTEEDAYS"), dfInteger); 
	m_productTbl.AddField(_T("MP_ATTRIBUTESET_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_DOWNLOADURL"), dfText, 120); 
	m_productTbl.AddField(_T("MP_IMAGE_ID"), dfText, 32); 
	m_productTbl.AddField(_T("MP_BPARTNER_ID"), dfText, 32); 
	m_productTbl.AddField(_T("MP_ISPRICEPRINTED"), dfText, 1); 
	m_productTbl.AddField(_T("MP_UNITPRICE"), dfDouble); 
	m_productTbl.AddField(_T("MP_SALEPRICE1"), dfDouble); 
	m_productTbl.AddField(_T("MP_SALEPRICE2"), dfDouble); 
	m_productTbl.AddField(_T("MP_SALEPRICE3"), dfDouble); 
	m_productTbl.AddField(_T("MP_SALEPRICE4"), dfDouble); 
	m_productTbl.AddField(_T("MP_ISPAID1"), dfText, 1); 
	m_productTbl.AddField(_T("MP_ISPAID2"), dfText, 1); 
	m_productTbl.AddField(_T("MP_ISPAID3"), dfText, 1); 
	m_productTbl.AddField(_T("MP_ISPAID4"), dfText, 1);
	m_productTbl.AddField(_T("MP_MANUFACTURE_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_LINE"), dfLong); 
	m_productTbl.AddField(_T("MP_CODE"), dfText, 15); 
	m_productTbl.AddField(_T("MP_SERIAL"), dfText, 15); 
	m_productTbl.AddField(_T("MP_PRODUCT_UOM_ID"), dfLong); 
	m_productTbl.AddField(_T("MP_PRODUCT_UOM_RATE"), dfLong);
	m_productTbl.AddField(_T("MP_STORAGE_ACCT"), dfText, 15);

//	m_wndProductDefault.m_product_defaultTbl = &m_productTbl;

	m_wndMaterial.SetCheckValue(TRUE);
	m_wndAttribute.SetCheckValue(TRUE);
	m_wndColor.SetCheckValue(TRUE);
	m_wndMfg.SetCheckValue(TRUE);
}
void CGlassProductDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	//m_wndName2.SetEvent(WE_CHANGE, _OnName2ChangeFnc);
	//m_wndName2.SetEvent(WE_SETFOCUS, _OnName2SetfocusFnc);
	//m_wndName2.SetEvent(WE_KILLFOCUS, _OnName2KillfocusFnc);
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
	m_wndMaterialLabel.SetHyperlink(true);
	m_wndMaterialLabel.SetEvent(WE_CLICK, _OnMaterialClickFnc);
	m_wndMaterial.SetEvent(WE_SELENDOK, _OnMaterialSelendokFnc);
	//m_wndMaterial.SetEvent(WE_SETFOCUS, _OnMaterialSetfocusFnc);
	//m_wndMaterial.SetEvent(WE_KILLFOCUS, _OnMaterialKillfocusFnc);
	m_wndMaterial.SetEvent(WE_SELCHANGE, _OnMaterialSelectChangeFnc);
	m_wndMaterial.SetEvent(WE_LOADDATA, _OnMaterialLoadDataFnc);
	//m_wndMaterial.SetEvent(WE_ADDNEW, _OnMaterialAddNewFnc);

	m_wndAttributeLabel.SetHyperlink(true);
	m_wndAttributeLabel.SetEvent(WE_CLICK, _OnAttributeSetClickFnc);
	m_wndAttribute.SetEvent(WE_SELENDOK, _OnAttributeSelendokFnc);
	//m_wndAttribute.SetEvent(WE_SETFOCUS, _OnAttributeSetfocusFnc);
	//m_wndAttribute.SetEvent(WE_KILLFOCUS, _OnAttributeKillfocusFnc);
	m_wndAttribute.SetEvent(WE_SELCHANGE, _OnAttributeSelectChangeFnc);
	m_wndAttribute.SetEvent(WE_LOADDATA, _OnAttributeLoadDataFnc);
	//m_wndAttribute.SetEvent(WE_ADDNEW, _OnAttributeAddNewFnc);

	m_wndColorLabel.SetHyperlink(true);
	m_wndColorLabel.SetEvent(WE_CLICK, _OnColorClickFnc);
	m_wndColor.SetEvent(WE_SELENDOK, _OnColorSelendokFnc);
	//m_wndColor.SetEvent(WE_SETFOCUS, _OnColorSetfocusFnc);
	//m_wndColor.SetEvent(WE_KILLFOCUS, _OnColorKillfocusFnc);
	m_wndColor.SetEvent(WE_SELCHANGE, _OnColorSelectChangeFnc);
	m_wndColor.SetEvent(WE_LOADDATA, _OnColorLoadDataFnc);
	//m_wndColor.SetEvent(WE_ADDNEW, _OnColorAddNewFnc);


	m_wndGuaranteeLabel.SetHyperlink(true);
	m_wndGuaranteeLabel.SetEvent(WE_CLICK, _OnGuaranteeClickFnc);
	m_wndGuarantee.SetEvent(WE_SELENDOK, _OnGuaranteeSelendokFnc);
	m_wndGuarantee.SetEvent(WE_SELCHANGE, _OnGuaranteeSelectChangeFnc);
	m_wndGuarantee.SetEvent(WE_LOADDATA, _OnGuaranteeLoadDataFnc);

	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);

	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
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
	if(GetMode() == VM_EDIT || GetMode() == VM_VIEW)
		GetDataToScreen();
	SetMode(GetMode());

}
void CGlassProductDialog::OnDoDataExchange(CDataExchange* pDX){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndGuarantee.GetDlgCtrlID(), m_szGuaranteeKey);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndRetainPrice.GetDlgCtrlID(), m_nRetainPrice);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);	
}
void CGlassProductDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM m_product WHERE mp_product_id=%ld"), m_nProductID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mp_code"), m_szProductCode);
		rs.GetValue(_T("mp_serial"), m_szSerialNo);
		rs.GetValue(_T("mp_producttype"), m_szProductTypeKey);

		rs.GetValue(_T("mp_product_category_id"), m_szProductCategoryKey);
		rs.GetValue(_T("mp_name"), m_szProductName);
		m_szOldProductName = m_szProductName;
		rs.GetValue(_T("mp_uom_id"), m_szUomKey);

		rs.GetValue(_T("mp_manufacture_id"), m_szMfgKey);
		rs.GetValue(_T("mp_isactive"), tmpStr);
		STR2BOOL(tmpStr, m_bActive);

		rs.GetValue(_T("mp_description"), m_szDescription);
		rs.GetValue(_T("mp_documentnote"), m_szNote);
		rs.GetValue(_T("mp_guaranteedays"), m_szGuaranteeKey);
		rs.GetValue(_T("mp_imageurl"), m_szImage);
		rs.GetValue(_T("mp_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("mp_saleprice1"), m_nSalePrice);
		rs.GetValue(_T("mp_saleprice4"), m_nRetainPrice);


		szSQL.Format(_T("SELECT * FROM m_product_attribute WHERE mpa_product_id=%ld "), m_nProductID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("mpa_material_id"), m_szMaterialKey);
			rs.GetValue(_T("mpa_attribute_id"), m_szAttributeKey);
			rs.GetValue(_T("mpa_color_id"), m_szColorKey);
		}
//		m_wndProductDefault.m_nProductID = m_nProductID;
//		m_wndProductDefault.GetDataToScreen();
		m_wndProductPrice.m_szVendorID = m_szAttributeKey;
		m_wndProductPrice.m_szManufactureID = m_szMfgKey;


	}

}
void CGlassProductDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;

	m_productTbl.SetValue(_T("mp_createdby"), pMF->GetCurrentUser());
	m_productTbl.SetValue(_T("mp_createddate"), pMF->GetSysDateTime());

	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mp_product_id=%ld "), m_nProductID);
		m_productTbl.Open(&pMF->m_db, szWhere);
		
	}

	m_szProductName.Trim();
	m_productTbl.SetValue(_T("mp_product_id"), m_nProductID);
	m_productTbl.SetValue(_T("mp_updatedby"), pMF->GetCurrentUser());
	m_productTbl.SetValue(_T("mp_updateddate"), pMF->GetSysDateTime());
	m_productTbl.SetValue(_T("mp_producttype"), m_szProductTypeKey);
	m_productTbl.SetValue(_T("mp_product_category_id"), m_szProductCategoryKey);
	m_productTbl.SetValue(_T("mp_code"), m_szProductCode);
	m_productTbl.SetValue(_T("mp_serial"), m_szSerialNo);
	m_productTbl.SetValue(_T("mp_name"), m_szProductName);
	m_productTbl.SetValue(_T("mp_description"), m_szDescription);
	m_productTbl.SetValue(_T("mp_documentnote"), m_szNote);
	m_productTbl.SetValue(_T("mp_Guaranteedays"), m_szGuaranteeKey);
	m_productTbl.SetValue(_T("mp_unitprice"), m_nUnitPrice);
	m_productTbl.SetValue(_T("mp_saleprice1"), m_nSalePrice);
	m_productTbl.SetValue(_T("mp_saleprice4"), m_nRetainPrice);
	
	m_productTbl.SetValue(_T("mp_uom_id"), m_szUomKey);
	m_productTbl.SetValue(_T("mp_product_uom_id"), m_szUomKey);
	m_productTbl.SetValue(_T("mp_product_uom_rate"), 1.0);
	m_productTbl.SetValue(_T("mp_manufacture_id"), m_szMfgKey);
	m_productTbl.SetValue(_T("mp_org_id"), pMF->GetModuleID());
	BOOL2STR(m_bActive, tmpStr);
	m_productTbl.SetValue(_T("mp_isactive"), tmpStr);

	

}
void CGlassProductDialog::SetDefaultValues(){

	m_szProductCode.Empty();
	m_szSerialNo.Empty();
	m_szProductName.Empty();
	m_szUomKey.Empty();
	m_szAttributeKey.Empty();
	m_szMaterialKey.Empty();
	m_szColorKey.Empty();
	m_szMfgKey.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;
	m_szOldProductName.Empty();
	m_nGuaranteeDays = 0;
	m_nUnitPrice = 0;
	m_nSalePrice = 0;
	m_nRetainPrice = 0;
}
int CGlassProductDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, -1); 
			m_wndProductType.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
			{
				EnableButtons(TRUE, 1, -1);
				EnableControls(TRUE);
				m_wndProductName.SetFocus();

				//OnSaleUomOptionSelect();
				//Kiem tra neu mat hang da ton tai trong kho thi khong cho phep sua cac thong tin chinh.
				szSQL.Format(_T("SELECT count(*) FROM m_storageline WHERE msl_product_id=%ld "), m_nProductID);
				rs.ExecSQL(szSQL);
				if(rs.GetIntValue() > 0){
					m_wndProductName.EnableWindow(FALSE);
					m_wndProductCode.EnableWindow(FALSE);
					m_wndMfg.EnableWindow(FALSE);
					m_wndUom.EnableWindow(FALSE);
					m_wndDescription.SetFocus();
					CString szUser = pMF->GetCurrentUser();
					if (pMF->CheckPermission(_T("13.02")))
					{
						m_wndProductName.EnableWindow(TRUE);
						m_wndProductCode.EnableWindow(TRUE);
						m_wndMfg.EnableWindow(TRUE);
						m_wndUom.EnableWindow(TRUE);
					}
 				}
			}
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 

 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, -1); 
 			SetDefaultValues();
			break; 
 		}; 

 		UpdateData(FALSE); 

//		m_wndProductDefault.SetMode(nMode);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode; 
}
void CGlassProductDialog::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnProductTypeSelendok(){
	 
}
/*void CGlassProductDialog::OnProductTypeSetfocus(){
	
}*/
/*void CGlassProductDialog::OnProductTypeKillfocus(){
	
}*/
long CGlassProductDialog::OnProductTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.AppendFormat(_T(" and mpt_org_id='GLS' "));
	return pMF->LoadProductTypeList(&m_wndProductType, m_szProductTypeKey, szWhere);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CGlassProductDialog::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnProductCategorySelendok(){
	 
}
/*void CGlassProductDialog::OnProductCategorySetfocus(){
	
}*/
/*void CGlassProductDialog::OnProductCategoryKillfocus(){
	
}*/
long CGlassProductDialog::OnProductCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndProductCategory, m_szProductCategoryKey);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
	//if (m_szOldProductName.Left(3) != m_szProductName.Left(3) && !m_szOldProductName.IsEmpty())
	//{
	//	AfxMessageBox(_T("Invalid Name!"), MB_OK);
	//	return -1;
	//}
	return 0;
} 
void CGlassProductDialog::OnUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnUomSelendok(){
}
/*void CGlassProductDialog::OnUomSetfocus(){
	
}*/
/*void CGlassProductDialog::OnUomKillfocus(){
	
}*/
long CGlassProductDialog::OnUomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUomList(&m_wndUom, m_szUomKey);

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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CGlassProductDialog::OnMfgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnMfgSelendok(){
	 UpdateData(TRUE);
	 m_szOrigin = m_wndMfg.GetCurrent(3);
	 UpdateData(FALSE);
}
/*void CGlassProductDialog::OnMfgSetfocus(){
	
}*/
/*void CGlassProductDialog::OnMfgKillfocus(){
	
}*/
long CGlassProductDialog::OnMfgLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndMfg.IsSearchKey() && str2long(m_szMfgKey) > 0){
		szWhere.Format(_T(" AND adm_manufacture_id=%d "), str2long(m_szMfgKey));
	};
	m_wndMfg.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT adm_manufacture_id as id, adm_code as code, adm_name as name, get_countryname(adm_country_id) as country ") \
		_T("FROM ad_manufacture ") \
		_T("WHERE adm_isactive='Y' AND adm_org_id='GLS' %s ") \
		_T("ORDER BY adm_manufacture_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMfg.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("country")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CGlassProductDialog::OnMfgAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CGlassProductDialog::OnMaterialSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnMaterialSelendok(){
	 
}
/*void CGlassProductDialog::OnMaterialSetfocus(){
	
}*/
/*void CGlassProductDialog::OnMaterialKillfocus(){
	
}*/
long CGlassProductDialog::OnMaterialLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductMaterialList(&m_wndMaterial, m_szMaterialKey);

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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnMaterialAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CGlassProductDialog::OnAttributeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnAttributeSelendok(){
	 
}
/*void CGlassProductDialog::OnAttributeSetfocus(){
	
}*/
/*void CGlassProductDialog::OnAttributeKillfocus(){
	
}*/
long CGlassProductDialog::OnAttributeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductAttributeList(&m_wndAttribute, m_szAttributeKey);

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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */


void CGlassProductDialog::OnColorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnColorSelendok(){
	 
}
/*void CGlassProductDialog::OnColorSetfocus(){
	
}*/
/*void CGlassProductDialog::OnColorKillfocus(){
	
}*/
long CGlassProductDialog::OnColorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductColorList(&m_wndColor, m_szColorKey);

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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CGlassProductDialog::OnDescriptionChange(){
	
} */
/*void CGlassProductDialog::OnDescriptionSetfocus(){
	
} */
/*void CGlassProductDialog::OnDescriptionKillfocus(){
	
} */
int CGlassProductDialog::OnDescriptionCheckValue(){
	return 0;
} 

/*void CGlassProductDialog::OnUnitPriceChange(){
	
} */
/*void CGlassProductDialog::OnUnitPriceSetfocus(){
	
} */
/*void CGlassProductDialog::OnUnitPriceKillfocus(){
	
} */
int CGlassProductDialog::OnUnitPriceCheckValue(){
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	switch(nNew)
	{
	case 0:
//		m_wndProductDefault.Refresh();
		break;
	case 1:
		m_wndProductPrice.Refresh();
		break;
	}
} 
void CGlassProductDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CGlassProductDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() == VM_VIEW)
		OnEditGlassProductDialog();
	else
		OnAddGlassProductDialog();

} 
void CGlassProductDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveGlassProductDialog();
} 
void CGlassProductDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CGlassProductDialog::OnAddGlassProductDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGlassProductDialog::OnEditGlassProductDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGlassProductDialog::OnDeleteGlassProductDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("m_product_delete(%ld) "), m_nProductID );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelGlassProductDialog();
 	}
	return 0;
}
int CGlassProductDialog::OnSaveGlassProductDialog(){
 	int nMode = GetMode();
 	if(nMode != VM_ADD && nMode != VM_EDIT)
	{
 		return -1;
	}

	if(!IsValidateData())
 		return -1;
	/*if(m_wndProductDefault.IsValidateData() < 0)
	{
		return -1;
	}*/

	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, tmpStr; 
 	if(nMode == VM_ADD)
	{ 
		szSQL.Format(_T("SELECT m_product_id_asq.nextval as product_id FROM DUAL"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nProductID = (long)rs.GetDoubleValue();

		m_productTbl.SetValue(_T("mp_product_id"), m_nProductID);
 		szSQL = m_productTbl.GetInsertSQL();
 	} 
 	else if(nMode == VM_EDIT)
	{ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mp_product_id=%ld"), m_nProductID);
 		szSQL = m_productTbl.GetUpdateSQL(_T("mp_product_id,mp_createdby,mp_createddate")); 
 		szSQL += szWhere; 
 	} 


 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{ 
		//m_wndProductDefault.m_nProductID = m_nProductID;
		m_wndProductPrice.m_nProductID = m_nProductID;
		
		szSQL.Format(_T("M_PRODUCT_ATTRIBUTE_UPDATE(%ld,'%s','%s','%s') "),
			m_nProductID, m_szMaterialKey, m_szAttributeKey, m_szColorKey);
		pMF->ExecDML(szSQL);

//		m_wndProductDefault.OnSaveProductDefault();
		if(GetMode() == VM_EDIT)
		{
			/*if (m_wndProductDefault.m_szOldPriority != m_wndProductDefault.m_szPriorityKey)
			{
				CString szEvent, szDesc;
				szEvent = _T("Edit Drug Level");
				szDesc.Format(_T("%s: Level %s->Level %s"), m_szProductCode, m_wndProductDefault.m_szOldPriority, m_wndProductDefault.m_szPriorityKey);
				pMF->SystemLog(szEvent, szDesc);
			}*/
			CGuiDialog::OnOK();
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CGlassProductDialog::OnGlassProductDialogListLoadData(){
	return 0;
}


#include "HMSSettingDialog.h"
void CGlassProductDialog::OnMaterialClick()
{
	CHMSSettingDialog dlg(this, _T("m_product_material_list"));
	if(dlg.DoModal())
	{

	}
}


void CGlassProductDialog::OnAttributeSetClick()
{
	CHMSSettingDialog dlg(this, _T("m_product_attribute_list"));
	if(dlg.DoModal())
	{

	}
}

void CGlassProductDialog::OnColorClick()
{
	CHMSSettingDialog dlg(this, _T("m_product_color_list"));
	if(dlg.DoModal())
	{

	}
}

void CGlassProductDialog::OnGuaranteeClick()
{
	CHMSSettingDialog dlg(this, _T("m_product_guarantee_list"));
	if(dlg.DoModal())
	{

	}
}


void CGlassProductDialog::OnGuaranteeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGlassProductDialog::OnGuaranteeSelendok(){
	 
}
/*void CGlassProductDialog::OnGuaranteeSetfocus(){
	
}*/
/*void CGlassProductDialog::OnGuaranteeKillfocus(){
	
}*/
long CGlassProductDialog::OnGuaranteeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductGuaranteeList(&m_wndGuarantee, m_szGuaranteeKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGuarantee.IsSearchKey() && !m_szGuaranteeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGuaranteeKey
};
	m_wndGuarantee.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGuarantee.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassProductDialog::OnGuaranteeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
