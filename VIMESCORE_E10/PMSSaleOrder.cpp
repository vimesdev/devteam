#include "PMSSaleOrder.h"
//#include "stdafx.h"
#include "Reportdocument.h"
//#include "PMSSaleOrderListDlg.h"
#include "MainFrm.h"
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CPMSSaleOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnListDeleteItem();
} 
/*static int _OnTotalAmountChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnSaleDateSetfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnSaleDateSetfocus();} */ 
/*static void _OnSaleDateKillfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnSaleDateKillfocus();
} */
//static int _OnSaleDateCheckValueFnc(CWnd *pWnd){
//	return ((CPMSSaleOrder *)pWnd)->OnSaleDateCheckValue();
//} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnTotalAmountCheckValue();
} 
/*static int _OnPayableAmountChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPayableAmountChange();
} */
/*static int _OnPayableAmountSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPayableAmountKillfocus();} */ 
/*static int _OnPayableAmountKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPayableAmountKillfocus();
} */
static int _OnPayableAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPayableAmountCheckValue();
} 
/*static int _OnRemainAmountChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnRemainAmountChange();
} */
/*static int _OnRemainAmountSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnRemainAmountKillfocus();} */ 
/*static int _OnRemainAmountKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnRemainAmountKillfocus();
} */
static int _OnRemainAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnRemainAmountCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSaleOrder* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStockAddNew();
}*/

static int _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CPMSSaleOrder* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDoctorSelendokFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnDoctorSelendok();
}
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnDoctorKillfocus();
}*/
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnDoctorKillfocus();
}*/
static int _OnDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnDoctorLoadData();
}
/*static int _OnDoctorAddNewFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnDoctorAddNew();
}*/

static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSaleOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnStatusAddNew();
}*/


static int _OnName2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CPMSSaleOrder* )pWnd)->OnName2SelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnName2SelendokFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnName2Selendok();
}
/*static int _OnName2SetfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnName2Killfocus();
}*/
/*static int _OnName2KillfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnName2Killfocus();
}*/
static int _OnName2LoadDataFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnName2LoadData();
}
/*static int _OnName2AddNewFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnName2AddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnNameChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNameCheckValue();
} 
/*static int _OnPhoneChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPhoneChange();
} */
/*static int _OnPhoneSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPhoneKillfocus();} */ 
/*static int _OnPhoneKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnPhoneCheckValue();
} 
/*static int _OnBarcodeChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnBarcodeChange();
} */
/*static int _OnBarcodeSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnBarcodeKillfocus();} */ 
/*static int _OnBarcodeKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnBarcodeCheckValue();
} 
static int _OnItemIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CPMSSaleOrder* )pWnd)->OnItemIDSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnItemIDSelendokFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnItemIDSelendok();
}
/*static int _OnItemIDSetfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnItemIDKillfocus();
}*/
/*static int _OnItemIDKillfocusFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnItemIDKillfocus();
}*/
static int _OnItemIDLoadDataFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnItemIDLoadData();
}
/*static int _OnItemIDAddNewFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder *)pWnd)->OnItemIDAddNew();
}*/
/*static int _OnQuantityChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnQuantityChange();
} */
/*static int _OnQuantitySetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnQuantityKillfocus();} */ 
/*static int _OnQuantityKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnQuantityCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPaymentSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnPaymentSelect();
} 
static int _OnFindSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnFindSelect();
} 

/*static void _OnSellingPriceChangeFnc(CWnd *pWnd){
	((CPMSSaleOrder *)pWnd)->OnSellingPriceChange();
} */
/*static int _OnSellingPriceSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnSellingPriceKillfocus();} */ 
/*static int _OnSellingPriceKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnSellingPriceKillfocus();
} */
static int _OnSellingPriceCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnSellingPriceCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CPMSSaleOrder *)pWnd)->OnNoteCheckValue();
} 

static int _OnAddPMSSaleOrderFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnAddPMSSaleOrder();
} 

static int _OnAddItemFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnAddItem();
} 
static int _OnEditPMSSaleOrderFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnEditPMSSaleOrder();
} 
static int _OnDeletePMSSaleOrderFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnDeletePMSSaleOrder();
} 
static int _OnSavePMSSaleOrderFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnSavePMSSaleOrder();
} 
static int _OnCancelPMSSaleOrderFnc(CWnd *pWnd){
	 return ((CPMSSaleOrder*)pWnd)->OnCancelPMSSaleOrder();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CPMSSaleOrder *pVw = (CPMSSaleOrder *)pWnd;
	return pVw->OnPrintSelect();
} 


