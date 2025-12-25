#include "ProductDialog2.h"
#include "MainFrm.h"
static void _OnProductTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnProductTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductTypeSelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductTypeSelendok();
}
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductTypeKillfocus();
}*/
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductTypeKillfocus();
}*/
static long _OnProductTypeLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnProductTypeLoadData();
}
/*static void _OnProductTypeAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductTypeAddNew();
}*/
static void _OnProductCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnProductCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCategorySelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCategorySelendok();
}
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCategoryKillfocus();
}*/
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCategoryKillfocus();
}*/
static long _OnProductCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnProductCategoryLoadData();
}
/*static void _OnProductCategoryAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCategoryAddNew();
}*/
/*static void _OnProductNameChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductNameChange();
} */
/*static void _OnProductNameSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductNameSetfocus();} */ 
/*static void _OnProductNameKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductNameKillfocus();
} */
static int _OnProductNameCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnProductNameCheckValue();
} 
static void _OnUomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnUomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUomSelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnUomSelendok();
}
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnUomKillfocus();
}*/
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnUomKillfocus();
}*/
static long _OnUomLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnUomLoadData();
}
/*static void _OnUomAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnUomAddNew();
}*/
static void _OnSaleUomOptionSelectFnc(CWnd *pWnd){
	 ((CProductDialog2*)pWnd)->OnSaleUomOptionSelect();
}
static void _OnSaleUomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnSaleUomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSaleUomSelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSaleUomSelendok();
}
/*static void _OnSaleUomSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSaleUomKillfocus();
}*/
/*static void _OnSaleUomKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSaleUomKillfocus();
}*/
static long _OnSaleUomLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnSaleUomLoadData();
}
/*static void _OnSaleUomAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSaleUomAddNew();
}*/
/*static void _OnConversionRateChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnConversionRateChange();
} */
/*static void _OnConversionRateSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnConversionRateSetfocus();} */ 
/*static void _OnConversionRateKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnConversionRateKillfocus();
} */
static int _OnConversionRateCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnConversionRateCheckValue();
} 
/*static void _OnSpecificationChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSpecificationChange();
} */
/*static void _OnSpecificationSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSpecificationSetfocus();} */ 
/*static void _OnSpecificationKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSpecificationKillfocus();
} */
static int _OnSpecificationCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnSpecificationCheckValue();
} 
/*static void _OnProductCodeChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCodeChange();
} */
/*static void _OnProductCodeSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCodeSetfocus();} */ 
/*static void _OnProductCodeKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnProductCodeKillfocus();
} */
static int _OnProductCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnProductCodeCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnSerialNoCheckValue();
} 
static void _OnMfgSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnMfgSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgSelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnMfgSelendok();
}
/*static void _OnMfgSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnMfgKillfocus();
}*/
/*static void _OnMfgKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnMfgKillfocus();
}*/
static long _OnMfgLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnMfgLoadData();
}
/*static void _OnMfgAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnMfgAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDialog2* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CProductDialog2 *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CProductDialog2 *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CProductDialog2*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CProductDialog2*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductDialog2 *pVw = (CProductDialog2 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductDialog2 *pVw = (CProductDialog2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductDialog2 *pVw = (CProductDialog2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductDialog2Fnc(CWnd *pWnd){
	 return ((CProductDialog2*)pWnd)->OnAddProductDialog2();
} 
static int _OnEditProductDialog2Fnc(CWnd *pWnd){
	 return ((CProductDialog2*)pWnd)->OnEditProductDialog2();
} 
static int _OnDeleteProductDialog2Fnc(CWnd *pWnd){
	 return ((CProductDialog2*)pWnd)->OnDeleteProductDialog2();
} 
static int _OnSaveProductDialog2Fnc(CWnd *pWnd){
	 return ((CProductDialog2*)pWnd)->OnSaveProductDialog2();
} 
static int _OnCancelProductDialog2Fnc(CWnd *pWnd){
	 return ((CProductDialog2*)pWnd)->OnCancelProductDialog2();
} 
CProductDialog2::CProductDialog2(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 470;
	SetDefaultValues();
}
CProductDialog2::~CProductDialog2(){
}
void CProductDialog2::OnCreateComponents(){
	m_wndProductTypeLabel.Create(this, _T("Product Type"), 10, 30, 130, 55);
	m_wndProductType.Create(this,135, 30, 385, 55); 
	m_wndProductCategoryLabel.Create(this, _T("Product Category"), 390, 30, 510, 55);
	m_wndProductCategory.Create(this,515, 30, 795, 55); 
	m_wndProductNameLabel.Create(this, _T("Name"), 10, 60, 130, 85);
	m_wndProductName.Create(this,135, 60, 795, 85); 
	m_wndUomLabel.Create(this, _T("Unit Of Measure"), 10, 90, 130, 115);
	m_wndProductInformation.Create(this, _T("Product Information"), 5, 5, 800, 210);
	m_wndUom.Create(this,135, 90, 385, 115); 
	m_wndSaleUomLabel.Create(this, _T("Sale Uom"), 390, 90, 480, 115);
	m_wndSaleUomOption.Create(this, _T(""), 485, 90, 510, 115);
	m_wndSaleUom.Create(this,515, 90, 615, 115); 
	m_wndConversionRateLabel.Create(this, _T("Conversion"), 620, 90, 700, 115);
	m_wndConversionRate.Create(this,705, 90, 795, 115); 
	m_wndSpecificationLabel.Create(this, _T("Specification"), 10, 120, 130, 145);
	m_wndSpecification.Create(this,135, 120, 385, 145); 
	m_wndProductCodeLabel.Create(this, _T("Code"), 390, 120, 510, 145);
	m_wndProductCode.Create(this,515, 120, 615, 145); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 620, 120, 700, 145);
	m_wndSerialNo.Create(this,705, 120, 795, 145); 
	m_wndMfgLabel.Create(this, _T("Mfg"), 10, 150, 130, 175);
	m_wndMfg.Create(this,135, 150, 385, 175); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 390, 150, 510, 175);
	m_wndSupplier.Create(this,515, 150, 795, 175); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 180, 130, 205);
	m_wndDescription.Create(this,135, 180, 795, 205); 
	m_wndTab.Create(this,6, 215, 801, 435); 
	m_wndActive.Create(this, _T("Active"), 10, 440, 130, 465);
	m_wndAdd.Create(this, _T("&Add"), 514, 440, 604, 465);
	m_wndSave.Create(this, _T("&Save"), 609, 440, 699, 465);
	m_wndClose.Create(this, _T("&Close"), 704, 440, 799, 465);

}
void CProductDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProductType.SetCheckValue(true);
	m_wndProductType.LimitText(35);
	m_wndProductCategory.SetCheckValue(true);
	m_wndProductCategory.LimitText(35);
	m_wndProductName.SetLimitText(81);
	m_wndProductName.SetCheckValue(true);
	m_wndUom.SetCheckValue(true);
	m_wndUom.LimitText(15);
	m_wndSaleUom.SetCheckValue(true);
	m_wndSaleUom.LimitText(35);
	m_wndConversionRate.SetLimitText(16);
	m_wndConversionRate.SetCheckValue(true);
	m_wndSpecification.SetLimitText(35);
	m_wndSpecification.SetCheckValue(true);
	m_wndProductCode.SetLimitText(35);
	m_wndProductCode.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndMfg.SetCheckValue(true);
	m_wndMfg.LimitText(35);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndProductType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProductType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProductCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProductCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndUom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSaleUom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSaleUom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMfg.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfg.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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
void CProductDialog2::OnSetWindowEvents(){
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
	m_wndSaleUomOption.SetEvent(WE_CLICK, _OnSaleUomOptionSelectFnc);
	m_wndSaleUom.SetEvent(WE_SELENDOK, _OnSaleUomSelendokFnc);
	//m_wndSaleUom.SetEvent(WE_SETFOCUS, _OnSaleUomSetfocusFnc);
	//m_wndSaleUom.SetEvent(WE_KILLFOCUS, _OnSaleUomKillfocusFnc);
	m_wndSaleUom.SetEvent(WE_SELCHANGE, _OnSaleUomSelectChangeFnc);
	m_wndSaleUom.SetEvent(WE_LOADDATA, _OnSaleUomLoadDataFnc);
	//m_wndSaleUom.SetEvent(WE_ADDNEW, _OnSaleUomAddNewFnc);
	//m_wndConversionRate.SetEvent(WE_CHANGE, _OnConversionRateChangeFnc);
	//m_wndConversionRate.SetEvent(WE_SETFOCUS, _OnConversionRateSetfocusFnc);
	//m_wndConversionRate.SetEvent(WE_KILLFOCUS, _OnConversionRateKillfocusFnc);
	m_wndConversionRate.SetEvent(WE_CHECKVALUE, _OnConversionRateCheckValueFnc);
	//m_wndSpecification.SetEvent(WE_CHANGE, _OnSpecificationChangeFnc);
	//m_wndSpecification.SetEvent(WE_SETFOCUS, _OnSpecificationSetfocusFnc);
	//m_wndSpecification.SetEvent(WE_KILLFOCUS, _OnSpecificationKillfocusFnc);
	m_wndSpecification.SetEvent(WE_CHECKVALUE, _OnSpecificationCheckValueFnc);
	//m_wndProductCode.SetEvent(WE_CHANGE, _OnProductCodeChangeFnc);
	//m_wndProductCode.SetEvent(WE_SETFOCUS, _OnProductCodeSetfocusFnc);
	//m_wndProductCode.SetEvent(WE_KILLFOCUS, _OnProductCodeKillfocusFnc);
	m_wndProductCode.SetEvent(WE_CHECKVALUE, _OnProductCodeCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	m_wndMfg.SetEvent(WE_SELENDOK, _OnMfgSelendokFnc);
	//m_wndMfg.SetEvent(WE_SETFOCUS, _OnMfgSetfocusFnc);
	//m_wndMfg.SetEvent(WE_KILLFOCUS, _OnMfgKillfocusFnc);
	m_wndMfg.SetEvent(WE_SELCHANGE, _OnMfgSelectChangeFnc);
	m_wndMfg.SetEvent(WE_LOADDATA, _OnMfgLoadDataFnc);
	//m_wndMfg.SetEvent(WE_ADDNEW, _OnMfgAddNewFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductTypeKey);
	DDX_TextEx(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_Text(pDX, m_wndProductName.GetDlgCtrlID(), m_szProductName);
	DDX_TextEx(pDX, m_wndUom.GetDlgCtrlID(), m_szUomKey);
	DDX_Check(pDX, m_wndSaleUomOption.GetDlgCtrlID(), m_bSaleUomOption);
	DDX_TextEx(pDX, m_wndSaleUom.GetDlgCtrlID(), m_szSaleUomKey);
	DDX_Text(pDX, m_wndConversionRate.GetDlgCtrlID(), m_nConversionRate);
	DDX_Text(pDX, m_wndSpecification.GetDlgCtrlID(), m_szSpecification);
	DDX_Text(pDX, m_wndProductCode.GetDlgCtrlID(), m_szProductCode);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_TextEx(pDX, m_wndMfg.GetDlgCtrlID(), m_szMfgKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CProductDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductDialog2::SetDefaultValues(){

	m_szProductTypeKey.Empty();
	m_szProductCategoryKey.Empty();
	m_szProductName.Empty();
	m_szUomKey.Empty();
	m_bSaleUomOption=FALSE;
	m_szSaleUomKey.Empty();
	m_nConversionRate=0;
	m_szSpecification.Empty();
	m_szProductCode.Empty();
	m_szSerialNo.Empty();
	m_szMfgKey.Empty();
	m_szSupplierKey.Empty();
	m_szDescription.Empty();
	m_bActive=FALSE;

}
int CProductDialog2::SetMode(int nMode){
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
void CProductDialog2::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnProductTypeSelendok(){
	 
}
/*void CProductDialog2::OnProductTypeSetfocus(){
	
}*/
/*void CProductDialog2::OnProductTypeKillfocus(){
	
}*/
long CProductDialog2::OnProductTypeLoadData(){
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
/*void CProductDialog2::OnProductTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductDialog2::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnProductCategorySelendok(){
	 
}
/*void CProductDialog2::OnProductCategorySetfocus(){
	
}*/
/*void CProductDialog2::OnProductCategoryKillfocus(){
	
}*/
long CProductDialog2::OnProductCategoryLoadData(){
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
/*void CProductDialog2::OnProductCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductDialog2::OnProductNameChange(){
	
} */
/*void CProductDialog2::OnProductNameSetfocus(){
	
} */
/*void CProductDialog2::OnProductNameKillfocus(){
	
} */
int CProductDialog2::OnProductNameCheckValue(){
	return 0;
} 
void CProductDialog2::OnUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnUomSelendok(){
	 
}
/*void CProductDialog2::OnUomSetfocus(){
	
}*/
/*void CProductDialog2::OnUomKillfocus(){
	
}*/
long CProductDialog2::OnUomLoadData(){
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
/*void CProductDialog2::OnUomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CProductDialog2::OnSaleUomOptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CProductDialog2::OnSaleUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnSaleUomSelendok(){
	 
}
/*void CProductDialog2::OnSaleUomSetfocus(){
	
}*/
/*void CProductDialog2::OnSaleUomKillfocus(){
	
}*/
long CProductDialog2::OnSaleUomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSaleUom.IsSearchKey() && !m_szSaleUomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSaleUomKey
};
	m_wndSaleUom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSaleUom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDialog2::OnSaleUomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductDialog2::OnConversionRateChange(){
	
} */
/*void CProductDialog2::OnConversionRateSetfocus(){
	
} */
/*void CProductDialog2::OnConversionRateKillfocus(){
	
} */
int CProductDialog2::OnConversionRateCheckValue(){
	return 0;
} 
/*void CProductDialog2::OnSpecificationChange(){
	
} */
/*void CProductDialog2::OnSpecificationSetfocus(){
	
} */
/*void CProductDialog2::OnSpecificationKillfocus(){
	
} */
int CProductDialog2::OnSpecificationCheckValue(){
	return 0;
} 
/*void CProductDialog2::OnProductCodeChange(){
	
} */
/*void CProductDialog2::OnProductCodeSetfocus(){
	
} */
/*void CProductDialog2::OnProductCodeKillfocus(){
	
} */
int CProductDialog2::OnProductCodeCheckValue(){
	return 0;
} 
/*void CProductDialog2::OnSerialNoChange(){
	
} */
/*void CProductDialog2::OnSerialNoSetfocus(){
	
} */
/*void CProductDialog2::OnSerialNoKillfocus(){
	
} */
int CProductDialog2::OnSerialNoCheckValue(){
	return 0;
} 
void CProductDialog2::OnMfgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnMfgSelendok(){
	 
}
/*void CProductDialog2::OnMfgSetfocus(){
	
}*/
/*void CProductDialog2::OnMfgKillfocus(){
	
}*/
long CProductDialog2::OnMfgLoadData(){
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
/*void CProductDialog2::OnMfgAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductDialog2::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnSupplierSelendok(){
	 
}
/*void CProductDialog2::OnSupplierSetfocus(){
	
}*/
/*void CProductDialog2::OnSupplierKillfocus(){
	
}*/
long CProductDialog2::OnSupplierLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDialog2::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductDialog2::OnDescriptionChange(){
	
} */
/*void CProductDialog2::OnDescriptionSetfocus(){
	
} */
/*void CProductDialog2::OnDescriptionKillfocus(){
	
} */
int CProductDialog2::OnDescriptionCheckValue(){
	return 0;
} 
void CProductDialog2::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CProductDialog2::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CProductDialog2::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductDialog2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductDialog2::OnAddProductDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductDialog2::OnEditProductDialog2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductDialog2::OnDeleteProductDialog2(){
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
 		OnCancelProductDialog2();
 	}
	return 0;
}
int CProductDialog2::OnSaveProductDialog2(){
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
 		//OnProductDialog2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductDialog2::OnCancelProductDialog2(){
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
int CProductDialog2::OnProductDialog2ListLoadData(){
	return 0;
}
