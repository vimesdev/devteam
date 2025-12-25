#include "StorageMovementLineInput.h"
#include "MainFrame_E10.h"
#include "StorageMovementDialog.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementLineInput* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CStorageMovementLineInput *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementLineInput *)pWnd)->OnOnHandCheckValue();
} 


static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageMovementLineInput *pVw = (CStorageMovementLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageMovementLineInput *pVw = (CStorageMovementLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageMovementLineInputFnc(CWnd *pWnd){
	 return ((CStorageMovementLineInput*)pWnd)->OnAddStorageMovementLineInput();
} 
static int _OnEditStorageMovementLineInputFnc(CWnd *pWnd){
	 return ((CStorageMovementLineInput*)pWnd)->OnEditStorageMovementLineInput();
} 
static int _OnDeleteStorageMovementLineInputFnc(CWnd *pWnd){
	 return ((CStorageMovementLineInput*)pWnd)->OnDeleteStorageMovementLineInput();
} 
static int _OnSaveStorageMovementLineInputFnc(CWnd *pWnd){
	 return ((CStorageMovementLineInput*)pWnd)->OnSaveStorageMovementLineInput();
} 
static int _OnCancelStorageMovementLineInputFnc(CWnd *pWnd){
	 return ((CStorageMovementLineInput*)pWnd)->OnCancelStorageMovementLineInput();
} 
CStorageMovementLineInput::CStorageMovementLineInput(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
	CGuiPopup::SetMode(nMode);
	m_pWndLines = pParent;
	m_nDlgWidth = 980;
	m_nDlgHeight = 65;
	SetDefaultValues();
	m_nOrderID = 0;
	m_nOrderLine = 0;
}

CStorageMovementLineInput::~CStorageMovementLineInput(){
}
void CStorageMovementLineInput::OnCreateComponents(){
/*
	m_wndProductLabel.Create(this, _T("Product"), 5, 5, 105, 30);
	m_wndProduct.Create(this,110, 5, 450, 30); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 455, 5, 555, 30);
	m_wndUom.Create(this,560, 5, 675, 30); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 5, 35, 105, 60);
	m_wndManufacture.Create(this,110, 35, 225, 60); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 230, 35, 330, 60);
	m_wndLotNo.Create(this,335, 35, 450, 60); 
	m_wndExprDateLabel.Create(this, _T("Expr Date"), 455, 35, 555, 60);
	m_wndExprDate.Create(this,560, 35, 675, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 65, 105, 90);
	m_wndQuantity.Create(this,110, 65, 225, 90); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 230, 65, 330, 90);
	m_wndUnitPrice.Create(this,335, 65, 450, 90); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 455, 65, 555, 90);
	m_wndOnHand.Create(this,560, 65, 675, 90); 
	m_wndSave.Create(this, _T("&Save"), 490, 95, 580, 120);
	m_wndClose.Create(this, _T("&Close"), 585, 95, 675, 120);
*/
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 5, 105, 30);
	m_wndDescription.Create(this,110, 5, 785, 30); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 790, 5, 870, 30);
	m_wndOnHand.Create(this,875, 5, 975, 30); 
	m_wndProductLabel.Create(this, _T("Item Name"), 5, 35, 105, 60);
	m_wndProduct.Create(this,110, 35, 440, 60); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 445, 35, 565, 60);
	m_wndUom.Create(this,570, 35, 660, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 665, 35, 785, 60);
	m_wndQuantity.Create(this,790, 35, 870, 60); 
	m_wndSave.Create(this, _T("&Save"), 875, 35, 945, 60);
	m_wndClose.Create(this, _T("x"), 950, 35, 975, 60);



}
void CStorageMovementLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	//m_wndUom.SetCheckValue(true);
	//m_wndManufacture.SetCheckValue(true);
//	m_wndManufacture.LimitText(35);
//	m_wndLotNo.SetLimitText(35);
	//m_wndLotNo.SetCheckValue(true);
	//m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndExprDate.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