CPMSSaleOrder::CPMSSaleOrder(){

	m_nDlgWidth = 770;
	m_nDlgHeight = 650;
	SetDefaultValues();
}
CPMSSaleOrder::~CPMSSaleOrder(){
}
void CPMSSaleOrder::OnCreateComponents()
{	
	m_wndSalesInformation.Create(this, _T("Sales Information"), 5, 5, 765, 180);
	m_wndPaymentInvoiceInformation.Create(this, _T("Payment Invoice Information"), 5, 221, 765, 636);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 100, 55);
	m_wndStock.Create(this,105, 30, 405, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 410, 30, 500, 55);
	m_wndStatus.Create(this,505, 30, 760, 55); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 10, 60, 100, 85);
	m_wndID.Create(this,105, 60, 205, 85); 
	m_wndSaleDate.Create(this,305, 60, 405, 85); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 410, 60, 500, 85);
	m_wndDoctor.Create(this,505, 60, 760, 85); 
	m_wndSaleDateLabel.Create(this, _T("Date"), 210, 60, 300, 85);
	m_wndClientNameLabel.Create(this, _T("Client Name"), 10, 90, 100, 115);
	m_wndName.Create(this,105, 90, 405, 115); 
	m_wndAgeLabel.Create(this, _T("Age"), 410, 90, 500, 115);
	m_wndAge.Create(this,505, 90, 565, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 570, 90, 650, 115);
	m_wndPhone.Create(this,655, 90, 760, 115); 
	m_wndItemIDLabel.Create(this, _T("Drug Name"), 10, 120, 100, 145);
	m_wndItemID.Create(this,105, 120, 405, 145); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 410, 120, 500, 145);
	m_wndQuantity.Create(this,505, 120, 565, 145); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 150, 100, 175);
	m_wndNote.Create(this,105, 150, 760, 175); 
	m_wndList.Create(this,10, 245, 760, 600); 
	m_wndAdd.Create(this, _T("&Add"), 285, 185, 360, 210);
	m_wndEdit.Create(this, _T("&Edit"), 365, 185, 440, 210);
	m_wndDelete.Create(this, _T("&Delete"), 445, 185, 520, 210);
	m_wndSave.Create(this, _T("&Save"), 525, 185, 600, 210);
	m_wndCancel.Create(this, _T("&Cancel"), 605, 185, 680, 210);
	m_wndPrint.Create(this, _T("&Print"), 685, 185, 760, 210);
	m_wndPayment.Create(this, _T("&Payment"), 105, 185, 195, 210);
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 570, 120, 650, 145);
	m_wndPayableAmountLabel.Create(this, _T("Payable Amt"), 305, 605, 405, 630);
	m_wndPayableAmount.Create(this,410, 605, 530, 630); 
	m_wndRemainAmountLabel.Create(this, _T("Remain Amt"), 535, 605, 635, 630);
	m_wndSellingPrice.Create(this,655, 120, 760, 145); 
	m_wndRemainAmount.Create(this,640, 605, 760, 630); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amt"), 75, 605, 175, 630);
	m_wndTotalAmount.Create(this,180, 605, 300, 630); 
	
	m_wndName2.Create(this, 0, 0, 0, 0);
	m_wndName2.ShowWindow(SW_HIDE);
	m_wndName2.EnableWindow(FALSE);
	m_wndBarcode.Create(this, 0, 0, 0, 0);
	m_wndBarcode.ShowWindow(SW_HIDE);
	m_wndBarcode.EnableWindow(FALSE);

}
void CPMSSaleOrder::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndPrint.EnableWindow(true);
	m_wndSaleDate.SetCheckValue(true);
	
	m_wndTotalAmount.SetCurrencyFormat(TRUE);
	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));
	m_wndTotalAmount.SetReadOnly(true);
	m_wndPayableAmount.SetCurrencyFormat(TRUE);
	m_wndPayableAmount.SetTextColor(RGB(255, 0, 0));
	m_wndPayableAmount.SetReadOnly(true);
	m_wndRemainAmount.SetCurrencyFormat(TRUE);
	m_wndRemainAmount.SetTextColor(RGB(255, 0, 0));
	m_wndRemainAmount.SetReadOnly(true);
	m_wndStock.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(false);
	m_wndDoctor.LimitText(7);
	m_wndID.SetLimitText(8);
	m_wndID.ModifyStyle(WS_TABSTOP, ES_UPPERCASE);	
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(true);
	m_wndPhone.SetLimitText(15);
	
	m_wndBarcode.SetLimitText(35);
	m_wndItemID.SetCheckValue(true);
	m_wndItemID.LimitText(15);
//	m_wndItemID.SetRequirementLength(1);
	m_wndQuantity.SetCheckValue(true);
	m_wndName2.ShowWindow(SW_HIDE);
	m_wndSellingPrice.SetLimitText(12);
	m_wndSellingPrice.SetCheckValue(true);
	m_wndSellingPrice.SetCurrencyFormat(TRUE);
	m_wndSellingPrice.SetTextColor(RGB(255, 0 , 0));

	m_wndNote.SetLimitText(245);
