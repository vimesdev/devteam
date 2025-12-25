#include "CabinetOrder.h"
#include "HMSMainFrame.h"
#include "HMSReportForms/PrintForms.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnToStorageAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransactionTypeKillfocus();
}*/
static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransactionTypeKillfocus();
}
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransactionTypeAddNew();
}*/

static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnStatusAddNew();
}*/

static void _OnTransportMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnTransportMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportMethodSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransportMethodSelendok();
}
/*static void _OnTransportMethodSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransportMethodKillfocus();
}*/
/*static void _OnTransportMethodKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransportMethodKillfocus();
}*/
static long _OnTransportMethodLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnTransportMethodLoadData();
}
/*static void _OnTransportMethodAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTransportMethodAddNew();
}*/
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrder* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnDeliveryAddressCheckValue();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCabinetOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCabinetOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnListDeleteItem();
} 

/*static void _OnTotalLineChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalLineChange();
} */
/*static void _OnTotalLineSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalLineSetfocus();} */ 
/*static void _OnTotalLineKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalLineKillfocus();
} */
static int _OnTotalLineCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnTotalLineCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CCabinetOrder *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrder *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CCabinetOrder *pVw = (CCabinetOrder *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCabinetOrder*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCabinetOrderFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnAddCabinetOrder();
} 
static int _OnEditCabinetOrderFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnEditCabinetOrder();
} 
static int _OnDeleteCabinetOrderFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnDeleteCabinetOrder();
} 
static int _OnSaveCabinetOrderFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnSaveCabinetOrder();
} 
static int _OnDiscardCabinetOrderFnc(CWnd *pWnd){
	 return ((CCabinetOrder*)pWnd)->OnDiscardCabinetOrder();
} 
CCabinetOrder::CCabinetOrder()
{
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szTransactionTypeKey = _T("CSO");
	SetWindowName(_T("Medical Cabinet Management"));
	m_bImport = false;
}
CCabinetOrder::~CCabinetOrder(){
	
}
void CCabinetOrder::OnCreateComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 10, 30, 160, 55);
	m_wndTransactionType.Create(this,165, 30, 480, 55);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 60, 160, 85);
	m_wndFromStorage.Create(this,165, 60, 355, 85);
	m_wndToStorageLabel.Create(this, _T("To Storage"), 360, 60, 480, 85);
	m_wndToStorage.Create(this,485, 60, 680, 85);
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 355, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 360, 90, 480, 115);
	m_wndReceiver.Create(this,485, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 

	m_wndAdd.Create(this, _T("&Add"), 285, 530, 365, 555);
	m_wndEdit.Create(this, _T("&Edit"), 370, 530, 450, 555);
	m_wndDelete.Create(this, _T("&Delete"), 455, 530, 535, 555);
	m_wndSave.Create(this, _T("&Save"), 540, 530, 620, 555);
	m_wndDiscard.Create(this, _T("&Discard"), 625, 530, 705, 555);
	m_wndPrint.Create(this, _T("&Print"), 710, 530, 790, 555);
	m_wndPost.Create(this, _T("&Send"), 795, 530, 875, 555);


	m_wndClose.Create(this, _T("&Close"), 880, 530, 960, 555);
	m_wndAddLine.Create(this, _T("Add Entry"), 5, 530, 135, 555);

	m_wndOrderNoLabel.Create(this, _T("ORDERNO"), 695, 30, 800, 55);
	m_wndOrderNo.Create(this,805, 30, 960, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 695, 60, 800, 85);
	m_wndOrderDate.Create(this,805, 60, 960, 85);
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 695, 90, 800, 115);
	m_wndApprovedDate.Create(this,805, 90, 960, 115); 		
	m_wndStatusLabel.Create(this, _T("Status"), 695, 120, 800, 145);
	m_wndStatus.Create(this,805, 120, 960, 145);

	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 10, 500, 125, 525);
	m_wndTotalLines.Create(this, 135, 500, 240, 525); 
	m_wndTotalAmountLabel.Create(this, _T("Amount"), 735, 500, 845, 525);
	m_wndTotalAmount.Create(this,850, 500, 960, 525);
	
	m_wndList.Create(this,5, 155, 960, 495); 
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 965, 150);
}
void CCabinetOrder::OnInitializeComponents(){
	SetWindowText(_T("Storage Movement"));
	//	m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(9);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndFromStorage.SetCheckValue(true);
	m_wndToStorage.SetCheckValue(true);
//	m_wndDeliverer.SetInitCap(true);
//	m_wndDeliverer.SetCheckValue(true);
//	m_wndReceiver.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
//	m_wndDescription.SetCheckValue(true);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.ModifyStyle(0, ES_RIGHT);


	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(TRUE);
//	m_wndTotalLine.SetCheckValue(true);
	m_wndTotalLines.SetCurrencyFormat(true);
	m_wndTotalLines.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);

	m_wndTransactionType.SetCheckValue(TRUE);
	

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndToStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	
	m_wndDeliverer.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndDeliverer.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);

	m_wndReceiver.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndReceiver.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 310);

	//m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 310);


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transactionline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 75);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
		m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 65);
		m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 80);
		m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 50);
		m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 70);
		m_wndList.InsertColumn(7, _T("Soldier"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(8, _T("POLICY_"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(9, _T("SoldierIns"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(10, _T("OtherIns"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(11, _T("Service"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(12, _T("Other"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(13, _T("Total"), CFMT_MONEY, 50);
		m_wndList.InsertColumn(14, _T("Amount"), CFMT_MONEY, 90);
		m_wndList.InsertColumn(15, _T("Manufacture"), CFMT_TEXT, 0);
		m_wndList.InsertColumn(16, _T("ProductID"), CFMT_TEXT, 0);
		m_wndList.InsertColumn(17, _T("Product_ITEM_ID"), CFMT_TEXT, 0);
		m_wndList.GetHeaderControl()->SetItemHeight(3);
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 7, 1, 13);


	m_transactionTbl.SetTableName(_T("m_transaction"));
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_createddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_storage_to_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_deliverydate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_department_to_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 2000); 
	m_transactionTbl.AddField(_T("mt_status"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);
	m_transactionTbl.AddField(_T("mt_orgtrx_id"), dfText, 3);
	m_transactionTbl.AddField(_T("mt_ordertype"), dfText, 1);

	m_wndOrderDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(true);
	m_wndOrderNo.SetReadOnly(true);
	m_wndStatus.SetReadOnly(true);
}

void CCabinetOrder::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToStorage.SetEvent(WE_SELENDOK, _OnToStorageSelendokFnc);
	//m_wndToStorage.SetEvent(WE_SETFOCUS, _OnToStorageSetfocusFnc);
	//m_wndToStorage.SetEvent(WE_KILLFOCUS, _OnToStorageKillfocusFnc);
	m_wndToStorage.SetEvent(WE_SELCHANGE, _OnToStorageSelectChangeFnc);
	m_wndToStorage.SetEvent(WE_LOADDATA, _OnToStorageLoadDataFnc);
	//m_wndToStorage.SetEvent(WE_ADDNEW, _OnToStorageAddNewFnc);
	m_wndDeliverer.SetEvent(WE_SELENDOK, _OnDelivererSelendokFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_SELCHANGE, _OnDelivererSelectChangeFnc);
	m_wndDeliverer.SetEvent(WE_LOADDATA, _OnDelivererLoadDataFnc);
	//m_wndDeliverer.SetEvent(WE_ADDNEW, _OnDelivererAddNewFnc);
	m_wndReceiver.SetEvent(WE_SELENDOK, _OnReceiverSelendokFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_SELCHANGE, _OnReceiverSelectChangeFnc);
	m_wndReceiver.SetEvent(WE_LOADDATA, _OnReceiverLoadDataFnc);
	//m_wndReceiver.SetEvent(WE_ADDNEW, _OnReceiverAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
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
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);

	//m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	////m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	////m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	//m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	//m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	////m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);


	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);


	m_wndList.AddEvent(1, _T("Add new drug"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	/*m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);*/
	m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);


	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLineChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLineSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLineKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLineCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
//	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CCabinetOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLine);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
}
void CCabinetOrder::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szDeptID;
	szDeptID = pMF->m_UserInfo.su_deptid;
	//szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	if(pMF->m_szStoragePerm.IsEmpty())
		pMF->m_szStoragePerm = _T("-1");
	
	//szWhere.AppendFormat(_T(" and mt_storage_id in(%s) "), pMF->m_szStoragePerm);

	szWhere.AppendFormat(_T(" and (mt_department_to_id='%s' or mt_department_id='%s')  "), szDeptID, szDeptID);

	szSQL.Format(_T("SELECT mt_org_id, mt_createdby, ") \
		_T("mt_doctype, ") \
		_T("mt_transaction_id, ") \
		_T("mt_storage_id, ") \
		_T("mt_orderno, ") \
		_T("mt_orderdate, ") \
		_T("mt_acctdate, ") \
		_T("mt_deliverydate, ") \
		_T("mt_deliveryby, ") \
		_T("mt_approveddate, ") \
		_T("mt_approvedby, ") \
		_T("mt_storage_to_id, ") \
		_T("mt_receiveby, ") \
		_T("mt_description, ") \
		_T("mt_status, ") \
		_T("mt_netamount, ") \
		_T("mt_taxamount, ") \
		_T("mt_totalamount ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld AND mt_doctype IN('CRO','CSO') %s "), m_nID, szWhere);
	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
//	Notice(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_org_id"), m_szOrgID);
		rs.GetValue(_T("mt_createdby"), m_szCreatedBy);
		rs.GetValue(_T("mt_transaction_id"), m_nID);
		rs.GetValue(_T("mt_storage_id"), m_szFromStorageKey);
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szApprovedDate);
		rs.GetValue(_T("mt_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);
		rs.GetValue(_T("mt_approvedby"), m_szApprovedBy);
		rs.GetValue(_T("mt_storage_to_id"), m_szToStorageKey);		
		rs.GetValue(_T("mt_receiveby"), m_szReceiverKey);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);

		if(m_szTransactionTypeKey == _T("CSO"))	
			m_bImport = true;	
		else
			m_bImport = false;

		if(m_szStatus != _T("A"))
		{
			m_szApprovedDate.Empty();
		}		
		
		if(m_szStatus == _T("A")){
			TranslateString(_T("Accepted"), m_szStatusKey);			
		}
		else if(m_szStatus == _T("S"))
		{
			TranslateString(_T("Sended"), m_szStatusKey);
		}
		else
		{
			TranslateString(_T("Opening"), m_szStatusKey);
		}		

		m_nStorageID = ToInt(m_szFromStorageKey);
		m_nStorageToID = ToInt(m_szToStorageKey);

		SetMode(VM_VIEW);		
		OnListLoadData();
	}
	else
		SetMode(VM_NONE);

}

void CCabinetOrder::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szDeptID;
	szDeptID = pMF->m_UserInfo.su_deptid;

	if(GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nID);
		m_transactionTbl.Open(&pMF->m_db, szWhere);
	}
	if(m_szTransactionTypeKey == _T("CRO"))
	{
		m_szOrderNo.Replace(_T("TT"), _T("TL"));
	}

	m_transactionTbl.SetValue(_T("mt_createdby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_createddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_updatedby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_updateddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_storage_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("mt_storage_to_id"), m_szToStorageKey);
	m_transactionTbl.SetValue(_T("mt_department_to_id"), szDeptID);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szApprovedDate);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDelivererKey);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiverKey);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), _T("GL"));
	m_transactionTbl.SetValue(_T("mt_orgtrx_id"), _T("MBS"));
	m_transactionTbl.SetValue(_T("mt_ordertype"), _T("C"));
}

void CCabinetOrder::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLine = 0;
	m_szTransactionTypeKey = _T("CSO");
	m_bImport = true;
}

