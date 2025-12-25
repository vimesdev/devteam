#include "StorageMedicalCabinetLineReplateDialog.h"
#include "MainFrame_E10.h"
#include "StorageMedicalCabinetLines.h"
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetLineReplateDialog* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUomCheckValue();
} 
/*static void _OnManufactureChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureChange();
} */
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureSetfocus();} */ 
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureKillfocus();
} */
static int _OnManufactureCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetLineReplateDialog *pVw = (CStorageMedicalCabinetLineReplateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetLineReplateDialog *pVw = (CStorageMedicalCabinetLineReplateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnProductNewSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetLineReplateDialog* )pWnd)->OnProductNewSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductNewSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductNewSelendok();
}
/*static void _OnProductNewSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductNewKillfocus();
}*/
/*static void _OnProductNewKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductNewKillfocus();
}*/
static long _OnProductNewLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductNewLoadData();
}
/*static void _OnProductNewAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnProductNewAddNew();
}*/
/*static void _OnUnitOfMeasureChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitOfMeasureChange();
} */
/*static void _OnUnitOfMeasureSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitOfMeasureSetfocus();} */ 
/*static void _OnUnitOfMeasureKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitOfMeasureKillfocus();
} */
static int _OnUnitOfMeasureCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitOfMeasureCheckValue();
} 
/*static void _OnManufactureNewChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureNewChange();
} */
/*static void _OnManufactureNewSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureNewSetfocus();} */ 
/*static void _OnManufactureNewKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureNewKillfocus();
} */
static int _OnManufactureNewCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnManufactureNewCheckValue();
} 
/*static void _OnExprDateNewChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateNewChange();
} */
/*static void _OnExprDateNewSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateNewSetfocus();} */ 
/*static void _OnExprDateNewKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateNewKillfocus();
} */
static int _OnExprDateNewCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnExprDateNewCheckValue();
} 
/*static void _OnLotNoNewChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoNewChange();
} */
/*static void _OnLotNoNewSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoNewSetfocus();} */ 
/*static void _OnLotNoNewKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoNewKillfocus();
} */
static int _OnLotNoNewCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnLotNoNewCheckValue();
} 
/*static void _OnUnitPriceNewChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceNewChange();
} */
/*static void _OnUnitPriceNewSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceNewSetfocus();} */ 
/*static void _OnUnitPriceNewKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceNewKillfocus();
} */
static int _OnUnitPriceNewCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnUnitPriceNewCheckValue();
} 
/*static void _OnOrderQtyChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnOrderQtyChange();
} */
/*static void _OnOrderQtySetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnOrderQtySetfocus();} */ 
/*static void _OnOrderQtyKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnOrderQtyKillfocus();
} */
static int _OnOrderQtyCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLineReplateDialog *)pWnd)->OnOrderQtyCheckValue();
} 
static int _OnAddStorageMedicalCabinetLineReplateDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLineReplateDialog*)pWnd)->OnAddStorageMedicalCabinetLineReplateDialog();
} 
static int _OnEditStorageMedicalCabinetLineReplateDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLineReplateDialog*)pWnd)->OnEditStorageMedicalCabinetLineReplateDialog();
} 
static int _OnDeleteStorageMedicalCabinetLineReplateDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLineReplateDialog*)pWnd)->OnDeleteStorageMedicalCabinetLineReplateDialog();
} 
static int _OnSaveStorageMedicalCabinetLineReplateDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLineReplateDialog*)pWnd)->OnSaveStorageMedicalCabinetLineReplateDialog();
} 
static int _OnCancelStorageMedicalCabinetLineReplateDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLineReplateDialog*)pWnd)->OnCancelStorageMedicalCabinetLineReplateDialog();
} 
CStorageMedicalCabinetLineReplateDialog::CStorageMedicalCabinetLineReplateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 675;
	m_nDlgHeight = 280;
	SetDefaultValues();
}
CStorageMedicalCabinetLineReplateDialog::~CStorageMedicalCabinetLineReplateDialog(){
}
void CStorageMedicalCabinetLineReplateDialog::OnCreateComponents(){
	m_wndInformationitemsorder.Create(this, _T("Information Items Order"), 5, 5, 665, 120);
	m_wndInformationItemsReplate.Create(this, _T("Information Items Replate"), 5, 125, 665, 240);
	m_wndProductLabel.Create(this, _T("Product"), 10, 30, 110, 55);
	m_wndProduct.Create(this,115, 30, 440, 55); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 445, 30, 545, 55);
	m_wndUom.Create(this,550, 30, 660, 55); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 10, 90, 110, 115);
	m_wndManufacture.Create(this,115, 90, 440, 115); 
	m_wndExprDateLabel.Create(this, _T("Expr Date"), 10, 60, 110, 85);
	m_wndExprDate.Create(this,115, 60, 215, 85); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 220, 60, 320, 85);
	m_wndLotNo.Create(this,325, 60, 440, 85); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 445, 60, 545, 85);
	m_wndUnitPrice.Create(this,550, 60, 660, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 445, 90, 545, 115);
	m_wndQuantity.Create(this,550, 90, 659, 115); 
	
	m_wndProductNewLabel.Create(this, _T("Product"), 10, 150, 110, 175);
	m_wndProductNew.Create(this,115, 150, 440, 175); 
	m_wndUnitOfMeasureLabel.Create(this, _T("Unit of Measure"), 445, 150, 545, 175);
	m_wndUnitOfMeasure.Create(this,550, 150, 660, 175); 
	m_wndManufactureNewLabel.Create(this, _T("Manufacture"), 10, 210, 110, 235);
	m_wndManufactureNew.Create(this,115, 210, 440, 235); 
	m_wndExprDateNewLabel.Create(this, _T("Expr Date"), 10, 180, 110, 205);
	m_wndExprDateNew.Create(this,115, 180, 215, 205); 
	m_wndLotNoNewLabel.Create(this, _T("Lot No"), 220, 180, 300, 205);
	m_wndLotNoNew.Create(this,305, 180, 439, 205); 
	m_wndUnitPriceNewLabel.Create(this, _T("Unit Price"), 444, 180, 544, 205);
	m_wndUnitPriceNew.Create(this,549, 180, 659, 205); 
	m_wndOrderQtyLabel.Create(this, _T("Order Qty"), 445, 210, 545, 235);
	m_wndOrderQty.Create(this,550, 210, 660, 235); 
	m_wndSave.Create(this, _T("&Save"), 485, 245, 570, 270);
	m_wndClose.Create(this, _T("X"), 575, 245, 660, 270);

}
void CStorageMedicalCabinetLineReplateDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(1024);
	m_wndUom.SetLimitText(1024);
	m_wndUom.SetCheckValue(true);
	m_wndManufacture.SetLimitText(1024);
	m_wndManufacture.SetCheckValue(true);
	m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDate.SetCheckValue(true);
	m_wndLotNo.SetLimitText(1024);
	m_wndLotNo.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndProductNew.SetCheckValue(true);
	m_wndProductNew.LimitText(35);
	m_wndUnitOfMeasure.SetLimitText(35);
	m_wndUnitOfMeasure.SetCheckValue(true);
	m_wndManufactureNew.SetLimitText(35);
	m_wndManufactureNew.SetCheckValue(true);
	m_wndExprDateNew.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDateNew.SetCheckValue(true);
	m_wndLotNoNew.SetLimitText(35);
	m_wndLotNoNew.SetCheckValue(true);
	m_wndUnitPriceNew.SetLimitText(16);
	m_wndUnitPriceNew.SetCheckValue(true);
	m_wndOrderQty.SetLimitText(16);
	m_wndOrderQty.SetCheckValue(true);

	m_wndProductNew.InsertColumn(0, _T(""), CFMT_NUMBER, 120); //ProductItemID
	m_wndProductNew.InsertColumn(1, _T(""), CFMT_NUMBER, 100); //Product_ID
	m_wndProductNew.InsertColumn(2, _T("ID"), CFMT_NUMBER, 80);
	m_wndProductNew.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
	m_wndProductNew.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndProductNew.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
	m_wndProductNew.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndProductNew.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
	m_wndProductNew.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
	m_wndProductNew.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndProductNew.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
	m_wndProductNew.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 150);
	m_wndProductNew.Format(11, 3, 5);	

	m_transactionlineTbl.AddField(_T("MTL_TRANSACTION_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTIONLINE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_ORG_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_USER_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_TO_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ITEM_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_QTYORDER"), dfDouble); 

}
void CStorageMedicalCabinetLineReplateDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetEvent(WE_SELENDOK, _OnProductSelendokFnc);
	//m_wndProduct.SetEvent(WE_SETFOCUS, _OnProductSetfocusFnc);
	//m_wndProduct.SetEvent(WE_KILLFOCUS, _OnProductKillfocusFnc);
	m_wndProduct.SetEvent(WE_SELCHANGE, _OnProductSelectChangeFnc);
	m_wndProduct.SetEvent(WE_LOADDATA, _OnProductLoadDataFnc);
	//m_wndProduct.SetEvent(WE_ADDNEW, _OnProductAddNewFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndManufacture.SetEvent(WE_CHANGE, _OnManufactureChangeFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_CHECKVALUE, _OnManufactureCheckValueFnc);
	//m_wndExprDate.SetEvent(WE_CHANGE, _OnExprDateChangeFnc);
	//m_wndExprDate.SetEvent(WE_SETFOCUS, _OnExprDateSetfocusFnc);
	//m_wndExprDate.SetEvent(WE_KILLFOCUS, _OnExprDateKillfocusFnc);
	m_wndExprDate.SetEvent(WE_CHECKVALUE, _OnExprDateCheckValueFnc);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndProductNew.SetEvent(WE_SELENDOK, _OnProductNewSelendokFnc);
	//m_wndProductNew.SetEvent(WE_SETFOCUS, _OnProductNewSetfocusFnc);
	//m_wndProductNew.SetEvent(WE_KILLFOCUS, _OnProductNewKillfocusFnc);
	m_wndProductNew.SetEvent(WE_SELCHANGE, _OnProductNewSelectChangeFnc);
	m_wndProductNew.SetEvent(WE_LOADDATA, _OnProductNewLoadDataFnc);
	//m_wndProductNew.SetEvent(WE_ADDNEW, _OnProductNewAddNewFnc);
	//m_wndUnitOfMeasure.SetEvent(WE_CHANGE, _OnUnitOfMeasureChangeFnc);
	//m_wndUnitOfMeasure.SetEvent(WE_SETFOCUS, _OnUnitOfMeasureSetfocusFnc);
	//m_wndUnitOfMeasure.SetEvent(WE_KILLFOCUS, _OnUnitOfMeasureKillfocusFnc);
	m_wndUnitOfMeasure.SetEvent(WE_CHECKVALUE, _OnUnitOfMeasureCheckValueFnc);
	//m_wndManufactureNew.SetEvent(WE_CHANGE, _OnManufactureNewChangeFnc);
	//m_wndManufactureNew.SetEvent(WE_SETFOCUS, _OnManufactureNewSetfocusFnc);
	//m_wndManufactureNew.SetEvent(WE_KILLFOCUS, _OnManufactureNewKillfocusFnc);
	m_wndManufactureNew.SetEvent(WE_CHECKVALUE, _OnManufactureNewCheckValueFnc);
	//m_wndExprDateNew.SetEvent(WE_CHANGE, _OnExprDateNewChangeFnc);
	//m_wndExprDateNew.SetEvent(WE_SETFOCUS, _OnExprDateNewSetfocusFnc);
	//m_wndExprDateNew.SetEvent(WE_KILLFOCUS, _OnExprDateNewKillfocusFnc);
	m_wndExprDateNew.SetEvent(WE_CHECKVALUE, _OnExprDateNewCheckValueFnc);
	//m_wndLotNoNew.SetEvent(WE_CHANGE, _OnLotNoNewChangeFnc);
	//m_wndLotNoNew.SetEvent(WE_SETFOCUS, _OnLotNoNewSetfocusFnc);
	//m_wndLotNoNew.SetEvent(WE_KILLFOCUS, _OnLotNoNewKillfocusFnc);
	m_wndLotNoNew.SetEvent(WE_CHECKVALUE, _OnLotNoNewCheckValueFnc);
	//m_wndUnitPriceNew.SetEvent(WE_CHANGE, _OnUnitPriceNewChangeFnc);
	//m_wndUnitPriceNew.SetEvent(WE_SETFOCUS, _OnUnitPriceNewSetfocusFnc);
	//m_wndUnitPriceNew.SetEvent(WE_KILLFOCUS, _OnUnitPriceNewKillfocusFnc);
	m_wndUnitPriceNew.SetEvent(WE_CHECKVALUE, _OnUnitPriceNewCheckValueFnc);
	//m_wndOrderQty.SetEvent(WE_CHANGE, _OnOrderQtyChangeFnc);
	//m_wndOrderQty.SetEvent(WE_SETFOCUS, _OnOrderQtySetfocusFnc);
	//m_wndOrderQty.SetEvent(WE_KILLFOCUS, _OnOrderQtyKillfocusFnc);
	m_wndOrderQty.SetEvent(WE_CHECKVALUE, _OnOrderQtyCheckValueFnc);
	SetMode(VM_NONE);
	GetDataToScreen();

}
void CStorageMedicalCabinetLineReplateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductName);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndProductNew.GetDlgCtrlID(), m_szProductNewKey);
	DDX_Text(pDX, m_wndUnitOfMeasure.GetDlgCtrlID(), m_szUnitOfMeasure);
	DDX_Text(pDX, m_wndManufactureNew.GetDlgCtrlID(), m_szManufactureNew);
	DDX_TextEx(pDX, m_wndExprDateNew.GetDlgCtrlID(), m_szExprDateNew);
	DDX_Text(pDX, m_wndLotNoNew.GetDlgCtrlID(), m_szLotNoNew);
	DDX_Text(pDX, m_wndUnitPriceNew.GetDlgCtrlID(), m_nUnitPriceNew);
	DDX_Text(pDX, m_wndOrderQty.GetDlgCtrlID(), m_nOrderQty);

}
void CStorageMedicalCabinetLineReplateDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT mtl_transactionline_id, ") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   mtl_qtyorder  AS product_qtyorder,") \
_T("   mtl_qtydelivery  AS product_qtydelivery,") \
_T("   product_unitprice,") \
_T("   mtl_qtyorder*product_unitprice AS product_amount,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename, ") \
_T("   product_id, ") \
_T("   mtl_xproduct_id as xproduct_id ") \
_T(" FROM m_transactionline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id=mtl_product_item_id)") \
_T(" WHERE mtl_transaction_id=%ld and product_id=%ld ") \
_T(" ORDER BY product_uomindex, product_name, product_uomname,") \
_T("   product_unitprice"), m_nOrderID, m_nProduct_ID);

