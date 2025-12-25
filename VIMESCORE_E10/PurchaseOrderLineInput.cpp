#include "PurchaseOrderLineInput.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInput* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInput* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnVATAddNew();
}*/
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInput* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnSaleUomChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnSaleUomChange();
} */
/*static void _OnSaleUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnSaleUomSetfocus();} */ 
/*static void _OnSaleUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnSaleUomKillfocus();
} */
static int _OnSaleUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnSaleUomCheckValue();
} 
/*static void _OnConversionRateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnConversionRateChange();
} */
/*static void _OnConversionRateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnConversionRateSetfocus();} */ 
/*static void _OnConversionRateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInput *)pWnd)->OnConversionRateKillfocus();
} */
static int _OnConversionRateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInput *)pWnd)->OnConversionRateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInput *pVw = (CPurchaseOrderLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInput *pVw = (CPurchaseOrderLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInput*)pWnd)->OnAddPurchaseOrderLineInput();
} 
static int _OnEditPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInput*)pWnd)->OnEditPurchaseOrderLineInput();
} 
static int _OnDeletePurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInput*)pWnd)->OnDeletePurchaseOrderLineInput();
} 
static int _OnSavePurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInput*)pWnd)->OnSavePurchaseOrderLineInput();
} 
static int _OnCancelPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInput*)pWnd)->OnCancelPurchaseOrderLineInput();
} 
CPurchaseOrderLineInput::CPurchaseOrderLineInput(CWnd *pParent, int nMode, int x, int y):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 645;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_nX = x;
	m_nY = y;
	SetAutoCenter(false);
	m_szWarehouseKey.Empty();
	m_szVATKey.Empty();
	m_nOrderID = 0;
	m_nOrderLine = 0;
	m_nStorageID = -1;
	m_nTaxID = -1;
	m_szResourceKey = _T("0");
}