//	m_wndNote.SetReadOnly(true);


	m_wndList.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Selling Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Made In"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("Idx"), CFMT_NUMBER, 0);
	

	SetWindowFont(&m_wndList, _T("Tahoma"), 12);
	SetWindowFont(&m_wndTotalAmount, _T("Arial"), 14,true);
	SetWindowFont(&m_wndPayableAmount, _T("Arial"), 14,true);
	SetWindowFont(&m_wndRemainAmount, _T("Arial"), 14,true);

	
	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndName2.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItemID.InsertColumn(0, _T("refidx"), CFMT_TEXT, 0);
	m_wndItemID.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndItemID.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndItemID.InsertColumn(3, _T("Price"), CFMT_MONEY, 70);
	m_wndItemID.InsertColumn(4, _T("Generic"), CFMT_TEXT, 170);
	m_wndItemID.InsertColumn(5, _T("Instock"), CFMT_MONEY, 70);
	m_wndItemID.InsertColumn(6, _T("Product Country"), CFMT_TEXT|CFMT_CENTER, 90);
	m_wndItemID.InsertColumn(7, _T("Original"), CFMT_TEXT, 0);
	m_wndItemID.InsertColumn(8, _T("itemid"), CFMT_TEXT, 0);

	m_pms_saleorderTbl.SetTableName(_T("pms_saleorder"));
	m_pms_saleorderTbl.AddField(_T("pso_createdby"),dfText,15);	
	m_pms_saleorderTbl.AddField(_T("pso_createddate"), dfDateTime);
	m_pms_saleorderTbl.AddField(_T("pso_updatedby"), dfText,15);
	m_pms_saleorderTbl.AddField(_T("pso_updateddate"), dfDateTime);	
	m_pms_saleorderTbl.AddField(_T("pso_orderdate"), dfDateTime); 
	m_pms_saleorderTbl.AddField(_T("pso_clientid"), dfText, 15); 
	m_pms_saleorderTbl.AddField(_T("pso_docno"), dfInteger); 
	m_pms_saleorderTbl.AddField(_T("pso_name"), dfText, 65); 
	m_pms_saleorderTbl.AddField(_T("pso_age"), dfText, 6); 
	m_pms_saleorderTbl.AddField(_T("pso_stockid"), dfInteger);	
	m_pms_saleorderTbl.AddField(_T("pso_Doctor"), dfText, 1); 
	m_pms_saleorderTbl.AddField(_T("pso_status"), dfText, 1); 
	m_pms_saleorderTbl.AddField(_T("pso_phone"), dfText, 15); 
	m_pms_saleorderTbl.AddField(_T("pso_totalamt"), dfFloat); 
	m_pms_saleorderTbl.AddField(_T("pso_payamt"), dfFloat); 
	m_pms_saleorderTbl.AddField(_T("pso_remainamt"), dfFloat);

	
	m_pms_saleorder_lineTbl.SetTableName(_T("pms_saleorder_line"));
	m_pms_saleorder_lineTbl.AddField(_T("psol_orderid"), dfLong); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_stockid"), dfInteger); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_itemid"), dfText, 15); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_idx"), dfInteger); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_orderqty"), dfFloat); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_usage"), dfText, 128); 
	m_pms_saleorder_lineTbl.AddField(_T("psol_objectid"), dfText, 1); 
	//m_szSaleDate = pMF->GetSysDateTime();
	
}
void CPMSSaleOrder::OnSetWindowEvents()
{
	SetWindowText(_T("Sale Order"));
	m_wndList.SetWindowText(_T("Item List"));
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add Entry\tInsert"), _OnAddItemFnc, 0, VK_INSERT);
	m_wndList.AddEvent(2, _T("Delete Entry\tDelete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndPayableAmount.SetEvent(WE_CHANGE, _OnPayableAmountChangeFnc);
	//m_wndPayableAmount.SetEvent(WE_SETFOCUS, _OnPayableAmountSetfocusFnc);
	//m_wndPayableAmount.SetEvent(WE_KILLFOCUS, _OnPayableAmountKillfocusFnc);
	m_wndPayableAmount.SetEvent(WE_CHECKVALUE, _OnPayableAmountCheckValueFnc);
	//m_wndRemainAmount.SetEvent(WE_CHANGE, _OnRemainAmountChangeFnc);
	//m_wndRemainAmount.SetEvent(WE_SETFOCUS, _OnRemainAmountSetfocusFnc);
	//m_wndRemainAmount.SetEvent(WE_KILLFOCUS, _OnRemainAmountKillfocusFnc);
	m_wndRemainAmount.SetEvent(WE_CHECKVALUE, _OnRemainAmountCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);

	m_wndName2.SetEvent(WE_SELENDOK, _OnName2SelendokFnc);
	//m_wndName2.SetEvent(WE_SETFOCUS, _OnName2SetfocusFnc);
	//m_wndName2.SetEvent(WE_KILLFOCUS, _OnName2KillfocusFnc);
	m_wndName2.SetEvent(WE_SELCHANGE, _OnName2SelectChangeFnc);
	m_wndName2.SetEvent(WE_LOADDATA, _OnName2LoadDataFnc);
	//m_wndName2.SetEvent(WE_ADDNEW, _OnName2AddNewFnc);

	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);


	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	m_wndItemID.SetEvent(WE_SELENDOK, _OnItemIDSelendokFnc);
	//m_wndItemID.SetEvent(WE_SETFOCUS, _OnItemIDSetfocusFnc);
	//m_wndItemID.SetEvent(WE_KILLFOCUS, _OnItemIDKillfocusFnc);
	m_wndItemID.SetEvent(WE_SELCHANGE, _OnItemIDSelectChangeFnc);
	m_wndItemID.SetEvent(WE_LOADDATA, _OnItemIDLoadDataFnc);
	//m_wndItemID.SetEvent(WE_ADDNEW, _OnItemIDAddNewFnc);
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
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	
/*
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSSaleOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSSaleOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSSaleOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMSSaleOrderFnc, 0, 'T', VK_CONTROL);
*/

	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));
	m_wndRemainAmount.SetTextColor(RGB(255, 0, 0));
	m_wndPayableAmount.SetTextColor(RGB(255, 0, 0));
	

	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndRemainAmount.SetCurrencyFormat(true);
	m_wndPayableAmount.SetCurrencyFormat(true);

	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndRemainAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	SetWindowFont(&m_wndPayableAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	//m_wndPayment.SetCurrencyFormat(true);
	//SetWindowFont(&m_wndPayment, GetFaceName(), GetFaceSize()+2, TRUE);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString	szSQL;
	szSQL.Format(_T("SELECT pmsl_stockid FROM pms_stocklist WHERE pmsl_type ='D' AND pmsl_stockid in(%s)  ORDER BY pmsl_stockid LIMIT 1"), pMF->m_szStocks);
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
		m_szStockKey = rs.GetStringValue();
	
	m_szStatusKey = _T("O");
	SetMode(VM_NONE);
}
void CPMSSaleOrder::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndSaleDate.GetDlgCtrlID(), m_szSaleDate);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndPayableAmount.GetDlgCtrlID(), m_nPayableAmount);
	DDX_Text(pDX, m_wndRemainAmount.GetDlgCtrlID(), m_nRemainAmount);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndName2.GetDlgCtrlID(), m_szName2Key);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_TextEx(pDX, m_wndItemID.GetDlgCtrlID(), m_szItemIDKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndSellingPrice.GetDlgCtrlID(), m_nSellingPrice);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);	
}
void CPMSSaleOrder::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(m_nOrderID > 0)
	{
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT * FROM pms_saleorder WHERE pso_orderid=%d "), m_nOrderID);
		rs.ExecSQL(szSQL);		
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("pso_orderdate"), m_szSaleDate);			
			rs.GetValue(_T("pso_age"), m_szAge);
			rs.GetValue(_T("pso_clientid"), m_szClientID);
			rs.GetValue(_T("pso_name"), m_szName);			
			rs.GetValue(_T("pso_phone"), m_szPhone);
			rs.GetValue(_T("pso_totalamt"), m_nTotalAmount);
			rs.GetValue(_T("pso_payamt"), m_nPayableAmount);
			rs.GetValue(_T("pso_remainamt"), m_nRemainAmount);
			rs.GetValue(_T("pso_doctor"), m_szDoctorKey);
			rs.GetValue(_T("pso_status"), m_szStatusKey);
			rs.GetValue(_T("pso_stockid"), m_szStockKey);
			rs.GetValue(_T("pso_createdby"), m_szCreatedBy);
			SetMode(VM_VIEW);
			OnListLoadData();
		}
		else
		{
			SetMode(VM_NONE);
		}
		UpdateData(FALSE);
	}
}
void CPMSSaleOrder::GetScreenToData()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(GetMode() == VM_ADD) {		
		m_pms_saleorderTbl.SetValue(_T("pso_createdby"), pMF->GetCurrentUser());
		m_pms_saleorderTbl.SetValue(_T("pso_createddate"), pMF->GetSysDateTime());
		m_pms_saleorderTbl.SetValue(_T("pso_updatedby"), pMF->GetCurrentUser());
		m_pms_saleorderTbl.SetValue(_T("pso_updateddate"), pMF->GetSysDateTime());
		m_pms_saleorderTbl.SetValue(_T("pso_orderid"), m_nOrderID);
		m_pms_saleorderTbl.SetValue(_T("pso_docno"), m_nOrderID);
		m_pms_saleorderTbl.SetValue(_T("pso_orderdate"), pMF->GetSysDateTime());
		m_pms_saleorderTbl.SetValue(_T("pso_stockid"), m_szStockKey);
		m_pms_saleorderTbl.SetValue(_T("pso_name"), m_szName);
		m_pms_saleorderTbl.SetValue(_T("pso_clientid"), m_szClientID);
		m_pms_saleorderTbl.SetValue(_T("pso_age"), m_szAge);		
		m_pms_saleorderTbl.SetValue(_T("pso_doctor"), pMF->m_szDoctor);
		m_pms_saleorderTbl.SetValue(_T("pso_status"), _T("O"));
		m_pms_saleorderTbl.SetValue(_T("pso_Doctor"), m_szDoctorKey);
		m_pms_saleorderTbl.SetValue(_T("pso_payment"), _T("N"));		
	}	
	else if (GetMode() == VM_EDIT)
	{	
			
		m_pms_saleorderTbl.SetValue(_T("pso_updatedby"), pMF->GetCurrentUser());
		m_pms_saleorderTbl.SetValue(_T("pso_updateddate"), pMF->GetSysDateTime());			
		m_pms_saleorderTbl.SetValue(_T("pso_name"), m_szName);
		m_pms_saleorderTbl.SetValue(_T("pso_clientid"), m_szClientID);
		m_pms_saleorderTbl.SetValue(_T("pso_age"), m_szAge);
		m_pms_saleorderTbl.SetValue(_T("pso_Statusid"), m_szStatusKey);		
		m_pms_saleorderTbl.SetValue(_T("pso_doctor"), pMF->m_szDoctor);	
		
	}

	CString szItemId = m_wndItemID.GetCurrent(8);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_stockid"), m_szStockKey);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_itemid"), szItemId);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_orderid"), m_nOrderID);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_idx"), str2long(m_szItemIDKey));
	m_pms_saleorder_lineTbl.SetValue(_T("psol_orderqty"), m_nQuantity);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_usage"), m_szUsage);
	m_pms_saleorder_lineTbl.SetValue(_T("psol_objectid"), pMF->GetObjectType());

}
void CPMSSaleOrder::SetDefaultValues()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nTotalAmount=0;
	m_nPayableAmount=0;
	m_nRemainAmount=0;
	m_szDoctorKey.Empty();
	m_nOrderID = 0;
	m_szName.Empty();
	m_szStatusKey = _T("O");
	m_szBarcode.Empty();
	m_szItemIDKey.Empty();
	m_nQuantity=1;
	m_nSellingPrice = 0;
	//m_szStockKey =_T("1");
	m_szAge.Empty();	
}
int CPMSSaleOrder::OnListDblClick(){
	 return 0;
} 
int CPMSSaleOrder::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);

	return 0;
} 
int CPMSSaleOrder::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatusKey == _T("I"))
	{
		ShowMessageBox(_T("Can not delete item selected"), MB_OK);
		return -1;
	}
	CString szSQL, szItemID;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	int retMsg = ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg == IDNO)
			return 0;
	
 
	m_nStockID = ToInt(m_wndStock.GetCurrent(0));
	long nRefIdx  = str2long(m_wndList.GetItemText(nSel, 7));
	szItemID = m_wndList.GetItemText(nSel, 0);
	
	szSQL.Format(_T("SELECT pms_saleorder_line_delete_entry(%d, %ld, '%s', %ld) "), m_nStockID, m_nOrderID, szItemID, nRefIdx);