int CCabinetOrder::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL, tmpStr; 
 		CRecord rs(&pMF->m_db); 

  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			m_wndOrderNo.EnableWindow(false);
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGE_Cabinet_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
			m_szApprovedDate.Empty();
			m_wndTransactionType.SetFocus();
			m_szStatus = _T("O");
			TranslateString(_T("Opening"), m_szStatusKey);
			m_wndList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDescription.EnableWindow(TRUE);
			m_wndDeliverer.EnableWindow(TRUE);
			m_wndReceiver.EnableWindow(TRUE);
			m_wndNote.EnableWindow(TRUE);
			//m_wndFromStorage.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(true);
			m_wndAddLine.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
			m_wndOrderNo.EnableWindow(TRUE);
 			break; 
 		};

		if(m_szStatus == _T("O")){
			m_wndAddLine.EnableWindow(TRUE);
			TranslateString(_T("Send"), tmpStr);
			m_wndPrint.EnableWindow(FALSE);
			
		}
		else 
		{	
			TranslateString(_T("Discard"), tmpStr);
			if(m_szStatus != _T("O"))
				m_wndPost.EnableWindow(FALSE);
			//m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		m_wndPost.SetWindowText(tmpStr);
		

		/*if(m_szOrgID != pMF->GetModuleID())
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}*/

		/*if(m_bImport){
			m_wndAdd.ShowWindow(SW_HIDE);
			m_wndDelete.ShowWindow(SW_HIDE);
			m_wndEdit.ShowWindow(SW_HIDE);
			m_wndSave.ShowWindow(SW_HIDE);
			m_wndAddLine.ShowWindow(SW_HIDE);
		}*/

		
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CCabinetOrder::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CCabinetOrder::OnFromStorageSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szCategory;
	CString szSQL;
	CString szOrgID;

	UpdateData(true);
	m_szToStorageKey.Empty();
	if(m_bImport)
	{
		szSQL.Format(_T("SELECT msl_category, msl_org_id FROM m_storagelist WHERE msl_storage_id = %ld "), str2int(m_szFromStorageKey));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("msl_category"), szCategory);
		rs.GetValue(_T("msl_org_id"), szOrgID);
		if (szOrgID == _T("MA"))
			szCategory = _T("A");

		m_szCategory = szCategory;

		szSQL.Format(_T("select msl_storage_id from m_storagelist where msl_dept_id='%s' and msl_type='C' and msl_category='%s' "), 
			pMF->m_szDept, szCategory);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("msl_storage_id"), m_szToStorageKey);
	}

	UpdateData(FALSE);
	
}

