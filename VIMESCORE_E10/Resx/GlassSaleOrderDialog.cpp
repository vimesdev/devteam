#include "GlassSaleOrderDialog.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnYobCheckValue();
} 
static void _OnGenderSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderDialog* )pWnd)->OnGenderSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGenderSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGenderSelendok();
}
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGenderKillfocus();
}*/
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGenderKillfocus();
}*/
static long _OnGenderLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnGenderLoadData();
}
/*static void _OnGenderAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGenderAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnMatTraiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatTraiChange();
} */
/*static void _OnMatTraiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatTraiSetfocus();} */ 
/*static void _OnMatTraiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatTraiKillfocus();
} */
static int _OnMatTraiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnMatTraiCheckValue();
} 
/*static void _OnMatPhaiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatPhaiChange();
} */
/*static void _OnMatPhaiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatPhaiSetfocus();} */ 
/*static void _OnMatPhaiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnMatPhaiKillfocus();
} */
static int _OnMatPhaiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnMatPhaiCheckValue();
} 
/*static void _OnCKMattraiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMattraiChange();
} */
/*static void _OnCKMattraiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMattraiSetfocus();} */ 
/*static void _OnCKMattraiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMattraiKillfocus();
} */
static int _OnCKMattraiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnCKMattraiCheckValue();
} 
/*static void _OnCKMatphaiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMatphaiChange();
} */
/*static void _OnCKMatphaiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMatphaiSetfocus();} */ 
/*static void _OnCKMatphaiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnCKMatphaiKillfocus();
} */
static int _OnCKMatphaiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnCKMatphaiCheckValue();
} 
/*static void _OnNAMattraiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMattraiChange();
} */
/*static void _OnNAMattraiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMattraiSetfocus();} */ 
/*static void _OnNAMattraiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMattraiKillfocus();
} */
static int _OnNAMattraiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnNAMattraiCheckValue();
} 
/*static void _OnNAMatphaiChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMatphaiChange();
} */
/*static void _OnNAMatphaiSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMatphaiSetfocus();} */ 
/*static void _OnNAMatphaiKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNAMatphaiKillfocus();
} */
static int _OnNAMatphaiCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnNAMatphaiCheckValue();
} 
static void _OnGuaranteeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderDialog* )pWnd)->OnGuaranteeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGuaranteeSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGuaranteeSelendok();
}
/*static void _OnGuaranteeSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGuaranteeKillfocus();
}*/
/*static void _OnGuaranteeKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGuaranteeKillfocus();
}*/
static long _OnGuaranteeLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnGuaranteeLoadData();
}
/*static void _OnGuaranteeAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnGuaranteeAddNew();
}*/
/*static void _OnRecheckTimeChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnRecheckTimeChange();
} */
/*static void _OnRecheckTimeSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnRecheckTimeSetfocus();} */ 
/*static void _OnRecheckTimeKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnRecheckTimeKillfocus();
} */
static int _OnRecheckTimeCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnRecheckTimeCheckValue();
} 
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderDialog* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnSellingPriceChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSellingPriceChange();
} */
/*static void _OnSellingPriceSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSellingPriceSetfocus();} */ 
/*static void _OnSellingPriceKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSellingPriceKillfocus();
} */
static int _OnSellingPriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnSellingPriceCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CGlassSaleOrderDialog *pVw = (CGlassSaleOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CGlassSaleOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAcctDateChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAcctDateChange();
} */
/*static void _OnAcctDateSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAcctDateSetfocus();} */ 
/*static void _OnAcctDateKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnAcctDateKillfocus();
} */
static int _OnAcctDateCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnAcctDateCheckValue();
} 
/*static void _OnSubAmountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSubAmountChange();
} */
/*static void _OnSubAmountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSubAmountSetfocus();} */ 
/*static void _OnSubAmountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnSubAmountKillfocus();
} */
static int _OnSubAmountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnSubAmountCheckValue();
} 
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnTaxAmountCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static int _OnAddGlassSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnAddGlassSaleOrderDialog();
} 
static int _OnEditGlassSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnEditGlassSaleOrderDialog();
} 
static int _OnDeleteGlassSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnDeleteGlassSaleOrderDialog();
} 
static int _OnSaveGlassSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnSaveGlassSaleOrderDialog();
} 
static int _OnCancelGlassSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderDialog*)pWnd)->OnCancelGlassSaleOrderDialog();
} 
CGlassSaleOrderDialog::CGlassSaleOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1006;
	m_nDlgHeight = 947;
	SetDefaultValues();
}
CGlassSaleOrderDialog::~CGlassSaleOrderDialog(){
}
void CGlassSaleOrderDialog::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 706, 5, 961, 235);
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 366, 960, 604);
	m_wndLines.Create(this, _T(""), 5, 245, 960, 335);
	m_wndThiLucKhongKinh.Create(this, _T("Thi luc khong kinh"), 5, 155, 178, 240);
	m_wndThiLucCoKinh.Create(this, _T("Thi luc co kinh"), 185, 156, 358, 241);
	m_wndNhanAp.Create(this, _T("Nhan ap"), 363, 156, 536, 241);
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 702, 150);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 195, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 200, 30, 264, 55);
	m_wndType.Create(this,269, 30, 369, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 374, 30, 454, 55);
	m_wndStorage.Create(this,459, 30, 699, 55); 
	m_wndCustomerNameLabel.Create(this, _T("Customer Name"), 10, 60, 110, 85);
	m_wndCustomerName.Create(this,115, 60, 369, 85); 
	m_wndYobLabel.Create(this, _T("Yob"), 374, 60, 454, 85);
	m_wndYob.Create(this,459, 60, 539, 85); 
	m_wndGenderLabel.Create(this, _T("Gender"), 544, 60, 624, 85);
	m_wndGender.Create(this,629, 60, 699, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 110, 115);
	m_wndAddress.Create(this,115, 90, 369, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 374, 90, 454, 115);
	m_wndPhone.Create(this,459, 90, 699, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 110, 145);
	m_wndDescription.Create(this,115, 120, 699, 145); 
	m_wndMatTraiLabel.Create(this, _T("Mat trai"), 10, 179, 90, 204);
	m_wndMatTrai.Create(this,95, 179, 175, 204); 
	m_wndMatPhaiLabel.Create(this, _T("Mat phai"), 10, 209, 90, 234);
	m_wndMatPhai.Create(this,95, 209, 175, 234); 
	m_wndCKMattraiLabel.Create(this, _T("Matrai"), 192, 180, 272, 205);
	m_wndCKMattrai.Create(this,275, 180, 355, 205); 
	m_wndCKMatphaiLabel.Create(this, _T("Matphai"), 192, 210, 272, 235);
	m_wndCKMatphai.Create(this,275, 210, 355, 235); 
	m_wndNAMattraiLabel.Create(this, _T("Mattrai"), 367, 180, 447, 205);
	m_wndNAMattrai.Create(this,452, 180, 532, 205); 
	m_wndNAMatphaiLabel.Create(this, _T("Matphai"), 367, 210, 447, 235);
	m_wndNAMatphai.Create(this,452, 210, 532, 235); 
	m_wndGuaranteeLabel.Create(this, _T("Guarantee"), 541, 179, 621, 204);
	m_wndGuarantee.Create(this,626, 179, 706, 204); 
	m_wndRecheckTimeLabel.Create(this, _T("Recheck"), 541, 209, 621, 234);
	m_wndRecheckTime.Create(this,626, 209, 706, 234); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 275, 110, 300);
	m_wndItemName.Create(this,115, 275, 369, 300); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 374, 275, 454, 300);
	m_wndQuantity.Create(this,459, 275, 539, 300); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 544, 276, 624, 301);
	m_wndOnHand.Create(this,629, 276, 710, 301); 
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 715, 275, 815, 300);
	m_wndSellingPrice.Create(this,817, 275, 957, 300); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 306, 110, 331);
	m_wndNote.Create(this,115, 306, 710, 331); 
	m_wndAmountLabel.Create(this, _T("Amount"), 715, 306, 815, 331);
	m_wndAmount.Create(this,818, 306, 958, 331); 
	m_wndAdd.Create(this, _T("&Add"), 354, 336, 434, 361);
	m_wndEdit.Create(this, _T("&Edit"), 439, 336, 519, 361);
	m_wndDelete.Create(this, _T("&Delete"), 524, 336, 604, 361);
	m_wndSave.Create(this, _T("&Save"), 609, 336, 689, 361);
	m_wndCancel.Create(this, _T("&Cancel"), 694, 336, 774, 361);
	m_wndApproval.Create(this, _T("&Approval"), 779, 336, 874, 361);
	m_wndPrint.Create(this, _T("&Print"), 879, 336, 959, 361);
	m_wndList.Create(this,10, 394, 955, 602); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 711, 30, 811, 55);
	m_wndOrderNo.Create(this,816, 30, 956, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 711, 60, 811, 85);
	m_wndOrderDate.Create(this,816, 60, 956, 85); 
	m_wndAcctDateLabel.Create(this, _T("Acct Date"), 711, 90, 811, 115);
	m_wndAcctDate.Create(this,816, 90, 956, 115); 
	m_wndSubAmountLabel.Create(this, _T("Sub Amount"), 711, 120, 811, 145);
	m_wndSubAmount.Create(this,816, 120, 956, 145); 
	m_wndTaxAmountLabel.Create(this, _T("Tax Amount"), 711, 150, 811, 175);
	m_wndTaxAmount.Create(this,816, 150, 956, 175); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 711, 180, 811, 205);
	m_wndDiscount.Create(this,816, 180, 956, 205); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 711, 210, 811, 235);
	m_wndTotalAmount.Create(this,816, 210, 956, 235); 

}
void CGlassSaleOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndCustomerName.SetLimitText(128);
	m_wndCustomerName.SetCheckValue(true);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetCheckValue(true);
	m_wndGender.LimitText(35);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndMatTrai.SetLimitText(35);
	m_wndMatTrai.SetCheckValue(true);
	m_wndMatPhai.SetLimitText(35);
	m_wndMatPhai.SetCheckValue(true);
	m_wndCKMattrai.SetLimitText(35);
	m_wndCKMattrai.SetCheckValue(true);
	m_wndCKMatphai.SetLimitText(35);
	m_wndCKMatphai.SetCheckValue(true);
	m_wndNAMattrai.SetLimitText(35);
	m_wndNAMattrai.SetCheckValue(true);
	m_wndNAMatphai.SetLimitText(35);
	m_wndNAMatphai.SetCheckValue(true);
	m_wndGuarantee.SetCheckValue(true);
	m_wndGuarantee.LimitText(35);
	m_wndRecheckTime.SetLimitText(35);
	m_wndRecheckTime.SetCheckValue(true);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndOnHand.SetLimitText(35);
	m_wndOnHand.SetCheckValue(true);
	m_wndSellingPrice.SetLimitText(1024);
	m_wndSellingPrice.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndAcctDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAcctDate.SetCheckValue(true);
	m_wndSubAmount.SetLimitText(16);
	m_wndSubAmount.SetCheckValue(true);
	m_wndTaxAmount.SetLimitText(16);
	m_wndTaxAmount.SetCheckValue(true);
	m_wndDiscount.SetLimitText(16);
	m_wndDiscount.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndGender.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGender.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGuarantee.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGuarantee.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_sale_orderTbl.SetTableName(_T("sale_order"));
	m_sale_orderTbl.AddField(_T("SO_SALE_ORDER_ID"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_CLIENT_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_ORG_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_USER_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_ISACTIVE"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_CREATEDDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_CREATEDBY"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_UPDATEDDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_UPDATEDBY"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_DOCTYPE"), dfText, 3); 
	m_sale_orderTbl.AddField(_T("SO_ORDERNO"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_ORDERDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_ACCTDATE"), dfDate); 
	m_sale_orderTbl.AddField(_T("SO_CURRENCY_ID"), dfText, 3); 
	m_sale_orderTbl.AddField(_T("SO_EXCHANGERATE"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_DEBITACCT"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_CREDITACCT"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_CONTRACT_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_PROJECT_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_PARTNER_TYPE_ID"), dfText, 3); 
	m_sale_orderTbl.AddField(_T("SO_PARTNER_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERNAME"), dfText, 128); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERADDRESS"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERCONTACT"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERPHONE"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_REFERENCE"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_DOCUMENTNO"), dfText, 60); 
	m_sale_orderTbl.AddField(_T("SO_MEMO"), dfText, 1024); 
	m_sale_orderTbl.AddField(_T("SO_DESCRIPTION"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_TRANSACTOR"), dfText, 128); 
	m_sale_orderTbl.AddField(_T("SO_SALEPERSON_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_PAYMENT_METHOD_ID"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_PAYMENT_TERMS_ID"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_EXPIRATIONDATE"), dfDate); 
	m_sale_orderTbl.AddField(_T("SO_DELIVERY_METHOD_ID"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_DELIVERY_TERMS_ID"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_DELIVERYDATE"), dfDate); 
	m_sale_orderTbl.AddField(_T("SO_DELIVERYADDRESS"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_BEGININGBALANCE"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_ENDINGBALANCE"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_STATUS"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_POSTED"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_POSTEDBY"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_POSTEDDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_LOCKED"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_NETAMOUNT"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_DISAMOUNT"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_TAXAMOUNT"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_TOTALAMOUNT"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_EXCHANGEAMOUNT"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_ISPRINTED"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_ISTAXINCLUDED"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_ISDISCOUNT"), dfText, 1); 
	m_sale_orderTbl.AddField(_T("SO_EXPENSE_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_DELIVERYBY"), dfText, 60); 
	m_sale_orderTbl.AddField(_T("SO_RECEIVEDBY"), dfText, 60); 
	m_sale_orderTbl.AddField(_T("SO_APPROVEDDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_APPROVEDBY"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_STORAGE_ID"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_TAX_ID"), dfLong); 

}
void CGlassSaleOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndCustomerName.SetEvent(WE_CHANGE, _OnCustomerNameChangeFnc);
	//m_wndCustomerName.SetEvent(WE_SETFOCUS, _OnCustomerNameSetfocusFnc);
	//m_wndCustomerName.SetEvent(WE_KILLFOCUS, _OnCustomerNameKillfocusFnc);
	m_wndCustomerName.SetEvent(WE_CHECKVALUE, _OnCustomerNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	m_wndGender.SetEvent(WE_SELENDOK, _OnGenderSelendokFnc);
	//m_wndGender.SetEvent(WE_SETFOCUS, _OnGenderSetfocusFnc);
	//m_wndGender.SetEvent(WE_KILLFOCUS, _OnGenderKillfocusFnc);
	m_wndGender.SetEvent(WE_SELCHANGE, _OnGenderSelectChangeFnc);
	m_wndGender.SetEvent(WE_LOADDATA, _OnGenderLoadDataFnc);
	//m_wndGender.SetEvent(WE_ADDNEW, _OnGenderAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndMatTrai.SetEvent(WE_CHANGE, _OnMatTraiChangeFnc);
	//m_wndMatTrai.SetEvent(WE_SETFOCUS, _OnMatTraiSetfocusFnc);
	//m_wndMatTrai.SetEvent(WE_KILLFOCUS, _OnMatTraiKillfocusFnc);
	m_wndMatTrai.SetEvent(WE_CHECKVALUE, _OnMatTraiCheckValueFnc);
	//m_wndMatPhai.SetEvent(WE_CHANGE, _OnMatPhaiChangeFnc);
	//m_wndMatPhai.SetEvent(WE_SETFOCUS, _OnMatPhaiSetfocusFnc);
	//m_wndMatPhai.SetEvent(WE_KILLFOCUS, _OnMatPhaiKillfocusFnc);
	m_wndMatPhai.SetEvent(WE_CHECKVALUE, _OnMatPhaiCheckValueFnc);
	//m_wndCKMattrai.SetEvent(WE_CHANGE, _OnCKMattraiChangeFnc);
	//m_wndCKMattrai.SetEvent(WE_SETFOCUS, _OnCKMattraiSetfocusFnc);
	//m_wndCKMattrai.SetEvent(WE_KILLFOCUS, _OnCKMattraiKillfocusFnc);
	m_wndCKMattrai.SetEvent(WE_CHECKVALUE, _OnCKMattraiCheckValueFnc);
	//m_wndCKMatphai.SetEvent(WE_CHANGE, _OnCKMatphaiChangeFnc);
	//m_wndCKMatphai.SetEvent(WE_SETFOCUS, _OnCKMatphaiSetfocusFnc);
	//m_wndCKMatphai.SetEvent(WE_KILLFOCUS, _OnCKMatphaiKillfocusFnc);
	m_wndCKMatphai.SetEvent(WE_CHECKVALUE, _OnCKMatphaiCheckValueFnc);
	//m_wndNAMattrai.SetEvent(WE_CHANGE, _OnNAMattraiChangeFnc);
	//m_wndNAMattrai.SetEvent(WE_SETFOCUS, _OnNAMattraiSetfocusFnc);
	//m_wndNAMattrai.SetEvent(WE_KILLFOCUS, _OnNAMattraiKillfocusFnc);
	m_wndNAMattrai.SetEvent(WE_CHECKVALUE, _OnNAMattraiCheckValueFnc);
	//m_wndNAMatphai.SetEvent(WE_CHANGE, _OnNAMatphaiChangeFnc);
	//m_wndNAMatphai.SetEvent(WE_SETFOCUS, _OnNAMatphaiSetfocusFnc);
	//m_wndNAMatphai.SetEvent(WE_KILLFOCUS, _OnNAMatphaiKillfocusFnc);
	m_wndNAMatphai.SetEvent(WE_CHECKVALUE, _OnNAMatphaiCheckValueFnc);
	m_wndGuarantee.SetEvent(WE_SELENDOK, _OnGuaranteeSelendokFnc);
	//m_wndGuarantee.SetEvent(WE_SETFOCUS, _OnGuaranteeSetfocusFnc);
	//m_wndGuarantee.SetEvent(WE_KILLFOCUS, _OnGuaranteeKillfocusFnc);
	m_wndGuarantee.SetEvent(WE_SELCHANGE, _OnGuaranteeSelectChangeFnc);
	m_wndGuarantee.SetEvent(WE_LOADDATA, _OnGuaranteeLoadDataFnc);
	//m_wndGuarantee.SetEvent(WE_ADDNEW, _OnGuaranteeAddNewFnc);
	//m_wndRecheckTime.SetEvent(WE_CHANGE, _OnRecheckTimeChangeFnc);
	//m_wndRecheckTime.SetEvent(WE_SETFOCUS, _OnRecheckTimeSetfocusFnc);
	//m_wndRecheckTime.SetEvent(WE_KILLFOCUS, _OnRecheckTimeKillfocusFnc);
	m_wndRecheckTime.SetEvent(WE_CHECKVALUE, _OnRecheckTimeCheckValueFnc);
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	//m_wndSellingPrice.SetEvent(WE_CHANGE, _OnSellingPriceChangeFnc);
	//m_wndSellingPrice.SetEvent(WE_SETFOCUS, _OnSellingPriceSetfocusFnc);
	//m_wndSellingPrice.SetEvent(WE_KILLFOCUS, _OnSellingPriceKillfocusFnc);
	m_wndSellingPrice.SetEvent(WE_CHECKVALUE, _OnSellingPriceCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndAcctDate.SetEvent(WE_CHANGE, _OnAcctDateChangeFnc);
	//m_wndAcctDate.SetEvent(WE_SETFOCUS, _OnAcctDateSetfocusFnc);
	//m_wndAcctDate.SetEvent(WE_KILLFOCUS, _OnAcctDateKillfocusFnc);
	m_wndAcctDate.SetEvent(WE_CHECKVALUE, _OnAcctDateCheckValueFnc);
	//m_wndSubAmount.SetEvent(WE_CHANGE, _OnSubAmountChangeFnc);
	//m_wndSubAmount.SetEvent(WE_SETFOCUS, _OnSubAmountSetfocusFnc);
	//m_wndSubAmount.SetEvent(WE_KILLFOCUS, _OnSubAmountKillfocusFnc);
	m_wndSubAmount.SetEvent(WE_CHECKVALUE, _OnSubAmountCheckValueFnc);
	//m_wndTaxAmount.SetEvent(WE_CHANGE, _OnTaxAmountChangeFnc);
	//m_wndTaxAmount.SetEvent(WE_SETFOCUS, _OnTaxAmountSetfocusFnc);
	//m_wndTaxAmount.SetEvent(WE_KILLFOCUS, _OnTaxAmountKillfocusFnc);
	m_wndTaxAmount.SetEvent(WE_CHECKVALUE, _OnTaxAmountCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	SetMode(VM_NONE);

}
void CGlassSaleOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_TextEx(pDX, m_wndGender.GetDlgCtrlID(), m_szGenderKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndMatTrai.GetDlgCtrlID(), m_szMatTrai);
	DDX_Text(pDX, m_wndMatPhai.GetDlgCtrlID(), m_szMatPhai);
	DDX_Text(pDX, m_wndCKMattrai.GetDlgCtrlID(), m_szCKMattrai);
	DDX_Text(pDX, m_wndCKMatphai.GetDlgCtrlID(), m_szCKMatphai);
	DDX_Text(pDX, m_wndNAMattrai.GetDlgCtrlID(), m_szNAMattrai);
	DDX_Text(pDX, m_wndNAMatphai.GetDlgCtrlID(), m_szNAMatphai);
	DDX_TextEx(pDX, m_wndGuarantee.GetDlgCtrlID(), m_szGuaranteeKey);
	DDX_Text(pDX, m_wndRecheckTime.GetDlgCtrlID(), m_szRecheckTime);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndSellingPrice.GetDlgCtrlID(), m_nSellingPrice);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAcctDate.GetDlgCtrlID(), m_szAcctDate);
	DDX_Text(pDX, m_wndSubAmount.GetDlgCtrlID(), m_nSubAmount);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CGlassSaleOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_szDocumentNo;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("CustomerName")] =  m_szCustomerName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Gender")] =  m_szGenderKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("MatTrai")] =  m_szMatTrai;
	m_jData[_T("MatPhai")] =  m_szMatPhai;
	m_jData[_T("CKMattrai")] =  m_szCKMattrai;
	m_jData[_T("CKMatphai")] =  m_szCKMatphai;
	m_jData[_T("NAMattrai")] =  m_szNAMattrai;
	m_jData[_T("NAMatphai")] =  m_szNAMatphai;
	m_jData[_T("Guarantee")] =  m_szGuaranteeKey;
	m_jData[_T("RecheckTime")] =  m_szRecheckTime;
	m_jData[_T("ItemName")] =  m_szItemNameKey;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("OnHand")] =  m_nOnHand;
	m_jData[_T("SellingPrice")] =  m_nSellingPrice;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("AcctDate")] =  m_szAcctDate;
	m_jData[_T("SubAmount")] =  m_nSubAmount;
	m_jData[_T("TaxAmount")] =  m_nTaxAmount;
	m_jData[_T("Discount")] =  m_nDiscount;
	m_jData[_T("TotalAmount")] =  m_nTotalAmount;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNo);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("CustomerName")].GetValue(m_szCustomerName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Gender")].GetValue(m_szGenderKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("MatTrai")].GetValue(m_szMatTrai);
	m_jData[_T("MatPhai")].GetValue(m_szMatPhai);
	m_jData[_T("CKMattrai")].GetValue(m_szCKMattrai);
	m_jData[_T("CKMatphai")].GetValue(m_szCKMatphai);
	m_jData[_T("NAMattrai")].GetValue(m_szNAMattrai);
	m_jData[_T("NAMatphai")].GetValue(m_szNAMatphai);
	m_jData[_T("Guarantee")].GetValue(m_szGuaranteeKey);
	m_jData[_T("RecheckTime")].GetValue(m_szRecheckTime);
	m_jData[_T("ItemName")].GetValue(m_szItemNameKey);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("OnHand")].GetValue(m_nOnHand);
	m_jData[_T("SellingPrice")].GetValue(m_nSellingPrice);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("AcctDate")].GetValue(m_szAcctDate);
	m_jData[_T("SubAmount")].GetValue(m_nSubAmount);
	m_jData[_T("TaxAmount")].GetValue(m_nTaxAmount);
	m_jData[_T("Discount")].GetValue(m_nDiscount);
	m_jData[_T("TotalAmount")].GetValue(m_nTotalAmount);
	}

}
void CGlassSaleOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("SO_ORDERNO"), m_szOrderNo);
	rs.GetValue(_T("SO_ORDERDATE"), m_szOrderDate);
	rs.GetValue(_T("SO_PARTNERNAME"), m_szCustomerName);

}
void CGlassSaleOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sale_orderTbl.SetValue(_T("SO_ORDERNO"), m_szOrderNo);
	m_sale_orderTbl.SetValue(_T("SO_ORDERDATE"), m_szOrderDate);
	m_sale_orderTbl.SetValue(_T("SO_PARTNERNAME"), m_szCustomerName);

}
void CGlassSaleOrderDialog::SetDefaultValues(){

	m_szDocumentNo.Empty();
	m_szTypeKey.Empty();
	m_szStorageKey.Empty();
	m_szCustomerName.Empty();
	m_szYob.Empty();
	m_szGenderKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szDescription.Empty();
	m_szMatTrai.Empty();
	m_szMatPhai.Empty();
	m_szCKMattrai.Empty();
	m_szCKMatphai.Empty();
	m_szNAMattrai.Empty();
	m_szNAMatphai.Empty();
	m_szGuaranteeKey.Empty();
	m_szRecheckTime.Empty();
	m_szItemNameKey.Empty();
	m_nQuantity=0;
	m_nOnHand=0;
	m_nSellingPrice=0;
	m_szNote.Empty();
	m_nAmount=0;
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szAcctDate.Empty();
	m_nSubAmount=0;
	m_nTaxAmount=0;
	m_nDiscount=0;
	m_nTotalAmount=0;

}
int CGlassSaleOrderDialog::SetMode(int nMode){
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
/*void CGlassSaleOrderDialog::OnDocumentNoChange(){
	
} */
/*void CGlassSaleOrderDialog::OnDocumentNoSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnDocumentNoKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnDocumentNoCheckValue(){
	return 0;
} 
void CGlassSaleOrderDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnTypeSelendok(){
	 
}
/*void CGlassSaleOrderDialog::OnTypeSetfocus(){
	
}*/
/*void CGlassSaleOrderDialog::OnTypeKillfocus(){
	
}*/
long CGlassSaleOrderDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CGlassSaleOrderDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnStorageSelendok(){
	 
}
/*void CGlassSaleOrderDialog::OnStorageSetfocus(){
	
}*/
/*void CGlassSaleOrderDialog::OnStorageKillfocus(){
	
}*/
long CGlassSaleOrderDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassSaleOrderDialog::OnCustomerNameChange(){
	
} */
/*void CGlassSaleOrderDialog::OnCustomerNameSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnCustomerNameKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnCustomerNameCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnYobChange(){
	
} */
/*void CGlassSaleOrderDialog::OnYobSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnYobKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnYobCheckValue(){
	return 0;
} 
void CGlassSaleOrderDialog::OnGenderSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnGenderSelendok(){
	 
}
/*void CGlassSaleOrderDialog::OnGenderSetfocus(){
	
}*/
/*void CGlassSaleOrderDialog::OnGenderKillfocus(){
	
}*/
long CGlassSaleOrderDialog::OnGenderLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGender.IsSearchKey() && !m_szGenderKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGenderKey
};
	m_wndGender.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGender.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderDialog::OnGenderAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassSaleOrderDialog::OnAddressChange(){
	
} */
/*void CGlassSaleOrderDialog::OnAddressSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnAddressKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnPhoneChange(){
	
} */
/*void CGlassSaleOrderDialog::OnPhoneSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnPhoneKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnDescriptionChange(){
	
} */
/*void CGlassSaleOrderDialog::OnDescriptionSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnDescriptionKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnMatTraiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnMatTraiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnMatTraiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnMatTraiCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnMatPhaiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnMatPhaiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnMatPhaiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnMatPhaiCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnCKMattraiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnCKMattraiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnCKMattraiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnCKMattraiCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnCKMatphaiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnCKMatphaiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnCKMatphaiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnCKMatphaiCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnNAMattraiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnNAMattraiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnNAMattraiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnNAMattraiCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnNAMatphaiChange(){
	
} */
/*void CGlassSaleOrderDialog::OnNAMatphaiSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnNAMatphaiKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnNAMatphaiCheckValue(){
	return 0;
} 
void CGlassSaleOrderDialog::OnGuaranteeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnGuaranteeSelendok(){
	 
}
/*void CGlassSaleOrderDialog::OnGuaranteeSetfocus(){
	
}*/
/*void CGlassSaleOrderDialog::OnGuaranteeKillfocus(){
	
}*/
long CGlassSaleOrderDialog::OnGuaranteeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CGlassSaleOrderDialog::OnGuaranteeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassSaleOrderDialog::OnRecheckTimeChange(){
	
} */
/*void CGlassSaleOrderDialog::OnRecheckTimeSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnRecheckTimeKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnRecheckTimeCheckValue(){
	return 0;
} 
void CGlassSaleOrderDialog::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnItemNameSelendok(){
	 
}
/*void CGlassSaleOrderDialog::OnItemNameSetfocus(){
	
}*/
/*void CGlassSaleOrderDialog::OnItemNameKillfocus(){
	
}*/
long CGlassSaleOrderDialog::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemNameKey
};
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderDialog::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassSaleOrderDialog::OnQuantityChange(){
	
} */
/*void CGlassSaleOrderDialog::OnQuantitySetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnQuantityKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnOnHandChange(){
	
} */
/*void CGlassSaleOrderDialog::OnOnHandSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnOnHandKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnOnHandCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnSellingPriceChange(){
	
} */
/*void CGlassSaleOrderDialog::OnSellingPriceSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnSellingPriceKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnSellingPriceCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnNoteChange(){
	
} */
/*void CGlassSaleOrderDialog::OnNoteSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnNoteKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnAmountChange(){
	
} */
/*void CGlassSaleOrderDialog::OnAmountSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnAmountKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnAmountCheckValue(){
	return 0;
} 
void CGlassSaleOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderDialog::OnListDblClick(){
	
} 
void CGlassSaleOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CGlassSaleOrderDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CGlassSaleOrderDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderDialog::OnOrderNoChange(){
	
} */
/*void CGlassSaleOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnOrderNoKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnOrderDateChange(){
	
} */
/*void CGlassSaleOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnOrderDateKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnAcctDateChange(){
	
} */
/*void CGlassSaleOrderDialog::OnAcctDateSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnAcctDateKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnAcctDateCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnSubAmountChange(){
	
} */
/*void CGlassSaleOrderDialog::OnSubAmountSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnSubAmountKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnSubAmountCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnTaxAmountChange(){
	
} */
/*void CGlassSaleOrderDialog::OnTaxAmountSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnTaxAmountKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnTaxAmountCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnDiscountChange(){
	
} */
/*void CGlassSaleOrderDialog::OnDiscountSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnDiscountKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderDialog::OnTotalAmountChange(){
	
} */
/*void CGlassSaleOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CGlassSaleOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CGlassSaleOrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 
int CGlassSaleOrderDialog::OnAddGlassSaleOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGlassSaleOrderDialog::OnEditGlassSaleOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGlassSaleOrderDialog::OnDeleteGlassSaleOrderDialog(){
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
 		OnCancelGlassSaleOrderDialog();
 	}
	return 0;
}
int CGlassSaleOrderDialog::OnSaveGlassSaleOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_sale_orderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_sale_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnGlassSaleOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CGlassSaleOrderDialog::OnCancelGlassSaleOrderDialog(){
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
int CGlassSaleOrderDialog::OnGlassSaleOrderDialogListLoadData(){
	return 0;
}
