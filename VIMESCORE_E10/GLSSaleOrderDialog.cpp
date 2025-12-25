#include "GLSSaleOrderDialog.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "PMSSaleOrderList.h"
#include "HMSReportForms\PrintForms.h"


static int _OnStorageCheckValueFnc(CWnd* pWnd)
{
	return ((CGLSSaleOrderDialog*) pWnd)->OnStorageCheckValue();
}
static void _OnAddFunctionalFoodSelectFnc(CWnd* pWnd)
{
	((CGLSSaleOrderDialog*) pWnd)->OnAddFunctionalFoodSelect();
}
static int _OnAddFunctionalFoodFnc(CWnd* pWnd)
{
	//printf("\npWnd: %ld\n", pWnd);
	((CGLSSaleOrderDialog*) pWnd)->OnAddFunctionalFood();
	return 0;
}

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGLSSaleOrderDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnStorageAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGLSSaleOrderDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnTypeLoadData();
}
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog*)pWnd)->OnTypeCheckValue();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGLSSaleOrderDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnTotalAmountCheckValue();
}
/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGLSSaleOrderDialog* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnSellingPriceChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnSellingPriceChange();
} */
/*static void _OnSellingPriceSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnSellingPriceSetfocus();} */ 
/*static void _OnSellingPriceKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnSellingPriceKillfocus();
} */
static int _OnSellingPriceCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnSellingPriceCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnDiscardSelect();
}
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnConfirmSelect();
} 

static void _OnApprovalSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CGLSSaleOrderDialog *pVw = (CGLSSaleOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CGLSSaleOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CGLSSaleOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnListAddItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnListDeleteItem();
}
static int _OnListPostToDuocQGFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnListPostToDuocQG();
}

static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnListRefreshItem();
} 
static int _OnListPaymentFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog*)pWnd)->OnListPayment();
} 
static int _OnAddPMSSaleOrderDialogFnc(CWnd *pWnd)
{
	 return ((CGLSSaleOrderDialog*)pWnd)->OnAddPMSSaleOrderDialog();
} 
static int _OnEditPMSSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnEditPMSSaleOrderDialog();
} 
static int _OnDeletePMSSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnDeletePMSSaleOrderDialog();
} 
static int _OnSavePMSSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnSavePMSSaleOrderDialog();
} 
static int _OnDiscardPMSSaleOrderDialogFnc(CWnd *pWnd){
	 return ((CGLSSaleOrderDialog*)pWnd)->OnDiscardPMSSaleOrderDialog();
}

static int _OnMat_PhaiCheckValueFnc(CWnd *pWnd)
{
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_PhaiCheckValue();
} 

static int _OnMat_TraiCheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_TraiCheckValue();
}
static int _OnMat_Phai1CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Phai1CheckValue();
} 
static int _OnMat_Trai1CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Trai1CheckValue();
} 
static int _OnMat_Phai2CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Phai2CheckValue();
}
static int _OnMat_Trai2CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Trai2CheckValue();
}
static int _OnMat_Phai3CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Phai3CheckValue();
}
static int _OnMat_Trai3CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Trai3CheckValue();
}
static int _OnPD1CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnPD1CheckValue();
}
static int _OnMat_Phai4CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Phai4CheckValue();
}
static int _OnMat_Trai4CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnMat_Trai4CheckValue();
}
static int _OnPD2CheckValueFnc(CWnd *pWnd){
	return ((CGLSSaleOrderDialog *)pWnd)->OnPD2CheckValue();
}

