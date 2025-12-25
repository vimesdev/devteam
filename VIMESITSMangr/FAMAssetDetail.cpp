#include "FAMAssetDetail.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnSearchTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAssetDetail*)pWnd)->OnSearchTabSelectChange(nOld, nNew);
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAMAssetDetail*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetDetail*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAssetNoKillfocus();
} */
static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnAssetNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnModelCheckValue();
} 
/*static void _OnSerialChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSerialChange();
} */
/*static void _OnSerialSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSerialSetfocus();} */ 
/*static void _OnSerialKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSerialKillfocus();
} */
static int _OnSerialCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnSerialCheckValue();
} 
/*static void _OnManufacturedDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufacturedDateChange();
} */
/*static void _OnManufacturedDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufacturedDateSetfocus();} */ 
/*static void _OnManufacturedDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufacturedDateKillfocus();
} */
static int _OnManufacturedDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnManufacturedDateCheckValue();
} 
/*static void _OnGuaranteeDurationChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnGuaranteeDurationChange();
} */
/*static void _OnGuaranteeDurationSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnGuaranteeDurationSetfocus();} */ 
/*static void _OnGuaranteeDurationKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnGuaranteeDurationKillfocus();
} */
static int _OnGuaranteeDurationCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnGuaranteeDurationCheckValue();
} 
static void _OnMadeInSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnMadeInSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMadeInSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnMadeInSelendok();
}
/*static void _OnMadeInSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnMadeInKillfocus();
}*/
/*static void _OnMadeInKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnMadeInKillfocus();
}*/
static long _OnMadeInLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnMadeInLoadData();
}
/*static void _OnMadeInAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnMadeInAddNew();
}*/
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnUnitChange();
} */
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnAccessoriesChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAccessoriesChange();
} */
/*static void _OnAccessoriesSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAccessoriesSetfocus();} */ 
/*static void _OnAccessoriesKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnAccessoriesKillfocus();
} */
static int _OnAccessoriesCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnAccessoriesCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCategoryAddNew();
}*/
static void _OnConditionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnConditionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnConditionSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnConditionSelendok();
}
/*static void _OnConditionSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnConditionKillfocus();
}*/
/*static void _OnConditionKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnConditionKillfocus();
}*/
static long _OnConditionLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnConditionLoadData();
}
/*static void _OnConditionAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnConditionAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnEmployeerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnEmployeerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEmployeerSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnEmployeerSelendok();
}
/*static void _OnEmployeerSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnEmployeerKillfocus();
}*/
/*static void _OnEmployeerKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnEmployeerKillfocus();
}*/
static long _OnEmployeerLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnEmployeerLoadData();
}
/*static void _OnEmployeerAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnEmployeerAddNew();
}*/
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVendorAddNew();
}*/
/*static void _OnPurchaseInvoiceChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseInvoiceChange();
} */
/*static void _OnPurchaseInvoiceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseInvoiceSetfocus();} */ 
/*static void _OnPurchaseInvoiceKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseInvoiceKillfocus();
} */
static int _OnPurchaseInvoiceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnPurchaseInvoiceCheckValue();
} 
static void _OnPowerCircuitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnPowerCircuitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPowerCircuitSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPowerCircuitSelendok();
}
/*static void _OnPowerCircuitSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPowerCircuitKillfocus();
}*/
/*static void _OnPowerCircuitKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPowerCircuitKillfocus();
}*/
static long _OnPowerCircuitLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnPowerCircuitLoadData();
}
/*static void _OnPowerCircuitAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPowerCircuitAddNew();
}*/
/*static void _OnVoltageChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVoltageChange();
} */
/*static void _OnVoltageSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVoltageSetfocus();} */ 
/*static void _OnVoltageKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnVoltageKillfocus();
} */
static int _OnVoltageCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnVoltageCheckValue();
} 
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnCapacityCheckValue();
} 
/*static void _OnPurchaseDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseDateChange();
} */
/*static void _OnPurchaseDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseDateSetfocus();} */ 
static void _OnPurchaseDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchaseDateKillfocus();
}
static int _OnPurchaseDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnPurchaseDateCheckValue();
} 
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnPurchasePriceSetfocus();} */ 
static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd)
{
	((CFAMAssetDetail *)pWnd)->OnPurchasePriceKillfocus();
}
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnPurchasePriceCheckValue();
} 
static int _OnUsedDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnUsedDateCheckValue();
} 
/*static void _OnExpenseAccountAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnExpenseAccountAddNew();
}*/

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnTypeAddNew();
}*/
static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchDeptAddNew();
}*/

static void _OnAssetTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAssetDetail*)pWnd)->OnAssetTabSelectChange(nOld, nNew);
} 
static int _OnAddFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnAddFAMAsset();
} 
static int _OnEditFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnEditFAMAsset();
} 
static int _OnDeleteFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnDeleteFAMAsset();
} 
static int _OnSaveFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnSaveFAMAsset();
} 
static int _OnCancelFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnCancelFAMAsset();
} 
static void _OnManufactureLabelSelectFnc(CWnd *pWnd){
	CFAMAssetDetail *pVw = (CFAMAssetDetail *)pWnd;
	pVw->OnManufactureLabelSelect();
} 
static void _OnCategoryLabelSelectFnc(CWnd *pWnd)
{
	CFAMAssetDetail *pVw = (CFAMAssetDetail *)pWnd;
	pVw->OnCategoryLabelSelect();
}

static void _OnIncReasonLabelSelectFnc(CWnd *pWnd)
{
	CFAMAssetDetail *pVw = (CFAMAssetDetail *)pWnd;
	pVw->OnIncReasonLabelSelect();
}
static void _OnConditionLabelSelectFnc(CWnd *pWnd)
{
	CFAMAssetDetail *pVw = (CFAMAssetDetail *)pWnd;
	pVw->OnConditionLabelSelect();
}
static BOOL _OnUploadImageFnc(CWnd *pWnd, CString szFileName){
	return ((CFAMAssetDetail*)pWnd)->UploadImage(szFileName);
} 
static BOOL _OnUnlinkImageFnc(CWnd *pWnd, CString szFileName){
	return ((CFAMAssetDetail*)pWnd)->UnlinkImage(szFileName);
} 
static void _OnSourcesSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDetail* )pWnd)->OnSourcesSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourcesSelendokFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSourcesSelendok();
}
/*static void _OnSourcesSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSourcesKillfocus();
}*/
/*static void _OnSourcesKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSourcesKillfocus();
}*/
static long _OnSourcesLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnSourcesLoadData();
}
/*static void _OnSourcesAddNewFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSourcesAddNew();
}*/
/*static void _OnDeprTimeChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDeprTimeChange();
} */
/*static void _OnDeprTimeSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDeprTimeSetfocus();} */ 
/*static void _OnDeprTimeKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnDeprTimeKillfocus();
} */
static int _OnDeprTimeCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnDeprTimeCheckValue();
} 
/*static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchByNameChange();
} */
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDetail *)pWnd)->OnSearchByNameSetfocus();} */ 
static void _OnSearchByNameKillfocusFnc(CWnd *pWnd)
{
	((CFAMAssetDetail *)pWnd)->OnSearchByNameKillfocus();
}
static int _OnCancelAssetListFnc(CWnd *pWnd){
	return ((CFAMAssetDetail*)pWnd)->OnCancelAssetList();
}
static int _OnEditAssetFnc(CWnd *pWnd){
	return ((CFAMAssetDetail*)pWnd)->OnEditAsset();
} 
static int _OnSaveAssetFnc(CWnd *pWnd){
	 return ((CFAMAssetDetail*)pWnd)->OnSaveAsset();
} 
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnSearchByNameCheckValue();
}
static int _OnPrintImportOrderFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnPrintImportOrder();
} 
static int _OnFixedAssetCardFnc(CWnd *pWnd){
	return ((CFAMAssetDetail *)pWnd)->OnFixedAssetCard();
}

