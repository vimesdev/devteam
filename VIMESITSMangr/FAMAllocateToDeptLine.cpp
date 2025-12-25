#include "FAMAllocateToDeptLine.h"
#include "MainFrm.h"
#include "FAMAllocateToDeptDialog.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAllocateToDeptLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAllocateToDeptLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnItemNameKillfocus();
}*/
static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnItemNameKillfocus();
}
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnMoneyChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnMoneyChange();
} */
/*static void _OnMoneySetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnMoneySetfocus();} */ 
/*static void _OnMoneyKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnMoneyKillfocus();
} */
static int _OnMoneyCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnMoneyCheckValue();
} 
/*static void _OnUseDateChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUseDateChange();
} */
/*static void _OnUseDateSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUseDateSetfocus();} */ 
static void _OnUseDateKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptLine *)pWnd)->OnUseDateKillfocus();
} 
static int _OnUseDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptLine *)pWnd)->OnUseDateCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptLine *pVw = (CFAMAllocateToDeptLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMAllocateToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnAddFAMAllocateToDeptLine();
} 
static int _OnEditFAMAllocateToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnEditFAMAllocateToDeptLine();
} 
static int _OnDeleteFAMAllocateToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnDeleteFAMAllocateToDeptLine();
} 
static int _OnSaveFAMAllocateToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnSaveFAMAllocateToDeptLine();
} 
static int _OnCancelFAMAllocateToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptLine*)pWnd)->OnCancelFAMAllocateToDeptLine();
} 
CFAMAllocateToDeptLine::CFAMAllocateToDeptLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAllocateToDeptLine::~CFAMAllocateToDeptLine(){
}
void CFAMAllocateToDeptLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 290); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 5, 295, 85, 320);
	m_wndItemName.Create(this,90, 295, 490, 320); 
	m_wndUseDateLabel.Create(this, _T("Used Date"), 495, 295, 575, 320);
	m_wndUseDate.Create(this,580, 295, 790, 320); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 325, 85, 350);
	m_wndQuantity.Create(this,90, 325, 130, 350); 
	m_wndUnitLabel.Create(this, _T("Unit"), 135, 325, 195, 350);
	m_wndUnit.Create(this,200, 325, 280, 350); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 285, 325, 365, 350);
	m_wndUnitPrice.Create(this,370, 325, 490, 350); 
	m_wndMoneyLabel.Create(this, _T("Money"), 495, 325, 575, 350);
	m_wndMoney.Create(this,580, 325, 790, 350); 
	m_wndSaveItem.Create(this, _T("Save"), 710, 355, 790, 380);

}
void CFAMAllocateToDeptLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndUnitPrice.SetCurrencyFormat(TRUE);
	m_wndMoney.SetLimitText(1024);
	m_wndMoney.SetCheckValue(true);
	m_wndMoney.SetCurrencyFormat(TRUE);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 120);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 300);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(5, _T("Unit"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(6, _T("Quantity"), CFMT_MONEY, 50);
	m_wndItemList.InsertColumn(7, _T("Unit Price"), CFMT_MONEY, 150);
	m_wndItemList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 150);
	m_wndItemList.InsertColumn(9, _T("TranID"), CFMT_TEXT, 0);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Seri"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 120);
	m_wndItemName.InsertColumn(6, _T("Type"), CFMT_TEXT, 50);
	m_wndItemName.InsertColumn(7, _T("Quantity"), CFMT_TEXT, 50);

	m_tbl_Allocateline.SetTableName(_T("storage_transactionline"));
	m_tbl_Allocateline.AddField(_T("stl_transactionline_id"), dfLong);
	m_tbl_Allocateline.AddField(_T("stl_transaction_id"), dfText, 15);
	m_tbl_Allocateline.AddField(_T("stl_org_id"), dfText, 20);
	m_tbl_Allocateline.AddField(_T("stl_itemid"), dfText, 250);
	m_tbl_Allocateline.AddField(_T("stl_qtyorder"), dfText, 15);
	m_tbl_Allocateline.AddField(_T("stl_unitprice"), dfDouble);
	m_tbl_Allocateline.AddField(_T("stl_amount"), dfDouble);

}
void CFAMAllocateToDeptLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndMoney.SetEvent(WE_CHANGE, _OnMoneyChangeFnc);
	//m_wndMoney.SetEvent(WE_SETFOCUS, _OnMoneySetfocusFnc);
	//m_wndMoney.SetEvent(WE_KILLFOCUS, _OnMoneyKillfocusFnc);
	m_wndMoney.SetEvent(WE_CHECKVALUE, _OnMoneyCheckValueFnc);
	//m_wndUseDate.SetEvent(WE_CHANGE, _OnUseDateChangeFnc);
	//m_wndUseDate.SetEvent(WE_SETFOCUS, _OnUseDateSetfocusFnc);
	//m_wndUseDate.SetEvent(WE_KILLFOCUS, _OnUseDateKillfocusFnc);
	m_wndUseDate.SetEvent(WE_CHECKVALUE, _OnUseDateCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	if(GetMode() == VM_NONE)
		SetMode(VM_NONE);
	else if(GetMode() == VM_EDIT || GetMode() == VM_ADD)
	{
		SetMode(VM_ADD);
	}
	OnItemListLoadData();
	
}
void CFAMAllocateToDeptLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndMoney.GetDlgCtrlID(), m_nMoney);
	DDX_TextEx(pDX, m_wndUseDate.GetDlgCtrlID(), m_szUseDate);

}
void CFAMAllocateToDeptLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT stl_item_id, fal_assetname, fal_unit, stl_uom_id, stl_unitprice, stl_qtyorder, stl_amount, stl_useddate ") \
			_T(" FROM storage_transactionline ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
			_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
			_T(" WHERE substr(st_doctype, 0, 1) = 'E' and stl_transaction_id = '%s' and stl_transactionline_id = '%s' "), m_szTransactionID, m_szTranLineID);
	int ret = rs.ExecSQL(szSQL);
	
	if(ret > 0)
	{
		m_szItemNameKey = rs.GetValue(_T("stl_item_id"));
		m_szUseDate = rs.GetValue(_T("stl_useddate"));
		m_nQuantity = str2double(rs.GetValue(_T("stl_qtyorder")));
		m_szUnit = rs.GetValue(_T("stl_uom_id"));
		m_nUnitPrice = str2double(rs.GetValue(_T("stl_unitprice")));
		m_nMoney = str2double(rs.GetValue(_T("stl_amount")));
		UpdateData(FALSE);
	}

}
void CFAMAllocateToDeptLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAllocateToDeptLine::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_szExpDate.Empty();
	m_szUnit.Empty();
	m_nQuantity = 1;
	m_nUnitPrice = 0;
	m_nMoney = 0;
	m_szUseDate.Empty();
	m_nDeprTime=0;

}
int CFAMAllocateToDeptLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_wndUnit.EnableWindow(FALSE);
			m_wndUnitPrice.EnableWindow(FALSE);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			//OnItemListLoadData();
			m_wndUnit.EnableWindow(FALSE);
			m_wndUnitPrice.EnableWindow(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			//OnItemListLoadData();
 			EnableButtons(FALSE, 0, -1);
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
void CFAMAllocateToDeptLine::OnItemListDblClick(){
	
} 
void CFAMAllocateToDeptLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	szAssetNo = m_wndItemList.GetItemText(nNewItem, 1);
	nIdx = str2long(m_wndItemList.GetItemText(nNewItem, 0));
	nQty = str2double(m_wndItemList.GetItemText(nNewItem, 6));
	m_szTranLineID = m_wndItemList.GetItemText(nNewItem, 9);
	//GetDataToScreen();
} 
int CFAMAllocateToDeptLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_VIEW)
		return -1;
	CString szSQL, szUpdate, szRes;
	int nSel = m_wndItemList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szLine = m_wndItemList.GetItemText(nSel, 9);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("STORAGE_TRANSACTION_DELLINE('%s','%s')"), m_szTransactionID, szLine);
 	szRes = pMF->ExecDML(szSQL);
	if(!szRes.IsEmpty()){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMAllocateToDeptLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rsc(&pMF->m_db);
	CString szSQL, szSQLCheck;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT stl_transactionline_id, row_number() over(order by stl_item_id) as idx, stl_item_id, stl_uom_id, stl_unitprice, ") \
		_T(" stl_amount, stl_qtyorder, (select fal_assetname from fam_asset_list where fal_assetno = stl_item_id) as stl_name, ") \
		_T(" (select fal_model from fam_asset_list where fal_assetno = stl_item_id) as stl_model, stl_seri") \
		_T(" FROM storage_transactionline WHERE stl_transaction_id = '%s'"), m_szTransactionID);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("stl_name")),
			rs.GetValue(_T("stl_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("stl_uom_id")),
			rs.GetValue(_T("stl_qtyorder")),
			rs.GetValue(_T("stl_unitprice")),
			rs.GetValue(_T("stl_amount")),
			rs.GetValue(_T("stl_transactionline_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFAMAllocateToDeptLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDeptLine::OnItemNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szName = m_wndItemName.GetCurrent(1);
		m_szModel = m_wndItemName.GetCurrent(2);
		m_szSeri = m_wndItemName.GetCurrent(3);
		m_szUnit = m_wndItemName.GetCurrent(4);
		m_nUnitPrice = str2double(m_wndItemName.GetCurrent(5));
		szType = m_wndItemName.GetCurrent(6);
		m_szTranLineID = m_wndItemName.GetCurrent(7);

	}
	CheckType();
	UpdateData(FALSE);
}
/*void CFAMAllocateToDeptLine::OnItemNameSetfocus(){
	
}*/
void CFAMAllocateToDeptLine::OnItemNameKillfocus(){
	
}
long CFAMAllocateToDeptLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
		szWhere.Format(_T(" and stl_item_id = '%s' and stl_seri = '%s' and fal_model = '%s'"), m_szItemNameKey, m_szSeri, m_szModel);
	}
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T(" SELECT itemid, assetname, fatype, unitprice, uomid, expstorage, impstorage, stl_seri, fal_model, res ") \
				_T(" FROM   (SELECT itemid, assetname, fatype, unitprice, uomid, expstorage, impstorage, stl_seri, fal_model, res ") \
				_T("         FROM   (SELECT stl_item_id       AS itemid, ") \
				_T("                        st_exp_storage_id AS expstorage, ") \
				_T("                        st_imp_storage_id AS impstorage, ") \
				_T("                        fal_assetname     AS assetname, ") \
				_T("                        fal_type          AS fatype, ") \
				_T("                        stl_unitprice     AS unitprice, ") \
				_T("                        1                 AS res, ") \
				_T("                        stl_uom_id        AS uomid, ") \
				_T("                        stl_seri, ") \
				_T("                        l.fal_model AS fal_model ") \
				_T("                 FROM   storage_transactionline ") \
				_T("                        LEFT JOIN storage_transaction ON ( st_transaction_id = stl_transaction_id ) ") \
				_T("                        LEFT JOIN fam_asset_list l ON ( l.fal_assetno = stl_item_id ) ") \
				_T("                 WHERE  stl_org_id = 'FAM' ") \
				_T("                        AND st_doctype = 'IPO' AND st_status = 'P'") \
				_T("                        AND fal_type NOT IN ( 'DCU', 'EQP', 'VT' ) ") \
				_T("                        AND stl_useddate IS NULL AND st_imp_storage_id = '%s'  ") \
				_T("                        AND stl_seri NOT IN ((SELECT TO_CHAR(stl_seri) ") \
				_T("                                             FROM   storage_transactionline ") \
				_T("                                                    LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("													LEFT JOIN fam_asset_list m ON ( m.fal_assetno = stl_item_id ) ") \
				_T("                                             WHERE  stl_seri IS NOT NULL AND m.fal_model = l.fal_model") \
				_T("                                                    AND st_doctype = 'EAO' and st_exp_storage_id = '%s') UNION ALL (select TO_CHAR('XXxxxxxxxxx') from dual)) %s") \
				_T("                ) ") \
				_T("         UNION ALL ") \
				_T("         SELECT itemid, assetname, fatype, unitprice, uomid, expstorage, impstorage, stl_seri, fal_model, res ") \
				_T("         FROM   (SELECT stl_item_id       AS itemid, ") \
				_T("                        st_exp_storage_id AS expstorage, ") \
				_T("                        st_imp_storage_id AS impstorage, ") \
				_T("                        fal_assetname     AS assetname, ") \
				_T("                        fal_type          AS fatype, ") \
				_T("                        stl_unitprice     AS unitprice, ") \
				_T("                        stl_uom_id        AS uomid, ") \
				_T("                        stl_seri, ") \
				_T("                        fal_model ") \
				_T("                 FROM   storage_transactionline ") \
				_T("                        LEFT JOIN storage_transaction ON ( st_transaction_id = stl_transaction_id ) ") \
				_T("                        LEFT JOIN fam_asset_list ON ( fal_assetno = stl_item_id ) ") \
				_T("                 WHERE  stl_org_id = 'FAM' ") \
				_T("                        AND st_doctype = 'IPO' AND st_status = 'P'") \
				_T("                        AND fal_type NOT IN ( 'COM', 'MOT', 'TBYT' ) and st_imp_storage_id = '%s' %s") \
				_T("                 GROUP  BY stl_item_id, ") \
				_T("                           st_exp_storage_id, ") \
				_T("                           st_imp_storage_id, ") \
				_T("                           fal_assetname, ") \
				_T("                           fal_type, ") \
				_T("                           stl_unitprice, ") \
				_T("                           stl_uom_id, ") \
				_T("                           stl_seri, ") \
				_T("                           fal_model) ") \
				_T("                LEFT JOIN (SELECT sb_item_id, ") \
				_T("                                  sb_storage_id, ") \
				_T("                                  Coalesce(SUM(SB_QTYONHAND - SB_QTYORDERED - SB_QTYPREORDERED), 0) AS res ") \
				_T("                           FROM   STORAGE_BIN ") \
				_T("                           GROUP  BY sb_storage_id, ") \
				_T("                                     sb_item_id) ") \
				_T("                       ON ( sb_storage_id = impstorage ") \
				_T("                            AND sb_item_id = itemid ) ") \
				_T("         WHERE  res > 0 ") \
				_T("		 UNION ALL   ") \
                _T("		 SELECT itemid, assetname, fatype, unitprice, uomid, expstorage, impstorage, stl_seri, fal_model, res   ") \
				_T("         FROM   (SELECT stl_item_id       AS itemid, ") \
				_T("                        st_exp_storage_id AS expstorage, ") \
				_T("                        st_imp_storage_id AS impstorage, ") \
				_T("                        fal_assetname     AS assetname,	 ") \
				_T("                        fal_type          AS fatype,	 ") \
				_T("                        stl_unitprice     AS unitprice,	 ") \
				_T("                        stl_uom_id        AS uomid,		 ") \
				_T("                        stl_seri,						 ") \
				_T("                        fal_model						 ") \
				_T("                 FROM   storage_transactionline			 ") \
				_T("                        LEFT JOIN storage_transaction ON ( st_transaction_id = stl_transaction_id ) ") \
				_T("                        LEFT JOIN fam_asset_list ON ( fal_assetno = stl_item_id ) ") \
				_T("                 WHERE  stl_org_id = 'FAM'	") \
				_T("                        AND st_doctype = 'IPO' AND st_status = 'P'	") \
				_T("                        AND fal_type NOT IN ( 'DCU', 'EQP', 'VT' )  and st_imp_storage_id = '%s' and stl_haveserial = 'N' %s") \
				_T("                 GROUP  BY stl_item_id,	 ") \
				_T("                           st_exp_storage_id, ") \
				_T("                           st_imp_storage_id, ") \
				_T("                           fal_assetname, ") \
				_T("                           fal_type, ") \
				_T("                           stl_unitprice, ") \
				_T("                           stl_uom_id, ") \
				_T("                           stl_seri,  ") \
				_T("                           fal_model)   ") \
				_T("                LEFT JOIN (SELECT sb_item_id, ") \
				_T("                                  sb_storage_id, ") \
				_T("                                  Coalesce(SUM(SB_QTYONHAND - SB_QTYORDERED - SB_QTYPREORDERED), 0) AS res ") \
				_T("                           FROM   STORAGE_BIN   ") \
				_T("                           GROUP  BY sb_storage_id,	 ") \
				_T("                                     sb_item_id)  ") \
				_T("                       ON ( sb_storage_id = impstorage	") \
				_T("                            AND sb_item_id = itemid )  WHERE  res > 0) ") \
				_T(" ORDER  BY fal_model, ") \
				_T("           stl_seri "), szWarehouse, szWarehouse, szWhere, szWarehouse, szWhere, szWarehouse, szWhere);

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL); 
	 
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("assetname")),
			rs.GetValue(_T("fal_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("uomid")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("fatype")),
			rs.GetValue(_T("res")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAllocateToDeptLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CFAMAllocateToDeptLine::OnQuantityChange(){
	
} */
/*void CFAMAllocateToDeptLine::OnQuantitySetfocus(){
	
} */
/*void CFAMAllocateToDeptLine::OnQuantityKillfocus(){
	
} */
int CFAMAllocateToDeptLine::OnQuantityCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szItemNameKey.IsEmpty())
		return -1;
	if(m_nQuantity <= 0)
		return -1;
	return 0;
} 
/*void CFAMAllocateToDeptLine::OnUnitChange(){
	
} */
/*void CFAMAllocateToDeptLine::OnUnitSetfocus(){
	
} */
/*void CFAMAllocateToDeptLine::OnUnitKillfocus(){
	
} */
int CFAMAllocateToDeptLine::OnUnitCheckValue(){
	return 0;
} 
/*void CFAMAllocateToDeptLine::OnUnitPriceChange(){
	
} */
/*void CFAMAllocateToDeptLine::OnUnitPriceSetfocus(){
	
} */
/*void CFAMAllocateToDeptLine::OnUnitPriceKillfocus(){
	
} */
int CFAMAllocateToDeptLine::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CFAMAllocateToDeptLine::OnMoneyChange(){
	
} */
/*void CFAMAllocateToDeptLine::OnMoneySetfocus(){
	
} */
/*void CFAMAllocateToDeptLine::OnMoneyKillfocus(){
	
} */
int CFAMAllocateToDeptLine::OnMoneyCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nMoney = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMAllocateToDeptLine::OnUseDateChange(){
	
} */
/*void CFAMAllocateToDeptLine::OnUseDateSetfocus(){
	
} */
void CFAMAllocateToDeptLine::OnUseDateKillfocus(){
	
} 
int CFAMAllocateToDeptLine::OnUseDateCheckValue(){
	_fmsg(_T("%.0f"), m_nQuantity);
	if(szType == _T("TBYT") || szType == _T("COM") || szType == _T("PLM") || szType == _T("MOT"))
	{
		m_wndQuantity.EnableWindow(FALSE);
	}
	return 0;
} 

void CFAMAllocateToDeptLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAllocateToDeptLine();
} 
int CFAMAllocateToDeptLine::OnAddFAMAllocateToDeptLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAllocateToDeptLine::OnEditFAMAllocateToDeptLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAllocateToDeptLine::OnDeleteFAMAllocateToDeptLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szRes;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T(""));

	return 0;
}
int CFAMAllocateToDeptLine::OnSaveFAMAllocateToDeptLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szTemp,szSQLNextVal, szNextVal, mainID;

	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL.Format(_T("STORAGE_TRANSACTION_CREATELINE('%s', '%s', '%s', '%s', %.0f, %.0f, ") \
			_T(" '%s', '', '%s', TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'), '')"), m_szTransactionID, pMF->GetCurrentUser(), m_szItemNameKey, szName, m_nQuantity,
			m_nUnitPrice, m_szUnit, m_szSeri, m_szUseDate);
 	}else
	{
	}
	szTemp = pMF->ExecDML(szSQL);
	if(szTemp.Find(_T("-")) == -1)
 	{	
		OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
 	}
 	else
 	{
		MessageBox(szTemp);
		return -1;
 	}
 	return 0;

}
int CFAMAllocateToDeptLine::OnCancelFAMAllocateToDeptLine(){
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
int CFAMAllocateToDeptLine::OnFAMAllocateToDeptLineListLoadData(){
	return 0;
}

void CFAMAllocateToDeptLine::CheckType(){
	if(szType == _T("TBYT") || szType == _T("COM") || szType == _T("PLM") || szType == _T("MOT"))
	{
		m_wndQuantity.EnableWindow(FALSE);
	}	
}