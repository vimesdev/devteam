#include "CancerStorageExportOrderLineEdit.h"
#include "MainFrame_E10.h"
#include "CancerStorageExportOrderDialog.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerStorageExportOrderLineEdit* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnUomCheckValue();
} 
static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerStorageExportOrderLineEdit* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnManufactureAddNew();
}*/
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CCancerStorageExportOrderLineEdit *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageExportOrderLineEdit *)pWnd)->OnOnHandCheckValue();
} 


static void _OnSaveSelectFnc(CWnd *pWnd){
	CCancerStorageExportOrderLineEdit *pVw = (CCancerStorageExportOrderLineEdit *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCancerStorageExportOrderLineEdit *pVw = (CCancerStorageExportOrderLineEdit *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCancerStorageExportOrderLineEditFnc(CWnd *pWnd){
	 return ((CCancerStorageExportOrderLineEdit*)pWnd)->OnAddCancerStorageExportOrderLineEdit();
} 
static int _OnEditCancerStorageExportOrderLineEditFnc(CWnd *pWnd){
	 return ((CCancerStorageExportOrderLineEdit*)pWnd)->OnEditCancerStorageExportOrderLineEdit();
} 
static int _OnDeleteCancerStorageExportOrderLineEditFnc(CWnd *pWnd){
	 return ((CCancerStorageExportOrderLineEdit*)pWnd)->OnDeleteCancerStorageExportOrderLineEdit();
} 
static int _OnSaveCancerStorageExportOrderLineEditFnc(CWnd *pWnd){
	 return ((CCancerStorageExportOrderLineEdit*)pWnd)->OnSaveCancerStorageExportOrderLineEdit();
} 
static int _OnCancelCancerStorageExportOrderLineEditFnc(CWnd *pWnd){
	 return ((CCancerStorageExportOrderLineEdit*)pWnd)->OnCancelCancerStorageExportOrderLineEdit();
} 
CCancerStorageExportOrderLineEdit::CCancerStorageExportOrderLineEdit(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1000;
	m_nDlgHeight = 95;
	SetDefaultValues();
	m_nOrderID = 0;
	m_nOrderLine = 0;
	m_pWndLines = pParent;
}

CCancerStorageExportOrderLineEdit::~CCancerStorageExportOrderLineEdit(){
}
void CCancerStorageExportOrderLineEdit::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 445, 210);
	m_wndProductLabel.Create(this, _T("Item Name"), 10, 30, 110, 55);
	m_wndProduct.Create(this,115, 30, 440, 55); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 10, 90, 110, 115);
	m_wndUom.Create(this,115, 90, 225, 115); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 10, 120, 110, 145);
	m_wndManufacture.Create(this,115, 120, 440, 145); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 230, 60, 330, 85);
	m_wndLotNo.Create(this,335, 60, 440, 85); 
	m_wndExprDateLabel.Create(this, _T("Expr Date"), 10, 60, 110, 85);
	m_wndExprDate.Create(this,115, 60, 225, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 180, 110, 205);
	m_wndQuantity.Create(this,115, 180, 225, 205); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 10, 150, 110, 175);
	m_wndUnitPrice.Create(this,115, 150, 225, 175); 
	m_wndOnHand.Create(this,230, 180, 340, 205); 
	m_wndSave.Create(this, _T("&Save"), 270, 215, 355, 240);
	m_wndClose.Create(this, _T("X"), 360, 215, 445, 240);
}
void CCancerStorageExportOrderLineEdit::OnInitializeComponents(){
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

	m_transactionlineTbl.AddField(_T("MTL_TRANSACTION_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTIONLINE_ID"), dfLong); 	
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_TO_ID"), dfLong); 	
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ITEM_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_QTYORDER"), dfDouble); 	

	m_wndUom.SetReadOnly(true);
	
	m_wndOnHand.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetTextColor(RGB(0, 0, 255));

}
void CCancerStorageExportOrderLineEdit::OnSetWindowEvents(){
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
	
	/*CCancerStorageExportOrderDialog* pDlg = (CCancerStorageExportOrderDialog*) pMF->GetRefWindow(_T("CancerStorageExportOrderDialog"));
	m_szType = pDlg->m_szTransactionTypeKey;*/

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);


}
void CCancerStorageExportOrderLineEdit::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProduct.GetDlgCtrlID(), m_szProduct);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
}
void CCancerStorageExportOrderLineEdit::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT mtl_transactionline_id, ") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   mtl_product_id, ") \
	_T("   mtl_product_item_id, ") \
	_T("   mtl_qtyorder,") \
	_T("   mtl_qtysold,") \
	_T("   product_taxprice,") \
	_T("   mtl_qtyorder*product_taxprice AS product_amount,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   product_manufacturename ") \
	_T(" FROM m_transactionline") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON(product_item_id              =mtl_product_item_id)") \
	_T(" WHERE mtl_transaction_id=%ld and mtl_transactionline_id=%ld and mtl_product_item_id > 0 ") \
	_T(" ORDER BY mtl_line,") \
	_T("   product_id,") \
	_T("   product_vatprice"), m_nOrderID, m_nOrderLine);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("product_name"), m_szProduct);
		rs.GetValue(_T("product_uomname"), m_szUom);
		rs.GetValue(_T("product_lotno"), m_szLotNo);
		rs.GetValue(_T("product_expdate"), m_szExprDate);
		rs.GetValue(_T("product_taxprice"), m_nUnitPrice);
		rs.GetValue(_T("product_manufacturename"), m_szManufacture);

		rs.GetValue(_T("mtl_qtyorder"), m_nQuantity);
		rs.GetValue(_T("mtl_qtysold"), m_nOnHand);
		rs.GetValue(_T("mtl_product_id"), m_nProductID);
		rs.GetValue(_T("mtl_product_item_id"), m_nProductItemID);
	}

}
void CCancerStorageExportOrderLineEdit::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), m_nStorageID);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), 0);	
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nQuantity);
}
void CCancerStorageExportOrderLineEdit::SetDefaultValues(){

	m_szProduct.Empty();
	m_szUom.Empty();
	m_szManufacture.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nOnHand=0;
	m_nOrderLine = 0;
}
int CCancerStorageExportOrderLineEdit::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
		m_wndProduct.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CCancerStorageExportOrderLineEdit::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerStorageExportOrderLineEdit::OnProductSelendok(){

}
/*void CCancerStorageExportOrderLineEdit::OnProductSetfocus(){
	
}*/
/*void CCancerStorageExportOrderLineEdit::OnProductKillfocus(){
	
}*/
long CCancerStorageExportOrderLineEdit::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld"), m_nStorageID);

	//Neu xuat thuoc het han thi phai check ngay het han	
	
	return 0;
}
/*void CCancerStorageExportOrderLineEdit::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCancerStorageExportOrderLineEdit::OnUomChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnUomSetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnUomKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnUomCheckValue(){
	return 0;
} 

void CCancerStorageExportOrderLineEdit::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerStorageExportOrderLineEdit::OnManufactureSelendok(){
	 
}
/*void CCancerStorageExportOrderLineEdit::OnManufactureSetfocus(){
	
}*/
/*void CCancerStorageExportOrderLineEdit::OnManufactureKillfocus(){
	
}*/
long CCancerStorageExportOrderLineEdit::OnManufactureLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadManufactureList(&m_wndManufacture, m_szManufacture);
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
/*void CCancerStorageExportOrderLineEdit::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCancerStorageExportOrderLineEdit::OnLotNoChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnLotNoSetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnLotNoKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnLotNoCheckValue(){
	return 0;
} 
/*void CCancerStorageExportOrderLineEdit::OnExprDateChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnExprDateSetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnExprDateKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnExprDateCheckValue(){
	return 0;
} 
/*void CCancerStorageExportOrderLineEdit::OnQuantityChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnQuantitySetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnQuantityKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	
	if(m_nQuantity <= 0 || m_nQuantity > m_nOnHand)
	{
		UpdateData(FALSE);
		return -1;
	}
	return 0;
} 
/*void CCancerStorageExportOrderLineEdit::OnUnitPriceChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnUnitPriceSetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnUnitPriceKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nOnHand = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CCancerStorageExportOrderLineEdit::OnOnHandChange(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnOnHandSetfocus(){
	
} */
/*void CCancerStorageExportOrderLineEdit::OnOnHandKillfocus(){
	
} */
int CCancerStorageExportOrderLineEdit::OnOnHandCheckValue(){
	return 0;
} 