CGLSSaleOrderDialog::CGLSSaleOrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 885;
	m_nDlgHeight = 605;
	m_szPrevType.Empty();
	m_szPrevStorage.Empty();
	m_bFunctionalFood = false;
	m_nDocNo = 0;
	m_nPatientNo = 0;
	SetDefaultValues();
}
CGLSSaleOrderDialog::~CGLSSaleOrderDialog()
{
}
void CGLSSaleOrderDialog::OnCreateComponents()
{
	/*m_wndGeneralInformation.Create(this, _T("General Information"), 20, 4, 635, 119);
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 640, 5, 895, 120);
	m_wndItemInformation.Create(this, _T("Item Information"), 20, 513, 895, 643);
	m_wndLines.Create(this, _T("Thông tin hàng bán"), 20, 393, 895, 477);	
	m_wndAddFunctionalFood.Create(this, _T("&Add Functional Food"), 105, 649, 250, 674);
	m_wndThiluckhongkinh.Create(this, _T("Thị lực không kính"), 20, 121, 482, 171);
	m_wndThiluckinhcu.Create(this, _T("Thị lực kính cũ"), 482, 121, 895, 171);
	m_wndSBDTCanBangHaiMat.Create(this, _T("SBĐT và cân bằng 2 mắt"), 20, 177, 895, 227);
	m_wndDonKinhnhinxa.Create(this, _T("Đơn kính nhìn xa"), 20, 229, 895, 305);
	m_wndDonKinhnhingan.Create(this, _T("Đơn kính nhìn gần"), 20, 310, 895, 386);
	m_wndStorageLabel.Create(this, _T("Storage"), 25, 30, 125, 55);
	m_wndStorage.Create(this,130, 30, 380, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 385, 30, 485, 55);
	m_wndType.Create(this,490, 30, 630, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 645, 30, 745, 55);
	m_wndOrderNo.Create(this,750, 30, 890, 55); 
	m_wndCustomerNameLabel.Create(this, _T("Customer Name"), 25, 60, 125, 85);
	m_wndCustomerName.Create(this,130, 60, 380, 85); 
	m_wndDeptLabel.Create(this, _T("Department"), 385, 60, 485, 85);
	m_wndDept.Create(this,490, 60, 630, 85); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 645, 60, 745, 85);
	m_wndOrderDate.Create(this,750, 60, 890, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 25, 89, 125, 114);
	m_wndAddress.Create(this,130, 90, 380, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 385, 90, 485, 115);
	m_wndPhone.Create(this,490, 90, 630, 115); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 645, 90, 745, 115);
	m_wndApprovedDate.Create(this,750, 90, 890, 115); 
	m_wndMatPhaiLabel.Create(this, _T("Mat_Phai"), 25, 145, 97, 170);
	m_wndMat_Phai.Create(this,102, 145, 225, 170); 
	m_wndMatTraiLabel.Create(this, _T("Mat_Trai"), 230, 145, 302, 170);
	m_wndMat_Trai.Create(this,307, 145, 431, 170); 
	m_wndMatPhai1Label.Create(this, _T("Mat_Phai1"), 487, 145, 559, 170);
	m_wndMat_Phai1.Create(this,565, 145, 688, 170); 
	m_wndMatTrai1Label.Create(this, _T("Mat_Trai1"), 692, 145, 764, 170);
	m_wndMat_Trai1.Create(this,770, 145, 893, 170); 
	m_wndMatPhai2Label.Create(this, _T("Mat_Phai2"), 25, 199, 97, 224);
	m_wndMat_Phai2.Create(this,102, 199, 431, 224); 
	m_wndMatTrai2Label.Create(this, _T("Mat_Trai2"), 487, 199, 559, 224);
	m_wndMat_Trai2.Create(this,565, 199, 893, 224); 
	m_wndMatPhai3Label.Create(this, _T("Mat_Phai3"), 25, 251, 97, 276);
	m_wndMat_Phai3.Create(this,102, 251, 431, 276); 
	m_wndMatTrai3Label.Create(this, _T("Mat_Trai3"), 487, 251, 559, 276);
	m_wndMat_Trai3.Create(this,565, 250, 893, 275); 
	m_wndPD1Label.Create(this, _T("PD"), 25, 281, 97, 304);
	m_wndPD1.Create(this,102, 280, 431, 305); 
	m_wndMatPhai4Label.Create(this, _T("Mat_Phai4"), 25, 333, 97, 358);
	m_wndMat_Phai4.Create(this,102, 333, 431, 358); 
	m_wndMatTrai4Label.Create(this, _T("Mat_Trai4"), 487, 333, 559, 358);
	m_wndMat_Trai4.Create(this,565, 332, 893, 357); 
	m_wndPD2Label.Create(this, _T("PD"), 25, 363, 97, 385);
	m_wndPD2.Create(this,102, 363, 431, 388); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 25, 418, 125, 443);
	m_wndItemName.Create(this,130, 418, 380, 443); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 385, 418, 485, 443);
	m_wndQuantity.Create(this,490, 418, 555, 443); 
	m_wndMaxQuantity.Create(this,560, 418, 630, 443); 
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 645, 418, 745, 443);
	m_wndSellingPrice.Create(this,750, 418, 890, 443); 
	m_wndNoteLabel.Create(this, _T("Note"), 25, 448, 125, 473);
	m_wndNote.Create(this,130, 448, 630, 473); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 645, 448, 745, 473);
	m_wndTotalAmount.Create(this,750, 448, 890, 473); 
	m_wndStatusLable.Create(this, _T("Status"), 25, 483, 125, 508);
	m_wndStatus.Create(this,130, 483, 250, 508); 
	m_wndList.Create(this,25, 538, 890, 639); 	
	
	m_wndAdd.Create(this, _T("&Add"), 265, 649, 335, 674);
	m_wndEdit.Create(this, _T("&Edit"), 340, 649, 410, 674);
	m_wndDelete.Create(this, _T("&Delete"), 415, 649, 485, 674);
	m_wndSave.Create(this, _T("&Save"), 490, 649, 560, 674);
	m_wndDiscard.Create(this, _T("&Cancel"), 565, 649, 635, 674);
	m_wndConfirm.Create(this, _T("&Confirm"), 640, 649, 730, 674);
	m_wndApproval.Create(this, _T("&Approval"), 735, 649, 820, 674);
	m_wndPrint.Create(this, _T("&Print"), 825, 649, 895, 674);
	m_wndAddLine.Create(this, _T("Add Line"), 20, 649, 100, 674);*/
	
	m_wndGeneralInformation.Create(this, _T("General Information"), 20, 4, 635, 119);
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 640, 5, 895, 120);
	m_wndItemInformation.Create(this, _T("Item Information"), 20, 536, 895, 666);
	m_wndLines.Create(this, _T("Thông tin hàng bán"), 20, 413, 895, 497);
	m_wndAddFunctionalFood.Create(this, _T("&Add Functional Food"), 105, 672, 250, 697);
	m_wndThiluckhongkinh.Create(this, _T("Thị lực không kính"), 20, 121, 482, 174);
	m_wndThiluckinhcu.Create(this, _T("Thị lực kính cũ"), 482, 121, 895, 174);
	m_wndSBDTCanBangHaiMat.Create(this, _T("SBĐT và cân bằng 2 mắt"), 20, 180, 895, 232);
	m_wndDonKinhnhinxa.Create(this, _T("Đơn kính nhìn xa"), 20, 238, 895, 318);
	m_wndDonKinhnhingan.Create(this, _T("Đơn kính nhìn gần"), 20, 324, 895, 407);
	m_wndStorageLabel.Create(this, _T("Storage"), 25, 30, 125, 55);
	m_wndStorage.Create(this,130, 30, 380, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 385, 30, 485, 55);
	m_wndType.Create(this,490, 30, 630, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 645, 30, 745, 55);
	m_wndOrderNo.Create(this,750, 30, 890, 55); 
	m_wndCustomerNameLabel.Create(this, _T("Customer Name"), 25, 60, 125, 85);
	m_wndCustomerName.Create(this,130, 60, 380, 85); 
	m_wndDeptLabel.Create(this, _T("Department"), 385, 60, 485, 85);
	m_wndDept.Create(this,490, 60, 630, 85); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 645, 60, 745, 85);
	m_wndOrderDate.Create(this,750, 60, 890, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 25, 89, 125, 114);
	m_wndAddress.Create(this,130, 90, 380, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 385, 90, 485, 115);
	m_wndPhone.Create(this,490, 90, 630, 115); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 645, 90, 745, 115);
	m_wndApprovedDate.Create(this,750, 90, 890, 115); 
	m_wndMatPhaiLabel.Create(this, _T("Mat_Phai"), 25, 145, 97, 170);
	m_wndMat_Phai.Create(this,102, 145, 225, 170); 
	m_wndMatTraiLabel.Create(this, _T("Mat_Trai"), 230, 145, 302, 170);
	m_wndMat_Trai.Create(this,307, 145, 431, 170); 
	m_wndMatPhai1Label.Create(this, _T("Mat_Phai1"), 487, 145, 559, 170);
	m_wndMat_Phai1.Create(this,565, 145, 688, 170); 
	m_wndMatTrai1Label.Create(this, _T("Mat_Trai1"), 692, 145, 764, 170);
	m_wndMat_Trai1.Create(this,770, 145, 893, 170); 
	m_wndMatPhai2Label.Create(this, _T("Mat_Phai2"), 25, 202, 97, 227);
	m_wndMat_Phai2.Create(this,102, 202, 431, 227); 
	m_wndMatTrai2Label.Create(this, _T("Mat_Trai2"), 487, 202, 559, 227);
	m_wndMat_Trai2.Create(this,565, 202, 893, 227); 
	m_wndMatPhai3Label.Create(this, _T("Mat_Phai3"), 25, 260, 97, 285);
	m_wndMat_Phai3.Create(this,102, 260, 431, 285); 
	m_wndMatTrai3Label.Create(this, _T("Mat_Trai3"), 487, 260, 559, 285);
	m_wndMat_Trai3.Create(this,565, 260, 893, 285); 
	m_wndPD1Label.Create(this, _T("PD"), 25, 289, 97, 314);
	m_wndPD1.Create(this,102, 289, 431, 314); 
	m_wndMatPhai4Label.Create(this, _T("Mat_Phai4"), 25, 346, 97, 371);
	m_wndMat_Phai4.Create(this,102, 346, 431, 371); 
	m_wndMatTrai4Label.Create(this, _T("Mat_Trai4"), 487, 346, 559, 371);
	m_wndMat_Trai4.Create(this,565, 346, 893, 371); 
	m_wndPD2Label.Create(this, _T("PD"), 25, 377, 97, 402);
	m_wndPD2.Create(this,102, 377, 431, 402); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 25, 438, 125, 463);
	m_wndItemName.Create(this,130, 438, 380, 463); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 385, 438, 485, 463);
	m_wndQuantity.Create(this,490, 438, 555, 463); 
	m_wndMaxQuantity.Create(this,560, 438, 630, 463); 
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 645, 438, 745, 463);
	m_wndSellingPrice.Create(this,750, 438, 890, 463); 
	m_wndNoteLabel.Create(this, _T("Note"), 25, 468, 125, 493);
	m_wndNote.Create(this,130, 468, 630, 493); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 645, 468, 745, 493);
	m_wndTotalAmount.Create(this,750, 468, 890, 493); 
	m_wndStatusLable.Create(this, _T("Status"), 25, 506, 125, 531);
	m_wndStatus.Create(this,130, 506, 250, 531); 
	m_wndList.Create(this,25, 561, 890, 662); 
	
	
	m_wndAdd.Create(this, _T("&Add"), 265, 672, 335, 697);
	m_wndEdit.Create(this, _T("&Edit"), 340, 672, 410, 697);
	m_wndDelete.Create(this, _T("&Delete"), 415, 672, 485, 697);
	m_wndSave.Create(this, _T("&Save"), 490, 672, 560, 697);
	m_wndDiscard.Create(this, _T("&Cancel"), 565, 672, 635, 697);
	m_wndConfirm.Create(this, _T("&Confirm"), 640, 672, 730, 697);
	m_wndApproval.Create(this, _T("&Approval"), 735, 672, 820, 697);
	m_wndPrint.Create(this, _T("&Print"), 825, 672, 895, 697);
	m_wndAddLine.Create(this, _T("Add Line"), 20, 672, 100, 697);


}
void CGLSSaleOrderDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndCustomerName.SetLimitText(128);
	m_wndCustomerName.SetCheckValue(true);
	m_wndCustomerName.SetInitCap(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndApprovedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApprovedDate.SetCheckValue(true);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndQuantity.SetNumberDecimal(0);
	m_wndSellingPrice.SetLimitText(1024);
	m_wndSellingPrice.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndAddFunctionalFood.ModifyStyle(WS_TABSTOP, 0);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	if(pMF->GetModuleID() == _T("PM"))
		m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 220);
	else
		m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(6, _T("Prod. Country"), CFMT_TEXT, 100);