//_fmsg(_T("%s"), szSQL);
	int rec = pMF->ExecSQL(szSQL);
	if (rec > 0)
		OnListLoadData();
	return 0;
} 
int CPMSSaleOrder::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsi_refidx as refidx, pmi_id, pmi_name, pmi_unit, \
					(SELECT sc_name FROM sys_country WHERE sc_id=pmi_countryid LIMIT 1) as country, \
					psol_unitprice, sum(psol_orderqty) as psol_qty, sum(psol_orderqty*psol_unitprice) as psol_money  \
					FROM pms_saleorder_line \
					LEFT JOIN pms_stockitems ON(pmsi_id=psol_sitemid) \
					LEFT JOIN pms_items ON(psol_itemid=pmi_id) \
					WHERE psol_orderid=%d \
					GROUP BY refidx, psol_idx, pmi_id, pmi_name, pmi_unit, psol_unitprice, country \
					ORDER BY psol_idx "), m_nOrderID);
	//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	m_nTotalAmount = 0;
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(			
			rs.GetValue(_T("pmi_id")), 
			rs.GetValue(_T("pmi_name")), 
			rs.GetValue(_T("pmi_unit")), 
			rs.GetValue(_T("psol_qty")), 
			rs.GetValue(_T("psol_unitprice")), 
			rs.GetValue(_T("psol_money")),
			rs.GetValue(_T("country")),
			rs.GetValue(_T("refidx")), 
			NULL);
		m_nTotalAmount += ToDouble(rs.GetValue(_T("psol_money")));
		rs.MoveNext();
	}
	
	m_wndList.EndLoad(); 
	UpdateData(FALSE);
	return nCount;
}
/*int CPMSSaleOrder::OnTotalAmountChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnTotalAmountSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnTotalAmountKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnTotalAmountCheckValue(){
	return 0;
} 
/*int CPMSSaleOrder::OnPayableAmountChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnPayableAmountSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnPayableAmountKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnPayableAmountCheckValue(){
	return 0;
} 
/*int CPMSSaleOrder::OnRemainAmountChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnRemainAmountSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnRemainAmountKillfocus(){
	return 0;
} 
/*void CPMSSaleOrder::OnRemainAmountChange(){
	
} */
/*void CPMSSaleOrder::OnRemainAmountSetfocus(){
	
} */
/*void CPMSSaleOrder::OnRemainAmountKillfocus(){
	
} */
int CPMSSaleOrder::OnRemainAmountCheckValue(){
	return 0;
} 

