#include "StorageTransactionLineInput.h"
#include "MainFrame_E10.h"
#include "StorageTransactionDialog.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnUomCheckValue();
} 
/*static void _OnSoldierChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierChange();
} */
/*static void _OnSoldierSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierSetfocus();} */ 
/*static void _OnSoldierKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierKillfocus();
} */
static int _OnSoldierCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnSoldierCheckValue();
} 
/*static void _OnPolicyChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnPolicyChange();
} */
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnPolicySetfocus();} */ 
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnPolicyKillfocus();
} */
static int _OnPolicyCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnPolicyCheckValue();
} 
/*static void _OnSoldierInsurnaceChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierInsurnaceChange();
} */
/*static void _OnSoldierInsurnaceSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierInsurnaceSetfocus();} */ 
/*static void _OnSoldierInsurnaceKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSoldierInsurnaceKillfocus();
} */
static int _OnSoldierInsurnaceCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnSoldierInsurnaceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnOtherInsuranceChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherInsuranceChange();
} */
/*static void _OnOtherInsuranceSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherInsuranceSetfocus();} */ 
/*static void _OnOtherInsuranceKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherInsuranceKillfocus();
} */
static int _OnOtherInsuranceCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnOtherInsuranceCheckValue();
} 
/*static void _OnServiceChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnServiceChange();
} */
/*static void _OnServiceSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnServiceSetfocus();} */ 
/*static void _OnServiceKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnServiceKillfocus();
} */
static int _OnServiceCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnServiceCheckValue();
} 
/*static void _OnOtherChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherChange();
} */
/*static void _OnOtherSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherSetfocus();} */ 
/*static void _OnOtherKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnOtherKillfocus();
} */
static int _OnOtherCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnOtherCheckValue();
} 
/*static void _OnSumQuantityChangeFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSumQuantityChange();
} */
/*static void _OnSumQuantitySetfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSumQuantitySetfocus();} */ 
/*static void _OnSumQuantityKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionLineInput *)pWnd)->OnSumQuantityKillfocus();
} */
static int _OnSumQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionLineInput *)pWnd)->OnSumQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageTransactionLineInput *pVw = (CStorageTransactionLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageTransactionLineInput *pVw = (CStorageTransactionLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CStorageTransactionLineInput*)pWnd)->OnAddStorageTransactionLineInput();
} 
static int _OnEditStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CStorageTransactionLineInput*)pWnd)->OnEditStorageTransactionLineInput();
} 
static int _OnDeleteStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CStorageTransactionLineInput*)pWnd)->OnDeleteStorageTransactionLineInput();
} 
static int _OnSaveStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CStorageTransactionLineInput*)pWnd)->OnSaveStorageTransactionLineInput();
} 
static int _OnCancelStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CStorageTransactionLineInput*)pWnd)->OnCancelStorageTransactionLineInput();
} 
CStorageTransactionLineInput::CStorageTransactionLineInput(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 985;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CStorageTransactionLineInput::~CStorageTransactionLineInput(){
}
void CStorageTransactionLineInput::OnCreateComponents(){
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 5, 970, 60);
	m_wndProductLabel.Create(this, _T("Item Name"), 10, 30, 135, 55);
	m_wndProduct.Create(this,140, 30, 725, 55); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 730, 30, 855, 55);
	m_wndQuantity.Create(this, _T("Quantity"), 5, 65, 970, 154);
	m_wndUom.Create(this,860, 30, 965, 55); 
	m_wndSoldierLabel.Create(this, _T("Soldier"), 10, 92, 135, 117);
	m_wndSoldier.Create(this,140, 92, 245, 117); 
	m_wndPolicyLabel.Create(this, _T("Policy"), 250, 92, 375, 117);
	m_wndPolicy.Create(this,380, 92, 485, 117); 
	m_wndSoldierInsurnaceLabel.Create(this, _T("SoldierIns"), 490, 92, 615, 117);
	m_wndSoldierInsurnace.Create(this,620, 92, 725, 117); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 730, 92, 855, 117);
	m_wndOnHand.Create(this,860, 92, 965, 117); 
	m_wndOtherInsuranceLabel.Create(this, _T("OtherIns"), 10, 122, 135, 147);
	m_wndOtherInsurance.Create(this,140, 122, 245, 147); 
	m_wndServiceLabel.Create(this, _T("Service"), 250, 122, 375, 147);
	m_wndService.Create(this,380, 122, 485, 147); 
	m_wndOtherLabel.Create(this, _T("Other"), 490, 122, 615, 147);
	m_wndOther.Create(this,620, 122, 725, 147); 
	m_wndSumQuantityLabel.Create(this, _T("Sum"), 730, 122, 855, 147);
	m_wndSumQuantity.Create(this,860, 122, 965, 147); 
	m_wndSave.Create(this, _T("&Save"), 860, 159, 940, 184);
	m_wndClose.Create(this, _T("x"), 945, 159, 970, 184);

}
void CStorageTransactionLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndSoldier.SetLimitText(16);
	m_wndSoldier.SetCheckValue(true);
	m_wndPolicy.SetLimitText(16);
	m_wndPolicy.SetCheckValue(true);
	m_wndSoldierInsurnace.SetLimitText(16);
	m_wndSoldierInsurnace.SetCheckValue(true);
	m_wndOnHand.SetLimitText(16);
	m_wndOnHand.SetCheckValue(true);
	m_wndOtherInsurance.SetLimitText(16);
	m_wndOtherInsurance.SetCheckValue(true);
	m_wndService.SetLimitText(16);
	m_wndService.SetCheckValue(true);
	m_wndOther.SetLimitText(16);
	m_wndOther.SetCheckValue(true);
	m_wndSumQuantity.SetLimitText(16);
	m_wndSoldier.SetNumberDecimal(2);
	m_wndPolicy.SetNumberDecimal(2);
	m_wndSoldierInsurnace.SetNumberDecimal(2);
	m_wndOnHand.SetNumberDecimal(2);
	m_wndOtherInsurance.SetNumberDecimal(2);
	m_wndService.SetNumberDecimal(2);
	m_wndOther.SetNumberDecimal(2);
	m_wndSumQuantity.SetNumberDecimal(2);

	m_wndService.SetReadOnly(!IsService(m_nStorageID));
	CString szSQL;
	szSQL.Format(_T("select msl_dept_id from m_storagelist where msl_storage_id = %ld"), m_nStorageID);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() == _T("A11") && ((CStorageTransactionDialog*) m_pWndOrder)->m_szToDepartmentKey == _T("A11"))
	{
		m_wndService.SetReadOnly(FALSE);
	}
	m_wndProduct.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ProductItemID
	m_wndProduct.InsertColumn(1, _T(""), CFMT_NUMBER, 0); //Product_ID
	m_wndProduct.InsertColumn(2, _T("ID"), CFMT_TEXT, 70);
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndProduct.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
		m_wndProduct.InsertColumn(4, _T("Uom"), CFMT_TEXT, 70);
		m_wndProduct.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
		m_wndProduct.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
		m_wndProduct.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
		m_wndProduct.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
		m_wndProduct.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
		m_wndProduct.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
		m_wndProduct.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 150);
	}
	else
	{
		m_wndProduct.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
		m_wndProduct.InsertColumn(4, _T("Uom"), CFMT_TEXT, 70);
		m_wndProduct.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
		m_wndProduct.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
		m_wndProduct.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
		m_wndProduct.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
		m_wndProduct.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
		m_wndProduct.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
		m_wndProduct.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 150);

	}
	m_wndProduct.Format(11, 3, 5);
	
