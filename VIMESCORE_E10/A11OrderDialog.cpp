#include "A11OrderDialog.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "PMSSaleOrderList.h"
#include "HMSReportForms\PrintForms.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnStorageAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnTypeLoadData();
}
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog*)pWnd)->OnTypeCheckValue();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnTotalAmountCheckValue();
}
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CA11OrderDialog* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnSellingPriceChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnSellingPriceChange();
} */
/*static void _OnSellingPriceSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnSellingPriceSetfocus();} */ 
/*static void _OnSellingPriceKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnSellingPriceKillfocus();
} */
static int _OnSellingPriceCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnSellingPriceCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CA11OrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CA11OrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnDiscardSelect();
}
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnConfirmSelect();
} 

static void _OnApprovalSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CA11OrderDialog *pVw = (CA11OrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CA11OrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CA11OrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CA11OrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnListAddItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnListDeleteItem();
}
static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnListRefreshItem();
} 
static int _OnAddA11OrderDialogFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnAddA11OrderDialog();
} 
static int _OnEditA11OrderDialogFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnEditA11OrderDialog();
} 
static int _OnDeleteA11OrderDialogFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnDeleteA11OrderDialog();
} 
static int _OnSaveA11OrderDialogFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnSaveA11OrderDialog();
} 
static int _OnDiscardA11OrderDialogFnc(CWnd *pWnd){
	 return ((CA11OrderDialog*)pWnd)->OnDiscardA11OrderDialog();
} 
CA11OrderDialog::CA11OrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 885;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CA11OrderDialog::~CA11OrderDialog(){
}
void CA11OrderDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 620, 120);
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 625, 5, 880, 120);
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 250, 880, 570);
	m_wndLines.Create(this, _T(""), 5, 125, 880, 215);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 30, 110, 55);
	m_wndStorage.Create(this,115, 30, 365, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 370, 30, 470, 55);
	m_wndType.Create(this,475, 30, 615, 55); 
	m_wndObjectLabel.Create(this, _T("Object Name"), 10, 60, 110, 85);
	m_wndObject.Create(this,115, 60, 365, 85); 
	m_wndDeptLabel.Create(this, _T("Department"), 370, 60, 470, 85);
	m_wndDept.Create(this,475, 60, 615, 85); 	
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 110, 115);
	m_wndAddress.Create(this,115, 90, 365, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 370, 90, 470, 115);
	m_wndPhone.Create(this,475, 90, 615, 115);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 630, 30, 730, 55);
	m_wndOrderNo.Create(this,735, 30, 875, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 630, 60, 730, 85);
	m_wndOrderDate.Create(this,735, 60, 875, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 630, 90, 730, 115);
	m_wndApprovedDate.Create(this,735, 90, 875, 115); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 155, 110, 180);
	m_wndItemName.Create(this,115, 155, 365, 180); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 370, 155, 470, 180);
	m_wndQuantity.Create(this,475, 155, 540, 180); 	
	m_wndMaxQuantity.Create(this,545, 155, 615, 180);
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 630, 155, 730, 180);
	m_wndSellingPrice.Create(this,735, 155, 875, 180); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 185, 110, 210);
	m_wndNote.Create(this,115, 185, 615, 210); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 630, 185, 730, 210);
	m_wndTotalAmount.Create(this,735, 185, 875, 210); 
	m_wndStatusLable.Create(this, _T("Status"), 10, 220, 110, 245);
	m_wndStatus.Create(this,115, 220, 235, 245); 
	m_wndAdd.Create(this, _T("&Add"), 190, 575, 270, 600);
	m_wndEdit.Create(this, _T("&Edit"), 275, 575, 355, 600);
	m_wndDelete.Create(this, _T("&Delete"), 360, 575, 440, 600);
	m_wndSave.Create(this, _T("&Save"), 445, 575, 525, 600);
	m_wndDiscard.Create(this, _T("&Cancel"), 530, 575, 610, 600);
	m_wndConfirm.Create(this, _T("&Confirm"), 615, 575, 695, 600);
	m_wndApproval.Create(this, _T("&Approval"), 700, 575, 795, 600);
	m_wndPrint.Create(this, _T("&Print"), 800, 575, 880, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 85, 600);
	m_wndList.Create(this,10, 275, 875, 565); 

}
void CA11OrderDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndObject.SetLimitText(128);
	m_wndObject.SetCheckValue(true);
	m_wndObject.SetInitCap(true);
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
	

	m_sale_orderlineTbl.AddField(_T("SOL_SALE_ORDER_ID"), dfLong); 
	m_sale_orderlineTbl.AddField(_T("SOL_PRODUCT_ITEM_ID"), dfLong); 
	m_sale_orderlineTbl.AddField(_T("SOL_QTYORDER"), dfFloat); 
	m_sale_orderlineTbl.AddField(_T("SOL_DESCRIPTION"), dfText, 254);
	
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

}
void CA11OrderDialog::OnSetWindowEvents(){
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
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
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

}
void CA11OrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
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
}
void CA11OrderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPayment;
	szSQL.Format(_T("SELECT * FROM sale_order WHERE so_sale_order_id =%ld "), m_nSaleOrderID);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("SO_ORDERNO"), m_szOrderNo);
		rs.GetValue(_T("SO_ORDERDATE"), m_szOrderDate);
		rs.GetValue(_T("SO_PARTNERNAME"), m_szObject);
		rs.GetValue(_T("SO_STORAGE_ID"), m_szStorageKey);
		rs.GetValue(_T("SO_STATUS"), m_szStatus);		
		rs.GetValue(_T("SO_ORDERDATE"), m_szOrderDate);
		rs.GetValue(_T("SO_ApprovedDate"), m_szApprovedDate);
		rs.GetValue(_T("SO_PARTNER_TYPE_ID"), m_szTypeKey);		
		if (m_szTypeKey == _T("I"))
			rs.GetValue(_T("SO_PARTNERADDRESS"), m_szDeptKey);
		else if (m_szTypeKey == _T("W"))
			rs.GetValue(_T("SO_PARTNERADDRESS"), m_szAddress);
		rs.GetValue(_T("SO_PARTNERNAME"), m_szObject);
		
		rs.GetValue(_T("SO_PARTNERPHONE"), m_szPhone);
		
		rs.GetValue(_T("so_payment"), szPayment);
		rs.GetValue(_T("so_docno"), m_nDocNo);
		rs.GetValue(_T("so_patientno"), m_nPatientNo);
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
		UpdateData(false);
	}
	else
		SetMode(VM_NONE);

}
void CA11OrderDialog::GetScreenToData(){
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
	m_sale_orderTbl.SetValue(_T("SO_PARTNERNAME"), m_szObject);
	if (m_szTypeKey == _T("I"))
		m_sale_orderTbl.SetValue(_T("SO_PARTNERADDRESS"), m_szDeptKey);
	else if (m_szTypeKey == _T("W"))
		m_sale_orderTbl.SetValue(_T("SO_PARTNERADDRESS"), m_szAddress);
	
	m_sale_orderTbl.SetValue(_T("SO_PARTNERPHONE"), m_szPhone);
	
	m_sale_orderlineTbl.SetValue(_T("SOL_SALE_ORDER_ID"), m_nSaleOrderID);
	m_sale_orderlineTbl.SetValue(_T("SOL_PRODUCT_ITEM_ID"), m_szItemNameKey);
	m_sale_orderlineTbl.SetValue(_T("SOL_QTYORDER"), m_nQuantity);
	m_sale_orderlineTbl.SetValue(_T("SOL_DESCRIPTION"), m_szNote);
	
	SplitName(m_szObject, szSurName, szMidName, szFirstName);
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
void CA11OrderDialog::SetDefaultValues(){
	m_szStatus = _T("O");
	m_szStatusDesc.Empty();
	m_szStorageKey.Empty();
	m_szTypeKey.Empty();
	m_szObject.Empty();
	m_szPhone.Empty();
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
	m_szDeptKey.Empty();
	m_nTotalAmount=0;
	m_nDocNo = 0;
	m_nPatientNo = 0;
	m_wndList.DeleteAllItems();
}
int CA11OrderDialog::SetMode(int nMode){
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
				m_wndObject.SetFocus();

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
		
 		UpdateData(FALSE);
 		return nOldMode;
}
void CA11OrderDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderDialog::OnStorageSelendok(){
	 
}
/*void CA11OrderDialog::OnStorageSetfocus(){
	
}*/
/*void CA11OrderDialog::OnStorageKillfocus(){
	
}*/
long CA11OrderDialog::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString szWhere;
	szWhere.Format(_T(" and (msl_storage_id in(7, 8, 35)) and msl_type in('A','B','D') "));

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
/*void CA11OrderDialog::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CA11OrderDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderDialog::OnTypeSelendok(){
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
	 UpdateData(false);
}
/*void CA11OrderDialog::OnTypeSetfocus(){
	
}*/
/*void CA11OrderDialog::OnTypeKillfocus(){
	
}*/
long CA11OrderDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType, m_szTypeKey, _T("a11_order_type"));
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
/*void CA11OrderDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

int CA11OrderDialog::OnTypeCheckValue(){
	return 0;
}
void CA11OrderDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderDialog::OnDeptSelendok(){
	 
}
/*void CA11OrderDialog::OnDeptSetfocus(){
	
}*/
/*void CA11OrderDialog::OnDeptKillfocus(){
	
}*/
long CA11OrderDialog::OnDeptLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_id in('A11','C11','C12','C13') "));
	pMF->LoadDepartmentList(&m_wndDept, m_szDeptKey, szFilter);
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
/*void CA11OrderDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CA11OrderDialog::OnTotalAmountChange(){
	
} */
/*void CA11OrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CA11OrderDialog::OnTotalAmountKillfocus(){
	
} */
int CA11OrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 