void CPMSSaleOrder::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSaleOrder::OnStockSelendok(){
	 
}
/*void CPMSSaleOrder::OnStockSetfocus(){
	
}*/
/*void CPMSSaleOrder::OnStockKillfocus(){
	
}*/
long CPMSSaleOrder::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), pMF->m_szStocks);

	szSQL.Format(_T(" SELECT * FROM pms_stocklist WHERE pmsl_type ='D' %s ORDER BY pmsl_type, pmsl_stockid "), szWhere);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSSaleOrder::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


int CPMSSaleOrder::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	

	 return 0;
} 
int CPMSSaleOrder::OnDoctorSelendok()
{	
	return 0;
}
/*int CPMSSaleOrder::OnDoctorSetfocus(){
	 return 0;
}*/
/*int CPMSSaleOrder::OnDoctorKillfocus(){
	 return 0;
}*/
int CPMSSaleOrder::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;	

	if(m_wndDoctor.IsSearchKey()){
		szWhere.Format(_T(" WHERE su_userid ='%s' "), m_szDoctorKey);
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_user %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("su_userid")), 
			rs.GetValue(_T("su_name")), 
			NULL);
		rs.MoveNext();
	}

	return nCount;
}
/*int CPMSSaleOrder::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

int CPMSSaleOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
int CPMSSaleOrder::OnStatusSelendok(){
	 return 0;
}
/*void CPMSSaleOrder::OnStatusSetfocus(){
	
}*/
/*void CPMSSaleOrder::OnStatusKillfocus(){
	
}*/
int CPMSSaleOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code ='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select * from sys_sel where ss_id='pms_order_status' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSSaleOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