/*void CCabinetOrder::OnFromStorageSetfocus(){
	
}*/
/*void CCabinetOrder::OnFromStorageKillfocus(){
	
}*/
long CCabinetOrder::OnFromStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	if(!m_bImport)
	{
		szFilter.Format(_T(" AND msl_type IN('C')  "));
		
	}
	else
	{
		szFilter.Format(_T(" AND msl_type NOT IN('C') and msl_storage_id not in(4, 12, 13) "));

		if(pMF->GetModuleID() == _T("EM"))
		{
			szFilter.AppendFormat(_T(" and msl_zone IN('A','E','I') "));
		}
		else
		{
			szFilter.AppendFormat(_T(" and msl_zone IN('A','I') "));
		}


	}

	szFilter.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStorages);


	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szFilter);
}

/*void CCabinetOrder::OnFromStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CCabinetOrder::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CCabinetOrder::OnToStorageSelendok(){
	 
}

/*void CCabinetOrder::OnToStorageSetfocus(){
	
}*/
/*void CCabinetOrder::OnToStorageKillfocus(){
	
}*/
long CCabinetOrder::OnToStorageLoadData(){	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szCategory, szOrgID;
	CString szFilter;
	if(m_bImport)
	{
		szFilter.Format(_T(" AND msl_type IN('C')  and msl_category IN('A','%s') "), m_szCategory);
	}
	else
	{
		szFilter.Format(_T(" AND msl_type NOT IN('C') and msl_storage_id not in(12,13, 4) "));

		if(pMF->GetModuleID() == _T("EM"))
		{
			szFilter.AppendFormat(_T(" and msl_zone IN('A','E','I') "));
		}
		else
		{
			szFilter.AppendFormat(_T(" and msl_zone in('A','I') "));
		}

	}

	szFilter.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStoragePerm);

	

	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szFilter);


}