//	m_wndList.InsertColumn(7, _T("Mfg Name"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Lot No"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(8, _T("Expire Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(9, _T("orderqty"), CFMT_TEXT | CFMT_RIGHT, 0);
	m_wndList.InsertColumn(10, _T("ProductItemID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Line"), CFMT_TEXT, 0);



	m_wndItemName.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ProductItemID
	m_wndItemName.InsertColumn(1, _T(""), CFMT_NUMBER, 0); //Product_ID
	m_wndItemName.InsertColumn(2, _T("ID"), CFMT_NUMBER, 70);
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndItemName.InsertColumn(3, _T("Name"), CFMT_TEXT, 150);
		m_wndItemName.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
		m_wndItemName.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 150);
	}
	else
	{
		m_wndItemName.InsertColumn(3, _T("Name"), CFMT_TEXT, 350);
		m_wndItemName.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
		m_wndItemName.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
	}

	m_wndItemName.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 0);
	m_wndItemName.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 80);
	m_wndItemName.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
	m_wndItemName.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
	m_wndItemName.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 100);
	m_wndItemName.Format(11, 3);


	m_sale_orderTbl.SetTableName(_T("sale_order"));
	m_sale_orderTbl.AddField(_T("SO_UPDATEDBY"), dfText, 20);
	m_sale_orderTbl.AddField(_T("SO_UPDATEDDATE"), dfDateTime);
	m_sale_orderTbl.AddField(_T("SO_SALE_ORDER_ID"), dfLong); 
	m_sale_orderTbl.AddField(_T("SO_ORG_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_USER_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_STORAGE_ID"), dfInteger); 
	m_sale_orderTbl.AddField(_T("SO_DOCNO"), dfLong);
	m_sale_orderTbl.AddField(_T("SO_PATIENTNO"), dfLong);
	m_sale_orderTbl.AddField(_T("SO_ORDERNO"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_ORDERDATE"), dfDateTime); 
	m_sale_orderTbl.AddField(_T("SO_ApprovedDate"), dfDate); 
	m_sale_orderTbl.AddField(_T("SO_DESCRIPTION"), dfText, 254); 
	m_sale_orderTbl.AddField(_T("SO_PARTNER_TYPE_ID"), dfText, 3); 
	m_sale_orderTbl.AddField(_T("SO_PARTNER_ID"), dfText, 20); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERNAME"), dfText, 128); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERADDRESS"), dfText, 255); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERPHONE"), dfText, 15); 
	m_sale_orderTbl.AddField(_T("SO_PARTNERCONTACT"), dfText, 255); 
	//m_sale_orderTbl.AddField(_T("SO_REFERENCE"), dfText, 255); 

	m_sale_orderlineTbl.AddField(_T("SOL_SALE_ORDER_ID"), dfLong); 
	m_sale_orderlineTbl.AddField(_T("SOL_PRODUCT_ITEM_ID"), dfLong); 
	m_sale_orderlineTbl.AddField(_T("SOL_QTYORDER"), dfFloat); 
	m_sale_orderlineTbl.AddField(_T("SOL_DESCRIPTION"), dfText, 254);
	
	//Lưu thông tin mở rộng khi nhập đơn kính mắt
	m_gls_sale_orderTbl.SetTableName(_T("gls_sale_order"));


	
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15);
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime);
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15);
	m_hms_patientTbl.AddField(_T("hp_updateddate"), dfDateTime);
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong);
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15);
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45);
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15);
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 254);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong);
	m_hms_docTbl.AddField(_T("hd_docno"), dfLong);
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 2);
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7);
	
//	m_sale_orderTbl.AddField(_T("SO_TAX_ID"), dfLong); 

	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndApprovedDate.SetReadOnly(TRUE);
	m_wndOrderNo.SetReadOnly(TRUE);
	//m_wndType.SetCheckValue(false);
	m_wndPhone.SetCheckValue(false);
	m_wndAddress.SetCheckValue(false);
	m_wndSellingPrice.SetReadOnly(true);
	m_wndNote.SetCheckValue(false);
	m_wndMaxQuantity.SetReadOnly(true);
	m_wndTotalAmount.SetReadOnly(true);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndSellingPrice.SetCurrencyFormat(true);
	m_wndStatus.SetReadOnly(true);
	OnInitializeParameters();
}

void CGLSSaleOrderDialog::OnInitializeParameters(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_szObjectType = pMF->GetModuleID()==_T("EM")?_T("I"):_T("S");
	
}

void CGLSSaleOrderDialog::OnSetWindowEvents(){
	m_wndStorage.SetEvent(WE_CHECKVALUE, _OnStorageCheckValueFnc);
	m_wndAddFunctionalFood.SetEvent(WE_CLICK, _OnAddFunctionalFoodSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndCustomerName.SetEvent(WE_CHANGE, _OnCustomerNameChangeFnc);
	//m_wndCustomerName.SetEvent(WE_SETFOCUS, _OnCustomerNameSetfocusFnc);
	//m_wndCustomerName.SetEvent(WE_KILLFOCUS, _OnCustomerNameKillfocusFnc);
	m_wndCustomerName.SetEvent(WE_CHECKVALUE, _OnCustomerNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);

	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
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
	//m_wndSellingPrice.SetEvent(WE_CHANGE, _OnSellingPriceChangeFnc);
	//m_wndSellingPrice.SetEvent(WE_SETFOCUS, _OnSellingPriceSetfocusFnc);
	//m_wndSellingPrice.SetEvent(WE_KILLFOCUS, _OnSellingPriceKillfocusFnc);
	m_wndSellingPrice.SetEvent(WE_CHECKVALUE, _OnSellingPriceCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add Items"), _OnListAddItemFnc);	
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(3, _T("Payment"), _OnListPaymentFnc);

	m_wndMat_Phai.SetEvent(WE_CHECKVALUE, _OnMat_PhaiCheckValueFnc);	
	m_wndMat_Trai.SetEvent(WE_CHECKVALUE, _OnMat_TraiCheckValueFnc);	
	m_wndMat_Phai1.SetEvent(WE_CHECKVALUE, _OnMat_Phai1CheckValueFnc);	
	m_wndMat_Trai1.SetEvent(WE_CHECKVALUE, _OnMat_Trai1CheckValueFnc);	
	m_wndMat_Phai2.SetEvent(WE_CHECKVALUE, _OnMat_Phai2CheckValueFnc);	
	m_wndMat_Trai2.SetEvent(WE_CHECKVALUE, _OnMat_Trai2CheckValueFnc);	
	m_wndMat_Phai3.SetEvent(WE_CHECKVALUE, _OnMat_Phai3CheckValueFnc);	
	m_wndMat_Trai3.SetEvent(WE_CHECKVALUE, _OnMat_Trai3CheckValueFnc);	
	m_wndPD1.SetEvent(WE_CHECKVALUE, _OnPD1CheckValueFnc);	
	m_wndMat_Phai4.SetEvent(WE_CHECKVALUE, _OnMat_Phai4CheckValueFnc);	
	m_wndMat_Trai4.SetEvent(WE_CHECKVALUE, _OnMat_Trai4CheckValueFnc);	
	m_wndPD2.SetEvent(WE_CHECKVALUE, _OnPD2CheckValueFnc);

	/*m_wndList.AddEvent(0, _T("-")); 
	m_wndList.AddEvent(4, _T("Add Functional Food"), _OnAddFunctionalFoodFnc);

	m_wndList.AddEvent(0, _T("-")); 
	m_wndList.AddEvent(5, _T("Post to Duoc QG"), _OnListPostToDuocQGFnc);*/

	
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);

	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndTotalAmount.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndStatus, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndStatus.SetTextColor(RGB(0, 0, 255));

	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
	}	
	else
		SetMode(VM_ADD);
	if (m_bFunctionalFood)
	{
		SetWindowText(_T("Functional Food"));
	}
	else
	{
		SetWindowText(_T("Sale Order"));
	}	
}
void CGLSSaleOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndSellingPrice.GetDlgCtrlID(), m_nSellingPrice);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndMat_Phai.GetDlgCtrlID(), m_szMat_Phai);
	DDX_Text(pDX, m_wndMat_Trai.GetDlgCtrlID(), m_szMat_Trai);
	DDX_Text(pDX, m_wndMat_Phai1.GetDlgCtrlID(), m_szMat_Phai1);
	DDX_Text(pDX, m_wndMat_Trai1.GetDlgCtrlID(), m_szMat_Trai1);
	DDX_Text(pDX, m_wndMat_Phai2.GetDlgCtrlID(), m_szMat_Phai2);
	DDX_Text(pDX, m_wndMat_Trai2.GetDlgCtrlID(), m_szMat_Trai2);
	DDX_Text(pDX, m_wndMat_Phai3.GetDlgCtrlID(), m_szMat_Phai3);
	DDX_Text(pDX, m_wndMat_Trai3.GetDlgCtrlID(), m_szMat_Trai3);
	DDX_Text(pDX, m_wndPD1.GetDlgCtrlID(), m_szPD1);
	DDX_Text(pDX, m_wndMat_Phai4.GetDlgCtrlID(), m_szMat_Phai4);
	DDX_Text(pDX, m_wndMat_Trai4.GetDlgCtrlID(), m_szMat_Trai4);
	DDX_Text(pDX, m_wndPD2.GetDlgCtrlID(), m_szPD2);
}
void CGLSSaleOrderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPayment;
	szSQL.Format(_T("SELECT * FROM sale_order WHERE so_sale_order_id =%ld "), m_nSaleOrderID);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("SO_ORDERNO"), m_szOrderNo);
		rs.GetValue(_T("SO_ORDERDATE"), m_szOrderDate);
		rs.GetValue(_T("SO_PARTNERNAME"), m_szCustomerName);
		rs.GetValue(_T("SO_STORAGE_ID"), m_szStorageKey);
		rs.GetValue(_T("SO_STATUS"), m_szStatus);		
		rs.GetValue(_T("SO_ORDERDATE"), m_szOrderDate);
		rs.GetValue(_T("SO_ApprovedDate"), m_szApprovedDate);
		rs.GetValue(_T("SO_PARTNER_TYPE_ID"), m_szTypeKey);		
		if (m_szTypeKey == _T("I"))
			rs.GetValue(_T("SO_PARTNERADDRESS"), m_szDeptKey);
		else 
			//if (m_szTypeKey == _T("W"))
			rs.GetValue(_T("SO_PARTNERADDRESS"), m_szAddress);
		rs.GetValue(_T("SO_PARTNERNAME"), m_szCustomerName);
		
		rs.GetValue(_T("SO_PARTNERPHONE"), m_szPhone);
		
		rs.GetValue(_T("so_payment"), szPayment);
		m_szPaymentStatus = szPayment;
		rs.GetValue(_T("so_docno"), m_nDocNo);
		rs.GetValue(_T("so_patientno"), m_nPatientNo);
		rs.GetValue(_T("so_reference"), tmpStr);
		if (tmpStr == _T("FF"))
		{
			m_bFunctionalFood = true;
		}
		else
		{
			m_bFunctionalFood = false;
		}
		OnListLoadData();
		SetMode(VM_VIEW);

		if(m_szStatus == _T("O")){
			TranslateString(_T("Open"), tmpStr);
			m_szStatusDesc =  tmpStr;
			m_wndList.SetMenuState(1, TRUE);
			m_wndList.SetMenuState(2, TRUE);
		}
		else 
		{
			if(m_szStatus == _T("S")){
				if (szPayment == _T("P"))
				{
					TranslateString(_T("Paid"), tmpStr);
					m_szStatusDesc = tmpStr;
				}
				else
				{
					TranslateString(_T("Sending"), tmpStr);
					m_szStatusDesc = tmpStr;
				}
				TranslateString(_T("&Disconfirm"), tmpStr);
				m_wndConfirm.SetWindowText(tmpStr);
			}
			else
			{
				TranslateString(_T("Approved"), tmpStr);
				m_szStatusDesc = tmpStr;
			}		
			m_wndList.SetMenuState(1, FALSE);
			m_wndList.SetMenuState(2, FALSE);
		}
		m_wndList.SetMenuText(3, szPayment==_T("P")?_T("H\x1EE7y th\x61nh to\xE1n"):_T("Th\x61nh to\xE1n"));
		m_wndList.SetMenuState(3, m_szTypeKey==_T("R")?TRUE:FALSE);
		UpdateData(false);
	}
	else
		SetMode(VM_NONE);

}

