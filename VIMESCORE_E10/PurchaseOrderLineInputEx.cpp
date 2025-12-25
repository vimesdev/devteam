#include "PurchaseOrderLineInputEx.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialogEx.h"
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInputEx* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInputEx* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnVATAddNew();
}*/
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInputEx* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderLineInputEx* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnUnitPriceCheckValue();
}

/*static void _OnSalePriceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSalePriceChange();
} */
/*static void _OnSalePriceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSalePriceSetfocus();} */ 
/*static void _OnSalePriceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSalePriceKillfocus();
} */
static int _OnSalePriceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnSalePriceCheckValue();
}

static void _OnSalePriceButtonSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInputEx *pVw = (CPurchaseOrderLineInputEx *)pWnd;
	pVw->OnSalePriceButtonSelect();
}
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnSaleUomChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSaleUomChange();
} */
/*static void _OnSaleUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSaleUomSetfocus();} */ 
/*static void _OnSaleUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnSaleUomKillfocus();
} */
static int _OnSaleUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnSaleUomCheckValue();
} 
/*static void _OnConversionRateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnConversionRateChange();
} */
/*static void _OnConversionRateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnConversionRateSetfocus();} */ 
/*static void _OnConversionRateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderLineInputEx *)pWnd)->OnConversionRateKillfocus();
} */
static int _OnConversionRateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderLineInputEx *)pWnd)->OnConversionRateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInputEx *pVw = (CPurchaseOrderLineInputEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInputEx *pVw = (CPurchaseOrderLineInputEx *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnAddPurchaseOrderLineInput();
} 
static int _OnEditPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnEditPurchaseOrderLineInput();
} 
static int _OnDeletePurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnDeletePurchaseOrderLineInput();
} 
static int _OnSavePurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnSavePurchaseOrderLineInput();
} 
static int _OnCancelPurchaseOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnCancelPurchaseOrderLineInput();
} 
CPurchaseOrderLineInputEx::CPurchaseOrderLineInputEx(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
	CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 990;
	m_nDlgHeight = 100;
	SetDefaultValues();
	m_nOrderID = 0;
	m_nOrderLine = 0;
	m_nStorageID = -1;
	m_nTaxID = 0;
	m_nResourceID = 0;
	m_pWndLines = pParent;
	m_pWndOrder = NULL;
	m_nTaxRate = 0;
}

CPurchaseOrderLineInputEx::~CPurchaseOrderLineInputEx(){
}
void CPurchaseOrderLineInputEx::OnCreateComponents(){
	m_wndProductLabel.Create(this, _T("Item Name"), 5, 5, 105, 30);
	m_wndProduct.Create(this,110, 5, 395, 30); 
	m_wndUomLabel.Create(this, _T("Purchase Uom"), 400, 5, 505, 30);
	m_wndUom.Create(this,510, 5, 595, 30); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 600, 5, 700, 30);
	m_wndManufacture.Create(this,705, 5, 980, 30); 
	m_wndExprDateLabel.Create(this, _T("Exp Date"), 5, 35, 105, 60);
	m_wndExprDate.Create(this,110, 35, 195, 60); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 200, 35, 295, 60);
	m_wndLotNo.Create(this,300, 35, 395, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 400, 35, 505, 60);
	m_wndQuantity.Create(this,510, 35, 595, 60); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 600, 35, 700, 60);
	m_wndUnitPrice.Create(this,705, 35, 790, 60); 
	m_wndAmountLabel.Create(this, _T("Amount"), 800, 35, 880, 60);
	m_wndAmount.Create(this,885, 35, 975, 60); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 600, 65, 700, 90);
	m_wndSalePrice.Create(this,705, 65, 790, 90); 
	m_wndDescription.Create(this, _T(""), 5, 65, 595, 90);
	m_wndSave.Create(this, _T("&Save"), 885, 65, 945, 90);
	m_wndClose.Create(this, _T("X"), 950, 65, 975, 90);
}
void CPurchaseOrderLineInputEx::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(35);
	m_wndLotNo.SetLimitText(35);
	//m_wndLotNo.SetCheckValue(true);
	//m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDate.SetCheckValue(true);
	m_wndExprDate.SetNotEmpty(false);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	int nDecimal = 0;
	if (pMF->m_szOriginModuleID == _T("HC"))
	{
		nDecimal = 3;
	}
	m_wndQuantity.SetNumberDecimal(nDecimal);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
	m_wndSalePrice.SetCheckValue(true);


	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT msl_category FROM m_storagelist WHERE msl_storage_id=%d"), m_nStorageID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("msl_category"), m_szStorageCategory);
	}
	if(m_szStorageCategory == _T("S") || m_szStorageCategory == _T("A"))
	{
		m_wndSalePrice.SetCheckValue(true);
	}
	else
	{
		m_wndSalePrice.ModifyStyle(WS_TABSTOP, 0);
	}
	
	
	

	if(pMF->GetModuleID() == _T("MA"))
	{
		m_wndSalePrice.SetReadOnly(TRUE);
		m_wndSalePrice.SetCheckValue(false);
	}

	//
	szSQL.Format(_T("SELECT coalesce(adt_rate, 0)/100.0 as tax_rate FROM ad_taxrate WHERE adt_taxrate_id = %d"), m_nTaxID);
	CRecord rst(&pMF->m_db);
	rst.ExecSQL(szSQL);
	rst.GetValue(_T("tax_rate"), m_nTaxRate);