//	m_transactionlineTbl.SetTableName(_T("m_transactionline"));
//	m_transactionlineTbl.AddField(_T("MTL_CLIENT_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTION_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTIONLINE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_ORG_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_USER_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_TO_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ITEM_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_QTYSOLD"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYPOLICY"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYSOLDINS"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYOTHERINS"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYSERVICE"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYOTHER"), dfDouble); 
	m_transactionlineTbl.AddField(_T("MTL_QTYORDER"), dfDouble); 

	m_wndUom.SetReadOnly(true);
	
	m_wndOnHand.ModifyStyle(WS_TABSTOP, 0);
	m_wndOnHand.SetCurrencyFormat(TRUE);
	m_wndOnHand.SetTextColor(RGB(0, 0, 255));
	m_wndOnHand.SetReadOnly(TRUE);
	m_wndSumQuantity.SetReadOnly(TRUE);
}
void CStorageTransactionLineInput::OnSetWindowEvents(){
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
	//m_wndSoldier.SetEvent(WE_CHANGE, _OnSoldierChangeFnc);
	//m_wndSoldier.SetEvent(WE_SETFOCUS, _OnSoldierSetfocusFnc);
	//m_wndSoldier.SetEvent(WE_KILLFOCUS, _OnSoldierKillfocusFnc);
	m_wndSoldier.SetEvent(WE_CHECKVALUE, _OnSoldierCheckValueFnc);
	//m_wndPolicy.SetEvent(WE_CHANGE, _OnPolicyChangeFnc);
	//m_wndPolicy.SetEvent(WE_SETFOCUS, _OnPolicySetfocusFnc);
	//m_wndPolicy.SetEvent(WE_KILLFOCUS, _OnPolicyKillfocusFnc);
	m_wndPolicy.SetEvent(WE_CHECKVALUE, _OnPolicyCheckValueFnc);
	//m_wndSoldierInsurnace.SetEvent(WE_CHANGE, _OnSoldierInsurnaceChangeFnc);
	//m_wndSoldierInsurnace.SetEvent(WE_SETFOCUS, _OnSoldierInsurnaceSetfocusFnc);
	//m_wndSoldierInsurnace.SetEvent(WE_KILLFOCUS, _OnSoldierInsurnaceKillfocusFnc);
	m_wndSoldierInsurnace.SetEvent(WE_CHECKVALUE, _OnSoldierInsurnaceCheckValueFnc);
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	//m_wndOtherInsurance.SetEvent(WE_CHANGE, _OnOtherInsuranceChangeFnc);
	//m_wndOtherInsurance.SetEvent(WE_SETFOCUS, _OnOtherInsuranceSetfocusFnc);
	//m_wndOtherInsurance.SetEvent(WE_KILLFOCUS, _OnOtherInsuranceKillfocusFnc);
	m_wndOtherInsurance.SetEvent(WE_CHECKVALUE, _OnOtherInsuranceCheckValueFnc);
	//m_wndService.SetEvent(WE_CHANGE, _OnServiceChangeFnc);
	//m_wndService.SetEvent(WE_SETFOCUS, _OnServiceSetfocusFnc);
	//m_wndService.SetEvent(WE_KILLFOCUS, _OnServiceKillfocusFnc);
	m_wndService.SetEvent(WE_CHECKVALUE, _OnServiceCheckValueFnc);
	//m_wndOther.SetEvent(WE_CHANGE, _OnOtherChangeFnc);
	//m_wndOther.SetEvent(WE_SETFOCUS, _OnOtherSetfocusFnc);
	//m_wndOther.SetEvent(WE_KILLFOCUS, _OnOtherKillfocusFnc);
	m_wndOther.SetEvent(WE_CHECKVALUE, _OnOtherCheckValueFnc);
	//m_wndSumQuantity.SetEvent(WE_CHANGE, _OnSumQuantityChangeFnc);
	//m_wndSumQuantity.SetEvent(WE_SETFOCUS, _OnSumQuantitySetfocusFnc);
	//m_wndSumQuantity.SetEvent(WE_KILLFOCUS, _OnSumQuantityKillfocusFnc);
	m_wndSumQuantity.SetEvent(WE_CHECKVALUE, _OnSumQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();

	SetMode(nMode);

}
void CStorageTransactionLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndSoldier.GetDlgCtrlID(), m_nSoldier);
	DDX_Text(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Text(pDX, m_wndSoldierInsurnace.GetDlgCtrlID(), m_nSoldierInsurnace);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndOtherInsurance.GetDlgCtrlID(), m_nOtherInsurance);
	DDX_Text(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Text(pDX, m_wndOther.GetDlgCtrlID(), m_nOther);
	DDX_Text(pDX, m_wndSumQuantity.GetDlgCtrlID(), m_nSumQuantity);

}
void CStorageTransactionLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mtl_product_item_id, ") \
		_T(" mtl_qtyorder, " )\
		_T(" mtl_qtysold, " )\
		_T(" mtl_qtypolicy, " )\
		_T(" mtl_qtysoldins, " )\
		_T(" mtl_qtyotherins, " )\
		_T(" mtl_qtyservice, " )\
		_T(" mtl_qtyother " )\
		_T("FROM m_transactionline ") \
		_T("WHERE mtl_transaction_id=%ld and mtl_transactionline_id=%ld"), 
		m_nOrderID, m_nOrderLine);
