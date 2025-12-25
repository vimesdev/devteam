#include "CabinetOrderLineInput.h"
#include "HMSMainFrame.h"
#include "CabinetOrder.h"

static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrderLineInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnUomCheckValue();
} 
/*static void _OnSoldierChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierChange();
} */
/*static void _OnSoldierSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierSetfocus();} */ 
/*static void _OnSoldierKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierKillfocus();
} */
static int _OnSoldierCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnSoldierCheckValue();
} 
/*static void _OnPolicyChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnPolicyChange();
} */
/*static void _OnPolicySetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnPolicySetfocus();} */ 
/*static void _OnPolicyKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnPolicyKillfocus();
} */
static int _OnPolicyCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnPolicyCheckValue();
} 
/*static void _OnSoldierInsurnaceChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierInsurnaceChange();
} */
/*static void _OnSoldierInsurnaceSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierInsurnaceSetfocus();} */ 
/*static void _OnSoldierInsurnaceKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSoldierInsurnaceKillfocus();
} */
static int _OnSoldierInsurnaceCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnSoldierInsurnaceCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnOtherInsuranceChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherInsuranceChange();
} */
/*static void _OnOtherInsuranceSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherInsuranceSetfocus();} */ 
/*static void _OnOtherInsuranceKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherInsuranceKillfocus();
} */
static int _OnOtherInsuranceCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnOtherInsuranceCheckValue();
} 
/*static void _OnServiceChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnServiceChange();
} */
/*static void _OnServiceSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnServiceSetfocus();} */ 
/*static void _OnServiceKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnServiceKillfocus();
} */
static int _OnServiceCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnServiceCheckValue();
} 
/*static void _OnOtherChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherChange();
} */
/*static void _OnOtherSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherSetfocus();} */ 
/*static void _OnOtherKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnOtherKillfocus();
} */
static int _OnOtherCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnOtherCheckValue();
} 
/*static void _OnSumQuantityChangeFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSumQuantityChange();
} */
/*static void _OnSumQuantitySetfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSumQuantitySetfocus();} */ 
/*static void _OnSumQuantityKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderLineInput *)pWnd)->OnSumQuantityKillfocus();
} */
static int _OnSumQuantityCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderLineInput *)pWnd)->OnSumQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCabinetOrderLineInput *pVw = (CCabinetOrderLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCabinetOrderLineInput *pVw = (CCabinetOrderLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CCabinetOrderLineInput*)pWnd)->OnAddStorageTransactionLineInput();
} 
static int _OnEditStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CCabinetOrderLineInput*)pWnd)->OnEditStorageTransactionLineInput();
} 
static int _OnDeleteStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CCabinetOrderLineInput*)pWnd)->OnDeleteStorageTransactionLineInput();
} 
static int _OnSaveStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CCabinetOrderLineInput*)pWnd)->OnSaveStorageTransactionLineInput();
} 
static int _OnCancelStorageTransactionLineInputFnc(CWnd *pWnd){
	 return ((CCabinetOrderLineInput*)pWnd)->OnCancelStorageTransactionLineInput();
} 
CCabinetOrderLineInput::CCabinetOrderLineInput(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 985;
	m_nDlgHeight = 180;
	SetDefaultValues();
	m_szStorageType = _T("I");
}
CCabinetOrderLineInput::~CCabinetOrderLineInput(){
}
void CCabinetOrderLineInput::OnCreateComponents(){
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 5, 950, 60);
	m_wndQuantity.Create(this, _T("Quantity"), 5, 65, 950, 145);
	m_wndProductLabel.Create(this, _T("Item Name"), 10, 30, 135, 55);
	m_wndProduct.Create(this,140, 30, 680, 55); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 685, 30, 810, 55);
	m_wndUom.Create(this,815, 30, 945, 55); 
	m_wndSoldier.Create(this,140, 90, 230, 115); 
	m_wndPolicy.Create(this,365, 90, 455, 115); 
	m_wndSoldierInsurnace.Create(this,590, 90, 680, 115); 
	m_wndOnHand.Create(this,815, 90, 945, 115); 
	m_wndOtherInsurance.Create(this,140, 120, 230, 145); 
	m_wndService.Create(this,365, 120, 455, 145); 
	m_wndOther.Create(this,590, 120, 680, 145); 
	m_wndSumQuantity.Create(this,815, 120, 945, 145); 
	m_wndSave.Create(this, _T("&Save"), 815, 150, 905, 175);
	m_wndClose.Create(this, _T("x"), 910, 150, 945, 175);

	m_wndHeader.CreateEx(this, 10, 65+25, 940, 65+25+25);


}
void CCabinetOrderLineInput::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	
	//m_wndService.SetReadOnly(true);
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


	CString tmpStr;
	TranslateString(_T("Soldier"), tmpStr);
	m_wndHeader.InsertColumn(0, tmpStr, 110, &m_wndSoldier);
	TranslateString(_T("Policy CS"), tmpStr);
	m_wndHeader.InsertColumn(1, tmpStr, 110, &m_wndPolicy);
	TranslateString(_T("Soldier Insurnace"), tmpStr);
	m_wndHeader.InsertColumn(2, tmpStr, 110, &m_wndSoldierInsurnace);
	TranslateString(_T("Other Insurance"), tmpStr);
	m_wndHeader.InsertColumn(3, tmpStr, 110, &m_wndOtherInsurance);
	TranslateString(_T("Service"), tmpStr);
	m_wndHeader.InsertColumn(4, tmpStr, 110, &m_wndService);
	TranslateString(_T("Other"), tmpStr);
	m_wndHeader.InsertColumn(5, tmpStr, 110, &m_wndOther);
	TranslateString(_T("Sum"), tmpStr);
	m_wndHeader.InsertColumn(6, tmpStr, 130, &m_wndSumQuantity);
	TranslateString(_T("Onhand"), tmpStr);
	m_wndHeader.InsertColumn(7, tmpStr, 140, &m_wndOnHand);


}
void CCabinetOrderLineInput::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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


	m_wndHeader.RecalcLayout();

	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select msl_org_id, msl_category from m_storagelist where msl_storage_id = %d"), m_nStorageID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("msl_category"), m_szStorageType);
		rs.GetValue(_T("msl_org_id"), m_szProductOrgID);
	}


	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();

	SetMode(nMode);

}
void CCabinetOrderLineInput::OnDoDataExchange(CDataExchange* pDX){
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
void CCabinetOrderLineInput::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
		szSQL.Format(_T("GET_QTYORDERONHAND(%ld, %ld) "), m_nStorageToID, m_nProductItemID);
		m_nOnHand = str2long(pMF->ExecDML(szSQL));
	
	}

}
void CCabinetOrderLineInput::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CCabinetOrderLineInput::SetDefaultValues(){

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
int CCabinetOrderLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
		if(m_szStorageType == _T("I"))
		{
			m_wndSoldier.EnableWindow(FALSE);
			m_wndService.EnableWindow(FALSE);
			m_wndPolicy.EnableWindow(FALSE);
		}
		if(m_szStorageType == _T("S"))
		{
			m_wndSoldier.EnableWindow(FALSE);
			m_wndSoldierInsurnace.EnableWindow(FALSE);
			m_wndPolicy.EnableWindow(FALSE);
			m_wndOtherInsurance.EnableWindow(FALSE);
		}

		if(m_szStorageType == _T("P"))
		{
			m_wndService.EnableWindow(FALSE);
			m_wndSoldierInsurnace.EnableWindow(FALSE);
			m_wndOtherInsurance.EnableWindow(FALSE);
		}

		m_wndOther.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CCabinetOrderLineInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrderLineInput::OnProductSelendok(){
	UpdateData(TRUE);
	m_szUom = m_wndProduct.GetCurrent(4);
	m_nOnHand = str2long(m_wndProduct.GetCurrent(8));
	UpdateData(FALSE); 
}
/*void CCabinetOrderLineInput::OnProductSetfocus(){
	
}*/
/*void CCabinetOrderLineInput::OnProductKillfocus(){
	
}*/
long CCabinetOrderLineInput::OnProductLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;	
	szWhere.Empty();
	
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%ld  and abs(msl_qtyonhand-msl_qtyordered) > 0 "), m_nStorageToID);

	if(m_wndProduct.IsSearchKey() && str2long(m_szProductKey) > 0){
		szWhere.Format(_T(" AND product_item_id=%ld "), str2long(m_szProductKey));
	};

	if(!szFilter.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szFilter);

	m_wndProduct.SetRequirementLength(1);
	
	CString szText;
	StringLower(m_wndProduct.GetKey(), szText);
	if(!szText.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "), szText);
	}
	m_wndProduct.DeleteAllItems(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and product_org_id='%s' "), m_szProductOrgID);

	szSQL.Format(_T(" SELECT product_item_id,") \
_T("   product_id ,") \
_T("   product_code ,") \
_T("   product_name ,") \
_T("   product_uomname ,") \
_T("   product_classname ,") \
_T("   product_unitprice,") \
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
_T("   product_unitprice,") \
_T("   product_saleprice1,") \
_T("   product_saleprice2,") \
_T("   product_saleprice3,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename") \
_T(" HAVING SUM(msl_qtyonhand-msl_qtyordered) > 0 ") \
_T(" ORDER BY product_name") \
, szWhere);

	//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s:%d"), szSQL, nCount);
	while(!rs.IsEOF()){ 
		m_wndProduct.AddItems(
			rs.GetValue(_T("product_item_id")),
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_classname")), 
			rs.GetValue(_T("product_unitprice")), 
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
/*void CCabinetOrderLineInput::OnProductAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CCabinetOrderLineInput::OnUomChange(){
	
} */
/*void CCabinetOrderLineInput::OnUomSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnUomKillfocus(){
	
} */
int CCabinetOrderLineInput::OnUomCheckValue(){
	return 0;
} 
/*void CCabinetOrderLineInput::OnSoldierChange(){
	
} */
/*void CCabinetOrderLineInput::OnSoldierSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnSoldierKillfocus(){
	
} */
int CCabinetOrderLineInput::OnSoldierCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnPolicyChange(){
	
} */
/*void CCabinetOrderLineInput::OnPolicySetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnPolicyKillfocus(){
	
} */
int CCabinetOrderLineInput::OnPolicyCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnSoldierInsurnaceChange(){

	
} */
/*void CCabinetOrderLineInput::OnSoldierInsurnaceSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnSoldierInsurnaceKillfocus(){
	
} */
int CCabinetOrderLineInput::OnSoldierInsurnaceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnOnHandChange(){
	
} */
/*void CCabinetOrderLineInput::OnOnHandSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnOnHandKillfocus(){
	
} */
int CCabinetOrderLineInput::OnOnHandCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnOtherInsuranceChange(){
	
} */
/*void CCabinetOrderLineInput::OnOtherInsuranceSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnOtherInsuranceKillfocus(){
	
} */
int CCabinetOrderLineInput::OnOtherInsuranceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnServiceChange(){
	
} */
/*void CCabinetOrderLineInput::OnServiceSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnServiceKillfocus(){
	
} */
int CCabinetOrderLineInput::OnServiceCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnOtherChange(){
	
} */
/*void CCabinetOrderLineInput::OnOtherSetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnOtherKillfocus(){
	
} */
int CCabinetOrderLineInput::OnOtherCheckValue(){
	if(CheckQuantity())
		return 0;
	return -1;
} 
/*void CCabinetOrderLineInput::OnSumQuantityChange(){
	
} */
/*void CCabinetOrderLineInput::OnSumQuantitySetfocus(){
	
} */
/*void CCabinetOrderLineInput::OnSumQuantityKillfocus(){
	
} */
int CCabinetOrderLineInput::OnSumQuantityCheckValue(){
	return 0;
} 
void CCabinetOrderLineInput::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveStorageTransactionLineInput();
} 
void CCabinetOrderLineInput::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CCabinetOrderLineInput::OnAddStorageTransactionLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCabinetOrderLineInput::OnEditStorageTransactionLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCabinetOrderLineInput::OnDeleteStorageTransactionLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
int CCabinetOrderLineInput::OnSaveStorageTransactionLineInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_TRANSACTION_C_CREATELINE(%s) "), m_transactionlineTbl.FormatSQL()); 
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		((CCabinetOrder*) m_pWndOrder)->OnListLoadData();
		if(GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiPopup::ClosePopup();
 	}
 	
 	return 0;
}
int CCabinetOrderLineInput::OnCancelStorageTransactionLineInput(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CCabinetOrderLineInput::OnStorageTransactionLineInputListLoadData(){
	return 0;
}

bool CCabinetOrderLineInput::CheckQuantity(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL;
	UpdateData(TRUE);
	m_nProductItemID = str2long(m_wndProduct.GetCurrent(0));
	szSQL.Format(_T("GET_QTYORDERONHAND(%ld, %ld) "), m_nStorageToID, m_nProductItemID);
	m_nOnHand = str2long(pMF->ExecDML(szSQL));
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