/*void CCabinetOrder::OnToStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CCabinetOrder::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CCabinetOrder::OnDelivererSelendok(){
	 
}

/*void CCabinetOrder::OnDelivererSetfocus(){
	
}*/
/*void CCabinetOrder::OnDelivererKillfocus(){
	
}*/
long CCabinetOrder::OnDelivererLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDept);
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey, szFilter);
}

/*void CCabinetOrder::OnDelivererAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CCabinetOrder::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CCabinetOrder::OnReceiverSelendok(){
	 
}

/*void CCabinetOrder::OnReceiverSetfocus(){
	
}*/
/*void CCabinetOrder::OnReceiverKillfocus(){
	
}*/
long CCabinetOrder::OnReceiverLoadData(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDept);

	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey, szFilter);
}

/*void CCabinetOrder::OnReceiverAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CCabinetOrder::OnDescriptionChange(){
	
} */
/*void CCabinetOrder::OnDescriptionSetfocus(){
	
} */
/*void CCabinetOrder::OnDescriptionKillfocus(){
	
} */
int CCabinetOrder::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CCabinetOrder::OnOrderNoChange(){
	
} */
/*void CCabinetOrder::OnOrderNoSetfocus(){
	
} */
/*void CCabinetOrder::OnOrderNoKillfocus(){
	
} */
int CCabinetOrder::OnOrderNoCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	
	szSQL.Format(_T("SELECT mt_transaction_id FROM m_transaction WHERE mt_orderno ='%s' "), m_szOrderNo);
	rs.ExecSQL(szSQL);
	
	m_nID = rs.GetIntValue();
	GetDataToScreen();	
	return 0;
} 
/*void CCabinetOrder::OnOrderDateChange(){
	
} */
/*void CCabinetOrder::OnOrderDateSetfocus(){
	
} */
/*void CCabinetOrder::OnOrderDateKillfocus(){
	
} */
int CCabinetOrder::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CCabinetOrder::OnApprovedDateChange(){
	
} */
/*void CCabinetOrder::OnApprovedDateSetfocus(){
	
} */
/*void CCabinetOrder::OnApprovedDateKillfocus(){
	
} */
int CCabinetOrder::OnApprovedDateCheckValue(){
	return 0;
} 
void CCabinetOrder::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrder::OnTransactionTypeSelendok(){
	CString tmpStr;
	UpdateData(true);
	
	if(m_szTransactionTypeKey == _T("CSO"))
	{
		m_bImport = true;
	}
	else
	{
		m_bImport = false;
		m_szOrderNo.Replace(_T("TT"), _T("TL"));
	}

	m_szToStorageKey.Empty();
	m_szFromStorageKey.Empty();

	UpdateData(false);
}
/*void CCabinetOrder::OnTransactionTypeSetfocus(){
	
}*/
void CCabinetOrder::OnTransactionTypeKillfocus(){
	OnTransactionTypeSelendok();	
}
long CCabinetOrder::OnTransactionTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('CRO','CSO') "));

	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szFilter);
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransactionType.IsSearchKey() && !m_szTransactionTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransactionTypeKey
};
	m_wndTransactionType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransactionType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCabinetOrder::OnTransactionTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
 

void CCabinetOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrder::OnStatusSelendok(){
	 
}
/*void CCabinetOrder::OnStatusSetfocus(){
	
}*/
/*void CCabinetOrder::OnStatusKillfocus(){
	
}*/
long CCabinetOrder::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	
	/*m_wndStatus.DeleteAllItems(); 

	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("A")){
			TranslateString(_T("Accepted"), tmpStr);			
		}
		else if(m_szStatusKey == _T("S"))
		{
			TranslateString(_T("Sended"), tmpStr);			
		}
		else
		{
			TranslateString(_T("Opening"), tmpStr);			
		}
		m_wndStatus.AddItems(m_szStatusKey, tmpStr, NULL);
		return 1;
	};
	TranslateString(_T("Opening"), tmpStr);		
	m_wndStatus.AddItems(_T("O"), tmpStr, NULL);	
	TranslateString(_T("Sended"), tmpStr);		
	m_wndStatus.AddItems(_T("S"), tmpStr, NULL);	
	TranslateString(_T("Approval"), tmpStr);		
	m_wndStatus.AddItems(_T("A"), tmpStr, NULL);	*/
	
	return 2;
}
/*void CCabinetOrder::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */


void CCabinetOrder::OnListDblClick(){
	OnPreviewDeliveryDetail();
} 
void CCabinetOrder::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
#include "CabinetOrderLineInput.h"
int CCabinetOrder::OnListAddItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	if(!IsAllowEdit())
		return 0;

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
	CRect rect;
	GetWindowRect(&rect);
	CCabinetOrderLineInput* newPopup = new CCabinetOrderLineInput(this, VM_ADD);
	newPopup->m_nOrderID = m_nID;
	
	newPopup->m_nOrderLine = m_nOrderLine;
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->m_nStorageToID = m_nStorageToID;
	newPopup->m_pWndOrder = this;
	newPopup->m_szType = m_szTransactionTypeKey;
	newPopup->ShowPopup(&m_wndList);
	return 0;
}
int CCabinetOrder::OnListEditItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRect rect;
/*
	GetWindowRect(&rect);
	CStorageMovementLineInput* newPopup = new CStorageMovementLineInput(m_pWndOrder, VM_EDIT, rect.left, rect.bottom+10);
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->m_nStorageToID = m_nStorageToID;
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->m_nOrderLine = m_nOrderLine;
	newPopup->ShowPopup(&m_wndList);
*/
	return 0;
}


