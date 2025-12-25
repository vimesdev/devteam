#include "StorageReturnOrderLineInput.h"
#include "MainFrame_E10.h"
#include "StorageReturnOrderDialog.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderLineInput* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderLineInput *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderLineInput *)pWnd)->OnOnHandCheckValue();
} 


static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageReturnOrderLineInput *pVw = (CStorageReturnOrderLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageReturnOrderLineInput *pVw = (CStorageReturnOrderLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLineInput*)pWnd)->OnAddStorageReturnOrderLineInput();
} 
static int _OnEditStorageReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLineInput*)pWnd)->OnEditStorageReturnOrderLineInput();
} 
static int _OnDeleteStorageReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLineInput*)pWnd)->OnDeleteStorageReturnOrderLineInput();
} 
static int _OnSaveStorageReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLineInput*)pWnd)->OnSaveStorageReturnOrderLineInput();
} 
static int _OnCancelStorageReturnOrderLineInputFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderLineInput*)pWnd)->OnCancelStorageReturnOrderLineInput();
} 
CStorageReturnOrderLineInput::CStorageReturnOrderLineInput(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
	CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 1000;
	m_nDlgHeight = 95;
	SetDefaultValues();
	m_nOrderID = 0;
	m_nOrderLine = 0;
	m_pWndLines = pParent;
}

CStorageReturnOrderLineInput::~CStorageReturnOrderLineInput(){
}
void CStorageReturnOrderLineInput::OnCreateComponents(){
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
void CStorageReturnOrderLineInput::OnInitializeComponents(){
	
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
	m_wndProduct.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
	m_wndProduct.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
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
void CStorageReturnOrderLineInput::OnSetWindowEvents(){
	
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
	

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);


}
void CStorageReturnOrderLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
}
void CStorageReturnOrderLineInput::GetDataToScreen(){
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
void CStorageReturnOrderLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), 0);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), m_nStorageToID);

	CString tmpStr;
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	tmpStr = m_wndProduct.GetCurrent(1);

	m_transactionlineTbl.SetValue(_T("mtl_product_id"), tmpStr);
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nQuantity);

}
void CStorageReturnOrderLineInput::SetDefaultValues(){

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
int CStorageReturnOrderLineInput::SetMode(int nMode){
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
void CStorageReturnOrderLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderLineInput::OnProductSelendok(){
	UpdateData(TRUE);
	m_szUom = m_wndProduct.GetCurrent(4);
	m_nUnitPrice = str2double(m_wndProduct.GetCurrent(6));

	m_nOnHand = str2double(m_wndProduct.GetCurrent(8));
	m_szLotNo = m_wndProduct.GetCurrent(9);
	m_szExprDate = CDate::Convert(m_wndProduct.GetCurrent(10), ddmmyyyy, yyyymmdd);
	m_szManufactureKey = m_wndProduct.GetCurrent(11);
	
	UpdateData(FALSE); 
}
/*void CStorageReturnOrderLineInput::OnProductSetfocus(){
	
}*/
/*void CStorageReturnOrderLineInput::OnProductKillfocus(){
	
}*/
long CStorageReturnOrderLineInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld "), m_nStorageID);
	
	szFilter.AppendFormat(_T(" and msl_product_item_id ") \
		_T("in(select mtl_product_item_id from m_transaction left join m_transactionline on(mt_transaction_id=mtl_transaction_id) ") \
		_T(" where mt_storage_id=%ld and mt_department_to_id='%s' ) "), m_nStorageToID, m_szDepartmentID);
	return pMF->LoadProductItemList(&m_wndProduct, m_szProductKey, szFilter);

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
/*void CStorageReturnOrderLineInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageReturnOrderLineInput::OnUomChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnUomSetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnUomKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnUomCheckValue(){
	return 0;
} 

void CStorageReturnOrderLineInput::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderLineInput::OnManufactureSelendok(){
	 
}
/*void CStorageReturnOrderLineInput::OnManufactureSetfocus(){
	
}*/
/*void CStorageReturnOrderLineInput::OnManufactureKillfocus(){
	
}*/
long CStorageReturnOrderLineInput::OnManufactureLoadData(){
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
/*void CStorageReturnOrderLineInput::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageReturnOrderLineInput::OnLotNoChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnLotNoSetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnLotNoKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnLotNoCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderLineInput::OnExprDateChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnExprDateSetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnExprDateKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnExprDateCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderLineInput::OnQuantityChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnQuantitySetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnQuantityKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnQuantityCheckValue(){
	
	return 0;
} 
/*void CStorageReturnOrderLineInput::OnUnitPriceChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnUnitPriceSetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnUnitPriceKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnUnitPriceCheckValue(){
	
	return 0;
} 
/*void CStorageReturnOrderLineInput::OnOnHandChange(){
	
} */
/*void CStorageReturnOrderLineInput::OnOnHandSetfocus(){
	
} */
/*void CStorageReturnOrderLineInput::OnOnHandKillfocus(){
	
} */
int CStorageReturnOrderLineInput::OnOnHandCheckValue(){
	return 0;
} 

void CStorageReturnOrderLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageReturnOrderLineInput();
} 
void CStorageReturnOrderLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CStorageReturnOrderLineInput::OnAddStorageReturnOrderLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageReturnOrderLineInput::OnEditStorageReturnOrderLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageReturnOrderLineInput::OnDeleteStorageReturnOrderLineInput(){
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
 		OnCancelStorageReturnOrderLineInput();
 	}
	return 0;
}
int CStorageReturnOrderLineInput::OnSaveStorageReturnOrderLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_RETURNORDER_ADDLINE(%s) "), m_transactionlineTbl.FormatSQL());

 //Notice(szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		CStorageReturnOrderLines* pLines = (CStorageReturnOrderLines*) m_pWndLines;
		if(pLines) pLines->Refresh(m_nOrderID);
		if(GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiPopup::ClosePopup();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageReturnOrderLineInput::OnCancelStorageReturnOrderLineInput(){
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
int CStorageReturnOrderLineInput::OnStorageReturnOrderLineInputListLoadData(){
	return 0;
}