void CCancerStorageExportOrderLineEdit::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveCancerStorageExportOrderLineEdit();
} 
void CCancerStorageExportOrderLineEdit::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCancerStorageExportOrderLineEdit::OnAddCancerStorageExportOrderLineEdit(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCancerStorageExportOrderLineEdit::OnEditCancerStorageExportOrderLineEdit(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCancerStorageExportOrderLineEdit::OnDeleteCancerStorageExportOrderLineEdit(){
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
 		OnCancelCancerStorageExportOrderLineEdit();
 	}
	return 0;
}
int CCancerStorageExportOrderLineEdit::OnSaveCancerStorageExportOrderLineEdit(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_TRANSACTION_UPDATELINE(%s) "), m_transactionlineTbl.FormatSQL());
	//_msg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
	_debug(_T("RES VALUE :%d"), ret);
 	if(ret > 0)
 	{
		CCancerStorageExportOrderLines* pLines = (CCancerStorageExportOrderLines*) m_pWndLines;
		if(pLines) pLines->Refresh(m_nOrderID);
		if(GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiDialog::OnCancel();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCancerStorageExportOrderLineEdit::OnCancelCancerStorageExportOrderLineEdit(){
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
int CCancerStorageExportOrderLineEdit::OnCancerStorageExportOrderLineEditListLoadData(){
	return 0;
}