int CCabinetOrder::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}
	m_szStatus = GetOrderStatus();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("M_TRANSACTION_DELLINE(%ld, %ld, '%s','%s') "), m_nID, m_nOrderLine, m_szOrgID, pMF->GetCurrentUser());

 	int ret = str2int(pMF->ExecDML(szSQL)); 

 	if(ret >= 0){  		
 		OnListLoadData(); 
 	}

	 return 0;
} 
long CCabinetOrder::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mtl_transactionline_id,") \
	_T("   product_id,") \
	_T("   product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   mtl_saleprice,") \
	_T("   product_manufacturename,") \
	_T("   SUM(mtl_qtysold)     AS qtysold,") \
	_T("   SUM(mtl_qtypolicy)   AS qtypolicy,") \
	_T("   SUM(mtl_qtysoldins)  AS qtysoldins,") \
	_T("   SUM(mtl_qtyotherins) AS qtyotherins,") \
	_T("   SUM(mtl_qtyservice)  AS qtyservice,") \
	_T("   SUM(mtl_qtyother)    AS qtyother,") \
	_T("   SUM(mtl_qtyorder)    AS qtyorder, ") \
	_T("   SUM(mtl_qtyorder*mtl_saleprice)    AS amount ") \
	_T(" FROM m_transactionline") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON(mtl_product_item_id   =product_item_id)") \
	_T(" WHERE mtl_transaction_id=%ld ") \
	_T(" AND mtl_transactionline_id      > 0 and NVL(mtl_client_id,'XXX') <> 'REP'") \
	_T(" GROUP BY mtl_transactionline_id, product_uomindex,") \
	_T("   product_id,") \
	_T("   product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   mtl_saleprice,") \
	_T("   product_manufacturename ") \
	_T(" ORDER BY product_uomindex, product_name, product_uomname "), m_nID);
	
	//Notice(szSQL);

	
	nCount = rs.ExecSQL(szSQL);
	double nAmount=0;
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("mtl_transactionline_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mtl_saleprice")), 
			rs.GetValue(_T("qtysold")), 
			rs.GetValue(_T("qtypolicy")), 
			rs.GetValue(_T("qtysoldins")), 
			rs.GetValue(_T("qtyotherins")), 
			rs.GetValue(_T("qtyservice")), 
			rs.GetValue(_T("qtyother")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("product_manufacturename")), 
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_item_id")), 
			NULL);

		nAmount += str2double(rs.GetValue(_T("amount")));
		
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 

//	m_nTotalLines = nCount;
	m_nTotalAmount = nAmount;
	UpdateData(FALSE);
	return nCount;	
}

/*void CCabinetOrder::OnTotalLineChange(){
	
} */
/*void CCabinetOrder::OnTotalLineSetfocus(){
	
} */
/*void CCabinetOrder::OnTotalLineKillfocus(){
	
} */
int CCabinetOrder::OnTotalLineCheckValue(){
	return 0;
} 
/*void CCabinetOrder::OnTotalAmountChange(){
	
} */
/*void CCabinetOrder::OnTotalAmountSetfocus(){
	
} */
/*void CCabinetOrder::OnTotalAmountKillfocus(){
	
} */
int CCabinetOrder::OnTotalAmountCheckValue(){
	return 0;
}
 
void CCabinetOrder::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddCabinetOrder();
}
 
void CCabinetOrder::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditCabinetOrder();

}
 
void CCabinetOrder::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteCabinetOrder();
}
 
void CCabinetOrder::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveCabinetOrder();
}
 
void CCabinetOrder::OnDiscardSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDiscardCabinetOrder();
}
 
void CCabinetOrder::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//if(!pMF->CheckPermission(_T("02.05")))
	//{
	//	ShowMessageBox(_T("Permission denined"), MB_OK);
	//	return;
	//}
	
	CPrintForms printer;
	printer.PM_PrintCabinetSheet(m_nID);

}
 
