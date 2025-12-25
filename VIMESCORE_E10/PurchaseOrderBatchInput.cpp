#include "PurchaseOrderBatchInput.h"
#include "MainFrame_E10.h"
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderBatchInput* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderBatchInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnUomCheckValue();
} 
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderBatchInput* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnVATAddNew();
}*/
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderBatchInput *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderBatchInput *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchInput *pVw = (CPurchaseOrderBatchInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderBatchInput *pVw = (CPurchaseOrderBatchInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderBatchInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchInput*)pWnd)->OnAddPurchaseOrderBatchInput();
} 
static int _OnEditPurchaseOrderBatchInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchInput*)pWnd)->OnEditPurchaseOrderBatchInput();
} 
static int _OnDeletePurchaseOrderBatchInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchInput*)pWnd)->OnDeletePurchaseOrderBatchInput();
} 
static int _OnSavePurchaseOrderBatchInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchInput*)pWnd)->OnSavePurchaseOrderBatchInput();
} 
static int _OnCancelPurchaseOrderBatchInputFnc(CWnd *pWnd){
	 return ((CPurchaseOrderBatchInput*)pWnd)->OnCancelPurchaseOrderBatchInput();
} 
CPurchaseOrderBatchInput::CPurchaseOrderBatchInput(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 995;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CPurchaseOrderBatchInput::~CPurchaseOrderBatchInput(){
}
void CPurchaseOrderBatchInput::OnCreateComponents(){
	m_wndSupplierLabel.Create(this, _T("&Supplier"), 4, 4, 104, 29);
	m_wndSupplier.Create(this,109, 4, 579, 29); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 584, 4, 684, 29);
	m_wndInvoiceNo.Create(this,689, 4, 779, 29); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 784, 4, 884, 29);
	m_wndInvoiceDate.Create(this,889, 4, 989, 29); 
	m_wndProductLabel.Create(this, _T("Product"), 4, 34, 104, 59);
	m_wndProduct.Create(this,109, 34, 579, 59); 
	m_wndUomLabel.Create(this, _T("Uom"), 584, 34, 684, 59);
	m_wndUom.Create(this,689, 34, 779, 59); 
	m_wndVATLabel.Create(this, _T("VAT"), 784, 34, 884, 59);
	m_wndVAT.Create(this,889, 34, 989, 59); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 4, 64, 104, 89);
	m_wndExpDate.Create(this,109, 64, 209, 89); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 214, 64, 304, 89);
	m_wndLotNo.Create(this,309, 64, 389, 89); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 394, 64, 484, 89);
	m_wndUnitPrice.Create(this,489, 64, 579, 89); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 584, 64, 684, 89);
	m_wndQuantity.Create(this,689, 64, 779, 89); 
	m_wndAmountLabel.Create(this, _T("Amount"), 784, 64, 884, 89);
	m_wndAmount.Create(this,889, 64, 989, 89); 
	m_wndSave.Create(this, _T("&Save"), 890, 94, 960, 119);
	m_wndClose.Create(this, _T("X"), 965, 94, 990, 119);

}
void CPurchaseOrderBatchInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndVAT.SetCheckValue(true);
	m_wndVAT.LimitText(35);
	m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);
	m_wndLotNo.SetLimitText(35);
	m_wndLotNo.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProduct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProduct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVAT.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVAT.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPurchaseOrderBatchInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
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
	m_wndVAT.SetEvent(WE_SELENDOK, _OnVATSelendokFnc);
	//m_wndVAT.SetEvent(WE_SETFOCUS, _OnVATSetfocusFnc);
	//m_wndVAT.SetEvent(WE_KILLFOCUS, _OnVATKillfocusFnc);
	m_wndVAT.SetEvent(WE_SELCHANGE, _OnVATSelectChangeFnc);
	m_wndVAT.SetEvent(WE_LOADDATA, _OnVATLoadDataFnc);
	//m_wndVAT.SetEvent(WE_ADDNEW, _OnVATAddNewFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
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
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPurchaseOrderBatchInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_TextEx(pDX, m_wndVAT.GetDlgCtrlID(), m_szVATKey);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CPurchaseOrderBatchInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderBatchInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderBatchInput::SetDefaultValues(){

	m_szSupplierKey.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szProductKey.Empty();
	m_szUom.Empty();
	m_szVATKey.Empty();
	m_szExpDate.Empty();
	m_szLotNo.Empty();
	m_nUnitPrice=0;
	m_nQuantity=0;
	m_nAmount=0;

}
int CPurchaseOrderBatchInput::SetMode(int nMode){
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
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPurchaseOrderBatchInput::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderBatchInput::OnSupplierSelendok(){
	 
}
/*void CPurchaseOrderBatchInput::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderBatchInput::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderBatchInput::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderBatchInput::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderBatchInput::OnInvoiceNoChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnInvoiceNoSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnInvoiceNoKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderBatchInput::OnInvoiceDateChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnInvoiceDateSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnInvoiceDateKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnInvoiceDateCheckValue(){
	return 0;
} 
void CPurchaseOrderBatchInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderBatchInput::OnProductSelendok(){
	 
}
/*void CPurchaseOrderBatchInput::OnProductSetfocus(){
	
}*/
/*void CPurchaseOrderBatchInput::OnProductKillfocus(){
	
}*/
long CPurchaseOrderBatchInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CPurchaseOrderBatchInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderBatchInput::OnUomChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnUomSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnUomKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnUomCheckValue(){
	return 0;
} 
void CPurchaseOrderBatchInput::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderBatchInput::OnVATSelendok(){
	 
}
/*void CPurchaseOrderBatchInput::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderBatchInput::OnVATKillfocus(){
	
}*/
long CPurchaseOrderBatchInput::OnVATLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CPurchaseOrderBatchInput::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderBatchInput::OnExpDateChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnExpDateSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnExpDateKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnExpDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderBatchInput::OnLotNoChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnLotNoSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnLotNoKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnLotNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderBatchInput::OnUnitPriceChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnUnitPriceSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnUnitPriceKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CPurchaseOrderBatchInput::OnQuantityChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnQuantitySetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnQuantityKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnQuantityCheckValue(){
	return 0;
} 
/*void CPurchaseOrderBatchInput::OnAmountChange(){
	
} */
/*void CPurchaseOrderBatchInput::OnAmountSetfocus(){
	
} */
/*void CPurchaseOrderBatchInput::OnAmountKillfocus(){
	
} */
int CPurchaseOrderBatchInput::OnAmountCheckValue(){
	return 0;
} 
void CPurchaseOrderBatchInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderBatchInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderBatchInput::OnAddPurchaseOrderBatchInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderBatchInput::OnEditPurchaseOrderBatchInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderBatchInput::OnDeletePurchaseOrderBatchInput(){
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
 		OnCancelPurchaseOrderBatchInput();
 	}
	return 0;
}
int CPurchaseOrderBatchInput::OnSavePurchaseOrderBatchInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseOrderBatchInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderBatchInput::OnCancelPurchaseOrderBatchInput(){
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
int CPurchaseOrderBatchInput::OnPurchaseOrderBatchInputListLoadData(){
	return 0;
}