//	m_wndUnitPrice.SetLimitText(16);
	//m_wndUnitPrice.SetCheckValue(true);
	m_wndOnHand.SetLimitText(16);
	//m_wndOnHand.SetCheckValue(true);

	m_wndUom.SetReadOnly(TRUE);
//	m_wndManufacture.SetReadOnly(TRUE);
//	m_wndLotNo.SetReadOnly(TRUE);
//	m_wndExprDate.SetReadOnly(TRUE);
//	m_wndUnitPrice.SetReadOnly(TRUE);
	m_wndOnHand.SetReadOnly(TRUE);
	m_wndDescription.SetReadOnly(TRUE);

	m_wndProduct.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ProductItemID
	m_wndProduct.InsertColumn(1, _T(""), CFMT_NUMBER, 0); //Product_ID
	m_wndProduct.InsertColumn(2, _T("ID"), CFMT_NUMBER, 80);
	m_wndProduct.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
	m_wndProduct.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
	m_wndProduct.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
	m_wndProduct.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
	m_wndProduct.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndProduct.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
	m_wndProduct.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 150);
	m_wndProduct.Format(11, 3, 5);
	
	

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
//	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetTextColor(RGB(0, 0, 255));

}
void CStorageMovementLineInput::OnSetWindowEvents(){
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
//	m_wndManufacture.SetEvent(WE_SELENDOK, _OnManufactureSelendokFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
//	m_wndManufacture.SetEvent(WE_SELCHANGE, _OnManufactureSelectChangeFnc);
//	m_wndManufacture.SetEvent(WE_LOADDATA, _OnManufactureLoadDataFnc);
	//m_wndManufacture.SetEvent(WE_ADDNEW, _OnManufactureAddNewFnc);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
//	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndExprDate.SetEvent(WE_CHANGE, _OnExprDateChangeFnc);
	//m_wndExprDate.SetEvent(WE_SETFOCUS, _OnExprDateSetfocusFnc);
	//m_wndExprDate.SetEvent(WE_KILLFOCUS, _OnExprDateKillfocusFnc);
//	m_wndExprDate.SetEvent(WE_CHECKVALUE, _OnExprDateCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
//	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
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
	if(nMode == VM_EDIT){
	//	OnProductSelendok();
	}
	


}
void CStorageMovementLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
//	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
//	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
//	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
//	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
}
void CStorageMovementLineInput::GetDataToScreen(){
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
void CStorageMovementLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), m_nStorageID);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), m_nStorageToID);

	CString tmpStr;
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	tmpStr = m_wndProduct.GetCurrent(1);

	m_transactionlineTbl.SetValue(_T("mtl_product_id"), tmpStr);
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nQuantity);

}
void CStorageMovementLineInput::SetDefaultValues(){

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
int CStorageMovementLineInput::SetMode(int nMode){
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
			m_wndProduct.SetFocus();
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
//		m_wndManufacture.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CStorageMovementLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	CString szOnHand;
	szOnHand = m_wndProduct.GetCurrent(8);
	m_szDescription.Format(_T("[%s] %s"), m_wndProduct.GetCurrent(2), m_wndProduct.GetCurrent(3));
	m_wndDescription.SetWindowText(m_szDescription);
	m_wndOnHand.SetWindowText(szOnHand);
	
} 
void CStorageMovementLineInput::OnProductSelendok(){
	UpdateData(TRUE);
	m_szUom = m_wndProduct.GetCurrent(4);
	m_nUnitPrice = str2double(m_wndProduct.GetCurrent(6));

	m_nOnHand = str2double(m_wndProduct.GetCurrent(8));
	m_szLotNo = m_wndProduct.GetCurrent(9);
	m_szExprDate = CDate::Convert(m_wndProduct.GetCurrent(10), ddmmyyyy, yyyymmdd);
	m_szManufactureKey = m_wndProduct.GetCurrent(11);
	m_szDescription.Format(_T("[%s] %s"), m_wndProduct.GetCurrent(2), m_wndProduct.GetCurrent(3));
	
	UpdateData(FALSE); 
}
/*void CStorageMovementLineInput::OnProductSetfocus(){
	
}*/
/*void CStorageMovementLineInput::OnProductKillfocus(){
	
}*/
long CStorageMovementLineInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld  and abs(msl_qtyonhand-msl_qtyordered) > 0 "), m_nStorageID);
	//Truong hop dieu chuyen tra lai 
	if(m_szType == _T("MRO")){
		szFilter.AppendFormat(_T(" and msl_product_item_id in(select msl_product_item_id from m_storageline where msl_storage_id=%d) "), m_nStorageToID);
	}
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
/*void CStorageMovementLineInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMovementLineInput::OnUomChange(){
	
} */
/*void CStorageMovementLineInput::OnUomSetfocus(){
	
} */
/*void CStorageMovementLineInput::OnUomKillfocus(){
	
} */
int CStorageMovementLineInput::OnUomCheckValue(){
	return 0;
} 

void CStorageMovementLineInput::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMovementLineInput::OnManufactureSelendok(){
	 
}
/*void CStorageMovementLineInput::OnManufactureSetfocus(){
	
}*/
/*void CStorageMovementLineInput::OnManufactureKillfocus(){
	
}*/
long CStorageMovementLineInput::OnManufactureLoadData(){
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
/*void CStorageMovementLineInput::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMovementLineInput::OnLotNoChange(){
	
} */
/*void CStorageMovementLineInput::OnLotNoSetfocus(){
	
} */
/*void CStorageMovementLineInput::OnLotNoKillfocus(){
	
} */
int CStorageMovementLineInput::OnLotNoCheckValue(){
	return 0;
} 
/*void CStorageMovementLineInput::OnExprDateChange(){
	
} */
/*void CStorageMovementLineInput::OnExprDateSetfocus(){
	
} */
/*void CStorageMovementLineInput::OnExprDateKillfocus(){
	
} */
int CStorageMovementLineInput::OnExprDateCheckValue(){
	return 0;
} 
/*void CStorageMovementLineInput::OnQuantityChange(){
	
} */
/*void CStorageMovementLineInput::OnQuantitySetfocus(){
	
} */
/*void CStorageMovementLineInput::OnQuantityKillfocus(){
	
} */
int CStorageMovementLineInput::OnQuantityCheckValue(){
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
/*void CStorageMovementLineInput::OnUnitPriceChange(){
	
} */
/*void CStorageMovementLineInput::OnUnitPriceSetfocus(){
	
} */
/*void CStorageMovementLineInput::OnUnitPriceKillfocus(){
	
} */
int CStorageMovementLineInput::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nOnHand = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CStorageMovementLineInput::OnOnHandChange(){
	
} */
/*void CStorageMovementLineInput::OnOnHandSetfocus(){
	
} */
/*void CStorageMovementLineInput::OnOnHandKillfocus(){
	
} */
int CStorageMovementLineInput::OnOnHandCheckValue(){
	return 0;
} 

void CStorageMovementLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageMovementLineInput();
} 
void CStorageMovementLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CStorageMovementLineInput::OnAddStorageMovementLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageMovementLineInput::OnEditStorageMovementLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageMovementLineInput::OnDeleteStorageMovementLineInput(){
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
 		OnCancelStorageMovementLineInput();
 	}
	return 0;
}
int CStorageMovementLineInput::OnSaveStorageMovementLineInput(){
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
		CStorageMovementLines* pLines = (CStorageMovementLines*) m_pWndLines;
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
int CStorageMovementLineInput::OnCancelStorageMovementLineInput(){
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
int CStorageMovementLineInput::OnStorageMovementLineInputListLoadData(){
	return 0;
}