int CGLSSaleOrderDialog::OnMat_PhaiCheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_TraiCheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Phai1CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Trai1CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Phai2CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Trai2CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Phai3CheckValue(){
	return 0;
} 

int CGLSSaleOrderDialog::OnMat_Trai3CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnPD1CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Phai4CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnMat_Trai4CheckValue(){
	return 0;
}
int CGLSSaleOrderDialog::OnPD2CheckValue(){
	return 0;
} 
void CGLSSaleOrderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSurName, szMidName, szFirstName, szWhere;

	if (GetMode() == VM_EDIT)
	{
		szWhere.Format(_T(" WHERE so_sale_order_id = %ld"), m_nSaleOrderID);
		m_sale_orderTbl.Open(&pMF->m_db, szWhere);
	}
	m_sale_orderTbl.SetValue(_T("SO_UPDATEDBY"), pMF->GetCurrentUser());
	m_sale_orderTbl.SetValue(_T("SO_UPDATEDDATE"), pMF->GetSysDateTime());
	m_sale_orderTbl.SetValue(_T("SO_SALE_ORDER_ID"), m_nSaleOrderID);
	m_sale_orderTbl.SetValue(_T("SO_ORG_ID"), pMF->GetModuleID());
	m_sale_orderTbl.SetValue(_T("SO_USER_ID"), pMF->GetCurrentUser());
	m_sale_orderTbl.SetValue(_T("SO_STORAGE_ID"), m_szStorageKey);
	m_sale_orderTbl.SetValue(_T("SO_ORDERNO"), m_szOrderNo);
	m_sale_orderTbl.SetValue(_T("SO_ORDERDATE"), m_szOrderDate);
	m_sale_orderTbl.SetValue(_T("SO_APPROVEDDATE"), m_szApprovedDate);
	m_sale_orderTbl.SetValue(_T("SO_PARTNER_TYPE_ID"), m_szTypeKey);
	m_sale_orderTbl.SetValue(_T("SO_PARTNER_ID"), _T(""));
	m_sale_orderTbl.SetValue(_T("SO_PARTNERNAME"), m_szCustomerName);
	if (m_szTypeKey == _T("I"))
		m_sale_orderTbl.SetValue(_T("SO_PARTNERADDRESS"), m_szDeptKey);
	else if (m_szTypeKey == _T("W"))
		m_sale_orderTbl.SetValue(_T("SO_PARTNERADDRESS"), m_szAddress);
	
	m_sale_orderTbl.SetValue(_T("SO_PARTNERPHONE"), m_szPhone);
	//m_sale_orderTbl.SetValue(_T("SO_REFERENCE"), m_bFunctionalFood?_T("FF"):_T(""));
	
	m_sale_orderlineTbl.SetValue(_T("SOL_SALE_ORDER_ID"), m_nSaleOrderID);
	m_sale_orderlineTbl.SetValue(_T("SOL_PRODUCT_ITEM_ID"), m_szItemNameKey);
	m_sale_orderlineTbl.SetValue(_T("SOL_QTYORDER"), m_nQuantity);
	m_sale_orderlineTbl.SetValue(_T("SOL_DESCRIPTION"), m_szNote);
	
	SplitName(m_szCustomerName, szSurName, szMidName, szFirstName);
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	if (GetMode() == VM_EDIT)
	{
		szWhere.Format(_T(" WHERE hp_patientno = %ld"), m_nPatientNo);
		m_hms_patientTbl.Open(&pMF->m_db, szWhere);
	}
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName);
	m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName);
	m_hms_patientTbl.SetValue(_T("hp_dtladdr"), m_szAddress);

	m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
	if (GetMode() == VM_EDIT)
	{
		szWhere.Format(_T(" WHERE hd_docno = %ld"), m_nDocNo);
		m_hms_docTbl.Open(&pMF->m_db, szWhere);
	}
	m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_status"), _T("O")); 
	m_hms_docTbl.SetValue(_T("hd_object"), _T("7"));
	m_hms_docTbl.SetValue(_T("hd_admitdate"), pMF->GetSysDateTime()); 
}
void CGLSSaleOrderDialog::SetDefaultValues(){
	m_szStatus = _T("O");
	m_szStatusDesc.Empty();
	//m_szStorageKey.Empty();
	//m_szTypeKey.Empty();
	if (!m_bFunctionalFood)
	{
		m_szStorageKey = m_szPrevStorage;
		m_szTypeKey = m_szPrevType;
		m_szCustomerName.Empty();
		m_szDeptKey.Empty();
		m_nDocNo = 0;
		m_nPatientNo = 0;
	}
	m_szPhone.Empty();
	m_wndPhone.SetCheckValue(TRUE);
	m_szAddress.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szItemNameKey.Empty();
	m_nQuantity=0;
	m_nMaxQuantity = 0;
	m_nSellingPrice=0;
	m_szNote.Empty();
	m_nSaleOrderID = 0;
	m_nTotalAmount=0;
	m_wndList.DeleteAllItems();
}
int CGLSSaleOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();			
			m_szOrderDate = pMF->GetSysDateTime();
			m_szApprovedDate = pMF->GetSysDate();
			szSQL.Format(_T("AD_GETNEXTVAL('SALE_ORDER_NO','N') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			if(m_szStorageKey.IsEmpty())
				m_wndStorage.SetFocus();
			else
				m_wndCustomerName.SetFocus();
 			break;
		case VM_ADDCHILD:
			EnableControls(FALSE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_nQuantity = 0;
			m_nMaxQuantity = 0;
			m_nSellingPrice = 0;
			m_szItemNameKey.Empty();
			m_szNote.Empty();
			m_wndQuantity.EnableWindow(TRUE);
			m_wndItemName.EnableWindow(TRUE);
			m_wndNote.EnableWindow(TRUE);			
			m_wndItemName.SetFocus();
			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndQuantity.EnableWindow(FALSE);
			m_wndItemName.EnableWindow(FALSE);
			m_wndNote.EnableWindow(FALSE);
			m_wndStorage.EnableWindow(FALSE);			
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);		
			if (m_szStatus != _T("O"))
			{
				m_wndAddLine.EnableWindow(FALSE);
				m_wndDelete.EnableWindow(FALSE);
				if (m_szStatus == _T("A"))
				{
					m_wndConfirm.EnableWindow(FALSE);
					m_wndEdit.EnableWindow(FALSE);
					m_wndApproval.EnableWindow(FALSE);
				}
			}
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
		if (nMode == VM_ADD || nMode == VM_EDIT){
			m_wndDept.EnableWindow(m_szTypeKey==_T("I")?true:false);
			m_wndAddress.EnableWindow(m_szTypeKey == _T("I")?false:true);		
		}
 		UpdateData(FALSE);
 		return nOldMode;
}
void CGLSSaleOrderDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGLSSaleOrderDialog::OnStorageSelendok(){
	UpdateData();
	m_szPrevStorage = m_szStorageKey;
}
/*void CGLSSaleOrderDialog::OnStorageSetfocus(){
	
}*/
/*void CGLSSaleOrderDialog::OnStorageKillfocus(){
	
}*/
long CGLSSaleOrderDialog::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString szWhere;
	szWhere.Format(_T(" and (msl_category='S' or msl_storage_id=12) and msl_type in('A','B','D') "));

	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szWhere);
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
/*void CGLSSaleOrderDialog::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CGLSSaleOrderDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGLSSaleOrderDialog::OnTypeSelendok(){
	UpdateData(true);
	 if(m_szTypeKey == _T("I"))
	 {
		 m_wndDept.EnableWindow(true);
		 m_wndAddress.EnableWindow(false);
	 }
	 else
	 {
		 m_szDeptKey.Empty();
		 m_wndDept.EnableWindow(false);
		 m_wndAddress.EnableWindow(true);
	 }
	 m_szPrevType = m_szTypeKey;
	 m_wndList.SetMenuState(3, m_szTypeKey==_T("R")?TRUE:FALSE);
	 UpdateData(false);
}
/*void CGLSSaleOrderDialog::OnTypeSetfocus(){
	
}*/
/*void CGLSSaleOrderDialog::OnTypeKillfocus(){
	
}*/
long CGLSSaleOrderDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter = _T(" and ss_code <> 'R'");
	return pMF->LoadSelectionList(&m_wndType, m_szTypeKey, _T("sale_order_type"), szFilter);
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
/*void CGLSSaleOrderDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

int CGLSSaleOrderDialog::OnTypeCheckValue(){
	return 0;
}
void CGLSSaleOrderDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGLSSaleOrderDialog::OnDeptSelendok(){
	 
}
/*void CGLSSaleOrderDialog::OnDeptSetfocus(){
	
}*/
/*void CGLSSaleOrderDialog::OnDeptKillfocus(){
	
}*/
long CGLSSaleOrderDialog::OnDeptLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	pMF->LoadDepartmentList(&m_wndDept, m_szDeptKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGLSSaleOrderDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGLSSaleOrderDialog::OnTotalAmountChange(){
	
} */
/*void CGLSSaleOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 

/*void CGLSSaleOrderDialog::OnCustomerNameChange(){
	
} */
/*void CGLSSaleOrderDialog::OnCustomerNameSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnCustomerNameKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnCustomerNameCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnPhoneChange(){
	
} */
/*void CGLSSaleOrderDialog::OnPhoneSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnPhoneKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnAddressChange(){
	
} */
/*void CGLSSaleOrderDialog::OnAddressSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnAddressKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnOrderNoChange(){
	
} */
/*void CGLSSaleOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnOrderNoKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnOrderDateChange(){
	
} */
/*void CGLSSaleOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnOrderDateKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnApprovedDateChange(){
	
} */
/*void CGLSSaleOrderDialog::OnApprovedDateSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnApprovedDateKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnApprovedDateCheckValue(){
	return 0;
} 
void CGLSSaleOrderDialog::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CGLSSaleOrderDialog::OnItemNameSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	m_szProdCountry = m_wndItemName.GetCurrent(1);
	m_szUnit = m_wndItemName.GetCurrent(4);	
	m_nSellingPrice = str2float(m_wndItemName.GetCurrent(7));
	m_nMaxQuantity = ToLong(m_wndItemName.GetCurrent(8));
	/*szSQL.Format(_T("SELECT distinct hpou_dousage FROM hms_pharmaorder_usage WHERE hpou_user_id='%s' and hpou_product_id=%ld"),
		pMF->GetCurrentUser(), str2long(m_szItemNameKey));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
	}*/
	m_wndStorage.EnableWindow(false);
	UpdateData(false);
}
/*void CGLSSaleOrderDialog::OnItemNameSetfocus(){
	
}*/
/*void CGLSSaleOrderDialog::OnItemNameKillfocus(){
	
}*/
long CGLSSaleOrderDialog::OnItemNameLoadData(){
	UpdateData();
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szKey, szFilter;
	CGuiComboBox *pCB = &m_wndItemName;
	szWhere.Empty();
	szKey = m_szItemNameKey;
	if(pCB->IsSearchKey() && str2long(szKey) > 0){
		szWhere.Format(_T(" AND product_item_id=%ld "), str2long(szKey));
	};

	if(!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id = %s "), m_szStorageKey);
	else
		szWhere.AppendFormat(_T(" AND 0=1 "));	

	pCB->SetRequirementLength(1);
	
	CString szText;
	StringLower(pCB->GetKey(), szText);
	if(!szText.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "), szText);
	}
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	pCB->DeleteAllItems(); 
	int nCount = 0;
	if (m_bFunctionalFood)
	{
		szWhere.AppendFormat(_T(" and product_producttype = 'A1700'"));
	}
	else
	{
		szWhere.AppendFormat(_T(" and product_producttype <> 'A1700'"));
	}
	
	if (pMF->GetModuleID() == _T("PM"))
		
	{
		szWhere.AppendFormat(_T(" AND product_expdate > sysdate"));
		/*
		szWhere.AppendFormat(_T(" AND msl_product_id not in ") \
						_T("	(select * from table(get_product_control(%ld, '%s', '%s')))")
						, str2long(m_szStorageKey), pMF->GetDepartmentID(), pMF->GetCurrentUser());
		*/
	}

	szSQL.Format(_T(" SELECT product_item_id,") \
	_T("   product_id ,") \
	_T("   product_code ,") \
	_T("   product_name ,") \
	_T("   product_uomname ,") \
	_T("   product_classname ,") \
	_T("   product_taxprice,") \
	_T("   product_saleprice1,") \
	_T("   product_saleprice2,") \
	_T("   product_saleprice3,") \
	_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS product_qtyonhand,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_manufacturename") \
	_T(" FROM m_storageline") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON(msl_product_item_id=product_item_id)") \
	_T(" WHERE msl_isactive='Y' %s ") \
	_T(" AND msl_qtyonhand     > 0") \
	_T(" AND (msl_qtyonhand-msl_qtyordered-msl_qtypreordered)   >= 0") \
	//_T(" AND product_expdate > sysdate") \//
	_T(" GROUP BY product_item_id,") \
	_T("   product_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_classname,") \
	_T("   product_taxprice,") \
	_T("   product_saleprice1,") \
	_T("   product_saleprice2,") \
	_T("   product_saleprice3,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_manufacturename") \
	_T(" HAVING SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) > 0 ") \
	_T(" ORDER BY product_name, product_expdate") \
	, szWhere);

	Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s:%d"), szSQL, nCount);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("product_item_id")),
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_classname")), 
			rs.GetValue(_T("product_taxprice")), 
			rs.GetValue(_T("product_saleprice1")), 
			rs.GetValue(_T("product_qtyonhand")), 
			rs.GetValue(_T("product_lotno")),
			CDate::Convert(rs.GetValue(_T("product_expdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("product_manufacturename")),
			NULL);

		rs.MoveNext();
	}
	return nCount;
}
/*void CGLSSaleOrderDialog::OnItemNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CGLSSaleOrderDialog::OnQuantityChange(){
	
} */
/*void CGLSSaleOrderDialog::OnQuantitySetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnQuantityKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(m_nQuantity <= 0 || m_nQuantity > m_nMaxQuantity)
	{
		return -1;
	}

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	long nMinQty, nMaxQty;

	szSQL.Format(_T("SELECT max(mp_qtymax) as maxqty FROM m_product WHERE mp_product_id=%ld and mp_qtymax > 0 "), str2long(m_szItemNameKey));
	rs.ExecSQL(szSQL);


	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("MinQty"), nMinQty);
		nMinQty = 0;
		rs.GetValue(_T("MaxQty"), nMaxQty);
		
		if(nMaxQty <= 0) nMaxQty = 3000;

		if (m_nQuantity < nMinQty || m_nQuantity > nMaxQty)
		{
			tmpStr.Format(_T("This value is between [%d] and [%d]"), nMinQty, nMaxQty);
			m_wndQuantity.SetToolTipMessage(tmpStr);
			return -1;
		}
	}	

	return 0;
} 
/*void CGLSSaleOrderDialog::OnSellingPriceChange(){
	
} */
/*void CGLSSaleOrderDialog::OnSellingPriceSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnSellingPriceKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnSellingPriceCheckValue(){
	return 0;
} 
/*void CGLSSaleOrderDialog::OnNoteChange(){
	
} */
/*void CGLSSaleOrderDialog::OnNoteSetfocus(){
	
} */
/*void CGLSSaleOrderDialog::OnNoteKillfocus(){
	
} */
int CGLSSaleOrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CGLSSaleOrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPMSSaleOrderDialog();
} 
void CGLSSaleOrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPMSSaleOrderDialog();
} 
void CGLSSaleOrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePMSSaleOrderDialog();
} 
void CGLSSaleOrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePMSSaleOrderDialog();
} 
void CGLSSaleOrderDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPMSSaleOrderDialog();
}
void CGLSSaleOrderDialog::OnConfirmSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus, szPayment;
	szStatus.Empty();
	szSQL.Format(_T("SELECT so_payment FROM sale_order WHERE so_sale_order_id = %ld"), m_nSaleOrderID);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() == _T("P"))
	{
		ShowMessageBox(_T("Order is paid.Can not disconfirm!"), MB_ICONSTOP);
		return;
	}
	szSQL.Format(_T("SALE_ORDER_SEND(%ld, '%s', '%s')"), m_nSaleOrderID, pMF->GetCurrentUser(), _T(""));
	szStatus = pMF->ExecDML(szSQL);
	if (szStatus.IsEmpty())
	{
		ShowMessageBox(_T("Can not confirm order"), MB_ICONSTOP);
		return;
	}
	if (szStatus == _T("O"))
	{
		TranslateString(_T("&Confirm"), tmpStr);
		m_wndConfirm.SetWindowText(tmpStr);
	}
	else
	{
		TranslateString(_T("&Disconfirm"), tmpStr);
		m_wndConfirm.SetWindowText(tmpStr);
	}
	GetDataToScreen();

} 
#include "PMSPaymentDlg.h"
void CGLSSaleOrderDialog::OnApprovalSelect(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szPayment;
	/*if(!pMF->CheckPermission(_T("09.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}*/
	
	
	szSQL.Format(_T("SELECT so_status status, so_payment payment FROM sale_order WHERE so_sale_order_id =%ld "), m_nSaleOrderID);	
	rs.ExecSQL(szSQL);
	
	rs.GetValue(_T("status"), szStatus);
	rs.GetValue(_T("payment"), szPayment);

	if (szStatus != _T("S"))
	{
		ShowMessageBox(_T("Order is not confirmed or is approved!"), MB_ICONSTOP);
		return;
	}
	if (szPayment != _T("P"))
	{
		ShowMessageBox(_T("Order is unpaid!"), MB_ICONSTOP);
		return;
	}
	if(m_wndList.GetItemCount() <= 0)
		return ;
	int nMsg = ShowMessage(11);
	if(nMsg == IDNO)
		return;
	szSQL.Format(_T("SALE_ORDER_APPROVAL(%d,'%s', %f)"),m_nSaleOrderID,pMF->GetCurrentUser(), m_nTotalAmount);
	int ret = str2long(pMF->ExecDML(szSQL));
	if(ret > 0)
		GetDataToScreen();

} 
void CGLSSaleOrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPrintForms printer;
	
	if (pMF->GetModuleID() == _T("GLS"))
	{
		PrintGLSDelivery(m_nSaleOrderID, true, true);	
	}

	else if (pMF->GetModuleID() == _T("MA"))
	{
		CGuiMenu menu(this);
		menu.CreatePopupMenu();
		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Sale Export"));
		menu.AppendMenu(MF_SEPARATOR, 0);
		menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Sale Order"));
		CPoint pt;
		CRect rect;
		m_wndPrint.GetWindowRect(&rect);
		pt.x = rect.right;
		pt.y = rect.top-2;
		int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
		switch (ret){
		case 1:
			printer.E10_PrintSaleExport(m_nSaleOrderID);
			break;
		case 2:
			PrintDrugDelivery(m_nSaleOrderID, true, true);
			break;
		}
	}
	else
	{
		PrintDrugDelivery(m_nSaleOrderID, true, true);
	}

} 
void CGLSSaleOrderDialog::OnAddLineSelect(){
	OnListAddItem();
}
void CGLSSaleOrderDialog::OnListDblClick(){
	
} 
void CGLSSaleOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPMSSaleOrderDialog();
} 
int CGLSSaleOrderDialog::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return -1;

	SetMode(VM_ADDCHILD);
	return 0;
} 

