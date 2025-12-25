#include "PurchaseOrderNonstockDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"
static CString	_szApprovedDate;


static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnResourceAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnDelivererCheckValue();
} 

static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnDelivererLoadData();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnReceiverCheckValue();
} 
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnReceiverLoadData();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnReferenceCheckValue();
} 
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceTypeAddNew();
}*/
static void _OnContractPkgSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnContractPkgSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractPkgSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnContractPkgSelendok();
}
/*static void _OnContractPkgSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnContractPkgKillfocus();
}*/
/*static void _OnContractPkgKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnContractPkgKillfocus();
}*/
static long _OnContractPkgLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnContractPkgLoadData();
}
/*static void _OnContractPkgAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnContractPkgAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonstockDialog* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnVATAddNew();
}*/
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseOrderNonstockDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonstockDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonstockDialog *pVw = (CPurchaseOrderNonstockDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderNonstockDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonstockDialog*)pWnd)->OnAddPurchaseOrderNonstockDialog();
} 
static int _OnEditPurchaseOrderNonstockDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonstockDialog*)pWnd)->OnEditPurchaseOrderNonstockDialog();
} 
static int _OnDeletePurchaseOrderNonstockDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonstockDialog*)pWnd)->OnDeletePurchaseOrderNonstockDialog();
} 
static int _OnSavePurchaseOrderNonstockDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonstockDialog*)pWnd)->OnSavePurchaseOrderNonstockDialog();
} 
static int _OnDiscardPurchaseOrderNonstockDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonstockDialog*)pWnd)->OnDiscardPurchaseOrderNonstockDialog();
} 
CPurchaseOrderNonstockDialog::CPurchaseOrderNonstockDialog(CWnd *pParent, int nMode, bool bNonStock):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1019;
	m_nDlgHeight = 644;
	SetDefaultValues();

	m_szType = _T("POO");

	m_szCurrencyKey.Empty();
	m_nExchangeRate=1;
	m_szWarehouseKey.Empty();
	m_szResourceKey.Empty();

	
	
	m_bRefresh = false;
	m_bNonStock = bNonStock;

	if(m_bNonStock)
		SetWindowTitle(_T("Purchase Orders Non-Stock"));
	else
		SetWindowTitle(_T("Purchase Orders"));

}
CPurchaseOrderNonstockDialog::~CPurchaseOrderNonstockDialog(){
}
void CPurchaseOrderNonstockDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 180);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 180);
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 30, 160, 55);
	m_wndWarehouse.Create(this,165, 30, 365, 55); 
	m_wndResourceLabel.Create(this, _T("Resource"), 370, 30, 475, 55);
	m_wndResource.Create(this,480, 30, 680, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 160, 85);
	m_wndSupplier.Create(this,165, 60, 680, 85); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 365, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 370, 90, 475, 115);
	m_wndReceiver.Create(this,480, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 10, 150, 160, 175);
	m_wndReference.Create(this,165, 150, 265, 175); 
	m_wndOriginalDocument.Create(this, _T(""), 0, 0, 25, 25);
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 270, 150, 365, 175);
	m_wndInvoiceType.Create(this,370, 150, 475, 175); 
	m_wndContractPkgLabel.Create(this, _T("Contract Pkg"), 480, 150, 570, 175);
	m_wndContractPkg.Create(this,575, 150, 680, 175); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 695, 90, 845, 115);
	m_wndInvoiceNo.Create(this,850, 90, 1000, 115); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 695, 120, 845, 145);
	m_wndInvoiceDate.Create(this,850, 120, 1000, 145); 
	m_wndVATLabel.Create(this, _T("VAT"), 695, 150, 845, 175);
	m_wndVAT.Create(this,850, 150, 1000, 175); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 10, 545, 135, 570);
	m_wndTotalLines.Create(this,140, 545, 225, 570); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 230, 545, 355, 570);
	m_wndNetAmount.Create(this,360, 545, 485, 570); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 490, 545, 615, 570);
	m_wndTaxesAmount.Create(this,620, 545, 745, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 750, 545, 875, 570);
	m_wndTotalAmount.Create(this,880, 545, 1005, 570); 
	
	m_wndAdd.Create(this, _T("&Add"), 250, 575, 340, 600);
	m_wndEdit.Create(this, _T("&Edit"), 345, 575, 435, 600);
	m_wndDelete.Create(this, _T("&Delete"), 440, 575, 530, 600);
	m_wndSave.Create(this, _T("&Save"), 535, 575, 625, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 575, 720, 600);
	m_wndPrint.Create(this, _T("&Print-F3"), 725, 575, 815, 600);
	m_wndPost.Create(this, _T("&Import-F2"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);

	m_wndTab.Create(this,5, 185, 1005, 540); 
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	CreateTabViews();

}
void CPurchaseOrderNonstockDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
//	m_wndOrderDate.SetReadOnly(TRUE);

	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(254);
	m_wndDescription.SetLimitText(254);
