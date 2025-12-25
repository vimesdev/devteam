#include "PurchaseOrderLineInputEx.h"
#include "MainFrm.h"
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
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInputEx *pVw = (CPurchaseOrderLineInputEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderLineInputEx *pVw = (CPurchaseOrderLineInputEx *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderLineInputExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnAddPurchaseOrderLineInputEx();
} 
static int _OnEditPurchaseOrderLineInputExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnEditPurchaseOrderLineInputEx();
} 
static int _OnDeletePurchaseOrderLineInputExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnDeletePurchaseOrderLineInputEx();
} 
static int _OnSavePurchaseOrderLineInputExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnSavePurchaseOrderLineInputEx();
} 
static int _OnCancelPurchaseOrderLineInputExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderLineInputEx*)pWnd)->OnCancelPurchaseOrderLineInputEx();
} 
CPurchaseOrderLineInputEx::CPurchaseOrderLineInputEx(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CPurchaseOrderLineInputEx::~CPurchaseOrderLineInputEx(){
}
void CPurchaseOrderLineInputEx::OnCreateComponents(){
	m_wndProductLabel.Create(this, _T("Product"), 5, 5, 105, 30);
	m_wndProduct.Create(this,110, 5, 395, 30); 
	m_wndUomLabel.Create(this, _T("Purchase Uom"), 400, 5, 505, 30);
	m_wndUom.Create(this,510, 5, 595, 30); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 600, 5, 700, 30);
	m_wndManufacture.Create(this,705, 5, 980, 30); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 5, 35, 105, 60);
	m_wndLotNo.Create(this,110, 35, 195, 60); 
	m_wndExprDateLabel.Create(this, _T("Exp Date"), 200, 35, 295, 60);
	m_wndExprDate.Create(this,300, 35, 395, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 400, 35, 505, 60);
	m_wndQuantity.Create(this,510, 35, 595, 60); 
	m_wndUnitPriceLabel.Create(this, _T("Purchase Price"), 600, 35, 700, 60);
	m_wndUnitPrice.Create(this,705, 35, 795, 60); 
	m_wndAmountLabel.Create(this, _T("Amount"), 800, 35, 880, 60);
	m_wndAmount.Create(this,885, 35, 975, 60); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 600, 65, 700, 90);
	m_wndSalePrice.Create(this,705, 65, 795, 90); 
	m_wndSalePriceButton.Create(this, _T("..."), 800, 65, 823, 90);
	m_wndDescription.Create(this, _T(""), 5, 65, 595, 90);
	m_wndSave.Create(this, _T("&Save"), 859, 65, 939, 90);
	m_wndClose.Create(this, _T("X"), 944, 65, 975, 90);

}
void CPurchaseOrderLineInputEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(35);
	m_wndLotNo.SetLimitText(35);
	m_wndLotNo.SetCheckValue(true);
	m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDate.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
	m_wndSalePrice.SetCheckValue(true);


	m_wndProduct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProduct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndManufacture.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_purchase_orderlineTbl.SetTableName(_T("purchase_orderline"));
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDERLINE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_CLIENT_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_ORG_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_CREATEDBY"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_CREATEDDATE"), dfDateTime); 
	m_purchase_orderlineTbl.AddField(_T("POL_UPDATEDBY"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_UPDATEDDATE"), dfDateTime); 
	m_purchase_orderlineTbl.AddField(_T("POL_ISACTIVE"), dfText, 1); 
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDER_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_LINE"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_STORAGE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_ITEM_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_LOTNO"), dfText, 15); 
	m_purchase_orderlineTbl.AddField(_T("POL_HASEXP"), dfText, 1); 
	m_purchase_orderlineTbl.AddField(_T("POL_EXPDATE"), dfDate); 
	m_purchase_orderlineTbl.AddField(_T("POL_MANUFACTURE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_RESOURCE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_ASSET_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_UNITPRICE"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_ORDER_QTY"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_RESERVE_QTY"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_DELIVERY_QTY"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_INVOICE_QTY"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_CURRENCY_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAX_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAX_RATE"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_NETAMOUNT"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAXAMOUNT"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_DISCOUNTAMOUNT"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_CHARGE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_CHARGEAMOUNT"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_GRANDTOTAL"), dfLong); 

}
void CPurchaseOrderLineInputEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	m_wndSalePriceButton.SetEvent(WE_CLICK, _OnSalePriceButtonSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPurchaseOrderLineInputEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);

}
void CPurchaseOrderLineInputEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderLineInputEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseOrderLineInputEx::SetDefaultValues(){

	m_szProductKey.Empty();
	m_szUom.Empty();
	m_szManufactureKey.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nAmount=0;
	m_nSalePrice=0;

}
int CPurchaseOrderLineInputEx::SetMode(int nMode){
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
void CPurchaseOrderLineInputEx::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnProductSelendok(){
	 
}
/*void CPurchaseOrderLineInputEx::OnProductSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnProductKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnProductLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
void CPurchaseOrderLineInputEx::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnManufactureSelendok(){
	 
}
/*void CPurchaseOrderLineInputEx::OnManufactureSetfocus(){
	
}*/
/*void CPurchaseOrderLineInputEx::OnManufactureKillfocus(){
	
}*/
long CPurchaseOrderLineInputEx::OnManufactureLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
	return 0;
} 
/*void CPurchaseOrderLineInputEx::OnQuantityChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnQuantitySetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnQuantityKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnQuantityCheckValue(){
	return 0;
} 
/*void CPurchaseOrderLineInputEx::OnUnitPriceChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUnitPriceSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnUnitPriceKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnUnitPriceCheckValue(){
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
/*void CPurchaseOrderLineInputEx::OnSalePriceChange(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSalePriceSetfocus(){
	
} */
/*void CPurchaseOrderLineInputEx::OnSalePriceKillfocus(){
	
} */
int CPurchaseOrderLineInputEx::OnSalePriceCheckValue(){
	return 0;
} 
void CPurchaseOrderLineInputEx::OnSalePriceButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderLineInputEx::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderLineInputEx::OnAddPurchaseOrderLineInputEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderLineInputEx::OnEditPurchaseOrderLineInputEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderLineInputEx::OnDeletePurchaseOrderLineInputEx(){
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
 		OnCancelPurchaseOrderLineInputEx();
 	}
	return 0;
}
int CPurchaseOrderLineInputEx::OnSavePurchaseOrderLineInputEx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_purchase_orderlineTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_purchase_orderlineTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPurchaseOrderLineInputExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderLineInputEx::OnCancelPurchaseOrderLineInputEx(){
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
int CPurchaseOrderLineInputEx::OnPurchaseOrderLineInputExListLoadData(){
	return 0;
}
