#include "PurchaseReturnOrderLineInput.h"
#include "MainFrame_E10.h"
#include "PurchaseReturnOrderDialog.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseReturnOrderLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseReturnOrderLineInput* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderLineInput *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderLineInput *)pWnd)->OnOnHandCheckValue();
} 


static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderLineInput *pVw = (CPurchaseReturnOrderLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderLineInput *pVw = (CPurchaseReturnOrderLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLineInput*)pWnd)->OnAddPurchaseReturnOrderLineInput();
} 
static int _OnEditPurchaseReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLineInput*)pWnd)->OnEditPurchaseReturnOrderLineInput();
} 
static int _OnDeletePurchaseReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLineInput*)pWnd)->OnDeletePurchaseReturnOrderLineInput();
} 
static int _OnSavePurchaseReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLineInput*)pWnd)->OnSavePurchaseReturnOrderLineInput();
} 
static int _OnCancelPurchaseReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderLineInput*)pWnd)->OnCancelPurchaseReturnOrderLineInput();
} 
CPurchaseReturnOrderLineInput::CPurchaseReturnOrderLineInput(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
	CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 1000;
	m_nDlgHeight = 95;
	SetDefaultValues();
	m_nOrderID = 0;
	m_nOrderLine = 0;
	m_pWndLines = pParent;
}

CPurchaseReturnOrderLineInput::~CPurchaseReturnOrderLineInput(){
}
void CPurchaseReturnOrderLineInput::OnCreateComponents(){
	m_wndProductLabel.Create(this, _T("Item Name"), 5, 5, 105, 30);
	m_wndProduct.Create(this,110, 5, 435, 30); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 440, 5, 540, 30);
	m_wndUom.Create(this,545, 5, 655, 30); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 660, 5, 760, 30);
	m_wndManufacture.Create(this,765, 5, 980, 30); 
	m_wndExprDateLabel.Create(this, _T("Expr Date"), 5, 35, 105, 60);
	m_wndExprDate.Create(this,110, 35, 210, 60); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 215, 35, 315, 60);
	m_wndLotNo.Create(this,320, 35, 435, 60); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 440, 35, 540, 60);
	m_wndUnitPrice.Create(this,545, 35, 655, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 660, 35, 760, 60);
	m_wndQuantity.Create(this,765, 35, 865, 60); 
	m_wndOnHand.Create(this,870, 35, 980, 60); 
	m_wndSave.Create(this, _T("&Save"), 864, 65, 949, 90);
	m_wndClose.Create(this, _T("X"), 954, 65, 979, 90);

}
void CPurchaseReturnOrderLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	//m_wndUom.SetCheckValue(true);
	//m_wndManufacture.SetCheckValue(true);
	m_wndManufacture.LimitText(35);
	m_wndLotNo.SetLimitText(35);
	//m_wndLotNo.SetCheckValue(true);
	//m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndExprDate.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	//m_wndUnitPrice.SetCheckValue(true);
	m_wndOnHand.SetLimitText(16);
	//m_wndOnHand.SetCheckValue(true);

	m_wndUom.SetReadOnly(TRUE);
	m_wndManufacture.SetReadOnly(TRUE);
	m_wndLotNo.SetReadOnly(TRUE);
	m_wndExprDate.SetReadOnly(TRUE);
	m_wndUnitPrice.SetReadOnly(TRUE);
	m_wndOnHand.SetReadOnly(TRUE);


	m_wndProduct.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ProductItemID
	m_wndProduct.InsertColumn(1, _T(""), CFMT_NUMBER, 0); //Product_ID
	m_wndProduct.InsertColumn(2, _T("ID"), CFMT_NUMBER, 70);
	m_wndProduct.InsertColumn(3, _T("Name"), CFMT_TEXT, 150);
	m_wndProduct.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 150);
	m_wndProduct.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
	m_wndProduct.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
	m_wndProduct.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 100);
	m_wndProduct.Format(11, 3);
	
	