CPurchaseOrderLineInput::~CPurchaseOrderLineInput(){
}
void CPurchaseOrderLineInput::OnCreateComponents(){
	m_wndWarehouse.Create(this,110, 5, 450, 30); 
	m_wndVATLabel.Create(this, _T("Tax"), 455, 5, 555, 30);
	m_wndVAT.Create(this,560, 5, 675, 30); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 5, 6, 105, 31);
	m_wndProductLabel.Create(this, _T("Item Name"), 5, 35, 105, 60);
	m_wndProduct.Create(this,110, 35, 450, 60); 
	m_wndUomLabel.Create(this, _T("Purchase Uom"), 455, 35, 555, 60);
	m_wndUom.Create(this,560, 35, 675, 60); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 5, 65, 105, 90);
	m_wndManufacture.Create(this,110, 65, 225, 90); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 230, 65, 330, 90);
	m_wndLotNo.Create(this,335, 65, 450, 90); 
	m_wndExprDateLabel.Create(this, _T("Exp Date"), 455, 65, 555, 90);
	m_wndExprDate.Create(this,560, 65, 675, 90); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 95, 105, 120);
	m_wndQuantity.Create(this,110, 95, 225, 120); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 230, 95, 330, 120);
	m_wndUnitPrice.Create(this,335, 95, 450, 120); 
	m_wndAmountLabel.Create(this, _T("Amount"), 455, 95, 555, 120);
	m_wndAmount.Create(this,560, 95, 675, 120); 
	m_wndSaleUomLabel.Create(this, _T("Sale Uom"), 5, 125, 105, 150);
	m_wndSaleUom.Create(this,110, 125, 225, 150); 
	m_wndConversionRateLabel.Create(this, _T("Conversion Rate"), 230, 125, 330, 150);
	m_wndConversionRate.Create(this,335, 125, 450, 150); 
	m_wndSave.Create(this, _T("&Save"), 490, 125, 580, 150);
	m_wndClose.Create(this, _T("&Close"), 585, 125, 675, 150);

}
void CPurchaseOrderLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(35);
	m_wndVAT.SetCheckValue(true);
	m_wndVAT.LimitText(35);
	m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(35);
	m_wndLotNo.SetLimitText(35);
	//m_wndLotNo.SetCheckValue(true);
	//m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDate.SetCheckValue(true);
	m_wndExprDate.SetNotEmpty(false);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndQuantity.SetNumberDecimal(0);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	//m_wndAmount.SetCheckValue(true);
	m_wndSaleUom.SetLimitText(35);
	//m_wndSaleUom.SetCheckValue(true);
	m_wndConversionRate.SetLimitText(16);
	//m_wndConversionRate.SetCheckValue(true);


	m_wndProduct.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ID
	m_wndProduct.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndProduct.InsertColumn(3, _T("Uom"), CFMT_TEXT, 90);
	m_wndProduct.InsertColumn(4, _T("Classcification"), CFMT_TEXT, 180);
	m_wndProduct.InsertColumn(5, _T("Manufacture"), CFMT_TEXT, 200);
	m_wndProduct.InsertColumn(6, _T("uomid"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(7, _T("souom_id"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(8, _T("souom_unit"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(9, _T("souom_rate"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(10, _T("mfgid"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(11, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(12, _T("Sale Price"), CFMT_TEXT, 0);
	m_wndProduct.Format(12, 2, 6);

				

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVAT.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVAT.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndVAT.InsertColumn(2, _T("Rate"), CFMT_TEXT, 50);


	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndManufacture.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	UINT nShow = SW_HIDE;
	m_wndSaleUomLabel.ShowWindow(nShow);
	m_wndSaleUom.ShowWindow(nShow);
	m_wndConversionRateLabel.ShowWindow(nShow);
	m_wndConversionRate.ShowWindow(nShow);

//	m_purchase_orderlineTbl.SetTableName(_T("purchase_orderline"));
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDER_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDERLINE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_ORG_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_USER_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_STORAGE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_UNITPRICE"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_QTYORDER"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAX_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_LOTNO"), dfText, 15); 
	m_purchase_orderlineTbl.AddField(_T("POL_EXPDATE"), dfDate); 
	m_purchase_orderlineTbl.AddField(_T("POL_MANUFACTURE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_RESOURCE_ID"), dfLong); 
//	m_purchase_orderlineTbl.AddField(_T("POL_ASSET_ID"), dfLong); 
	



	m_wndUom.SetReadOnly(true);
	m_wndSaleUom.SetReadOnly(true);
	m_wndConversionRate.SetReadOnly(true);
	
	m_wndWarehouse.ModifyStyle(WS_TABSTOP, 0);
	m_wndAmount.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndAmount.SetCurrencyFormat(TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));

	m_wndWarehouse.SetReadOnly(TRUE);

}
void CPurchaseOrderLineInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndVAT.SetEvent(WE_SELENDOK, _OnVATSelendokFnc);
	//m_wndVAT.SetEvent(WE_SETFOCUS, _OnVATSetfocusFnc);
	//m_wndVAT.SetEvent(WE_KILLFOCUS, _OnVATKillfocusFnc);
	m_wndVAT.SetEvent(WE_SELCHANGE, _OnVATSelectChangeFnc);
	m_wndVAT.SetEvent(WE_LOADDATA, _OnVATLoadDataFnc);
	//m_wndVAT.SetEvent(WE_ADDNEW, _OnVATAddNewFnc);
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
	m_wndManufacture.SetEvent(WE_SELENDOK, _OnManufactureSelendokFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_SELCHANGE, _OnManufactureSelectChangeFnc);
	m_wndManufacture.SetEvent(WE_LOADDATA, _OnManufactureLoadDataFnc);
	//m_wndManufacture.SetEvent(WE_ADDNEW, _OnManufactureAddNewFnc);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndExprDate.SetEvent(WE_CHANGE, _OnExprDateChangeFnc);
	//m_wndExprDate.SetEvent(WE_SETFOCUS, _OnExprDateSetfocusFnc);
	//m_wndExprDate.SetEvent(WE_KILLFOCUS, _OnExprDateKillfocusFnc);
	m_wndExprDate.SetEvent(WE_CHECKVALUE, _OnExprDateCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndSaleUom.SetEvent(WE_CHANGE, _OnSaleUomChangeFnc);
	//m_wndSaleUom.SetEvent(WE_SETFOCUS, _OnSaleUomSetfocusFnc);
	//m_wndSaleUom.SetEvent(WE_KILLFOCUS, _OnSaleUomKillfocusFnc);
	m_wndSaleUom.SetEvent(WE_CHECKVALUE, _OnSaleUomCheckValueFnc);
	//m_wndConversionRate.SetEvent(WE_CHANGE, _OnConversionRateChangeFnc);
	//m_wndConversionRate.SetEvent(WE_SETFOCUS, _OnConversionRateSetfocusFnc);
	//m_wndConversionRate.SetEvent(WE_KILLFOCUS, _OnConversionRateKillfocusFnc);
	m_wndConversionRate.SetEvent(WE_CHECKVALUE, _OnConversionRateCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	CDialog::SetWindowPos(NULL, m_nX-5, m_nY-5, 0, 0, SWP_NOSIZE);
	CPurchaseOrderDialog *pDlg = (CPurchaseOrderDialog*) pMF->GetRefWindow(_T("PurchaseOrderDialog"));
	if(pDlg) m_szPartnerID = pDlg->m_szSupplierKey;

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();

	
	SetMode(nMode);
	
	if(nMode == VM_EDIT)
	{
		OnProductSelendok();
	}

}
void CPurchaseOrderLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndVAT.GetDlgCtrlID(), m_szVATKey);
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndSaleUom.GetDlgCtrlID(), m_szSaleUom);
	DDX_Text(pDX, m_wndConversionRate.GetDlgCtrlID(), m_nConversionRate);

}
void CPurchaseOrderLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT pol_storage_id, pol_tax_id,pol_product_id, pol_uom_id, GET_UOMNAME(pol_uom_id) as pol_uomname, ") \
		_T(" pol_manufacture_id, pol_lotno, pol_expdate, pol_qtyorder, pol_unitprice, pol_totalamount " )\
		_T("FROM purchase_orderline ") \
		_T("WHERE pol_purchase_order_id=%ld and pol_purchase_orderline_id=%ld"), m_nOrderID, m_nOrderLine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		//rs.GetValue(_T("pol_storage_id"), m_szWarehouseKey);
		//m_nStorageID = str2int(m_szWarehouseKey);
		rs.GetValue(_T("pol_tax_id"), m_szVATKey);
		rs.GetValue(_T("pol_product_id"), m_szProductKey);
		rs.GetValue(_T("pol_manufacture_id"), m_szManufactureKey);
		rs.GetValue(_T("pol_uom_id"), m_nUomID);
		rs.GetValue(_T("pol_uomname"), m_szUom);
		rs.GetValue(_T("pol_lotno"), m_szLotNo);
		rs.GetValue(_T("pol_expdate"), m_szExprDate);
		rs.GetValue(_T("pol_qtyorder"), m_nQuantity);
		rs.GetValue(_T("pol_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("pol_totalamount"), m_nAmount);

	}

}
void CPurchaseOrderLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_purchase_orderlineTbl.SetValue(_T("pol_purchase_order_id"), m_nOrderID);
	m_purchase_orderlineTbl.SetValue(_T("pol_purchase_orderline_id"), m_nOrderLine);
	m_purchase_orderlineTbl.SetValue(_T("pol_org_id"), pMF->GetModuleID());
	m_purchase_orderlineTbl.SetValue(_T("pol_user_id"), pMF->GetCurrentUser());
	m_purchase_orderlineTbl.SetValue(_T("pol_storage_id"), m_szWarehouseKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_product_id"), m_szProductKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_qtyorder"), m_nQuantity);
	m_purchase_orderlineTbl.SetValue(_T("pol_unitprice"), m_nUnitPrice);
	m_purchase_orderlineTbl.SetValue(_T("pol_tax_id"), m_szVATKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_lotno"), m_szLotNo);
	m_purchase_orderlineTbl.SetValue(_T("pol_expdate"), m_szExprDate);
	m_purchase_orderlineTbl.SetValue(_T("pol_manufacture_id"), m_szManufactureKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_resource_id"), m_szResourceKey);
	

}
void CPurchaseOrderLineInput::SetDefaultValues(){

	m_szProductKey.Empty();
	m_szUom.Empty();
	m_szManufactureKey.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nAmount=0;
	m_szSaleUom.Empty();
	m_nConversionRate=0;

}
int CPurchaseOrderLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
		if(m_nStorageID <= 0)
		{
			szSQL.Format(_T("SELECT po_storage_id, po_tax_id FROM purchase_order WHERE po_purchase_order_id=%ld "), m_nOrderID);
			rs.ExecSQL(szSQL);
			
			rs.GetValue(_T("po_storage_id"), m_nStorageID);
			rs.GetValue(_T("po_tax_id"), m_nTaxID);
			if(m_nStorageID > 0)
			m_szWarehouseKey.Format(_T("%d"), m_nStorageID);
			if(m_nTaxID > 0)
			m_szVATKey.Format(_T("%d"), m_nTaxID);
		}
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndProduct.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, -1);
 			SetDefaultValues();
 			break;
 		};

		//if(m_szWarehouseKey.IsEmpty())
		//{
		//	m_wndWarehouse.ModifyStyle(0, WS_TABSTOP);
		//}
		//else
		//	m_wndWarehouse.ModifyStyle(WS_TABSTOP, 0);
		if(m_szVATKey.IsEmpty()){
			m_wndVAT.ModifyStyle(0, WS_TABSTOP);
		}
		else
			m_wndVAT.ModifyStyle(WS_TABSTOP, 0);

		//if(m_nStorageID > 0)
		//{
		//	m_szWarehouseKey.Format(_T("%d"), m_nStorageID);
		//	m_wndWarehouse.EnableWindow(FALSE);
		//}
		if(m_nTaxID > 0){
			m_szVATKey.Format(_T("%d"), m_nTaxID);
		}
 		UpdateData(FALSE);

 		return nOldMode;
}
void CPurchaseOrderLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInput::OnProductSelendok(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	UINT nShow = SW_SHOW;
	CString szUomID = m_wndProduct.GetCurrent(6);
	CString szProductUomID = m_wndProduct.GetCurrent(7);

	m_nUomID = str2long(szUomID);

	if(szUomID == szProductUomID)
		nShow = SW_HIDE;

	m_wndSaleUomLabel.ShowWindow(nShow);
	m_wndSaleUom.ShowWindow(nShow);
	m_wndConversionRateLabel.ShowWindow(nShow);
	m_wndConversionRate.ShowWindow(nShow);
	m_szUom = m_wndProduct.GetCurrent(3);	
	m_szSaleUom = m_wndProduct.GetCurrent(8);
	m_nConversionRate = str2float(m_wndProduct.GetCurrent(9));
	
	
	if(GetMode() == VM_ADD)
	{
		m_szManufactureKey = m_wndProduct.GetCurrent(10);
		m_nUnitPrice = str2double(m_wndProduct.GetCurrent(11));

		szSQL.Format(_T("SELECT * FROM m_product_price WHERE mpp_product_id=%ld and mpp_partner_id='%s'  and mpp_isactive='Y' "), 
			str2long(m_szProductKey), m_szPartnerID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("mpp_unitprice"), m_nUnitPrice);
			rs.GetValue(_T("mpp_manufacture_id"), m_szManufactureKey);
		}

		if(!m_szManufactureKey.IsEmpty()){
			m_wndManufacture.EnableWindow(FALSE);
		}
		
	}

	UpdateData(FALSE); 
}
/*void CPurchaseOrderLineInput::OnProductSetfocus(){
	
}*/
/*void CPurchaseOrderLineInput::OnProductKillfocus(){
	
}*/
long CPurchaseOrderLineInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and (product_bpartnerid='%s' or product_bpartnerid is null) "), m_szPartnerID);

	return pMF->LoadProductList(&m_wndProduct, m_szProductKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProduct.IsSearchKey() && !m_szProductKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductKey
};
	m_wndProduct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProduct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderLineInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderLineInput::OnUomChange(){
	
} */
/*void CPurchaseOrderLineInput::OnUomSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnUomKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnUomCheckValue(){
	return 0;
} 
void CPurchaseOrderLineInput::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInput::OnWarehouseSelendok(){
	 
}
/*void CPurchaseOrderLineInput::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderLineInput::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderLineInput::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey);

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
/*void CPurchaseOrderLineInput::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderLineInput::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInput::OnVATSelendok(){
	 
}
/*void CPurchaseOrderLineInput::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderLineInput::OnVATKillfocus(){
	
}*/
long CPurchaseOrderLineInput::OnVATLoadData(){
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
/*void CPurchaseOrderLineInput::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderLineInput::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInput::OnManufactureSelendok(){
	 
}
/*void CPurchaseOrderLineInput::OnManufactureSetfocus(){
	
}*/
/*void CPurchaseOrderLineInput::OnManufactureKillfocus(){
	
}*/
long CPurchaseOrderLineInput::OnManufactureLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadManufactureList(&m_wndManufacture, m_szManufactureKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndManufacture.IsSearchKey() && !m_szManufactureKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szManufactureKey
};
	m_wndManufacture.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndManufacture.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderLineInput::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderLineInput::OnLotNoChange(){
	
} */
/*void CPurchaseOrderLineInput::OnLotNoSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnLotNoKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnLotNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInput::OnExprDateChange(){
	
} */
/*void CPurchaseOrderLineInput::OnExprDateSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnExprDateKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnExprDateCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szExprDate.Trim();
	if(!m_szExprDate.IsEmpty() && !CDate::IsValid(m_szExprDate))
		return -1;
	
	if(CompareDate(m_szExprDate, pMF->GetSysDate()) < 0)
		return -1;
	return 0;
} 
/*void CPurchaseOrderLineInput::OnQuantityChange(){
	
} */
/*void CPurchaseOrderLineInput::OnQuantitySetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnQuantityKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnQuantityCheckValue(){
	if(m_nQuantity <= 0)
		return -1;
	return 0;
} 
/*void CPurchaseOrderLineInput::OnUnitPriceChange(){
	
} */
/*void CPurchaseOrderLineInput::OnUnitPriceSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnUnitPriceKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nAmount = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CPurchaseOrderLineInput::OnAmountChange(){
	
} */
/*void CPurchaseOrderLineInput::OnAmountSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnAmountKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInput::OnSaleUomChange(){
	
} */
/*void CPurchaseOrderLineInput::OnSaleUomSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnSaleUomKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnSaleUomCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInput::OnConversionRateChange(){
	
} */
/*void CPurchaseOrderLineInput::OnConversionRateSetfocus(){
	
} */
/*void CPurchaseOrderLineInput::OnConversionRateKillfocus(){
	
} */
int CPurchaseOrderLineInput::OnConversionRateCheckValue(){
	return 0;
} 
void CPurchaseOrderLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderLineInput();
} 
void CPurchaseOrderLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderLineInput::OnAddPurchaseOrderLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderLineInput::OnEditPurchaseOrderLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderLineInput::OnDeletePurchaseOrderLineInput(){
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
 		OnCancelPurchaseOrderLineInput();
 	}
	return 0;
}
int CPurchaseOrderLineInput::OnSavePurchaseOrderLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("PURCHASE_ORDERLINE_CREATE(%s) "), m_purchase_orderlineTbl.FormatSQL());
///	_msg(_T("SQL:%s"), szSQL);
/*
	if(GetMode() == VM_ADD){
		szSQL = m_purchase_orderlineTbl.GetInsertSQL();
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE pol_purchase_orderline_id=%ld"), m_nOrderLine);
		szSQL.Format(_T("%s %s"),
			m_purchase_orderlineTbl.GetUpdateSQL(_T("pol_createdby,pol_createddate,pol_purchase_orderline_id,pol_purchase_order_id")),
			szWhere);

	}
*/
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		CPurchaseOrderLines* pLines = (CPurchaseOrderLines*) pMF->GetRefWindow(_T("PurchaseOrderLines"));
		if(pLines) pLines->Refresh(m_nOrderID);

		if(GetMode() == VM_ADD)
		{
			if(m_nStorageID <= 0){
				m_nStorageID = str2int(m_szWarehouseKey);
				m_nTaxID = str2int(m_szVATKey);
				szSQL.Format(_T("UPDATE purchase_order SET po_storage_id=%d, po_tax_id=%d WHERE po_purchase_order_id=%ld "),
					m_nStorageID, m_nTaxID, m_nOrderID);
				pMF->ExecSQL(szSQL);
			}
			SetMode(VM_ADD);
		}
		else
			CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderLineInput::OnCancelPurchaseOrderLineInput(){
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
int CPurchaseOrderLineInput::OnPurchaseOrderLineInputListLoadData(){
	return 0;
}