/*void CA11OrderDialog::OnObjectChange(){
	
} */
/*void CA11OrderDialog::OnObjectSetfocus(){
	
} */
/*void CA11OrderDialog::OnObjectKillfocus(){
	
} */
int CA11OrderDialog::OnObjectCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnPhoneChange(){
	
} */
/*void CA11OrderDialog::OnPhoneSetfocus(){
	
} */
/*void CA11OrderDialog::OnPhoneKillfocus(){
	
} */
int CA11OrderDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnAddressChange(){
	
} */
/*void CA11OrderDialog::OnAddressSetfocus(){
	
} */
/*void CA11OrderDialog::OnAddressKillfocus(){
	
} */
int CA11OrderDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnOrderNoChange(){
	
} */
/*void CA11OrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CA11OrderDialog::OnOrderNoKillfocus(){
	
} */
int CA11OrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnOrderDateChange(){
	
} */
/*void CA11OrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CA11OrderDialog::OnOrderDateKillfocus(){
	
} */
int CA11OrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnApprovedDateChange(){
	
} */
/*void CA11OrderDialog::OnApprovedDateSetfocus(){
	
} */
/*void CA11OrderDialog::OnApprovedDateKillfocus(){
	
} */
int CA11OrderDialog::OnApprovedDateCheckValue(){
	return 0;
} 
void CA11OrderDialog::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CA11OrderDialog::OnItemNameSelendok(){
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
	UpdateData(false);
}
/*void CA11OrderDialog::OnItemNameSetfocus(){
	
}*/
/*void CA11OrderDialog::OnItemNameKillfocus(){
	
}*/
long CA11OrderDialog::OnItemNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and msl_storage_id=%d "), str2int(m_szStorageKey));

	return pMF->LoadProductItemList(&m_wndItemName, m_szItemNameKey, szWhere);

	return 0;
}
/*void CA11OrderDialog::OnItemNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CA11OrderDialog::OnQuantityChange(){
	
} */
/*void CA11OrderDialog::OnQuantitySetfocus(){
	
} */
/*void CA11OrderDialog::OnQuantityKillfocus(){
	
} */
int CA11OrderDialog::OnQuantityCheckValue(){
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
/*void CA11OrderDialog::OnSellingPriceChange(){
	
} */
/*void CA11OrderDialog::OnSellingPriceSetfocus(){
	
} */
/*void CA11OrderDialog::OnSellingPriceKillfocus(){
	
} */
int CA11OrderDialog::OnSellingPriceCheckValue(){
	return 0;
} 
/*void CA11OrderDialog::OnNoteChange(){
	
} */
/*void CA11OrderDialog::OnNoteSetfocus(){
	
} */
/*void CA11OrderDialog::OnNoteKillfocus(){
	
} */
int CA11OrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CA11OrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddA11OrderDialog();
} 
void CA11OrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditA11OrderDialog();
} 
void CA11OrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteA11OrderDialog();
} 
void CA11OrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveA11OrderDialog();
} 
void CA11OrderDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardA11OrderDialog();
}
void CA11OrderDialog::OnConfirmSelect(){
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
void CA11OrderDialog::OnApprovalSelect(){

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
void CA11OrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPrintForms printer;
	if (pMF->GetModuleID() == _T("MA"))
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
		PrintDrugDelivery(m_nSaleOrderID, true, true);

} 
void CA11OrderDialog::OnAddLineSelect(){
	OnListAddItem();
}
void CA11OrderDialog::OnListDblClick(){
	
} 
void CA11OrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardA11OrderDialog();
} 
int CA11OrderDialog::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return -1;

	SetMode(VM_ADDCHILD);
	return 0;
} 