int CGLSSaleOrderDialog::OnListRefreshItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	 return 0;
} 

int CGLSSaleOrderDialog::OnListPayment(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	//if (!pMF->CheckPermission(_T(""))){
	//	AfxMessageBox(_T("Permission Denied."));
	//	return -1;
	//}
	if (m_szStatus == _T("A")){
		AfxMessageBox(_T("Phi\x1EBFu \x111\xE3 \x64uy\x1EC7t! Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63!"));
		return -1;
	}
	else if (m_szStatus != _T("S"))
	{
		AfxMessageBox(_T("Phi\x1EBFu \x63h\x1B0\x61 \x78\xE1\x63 nh\x1EADn! Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63!"));
		return -2;
	}
	szSQL.Format(_T("UPDATE sale_order SET so_payment = '%s' WHERE so_sale_order_id = %ld AND so_partner_type_id = 'R'"), m_szPaymentStatus==_T("P")?_T("N"):_T("P"), m_nSaleOrderID);
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes > 0) GetDataToScreen();
	return nRes;
}

int CGLSSaleOrderDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nProductItem_ID;
	int nLine;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	nProductItem_ID = str2long(m_wndList.GetItemText(nSel, 10));
	nLine = str2long(m_wndList.GetItemText(nSel, 11));

	szSQL.Format(_T("SALE_ORDER_DELLINE(%ld, %ld, %d) "),  m_nSaleOrderID, nProductItem_ID, nLine);
