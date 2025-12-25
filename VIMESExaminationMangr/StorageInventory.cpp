#include "StorageInventory.h"
#include "MainFrm.h"
#include "StoragePreorderDialog.h"
#include "Excel.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventory* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventory* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnCategoryAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventory* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnStorageAddNew();
}*/
static void _OnExpirationDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventory* )pWnd)->OnExpirationDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpirationDateSelendokFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnExpirationDateSelendok();
}
/*static void _OnExpirationDateSetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnExpirationDateKillfocus();
}*/
/*static void _OnExpirationDateKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnExpirationDateKillfocus();
}*/
static long _OnExpirationDateLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnExpirationDateLoadData();
}
/*static void _OnExpirationDateAddNewFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnExpirationDateAddNew();
}*/
static void _OnNameChangeFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnNameChange();
} 
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CStorageInventory *pVw = (CStorageInventory *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageInventory*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnListDeleteItem();
} 
static int _OnManipulateItemFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnManipulateItem();
}

static int _OnPreorderQuantityItemFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnPreorderQuantityItem();
}
static int _OnViewQuantityDifferenceFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnViewQuantityDifference();
}
static int _OnSetupChestFnc(CWnd* pWnd){
	return ((CStorageInventory*)pWnd)->OnSetupChest();
}
static int _OnAddItemtoChestFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnAddItemtoChest();
}

static int _OnEditSalePriceFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnEditSalePrice();
}

static int _OnAddAndRemoveDutyListFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnAdd_RemoveDutyList();
}
static int _OnExportInventoryFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnExportInventory();
	return 0;
}
static int _OnSetMinQuantityFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnSetMinQuantity();
	return 0;
}
static int _OnSetDutyQuantityFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnSetDutyQuantity();
	return 0;
}
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnLoadInactiveSelect();
}
static void _OnReachMinQtySelectFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnReachMinQtySelect();
}
static void _OnDutyListSelectFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnLoadDutyList();
}
static void _OnSwitchDutyModeSelectFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnSwitchDutyMode();
}

/*static void _OnSubTotalChangeFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnSubTotalChange();
} */
/*static void _OnSubTotalSetfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnSubTotalSetfocus();} */ 
/*static void _OnSubTotalKillfocusFnc(CWnd *pWnd){
	((CStorageInventory *)pWnd)->OnSubTotalKillfocus();
} */
static int _OnSubTotalCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventory *)pWnd)->OnSubTotalCheckValue();
} 