_tprintf(_T("\r\n%f"), m_nTaxRate);

	m_wndAmount.SetLimitText(16);
	//m_wndAmount.SetCheckValue(true);
	m_wndDescription.ModifyStyle(0, WS_BORDER);

	m_wndProduct.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ID
	m_wndProduct.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndProduct.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
		m_wndProduct.InsertColumn(3, _T("Uom"), CFMT_TEXT, 80);
		m_wndProduct.InsertColumn(4, _T("Classcification"), CFMT_TEXT, 180);
		m_wndProduct.InsertColumn(5, _T(""), CFMT_TEXT, 0);
		m_wndProduct.InsertColumn(6, _T("Manufacture"), CFMT_TEXT, 150);
	}
	else
	{
		m_wndProduct.InsertColumn(2, _T("Name"), CFMT_TEXT, 480);
		m_wndProduct.InsertColumn(3, _T("Uom"), CFMT_TEXT, 80);
		m_wndProduct.InsertColumn(4, _T("Classcification"), CFMT_TEXT, 0);
		m_wndProduct.InsertColumn(5, _T("Mã hiệu"), CFMT_TEXT, 150);
		m_wndProduct.InsertColumn(6, _T("Manufacture"), CFMT_TEXT, 150);
	}
	
	m_wndProduct.InsertColumn(7, _T("uomid"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(8, _T("souom_id"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(9, _T("souom_unit"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(10, _T("souom_rate"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(11, _T("mfgid"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(12, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(13, _T("Sale Price"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(14, _T("hasexpdate"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(15, _T("isprecision"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(16, _T("Sale Price 2"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(17, _T(""), CFMT_TEXT, 0);	//product_extra_id
	m_wndProduct.InsertColumn(18, _T("Serial"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(19, _T("Package Unit Price"), CFMT_MONEY, 80);
	m_wndProduct.Format(20, 2, 6);
	m_wndProduct.SetSearchEx(TRUE, 1);

	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndManufacture.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	m_wndManufacture.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndManufacture.Format(3, 2, 2);


//	m_purchase_orderlineTbl.SetTableName(_T("purchase_orderline"));
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDER_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDERLINE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_ORG_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_USER_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_STORAGE_ID"), dfInteger); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_UNITPRICE"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_SALEPRICE"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_QTYORDER"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAX_ID"), dfInteger); 
	m_purchase_orderlineTbl.AddField(_T("POL_LOTNO"), dfText, 15); 
	m_purchase_orderlineTbl.AddField(_T("POL_EXPDATE"), dfDate); 
	m_purchase_orderlineTbl.AddField(_T("POL_MANUFACTURE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_RESOURCE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_EXTRA_ID"), dfLong); 
	



	m_wndUom.SetReadOnly(true);
	m_wndAmount.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndAmount.SetCurrencyFormat(TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	m_wndSalePrice.SetCurrencyFormat(TRUE);

	
}
void CPurchaseOrderLineInputEx::OnSetWindowEvents(){
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

	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
//	CDialog::SetWindowPos(NULL, m_nX-5, m_nY-5, 0, 0, SWP_NOSIZE);
	CPurchaseOrderDialogEx *pDlg = (CPurchaseOrderDialogEx*) pMF->GetRefWindow(_T("PurchaseOrderDialogEx"));
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
void CPurchaseOrderLineInputEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CPurchaseOrderLineInputEx::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT pol_storage_id, pol_tax_id, pol_product_id, pol_uom_id, GET_UOMNAME(pol_uom_id) as pol_uomname, ") \
		_T(" pol_manufacture_id, pol_lotno, pol_expdate, pol_qtyorder, pol_unitprice, pol_saleprice, pol_totalamount " )\
		_T("FROM purchase_orderline ") \
		_T("WHERE pol_purchase_order_id=%ld and pol_purchase_orderline_id=%ld"), m_nOrderID, m_nOrderLine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		//rs.GetValue(_T("pol_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("pol_tax_id"), m_nTaxID);
		rs.GetValue(_T("pol_resource_id"), m_nResourceID);
		rs.GetValue(_T("pol_product_id"), m_szProductKey);
		rs.GetValue(_T("pol_manufacture_id"), m_szManufactureKey);
		rs.GetValue(_T("pol_uom_id"), m_nUomID);
		rs.GetValue(_T("pol_uomname"), m_szUom);
		rs.GetValue(_T("pol_lotno"), m_szLotNo);
		rs.GetValue(_T("pol_expdate"), m_szExprDate);
		rs.GetValue(_T("pol_qtyorder"), m_nQuantity);
		rs.GetValue(_T("pol_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("pol_saleprice"), m_nSalePrice);
		rs.GetValue(_T("pol_totalamount"), m_nAmount);

	}

}
void CPurchaseOrderLineInputEx::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_purchase_orderlineTbl.SetValue(_T("pol_purchase_order_id"), m_nOrderID);
	m_purchase_orderlineTbl.SetValue(_T("pol_purchase_orderline_id"), m_nOrderLine);
	m_purchase_orderlineTbl.SetValue(_T("pol_org_id"), pMF->GetModuleID());
	m_purchase_orderlineTbl.SetValue(_T("pol_user_id"), pMF->GetCurrentUser());
	m_purchase_orderlineTbl.SetValue(_T("pol_storage_id"), m_nStorageID);
	m_purchase_orderlineTbl.SetValue(_T("pol_product_id"), m_szProductKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_qtyorder"), m_nQuantity);
	m_purchase_orderlineTbl.SetValue(_T("pol_unitprice"), m_nUnitPrice);
	m_purchase_orderlineTbl.SetValue(_T("pol_saleprice"), m_nSalePrice);
	m_purchase_orderlineTbl.SetValue(_T("pol_tax_id"), m_nTaxID);
	m_purchase_orderlineTbl.SetValue(_T("pol_lotno"), m_szLotNo);
	m_purchase_orderlineTbl.SetValue(_T("pol_expdate"), m_szExprDate);
	m_purchase_orderlineTbl.SetValue(_T("pol_manufacture_id"), m_szManufactureKey);
	m_purchase_orderlineTbl.SetValue(_T("pol_resource_id"), m_nResourceID);
	long nProductExtraId = str2long(m_wndProduct.GetCurrent(17));
	m_purchase_orderlineTbl.SetValue(_T("pol_product_extra_id"), nProductExtraId);
	
	

}
void CPurchaseOrderLineInputEx::SetDefaultValues(){

	m_szProductKey.Empty();
	m_szUom.Empty();
	m_szManufactureKey.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nSalePrice = 0;
	m_nAmount=0;
	m_szSaleUom.Empty();
	m_nConversionRate=0;
	m_szDescription.Empty();
//	m_szStorageCategory.Empty();
//	m_nTaxRate = 0;

}
int CPurchaseOrderLineInputEx::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
		CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
		m_szContractPackage = pPO->m_szContractPkgKey;

		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndProduct.SetFocus();
			
			//if(pPO && pPO->m_szInvoiceNo.IsEmpty()){
			//	m_szLotNo = _T("Kygui");
			//}
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndProduct.EnableWindow(FALSE);
			m_wndManufacture.EnableWindow(FALSE);
			m_wndExprDate.SetFocus();
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

 		UpdateData(FALSE);

 		return nOldMode;
}
void CPurchaseOrderLineInputEx::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItemSel < 0) return;
	m_szDescription = m_wndProduct.GetCurrent(2);
	m_wndDescription.SetWindowText(m_szDescription);
} 
void CPurchaseOrderLineInputEx::OnProductSelendok(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	UINT nShow = SW_SHOW;
	CString szUomID = m_wndProduct.GetCurrent(7);
	CString szProductUomID = m_wndProduct.GetCurrent(8);
	
	m_nUomID = str2long(szUomID);

	if(szUomID == szProductUomID)
		nShow = SW_HIDE;

	m_szUom = m_wndProduct.GetCurrent(3);	
	m_nSalePrice = str2double(m_wndProduct.GetCurrent(13));
	
	if(GetMode() == VM_ADD)
	{
		m_szManufactureKey = m_wndProduct.GetCurrent(11);
		m_nUnitPrice = str2double(m_wndProduct.GetCurrent(12));
		if(!m_szManufactureKey.IsEmpty()){
			m_wndManufacture.EnableWindow(FALSE);
		}
		m_nStdUnitPrice = m_nUnitPrice;
		
	}

	if(pMF->GetModuleID() == _T("MA")){
		CString szIsPrecision = m_wndProduct.GetCurrent(15);
		if(szIsPrecision == _T("Y"))
		{
			m_wndQuantity.SetNumberDecimal(2);
		}
		else
		{
			m_wndQuantity.SetNumberDecimal(2);
		}
		if(m_nSalePrice <=0)
		{
			if(m_szStorageCategory == _T("S") || m_szStorageCategory == _T("A"))
			{
				m_wndSalePrice.SetCheckValue(true);
				m_wndSalePrice.SetReadOnly(FALSE);
			}

		}
	}
	else
	{
		if(m_szStorageCategory == _T("S") || m_szStorageCategory == _T("A"))
		{
			m_wndSalePrice.SetCheckValue(true);
			m_wndSalePrice.SetReadOnly(FALSE);
		}
		else
		{
			m_nSalePrice = 0;
			m_nUnitPrice = 0;
			m_wndSalePrice.SetCheckValue(false);
			m_wndSalePrice.SetReadOnly(TRUE);
		}
		CString szUnitprice = m_wndProduct.GetCurrent(12)
			, szPackageUnitPrice = m_wndProduct.GetCurrent(19);
		if (szUnitprice != szPackageUnitPrice)
		{
			CString szMsg;
			szMsg.Format(_T("Mặt hàng có giá nhập [%s] khác giá thầu [%s]!")
				, szUnitprice, szPackageUnitPrice);
			//ShowMessageBox(szMsg);
			ShowToolTip(&m_wndProduct, szMsg);
		}
	}

	UpdateData(FALSE); 
}
/*void CPurchaseOrderLineInputEx::OnProductSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnProductKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere, szFilter;
	szWhere.Format(_T(" and (product_bpartnerid='%s' or product_bpartnerid is null) "), m_szPartnerID);
	szFilter.Empty();
	CPurchaseOrderDialogEx* pPO = (CPurchaseOrderDialogEx*) m_pWndOrder;
	if (pPO->IsNonStock())
	{
		szFilter.Format(_T(" and product_nonstock = 'Y'"));
	}
	if(!m_szContractPackage.IsEmpty())
	{
        m_nContractID =
            str2long(((CPurchaseOrderDialogEx *)m_pWndOrder)->m_szContractKey);
		szFilter.AppendFormat(L" and mpei_so_hop_dong=%ld ", m_nContractID);
		return pMF->LoadProductPackageList(&m_wndProduct, m_szProductKey, _T(""), szFilter);
	}
	return pMF->LoadProductList(&m_wndProduct, m_szProductKey, szFilter);

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
/*void CPurchaseOrderLineInputEx::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderLineInputEx::OnUomChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUomSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUomKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnUomCheckValue(){
	return 0;
} 
void CPurchaseOrderLineInputEx::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnWarehouseSelendok(){
	 
}
/*void CPurchaseOrderLineInputEx::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey);

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
/*void CPurchaseOrderLineInputEx::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderLineInputEx::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnVATSelendok(){
	 
}
/*void CPurchaseOrderLineInputEx::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnVATKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnVATLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadTaxList(&m_wndVAT, m_szVATKey);
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
/*void CPurchaseOrderLineInputEx::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderLineInputEx::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnManufactureSelendok(){
	 
}
/*void CPurchaseOrderLineInputEx::OnManufactureSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnManufactureKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnManufactureLoadData(){
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
/*void CPurchaseOrderLineInputEx::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderLineInputEx::OnLotNoChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnLotNoSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnLotNoKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnLotNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInputEx::OnExprDateChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnExprDateSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnExprDateKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnExprDateCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szExprDate.Trim();
	if(!m_szExprDate.IsEmpty())
	{
		if(!CDate::IsValid(m_szExprDate))
			return -1;
		
		if(CompareDate(m_szExprDate, pMF->GetSysDate()) < 0)
			return -1;
		CString szMaxDate;
		szMaxDate.Format(_T("%.4d/12/31"), str2int(pMF->GetSysDate().Left(4))+10);
		if(CompareDate(m_szExprDate, szMaxDate) > 0)
			return -1;
	}
	return 0;
}
/*void CPurchaseOrderLineInputEx::OnQuantityChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnQuantitySetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnQuantityKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_nQuantity <= 0)
		return -1;
	
	long nProductExtraID= str2long(m_wndProduct.GetCurrent(17));
	// check xem co vuot so luong thau hay ko
	if(nProductExtraID >0)
	{	
		double nQty=0;
		CString szSQL,tmpStr;
		szSQL.Format(_T(" M_CHECKQTYONCONTRAACTORLIST(%ld,%0.f) "),nProductExtraID,m_nQuantity );
	//	tmpStr= pMF->ExecDML(szSQL);
		nQty = str2double(pMF->ExecDML(szSQL));
		_tprintf(_T("%0.f"),nQty);
		if(nQty <0)
		{
			tmpStr.Format(_T("Số lượng nhập thêm sẽ vượt thầu. Cần kiểm tra lại! "));
			ShowToolTip(&m_wndQuantity,tmpStr);
		}
	}

	return 0;


} 
/*void CPurchaseOrderLineInputEx::OnUnitPriceChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUnitPriceSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUnitPriceKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnUnitPriceCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	double nSalePrice = 0;
	if(m_nUnitPrice <= 0)
		return -1;
	m_nAmount = m_nUnitPrice*m_nQuantity;
	
	if(m_nUnitPrice != m_nStdUnitPrice){
//		m_wndUnitPrice.SetToolTipMessage(_T("Notice: unitprice <> birding price"));
//		if(GetFocus()->GetSafeHwnd() == m_wndUnitPrice.GetSafeHwnd())
//			return -1;
	}
	
	
//	m_nSalePrice = str2double(m_wndProduct.GetCurrent(13));


	if(pMF->GetModuleID() == _T("PM"))
	{
		if(m_nSalePrice <= 0)
		{
			m_nSalePrice = m_nUnitPrice+m_nUnitPrice*m_nTaxRate;
		}
		if(m_szStorageCategory == _T("S") || m_szStorageCategory == _T("A"))
		{
			/*float sale_price = str2float(m_wndProduct.GetCurrent(13));
			_tprintf(_T("\r\n%f: %f"), sale_price, m_nSalePrice);
			if (m_nSalePrice > 0 && m_nSalePrice != sale_price)
				return 0;
			m_nSalePrice = str2double(m_wndProduct.GetCurrent(13));*/
		}
		else
		{
			m_nSalePrice = m_nUnitPrice+m_nUnitPrice*m_nTaxRate;
			//m_wndSalePrice.EnableWindow(FALSE);
			//m_nSalePrice = str2double(m_wndProduct.GetCurrent(13));
		}
	}
	else
	{
		m_nSalePrice = str2double(m_wndProduct.GetCurrent(13));
	}

	if (pMF->GetModuleID() == _T("PM"))
	{
		nSalePrice = m_nUnitPrice+m_nUnitPrice*m_nTaxRate;
		szSQL.Format(_T("sale_calcprice(%d, %ld, %.2f)")
					, m_nStorageID, str2long(m_szProductKey), nSalePrice);
		nSalePrice = str2double(pMF->ExecDML(szSQL));
		if (nSalePrice > 0) 
		{
			m_nSalePrice = nSalePrice;
		}
	}
	UpdateData(FALSE);
	return 0;
}

/*void CPurchaseOrderLineInputEx::OnSalePriceChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSalePriceSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSalePriceKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnSalePriceCheckValue(){
	if(m_nSalePrice <= 0){
		return -1;
	}
_tprintf(_T("\r\nsaleprice=%f"), m_nSalePrice);
	return 0;
}

/*void CPurchaseOrderLineInputEx::OnAmountChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnAmountSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnAmountKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInputEx::OnSaleUomChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSaleUomSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSaleUomKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnSaleUomCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInputEx::OnConversionRateChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnConversionRateSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnConversionRateKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnConversionRateCheckValue(){
	return 0;
} 
void CPurchaseOrderLineInputEx::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderLineInput();
} 
void CPurchaseOrderLineInputEx::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
	if(m_pWndLines)
	{
		m_pWndLines->SetFocus();
	}
} 
int CPurchaseOrderLineInputEx::OnAddPurchaseOrderLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderLineInputEx::OnEditPurchaseOrderLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderLineInputEx::OnDeletePurchaseOrderLineInput(){
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
int CPurchaseOrderLineInputEx::OnSavePurchaseOrderLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szMsg;
	int ret = 0;
	szSQL.Format(_T("PURCHASE_ORDERLINE_CHECKQTY(%ld, %f)"), str2long(m_szProductKey), m_nQuantity);
	ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		szMsg = _T("Số lượng nhập vượt quá số lượng thầu!");
		ShowMessageBox(szMsg);
		//return -1;
	}
	if (ret > 0)
	{
		szMsg = _T("Số lượng nhập vượt quá 80% số lượng thầu!");
		ShowMessageBox(szMsg);
	}
	if (GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("PURCHASE_ORDERLINE_DELETE(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
		ret = str2int(pMF->ExecDML(szSQL));
		if (ret > 0) 
			m_purchase_orderlineTbl.SetValue(_T("pol_purchase_orderline_id"), 0);
		else
		{
			AfxMessageBox(_T("Error occured!"));
			return -1;
		}
	}
	szSQL.Format(_T("PURCHASE_ORDER_CREATELINE(%s) "), m_purchase_orderlineTbl.FormatSQL());
_tprintf(_T("SQL:%s"), szSQL);
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
 	ret = str2int(pMF->ExecDML(szSQL));
_tprintf(_T("%d"), ret);
 	if(ret > 0)
 	{
		CPurchaseOrderLinesEx* pLines = (CPurchaseOrderLinesEx*) m_pWndLines;
		if(pLines) pLines->Refresh(m_nOrderID);

		if(GetMode() == VM_ADD)
		{
			SetMode(VM_ADD);
		}
		else
			CGuiPopup::ClosePopup();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderLineInputEx::OnCancelPurchaseOrderLineInput(){
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
int CPurchaseOrderLineInputEx::OnPurchaseOrderLineInputListLoadData(){
	return 0;
}


void CPurchaseOrderLineInputEx::OnSalePriceButtonSelect(){
}