CFAMAssetDetail::CFAMAssetDetail()
{
	m_nDlgWidth = 1024;
	m_nDlgHeight = 690;
	SetDefaultValues();
}
CFAMAssetDetail::~CFAMAssetDetail()
{
}

void CFAMAssetDetail::OnCreateComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAssetInformation.Create(this, _T("Asset Information"), 5, 235, 815, 625);
	m_wndAssets.Create(this, _T("Assets"), 5, 5, 815, 230);
	m_wndList.Create(this,10, 60, 810, 225); 
	m_wndAssetNoLabel.Create(this, _T("Asset No"), 10, 260, 90, 285);
	m_wndAssetNo.Create(this,95, 260, 270, 285); 
	m_wndNameLabel.Create(this, _T("Name"), 275, 260, 355, 285);
	m_wndName.Create(this,360, 260, 565, 285); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 570, 260, 650, 285);
	m_wndDescription.Create(this,655, 260, 810, 285); 
	m_wndModelLabel.Create(this, _T("Model"), 10, 290, 90, 315);
	m_wndModel.Create(this,95, 290, 270, 315); 
	m_wndSerialLabel.Create(this, _T("Serial"), 275, 290, 355, 315);
	m_wndSerial.Create(this,360, 290, 565, 315); 
	m_wndMadeInLabel.Create(this, _T("Made In"), 570, 291, 650, 316);
	m_wndMadeIn.Create(this,655, 290, 810, 315); 
	m_wndVendorLabel.Create(this, _T("Vendor"), 10, 320, 90, 345);
	m_wndVendor.Create(this,95, 320, 270, 345); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 275, 320, 355, 345);
	m_wndManufacture.Create(this,360, 320, 565, 345); 
	m_wndManufacturedDateLabel.Create(this, _T("Mfg Year"), 570, 320, 650, 345);
	m_wndManufacturedDate.Create(this,655, 320, 695, 345); 
	m_wndGuaranteeDurationLabel.Create(this, _T("Guarantee"), 700, 320, 775, 345);
	m_wndGuaranteeDuration.Create(this,780, 320, 810, 345); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 350, 90, 375);
	m_wndQuantity.Create(this,95, 350, 135, 375); 
	m_wndUnitLabel.Create(this, _T("Calc Unit"), 140, 350, 210, 375);
	m_wndUnit.Create(this,215, 350, 270, 375); 
	m_wndCategoryLabel.Create(this, _T("Category"), 275, 350, 355, 375);
	m_wndCategory.Create(this,360, 350, 565, 375); 
	m_wndConditionLabel.Create(this, _T("Condition"), 570, 350, 650, 375);
	m_wndCondition.Create(this,655, 350, 810, 375); 
	m_wndPowerCircuitLabel.Create(this, _T("Power Circuit"), 10, 380, 90, 405);
	m_wndPowerCircuit.Create(this,95, 380, 270, 405); 
	m_wndVoltageLabel.Create(this, _T("Voltage"), 275, 380, 355, 405);
	m_wndVoltage.Create(this,360, 380, 405, 405); 
	m_wndCapacityLabel.Create(this, _T("Capacity"), 410, 380, 480, 405);
	m_wndCapacity.Create(this,485, 380, 565, 405); 
	m_wndPurchaseDateLabel.Create(this, _T("Purchase Date"), 570, 380, 650, 405);
	m_wndPurchaseDate.Create(this,655, 380, 810, 405); 
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 10, 410, 90, 435);
	m_wndPurchasePrice.Create(this,95, 410, 270, 435); 
	m_wndUsedDateLabel.Create(this, _T("Used Date"), 275, 410, 355, 435);
	m_wndUsedDate.Create(this,360, 410, 565, 435); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 570, 410, 650, 435);
	m_wndDepartment.Create(this,655, 410, 810, 435); 
	m_wndDeprTimeLabel.Create(this, _T("Depr Time"), 10, 440, 90, 465);
	m_wndDeprTime.Create(this,95, 440, 270, 465); 
	m_wndDeprValueLabel.Create(this, _T("Accum Depr"), 275, 440, 355, 465);
	m_wndDeprValue.Create(this,360, 440, 565, 465); 
	m_wndAssetTab.Create(this,10, 470, 810, 620); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 240, 55); 
	m_wndSearchDeptLabel.Create(this, _T("Department"), 245, 30, 325, 55);
	m_wndSearchDept.Create(this,330, 30, 520, 55); 
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 525, 30, 605, 55);
	m_wndSearchByName.Create(this,610, 30, 810, 55);
	

	m_wndImage.Create(&m_wndAssetTab, 10, 10, 595, 225);
	m_wndUsageProcess.Create(&m_wndAssetTab);
	//m_wndTransfer.Create(&m_wndAssetTab);
	m_wndAssetDeprec.Create(&m_wndAssetTab);
	m_wndAssetMaint.Create(&m_wndAssetTab);
	//m_wndAssetNote.Create(&m_wndAssetTab);
	m_wndAttachment.Create(&m_wndAssetTab);
	m_wndAccessory.Create(&m_wndAssetTab);
	//m_wndInventory.Create(&m_wndAssetTab);
	
	m_wndAssetTab.Add(_T("Image"), &m_wndImage);
	m_wndAssetTab.Add(_T("Usage Process"), &m_wndUsageProcess);
	//m_wndAssetTab.Add(_T("Asset Transfer"), &m_wndTransfer);
	m_wndAssetTab.Add(_T("Depreciation"), &m_wndAssetDeprec);
	m_wndAssetTab.Add(_T("Maintenance and Repairs"), &m_wndAssetMaint);
	m_wndAssetTab.Add(_T("Attachment"), &m_wndAttachment);
	m_wndAssetTab.Add(_T("Accessories"), &m_wndAccessory);
	//m_wndAssetTab.Add(_T("Inventoried"), &m_wndInventory);
	//m_wndAssetTab.Add(_T("Note"), &m_wndAssetNote);
}
void CFAMAssetDetail::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndAssetNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndAssetNo.SetLimitText(15);
	m_wndAssetNo.SetCheckValue(true);
	//m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###")); //ma ts cua cuc QY
	//m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###.##.AAAAAA")); //ma ts ghep them khoa
	m_wndAssetNo.SetMask(_T("A##.##.##.##.##.###.####")); //ma ts them stt
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndModel.SetLimitText(35);
	m_wndSerial.SetLimitText(15);
	m_wndManufactureLabel.SetHyperlink(true);
	m_wndManufacturedDate.SetCheckValue(true);
	m_wndGuaranteeDuration.SetLimitText(2);
	m_wndMadeIn.SetCheckValue(true);
	m_wndMadeIn.LimitText(35);
	//m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(15);
	m_wndUnit.SetCheckValue(true);
	m_wndCategoryLabel.SetHyperlink(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndConditionLabel.SetHyperlink(true);
	//m_wndCondition.SetCheckValue(true);
	m_wndCondition.LimitText(15);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndVendor.LimitText(15);
	m_wndPurchaseDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPurchasePrice.SetLimitText(16);
	m_wndPurchasePrice.SetCurrencyFormat(TRUE);
	m_wndUsedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDeprValue.SetLimitText(16);
	m_wndDeprValue.SetCurrencyFormat(TRUE);
	m_wndSearchByName.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndSearchDept.LimitText(35);
	m_wndAssetTab.SetCurSel(0);
	
	m_wndList.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Created By"), CFMT_TEXT, 50);

	m_wndList.ModifyStyle(0, LVS_SHOWSELALWAYS | LVS_NOSORTHEADER);
	
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

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_fam_assetTbl.SetTableName(_T("fam_asset"));
	m_fam_assetTbl.AddField(_T("fa_createdby"), dfText, 25);
	m_fam_assetTbl.AddField(_T("fa_createddate"), dfDateTime);
	m_fam_assetTbl.AddField(_T("fa_updatedby"), dfText, 25);
	m_fam_assetTbl.AddField(_T("fa_updateddate"), dfDateTime);
	m_fam_assetTbl.AddField(_T("fa_assetno"), dfText, 30);
	m_fam_assetTbl.AddField(_T("fa_name"), dfText, 254);
	m_fam_assetTbl.AddField(_T("fa_category"), dfText, 7);
	m_fam_assetTbl.AddField(_T("fa_madein"), dfText, 3);
	m_fam_assetTbl.AddField(_T("fa_mfgid"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_branch"), dfText, 35);
	m_fam_assetTbl.AddField(_T("fa_model"), dfText, 35);
	m_fam_assetTbl.AddField(_T("fa_serial"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_condition"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_unit"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_vendorid"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_purchasedate"), dfDate);
	m_fam_assetTbl.AddField(_T("fa_useddate"), dfDate);
	m_fam_assetTbl.AddField(_T("fa_purchaseprice"), dfDouble);
	m_fam_assetTbl.AddField(_T("fa_mfgdate"), dfDouble);
	m_fam_assetTbl.AddField(_T("fa_description"), dfText, 254);
	m_fam_assetTbl.AddField(_T("fa_power"), dfText, 15);
	m_fam_assetTbl.AddField(_T("fa_powercircuit"), dfText, 2);
	m_fam_assetTbl.AddField(_T("fa_voltage"), dfText, 6);
	
}
void CFAMAssetDetail::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Add same asset"), _OnAddSameAssetFnc, 0, 0, 0);
	m_wndList.AddEvent(1, _T("Fixed Asset Card"), _OnFixedAssetCardFnc, 0, 0, 0);
	if(pMF->CheckPermission(_T("34")) || pMF->GetCurrentUser() == _T("admin"))
	{
		m_wndList.AddEvent(2, _T("H\x1EE7y \x64\x61nh m\x1EE5\x63 m\xE1y"), _OnCancelAssetListFnc, 0,0,0);
	}
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	//m_wndManufacturedDate.SetEvent(WE_CHANGE, _OnManufacturedDateChangeFnc);
	//m_wndManufacturedDate.SetEvent(WE_SETFOCUS, _OnManufacturedDateSetfocusFnc);
	//m_wndManufacturedDate.SetEvent(WE_KILLFOCUS, _OnManufacturedDateKillfocusFnc);
	m_wndManufacturedDate.SetEvent(WE_CHECKVALUE, _OnManufacturedDateCheckValueFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_CHANGE, _OnGuaranteeDurationChangeFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_SETFOCUS, _OnGuaranteeDurationSetfocusFnc);
	//m_wndGuaranteeDuration.SetEvent(WE_KILLFOCUS, _OnGuaranteeDurationKillfocusFnc);
	m_wndGuaranteeDuration.SetEvent(WE_CHECKVALUE, _OnGuaranteeDurationCheckValueFnc);
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
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndCondition.SetEvent(WE_SELENDOK, _OnConditionSelendokFnc);
	//m_wndCondition.SetEvent(WE_SETFOCUS, _OnConditionSetfocusFnc);
	//m_wndCondition.SetEvent(WE_KILLFOCUS, _OnConditionKillfocusFnc);
	m_wndCondition.SetEvent(WE_SELCHANGE, _OnConditionSelectChangeFnc);
	m_wndCondition.SetEvent(WE_LOADDATA, _OnConditionLoadDataFnc);
	//m_wndCondition.SetEvent(WE_ADDNEW, _OnConditionAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
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
	//m_wndPurchaseDate.SetEvent(WE_CHANGE, _OnPurchaseDateChangeFnc);
	//m_wndPurchaseDate.SetEvent(WE_SETFOCUS, _OnPurchaseDateSetfocusFnc);
	m_wndPurchaseDate.SetEvent(WE_KILLFOCUS, _OnPurchaseDateKillfocusFnc);
	m_wndPurchaseDate.SetEvent(WE_CHECKVALUE, _OnPurchaseDateCheckValueFnc);
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	//m_wndDeprTime.SetEvent(WE_CHANGE, _OnDeprTimeChangeFnc);
	//m_wndDeprTime.SetEvent(WE_SETFOCUS, _OnDeprTimeSetfocusFnc);
	//m_wndDeprTime.SetEvent(WE_KILLFOCUS, _OnDeprTimeKillfocusFnc);
	m_wndDeprTime.SetEvent(WE_CHECKVALUE, _OnDeprTimeCheckValueFnc);
	//m_wndUsedDate.SetEvent(WE_CHANGE, _OnUsedDateChangeFnc);
	//m_wndUsedDate.SetEvent(WE_SETFOCUS, _OnUsedDateSetfocusFnc);
	//m_wndUsedDate.SetEvent(WE_KILLFOCUS, _OnUsedDateKillfocusFnc);
	m_wndUsedDate.SetEvent(WE_CHECKVALUE, _OnUsedDateCheckValueFnc);
	//m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSearchDept.SetEvent(WE_SELENDOK, _OnSearchDeptSelendokFnc);
	//m_wndSearchDept.SetEvent(WE_SETFOCUS, _OnSearchDeptSetfocusFnc);
	//m_wndSearchDept.SetEvent(WE_KILLFOCUS, _OnSearchDeptKillfocusFnc);
	m_wndSearchDept.SetEvent(WE_SELCHANGE, _OnSearchDeptSelectChangeFnc);
	m_wndSearchDept.SetEvent(WE_LOADDATA, _OnSearchDeptLoadDataFnc);
	//m_wndSearchDept.SetEvent(WE_ADDNEW, _OnSearchDeptAddNewFnc);

	m_wndAssetTab.SetEvent(WE_SELCHANGE, _OnAssetTabSelectChangeFnc);
	m_wndManufactureLabel.SetEvent(WE_CLICK, _OnManufactureLabelSelectFnc);
	m_wndCategoryLabel.SetEvent(WE_CLICK, _OnCategoryLabelSelectFnc);
	//m_wndCurrentValueLabel.SetEvent(WE_CLICK, _OnCurrentValueLabelSelectFnc);
	m_wndConditionLabel.SetEvent(WE_CLICK, _OnConditionLabelSelectFnc);
	//m_wndManufactureLabel.SetEvent(WM_MOUSEMOVE, _OnCategoryLabelMouseMoveFnc);
	m_wndImage.SetAddImageFnc(_OnUploadImageFnc);
	m_wndImage.SetRemoveImageFnc(_OnUnlinkImageFnc);

	if(pMF->CheckPermission(_T("30")) || pMF->GetCurrentUser() == _T("admin"))
	{
		AddEvent(1, _T("Edit"), _OnEditAssetFnc, 0, 'E', VK_CONTROL);
		AddEvent(2, _T("Save"), _OnSaveAssetFnc, 0, 'S', VK_CONTROL);
		AddEvent(3, _T("Cancel"), _OnCancelFAMAssetFnc, 0, 'C', VK_CONTROL);
	}

	SetWindowText(_T("Asset Information"));

	m_isDeposed = false;
	m_isEdit = false;
	m_szOStatus = _T("O");
	m_szTransType = _T("E");
	//m_isOpenEx = false;
	m_szCapacity.Empty();
	pMF->m_szDeprUnit.Empty();
	pMF->m_nAccumDepr = 0;
	SetMode(VM_NONE);
	OnListLoadData();
}
void CFAMAssetDetail::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndSerial.GetDlgCtrlID(), m_szSerial);
	DDX_Text(pDX, m_wndManufacturedDate.GetDlgCtrlID(), m_nManufacturedDate);
	DDX_Text(pDX, m_wndGuaranteeDuration.GetDlgCtrlID(), m_szGuaranteeDuration);
	DDX_TextEx(pDX, m_wndMadeIn.GetDlgCtrlID(), m_szMadeInKey);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndCondition.GetDlgCtrlID(), m_szConditionKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndPowerCircuit.GetDlgCtrlID(), m_szPowerCircuitKey);
	DDX_Text(pDX, m_wndVoltage.GetDlgCtrlID(), m_szVoltage);
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_szCapacity);
	DDX_TextEx(pDX, m_wndPurchaseDate.GetDlgCtrlID(), m_szPurchaseDate);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_TextEx(pDX, m_wndUsedDate.GetDlgCtrlID(), m_szUsedDate);
	DDX_Text(pDX, m_wndDeprValue.GetDlgCtrlID(), m_nDeprValue);
	DDX_Text(pDX, m_wndDeprTime.GetDlgCtrlID(), m_nDeprTime);
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	//DDX_Check(pDX, m_wndAddOldAsset.GetDlgCtrlID(), m_bAddOldAsset);

}
void CFAMAssetDetail::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	/*szSQL.Format(_T("SELECT fa_name, fa_category, fa_department, fa_employee, fa_madein, fa_mfgid, fa_model, fa_serial, ") \
		_T(" fa_condition, fa_unit, fa_quantity, fa_purchaseinvoiceno, fa_vendorid, fa_purchasedate, fa_useddate, fa_purchaseprice, ") \
		_T(" fa_depreciation, fa_mfgdate, fa_guaranteeduration, fa_description, fa_accessories, fa_deprunit, fa_power, ") \
		_T(" fa_voltage, fa_powercircuit, fa_transportprice, fa_sources, fa_increasedate, fa_increason, fa_deprtime, fa_deprmethod ") \
		_T(" FROM fam_asset WHERE fa_assetno='%s'"), m_szAssetNo);*/
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
				_T(" WHERE stockqty > 0 "), m_szAssetNo);
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
		rs.GetValue(_T("si_uom_id"), m_szUnitKey);
		rs.GetValue(_T("stockqty"), m_nQuantity);
		rs.GetValue(_T("fa_purchaseinvoiceno"), m_szPurchaseInvoice);
		rs.GetValue(_T("sil_vendorid"), m_szVendorKey);
		rs.GetValue(_T("fa_purchasedate"), m_szPurchaseDate);
		rs.GetValue(_T("fa_useddate"), m_szUsedDate);
		rs.GetValue(_T("purchaseprice"), m_nPurchasePrice);
		//rs.GetValue(_T("fa_currentvalue"), m_nCurrentValue); 
		rs.GetValue(_T("fa_depreciation"), m_nDeprValue);
		rs.GetValue(_T("fa_deprtime"), m_nDeprTime);
		rs.GetValue(_T("ngaysx"), m_nManufacturedDate);
		rs.GetValue(_T("sil_guaranteeduration"), m_szGuaranteeDuration);
		rs.GetValue(_T("fa_description"), m_szDescription);
		rs.GetValue(_T("fa_accessories"), m_szAccessories);
		rs.GetValue(_T("fa_deprunit"), m_szDeprUnit);
		rs.GetValue(_T("sil_power"), m_szCapacity);
		rs.GetValue(_T("sil_voltage"), m_szVoltage);
		rs.GetValue(_T("sil_powercircuit"), m_szPowerCircuitKey);
	
		UpdateData(FALSE);
		SetMode(VM_VIEW);	
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CFAMAssetDetail::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetDetail::SetDefaultValues()
{
	m_szAssetNo.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_szModel.Empty();
	m_szSerial.Empty();
	m_nManufacturedDate=0;
	m_szGuaranteeDuration.Empty();
	m_szMadeInKey.Empty();
	m_szManufactureKey.Empty();
	m_szUnitKey.Empty();
	m_szAccessories.Empty();
	m_szCategoryKey.Empty();
	m_szConditionKey.Empty();
	m_szDepartmentKey.Empty();
	m_szEmployeerKey.Empty();
	m_szVendorKey.Empty();
	m_szPurchaseInvoice.Empty();
	m_szPurchaseDate.Empty();
	m_nPurchasePrice=0;
	m_szUsedDate.Empty();
	m_nDeprValue=0;
	m_szPowerCircuitKey.Empty();
	m_szCapacity.Empty();
	m_szVoltage.Empty();
	m_szSourcesKey.Empty();
	m_nDeprTime=0;
	m_nQuantity=0;
	m_szTypeKey.Empty();
	m_szSearchDeptKey.Empty();
}
int CFAMAssetDetail::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
		int nCount;
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD:  
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDeprValue.EnableWindow(false);
 			SetDefaultValues(); 
			m_wndAssetNo.SetFocus();
			if(pMF->szType == _T("DCU"))
			{
				m_wndQuantity.EnableWindow(TRUE);
			}else
				m_wndQuantity.EnableWindow(FALSE);

			m_wndDeprValue.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			//if(pMF->szType == _T("DCU"))// || pMF->szType == _T("TBYT"))
			//{
			//	m_wndQuantity.EnableWindow(TRUE);
			//}else
			//	m_wndQuantity.EnableWindow(FALSE);
			//if (!pMF->m_szDeprUnit.IsEmpty())
			//{
			//	m_wndManufacturedDate.EnableWindow(false);
			//	m_wndPurchaseDate.EnableWindow(false);
			//	m_wndUsedDate.EnableWindow(false);
			//	m_wndPurchasePrice.EnableWindow(false);
			//}
			////m_wndAssetNo.EnableWindow(false);
			//m_wndDeprValue.EnableWindow(false);
			m_wndAssetNo.EnableWindow(FALSE);
			m_wndName.EnableWindow(FALSE);
			m_wndDepartment.EnableWindow(FALSE);
			m_wndDescription.EnableWindow(TRUE);
			m_wndMadeIn.EnableWindow(TRUE);
			m_wndVendor.EnableWindow(TRUE);
			m_wndSerial.EnableWindow(TRUE);
			m_wndManufacture.EnableWindow(TRUE);
			m_wndManufacturedDate.EnableWindow(TRUE);
			m_wndGuaranteeDuration.EnableWindow(TRUE);
			m_wndPowerCircuit.EnableWindow(TRUE);
			m_wndVoltage.EnableWindow(TRUE);
			m_wndCapacity.EnableWindow(TRUE);
			m_wndPurchaseDate.EnableWindow(TRUE);//
			m_wndPurchasePrice.EnableWindow(TRUE);//
			m_wndUsedDate.EnableWindow(TRUE);//
			m_wndModel.EnableWindow(TRUE);//
			m_wndCategory.EnableWindow(TRUE);//
			m_wndUnit.EnableWindow(TRUE);//
			m_wndDeprTime.EnableWindow(FALSE);
			m_wndDeprValue.EnableWindow(FALSE);
			m_wndAssetInformation.SetFocus();
			/*m_wndName.SetFocus();
			m_wndName.SetSel(m_wndName.GetWindowTextLength(), m_wndName.GetWindowTextLength());*/
			m_wndSearchByName.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
			szSQL.Format(_T("Select Count(*) From fam_usingprocess Where faup_assetno='%s' And faup_type='%s'"), 
							m_szAssetNo, m_szTransType);
			rs.ExecSQL(szSQL);
			nCount = rs.GetIntValue();
			if (nCount > 0)
			{
				m_isDeposed = true;
				EnableButtons(FALSE, 1, 2, 3, 4, 5, 6, -1);
			}
			else
			{
				m_isDeposed = false;
 				EnableButtons(FALSE, 3, 4, -1); 
			}
			//}
			m_wndSearchByName.EnableWindow(TRUE);
			m_wndType.EnableWindow(TRUE);
			m_wndSearchDept.EnableWindow(TRUE);
			m_wndPurchaseDate.EnableWindow(FALSE);
			m_wndPurchasePrice.EnableWindow(FALSE);
			m_wndUsedDate.EnableWindow(FALSE);
			m_wndDeprValue.EnableWindow(FALSE);

 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			m_wndImage.EnableWindow(FALSE);
			m_wndSearchByName.EnableWindow(TRUE);
			m_wndType.EnableWindow(TRUE);
			m_wndSearchDept.EnableWindow(TRUE);
			m_wndPurchaseDate.EnableWindow(FALSE);
			m_wndPurchasePrice.EnableWindow(FALSE);
			m_wndUsedDate.EnableWindow(FALSE);
			m_wndDeprValue.EnableWindow(FALSE);
 			break; 
 		};

 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CFAMAssetDetail::OnSearchTabSelectChange(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMAssetDetail::FindSelectIndex(CString szValue, CGuiListCtrl *pList)
{
	int nIndex = -1;
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (pList->GetItemText(i, 0) == szValue)
		{
			nIndex = i;
			break;
		}
	}
	return nIndex;
}
void CFAMAssetDetail::OnListDblClick()
{
	//MessageBox(_T("OK"));
}
void CFAMAssetDetail::ResetData()
{
	SetMode(VM_NONE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndList.SetCurSel(-1);
	m_szAssetNo.Empty();
	//pMF->m_szDeprUnit.Empty();
	pMF->m_szAssetNo = m_szAssetNo;
	if (m_wndAssetTab.GetCurSel() == 0)
	{
		m_wndImage.EnableWindow(FALSE);
		m_wndImage.SetFileName(_T(""), TRUE);
		m_wndImage.Invalidate();
	}
	else if (m_wndAssetTab.GetCurSel() == 1)
		m_wndUsageProcess.OnUsageProcessListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 2)
		m_wndTransfer.OnTransferListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 3)
		m_wndAssetDeprec.OnDeprecListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 4)
		m_wndAssetMaint.OnMaintenListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 5)
		m_wndAttachment.OnAttachListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 6)
		m_wndAccessory.OnListLoadData();
	else if (m_wndAssetTab.GetCurSel() == 7)
		m_wndInventory.OnInventoriedLoadData();
}
void CFAMAssetDetail::OnListSelectChange(int nOldItem, int nNewItem)
{
	if (nNewItem < 0) return;
	m_szAssetNo = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	m_wndAssetTab.SetCurSel(0);
	DownloadImage();

} 
int CFAMAssetDetail::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAssetDetail::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems();
	int nCount = 0;
	if(!m_szTypeKey.IsEmpty())
		//szWhere.AppendFormat(_T(" AND fa_type='%s' "), m_szTypeKey);
	if (!m_szSearchDeptKey.IsEmpty())
		//szWhere.AppendFormat(_T(" AND fa_department='%s' "), m_szSearchDeptKey);
		szWhere.AppendFormat(_T(" AND sb_storage_id ='%s' "), m_szSearchDeptKey);
	if (!m_szSearchByName.IsEmpty())
		//szWhere.AppendFormat(_T(" AND upper(fa_name) LIKE chr(37)||upper('%s')||chr(37)"), m_szSearchByName);
		szWhere.AppendFormat(_T(" AND upper(si_name) LIKE chr(37)||upper('%s')||chr(37)"), m_szSearchByName);
	
	/*szSQL.Format(_T("SELECT fa_assetno AS ID, fa_name AS Name, fa_category, fa_type, fa_createdby as nguoitao, fa_model, fa_serial FROM fam_asset")\
		         _T(" WHERE fa_ustatus is null %s ") \
				 _T(" ORDER BY fa_category, fa_type, fa_name"), szWhere);*/

	szSQL.Format(_T(" SELECT assetno as ID, assetname as Name, sil_model as fa_model, si_serial as fa_serial, stockqty ") \
				_T(" FROM ") \
				_T(" ( ") \
				_T("	select si_item_id as assetno, si_name as assetname, sil_model, si_serial, ") \
				_T("	COALESCE(SUM(SB_QTYONHAND-SB_QTYORDERED-SB_QTYPREORDERED), 0) as stockqty ") \
				_T("	FROM storage_item ") \
				_T("	LEFT JOIN storage_item_list ON(sil_item_list_id = si_item_list_id) ") \
				_T("	LEFT JOIN storage_bin ON(sb_item_id = si_item_id) ") \
				_T("	WHERE  si_org_id = 'ITS' %s") \
				_T("	GROUP BY si_item_id, si_name, sil_model, si_serial ") \
				_T("	ORDER BY si_name ") \
				_T(" ) ") \
				_T("	WHERE stockqty > 0 "), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			rs.GetValue(_T("nguoitao")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	//ResetData();
	return nCount;
}
/*void CFAMAssetDetail::OnAssetNoChange(){
	
} */
/*void CFAMAssetDetail::OnAssetNoSetfocus(){
	
} */
/*void CFAMAssetDetail::OnAssetNoKillfocus(){
	
} */
int CFAMAssetDetail::OnAssetNoCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_assetno='%s'"), m_szAssetNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndAssetNo.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CFAMAssetDetail::OnNameChange(){
	
} */
/*void CFAMAssetDetail::OnNameSetfocus(){
	
} */
/*void CFAMAssetDetail::OnNameKillfocus(){
	
} */
int CFAMAssetDetail::OnNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	//UpdateData(FALSE);
	return 0;
} 
/*void CFAMAssetDetail::OnDescriptionChange(){
	
} */
/*void CFAMAssetDetail::OnDescriptionSetfocus(){
	
} */
/*void CFAMAssetDetail::OnDescriptionKillfocus(){
	
} */
int CFAMAssetDetail::OnDescriptionCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnModelChange(){
	
} */
/*void CFAMAssetDetail::OnModelSetfocus(){
	
} */
/*void CFAMAssetDetail::OnModelKillfocus(){
	
} */
int CFAMAssetDetail::OnModelCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnSerialChange(){
	
} */
/*void CFAMAssetDetail::OnSerialSetfocus(){
	
} */
/*void CFAMAssetDetail::OnSerialKillfocus(){
	
} */
int CFAMAssetDetail::OnSerialCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnManufacturedDateChange(){
	
} */
/*void CFAMAssetDetail::OnManufacturedDateSetfocus(){
	
} */
/*void CFAMAssetDetail::OnManufacturedDateKillfocus(){
	
} */
int CFAMAssetDetail::OnManufacturedDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CDate date;
	date.ParseDate(pMF->GetSysDate());
	if (m_nManufacturedDate <= 0 || m_nManufacturedDate > date.GetYear())
	{
		m_wndManufacturedDate.SetToolTipMessage(_T("This value must be greater than zero and less than current year"));
		return -1;
	}
	return 0;
} 
/*void CFAMAssetDetail::OnGuaranteeDurationChange(){
	
} */
/*void CFAMAssetDetail::OnGuaranteeDurationSetfocus(){
	
} */
/*void CFAMAssetDetail::OnGuaranteeDurationKillfocus(){
	
} */
int CFAMAssetDetail::OnGuaranteeDurationCheckValue(){
	return 0;
} 
void CFAMAssetDetail::OnMadeInSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnMadeInSelendok(){
	 
}
/*void CFAMAssetDetail::OnMadeInSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnMadeInKillfocus(){
	
}*/
long CFAMAssetDetail::OnMadeInLoadData()
{
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

/*void CFAMAssetDetail::OnMadeInAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetail::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnManufactureSelendok(){
	 
}
/*void CFAMAssetDetail::OnManufactureSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnManufactureKillfocus(){
	
}*/
long CFAMAssetDetail::OnManufactureLoadData()
{
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
/*void CFAMAssetDetail::OnManufactureAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDetail::OnQuantityChange(){
	
} */
/*void CFAMAssetDetail::OnQuantitySetfocus(){
	
} */
/*void CFAMAssetDetail::OnQuantityKillfocus(){
	
} */
int CFAMAssetDetail::OnQuantityCheckValue(){
	return 0;
} 
long CFAMAssetDetail::OnUnitLoadData(){
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
/*void CFAMAssetDetail::OnUnitChange(){
	
} */
/*void CFAMAssetDetail::OnUnitSetfocus(){
	
} */
/*void CFAMAssetDetail::OnUnitKillfocus(){
	
} */
int CFAMAssetDetail::OnUnitCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnAccessoriesChange(){
	
} */
/*void CFAMAssetDetail::OnAccessoriesSetfocus(){
	
} */
/*void CFAMAssetDetail::OnAccessoriesKillfocus(){
	
} */
int CFAMAssetDetail::OnAccessoriesCheckValue(){
	return 0;
} 
void CFAMAssetDetail::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnCategorySelendok(){
	 
}
/*void CFAMAssetDetail::OnCategorySetfocus(){
	
}*/
/*void CFAMAssetDetail::OnCategoryKillfocus(){
	
}*/
long CFAMAssetDetail::OnCategoryLoadData()
{
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
/*void CFAMAssetDetail::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetail::OnConditionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnConditionSelendok(){
	 
}
/*void CFAMAssetDetail::OnConditionSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnConditionKillfocus(){
	
}*/
long CFAMAssetDetail::OnConditionLoadData()
{
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
/*void CFAMAssetDetail::OnConditionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetail::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnDepartmentSelendok(){
	 
}
/*void CFAMAssetDetail::OnDepartmentSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnDepartmentKillfocus(){
	
}*/
long CFAMAssetDetail::OnDepartmentLoadData()
{
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
/*void CFAMAssetDetail::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CFAMAssetDetail::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnVendorSelendok(){
	 
}
/*void CFAMAssetDetail::OnVendorSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnVendorKillfocus(){
	
}*/
long CFAMAssetDetail::OnVendorLoadData()
{
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
/*void CFAMAssetDetail::OnVendorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		
} */
/*void CFAMAssetDetail::OnPurchaseInvoiceChange(){
	
} */
/*void CFAMAssetDetail::OnPurchaseInvoiceSetfocus(){
	
} */
/*void CFAMAssetDetail::OnPurchaseInvoiceKillfocus(){
	
} */
int CFAMAssetDetail::OnPurchaseInvoiceCheckValue(){
	return 0;
} 
void CFAMAssetDetail::OnPowerCircuitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnPowerCircuitSelendok(){
	 
}
/*void CFAMAssetDetail::OnPowerCircuitSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnPowerCircuitKillfocus(){
	
}*/
long CFAMAssetDetail::OnPowerCircuitLoadData(){
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
/*void CFAMAssetDetail::OnPowerCircuitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDetail::OnVoltageChange(){
	
} */
/*void CFAMAssetDetail::OnVoltageSetfocus(){
	
} */
/*void CFAMAssetDetail::OnVoltageKillfocus(){
	
} */
int CFAMAssetDetail::OnVoltageCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnCapacityChange(){
	
} */
/*void CFAMAssetDetail::OnCapacitySetfocus(){
	
} */
/*void CFAMAssetDetail::OnCapacityKillfocus(){
	
} */
int CFAMAssetDetail::OnCapacityCheckValue(){
	return 0;
} 
/*void CFAMAssetDetail::OnPurchaseDateChange(){
	
} */
/*void CFAMAssetDetail::OnPurchaseDateSetfocus(){
	
} */
void CFAMAssetDetail::OnPurchaseDateKillfocus()
{
	if (!m_szPurchaseDate.IsEmpty())
	{
		m_wndUsedDate.Clear();
		CDate date(m_szPurchaseDate);
		if (date.GetYear() != 1752)
		{
			CString szDate;
			szDate.Format(_T("%.2d/%.2d/%.4d"), date.GetDay(), date.GetMonth(), date.GetYear());
			m_wndUsedDate.SetData(szDate);
		}
	}
}
int CFAMAssetDetail::OnPurchaseDateCheckValue()
{
	//UpdateData(TRUE);
	/*if (m_nManufacturedDate > 0)
	{
		CDate dt(m_szPurchaseDate);
		if (dt.GetYear() < m_nManufacturedDate)
		{
			m_wndPurchaseDate.SetToolTipMessage("Year must be greater than or equal to Manufacture Year");
			return -1;
		}
	}*/
	return 0;
} 
/*void CFAMAssetDetail::OnPurchasePriceChange(){
	
} */
/*void CFAMAssetDetail::OnPurchasePriceSetfocus(){
	
} */
void CFAMAssetDetail::OnPurchasePriceKillfocus()
{	
	//if (GetMode() == VM_ADD)
	//	m_wndCurrentValue.SetWindowText(ToString(m_nPurchasePrice));
	//if (GetMode() == VM_EDIT)
		//UpdateData(TRUE);
}
int CFAMAssetDetail::OnPurchasePriceCheckValue()
{
	//UpdateData(TRUE);
	if (m_nPurchasePrice <= 0)
	{
		//_msg(_T("%d"), m_nPurchasePrice);
		m_wndPurchasePrice.SetToolTipMessage(_T("This value must be greater than zero"));
		return -1;
	}
	return 0;
} 
/*void CFAMAssetDetail::OnDeprTimeChange(){
	
} */
/*void CFAMAssetDetail::OnDeprTimeSetfocus(){
	
} */
/*void CFAMAssetDetail::OnDeprTimeKillfocus(){
	
} */

/*void CFAMAssetDetail::OnUsedDateChange(){
	
} */
/*void CFAMAssetDetail::OnUsedDateSetfocus(){
	
} */
/*void CFAMAssetDetail::OnUsedDateKillfocus(){
	
} */
int CFAMAssetDetail::OnUsedDateCheckValue()
{
	if (CompareDate(m_szIncDate, m_szUsedDate) > 0)
	{
		m_wndUsedDate.SetToolTipMessage(_T("This value must be greater than or equal to Increase Date"));
		return -1;
	}
	return 0;
} 

/*void CFAMAssetDetail::OnDeprTimeChange(){
	
} */
/*void CFAMAssetDetail::OnDeprTimeSetfocus(){
	
} */
/*void CFAMAssetDetail::OnDeprTimeKillfocus(){
	
} */
int CFAMAssetDetail::OnDeprTimeCheckValue(){
	return 0;
} 

void CFAMAssetDetail::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnTypeSelendok(){
	 UpdateData(TRUE);
	 OnListLoadData();
}
/*void CFAMAssetDetail::OnTypeSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnTypeKillfocus(){
	
}*/
long CFAMAssetDetail::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype ORDER BY fast_id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	
	return nCount;
}
/*void CFAMAssetDetail::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetail::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAssetDetail::OnSearchDeptSelendok(){
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CFAMAssetDetail::OnSearchDeptSetfocus(){
	
}*/
/*void CFAMAssetDetail::OnSearchDeptKillfocus(){
	
}*/
long CFAMAssetDetail::OnSearchDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szSearchDeptKey);
	}
	m_wndSearchDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAssetDetail::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAssetDetail::OnSearchByNameChange(){
	UpdateData(TRUE);
	OnListLoadData();
} 
/*void CFAMAssetDetail::OnSearchByNameSetfocus(){
	
} */
void CFAMAssetDetail::OnSearchByNameKillfocus()
{

}
int CFAMAssetDetail::OnSearchByNameCheckValue()
{
	OnListLoadData();
	return 1;
} 

void CFAMAssetDetail::OnAssetTabSelectChange(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew < 0)
		return;
	if (nNew < 1)
	{
		if (GetMode() != VM_VIEW || m_isDeposed != false)
			m_wndImage.EnableWindow(FALSE);
		else
			m_wndImage.EnableWindow(TRUE);
		DownloadImage();
	}
	if (nNew == 1)
	{
		m_wndUsageProcess.OnUsageProcessListLoadData();
		//MessageBox(_T("OK"));
	}
	else if (nNew == 2)
		m_wndAssetDeprec.OnDeprecListLoadData();
	else if (nNew == 3)
		m_wndAssetMaint.OnMaintenListLoadData();
	else if (nNew == 4)
		m_wndAttachment.OnAttachListLoadData();
	else if (nNew == 5)
		m_wndAccessory.OnListLoadData();
	//else if (nNew == 7)
	//	m_wndInventory.OnInventoriedLoadData();
	
} 
int CFAMAssetDetail::OnAddFAMAsset(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetDetail::OnEditFAMAsset(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetDetail::OnDeleteFAMAsset()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	/*m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1*/;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nTotal;
	szSQL.Format(_T("SELECT (SELECT Count(fad_idx) FROM fam_depreciation WHERE fad_assetno='%s') +")\
				 _T(" (SELECT Count(fam_idx) FROM fam_maintenance WHERE fam_assetno='%s') +")\
				 _T(" (SELECT Count(faup_idx) FROM fam_usingprocess WHERE faup_assetno='%s') +")\
				 _T(" (SELECT Count(faac_idx) FROM fam_accessories WHERE faac_assetno='%s') +")\
                 _T("(SELECT Count(faa_idx) FROM fam_attachment WHERE faa_assetno='%s') AS Total from dual"),
				 m_szAssetNo, m_szAssetNo, m_szAssetNo, m_szAssetNo, m_szAssetNo);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("Total"), nTotal);
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		ShowMessageBox(_T("You must delete all records in other related tables"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_asset WHERE fa_assetno='%s'"), m_szAssetNo); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szAssetNo, m_nIndex);
			//m_szAssetNo = m_wndList.GetItemText(m_nIndex, 0);
			//GetDataToScreen();
		}
		else
		{
 			//SetMode(VM_NONE);
			ResetData();
		} 
 	}
	else
		ShowMessageBox(_T("Can not delete this record. Maybe violates foreign key constraint"), MB_OK | MB_ICONERROR);
	return 0;
}
int CFAMAssetDetail::OnSaveFAMAsset()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
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
		m_nIndex = m_wndList.GetCurSel();
		szWhere.Format(_T(" WHERE fa_assetno='%s' "), m_szAssetNo); 
 		//szSQL = m_fam_assetTbl.GetUpdateSQL(_T("fa_createdby, fa_createddate, fa_assetno, fa_deprunit"));
		szSQL = m_fam_assetTbl.GetUpdateSQL(_T("fa_createdby, fa_createddate, fa_deprunit, fa_assetno, fa_name, fa_quantity"));
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 	
		OnListLoadData();
		//if (GetMode() == VM_ADD)
		SetItemSel(&m_wndList, m_szAssetNo, m_nIndex);
		SetMode(VM_VIEW); 
 	} 
 	return ret; 
}
int CFAMAssetDetail::OnCancelFAMAsset()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	}
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szAssetNo = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CFAMAssetDetail::OnFAMAssetDetailLoadData(){
	return 0;
}

void CFAMAssetDetail::OnManufactureLabelSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CManufactureSetupDialog dlg(pMF);
	dlg.DoModal();
}