//	m_wndDescription.SetCheckValue(true);
	m_wndNetAmount.SetLimitText(16);
	m_wndNetAmount.SetReadOnly(TRUE);
//	m_wndNetAmount.SetCheckValue(true);
	m_wndNetAmount.SetCurrencyFormat(true);
	m_wndNetAmount.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);
	m_wndTaxesAmount.SetLimitText(16);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
//	m_wndTaxesAmount.SetCheckValue(true);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndContractPkg.SetCheckValue(false);
	
	//m_wndDeliverer.SetInitCap(1);
	//m_wndReceiver.SetInitCap(1);
	m_wndVAT.SetCheckValue(TRUE);
	
	m_wndVAT.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndVAT.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndInvoiceNo.SetCheckValue(false);
	m_wndInvoiceDate.SetCheckValue(false);

	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(true);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndResource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResource.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndContractPkg.InsertColumn(0, _T("Pkg"), CFMT_TEXT, 150);
	m_wndContractPkg.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndContractPkg.Format(2, 0, 10, 0);

	m_wndDeliverer.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDeliverer.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndReceiver.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndReceiver.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_purchase_orderTbl.SetTableName(_T("purchase_order"));
	m_purchase_orderTbl.AddField(_T("po_purchase_order_id"), dfLong); 
	m_purchase_orderTbl.AddField(_T("po_client_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_org_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_user_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_createdby"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_updatedby"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_updateddate"), dfDateTime); 
	m_purchase_orderTbl.AddField(_T("po_doctype"), dfText, 1); 
	m_purchase_orderTbl.AddField(_T("po_orderno"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_orderdate"), dfDateTime); 
	m_purchase_orderTbl.AddField(_T("po_invoiceno"), dfText, 20); 
	m_purchase_orderTbl.AddField(_T("po_invoicedate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_acctdate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_currency_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_exchangerate"), dfDouble); 
	m_purchase_orderTbl.AddField(_T("po_expense_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_contract_id"), dfText, 32);
	m_purchase_orderTbl.AddField(_T("po_partner_type_id"), dfText, 3); 
	m_purchase_orderTbl.AddField(_T("po_partner_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_partneraddress"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_description"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_reference"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_deliveryby"), dfText, 60); 
	m_purchase_orderTbl.AddField(_T("po_receivedby"), dfText, 60); 
	m_purchase_orderTbl.AddField(_T("po_payment_method_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_payment_terms_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_delivery_method_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_delivery_terms_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_deliverydate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_deliveryaddress"), dfText, 255);
	m_purchase_orderTbl.AddField(_T("po_storage_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_resource_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_tax_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_creditacct"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_debitacct"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_saleperson_id"), dfText, 32); 
	if(pMF->CheckPermission(_T("15.00")))
	{
		m_purchase_orderTbl.AddField(_T("po_approveddate"), dfDateTime); 
	}

	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndOrderNo.SetReadOnly(TRUE);
	m_wndWarehouse.SetCheckValue(true);
	m_wndResource.SetCheckValue(true);
	m_wndInvoiceNo.SetCheckValue(true);
}

void CPurchaseOrderNonstockDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndResource.SetEvent(WE_SELENDOK, _OnResourceSelendokFnc);
	//m_wndResource.SetEvent(WE_SETFOCUS, _OnResourceSetfocusFnc);
	//m_wndResource.SetEvent(WE_KILLFOCUS, _OnResourceKillfocusFnc);
	m_wndResource.SetEvent(WE_SELCHANGE, _OnResourceSelectChangeFnc);
	m_wndResource.SetEvent(WE_LOADDATA, _OnResourceLoadDataFnc);
	//m_wndResource.SetEvent(WE_ADDNEW, _OnResourceAddNewFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndDeliverer.SetEvent(WE_CHANGE, _OnDelivererChangeFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_CHECKVALUE, _OnDelivererCheckValueFnc);
	m_wndDeliverer.SetEvent(WE_LOADDATA, _OnDelivererLoadDataFnc);
	//m_wndReceiver.SetEvent(WE_CHANGE, _OnReceiverChangeFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_CHECKVALUE, _OnReceiverCheckValueFnc);
	m_wndReceiver.SetEvent(WE_LOADDATA, _OnReceiverLoadDataFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	m_wndContractPkg.SetEvent(WE_SELENDOK, _OnContractPkgSelendokFnc);
	//m_wndContractPkg.SetEvent(WE_SETFOCUS, _OnContractPkgSetfocusFnc);
	//m_wndContractPkg.SetEvent(WE_KILLFOCUS, _OnContractPkgKillfocusFnc);
	m_wndContractPkg.SetEvent(WE_SELCHANGE, _OnContractPkgSelectChangeFnc);
	m_wndContractPkg.SetEvent(WE_LOADDATA, _OnContractPkgLoadDataFnc);
	//m_wndContractPkg.SetEvent(WE_ADDNEW, _OnContractPkgAddNewFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	m_wndVAT.SetEvent(WE_SELENDOK, _OnVATSelendokFnc);
	//m_wndVAT.SetEvent(WE_SETFOCUS, _OnVATSetfocusFnc);
	//m_wndVAT.SetEvent(WE_KILLFOCUS, _OnVATKillfocusFnc);
	m_wndVAT.SetEvent(WE_SELCHANGE, _OnVATSelectChangeFnc);
	m_wndVAT.SetEvent(WE_LOADDATA, _OnVATLoadDataFnc);
	//m_wndVAT.SetEvent(WE_ADDNEW, _OnVATAddNewFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLinesChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLinesSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLinesKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLinesCheckValueFnc);
	//m_wndNetAmount.SetEvent(WE_CHANGE, _OnNetAmountChangeFnc);
	//m_wndNetAmount.SetEvent(WE_SETFOCUS, _OnNetAmountSetfocusFnc);
	//m_wndNetAmount.SetEvent(WE_KILLFOCUS, _OnNetAmountKillfocusFnc);
	m_wndNetAmount.SetEvent(WE_CHECKVALUE, _OnNetAmountCheckValueFnc);
	//m_wndTaxesAmount.SetEvent(WE_CHANGE, _OnTaxesAmountChangeFnc);
	//m_wndTaxesAmount.SetEvent(WE_SETFOCUS, _OnTaxesAmountSetfocusFnc);
	//m_wndTaxesAmount.SetEvent(WE_KILLFOCUS, _OnTaxesAmountKillfocusFnc);
	m_wndTaxesAmount.SetEvent(WE_CHECKVALUE, _OnTaxesAmountCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	if(m_bNonStock)
	{
	//	m_wndResourceLabel.MoveWindow(CRect(10, 30, 160, 55));
	//	m_wndResource.MoveWindow(CRect(165, 30, 680, 55)); 
	//	m_wndWarehouse.ShowWindow(SW_HIDE);
	//	m_wndWarehouseLabel.ShowWindow(SW_HIDE);
	//	m_wndWarehouse.SetCheckValue(FALSE);
	//	m_szWarehouseKey = _T("-1");
		
		CString tmpStr;
		TranslateString(_T("Type"), tmpStr);
		m_wndWarehouseLabel.SetWindowText(tmpStr);
		TranslateString(_T("Approve"), tmpStr);
		m_wndPost.SetWindowText(tmpStr);
	}

	

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW){
		GetDataToScreen();
	}
	SetMode(nMode);


}
void CPurchaseOrderNonstockDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_TextEx(pDX, m_wndContractPkg.GetDlgCtrlID(), m_szContractPkgKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndVAT.GetDlgCtrlID(), m_szVATKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CPurchaseOrderNonstockDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM purchase_order ") \
		_T(" WHERE po_purchase_order_id=%ld  ") \
		_T(" and po_doctype='%s' and po_org_id IN('GL','%s') "), 
			m_nID, m_szType, pMF->GetModuleID());

	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_orderno"), m_szOrderNo);
		rs.GetValue(_T("po_orderdate"), m_szOrderDate);
		
		rs.GetValue(_T("po_invoiceno"), m_szInvoiceNo);
		rs.GetValue(_T("po_invoicedate"), m_szInvoiceDate);

		rs.GetValue(_T("po_acctdate"), m_szApprovedDate);
		_szApprovedDate = m_szApprovedDate;

		rs.GetValue(_T("po_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("po_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("po_partner_id"), m_szSupplierKey);
		rs.GetValue(_T("po_partneraddress"), m_szAddress);
		
		

		rs.GetValue(_T("po_status"), m_szStatus);
		rs.GetValue(_T("po_netamount"), m_nNetAmount);
		rs.GetValue(_T("po_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("po_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("po_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("po_posted"), m_szPosted);
		rs.GetValue(_T("po_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("po_receivedby"), m_szReceiverKey);
		rs.GetValue(_T("po_reference"), m_szReference);
		rs.GetValue(_T("po_description"), m_szDescription);
		rs.GetValue(_T("po_payment_method_id"), m_szPaymentMethodKey);
		rs.GetValue(_T("po_payment_terms_id"), m_szPaymentTermsKey);
		rs.GetValue(_T("po_delivery_method_id"), m_szDeliveryMethodKey);
		rs.GetValue(_T("po_deliverydate"), m_szDeliveryDate);
		rs.GetValue(_T("po_deliveryaddress"), m_szDeliveryAddress);
		rs.GetValue(_T("po_tax_id"), m_szVATKey);
		rs.GetValue(_T("po_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("po_resource_id"), m_szResourceKey);
		rs.GetValue(_T("po_debitacct"), m_szDebitAcctKey);
		rs.GetValue(_T("po_creditacct"), m_szCreditAcctKey);

		rs.GetValue(_T("po_isconsign"), m_szIsConsign);
		rs.GetValue(_T("po_saleperson_id"), m_szInvoiceTypeKey);
		m_wndLines.Refresh(m_nID);
	//	m_wndVAT.ModifyStyle(WS_TABSTOP, 0);
	}

}

void CPurchaseOrderNonstockDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	m_purchase_orderTbl.SetValue(_T("po_org_id"), pMF->GetModuleID());
	m_purchase_orderTbl.SetValue(_T("po_createdby"), pMF->GetCurrentUser());
	m_purchase_orderTbl.SetValue(_T("po_currency_id"), m_szCurrencyKey);
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;

	m_purchase_orderTbl.SetValue(_T("po_exchangerate"), m_nExchangeRate);
	m_purchase_orderTbl.SetValue(_T("po_partner_type_id"), m_szPartnerType_ID);
	m_purchase_orderTbl.SetValue(_T("po_partner_id"), m_szSupplierKey);
	m_purchase_orderTbl.SetValue(_T("po_partneraddress"), m_szAddress);
	m_purchase_orderTbl.SetValue(_T("po_payment_method_id"), m_szPaymentMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_payment_terms_id"), m_szPaymentTermsKey);
	m_purchase_orderTbl.SetValue(_T("po_delivery_method_id"), m_szDeliveryMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_deliverydate"), m_szDeliveryDate);
	m_purchase_orderTbl.SetValue(_T("po_deliveryaddress"), m_szDeliveryAddress);
	m_purchase_orderTbl.SetValue(_T("po_storage_id"), m_szWarehouseKey);
	m_purchase_orderTbl.SetValue(_T("po_resource_id"), m_szResourceKey);
	m_purchase_orderTbl.SetValue(_T("po_tax_id"), m_szVATKey);
	m_purchase_orderTbl.SetValue(_T("po_debitacct"), m_szDebitAcctKey);
	m_purchase_orderTbl.SetValue(_T("po_creditacct"), m_szCreditAcctKey);

	m_purchase_orderTbl.SetValue(_T("po_doctype"), m_szType);
	m_purchase_orderTbl.SetValue(_T("po_acctdate"), m_szApprovedDate);


	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','N') "));
		m_szOrderNo = pMF->ExecDML(szSQL);

	}
	else if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE po_purchase_order_id=%ld "), m_nID);
		m_purchase_orderTbl.Open(&pMF->m_db, szWhere);
	}
	
	m_purchase_orderTbl.SetValue(_T("po_orderno"), m_szOrderNo);
	m_purchase_orderTbl.SetValue(_T("po_orderdate"), m_szOrderDate);
	m_purchase_orderTbl.SetValue(_T("po_client_id"), _T(""));
	m_purchase_orderTbl.SetValue(_T("po_user_id"), pMF->GetCurrentUser());
	m_purchase_orderTbl.SetValue(_T("po_updatedby"), pMF->GetCurrentUser());
	m_purchase_orderTbl.SetValue(_T("po_updateddate"), pMF->GetSysDateTime());

	m_purchase_orderTbl.SetValue(_T("po_invoiceno"), m_szInvoiceNo);
	m_purchase_orderTbl.SetValue(_T("po_invoicedate"), m_szInvoiceDate);
	m_purchase_orderTbl.SetValue(_T("po_partner_id"), m_szSupplierKey);
	m_purchase_orderTbl.SetValue(_T("po_deliveryby"), m_szDelivererKey);
	m_purchase_orderTbl.SetValue(_T("po_receivedby"), m_szReceiverKey);
	m_purchase_orderTbl.SetValue(_T("po_reference"), m_szReference);
	m_purchase_orderTbl.SetValue(_T("po_description"), m_szDescription);
	m_purchase_orderTbl.SetValue(_T("po_saleperson_id"), m_szInvoiceTypeKey);

	if(pMF->CheckPermission(_T("15.00")))
	{
		m_szApprovedDate = m_szOrderDate;
		m_purchase_orderTbl.SetValue(_T("po_approveddate"), m_szApprovedDate);
		m_purchase_orderTbl.SetValue(_T("po_acctdate"), m_szApprovedDate);
		
	}


}

void CPurchaseOrderNonstockDialog::SetDefaultValues(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_szOrderNo.Empty();
	m_szOrderDate.Empty();	
	m_szSupplierKey.Empty();
	//m_szDelivererKey.Empty();
	//m_szReceiverKey.Empty();
	m_szAddress.Empty();
	m_szDescription.Empty();
	m_szReference.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szContractPkgKey.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szDeliveryMethodKey.Empty();
	m_szDeliveryDate.Empty();
	m_szDeliveryAddress.Empty();

	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
	m_szVATKey = _T("5");
	m_nTotalLines = 0;
	GetDefaultPerson();
}

int CPurchaseOrderNonstockDialog::SetMode(int nMode){
	
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL;
		CString tmpStr;
 		CRecord rs(&pMF->m_db); 

		

  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','N') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
			m_szDeliveryDate = m_szOrderDate;
			m_szInvoiceDate = m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			if(m_szWarehouseKey.IsEmpty())
				m_wndWarehouse.SetFocus();
			else
				m_wndSupplier.SetFocus();
			m_wndLines.Refresh(-1);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			if (pMF->CheckPermission(_T("01.07")))
				m_wndSupplier.SetFocus();
			else
				m_wndDeliverer.SetFocus();
			m_wndVAT.EnableWindow(FALSE);
			if(pMF->CheckPermission(_T("15.00")))
			{
				m_wndOrderDate.EnableWindow(TRUE);
			}
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
 			break; 
 		};


		if(!pMF->IsMultipleCurrency()){
			m_nExchangeRate = 1;
		}
		
		if(m_szStatus != _T("O"))
		{
			m_wndPost.EnableWindow(FALSE);
//			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);

			m_wndWarehouse.EnableWindow(FALSE);
			if (!pMF->CheckPermission(_T("01.07")))
				m_wndSupplier.EnableWindow(FALSE);
			m_wndResource.EnableWindow(FALSE);
			m_wndVAT.EnableWindow(FALSE);
		}

		m_wndClose.EnableWindow(TRUE);

		if(m_bNonStock){
			m_wndWarehouse.EnableWindow(FALSE);
			m_szWarehouseKey.Empty();
		}


 		UpdateData(FALSE); 
		if(pMF->GetModuleID() == _T("GLS"))
		{
			m_wndContractPkg.EnableWindow(false);
			m_wndContractPkg.ShowWindow(SW_HIDE);
		}
		else
		m_wndContractPkg.EnableWindow(true);
 		return nOldMode; 
}

void CPurchaseOrderNonstockDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonstockDialog::OnWarehouseSelendok(){
	UpdateData();
	GetDefaultPerson();
	UpdateData(0);
	 
}

/*void CPurchaseOrderNonstockDialog::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(m_bNonStock){
		return 0;
	}
	else
	{
		//szWhere.Format(_T(" and msl_type ='A' "));
		if(pMF->GetModuleID() == _T("GLS"))
			szWhere.AppendFormat(_T(" and msl_org_id='GLS' "));
		return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey, szWhere);
	}
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseKey
};
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPurchaseOrderNonstockDialog::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderNonstockDialog::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonstockDialog::OnResourceSelendok(){
	 
}

/*void CPurchaseOrderNonstockDialog::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnResourceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadResourceList(&m_wndResource, m_szResourceKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResource.IsSearchKey() && !m_szResourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResourceKey
};
	m_wndResource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPurchaseOrderNonstockDialog::OnResourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderNonstockDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonstockDialog::OnSupplierSelendok(){
	 
}

/*void CPurchaseOrderNonstockDialog::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and adp_issupplier='Y' "));
	if (m_szStatus == _T("A")) 
		pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey, _T(""), true);
	else	
		pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey, _T(""));
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPurchaseOrderNonstockDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderNonstockDialog::OnDelivererChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnDelivererSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnDelivererKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnDelivererCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnReceiverChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnReceiverSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnReceiverKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnReceiverCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnReferenceChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnReferenceSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnReferenceKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnReferenceCheckValue(){
	return 0;
} 
void CPurchaseOrderNonstockDialog::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderNonstockDialog::OnInvoiceTypeSelendok(){
	 
}
/*void CPurchaseOrderNonstockDialog::OnInvoiceTypeSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnInvoiceTypeKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnInvoiceTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndInvoiceType.AddItems(_T("I"), _T("N\x1ED9i \x62\x1ED9"), NULL);
	m_wndInvoiceType.AddItems(_T("P"), _T("Th\x61nh to\xE1n"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceTypeKey
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderNonstockDialog::OnInvoiceTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CPurchaseOrderNonstockDialog::OnContractPkgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderNonstockDialog::OnContractPkgSelendok(){
	UpdateData(TRUE);	 
}
/*void CPurchaseOrderNonstockDialog::OnContractPkgSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnContractPkgKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnContractPkgLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadContractPackageList(&m_wndContractPkg, m_szContractPkgKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContractPkg.IsSearchKey() && !m_szContractPkgKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractPkgKey
};
	m_wndContractPkg.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContractPkg.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderNonstockDialog::OnContractPkgAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderNonstockDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnOrderNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and po_purchase_order_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and date_part('year', sysdate)= date_part('year', po_orderdate) "));

	szSQL.Format(_T("SELECT count(*) FROM purchase_order WHERE po_orderno='%s'  %s "), m_szOrderNo, szWhere);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnInvoiceNoChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnInvoiceNoKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnInvoiceNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and po_purchase_order_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and date_part('year', sysdate)=date_part('year', po_orderdate)"));
	szWhere.AppendFormat(_T(" and po_partner_id='%s' "), m_szSupplierKey);
	szWhere.AppendFormat(_T(" and po_org_id='%s' "), pMF->GetModuleID());

	szSQL.Format(_T("SELECT count(*) FROM purchase_order WHERE po_invoiceno='%s'  %s "), m_szInvoiceNo, szWhere);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("S\x1ED1 h\xF3\x61 \x111\x1A1n \x111\xE3 \x111\x1B0\x1EE3\x63 nh\x1EADp trong n\x103m"));
	}
	return 0;

} 
/*void CPurchaseOrderNonstockDialog::OnInvoiceDateChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnInvoiceDateKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
void CPurchaseOrderNonstockDialog::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonstockDialog::OnVATSelendok(){
	 
}

/*void CPurchaseOrderNonstockDialog::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderNonstockDialog::OnVATKillfocus(){
	
}*/
long CPurchaseOrderNonstockDialog::OnVATLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndVAT, m_szVATKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVAT.IsSearchKey() && !m_szVATKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVATKey
};
	m_wndVAT.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVAT.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPurchaseOrderNonstockDialog::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderNonstockDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
/*void CPurchaseOrderNonstockDialog::OnTotalLinesChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTotalLinesSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTotalLinesKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnTotalLinesCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnNetAmountChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnNetAmountKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnNetAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnTaxesAmountChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonstockDialog::OnTotalAmountChange(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonstockDialog::OnTotalAmountKillfocus(){
	
} */
int CPurchaseOrderNonstockDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CPurchaseOrderNonstockDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.OnListAddItem();
	
}
 
void CPurchaseOrderNonstockDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPurchaseOrderNonstockDialog();
}
 
void CPurchaseOrderNonstockDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPurchaseOrderNonstockDialog();
}
 
void CPurchaseOrderNonstockDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderNonstockDialog();
}
 
void CPurchaseOrderNonstockDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderNonstockDialog();
}
 
void CPurchaseOrderNonstockDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPurchaseOrderNonstockDialog();
}
 
void CPurchaseOrderNonstockDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.05")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	CPrintForms printer;
	CString szVoucherNo = m_szOrderNo;
	CString szLabel;
	CString szSQL;
	
	CRecord rs(&pMF->m_db);

	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	//menu.AppendMenu(MF_BYPOSITION, 1, _T("Print I/E Order"));
	//menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Test Report"));
	//menu.AppendMenu(MF_BYPOSITION, 3, _T("Print Purchase List"));
	//menu.AppendMenu(MF_BYPOSITION, 4, _T("Print Material Report"));
	//menu.AppendMenu(MF_BYPOSITION, 5, _T("Print Material Remain"));
	//menu.AppendMenu(MF_BYPOSITION, 6, _T("Print Distribution"));
	TranslateString(_T("Print Purchase Order"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 7, szLabel);
	TranslateString(_T("Print Checkin"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 8, szLabel);
	if(pMF->GetModuleID() == _T("MA"))
	{
		
		szSQL.Format(_T("SELECT count(*) FROM purchase_orderline WHERE pol_purchase_order_id=%ld and pol_isauto='Y'"), m_nID);
		
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			TranslateString(_T("Print Export Order"), szLabel);
			menu.AppendMenu(MF_BYPOSITION, 9, szLabel);
	
		}

	}
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		printer.PrintIESheet(szVoucherNo, _T("I"), m_szOrderDate.Left(10));
		break;
	case 2:
		printer.PrintTestReport();
		break;
	case 3:
		printer.PrintPurchaseList();
		break;
	case 4:
		printer.PrintMaterialReport();
		break;
	case 5:
		printer.PrintMaterialRemain();
		break;
	case 6:
		printer.PrintDistribution();
		break;
	case 7:
		printer.PrintPurchaseOrder(m_nID);
		break;
	case 8:
		printer.PrintCheckinPurchaseOrder(m_nID);
		break;
	case 9:
		{
			szSQL.Format(_T("SELECT mt_transaction_id FROM m_transaction WHERE mt_expense_id=%ld "), m_nID);
			rs.ExecSQL(szSQL);
			long nTransactionID;
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("mt_transaction_id"), nTransactionID);
				printer.PrintStorageExportOrder2(nTransactionID);
				rs.MoveNext();
			}
		
		}
		break;
	}
}
 
void CPurchaseOrderNonstockDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDNO)
		return;

	szSQL.Format(_T("PURCHASE_ORDER_APPROVAL(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		RecalcAmount();
		if(m_szStatus != _T("O")){
			m_wndPost.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			m_wndAdd.SetFocus();
		}
		m_wndLines.Refresh(m_nID);
	}
	else
	{
		ShowMessageBox(_T("Cannot post purchase order"));
	}
}
 
void CPurchaseOrderNonstockDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
}
 
int CPurchaseOrderNonstockDialog::OnAddPurchaseOrderNonstockDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderNonstockDialog::OnEditPurchaseOrderNonstockDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderNonstockDialog::OnDeletePurchaseOrderNonstockDialog(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("01.03")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}

 	CString szSQL; 
	
 	if(ShowMessageBox(_T("Do you want to delete order?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("PURCHASE_ORDER_DELETE(%ld, '%s', '%s') "), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_bRefresh = true;
 		OnDiscardPurchaseOrderNonstockDialog(); 
 	}
	else
	{
		ShowMessageBox(_T("Can not delete order"));
	}
	return 0;
}
int CPurchaseOrderNonstockDialog::OnSavePurchaseOrderNonstockDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
//	m_wndOrderDate.SetMax((LPCTSTR)pMF->GetSysDateTime());
 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("purchase_order_create(%s) "), m_purchase_orderTbl.FormatSQL());
	else
		szSQL.Format(_T("purchase_order_update(%s) "),  m_purchase_orderTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("select purchase_order_id_asq.nextval from dual"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = (long)rs.GetDoubleValue();
		m_purchase_orderTbl.SetValue(_T("po_purchase_order_id"), m_nID);
		szSQL.Format(_T("%s"), m_purchase_orderTbl.GetInsertSQL());
		
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE po_purchase_order_id=%ld"), m_nID);
		if(pMF->CheckPermission(_T("15.00")))
		{
			szSQL = m_purchase_orderTbl.GetUpdateSQL(_T("po_purchase_order_id,po_createddate,po_createdby,po_storage_id,po_resource,po_tax_id,po_orderno"));
			
		}
		else
		{
			szSQL = m_purchase_orderTbl.GetUpdateSQL(_T("po_purchase_order_id,po_createddate,po_createdby,po_storage_id,po_resource,po_tax_id,po_orderno,po_orderdate"));
		}
		szSQL.AppendFormat(_T(" %s "), szWhere);
	}
//Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		m_bRefresh = true;

		if(GetMode() == VM_EDIT){

			if(pMF->GetModuleID() == _T("MA") && pMF->CheckPermission(_T("15.00")))
			{
				CString szSQL;
				CRecord rs(&pMF->m_db);
				szSQL.Format(_T(" SELECT DISTINCT pol_transaction_id AS transaction_id") \
				_T(" FROM purchase_orderline2") \
				_T(" WHERE pol_purchase_order_id=%ld"), m_nID);
				rs.ExecSQL(szSQL);
				while(!rs.IsEOF())
				{
					long nTransactionId;
					rs.GetValue(_T("transaction_id"), nTransactionId);
					szSQL.Format(_T("UPDATE m_transaction ") \
						_T(" SET mt_orderdate=TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'), mt_approveddate=TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') ") \
						_T(" WHERE mt_transaction_id=%ld"), m_szApprovedDate, m_szApprovedDate, nTransactionId);
					pMF->ExecSQL(szSQL);
					rs.MoveNext();
				}
				CString szDesc;
				szDesc.Format(_T("S?a hóa don s? [%s] t? ngày [%s]->[%s]"), m_szOrderNo, _szApprovedDate, m_szApprovedDate);
				pMF->SystemLog(_T("HOA_DON_NHAP"), szDesc);
			}

			SetMode(VM_VIEW);

		}
		else{
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
			SetMode(VM_VIEW);
			OnAddLineSelect();
		}
		return 1;
 	} 
 	return -1; 

}
int CPurchaseOrderNonstockDialog::OnDiscardPurchaseOrderNonstockDialog(){
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
int CPurchaseOrderNonstockDialog::OnPurchaseOrderNonstockDialogListLoadData(){
	return 0;
}

void CPurchaseOrderNonstockDialog::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}