//	m_transactionlineTbl.SetTableName(_T("m_transactionline"));
//	m_transactionlineTbl.AddField(_T("MTL_CLIENT_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTION_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTIONLINE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_ORG_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_USER_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_TO_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ITEM_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_QTYORDER"), dfDouble); 

	m_wndUom.SetReadOnly(true);
	
	m_wndOnHand.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetTextColor(RGB(0, 0, 255));

}
void CPurchaseReturnOrderLineInput::OnSetWindowEvents(){
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
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	

	CPurchaseReturnOrderDialog* pDlg = (CPurchaseReturnOrderDialog*) m_pWndOrder;
	if(pDlg == NULL)
		return ;

	m_szType = pDlg->m_szType;

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);


}
void CPurchaseReturnOrderLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
}
void CPurchaseReturnOrderLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mtl_product_id, ") \
		_T(" mtl_product_item_id, ") \
		_T(" mtl_qtyorder " )\
		_T("FROM m_transactionline ") \
		_T("WHERE mtl_transaction_id=%ld and mtl_transactionline_id=%ld"), m_nOrderID, m_nOrderLine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("mtl_product_item_id"), m_szProductKey);
		rs.GetValue(_T("mtl_qtyorder"), m_nQuantity);
	}

}
void CPurchaseReturnOrderLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), m_nStorageID);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), 0);

	CString tmpStr;
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	tmpStr = m_wndProduct.GetCurrent(1);

	m_transactionlineTbl.SetValue(_T("mtl_product_id"), tmpStr);
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nQuantity);

}
void CPurchaseReturnOrderLineInput::SetDefaultValues(){

	m_szProductKey.Empty();
	m_szUom.Empty();
	m_szManufactureKey.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nOnHand=0;
	m_nOrderLine = 0;
}
int CPurchaseReturnOrderLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
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
		m_wndManufacture.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPurchaseReturnOrderLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderLineInput::OnProductSelendok(){
	UpdateData(TRUE);
	m_szUom = m_wndProduct.GetCurrent(4);
	m_nUnitPrice = str2double(m_wndProduct.GetCurrent(6));

	m_nOnHand = str2double(m_wndProduct.GetCurrent(8));
	m_szLotNo = m_wndProduct.GetCurrent(9);
	m_szExprDate = CDate::Convert(m_wndProduct.GetCurrent(10), ddmmyyyy, yyyymmdd);
	m_szManufactureKey = m_wndProduct.GetCurrent(11);
	
	UpdateData(FALSE); 
}
/*void CPurchaseReturnOrderLineInput::OnProductSetfocus(){
	
}*/
/*void CPurchaseReturnOrderLineInput::OnProductKillfocus(){
	
}*/
long CPurchaseReturnOrderLineInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return LoadProductItemList(&m_wndProduct, m_szProductKey, _T(""));

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

long	CPurchaseReturnOrderLineInput::LoadProductItemList(CWnd* pWnd, CString szKey, CString szFilter){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseReturnOrderDialog* pDlg = (CPurchaseReturnOrderDialog*) m_pWndOrder;
	if(pDlg == NULL)
		return 0;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szWhere, szSupplierID, szTmpTbl;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	
	if(pCB->IsSearchKey() && str2long(szKey) > 0){
		szWhere.Format(_T(" AND product_item_id=%ld "), str2long(szKey));
	};

	if(!szFilter.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szFilter);

	pCB->SetRequirementLength(1);
	
	CString szText;
	StringLower(pCB->GetKey(), szText);
	if(!szText.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "), szText);
	}
	szSupplierID = pDlg->m_szSupplierKey;
	CString szSQL1,szCategory, szOrgId,szStock;
	szSQL1.Format(_T("Select msl_category, msl_org_id from m_storagelist where msl_storage_id= %d"),m_nStorageID);
	rs1.ExecSQL(szSQL1);
	if(!rs1.IsEOF())
	{
		rs1.GetValue(_T("msl_category"),  szCategory);
		rs1.GetValue(_T("msl_org_id"),  szOrgId);
	}
	if(szCategory== _T("S") && szOrgId == _T("PM"))
		szStock.Format(_T(" po_storage_id in (14,23,3,68) "));
	else
		szStock.Format(_T(" po_storage_id = %ld "),m_nStorageID);
	
	szWhere.AppendFormat(_T(" and msl_storage_id=%ld  and abs(msl_qtyonhand-msl_qtyordered) > 0 "), m_nStorageID);
	szTmpTbl.Format(L"with tbl(id) as (select pol_product_item_id from purchase_order left join purchase_orderline on(po_purchase_order_id=pol_purchase_order_id) " \
					L" where %s and po_partner_id='%s' ) ", szStock, szSupplierID);
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szWhere.Append(L" and msl_product_item_id  in (select id from tbl)");
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("%s ") \
	_T(" SELECT product_item_id,") \
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
	_T(" ORDER BY product_name") \
	, szTmpTbl, szWhere);

	Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s:%d"), szSQL, nCount);
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


/*void CPurchaseReturnOrderLineInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseReturnOrderLineInput::OnUomChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnUomSetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnUomKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnUomCheckValue(){
	return 0;
} 

void CPurchaseReturnOrderLineInput::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderLineInput::OnManufactureSelendok(){
	 
}
/*void CPurchaseReturnOrderLineInput::OnManufactureSetfocus(){
	
}*/
/*void CPurchaseReturnOrderLineInput::OnManufactureKillfocus(){
	
}*/
long CPurchaseReturnOrderLineInput::OnManufactureLoadData(){
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
/*void CPurchaseReturnOrderLineInput::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseReturnOrderLineInput::OnLotNoChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnLotNoSetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnLotNoKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnLotNoCheckValue(){
	return 0;
} 
/*void CPurchaseReturnOrderLineInput::OnExprDateChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnExprDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnExprDateKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnExprDateCheckValue(){
	return 0;
} 
/*void CPurchaseReturnOrderLineInput::OnQuantityChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnQuantitySetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnQuantityKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("GET_QTYORDERONHAND(%ld, %ld) "), m_nStorageID, str2long(m_szProductKey));

	m_nOnHand = str2double(pMF->ExecDML(szSQL));

	if(m_nQuantity <= 0 || m_nQuantity > m_nOnHand)
	{
		UpdateData(FALSE);
		return -1;
	}
	return 0;
} 
/*void CPurchaseReturnOrderLineInput::OnUnitPriceChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnUnitPriceSetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnUnitPriceKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nOnHand = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CPurchaseReturnOrderLineInput::OnOnHandChange(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnOnHandSetfocus(){
	
} */
/*void CPurchaseReturnOrderLineInput::OnOnHandKillfocus(){
	
} */
int CPurchaseReturnOrderLineInput::OnOnHandCheckValue(){
	return 0;
} 

void CPurchaseReturnOrderLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseReturnOrderLineInput();
} 
void CPurchaseReturnOrderLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseReturnOrderLineInput::OnAddPurchaseReturnOrderLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseReturnOrderLineInput::OnEditPurchaseReturnOrderLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseReturnOrderLineInput::OnDeletePurchaseReturnOrderLineInput(){
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
 		OnCancelPurchaseReturnOrderLineInput();
 	}
	return 0;
}
int CPurchaseReturnOrderLineInput::OnSavePurchaseReturnOrderLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_TRANSACTIONLINE_CREATE(%s) "), m_transactionlineTbl.FormatSQL());
/*
	if(GetMode() == VM_ADD){
		szSQL = m_transactionlineTbl.GetInsertSQL();
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mtl_transactionline_id=%ld"), m_nOrderLine);
		szSQL.Format(_T("%s %s"),
			m_transactionlineTbl.GetUpdateSQL(_T("mtl_createdby,mtl_createddate,mtl_transactionline_id,mtl_transaction_id")),
			szWhere);

	}
*/
 //Notice(szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		CPurchaseReturnOrderLines* pLines = (CPurchaseReturnOrderLines*) m_pWndLines;

		if(GetMode() == VM_ADD)
		{
			pLines->Refresh(m_nOrderID);
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
int CPurchaseReturnOrderLineInput::OnCancelPurchaseReturnOrderLineInput(){
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
int CPurchaseReturnOrderLineInput::OnPurchaseReturnOrderLineInputListLoadData(){
	return 0;
}