void CFAMAssetDetail::OnCategoryLabelSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CCategorySetupDialog dlg(pMF);
	dlg.DoModal();
}

void CFAMAssetDetail::OnConditionLabelSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CConditionSetupDialog dlg(pMF);
	dlg.DoModal();
}
void CFAMAssetDetail::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				//pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(i, 1);
				m_nIndex = i;
				//pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
		//pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		//pList->EnsureVisible(nIndex, 1);
		//pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				//pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(0, 1);
				//pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();
				pList->SetCurSel(m_nIndex);
			}
		}
	}
}

BOOL CFAMAssetDetail::UploadImage(CString szFileName)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_szAssetNo.IsEmpty())
		return FALSE;
	for (int i = 0; i < szFileName.GetLength(); i++)
	{
		if ((int)szFileName.GetAt(i) > 255)
		{
			ShowMessageBox(_T("File name is invalid"), MB_OK | MB_ICONERROR);
			return FALSE;
		}
	}
	CString szName;
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szAssetNo );
//_msg(_T("%s"), szName);
	//m_wndImage.SetFileName(szFileName);
	pMF->lo_unlink(szName);
	pMF->lo_import(szName, szFileName);
	return TRUE;
}

BOOL CFAMAssetDetail::UnlinkImage(CString szFileName)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_szAssetNo .IsEmpty())
		return FALSE;
	CString szName;
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szAssetNo);
	pMF->lo_unlink(szName);
	return TRUE;
}

