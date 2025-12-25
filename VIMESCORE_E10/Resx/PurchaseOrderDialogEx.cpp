#include "PurchaseOrderDialogEx.h"
#include "MainFrm.h"
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnReferenceCheckValue();
} 
static void _OnContractPkgSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnContractPkgSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractPkgSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractPkgSelendok();
}
/*static void _OnContractPkgSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractPkgKillfocus();
}*/
/*static void _OnContractPkgKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractPkgKillfocus();
}*/
static long _OnContractPkgLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnContractPkgLoadData();
}
/*static void _OnContractPkgAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractPkgAddNew();
}*/
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnContractAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATAddNew();
}*/
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseOrderDialogEx*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnAddPurchaseOrderDialogEx();
} 
static int _OnEditPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnEditPurchaseOrderDialogEx();
} 
static int _OnDeletePurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnDeletePurchaseOrderDialogEx();
} 
static int _OnSavePurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnSavePurchaseOrderDialogEx();
} 
static int _OnCancelPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnCancelPurchaseOrderDialogEx();
} 
CPurchaseOrderDialogEx::CPurchaseOrderDialogEx(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CPurchaseOrderDialogEx::~CPurchaseOrderDialogEx(){
}
void CPurchaseOrderDialogEx::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 210);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 210);
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
	m_wndReference.Create(this,165, 150, 680, 175); 
	m_wndContractPkgLabel.Create(this, _T("Contract Pkg"), 11, 180, 161, 205);
	m_wndContractPkg.Create(this,166, 180, 366, 205); 
	m_wndContractLabel.Create(this, _T("Contract"), 371, 180, 476, 205);
	m_wndContract.Create(this,481, 180, 681, 205); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 695, 60, 845, 85);
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 695, 30, 845, 55);
	m_wndInvoiceType.Create(this,850, 30, 1000, 55); 
	m_wndOrderNo.Create(this,850, 60, 1000, 85); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 695, 90, 845, 115);
	m_wndOrderDate.Create(this,850, 90, 1000, 115); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 695, 120, 845, 145);
	m_wndInvoiceNo.Create(this,850, 120, 1000, 145); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 695, 150, 845, 175);
	m_wndInvoiceDate.Create(this,850, 150, 1000, 175); 
	m_wndVATLabel.Create(this, _T("VAT"), 696, 180, 846, 205);
	m_wndVAT.Create(this,851, 180, 1001, 205); 
	m_wndTab.Create(this,5, 215, 1005, 545); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 10, 550, 135, 575);
	m_wndTotalLines.Create(this,140, 550, 225, 575); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 230, 550, 355, 575);
	m_wndNetAmount.Create(this,360, 550, 485, 575); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 490, 550, 615, 575);
	m_wndTaxesAmount.Create(this,620, 550, 745, 575); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 750, 550, 875, 575);
	m_wndTotalAmount.Create(this,880, 550, 1005, 575); 
	m_wndAddLine.Create(this, _T("Add Line"), 5, 580, 95, 605);
	m_wndAdd.Create(this, _T("&Add"), 250, 580, 340, 605);
	m_wndEdit.Create(this, _T("&Edit"), 345, 580, 435, 605);
	m_wndDelete.Create(this, _T("&Delete"), 440, 580, 530, 605);
	m_wndSave.Create(this, _T("&Save"), 535, 580, 625, 605);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 580, 720, 605);
	m_wndPrint.Create(this, _T("&Print-F3"), 725, 580, 815, 605);
	m_wndPost.Create(this, _T("&Import-F2"), 820, 580, 910, 605);
	m_wndClose.Create(this, _T("&Close"), 915, 580, 1005, 605);

}
void CPurchaseOrderDialogEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(1024);
	m_wndResource.SetCheckValue(true);
	m_wndResource.LimitText(1024);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndDeliverer.SetCheckValue(true);
	m_wndDeliverer.LimitText(1024);
	m_wndReceiver.SetCheckValue(true);
	m_wndReceiver.LimitText(1024);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndReference.SetLimitText(1024);
	m_wndReference.SetCheckValue(true);
	m_wndContractPkg.SetCheckValue(true);
	m_wndContractPkg.LimitText(1024);
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(35);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(1024);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(1024);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndVAT.SetCheckValue(true);
	m_wndVAT.LimitText(1024);
	m_wndTotalLines.SetLimitText(1024);
	m_wndTotalLines.SetCheckValue(true);
	m_wndNetAmount.SetLimitText(1024);
	m_wndNetAmount.SetCheckValue(true);
	m_wndTaxesAmount.SetLimitText(1024);
	m_wndTaxesAmount.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);














	m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);





}
void CPurchaseOrderDialogEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndContractPkg.SetEvent(WE_SELENDOK, _OnContractPkgSelendokFnc);
	//m_wndContractPkg.SetEvent(WE_SETFOCUS, _OnContractPkgSetfocusFnc);
	//m_wndContractPkg.SetEvent(WE_KILLFOCUS, _OnContractPkgKillfocusFnc);
	m_wndContractPkg.SetEvent(WE_SELCHANGE, _OnContractPkgSelectChangeFnc);
	m_wndContractPkg.SetEvent(WE_LOADDATA, _OnContractPkgLoadDataFnc);
	//m_wndContractPkg.SetEvent(WE_ADDNEW, _OnContractPkgAddNewFnc);
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
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
	SetMode(VM_NONE);

}
void CPurchaseOrderDialogEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_TextEx(pDX, m_wndContractPkg.GetDlgCtrlID(), m_szContractPkgKey);
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
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
void CPurchaseOrderDialogEx::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Warehouse")] =  m_szWarehouseKey;
	m_jData[_T("Resource")] =  m_szResourceKey;
	m_jData[_T("Supplier")] =  m_szSupplierKey;
	m_jData[_T("Deliverer")] =  m_szDelivererKey;
	m_jData[_T("Receiver")] =  m_szReceiverKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Reference")] =  m_szReference;
	m_jData[_T("ContractPkg")] =  m_szContractPkgKey;
	m_jData[_T("Contract")] =  m_szContractKey;
	m_jData[_T("InvoiceType")] =  m_szInvoiceTypeKey;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("InvoiceNo")] =  m_szInvoiceNo;
	m_jData[_T("InvoiceDate")] =  m_szInvoiceDate;
	m_jData[_T("VAT")] =  m_szVATKey;
	m_jData[_T("TotalLines")] =  m_nTotalLines;
	m_jData[_T("NetAmount")] =  m_nNetAmount;
	m_jData[_T("TaxesAmount")] =  m_nTaxesAmount;
	m_jData[_T("TotalAmount")] =  m_nTotalAmount;
	}
	else
	{
			
	m_jData[_T("Warehouse")].GetValue(m_szWarehouseKey);
	m_jData[_T("Resource")].GetValue(m_szResourceKey);
	m_jData[_T("Supplier")].GetValue(m_szSupplierKey);
	m_jData[_T("Deliverer")].GetValue(m_szDelivererKey);
	m_jData[_T("Receiver")].GetValue(m_szReceiverKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Reference")].GetValue(m_szReference);
	m_jData[_T("ContractPkg")].GetValue(m_szContractPkgKey);
	m_jData[_T("Contract")].GetValue(m_szContractKey);
	m_jData[_T("InvoiceType")].GetValue(m_szInvoiceTypeKey);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("InvoiceNo")].GetValue(m_szInvoiceNo);
	m_jData[_T("InvoiceDate")].GetValue(m_szInvoiceDate);
	m_jData[_T("VAT")].GetValue(m_szVATKey);
	m_jData[_T("TotalLines")].GetValue(m_nTotalLines);
	m_jData[_T("NetAmount")].GetValue(m_nNetAmount);
	m_jData[_T("TaxesAmount")].GetValue(m_nTaxesAmount);
	m_jData[_T("TotalAmount")].GetValue(m_nTotalAmount);
	}

}
void CPurchaseOrderDialogEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderDialogEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseOrderDialogEx::SetDefaultValues(){

	m_szWarehouseKey.Empty();
	m_szResourceKey.Empty();
	m_szSupplierKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szReference.Empty();
	m_szContractPkgKey.Empty();
	m_szContractKey.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szVATKey.Empty();
	m_nTotalLines=0;
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;

}
int CPurchaseOrderDialogEx::SetMode(int nMode){
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
void CPurchaseOrderDialogEx::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnWarehouseSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnResourceSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnResourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnResourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnSupplierSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnSupplierLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnDelivererSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnDelivererSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnDelivererKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnDelivererLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliverer.IsSearchKey() && !m_szDelivererKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDelivererKey
};
	m_wndDeliverer.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliverer.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnDelivererAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnReceiverSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnReceiverSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnReceiverKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnReceiverLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReceiver.IsSearchKey() && !m_szReceiverKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReceiverKey
};
	m_wndReceiver.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReceiver.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnReceiverAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialogEx::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnReferenceChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnReferenceSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnReferenceKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnReferenceCheckValue(){
	return 0;
} 
void CPurchaseOrderDialogEx::OnContractPkgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnContractPkgSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnContractPkgSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnContractPkgKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnContractPkgLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnContractPkgAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnContractSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnContractSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnContractKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnContractLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnContractAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnInvoiceTypeSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnInvoiceTypeSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnInvoiceTypeKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnInvoiceTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPurchaseOrderDialogEx::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialogEx::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnOrderNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnInvoiceNoChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnInvoiceNoSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnInvoiceNoKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnInvoiceDateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnInvoiceDateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnInvoiceDateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnInvoiceDateCheckValue(){
	return 0;
} 
void CPurchaseOrderDialogEx::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnVATSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnVATKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnVATLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnVATAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CPurchaseOrderDialogEx::OnTotalLinesChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalLinesSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalLinesKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnNetAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnNetAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnNetAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnTaxesAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTaxesAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnTotalAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTotalAmountCheckValue(){
	return 0;
} 
void CPurchaseOrderDialogEx::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderDialogEx::OnAddPurchaseOrderDialogEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderDialogEx::OnEditPurchaseOrderDialogEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderDialogEx::OnDeletePurchaseOrderDialogEx(){
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
 		OnCancelPurchaseOrderDialogEx();
 	}
	return 0;
}
int CPurchaseOrderDialogEx::OnSavePurchaseOrderDialogEx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPurchaseOrderDialogExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderDialogEx::OnCancelPurchaseOrderDialogEx(){
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
int CPurchaseOrderDialogEx::OnPurchaseOrderDialogExListLoadData(){
	return 0;
}