int CPMSSaleOrder::OnName2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CPMSSaleOrder::OnName2Selendok()
{
	m_szName = m_wndName2.GetCurrent(1);
	m_szClientID = m_wndName2.GetCurrent(0);
	return 0;
}
/*int CPMSSaleOrder::OnName2Setfocus(){
	 return 0;
}*/
/*int CPMSSaleOrder::OnName2Killfocus(){
	 return 0;
}*/
int CPMSSaleOrder::OnName2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szName;
	szWhere.Empty();
	if(m_wndName2.IsSearchKey() && !m_szName2Key.IsEmpty())
	{
		szWhere.Format(_T("WHERE pmc_id='%s' "), m_szName2Key);
	}
	m_wndName2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM pms_client %s ORDER BY pmc_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		szName.Format(_T("%s %s"), 
			rs.GetValue(_T("pmc_firstname")),
			rs.GetValue(_T("pmc_lastname")));
		szName.Trim();

		m_wndName2.AddItems(
			rs.GetValue(_T("pmc_id")).Trim(), 
			szName, 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CPMSSaleOrder::OnName2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*int CPMSSaleOrder::OnIDChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnIDSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnIDKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return 0;
	
	GetDataToScreen();
	/*m_wndList.DeleteAllItems();
	if(m_nOrderID > 0)
	{
		szSQL.Format(_T("SELECT * FROM pms_saleorder WHERE pso_orderid=%d "), m_nOrderID);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		if(rs.GetRecordCount() > 0)
		{
			rs.GetValue(_T("pso_name"), m_szName);
			rs.GetValue(_T("pso_Doctor"), m_szDoctorKey);
			rs.GetValue(_T("pso_status"), m_szStatusKey);
			rs.GetValue(_T("pso_phone"), m_szPhone);
			rs.GetValue(_T("pso_totalamt"), m_nTotalAmount);
			rs.GetValue(_T("pso_payamt"), m_nPayableAmount);
			rs.GetValue(_T("pso_remainamt"), m_nRemainAmount);
			rs.GetValue(_T("pso_stockid"), m_szStockKey);
			OnListLoadData();
			SetMode(VM_VIEW);
			return 0;
		}
	}*/
	return -1;
} 
/*int CPMSSaleOrder::OnNameChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnNameSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnNameKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnNameCheckValue(){
	return 0;
} 
/*int CPMSSaleOrder::OnPhoneChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnPhoneSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnPhoneKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnPhoneCheckValue(){
	return 0;
} 
/*int CPMSSaleOrder::OnBarcodeChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnBarcodeSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnBarcodeKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnBarcodeCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szBarcode.IsEmpty())
	{
		return 0;
	}
	szSQL.Format(_T("SELECT * FROM pms_items WHERE pmsi_barcode='%s'"), m_szBarcode);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		m_szItemIDKey = rs.GetValue(_T("pmsi_id"));
		m_wndItemID.SetCurrent(0, m_szItemIDKey);
		OnItemIDSelendok();
		m_nQuantity = 1;
		UpdateData(FALSE);
	//	m_wndNote.SetFocus();
	//	OnSavePMSSaleOrder();
	//	m_wndSaleDate.SetFocus();
		m_wndItemID.SetFocus();
		
	}

	return 0;
} 
int CPMSSaleOrder::OnItemIDSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CPMSSaleOrder::OnItemIDSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//UpdateData(true);
	m_szItemIDKey = m_wndItemID.GetCurrent(0);
	m_szBarcode = m_wndItemID.GetCurrent(6);
	//m_nSellingPrice = ToDouble(m_wndItemID.GetCurrent(3));
	if(m_szDoctorKey == _T("L"))
		szSQL.Format(_T("SELECT MAX(pmsi_servprice) as price FROM pms_stockitems WHERE pmsi_itemid='%s' "), 
					 m_wndItemID.GetCurrent(8));
	else
		szSQL.Format(_T("SELECT MAX(pmsi_retailprice) as price FROM pms_stockitems WHERE pmsi_itemid=trim('%s') "), 
					 m_wndItemID.GetCurrent(8));
	rs.ExecSQL(szSQL);

	if(rs.GetRecordCount() > 0)
	{
		rs.GetValue(_T("price"), m_nSellingPrice);
	}
	//m_szNote = m_wndItemID.GetCurrent(5);

	UpdateData(FALSE);	
	return 0;
}
/*int CPMSSaleOrder::OnItemIDSetfocus(){
	 return 0;
}*/
/*int CPMSSaleOrder::OnItemIDKillfocus(){
	 return 0;
}*/
int CPMSSaleOrder::OnItemIDLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemID.IsSearchKey() && str2long(m_szItemIDKey))
	{
		szWhere.Format(_T(" AND pmsi_refidx=%ld "), str2long(m_szItemIDKey));
	};
	m_wndItemID.DeleteAllItems(); 
	int nCount = 0;
		szSQL.Format(_T(" SELECT  pmsi_refidx as refidx, ") \
	_T(" 	pmi_id as itemid, ") \
	_T(" 	pmi_name as name, ") \
	_T(" 	pmi_unit as unit, ") \
	_T(" 	pmsi_vatprice as vatprice,") \
	_T(" 	pmg_name as genericname, ") \
	_T(" 	sum(pmsl_qty-pmsl_orderqty) as orderqty, ") \
	_T(" 	(select sc_name from sys_country where sc_id=pmsi_countryid limit 1 ) as country, ") \
	_T(" 	(select pmo_name from pms_original where pmo_id=pmsi_originalid limit 1 ) as original, ") \
	_T(" 	pmsi_originalid as originalid ") \
	_T(" FROM pms_stockline ") \
	_T(" LEFT JOIN pms_stockitems ON(pmsl_sitemid=pmsi_id)") \
	_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
	_T(" LEFT JOIN pms_generic  on(pmi_genericid=pmg_id) ") \
	_T(" WHERE pmsl_stockid=%ld ") \
	_T(" 	and pmsl_qty-pmsl_orderqty > 0 ") \
	_T("	and pmsl_impdate <= cast('%s' as timestamp) ") \
	_T(" 	and (pmsi_expdate=date('1752-09-14') or pmsi_expdate > date('%s') ) %s ") \
	_T(" GROUP BY refidx, itemid, name, unit, vatprice, genericname, country, original, originalid ") \
	_T(" ORDER BY name, unit, vatprice, originalid"), str2int(m_szStockKey), m_szSaleDate, m_szSaleDate, szWhere );
		//_msg(_T("%s"), szSQL);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			m_wndItemID.AddItems(
				rs.GetValue(_T("refidx")), 
				rs.GetValue(_T("name")), 
				rs.GetValue(_T("unit")), 
				rs.GetValue(_T("vatprice")), 
				rs.GetValue(_T("genericname")), 
				rs.GetValue(_T("orderqty")), 
				rs.GetValue(_T("country")),
				rs.GetValue(_T("original")),
				rs.GetValue(_T("itemid")),
				NULL);
			rs.MoveNext();
		}
		return nCount;
}
/*int CPMSSaleOrder::OnItemIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CPMSSaleOrder::OnQuantityChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnQuantitySetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnQuantityKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnQuantityCheckValue(){

	if(m_nQuantity <= 0 )
	{
		return -1;
	}
	long nOnhand = ToLong(m_wndItemID.GetCurrent(5));
	if( m_nQuantity > nOnhand)
	{
		CString szMsg, szStr, szStr2;
		TranslateString(_T("Onhand quantity"), szStr);
		TranslateString(_T("Order quantity"), szStr2);
		szMsg.Format(_T("%s [%ld] < %s [%ld]"), szStr, nOnhand, szStr2, m_nQuantity);
		m_wndQuantity.SetToolTipMessage(szMsg);
		return -1;
	}
	return 0;
}

/*int CPMSSaleOrder::OnSellingPriceChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnSellingPriceSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnSellingPriceKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnSellingPriceCheckValue(){
	return 0;
} 
/*int CPMSSaleOrder::OnNoteChange(){
	return 0;
} */
/*int CPMSSaleOrder::OnNoteSetfocus(){
	return 0;
} */
/*int CPMSSaleOrder::OnNoteKillfocus(){
	return 0;
} */
int CPMSSaleOrder::OnNoteCheckValue(){
	return 0;
} 


int CPMSSaleOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddPMSSaleOrder();
	 return 0;
} 
int CPMSSaleOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditPMSSaleOrder();
	 return 0;
} 
int CPMSSaleOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePMSSaleOrder();
	 return 0;
} 
int CPMSSaleOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSavePMSSaleOrder();
	 return 0;
} 
int CPMSSaleOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelPMSSaleOrder();
	 return 0;
} 
#include "PMSPaymentDlg.h"