BOOL CFAMAssetDetail::DownloadImage()
{
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szName, szFileName;
	TCHAR szPath[MAX_PATH];
	::GetTempPath(MAX_PATH, szPath);

	if (pMF->m_szAssetNo.IsEmpty())
		return FALSE;
	
	AfxGetApp()->BeginWaitCursor();

	//szFileName.Format(_T("%s%s_image.png"), szPath, pMF->GetModuleID());
	szFileName.Format(_T("%s%s_image.jpg"), szPath, pMF->GetModuleID());
	szName.Format(_T("%s_%s"), pMF->GetModuleID(), m_szAssetNo);

	m_wndImage.Release();
	
	SetFileAttributes(szFileName, FILE_ATTRIBUTE_NORMAL);
	::DeleteFile(szFileName);
	if(pMF->lo_export(szName, szFileName))
	{
		//_msg(_T("%s_%s"), szName, szFileName);
		m_wndImage.SetFileName(szFileName, true);
		AfxGetApp()->EndWaitCursor();
		return TRUE;
	}
	else
	{
		m_wndImage.SetFileName(_T(""));
		m_wndImage.Invalidate();
	}
	AfxGetApp()->EndWaitCursor();
	return FALSE;
}

void CFAMAssetDetail::ChangeCostNTime()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsm(&pMF->m_db);
	CRecord rsn(&pMF->m_db);
	CRecord rsc(&pMF->m_db);
	CString szSQL;
	int ret, nCount, nMonths;
	CString szDate;
	if (pMF->m_szDeprUnit.Right(2).Trim() == _T("SA") || pMF->m_szDeprUnit.Right(2).Trim() == _T("RA"))
	{
		if (ShowMessageBox(_T("Are you sure the accumulated depreciation has been updated?"), MB_YESNO | MB_ICONQUESTION) == IDNO)
			return;
		szSQL.Format(_T("SELECT Count(*) FROM fam_depreciation WHERE fad_assetno='%s'"), m_szAssetNo);
		rs.ExecSQL(szSQL);
		nCount = rs.GetIntValue();
		if (nCount > 0)
		{
			szSQL.Format(_T("DELETE FROM fam_depreciation WHERE date(fad_date) <= CURRENT_DATE AND fad_assetno='%s'"), 
						 m_szAssetNo);
			ret = rsm.ExecSQL(szSQL);
			if (ret >= 0)
			{
				nMonths = rsm.GetRecordCount();
				szSQL.Format(_T("SELECT max(fad_idx) FROM fam_depreciation WHERE fad_assetno='%s'"), m_szAssetNo);
				rsn.ExecSQL(szSQL);
				nCount = rsn.GetIntValue();
				szSQL.Format(_T("SELECT fad_date FROM fam_depreciation WHERE fad_idx=%d AND fad_assetno='%s'"),
							 nCount, m_szAssetNo);
				rsc.ExecSQL(szSQL);
				szDate = rsc.GetStringValue();
				if (pMF->m_nCost != m_nPurchasePrice)
				{
					szSQL.Format(_T("SELECT fam_depreciation_redline_new('%s', %d, %d, %s, %d, %s, %s)"),
								 m_szAssetNo, m_nDeprTime, nCount, szDate, m_nPurchasePrice - pMF->m_nAccumDepr, 
								 pMF->GetCurrentUser(), pMF->m_szDeprUnit.Mid(1, 1));
					ret = pMF->ExecSQL(szSQL);
				}
				else if (pMF->m_nDeprTerm != m_nDeprTime)
				{
					szSQL.Format(_T("SELECT fam_depreciation_redline_new('%s', %d, %d, %s, %d, %s, %s)"),
								 m_szAssetNo, m_nDeprTime - nMonths, nCount, szDate, m_nPurchasePrice, 
								 pMF->GetCurrentUser(), pMF->m_szDeprUnit.Mid(1, 1));
					ret = pMF->ExecSQL(szSQL);
				} 
				else if (pMF->m_nCost != m_nPurchasePrice && pMF->m_nDeprTerm != m_nDeprTime) 
				{
					szSQL.Format(_T("SELECT fam_depreciation_redline_new('%s', %d, %d, %s, %d, %s, %s)"),
								 m_szAssetNo, m_nDeprTime - nMonths, nCount, szDate, m_nPurchasePrice - pMF->m_nAccumDepr, 
								 pMF->GetCurrentUser(), pMF->m_szDeprUnit.Mid(1, 1));
					ret = pMF->ExecSQL(szSQL);
				}
				if (ret >=0)
					ShowMessageBox(_T("Depreciation table has been updated"), MB_OK | MB_ICONINFORMATION);
				else
					ShowMessageBox(_T("Failed to update depreciation table"), MB_OK | MB_ICONERROR);
			}
		}
	}
}