void CPurchaseOrderNonstockDialog::RecalcAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT po_status, po_netamount, po_taxamount, po_disamount, po_totalamount, po_exchangeamount ") \
		_T("FROM purchase_order ") \
		_T("WHERE po_Purchase_order_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_netamount"), m_nNetAmount);
		rs.GetValue(_T("po_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("po_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("po_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("po_status"), m_szStatus);

	}
	else
	{
		m_nNetAmount = 0;
		m_nTaxesAmount = 0;
		m_nTotalAmount = 0;
		m_nTotalExchangeAmount = 0;
		m_szStatus = _T("O");
	}
	UpdateData(FALSE);
}


BOOL CPurchaseOrderNonstockDialog::PreTranslateMessage(MSG* pMsg){
	if(pMsg->message == WM_KEYDOWN){
		if(pMsg->wParam == VK_F3){
			CPrintForms printer;
			printer.PrintPurchaseOrder(m_nID);
			return TRUE;
		}
		if(pMsg->wParam == VK_F2)
		{
			OnPostSelect();
			return TRUE;	
		}
		
	}


	return CGuiDialog::PreTranslateMessage(pMsg);
}

bool CPurchaseOrderNonstockDialog::IsConsign(){
	if(m_szIsConsign == _T("Y"))
		return true;
	return false;
}

void CPurchaseOrderNonstockDialog::Refresh(){
	GetDataToScreen();
	RecalcAmount();
	SetMode(VM_VIEW);
	
}

void CPurchaseOrderNonstockDialog::GetDefaultPerson(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_szWarehouseKey.IsEmpty())
		szSQL.Format(_T("SELECT (select fpf_title from fm_print_footer where fpf_position = 'ng_giao' and fpf_module_id = '%s' and rownum < 2) nguoi_giao, ") \
					_T(" (select fpf_title from fm_print_footer where fpf_position = 'ng_nhan' and fpf_module_id = '%s' and rownum < 2) nguoi_nhan FROM dual")
					, pMF->GetModuleID(), pMF->GetModuleID());
	else
		szSQL.Format(_T("SELECT (select fpf_title from fm_print_footer where fpf_position = 'ng_giao' and fpf_module_id = '%s' and rownum < 2 and decode(msl_category, 'I', 'BH', 'DV') = fpf_type) nguoi_giao, ") \
					_T(" (select fpf_title from fm_print_footer where fpf_position = 'ng_nhan' and fpf_module_id = '%s' and rownum < 2 and decode(msl_category, 'I', 'BH', 'DV') = fpf_type) nguoi_nhan FROM m_storagelist where msl_storage_id = %s")
					, pMF->GetModuleID(), pMF->GetModuleID(), m_szWarehouseKey);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("nguoi_giao"), m_szDelivererKey);
	rs.GetValue(_T("nguoi_nhan"), m_szReceiverKey);
	
}

long CPurchaseOrderNonstockDialog::OnDelivererLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey);
}

long CPurchaseOrderNonstockDialog::OnReceiverLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey);
}