_fmsg(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);
	int nItem = 0;	
	if(!rs.IsEOF()){		
		rs.GetValue(_T("product_id"), m_nProduct_ID);		
		rs.GetValue(_T("product_name"), m_szProductName);
		rs.GetValue(_T("product_uomname"), m_szUom); 
		rs.GetValue(_T("Product_expdate"), m_szExprDate); 
		rs.GetValue(_T("product_lotno"), m_szLotNo);
		rs.GetValue(_T("product_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("product_qtyorder"), m_nQuantity);
		m_nOrderQty = m_nQuantity;
		rs.GetValue(_T("product_manufacturename"), m_szManufacture);

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CStorageMedicalCabinetLineReplateDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), m_nStorageID);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), m_nStorageToID);

	CString tmpStr;
	m_nProductItemID = str2long(m_wndProductNew.GetCurrent(0));
	m_nProductNew_ID = ToLong(m_wndProductNew.GetCurrent(1));

	m_transactionlineTbl.SetValue(_T("mtl_product_id"), m_nProductNew_ID);
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nQuantity);

}
void CStorageMedicalCabinetLineReplateDialog::SetDefaultValues(){

	m_szProductName.Empty();
	m_szUom.Empty();
	m_szManufacture.Empty();
	m_szExprDate.Empty();
	m_szLotNo.Empty();
	m_nUnitPrice=0;
	m_nQuantity=0;
	m_szProductNewKey.Empty();
	m_szUnitOfMeasure.Empty();
	m_szManufactureNew.Empty();
	m_szExprDateNew.Empty();
	m_szLotNoNew.Empty();
	m_nUnitPriceNew=0;
	m_nOrderQty=0;
	m_nOrderLine = 0;

}
int CStorageMedicalCabinetLineReplateDialog::SetMode(int nMode){
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
		m_wndProductNew.EnableWindow(true);
		m_wndOrderQty.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CStorageMedicalCabinetLineReplateDialog::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMedicalCabinetLineReplateDialog::OnProductSelendok(){
	 
}
/*void CStorageMedicalCabinetLineReplateDialog::OnProductSetfocus(){
	
}*/
/*void CStorageMedicalCabinetLineReplateDialog::OnProductKillfocus(){
	
}*/
long CStorageMedicalCabinetLineReplateDialog::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
}
/*void CStorageMedicalCabinetLineReplateDialog::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUomChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUomSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUomKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnUomCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnManufactureCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnExprDateCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnLotNoCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnQuantityChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnQuantitySetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnQuantityKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnQuantityCheckValue(){
	return 0;
} 
void CStorageMedicalCabinetLineReplateDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageMedicalCabinetLineReplateDialog();
} 
void CStorageMedicalCabinetLineReplateDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
void CStorageMedicalCabinetLineReplateDialog::OnProductNewSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMedicalCabinetLineReplateDialog::OnProductNewSelendok(){
	UpdateData(TRUE);
	m_szUnitOfMeasure = m_wndProductNew.GetCurrent(4);
	m_nUnitPriceNew = str2double(m_wndProductNew.GetCurrent(6));

//	m_nOnHanh = str2double(m_wndProduct.GetCurrent(8));
	m_szLotNoNew = m_wndProductNew.GetCurrent(9);
	m_szExprDateNew = CDate::Convert(m_wndProductNew.GetCurrent(10), ddmmyyyy, yyyymmdd);
	m_szManufactureNew = m_wndProductNew.GetCurrent(11);
	//m_szDescription.Format(_T("[%s] %s"), m_wndProduct.GetCurrent(2), m_wndProduct.GetCurrent(3));
	
	UpdateData(FALSE); 
}
/*void CStorageMedicalCabinetLineReplateDialog::OnProductNewSetfocus(){
	
}*/
/*void CStorageMedicalCabinetLineReplateDialog::OnProductNewKillfocus(){
	
}*/
long CStorageMedicalCabinetLineReplateDialog::OnProductNewLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld  and abs(msl_qtyonhand-msl_qtyordered) > 0 "), m_nStorageID);
		
	return pMF->LoadProductItemList(&m_wndProductNew, m_szProductNewKey, szFilter);	
	return 0;
}
/*void CStorageMedicalCabinetLineReplateDialog::OnProductNewAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitOfMeasureChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitOfMeasureSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitOfMeasureKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnUnitOfMeasureCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureNewChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureNewSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnManufactureNewKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnManufactureNewCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateNewChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateNewSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnExprDateNewKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnExprDateNewCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoNewChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoNewSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnLotNoNewKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnLotNoNewCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceNewChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceNewSetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnUnitPriceNewKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnUnitPriceNewCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetLineReplateDialog::OnOrderQtyChange(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnOrderQtySetfocus(){
	
} */
/*void CStorageMedicalCabinetLineReplateDialog::OnOrderQtyKillfocus(){
	
} */
int CStorageMedicalCabinetLineReplateDialog::OnOrderQtyCheckValue(){
	if(m_nOrderQty > m_nQuantity){
		m_wndOrderQty.SetToolTipMessage(_T("Invalidate value"));
		return -1;
	}
	return 0;
} 
int CStorageMedicalCabinetLineReplateDialog::OnAddStorageMedicalCabinetLineReplateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageMedicalCabinetLineReplateDialog::OnEditStorageMedicalCabinetLineReplateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageMedicalCabinetLineReplateDialog::OnDeleteStorageMedicalCabinetLineReplateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelStorageMedicalCabinetLineReplateDialog();
 	}
	return 0;
}
int CStorageMedicalCabinetLineReplateDialog::OnSaveStorageMedicalCabinetLineReplateDialog(){
 	/*if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;*/
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	
	szSQL.Format(_T("M_TRANSACTIONLINE_CREATE(%s) "), m_transactionlineTbl.FormatSQL());
	_tprintf(_T("%s"),szSQL);	
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		szSQL.Format(_T("UPDATE m_transactionline SET mtl_status='N' WHERE mtl_transaction_id=%ld AND mtl_product_id=%ld"), m_nOrderID, m_nProduct_ID);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("UPDATE m_transactionline SET mtl_xproduct_id=%ld WHERE mtl_transaction_id=%ld AND mtl_product_id=%ld"),  m_nProduct_ID, m_nOrderID, m_nProductNew_ID);
		pMF->ExecSQL(szSQL);

		CStorageMedicalCabinetLines* pLines = (CStorageMedicalCabinetLines*) pMF->GetRefWindow(_T("StorageMedicalCabinetLines"));
		if(pLines) pLines->Refresh(m_nOrderID);	
	
 	}
	OnOK();
 	
 	return ret; 	
}
int CStorageMedicalCabinetLineReplateDialog::OnCancelStorageMedicalCabinetLineReplateDialog(){
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
int CStorageMedicalCabinetLineReplateDialog::OnStorageMedicalCabinetLineReplateDialogListLoadData(){
	return 0;
}