_tprintf(_T("\r\n%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("mtl_product_item_id"), m_nProductItemID);
		rs.GetValue(_T("mtl_qtysold"), m_nSoldier);
		rs.GetValue(_T("mtl_qtypolicy"), m_nPolicy);
		rs.GetValue(_T("mtl_qtysoldins"), m_nSoldierInsurnace);
		rs.GetValue(_T("mtl_qtyotherins"), m_nOtherInsurance);
		rs.GetValue(_T("mtl_qtyservice"), m_nService );
		rs.GetValue(_T("mtl_qtyother"), m_nOther);
		rs.GetValue(_T("mtl_qtyorder"), m_nSumQuantity);
		szSQL.Format(_T("SELECT product_uomname FROM m_productitem_view WHERE product_item_id=%ld "), m_nProductItemID);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("product_uomname"), m_szUom);

		m_nOldQtyOrdered = m_nSumQuantity;

		m_szProductKey.Format(_T("%ld"), m_nProductItemID);
		szSQL.Format(_T("GET_QTYORDERONHAND(%ld, %ld) "), m_nStorageID, m_nProductItemID);
		m_nOnHand = str2long(pMF->ExecDML(szSQL));
	
	}

}
void CStorageTransactionLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
	m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
	m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
	m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), m_nOrderLine);
	m_transactionlineTbl.SetValue(_T("mtl_storage_id"), m_nStorageID);
	m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), m_nStorageToID);
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), m_nProductItemID);
	m_transactionlineTbl.SetValue(_T("mtl_qtysold"), m_nSoldier);
	m_transactionlineTbl.SetValue(_T("mtl_qtypolicy"), m_nPolicy);
	m_transactionlineTbl.SetValue(_T("mtl_qtysoldins"), m_nSoldierInsurnace);
	m_transactionlineTbl.SetValue(_T("mtl_qtyotherins"), m_nOtherInsurance);
	m_transactionlineTbl.SetValue(_T("mtl_qtyservice"), m_nService);
	m_transactionlineTbl.SetValue(_T("mtl_qtyother"), m_nOther);
	m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), m_nSumQuantity);

}
void CStorageTransactionLineInput::SetDefaultValues(){

	m_szProductKey.Empty();
	m_szUom.Empty();
	m_nSoldier=0;
	m_nPolicy=0;
	m_nSoldierInsurnace=0;
	m_nOnHand=0;
	m_nOtherInsurance=0;
	m_nService=0;
	m_nOther=0;
	m_nSumQuantity=0;
	m_nOrderLine = 0;

}
int CStorageTransactionLineInput::SetMode(int nMode){
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
			m_wndProduct.EnableWindow(FALSE);
			m_wndSoldier.SetFocus();

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
		if (pMF->m_szOriginModuleID == _T("HC"))
		{
			m_wndSoldier.EnableWindow(FALSE);
			m_wndPolicy.EnableWindow(FALSE);
			m_wndSoldierInsurnace.EnableWindow(FALSE);
			m_wndOnHand.EnableWindow(FALSE);
			m_wndOtherInsurance.EnableWindow(FALSE);
			m_wndService.EnableWindow(FALSE);
		}
 		UpdateData(FALSE);
 		return nOldMode;
}
void CStorageTransactionLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageTransactionLineInput::OnProductSelendok(){
	UpdateData(TRUE);
	m_szUom = m_wndProduct.GetCurrent(4);
	m_nOnHand = str2long(m_wndProduct.GetCurrent(8));
	UpdateData(FALSE); 
}
/*void CStorageTransactionLineInput::OnProductSetfocus(){
	
}*/
/*void CStorageTransactionLineInput::OnProductKillfocus(){
	
}*/
long CStorageTransactionLineInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld  and abs(msl_qtyonhand-msl_qtyordered) > 0 "), m_nStorageID);

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
/*void CStorageTransactionLineInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageTransactionLineInput::OnUomChange(){
	
} */
/*void CStorageTransactionLineInput::OnUomSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnUomKillfocus(){
	
} */
int CStorageTransactionLineInput::OnUomCheckValue(){
	return 0;
} 
/*void CStorageTransactionLineInput::OnSoldierChange(){
	
} */
/*void CStorageTransactionLineInput::OnSoldierSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnSoldierKillfocus(){
	
} */
int CStorageTransactionLineInput::OnSoldierCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnPolicyChange(){
	
} */
/*void CStorageTransactionLineInput::OnPolicySetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnPolicyKillfocus(){
	
} */
int CStorageTransactionLineInput::OnPolicyCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnSoldierInsurnaceChange(){

	
} */
/*void CStorageTransactionLineInput::OnSoldierInsurnaceSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnSoldierInsurnaceKillfocus(){
	
} */
int CStorageTransactionLineInput::OnSoldierInsurnaceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnOnHandChange(){
	
} */
/*void CStorageTransactionLineInput::OnOnHandSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnOnHandKillfocus(){
	
} */
int CStorageTransactionLineInput::OnOnHandCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnOtherInsuranceChange(){
	
} */
/*void CStorageTransactionLineInput::OnOtherInsuranceSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnOtherInsuranceKillfocus(){
	
} */
int CStorageTransactionLineInput::OnOtherInsuranceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnServiceChange(){
	
} */
/*void CStorageTransactionLineInput::OnServiceSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnServiceKillfocus(){
	
} */
int CStorageTransactionLineInput::OnServiceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnOtherChange(){
	
} */
/*void CStorageTransactionLineInput::OnOtherSetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnOtherKillfocus(){
	
} */
int CStorageTransactionLineInput::OnOtherCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CStorageTransactionLineInput::OnSumQuantityChange(){
	
} */
/*void CStorageTransactionLineInput::OnSumQuantitySetfocus(){
	
} */
/*void CStorageTransactionLineInput::OnSumQuantityKillfocus(){
	
} */
int CStorageTransactionLineInput::OnSumQuantityCheckValue(){
	return 0;
} 
void CStorageTransactionLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageTransactionLineInput();
} 
void CStorageTransactionLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CStorageTransactionLineInput::OnAddStorageTransactionLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageTransactionLineInput::OnEditStorageTransactionLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageTransactionLineInput::OnDeleteStorageTransactionLineInput(){
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
 		OnCancelStorageTransactionLineInput();
 	}
	return 0;
}
int CStorageTransactionLineInput::OnSaveStorageTransactionLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if (m_nSumQuantity <= 0)
	{
		ShowToolTip(&m_wndSumQuantity, _T("Yêu c?u nh?p s? lu?ng!"));
		return -2;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_TRANSACTION_CREATELINE(%s) "), m_transactionlineTbl.FormatSQL());
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
		CStorageTransactionLines* pLines = (CStorageTransactionLines*) pMF->GetRefWindow(_T("StorageTransactionLines"));
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
int CStorageTransactionLineInput::OnCancelStorageTransactionLineInput(){
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
int CStorageTransactionLineInput::OnStorageTransactionLineInputListLoadData(){
	return 0;
}

bool CStorageTransactionLineInput::CheckQuantity(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	UpdateData(TRUE);
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	szSQL.Format(_T("GET_QTYORDERONHAND(%ld, %ld) "), m_nStorageID, m_nProductItemID);
	m_nOnHand = str2double(pMF->ExecDML(szSQL));
	m_nSumQuantity = m_nSoldier+m_nPolicy+m_nSoldierInsurnace+m_nOtherInsurance+m_nService+m_nOther;
	if(GetMode() == VM_EDIT)
	{
		m_nOnHand -= (m_nSumQuantity-m_nOldQtyOrdered);
	}
	UpdateData(FALSE);
	if(m_nSumQuantity > m_nOnHand)
		return false;
	
	return true;
}

bool CStorageTransactionLineInput::IsService(int nStorageID){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select msl_category from m_storagelist where msl_storage_id = %d"), nStorageID);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue()==_T("S")?true:false;
}