int CA11OrderDialog::OnListRefreshItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	 return 0;
} 

int CA11OrderDialog::OnListDeleteItem(){
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

long CA11OrderDialog::OnListLoadData(){
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
int CA11OrderDialog::OnAddA11OrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CA11OrderDialog::OnEditA11OrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CA11OrderDialog::OnDeleteA11OrderDialog(){
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
int CA11OrderDialog::OnSaveA11OrderDialog(){
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
		m_hms_docTbl.SetValue(_T("hd_admitdept"), pMF->GetModuleID()==_T("PM")?_T("KD"):_T("C10"));
		szSQL = m_hms_docTbl.GetInsertSQL(szSQL);

		res = pMF->ExecSQL(szSQL);
		if (res <=0)
		{
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new document information"), MB_OK);
			return -1;
		}
		m_sale_orderTbl.SetValue(_T("so_docno"), m_nDocNo);
		m_sale_orderTbl.SetValue(_T("so_patientno"), m_nPatientNo);
		szSQL.Format(_T("SALE_ORDER_CREATE(%s) "), m_sale_orderTbl.FormatSQL(_T("SO_UPDATEDBY, SO_UPDATEDDATE")));
		//Notice(szSQL);
 		nOID = str2long(pMF->ExecDML(szSQL));
		m_nSaleOrderID = nOID;
		if (nOID <= 0)
		{
			pMF->Rollback();
			return -1;
		}
		szSQL.Format(_T("AD_GETNEXTVAL('SALE_ORDER_NO','Y') "));
		pMF->ExecDML(szSQL);
		pMF->Commit();
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
int CA11OrderDialog::OnDiscardA11OrderDialog(){
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
int CA11OrderDialog::OnA11OrderDialogListLoadData(){
	return 0;
}
void CA11OrderDialog::PrintDrugDelivery(long nOrderID, bool bPreview, bool bDirect){
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
				_T("   so_partnercontact as doctor") \
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
	_T("   product_id,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   sol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_line") \
	_T(" ORDER BY product_line "), nOrderID);
	
	rsl.ExecSQL(szSQL);
	if (rsl.IsEOF())
	{
		return;
	}
	CString szReportName;
	
	szReportName.Format(_T("Reports/HMS/PMS_RETAILSALEORDER.RPT"));


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
	
	
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	int nItem=1;

	CString szWhere, tmpStr2, szQty;

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
		rsl.GetValue(_T("product_name"), tmpStr);
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