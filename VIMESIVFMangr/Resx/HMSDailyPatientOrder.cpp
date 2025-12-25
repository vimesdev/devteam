#include "HMSDailyPatientOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnPatientListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnPatientListLoadData();
} 
static int _OnPatientListDblClickFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnPatientListDblClick();
} 
static int _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnPatientListDeleteItem();
} 
static int _OnClinicalIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSDailyPatientOrder* )pWnd)->OnClinicalIDSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnClinicalIDSelendokFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnClinicalIDSelendok();
}
/*static int _OnClinicalIDSetfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnClinicalIDKillfocus();
}*/
/*static int _OnClinicalIDKillfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnClinicalIDKillfocus();
}*/
static int _OnClinicalIDLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnClinicalIDLoadData();
}
/*static int _OnClinicalIDAddNewFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnClinicalIDAddNew();
}*/
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnDeliveryDateChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnDeliveryDateChange();
} */
/*static int _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnDeliveryDateKillfocus();} */ 
/*static int _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnDeliveryDateCheckValue();
} 
static int _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSDailyPatientOrder* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDrugNameSelendokFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnDrugNameSelendok();
}
/*static int _OnDrugNameSetfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnDrugNameKillfocus();
}*/
/*static int _OnDrugNameKillfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnDrugNameKillfocus();
}*/
static int _OnDrugNameLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnDrugNameLoadData();
}
/*static int _OnDrugNameAddNewFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder *)pWnd)->OnDrugNameAddNew();
}*/
/*static int _OnUnitChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitChange();
} */
/*static int _OnUnitSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitKillfocus();} */ 
/*static int _OnUnitKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitCheckValue();
} 
/*static int _OnQuantityChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnQuantityChange();
} */
/*static int _OnQuantitySetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnQuantityKillfocus();} */ 
/*static int _OnQuantityKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnQuantityCheckValue();
} 
/*static int _OnUnitPriceChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitPriceChange();
} */
/*static int _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitPriceKillfocus();} */ 
/*static int _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUnitPriceCheckValue();
} 
/*static int _OnCountryOfOriginChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnCountryOfOriginChange();
} */
/*static int _OnCountryOfOriginSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnCountryOfOriginKillfocus();} */ 
/*static int _OnCountryOfOriginKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnCountryOfOriginKillfocus();
} */
static int _OnCountryOfOriginCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnCountryOfOriginCheckValue();
} 
/*static int _OnOnhandQuantityChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOnhandQuantityChange();
} */
/*static int _OnOnhandQuantitySetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOnhandQuantityKillfocus();} */ 
/*static int _OnOnhandQuantityKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOnhandQuantityKillfocus();
} */
static int _OnOnhandQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnOnhandQuantityCheckValue();
} 
/*static int _OnUsageChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUsageChange();
} */
/*static int _OnUsageSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUsageKillfocus();} */ 
/*static int _OnUsageKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnUsageCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyPatientOrder *)pWnd)->OnNoteCheckValue();
} 
static int _OnDetailDrugListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnDetailDrugListLoadData();
} 
static int _OnDetailDrugListDblClickFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnDetailDrugListDblClick();
} 
static int _OnDetailDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnDetailDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDetailDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnDetailDrugListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyPatientOrder *pVw = (CHMSDailyPatientOrder *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyPatientOrder *pVw = (CHMSDailyPatientOrder *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyPatientOrder *pVw = (CHMSDailyPatientOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyPatientOrder *pVw = (CHMSDailyPatientOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnDeliverySelectFnc(CWnd *pWnd){
	CHMSDailyPatientOrder *pVw = (CHMSDailyPatientOrder *)pWnd;
	return pVw->OnDeliverySelect();
} 
static int _OnAddHMSDailyPatientOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnAddHMSDailyPatientOrder();
} 
static int _OnEditHMSDailyPatientOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnEditHMSDailyPatientOrder();
} 
static int _OnDeleteHMSDailyPatientOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnDeleteHMSDailyPatientOrder();
} 
static int _OnSaveHMSDailyPatientOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnSaveHMSDailyPatientOrder();
} 
static int _OnCancelHMSDailyPatientOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyPatientOrder*)pWnd)->OnCancelHMSDailyPatientOrder();
} 
CHMSDailyPatientOrder::CHMSDailyPatientOrder(){

	m_nDlgWidth = 704;
	m_nDlgHeight = 526;
	SetDefaultValues();
}
CHMSDailyPatientOrder::~CHMSDailyPatientOrder(){
}
void CHMSDailyPatientOrder::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 613, 123);
	m_wndPatientList.Create(this,9, 23, 608, 119); 
	m_wndOrderInformation.Create(this, _T("Order Information"), 7, 130, 615, 400);
	m_wndClinicalIDLabel.Create(this, _T("Clinical ID"), 10, 149, 81, 169);
	m_wndClinicalID.Create(this,86, 149, 161, 169); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 174, 81, 194);
	m_wndPatientName.Create(this,86, 174, 354, 194); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 166, 149, 249, 169);
	m_wndOrderDate.Create(this,254, 149, 354, 169); 
	m_wndDeliveryDateLabel.Create(this, _T("Delivery Date"), 359, 149, 444, 169);
	m_wndDeliveryDate.Create(this,449, 149, 549, 169); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 199, 81, 219);
	m_wndDrugName.Create(this,86, 199, 298, 219); 
	m_wndUnitLabel.Create(this, _T("Unit"), 359, 199, 444, 219);
	m_wndUnit.Create(this,449, 199, 499, 219); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 224, 81, 244);
	m_wndQuantity.Create(this,86, 224, 161, 244); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 504, 199, 549, 219);
	m_wndUnitPrice.Create(this,554, 199, 609, 219); 
	m_wndCountryOfOriginLabel.Create(this, _T("Country Of Origin"), 359, 224, 444, 244);
	m_wndCountryOfOrigin.Create(this,449, 224, 609, 244); 
	m_wndOnhandQuantityLabel.Create(this, _T("Onhand Quantity"), 166, 224, 249, 244);
	m_wndOnhandQuantity.Create(this,254, 224, 354, 244); 
	m_wndUsageLabel.Create(this, _T("Usage"), 10, 249, 81, 269);
	m_wndUsage.Create(this,86, 249, 354, 269); 
	m_wndNoteLabel.Create(this, _T("Note"), 360, 249, 429, 269);
	m_wndNote.Create(this,438, 249, 610, 269); 
	m_wndDetailDrugList.Create(this,10, 272, 609, 397); 
	m_wndAdd.Create(this, _T("&Add"), 269, 409, 334, 431);
	m_wndDelete.Create(this, _T("&Delete"), 339, 409, 404, 431);
	m_wndSave.Create(this, _T("&Save"), 409, 409, 474, 431);
	m_wndCancel.Create(this, _T("&Cancel"), 549, 409, 614, 431);
	m_wndDelivery.Create(this, _T("Delivery"), 479, 409, 544, 431);

}
void CHMSDailyPatientOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndClinicalID.SetDataRequirement(TRUE);
	m_wndClinicalID.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetDataRequirement(TRUE);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOrderDate.SetDataRequirement(TRUE);
	m_wndDeliveryDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndDeliveryDate.SetDataRequirement(TRUE);
	m_wndDrugName.SetDataRequirement(TRUE);
	m_wndDrugName.LimitText(1024);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetDataRequirement(TRUE);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetDataRequirement(TRUE);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetDataRequirement(TRUE);
	m_wndCountryOfOrigin.SetLimitText(1024);
	m_wndCountryOfOrigin.SetDataRequirement(TRUE);
	m_wndOnhandQuantity.SetLimitText(1024);
	m_wndOnhandQuantity.SetDataRequirement(TRUE);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetDataRequirement(TRUE);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetDataRequirement(TRUE);


	m_wndPatientList.InsertColumn(0, _T("Order Date"), CFMT_DATETIME, 100);
	m_wndPatientList.InsertColumn(1, _T("Patient No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(2, _T("Clinical ID"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(4, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(6, _T("Status"), CFMT_TEXT, 80);


	m_wndClinicalID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndClinicalID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDetailDrugList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDetailDrugList.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndDetailDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndDetailDrugList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 60);
	m_wndDetailDrugList.InsertColumn(4, _T("Country Of Origin"), CFMT_TEXT, 100);
	m_wndDetailDrugList.InsertColumn(5, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndDetailDrugList.InsertColumn(6, _T("Delevery Quantity"), CFMT_NUMBER, 100);

}
void CHMSDailyPatientOrder::OnSetWindowEvents(){
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClinicalID.SetEvent(WE_SELENDOK, _OnClinicalIDSelendokFnc);
	//m_wndClinicalID.SetEvent(WE_SETFOCUS, _OnClinicalIDSetfocusFnc);
	//m_wndClinicalID.SetEvent(WE_KILLFOCUS, _OnClinicalIDKillfocusFnc);
	m_wndClinicalID.SetEvent(WE_SELCHANGE, _OnClinicalIDSelectChangeFnc);
	m_wndClinicalID.SetEvent(WE_LOADDATA, _OnClinicalIDLoadDataFnc);
	//m_wndClinicalID.SetEvent(WE_ADDNEW, _OnClinicalIDAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndDeliveryDate.SetEvent(WE_CHANGE, _OnDeliveryDateChangeFnc);
	//m_wndDeliveryDate.SetEvent(WE_SETFOCUS, _OnDeliveryDateSetfocusFnc);
	//m_wndDeliveryDate.SetEvent(WE_KILLFOCUS, _OnDeliveryDateKillfocusFnc);
	m_wndDeliveryDate.SetEvent(WE_CHECKVALUE, _OnDeliveryDateCheckValueFnc);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndCountryOfOrigin.SetEvent(WE_CHANGE, _OnCountryOfOriginChangeFnc);
	//m_wndCountryOfOrigin.SetEvent(WE_SETFOCUS, _OnCountryOfOriginSetfocusFnc);
	//m_wndCountryOfOrigin.SetEvent(WE_KILLFOCUS, _OnCountryOfOriginKillfocusFnc);
	m_wndCountryOfOrigin.SetEvent(WE_CHECKVALUE, _OnCountryOfOriginCheckValueFnc);
	//m_wndOnhandQuantity.SetEvent(WE_CHANGE, _OnOnhandQuantityChangeFnc);
	//m_wndOnhandQuantity.SetEvent(WE_SETFOCUS, _OnOnhandQuantitySetfocusFnc);
	//m_wndOnhandQuantity.SetEvent(WE_KILLFOCUS, _OnOnhandQuantityKillfocusFnc);
	m_wndOnhandQuantity.SetEvent(WE_CHECKVALUE, _OnOnhandQuantityCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndDetailDrugList.SetEvent(WE_SELCHANGE, _OnDetailDrugListSelectChangeFnc);
	m_wndDetailDrugList.SetEvent(WE_LOADDATA, _OnDetailDrugListLoadDataFnc);
	m_wndDetailDrugList.SetEvent(WE_DBLCLICK, _OnDetailDrugListDblClickFnc);
	m_wndDetailDrugList.AddEvent(1, _T("Delete"), _OnDetailDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndDelivery.SetEvent(WE_CLICK, _OnDeliverySelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyPatientOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyPatientOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyPatientOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyPatientOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyPatientOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSDailyPatientOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndClinicalID.GetDlgCtrlID(), m_szClinicalIDKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndDeliveryDate.GetDlgCtrlID(), m_szDeliveryDate);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndCountryOfOrigin.GetDlgCtrlID(), m_szCountryOfOrigin);
	DDX_Text(pDX, m_wndOnhandQuantity.GetDlgCtrlID(), m_nOnhandQuantity);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSDailyPatientOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyPatientOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyPatientOrder::SetDefaultValues(){

	m_szClinicalIDKey.Empty();
	m_szPatientName.Empty();
	m_szOrderDate.Empty();
	m_szDeliveryDate.Empty();
	m_szDrugNameKey.Empty();
	m_szUnit.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_szCountryOfOrigin.Empty();
	m_nOnhandQuantity=0;
	m_szUsage.Empty();
	m_szNote.Empty();

}
int CHMSDailyPatientOrder::OnPatientListDblClick(){
	 return 0;
} 
int CHMSDailyPatientOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("PatientNo")), 
			rs.GetValue(_T("ClinicalID")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSDailyPatientOrder::OnClinicalIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnClinicalIDSelendok(){
	 return 0;
}
/*int CHMSDailyPatientOrder::OnClinicalIDSetfocus(){
	 return 0;
}*/
/*int CHMSDailyPatientOrder::OnClinicalIDKillfocus(){
	 return 0;
}*/
int CHMSDailyPatientOrder::OnClinicalIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClinicalID.IsSearchKey()){
	};
	m_wndClinicalID.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClinicalID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSDailyPatientOrder::OnClinicalIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSDailyPatientOrder::OnPatientNameChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnOrderDateChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnDeliveryDateChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnDeliveryDateSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnDeliveryDateKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnDeliveryDateCheckValue(){
	return 0;
} 
int CHMSDailyPatientOrder::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnDrugNameSelendok(){
	 return 0;
}
/*int CHMSDailyPatientOrder::OnDrugNameSetfocus(){
	 return 0;
}*/
/*int CHMSDailyPatientOrder::OnDrugNameKillfocus(){
	 return 0;
}*/
int CHMSDailyPatientOrder::OnDrugNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugName.IsSearchKey()){
	};
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSDailyPatientOrder::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSDailyPatientOrder::OnUnitChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUnitSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUnitKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnUnitCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnQuantityChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnQuantitySetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnQuantityKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnQuantityCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnUnitPriceChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUnitPriceSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUnitPriceKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnUnitPriceCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnCountryOfOriginChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnCountryOfOriginSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnCountryOfOriginKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnCountryOfOriginCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnOnhandQuantityChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnOnhandQuantitySetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnOnhandQuantityKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnOnhandQuantityCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnUsageChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUsageSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnUsageKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnUsageCheckValue(){
	return 0;
} 
/*int CHMSDailyPatientOrder::OnNoteChange(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSDailyPatientOrder::OnNoteKillfocus(){
	return 0;
} */
int CHMSDailyPatientOrder::OnNoteCheckValue(){
	return 0;
} 
int CHMSDailyPatientOrder::OnDetailDrugListDblClick(){
	 return 0;
} 
int CHMSDailyPatientOrder::OnDetailDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnDetailDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnDetailDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDetailDrugList.BeginLoad(); 
	m_wndDetailDrugList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDetailDrugList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("CountryOfOrigin")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("DeleveryQuantity")), NULL);
		rs.MoveNext();
	}
	m_wndDetailDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSDailyPatientOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnDeliverySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyPatientOrder::OnAddHMSDailyPatientOrder(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSDailyPatientOrder"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSDailyPatientOrder::OnEditHMSDailyPatientOrder(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSDailyPatientOrder"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSDailyPatientOrder::OnDeleteHMSDailyPatientOrder(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSDailyPatientOrder(); 
 		OnHMSDailyPatientOrderLoadData(); 
 	} */ return 0;
 } 
int CHMSDailyPatientOrder::OnSaveHMSDailyPatientOrder(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSDailyPatientOrder"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?O?oListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSDailyPatientOrder::OnCancelHMSDailyPatientOrder(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