void CCabinetOrder::OnPostSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	m_szStatus = GetOrderStatus();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}
	int retMsg;
	if(m_szStatus == _T("O"))
		retMsg = ShowMessageBox(_T("Do you want to send order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	else
	{
		retMsg = ShowMessageBox(_T("Do you want to discard order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
		return;
	}

	if(retMsg == IDNO)
			return;
	szSQL.Format(_T("M_TRANSACTION_SEND(%ld, '%s') "), m_nID, pMF->GetCurrentUser());

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		m_szStatus = GetOrderStatus();
		SetMode(VM_VIEW);

	}
	else
	{
		ShowMessageBox(_T("Cannot send order"));
	}

} 
#include "CabinetDialog.h"
void CCabinetOrder::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	((CCabinetDialog*)GetParent()->GetParent())->OnCancel();
} 
void CCabinetOrder::OnAddLineSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!IsAllowEdit())
		return;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}

	OnListAddItem();
} 
void CCabinetOrder::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CCabinetOrder::OnAddCabinetOrder(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

	if(!pMF->CheckPermission(_T("02.01")))
	{
		//ShowMessageBox(_T("Permission denined"), MB_OK);
		//return 0;
	}
 	SetMode(VM_ADD);
	m_szOrderDate = pMF->GetSysDateTime();
	m_wndTransactionType.SetFocus();
	m_szStatus = _T("O");
	UpdateData(false);
	return 0;
}

int CCabinetOrder::OnEditCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.02")))
	{/*
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;*/
	}
		if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not edit it"), 0);
		return 0;
	}
 	
 	SetMode(VM_EDIT);
	return 0;  

}

int CCabinetOrder::OnDeleteCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status"));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.03")) && pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 

 	int ret = str2int(pMF->ExecDML(szSQL)); 

	if(ret == -10){
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 \x78\xF3\x61 phi\x1EBFu. \x42\x1EA1n ph\x1EA3i \x78\xF3\x61 \x63\xE1\x63 m\x1EE5\x63 thu\x1ED1\x63 trong phi\x1EBFu tr\x1B0\x1EDB\x63!"), 0);
	}

	if(ret == -12){
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 \x78\xF3\x61 phi\x1EBFu tr\x1EA1ng th\xE1i phi\x1EBFu ph\x1EA3i \x111\x61ng m\x1EDF."), 0);
	}	

 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnDiscardCabinetOrder(); 
 	}
	return 0;

}

int CCabinetOrder::OnSaveCabinetOrder(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
	CString szSQL;
	

	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
 	if(!IsValidateData()) 
 		return -1; 
	if(m_szFromStorageKey == m_szToStorageKey || str2int(m_szFromStorageKey) <= 0 || str2int(m_szToStorageKey) <= 0)
	{
		ShowMessageBox(_T("Invalid storage identify movement"), 0);
		m_wndToStorage.SetFocus();
		return -1;
	}

 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nID = str2long(pMF->ExecDML(szSQL));	
		if(m_nID <=0) return -1;		
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID); 		
 		szSQL = m_transactionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mt_transaction_id=%ld and mt_status in('O','S', 'A','I') "), m_nID); 
 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT){
		}
		else
		{
			GetDataToScreen();

		}
 		SetMode(VM_VIEW); 
		
 	} 
 	return ret; 

}

int CCabinetOrder::OnDiscardCabinetOrder(){
	
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW);

 	return 0;

}
 
int CCabinetOrder::OnCabinetOrderListLoadData(){
	return 0;
}


CString CCabinetOrder::GetOrderStatus(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus = _T("X");
	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}

bool CCabinetOrder::IsAllowEdit(){
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	return true;
}
#include "HMSReportForms/PrintForms.h"
int CCabinetOrder::OnPreviewDeliveryDetail(){
	int nSel = m_wndList.GetCurSel();
	if( nSel < 0 )
		return -1;

	CPrintForms printer;
	long  nProduct_id;
	CString szOrderNo ;
	szOrderNo.Format(_T("%ld"), m_nID);
	nProduct_id = str2long(m_wndList.GetItemText(nSel, 10));
//_msg(_T("%ld"), nProduct_id);
	printer.PM_PrintCabinetUsageDetail(_T(""), _T(""), szOrderNo, nProduct_id, _T("'B','C','M'"), m_nStorageID);
	return 0;
}