int CPMSSaleOrder::OnPaymentSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("09.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}
	
	
	if(m_wndList.GetItemCount() <= 0)
		return -1;

	OnCancelSelect();
	if (m_szStatusKey ==_T("I")) return -1;
	CPMSPaymentDlg dlg;
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nTotalAmount = m_nTotalAmount;
	dlg.m_nTotalPayment = m_nTotalAmount;
	if (dlg.DoModal() == IDOK)
	{
		UpdateStockQuantity();
		GetDataToScreen();
	}
	 return 0;
} 
int CPMSSaleOrder::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
{
	/*CPMSSaleOrderListDlg dlg;
	if(dlg.DoModal() == IDOK)
	{
		m_nOrderID=dlg.m_nOrderID;
		GetDataToScreen();
		OnListLoadData();
	}*/
	return 0;
} 


int CPMSSaleOrder::OnPrintSelect()
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("09.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}

	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CReport rpt;
	CString tmpStr;
	SetMode(VM_VIEW);

	szSQL.Format(_T("SELECT date(pso_orderdate) as orderdate,pso_name as PatientName,pso_age as age,pso_phone as Phone, \
					pmi_name as DrugName,pmi_unit as unit, psol_unitprice as price, \
					sum(psol_Orderqty) as qty, sum(psol_Orderqty*psol_unitprice) as money \
					FROM pms_saleorder \
					LEFT JOIN pms_saleorder_line ON(pso_orderid=psol_orderid) \
					LEFT JOIN pms_stockitems ON(pmsi_id=psol_sitemid) \
					LEFT JOIN pms_items ON(psol_itemid=pmi_id) \
					WHERE pso_orderid=%d \
					GROUP BY orderdate,PatientName,Phone,age, unit,DrugName, price \
					ORDER BY DrugName,unit  "),m_nOrderID);	
	
	//_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return -1;
	
	
	if(!rpt.Init(_T("Reports/HMS/PMS_DRUGDELIVERYVOTE.RPT")) )
		return -1;
	

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rs.GetValue(_T("Statusid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(tmpStr));
	rs.GetValue(_T("roomname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RoomName"), tmpStr);

	tmpStr.Format(_T("%ld"), m_nOrderID);
	rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
	
	rs.GetValue(_T("PatientName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

	//In ra tuoi	
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
//Chi In ra nam sinh.
	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

		
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	int nItem=1;

	CString szWhere, tmpStr2, szQty;
	double dblTotalAmount;
	double money;
	nItem = 0;
	dblTotalAmount = 0;
	//_fmsg(_T("%s"), szSQL);
	
	
	while(!rs.IsEOF())
	{ 
		nItem++;
		rptDetail = rpt.AddDetail();		
		rs.GetValue(_T("money"), money);
		dblTotalAmount += money;
		tmpStr.Format(_T("%d"),nItem );
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("Drugname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("price"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("money"), tmpStr);
		FormatCurrencyStr(tmpStr, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("productcountry"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.MoveNext();
	}

	//Page Footer
	//Report Footer
	CString tmpVal;
	tmpStr.Format(_T("%d"), nItem);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	FormatCurrency(dblTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpVal.Format(_T("%.2f"), dblTotalAmount);
	MoneyToString(tmpVal, tmpStr);
#ifdef UNICODE
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr+ _T(" \x111\x1ED3ng"));
#endif
	CString szDate;
	rs.GetValue(_T("orderdate"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
//
	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}

	rpt.GetReportFooter()->SetValue(_T("IssueBy"), pMF->GetDoctorName(pMF->GetCurrentUser()));	
	
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	return 0;
} 
int CPMSSaleOrder::OnAddPMSSaleOrder()
{ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	m_wndList.DeleteAllItems();
	

	if(!pMF->CheckPermission(_T("09.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}

 	SetMode(VM_ADD); 
	return 0; 
}

int CPMSSaleOrder::OnAddItem()
{ 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatusKey != _T("O"))
	{
		ShowMessage(10, MB_OK|MB_ICONWARNING);
		return -1;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not add entry"), 0);
		return -1;
	}

 	
	SetMode(VM_ADDCHILD); 
	m_wndItemID.SetFocus();
	return 0;  
} 

int CPMSSaleOrder::OnEditPMSSaleOrder()
{ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	

	if(!pMF->CheckPermission(_T("09.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}
	
	if(!pMF->SetStartWork(this, _T("Edit PMSSaleOrder"))) 
 		return -1; 

 	SetMode(VM_EDIT);  
	return 0;  
 
} 


int CPMSSaleOrder::OnDeletePMSSaleOrder()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL,szItemID, msg; 
	
	if(!pMF->CheckPermission(_T("09.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete"), 0);
		return -1;
	}

	msg.Format(_T("Do you want to delete the current prescription is not!"));
 	if(AfxMessageBox(msg, MB_YESNO|MB_ICONSTOP|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	if (m_szStatusKey != _T("O"))
	{
		msg.Format(_T("Can not delete prescriptions issued. Be sure to check back!"));
 		AfxMessageBox(msg, MB_YESNO|MB_ICONSTOP|MB_OK);
		return -1;
	}

	m_nStockID = ToInt(m_wndStock.GetCurrent(0));
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{			
		long nRefIdx  = str2long(m_wndList.GetItemText(i, 7));
		szItemID = m_wndList.GetItemText(i, 0);		
		szSQL.Format(_T("SELECT pms_saleorder_line_delete_entry(%d, %ld, '%s', %ld) "), m_nStockID, m_nOrderID, szItemID, nRefIdx);
		int rec = pMF->ExecSQL(szSQL);
		if (rec < 0 ) 
			return -1;
	}
	
	szSQL.Format(_T("DELETE FROM  pms_saleorder WHERE  pso_orderid=%d AND pso_status<>'P' "), m_nOrderID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{
		//m_wndList.DeleteAllItems();
		OnListLoadData();
		//m_nOrderID = 0;
		SetMode(VM_NONE); 
		//OnCancelPMSSaleOrder();
 	}
	return 0;
 }
int CPMSSaleOrder::OnSavePMSSaleOrder()
{
	int nMode  = GetMode();
 	if(nMode != VM_ADD && nMode != VM_EDIT && nMode != VM_ADDCHILD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szSQL2, tmpStr; 
	CRecord rs(&pMF->m_db);
	int ret;
	/*if(m_szDoctorKey == _T("L"))
		m_szClientID.Empty();*/

 	if(nMode == VM_ADD)
	{ 
		if(m_nOrderID > 0)
		{
			szSQL = m_pms_saleorderTbl.GetInsertSQL();			
			pMF->ExecSQL(szSQL);				
			UpdateData(FALSE);
		}
 	} 
 	else if(nMode == VM_EDIT)
	{ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE pso_orderid=%d  "), m_nOrderID); 
 		szSQL = m_pms_saleorderTbl.GetUpdateSQL(_T("pso_createdby, pso_orderid, pso_orderdate")); 
 		szSQL += szWhere; 
		pMF->ExecSQL(szSQL);
 	} 
	
	pMF->FinishWork(this);
	if(nMode != VM_EDIT)
	{		
		szSQL.Format(_T(" SELECT pms_saleorder_line_add_entry(%s) "), m_pms_saleorder_lineTbl.FormatSQL());	
		tmpStr.AppendFormat(_T("\r\n%s"), szSQL);	
		ret = pMF->ExecSQL(szSQL);
 		if(ret > 0) 
 		{ 
			pMF->Commit();			
 		} 

		m_szItemIDKey.Empty();
		m_nQuantity = 1;
		m_szBarcode.Empty();
		if(!pMF->SetStartWork(this,_T("Add Item"))) 
 			return -1; 
		SetMode(VM_ADDCHILD);  
//		m_wndName.SetFocus();

	}
	else
	{
		SetMode(VM_VIEW);
	}	
	_fmsg(_T("%s"), szSQL);
	OnListLoadData();
 	return 0; 
}
int CPMSSaleOrder::OnCancelPMSSaleOrder()
{ 
	if(m_nOrderID > 0)
		SetMode(VM_VIEW); 
	else
		SetMode(VM_NONE);
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();  	 
	pMF->FinishWork(this);
 	
 	return 0;
} 


void CPMSSaleOrder::SetMode(int nMode)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	CGuiView::SetMode(nMode);
	switch(nMode)
	{
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, 5, 6, -1);
		m_wndID.EnableWindow(FALSE);
		SetDefaultValues();

		szSQL.Format(_T("select last_value + 1 as orderid from pms_saleorder_pso_orderid_seq ") );
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){			
			rs.GetValue(_T("OrderID"), m_nOrderID);
		}
		
		m_bAddOrder = true;


		m_szSaleDate = pMF->GetSysDateTime();
		if (m_szStockKey.IsEmpty())			
			m_wndStock.SetFocus();
		else
			m_wndName.SetFocus();

		break;
	case VM_ADDCHILD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, 5, 6, -1);
		m_wndName.EnableWindow(FALSE);
		m_wndDoctor.EnableWindow(FALSE);
		m_wndPhone.EnableWindow(FALSE);
		m_wndStock.EnableWindow(FALSE);
		m_wndID.EnableWindow(FALSE);
		m_wndSaleDate.EnableWindow(FALSE);
		m_wndPhone.EnableWindow(FALSE);
		m_wndStatus.EnableWindow(FALSE);
		m_wndAge.EnableWindow(FALSE);
		//m_wndBarcode.SetFocus();
		m_wndItemID.SetFocus();
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 4, 5, -1);
		m_wndBarcode.EnableWindow(FALSE);
		m_wndItemID.EnableWindow(FALSE);
		m_wndQuantity.EnableWindow(FALSE);
		m_wndNote.EnableWindow(FALSE);		
		m_wndID.EnableWindow(FALSE);
		m_wndStatus.EnableWindow(FALSE);			
		m_wndName.SetFocus();
		break;	
	case VM_VIEW:
		EnableControls(FALSE);
		EnableButtons(FALSE, 3, 4, -1);
		m_wndID.EnableWindow(TRUE);
		break;
	case VM_NONE:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 7, -1);
		m_wndID.EnableWindow(TRUE);
		SetDefaultValues();
		m_szSaleDate = pMF->GetSysDate();
		break;
	};
	if(m_szStatusKey != _T("O")){
		m_wndPayment.EnableWindow(FALSE);
		m_wndDelete.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);
	}

	m_wndSaleDate.EnableWindow(FALSE);	
	m_wndStatus.EnableWindow(FALSE);	
	m_wndSellingPrice.EnableWindow(FALSE);
	UpdateData(FALSE);
}

int CPMSSaleOrder::UpdateStockQuantity()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nOrderQuantity, nIssueQuantity, nStockLine;
	pMF->BeginTransaction();
	szSQL.Format(_T("SELECT pms_saleorder_accept(%d,'%s')"),m_nOrderID,pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	
	/*
	szSQL.Format(_T("SELECT psol_stockline, psol_orderqty, psol_issueqty FROM pms_saleorder_line ")\
				 _T("WHERE psol_orderid=%d ORDER BY psol_stockline"), m_nOrderID);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		nStockLine = ToInt(rs.GetValue(_T("psol_stockline")));
		nOrderQuantity = ToInt(rs.GetValue(_T("psol_orderqty")));
		nIssueQuantity = ToInt(rs.GetValue(_T("psol_issueqty")));
		szSQL.Format(_T("UPDATE pms_stockline SET pmsl_qty=pmsl_qty-%d, pmsl_orderqty=pmsl_orderqty-%d ")\
			         _T("WHERE pmsl_stockid=%d AND pmsl_lineidx=%d"), 
					 nIssueQuantity, nOrderQuantity, ToInt(m_szStockKey), nStockLine);
		pMF->ExecSQL(szSQL);
		rs.MoveNext();
	}*/
	pMF->Commit();
	return 0;
}