//Notice(szSQL);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0){
		OnListLoadData();			
	}
	 return 0;
} 
int CGLSSaleOrderDialog::OnListPostToDuocQG(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	if(pMF->m_wndLienThong.OnPostDonThuoc(0,m_nSaleOrderID,_T("SOO")))
		pMF->m_wndLienThong.OnPostHoaDonThuoc(0,m_nSaleOrderID,_T("SOO"));
	return 1;
}

long CGLSSaleOrderDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT sol_sale_order_id,") \
	_T("   sol_line, ") \
	_T("   product_item_id,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   sol_unitprice as product_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   SUM(sol_qtydelivery)                AS product_qtydelivery,") \
	_T("   SUM(sol_qtyorder)                AS product_qtyorder,") \
	_T("   SUM(sol_qtydelivery*sol_unitprice) AS product_amount") \
	_T(" FROM sale_orderline ") \
	_T(" LEFT JOIN m_productitem_view ON(product_item_id=sol_product_item_id) ") \
	_T(" WHERE sol_sale_order_id=%ld") \
	_T(" GROUP BY sol_sale_order_id,") \
	_T("   product_item_id,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   sol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   sol_line") \
	_T(" ORDER BY sol_line "), m_nSaleOrderID);
	
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	int nIndex=1;
	m_nTotalAmount = 0;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_nTotalAmount += str2double(rs.GetValue(_T("product_amount")));
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_qtydelivery")), 
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_countryname")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("product_expdate")), 
			rs.GetValue(_T("product_qtyorder")), 
			rs.GetValue(_T("product_item_id")), 
			rs.GetValue(_T("sol_line")), 
			NULL);
		
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CGLSSaleOrderDialog::OnAddPMSSaleOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGLSSaleOrderDialog::OnEditPMSSaleOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGLSSaleOrderDialog::OnDeletePMSSaleOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();	
 	CString szSQL;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;


 	szSQL.Format(_T("SALE_ORDER_DELETE(%ld)"), m_nSaleOrderID);
 	int ret = str2long(pMF->ExecDML(szSQL));
 	if(ret >= 0){		
		m_wndList.DeleteAllItems();
 		SetMode(VM_NONE);
 	}
	return 0;
}
int CGLSSaleOrderDialog::OnSavePMSSaleOrderDialog()
{
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT && GetMode() != VM_ADDCHILD)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if (m_szTypeKey == _T("I") && m_szDeptKey.IsEmpty())
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n t\x1EA1i vi\x1EC7n.\x43\x1EA7n nh\x1EADp th\xF4ng tin kho\x61!"));
		return -1;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;
	int res = 0;
	long nOID = 0;
	if(m_nSaleOrderID <= 0)
	{
		pMF->BeginTransaction();
		if (m_nDocNo == 0)
		{
			szSQL.Format(_T("hms_getnextpatientno()"));
			m_nPatientNo = str2long(pMF->ExecDML(szSQL));

			szSQL.Format(_T("hms_getnextdocno()"));
			m_nDocNo = str2long(pMF->ExecDML(szSQL));

			m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
			szSQL = m_hms_patientTbl.GetInsertSQL(szSQL);
			res = pMF->ExecSQL(szSQL);
			if (res <= 0)
			{
				pMF->Rollback();
				ShowMessageBox(_T("Can not add new patient information"), MB_OK);
				return -1;
			}
			m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo);
			m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocNo);

			//m_hms_docTbl.SetValue(_T("hd_admitdept"), pMF->GetModuleID()==_T("PM")?_T("KD"):_T("C10"));
				if (pMF->GetModuleID()==_T("PM"))
				{
				m_hms_docTbl.SetValue(_T("hd_admitdept"), _T("KD"));
				}
				else if (pMF->GetModuleID()==_T("MA")) 
				{
				m_hms_docTbl.SetValue(_T("hd_admitdept"), _T("C10"));
				}
				else
				//Dùng cho module GLS thì tính là khoa PTTYC
				m_hms_docTbl.SetValue(_T("hd_admitdept"), _T("PTTYC"));
			szSQL = m_hms_docTbl.GetInsertSQL(szSQL);

			res = pMF->ExecSQL(szSQL);
			if (res <=0)
			{
				pMF->Rollback();
				ShowMessageBox(_T("Can not add new document information"), MB_OK);
				return -1;
			}
		}
		m_sale_orderTbl.SetValue(_T("so_docno"), m_nDocNo);
		m_sale_orderTbl.SetValue(_T("so_patientno"), m_nPatientNo);
		szSQL.Format(_T("AD_GETNEXTVAL('SALE_ORDER_NO','Y') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
		m_sale_orderTbl.SetValue(_T("so_orderno"), m_szOrderNo);
		szSQL.Format(_T("SALE_ORDER_CREATE(%s) "), m_sale_orderTbl.FormatSQL(_T("SO_UPDATEDBY, SO_UPDATEDDATE")));
		//Notice(szSQL);
 		nOID = str2long(pMF->ExecDML(szSQL));
		m_nSaleOrderID = nOID;
		if (nOID <= 0)
		{
			pMF->Rollback();
			return -1;
		}
		if (m_bFunctionalFood)
		{
			szSQL.Format(_T("update sale_order set so_reference = 'FF' where so_sale_order_id = %ld"), m_nSaleOrderID);
			pMF->ExecSQL(szSQL);	
		}
	}
	else
		nOID = m_nSaleOrderID;

 	if(nOID > 0)
 	{
		if (GetMode() == VM_EDIT)
		{
			pMF->BeginTransaction();
			szWhere.Format(_T(" WHERE hp_patientno = %ld"), m_nPatientNo);
			szSQL.Format(_T("%s %s"), m_hms_patientTbl.GetUpdateSQL(_T("hp_patientno")), szWhere);
			res = pMF->ExecSQL(szSQL);
			if (res < 0)
			{
				pMF->Rollback();
				ShowMessageBox(_T("Can not update patient information"), MB_OK);
				return -1;
			}
			szWhere.Format(_T(" WHERE hd_docno = %ld"), m_nDocNo);
			szSQL.Format(_T("%s %s"), m_hms_docTbl.GetUpdateSQL(_T("hd_docno")), szWhere);
			res = pMF->ExecSQL(szSQL);
			if (res < 0)
			{
				pMF->Rollback();
				ShowMessageBox(_T("Can not update document information"), MB_OK);
				return -1;
			}
			szWhere.Format(_T(" WHERE so_sale_order_id = %ld"), m_nSaleOrderID);
			szSQL.Format(_T("%s %s"), m_sale_orderTbl.GetUpdateSQL(_T("so_sale_order_id, so_docno")), szWhere);
			res = pMF->ExecSQL(szSQL);
			if (res < 0)
			{
				pMF->Rollback();
				return -1;
			}
			pMF->Commit();
			GetDataToScreen();
			SetMode(VM_VIEW);

		}
		else
		{
			m_sale_orderlineTbl.SetValue(_T("SOL_SALE_ORDER_ID"), nOID);
			szSQL.Format(_T("SALE_ORDER_ADDLINE(%s) "), m_sale_orderlineTbl.FormatSQL());
	//Notice(szSQL);
			res = str2int(pMF->ExecDML(szSQL));
			if(res > 0){
				OnListLoadData();
				SetMode(VM_ADDCHILD);
			}
		}
		
 	}
 	else
 	{
 	}
 	return nOID;
}
int CGLSSaleOrderDialog::OnDiscardPMSSaleOrderDialog(){
 	if(GetMode() == VM_EDIT || GetMode() == VM_ADDCHILD)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
		if(GetMode() == VM_ADD)
 			SetMode(VM_NONE);
		//else
		//{
		//	EnableControls(FALSE);
 		//	EnableButtons(TRUE, 0, 5, 6, -1);
		//	UpdateData(false);
		//}
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CGLSSaleOrderDialog::OnPMSSaleOrderDialogListLoadData(){
	return 0;
}
void CGLSSaleOrderDialog::PrintDrugDelivery(long nOrderID, bool bPreview, bool bDirect)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;
	
	CString szSQL, szUsage, szDeptType;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	long nDocumentNo = 0;
	double dblTotalAmount=0;

	szSQL.Format(_T(" SELECT so_docno docno,") \
				_T("   so_orderno                                                AS orderno,") \
				_T("   Get_departmentname((SELECT") \
				_T("                         distinct msl_dept_id") \
				_T("                       FROM   m_storagelist") \
				_T("                       WHERE  msl_storage_id=so_storage_id)) AS dept,") \
				_T("   Get_storagename(so_storage_id)                            AS stockname,") \
				_T("   trunc_date(so_orderdate)                                           AS dte,") \
				_T("   so_partnername                                            AS patname,") \
				_T("   so_partneraddress                                         AS addr,") \
				_T("   so_partnerphone                                         AS telephone,") \
				_T("   so_partnercontact as doctor, so_reference as reference") \
				_T(" FROM   sale_order") \
				_T(" WHERE so_sale_order_id = %ld"), nOrderID);

	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF()){
		_fmsg(_T("%s"), szSQL);
		return;		
	}

	szSQL.Format(_T(" SELECT sol_sale_order_id,") \
	_T("   product_id,") \
	_T("   product_name, product_classname,") \
	_T("   product_uomname, ") \
	_T("   product_countryname,") \
	_T("   sol_unitprice as product_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   SUM(sol_qtydelivery)                AS product_qtydelivery,") \
	_T("   SUM(sol_qtyorder)                AS product_qtyorder,") \
	_T("   SUM(sol_qtydelivery*sol_unitprice) AS product_amount") \
	_T(" FROM sale_orderline ") \
	_T(" LEFT JOIN m_productitem_view ON(product_item_id=sol_product_item_id) ") \
	_T(" WHERE sol_sale_order_id=%ld") \
	_T(" GROUP BY sol_sale_order_id,") \
	_T("   sol_line,") \
	_T("   product_id,") \
	_T("   product_name, product_classname,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   sol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_line") \
	_T(" ORDER BY sol_line "), nOrderID);
	
	rsl.ExecSQL(szSQL);
	if (rsl.IsEOF())
	{
		return;
	}
	CString szReportName;
	if (rs.GetValue(_T("reference")) == _T("FF"))
	{
		szReportName.Format(_T("Reports/HMS/PMS_DRUGDELIVERYVOTE_TYC_FOOD.RPT"));
	}
	else
	{
		szReportName.Format(_T("Reports/HMS/PMS_RETAILSALEORDER.RPT"));
	}


	if(!rpt.Init(szReportName) )
	{
		_fmsg(_T("%s"), szReportName);
		return;
	}
	
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("Department"), rs.GetValue(_T("dept")));
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("OrderID"), rs.GetValue(_T("orderno")));
	rs.GetValue(_T("dte"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	CString szPatientName = rs.GetValue(_T("patname"));
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("Address"), rs.GetValue(_T("addr")));
	rpt.GetReportHeader()->SetValue(_T("telephone"), rs.GetValue(_T("telephone")));
	rpt.GetReportHeader()->SetValue(_T("Stock"), rs.GetValue(_T("stockname")));	
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), rs.GetValue(_T("docno")));
	
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	int nItem=1;

	CString szWhere, szGeneric, tmpStr2, szQty;

	nItem = 1;
	dblTotalAmount = 0;
	while(!rsl.IsEOF()){ 
		rptDetail = rpt.AddDetail();
		rsl.GetValue(_T("hpol_usage"), szUsage);
		double money;
		rsl.GetValue(_T("product_amount"), money);
		dblTotalAmount += money;

		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rsl.GetValue(_T("product_classname"), szGeneric);

		rsl.GetValue(_T("product_name"), tmpStr);
		if (!szGeneric.IsEmpty())
				{
					tmpStr.AppendFormat(_T(" [%s]"), szGeneric);
				}

		rptDetail->SetValue(_T("2"), tmpStr);

		rsl.GetValue(_T("product_uomname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rsl.GetValue(_T("product_qtydelivery"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rsl.GetValue(_T("product_unitprice"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rsl.GetValue(_T("product_amount"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rsl.MoveNext();
	}

	//Page Footer
	//Report Footer
	CString tmpVal;
	tmpStr.Format(_T("%d"), nItem-1);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	FormatCurrency(dblTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpVal.Format(_T("%2.f"), dblTotalAmount);
	MoneyToString(tmpVal, tmpStr);
#ifdef UNICODE
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr+ _T(" \x111\x1ED3ng."));
#endif
	CString szDate, szTime;
	szDate = pMF->GetSysDate();
	szTime = pMF->GetSysTime();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szTime.Left(5), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	
	
	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);

	rs.GetValue(_T("doctor"), tmpStr);

	rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetUserName(tmpStr));
	if(bPreview)
	{
		rpt.PrintPreview();
	}
	else
		rpt.Print(bDirect);
	
}