int CFAMAssetDetail::OnPrintImportOrder()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	if (!rpt.Init(_T("Reports/FAM/FAM_PHIEUNHAPKHO.RPT")))
	{
		return -1;
	}
	return 0;
}
int CFAMAssetDetail::OnFixedAssetCard()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	double nCost;

	if(!rpt.Init(_T("Reports/FAM/FAM_THETAISANCODINH.RPT")))
		return -1;

	szSQL.Format(_T("SELECT fa_assetno, fa_name, fa_model, ") \
		_T(" (SELECT famm_name FROM fam_manufacture WHERE famm_id = fa_mfgid) AS hangsx, ") \
		_T(" fa_power as congsuat, fa_powercircuit as dongdien, fa_voltage as nguondien, fa_mfgdate as namsx,") \
		_T(" (SELECT sc_name FROM sys_country WHERE  sc_id = fa_madein) AS nuocsx, ") \
		_T(" fa_purchasedate as ngaymua, fa_useddate as ngaysd, fa_purchaseprice as giamua, fa_department as bpsd ") \
		_T(" FROM fam_asset WHERE fa_assetno = '%s'"), m_szAssetNo);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return -1;
	}
	CReportSection * rptHead = rpt.GetReportHeader();

	rs.GetValue(_T("fa_assetno"), tmpStr);
	szTemp.Format(_T("S\x1ED1: %s T/TS\x43\x110"), tmpStr);
	rptHead->SetValue(_T("1"), szTemp);

	rs.GetValue(_T("fa_name"), tmpStr);
	rptHead->SetValue(_T("assetname"), tmpStr);
												  
	rs.GetValue(_T("fa_model"), tmpStr);
	rptHead->SetValue(_T("model"), tmpStr);

	rs.GetValue(_T("hangsx"), tmpStr);
	rptHead->SetValue(_T("mfgid"), tmpStr);

	rs.GetValue(_T("congsuat"), tmpStr);
	rptHead->SetValue(_T("congsuat"), tmpStr);

	rs.GetValue(_T("dongdien"), tmpStr);
	rptHead->SetValue(_T("dongdien"), tmpStr);

	rs.GetValue(_T("nguondien"), tmpStr);
	rptHead->SetValue(_T("nguondien"), tmpStr);

	rs.GetValue(_T("namsx"), tmpStr);
	rptHead->SetValue(_T("mfgyear"), tmpStr);
	
	rs.GetValue(_T("nuocsx"), tmpStr);
	rptHead->SetValue(_T("madein"), tmpStr);

	rs.GetValue(_T("ngaymua"), tmpStr);
	szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rptHead->SetValue(_T("purchasedate"), szTemp);

	rs.GetValue(_T("ngaysd"), tmpStr);
	szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rptHead->SetValue(_T("useddate"), szTemp);

	rs.GetValue(_T("giamua"), nCost);
	FormatCurrency(nCost, tmpStr);
	rptHead->SetValue(_T("purchaseprice"), tmpStr + _T(" (VN\x110)"));

	rs.GetValue(_T("bpsd"), tmpStr);
	rptHead->SetValue(_T("userdept"), tmpStr);

	szDate = pMF->GetSysDate();
	tmpStr.Format(rptHead->GetValue(_T("date")), szDate.Right(2), szDate.Mid(5,2), szDate.Left(4));
	rptHead->SetValue(_T("date"), tmpStr);
	
	EndWaitCursor();
	rpt.PrintPreview();
	
	return 0;
}
void CFAMAssetDetail::CheckUser()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT fa_createdby FROM fam_asset WHERE fa_assetno = '%s'"), m_szAssetNo);
	rs.ExecSQL(szSQL);
	szUser = rs.GetValue(_T("fa_createdby"));
}

int CFAMAssetDetail::OnSaveAsset()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	//MessageBox(m_szAssetNo); -- da lay dc ma TS
	if(m_isEdit != true)
		return -1;
	int yn = ShowMessageBox(_T("Are you sure to save?"), MB_YESNO | MB_ICONQUESTION);
	if(yn == IDYES)
	{
		OnSaveFAMAsset();
	}
	else
		return -1;
 	
 	return 0; 
}

int CFAMAssetDetail::OnEditAsset()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_szAssetNo.IsEmpty())
	{
		return -1;
	}
	SetMode(VM_EDIT);
	UpdateData(FALSE);
	m_isEdit = true;
	return 0;

}

int CFAMAssetDetail::OnCancelAssetList()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("UPDATE fam_asset SET fa_ustatus = 'N' WHERE fa_assetno = '%s'"), m_szAssetNo);
	int yn = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n h\x1EE7y m\xE1y n\xE0y?"), MB_YESNO | MB_ICONQUESTION);
	if(yn == IDYES)
	{
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0)
		{
			OnListLoadData();
		}else
			return -1;
	}else
		return -1;
	return 0;
}