static int _OnAddStorageInventoryFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnAddStorageInventory();
} 
static int _OnEditStorageInventoryFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnEditStorageInventory();
} 
static int _OnDeleteStorageInventoryFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnDeleteStorageInventory();
} 
static int _OnSaveStorageInventoryFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnSaveStorageInventory();
} 
static int _OnCancelStorageInventoryFnc(CWnd *pWnd){
	 return ((CStorageInventory*)pWnd)->OnCancelStorageInventory();
} 
CStorageInventory::CStorageInventory(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CStorageInventory::~CStorageInventory(){
}
void CStorageInventory::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 95, 810, 615);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 110, 55);
	m_wndType.Create(this,115, 30, 365, 55); 
	m_wndCategoryLabel.Create(this, _T("Category"), 370, 30, 470, 55);
	m_wndCategory.Create(this,475, 30, 775, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 110, 85);
	m_wndStorage.Create(this,115, 60, 365, 85); 
	m_wndExpirationDateLabel.Create(this, _T("Exp Date"), 370, 60, 470, 85);
	m_wndExpirationDate.Create(this,475, 60, 575, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 580, 60, 660, 85);
	m_wndName.Create(this,665, 60, 775, 85); 
	m_wndSearch.Create(this, _T("@"), 780, 60, 805, 85);

	m_wndLoadInactive.Create(this, _T("Inactive"), 10, 525, 130, 550);
	/*
	m_wndDutyList.Create(this, _T("Duty list"), 145, 525, 240, 550);
	m_wndReachMinQty.Create(this, _T("Reach Min Qty"), 245, 525, 355, 550);
	m_wndSwitchDutyMode.Create(this, _T("Switch duty mode"), 395, 525, 520, 550);
	*/
	m_wndSubTotalLabel.Create(this, _T("Sub Total"), 525, 525, 675, 550);
	m_wndSubTotal.Create(this,680, 525, 805, 550); 
	m_wndList.Create(this,10, 120, 805, 520);

}
void CStorageInventory::OnInitializeComponents(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
//	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndExpirationDate.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndSubTotal.SetLimitText(16);
//	m_wndSubTotal.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndCategory.Format(3, 2);
	m_wndCategory.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndCategory.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	m_wndCategory.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndExpirationDate.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExpirationDate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 205);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Generic"), CFMT_TEXT, 120);
		m_wndList.InsertColumn(5, _T("Purchase Price"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(6, _T("Vat Price"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 80);
	int nCol = 8;
	m_wndList.InsertColumn(nCol++, _T("Onhand"), CFMT_MONEY, 80);//PM:nCol = 8, MA:nCol = 7;
	m_wndList.InsertColumn(nCol++, _T("Ordered"), CFMT_MONEY, 70);
	
	m_wndList.InsertColumn(nCol++, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(nCol++, _T("Lot No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(nCol++, _T("Exp Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(nCol++, _T("Manufacture"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(nCol++, _T("Resource"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(nCol++, _T("Supplier"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(nCol++, _T("LineID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(nCol++, _T("Location"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(nCol++, _T("Priority"), CFMT_TEXT, 30);

	m_wndList.GetHeaderControl()->MergeCell(_T("Unit Price"), 0, 5, 1, 7);
	if (pMF->GetModuleID() == _T("PM"))
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 8, 1, 10);
	else
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 8, 1, 9);
	m_wndSubTotal.SetReadOnly(TRUE);
	m_wndSubTotal.SetCurrencyFormat(TRUE);

}
void CStorageInventory::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndExpirationDate.SetEvent(WE_SELENDOK, _OnExpirationDateSelendokFnc);
	//m_wndExpirationDate.SetEvent(WE_SETFOCUS, _OnExpirationDateSetfocusFnc);
	//m_wndExpirationDate.SetEvent(WE_KILLFOCUS, _OnExpirationDateKillfocusFnc);
	m_wndExpirationDate.SetEvent(WE_SELCHANGE, _OnExpirationDateSelectChangeFnc);
	m_wndExpirationDate.SetEvent(WE_LOADDATA, _OnExpirationDateLoadDataFnc);
	//m_wndExpirationDate.SetEvent(WE_ADDNEW, _OnExpirationDateAddNewFnc);
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.SetWindowText(_T("Inventory"));
//	m_wndList.AddEvent(1, _T("Activate/Deactivate Item"), _OnManipulateItemFnc);
//	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Pre order quantity"), _OnPreorderQuantityItemFnc);
/*
	if (pMF->GetCurrentUser() == _T("duoc") || pMF->GetCurrentUser() == _T("trangbi"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(3, _T("View quantity difference"), _OnViewQuantityDifferenceFnc);
	}
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Add Item to Chest"), _OnAddItemtoChestFnc);
	
	
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Edit Sale Price"), _OnEditSalePriceFnc);

	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(6, _T("Add/Remove Duty List"), _OnAddAndRemoveDutyListFnc);
	//if (pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(7, _T("Export Inventory"), _OnExportInventoryFnc);
	}
	if (pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(8, _T("Set Min Quantity"), _OnSetMinQuantityFnc);
	}
*/
	//m_wndList.AddEvent(0, _T("-"), NULL);
	//m_wndList.AddEvent(8, _T("Set duty quantity"), _OnSetDutyQuantityFnc);
	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndReachMinQty.SetEvent(WE_CLICK, _OnReachMinQtySelectFnc);
	m_wndDutyList.SetEvent(WE_CLICK, _OnDutyListSelectFnc);
	m_wndSwitchDutyMode.SetEvent(WE_CLICK, _OnSwitchDutyModeSelectFnc);
	//m_wndSubTotal.SetEvent(WE_CHANGE, _OnSubTotalChangeFnc);
	//m_wndSubTotal.SetEvent(WE_SETFOCUS, _OnSubTotalSetfocusFnc);
	//m_wndSubTotal.SetEvent(WE_KILLFOCUS, _OnSubTotalKillfocusFnc);

	

	m_wndSubTotal.SetEvent(WE_CHECKVALUE, _OnSubTotalCheckValueFnc);

	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageInventoryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageInventoryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageInventoryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageInventoryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageInventoryFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_EDIT);
	

}
void CStorageInventory::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndExpirationDate.GetDlgCtrlID(), m_szExpirationDateKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
	//DDX_Check(pDX, m_wndDutyList.GetDlgCtrlID(), m_bDutyList);
	DDX_Text(pDX, m_wndSubTotal.GetDlgCtrlID(), m_nSubTotal);
	//DDX_Check(pDX, m_wndReachMinQty.GetDlgCtrlID(), m_bReachMinQty);


}
void CStorageInventory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageInventory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CStorageInventory::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szStorageKey.Empty();
	m_szExpirationDateKey.Empty();
	m_szName.Empty();
	m_nSubTotal=0;
	m_nTotalExchangeAmount=0;
	m_nTotalAmountSalePrice=0;
	m_bDutyList = FALSE;
	m_bLoadInactive = FALSE;
	m_bSwitchDutyMode = FALSE;

}
int CStorageInventory::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, -1);
			m_wndStorage.SetFocus();
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
		m_wndSwitchDutyMode.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CStorageInventory::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnTypeSelendok(){
	 OnListLoadData();
}
/*void CStorageInventory::OnTypeSetfocus(){
	
}*/
/*void CStorageInventory::OnTypeKillfocus(){
	
}*/
long CStorageInventory::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" AND substr(mpt_product_type_id,1,1) ='A'"));
	return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageInventory::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnCategorySelendok(){
	 
}
/*void CStorageInventory::OnCategorySetfocus(){
	
}*/
/*void CStorageInventory::OnCategoryKillfocus(){
	
}*/
long CStorageInventory::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndCategory, m_szCategoryKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageInventory::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnStorageSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szLocked, tmpStr;

	if (!pMF->CheckPermission(_T("08.01")))
	{
	//	ShowMessageBox(_T("Permission Denied."), 0);
	//	return;
	}
	OnListLoadData();
}
/*void CStorageInventory::OnStorageSetfocus(){
	
}*/
/*void CStorageInventory::OnStorageKillfocus(){
	
}*/
long CStorageInventory::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	//szFilter.Format(_T(" and msl_org_id in('GL','%s') "), pMF->GetModuleID());
	
	m_szStorageKey = _T("23");
	szFilter.Format(_T(" and msl_storage_id = 23"));

	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageInventory::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnExpirationDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnExpirationDateSelendok(){
	 
}
/*void CStorageInventory::OnExpirationDateSetfocus(){
	
}*/
/*void CStorageInventory::OnExpirationDateKillfocus(){
	
}*/
long CStorageInventory::OnExpirationDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndExpirationDate, m_szExpirationDateKey, _T("expiration_date"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExpirationDate.IsSearchKey() && !m_szExpirationDateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szExpirationDateKey
};
	m_wndExpirationDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExpirationDate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageInventory::OnExpirationDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnNameChange(){
	UpdateData(TRUE);
	m_wndList.Search(2, m_szName, SEARCH_LIKE);
}
/*void CStorageInventory::OnNameSetfocus(){
	
} */
/*void CStorageInventory::OnNameKillfocus(){
	
} */
int CStorageInventory::OnNameCheckValue(){
	return 0;
} 
void CStorageInventory::OnSearchSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if (!pMF->CheckPermission(_T("08.01")))
	//{
	//	ShowMessageBox(_T("Permission Denied."), 0);
	//	return;
	//}
	OnListLoadData();
} 
void CStorageInventory::OnListDblClick(){
	OnSetDutyQuantity();
} 
void CStorageInventory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nPItemID = ToInt(m_wndList.GetItemText(nNewItem, 0));
} 

int CStorageInventory::OnManipulateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	bool m_bStt = false;
	szSQL.Format(_T("SELECT msl_isactive as stt FROM m_storageline WHERE msl_product_item_id = %d AND msl_storage_id = %d"), m_nPItemID, ToInt(m_szStorageKey));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return -1;
	rs.GetValue(_T("stt"), tmpStr);
	if (tmpStr == _T("Y"))
		m_bStt = false;
	else
		m_bStt = true;
	szSQL.Format(_T("UPDATE m_storageline SET msl_isactive = '%s' WHERE msl_product_item_id = %d AND msl_storage_id = %d"), m_bStt?_T("Y"):_T("N"), m_nPItemID, ToInt(m_szStorageKey));
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes >0)
		//m_wndList.DeleteItem(m_wndList.GetCurSel());
		m_wndList.SetItemBkColor(m_wndList.GetCurSel(), RGB(200, 200, 200), FALSE);
	return 0;
}