void CGLSSaleOrderDialog::OnAddFunctionalFood()
{
	UpdateData();
	CGLSSaleOrderDialog dlg(this, VM_ADD);
	dlg.m_bFunctionalFood = true;
	dlg.m_szStorageKey = m_szStorageKey;
	dlg.m_szTypeKey = m_szTypeKey;
	dlg.m_szCustomerName = m_szCustomerName;
	dlg.m_szDeptKey = m_szDeptKey;
	// Giu nguyen shs
	// Da co BN
	if (m_nDocNo > 0)
	{
		dlg.m_nDocNo = m_nDocNo;
		dlg.m_nPatientNo = m_nPatientNo;
	}
	dlg.DoModal();
	// Chua ke don chinh, ke don tpcn truoc
	if (m_nDocNo == 0 && dlg.m_nDocNo > 0)
	{
		m_nDocNo = dlg.m_nDocNo;
		m_nPatientNo = dlg.m_nPatientNo;
	}
}

void CGLSSaleOrderDialog::OnAddFunctionalFoodSelect()
{
	OnAddFunctionalFood();
}

int CGLSSaleOrderDialog::OnStorageCheckValue()
{
	UpdateData();
	return 0;
}
void CGLSSaleOrderDialog::PrintGLSDelivery(long nOrderID, bool bPreview, bool bDirect)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;
	
	CString szSQL, szUsage, szDeptType;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	long nDocumentNo = 0;
	double dblTotalAmount=0;

	szSQL.Format(_T(" SELECT so_docno docno,") \
				_T("   so_orderno                                                AS orderno,") \
				_T("   Get_departmentname((SELECT") \
				_T("                         distinct msl_dept_id") \
				_T("                       FROM   m_storagelist") \
				_T("                       WHERE  msl_storage_id=so_storage_id)) AS dept,") \
				_T("   Get_storagename(so_storage_id)                            AS stockname,") \
				_T("   trunc_date(so_orderdate)                                           AS dte,") \
				_T("   so_partnername                                            AS patname,") \
				_T("   so_partneraddress                                         AS addr,") \
				_T("   so_partnerphone                                         AS telephone,") \
				_T("   so_partnercontact as doctor, so_reference as reference") \
				_T(" FROM   sale_order") \
				_T(" WHERE so_sale_order_id = %ld"), nOrderID);

	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF()){
		_fmsg(_T("%s"), szSQL);
		return;		
	}

	szSQL.Format(_T(" SELECT sol_sale_order_id,") \
	_T("   product_id,") \
	_T("   product_name, product_classname,") \
	_T("   product_uomname, ") \
	_T("   product_countryname,") \
	_T("   sol_unitprice as product_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   SUM(sol_qtydelivery)                AS product_qtydelivery,") \
	_T("   SUM(sol_qtyorder)                AS product_qtyorder,") \
	_T("   SUM(sol_qtydelivery*sol_unitprice) AS product_amount") \
	_T(" FROM sale_orderline ") \
	_T(" LEFT JOIN m_productitem_view ON(product_item_id=sol_product_item_id) ") \
	_T(" WHERE sol_sale_order_id=%ld") \
	_T(" GROUP BY sol_sale_order_id,") \
	_T("   sol_line,") \
	_T("   product_id,") \
	_T("   product_name, product_classname,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   sol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_line") \
	_T(" ORDER BY sol_line "), nOrderID);
	
	rsl.ExecSQL(szSQL);
	if (rsl.IsEOF())
	{
		return;
	}
	CString szReportName;
	
	szReportName.Format(_T("Reports/HMS/GLS_RETAILSALEORDER.RPT"));
	

	if(!rpt.Init(szReportName) )
	{
		_fmsg(_T("%s"), szReportName);
		return;
	}
	
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("Department"), rs.GetValue(_T("dept")));
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("OrderID"), rs.GetValue(_T("orderno")));
	rs.GetValue(_T("dte"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	CString szPatientName = rs.GetValue(_T("patname"));
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("Address"), rs.GetValue(_T("addr")));
	rpt.GetReportHeader()->SetValue(_T("telephone"), rs.GetValue(_T("telephone")));
	rpt.GetReportHeader()->SetValue(_T("Stock"), rs.GetValue(_T("stockname")));	
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), rs.GetValue(_T("docno")));
	
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	int nItem=1;

	CString szWhere, szGeneric, tmpStr2, szQty;

	nItem = 1;
	dblTotalAmount = 0;
	while(!rsl.IsEOF()){ 
		rptDetail = rpt.AddDetail();
		rsl.GetValue(_T("hpol_usage"), szUsage);
		double money;
		rsl.GetValue(_T("product_amount"), money);
		dblTotalAmount += money;

		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rsl.GetValue(_T("product_classname"), szGeneric);

		rsl.GetValue(_T("product_name"), tmpStr);
		if (!szGeneric.IsEmpty())
				{
					tmpStr.AppendFormat(_T(" [%s]"), szGeneric);
				}

		rptDetail->SetValue(_T("2"), tmpStr);

		rsl.GetValue(_T("product_uomname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rsl.GetValue(_T("product_qtydelivery"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rsl.GetValue(_T("product_unitprice"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rsl.GetValue(_T("product_amount"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rsl.MoveNext();
	}

	//Page Footer
	//Report Footer
	CString tmpVal;
	tmpStr.Format(_T("%d"), nItem-1);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	FormatCurrency(dblTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpVal.Format(_T("%2.f"), dblTotalAmount);
	MoneyToString(tmpVal, tmpStr);
#ifdef UNICODE
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr+ _T(" \x111\x1ED3ng."));
#endif
	CString szDate, szTime;
	szDate = pMF->GetSysDate();
	szTime = pMF->GetSysTime();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szTime.Left(5), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	
	
	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);

	rs.GetValue(_T("doctor"), tmpStr);

	rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetUserName(tmpStr));
	if(bPreview)
	{
		rpt.PrintPreview();
	}
	else
		rpt.Print(bDirect);
	
}