int CStorageInventory::OnPreorderQuantityItem(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

	CStoragePreorderDialog dlg(this, VM_EDIT);
	dlg.m_nStorageID = str2int(m_szStorageKey);
	dlg.m_nProductItem_ID = str2long(m_wndList.GetItemText(nSel, 0));
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;
}

int CStorageInventory::OnViewQuantityDifference(){
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CStringArray arrCol;
	int nCol = 0, nRow = 0;
	szWhere.Format(_T(" AND isactive = 'Y'"));
	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND stockid = %s"), m_szStorageKey);
	szSQL.Format(_T("SELECT code, sitemid, ") \
	_T("       stockid, ") \
	_T("       Sum(stockcard)          AS stockcard, ") \
	_T("       Sum(onhand)             AS onhand, ") \
	_T("       Sum(oder)               AS oder, ") \
	_T("       Sum(stockcard - onhand) AS difference ") \
	_T("FROM   (SELECT sitemid, ") \
	_T("               Sum(impqty - expqty) AS stockcard, ") \
	_T("               stockid ") \
	_T("        FROM   (SELECT sitemid, ") \
	_T("                       impqty, ") \
	_T("                       0          AS expqty, ") \
	_T("                       impstockid AS stockid ") \
	_T("                FROM   miv ") \
	_T("                UNION ALL ") \
	_T("                SELECT sitemid, ") \
	_T("                       0, ") \
	_T("                       expqty, ") \
	_T("                       expstockid ") \
	_T("                FROM   mev) ") \
	_T("        GROUP  BY sitemid, ") \
	_T("                  stockid) tbl ") \
	_T("       LEFT JOIN (SELECT product_code code, ") \
	_T("						 msl_product_item_id AS sitemid, ") \
	_T("                         msl_storage_id      AS stockid, ") \
	_T("						 msl_isactive isactive,") \
	_T("                         Sum(msl_qtyordered) AS oder, ") \
	_T("                         Sum(msl_qtyonhand)  AS onhand ") \
	_T("                  FROM   m_storageline ") \
	_T("				  LEFT JOIN m_productitem_view ON (msl_product_item_id = product_item_id)") \
	_T("                  GROUP  BY product_code, msl_product_item_id, msl_isactive,") \
	_T("                            msl_storage_id) tbl1 USING (sitemid, stockid) ") \
	_T("WHERE  stockcard <> onhand %s ") \
	_T("GROUP  BY code, sitemid, stockid ") \
	_T("ORDER  BY code "), szWhere);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		_fmsg(_T("%s"), szSQL);
		return -1;
	}
	arrCol.Add(_T("stockid"));
	arrCol.Add(_T("code"));
	arrCol.Add(_T("sitemid"));
	arrCol.Add(_T("stockcard"));
	arrCol.Add(_T("onhand"));	
	arrCol.Add(_T("difference"));
	arrCol.Add(_T("oder"));
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//xls.SetColumnWidth(0, 30);
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER);
	nRow = 1;
	while (!rs.IsEOF())
	{
		for (int i = 0; i < arrCol.GetCount(); i++)
			if (i == 1 ||i ==2)
				xls.SetCellText(nCol + i, nRow, rs.GetValue(arrCol.GetAt(i)), FMT_TEXT);
			else
				xls.SetCellText(nCol + i, nRow, rs.GetValue(arrCol.GetAt(i)), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Quantity Difference View.xls"));
	return 0;
}
int CStorageInventory::OnSetupChest(){
	return 0;
}

int CStorageInventory::OnAddItemtoChest(){
	if (!m_szStorageKey.IsEmpty())
	{
	}
	return 0;
}
int CStorageInventory::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CStorageInventory::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere1, tmpStr;
	UpdateData(true);

	CString szCategory = _T("N");
	szSQL.Format(_T("SELECT msl_category FROM m_storagelist WHERE msl_storage_id=%d "), str2int(m_szStorageKey));
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("msl_category"), m_szStorageCategory);
	}


	m_wndList.BeginLoad(); 
	int nCount = 0;

	


	{
		if (!m_bLoadInactive)
			szWhere.Format(_T(" AND msl_isactive IN('Y','D') "));
		else
			szWhere.Format(_T(" AND msl_isactive = 'N'"));
		if (m_bReachMinQty)
			szWhere1.Format(_T(" AND product_onhand <= product_qtymin"));
	}

	//szWhere.AppendFormat(_T(" and msl_org_id in('GL','%s') "), pMF->GetModuleID());
	if(!m_szTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and product_producttype='%s' "), m_szTypeKey);
	}
	if(!m_szCategoryKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and product_categoryid=%ld "), str2long(m_szCategoryKey));
	}
	if (!m_szName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(product_name) like chr(37)||lower('%s')||chr(37)"), m_szName);

//	szWhere.AppendFormat(_T(" and product_org_id in('GL','%s') "), pMF->GetModuleID());


	szSQL.Format(_T(" SELECT * FROM (SELECT msl_product_item_id, product_code, product_name, product_classname, ") \
				_T("        product_uomname, product_unitprice, product_taxprice, ") \
				_T("        product_saleprice1, product_saleprice2, product_qtyonhand, ") \
				_T("        product_qtyordered, amount, product_lotno, product_priority,") \
				_T("        product_expdate, product_manufacturename, locationid, ") \
				_T("        business_partner, isactive, qtypreorder, explevel, duty_limit,") \
				_T("        SUM(product_qtyonhand) OVER (PARTITION BY product_code) product_onhand, ") \
				_T("        product_qtymin ") \
				_T(" FROM   (SELECT    msl_product_item_id, product_code, product_name, product_classname, product_priority,") \
				_T("                   product_uomname, product_unitprice, product_taxprice, ") \
				_T("                   product_saleprice1, product_saleprice2, product_qtymin, ") \
				_T("                   SUM(msl_qtyonhand)                      AS product_qtyonhand, ") \
				_T("                   SUM(msl_qtyordered + msl_qtypreordered) AS product_qtyordered, ") \
				_T("                   SUM(product_taxprice * msl_qtyonhand)   AS amount, ") \
				_T("                   product_lotno, product_expdate, product_manufacturename, ") \
				_T("                   mpl_location_id                         locationid, ") \
				_T("                   adp_name                                AS business_partner, ") \
				_T("                   msl_isactive                            AS isactive, ") \
				_T("				   msd_qtyorder_limit duty_limit,") \
				_T("                   SUM(msl_qtypreordered)                  AS qtypreorder, ") \
				_T("                   CASE WHEN product_expdate > TO_DATE('1752-09-14', 'YYYY-MM-DD') THEN product_expdate - trunc(SYSDATE) ") \
				_T("                   ELSE 1000 ") \
				_T("                   END                                     AS explevel ") \
				_T("         FROM      m_storageline ") \
				_T("         LEFT JOIN m_productitem_view ON( product_item_id = msl_product_item_id ) ") \
				_T("         LEFT JOIN m_product_location ON ( mpl_storage_id = msl_storage_id ") \
				_T("                                           AND product_id = mpl_product_id ) ") \
				_T("         LEFT JOIN ad_partner ON( adp_partner_id = product_bpartnerid ) ") \
				_T("		 LEFT JOIN m_storage_duty ON (msd_storage_id = msl_storage_id AND msd_product_item_id = msl_product_item_id)") \
				_T("         WHERE     msl_storage_id = %d ") \
				_T("               AND msl_qtyonhand > 0 %s") \
				_T("         GROUP     BY msl_product_item_id, product_code, product_name, product_classname, product_priority,") \
				_T("                      product_uomname, product_unitprice, product_taxprice, ") \
				_T("                      product_saleprice1, product_saleprice2, product_lotno, ") \
				_T("                      product_expdate, product_manufacturename, msl_isactive, ") \
				_T("                      product_bpartnerid, adp_name, mpl_location_id, product_qtymin, msd_qtyorder_limit ") \
				_T("         ORDER     BY product_name, product_uomname, product_unitprice, ") \
				_T("                      product_saleprice1) tbl0) tblanalytic") \
				_T("	WHERE 1=1 %s"), str2int(m_szStorageKey), szWhere, szWhere1);

	int nExpLevel;
	double nQtyPreorder;
	double nProductOnhand = 0, nProductMin = 0;
	double nAmount = 0;
	m_nSubTotal = 0;
	nCount = rs.ExecSQL(szSQL);
	if(pMF->GetModuleID() == _T("MA"))
	{
			while(!rs.IsEOF()){ 
			rs.GetValue(_T("explevel"), nExpLevel);
			rs.GetValue(_T("product_onhand"), nProductOnhand);
			rs.GetValue(_T("product_qtymin"), nProductMin);
			rs.GetValue(_T("amount"), nAmount);
			m_nSubTotal += nAmount;
			int nItem = m_wndList.AddItems(
				rs.GetValue(_T("msl_product_item_id")),
				rs.GetValue(_T("product_code")),
				rs.GetValue(_T("product_name")), 
				rs.GetValue(_T("product_uomname")), 
				rs.GetValue(_T("product_classname")), 
				rs.GetValue(_T("product_taxPrice")),
				rs.GetValue(_T("product_salePrice1")), 
				rs.GetValue(_T("product_salePrice2")), 
				rs.GetValue(_T("product_qtyonhand")), 
				rs.GetValue(_T("product_qtyordered")), 
				rs.GetValue(_T("Amount")), 
				rs.GetValue(_T("product_LotNo")), 
				rs.GetValue(_T("product_ExpDate")), 
				rs.GetValue(_T("product_manufacturename")), 
				_T(""),
				rs.GetValue(_T("business_partner")),
				_T(""),
				rs.GetValue(_T("locationid")),
				rs.GetValue(_T("product_priority")),
				NULL);
			rs.GetValue(_T("isactive"), tmpStr);
			rs.GetValue(_T("qtypreorder"), nQtyPreorder);
			
			if (tmpStr == _T("N"))
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
			if(nExpLevel <= 0)
			{
				m_wndList.SetItemBkColor(nItem, RGB(128, 64, 0), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			else if(nExpLevel < 30)
			{
				m_wndList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			else if(nExpLevel < 90)
			{
				m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			if(nQtyPreorder > 0){
				m_wndList.SetSubItemBkColor(nItem, 2, RGB(0, 129, 192), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);

			}
			if (nProductOnhand <= nProductMin)
			{
				m_wndList.SetSubItemBkColor(nItem, 8, RGB(128, 64, 0), FALSE);
			}
			rs.MoveNext();
		}
	}
	else
	{
		while(!rs.IsEOF()){ 
			rs.GetValue(_T("explevel"), nExpLevel);
			rs.GetValue(_T("product_onhand"), nProductOnhand);
			rs.GetValue(_T("product_qtymin"), nProductMin);
			rs.GetValue(_T("amount"), nAmount);
			m_nSubTotal += nAmount;

			int nItem = m_wndList.AddItems(
				rs.GetValue(_T("msl_product_item_id")),
				rs.GetValue(_T("product_code")),
				rs.GetValue(_T("product_name")), 
				rs.GetValue(_T("product_uomname")), 
				rs.GetValue(_T("product_classname")), 
				rs.GetValue(_T("product_UnitPrice")),
				rs.GetValue(_T("product_taxPrice")), 
				m_szStorageCategory==_T("S")?rs.GetValue(_T("product_salePrice1")):rs.GetValue(_T("product_salePrice2")), 
				rs.GetValue(_T("product_qtyonhand")), 
				rs.GetValue(_T("product_qtyordered")), 
				rs.GetValue(_T("Amount")), 
				rs.GetValue(_T("product_LotNo")), 
				rs.GetValue(_T("product_ExpDate")), 
				rs.GetValue(_T("product_manufacturename")), 
				_T(""),
				rs.GetValue(_T("business_partner")),
				_T(""),
				rs.GetValue(_T("locationid")),
				rs.GetValue(_T("product_priority")),
				NULL);
			rs.GetValue(_T("isactive"), tmpStr);
			rs.GetValue(_T("qtypreorder"), nQtyPreorder);
			if (tmpStr == _T("N"))
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
			if(nExpLevel <= 0)
			{
				m_wndList.SetItemBkColor(nItem, RGB(128, 64, 0), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			else if(nExpLevel < 30)
			{
				m_wndList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			else if(nExpLevel < 90)
			{
				m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}
			if(nQtyPreorder > 0){
				m_wndList.SetSubItemBkColor(nItem, 2, RGB(0, 129, 192), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);

			}
			if (nProductOnhand <= nProductMin)
			{
				m_wndList.SetSubItemBkColor(nItem, 9, RGB(64, 128, 128), FALSE);
			}
			rs.MoveNext();
		}
	}

	m_wndList.EndLoad(); 

//	GetTotalAmounts();
	UpdateData(FALSE);
	return nCount;
}

void CStorageInventory::OnLoadInactiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CString szSQL;
	//szSQL.Format(_T("SELECT count(*) FROM m_storageline WHERE msl_isactive = 'N'"));
	//rs.ExecSQL(szSQL);
	//int nRes = rs.GetIntValue();
	//if (nRes > 0)
	OnListLoadData();
	

}

void CStorageInventory::OnReachMinQtySelect(){
	OnListLoadData();
}

/*void CStorageInventory::OnSubTotalChange(){
	
} */
/*void CStorageInventory::OnSubTotalSetfocus(){
	
} */
/*void CStorageInventory::OnSubTotalKillfocus(){
	
} */
int CStorageInventory::OnSubTotalCheckValue(){
	return 0;
} 

int CStorageInventory::OnAddStorageInventory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageInventory::OnEditStorageInventory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageInventory::OnDeleteStorageInventory(){
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
 		OnCancelStorageInventory();
 	}
	return 0;
}
int CStorageInventory::OnSaveStorageInventory(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnStorageInventoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageInventory::OnCancelStorageInventory(){
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
int CStorageInventory::OnStorageInventoryListLoadData(){
	return 0;
}

void CStorageInventory::GetTotalAmounts(){
	m_nSubTotal = 0;
	m_nTotalAmountSalePrice = 0;
	m_nTotalExchangeAmount = 0;
	for (int i =0;i < m_wndList.GetItemCount(); i++){
	//	m_nSubTotal += str2double(m_wndList.GetItemText(i, m_nAmountCol));
	}
	UpdateData(FALSE);
}

BEGIN_MESSAGE_MAP(CStorageInventory, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CStorageInventory::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndStorage.SetFocus();
}


int CStorageInventory::OnEditSalePrice(){

	return 0;
}


int CStorageInventory::OnAdd_RemoveDutyList(){
	return 0;
}

void CStorageInventory::OnLoadDutyList()
{
	OnListLoadData();
}

void CStorageInventory::OnSwitchDutyMode(){
}

void CStorageInventory::OnExportInventory(){
	CExcel xls;
	TCHAR szName[128]; // This is the buffer where the name will be stored
	//LVCOLUMN lvColInfo;
	HDITEM hdi;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	int nRow = 1, nType = 0, nWidth = 0;
	for (int i = 0; i < m_wndList.GetColumnCount(); i++)
	{
		hdi.mask = HDI_TEXT;
		hdi.pszText = szName;
		m_wndList.GetHeaderControl()->GetItem(i, &hdi);
		_debug(_T("%d|%s"), i, szName);
		nWidth = m_wndList.GetColumnWidth(i);
		xls.SetColumnWidth(i, nWidth/8);
		//xls.SetCellText(i, 0, arrCol.GetAt(i), 4098, true);
		xls.SetCellText(i, 0, szName, 4098, true);
	}	
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		for (int j = 0; j < m_wndList.GetColumnCount(); j++)
		{
			nType = m_wndList.GetColumnFmt(j);
			if (nType == 256)
				xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_TEXT);
			else if (nType == 2048)
			{
				if (!m_wndList.GetItemText(i, j).IsEmpty())
					xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_DATE);
			}
			else
				xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_NUMBER1);
		}
		nRow++;
	}
	xls.Save(_T("Exports\\Quan ly ton kho.xls"));
}

void CStorageInventory::OnSetMinQuantity(){
}

void CStorageInventory::OnSetDutyQuantity(){
}