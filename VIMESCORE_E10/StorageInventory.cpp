#include "StorageInventory.h"
#include "MainFrame_E10.h"
#include "StoragePreorderDialog.h"
#include "Excel.h"
#include ".\storageinventory.h"
#include "ChestSetupDialog.h"
#include "ChestPaneDialog.h"
#include "ProductEditPriceDialog.h"
#include "DutyQuantityDialog.h"
#include "ProductMinQtySetup.h"

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

static int _OnViewOrderDifferenceFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnViewOrderDifference();
	return 0;
}
static int _OnPostInventoryToDuocQGFnc(CWnd *pWnd){
	return ((CStorageInventory*)pWnd)->OnPostInventoryToDuocQG();
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

static int _OnRecalcOrderQtyFnc(CWnd *pWnd){
	((CStorageInventory*)pWnd)->OnRecalcOrderQty();
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
	m_nPItemID = 0;
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


	m_wndNameLabel.Create(this, _T("Name"), 580, 60, 630, 85);
	m_wndSearchByGeneric.Create(this, _T(""), 635, 60, 660, 85);

	m_wndName.Create(this,665, 60, 775, 85); 

	m_wndSearch.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndLoadInactive.Create(this, _T("Inactive"), 10, 525, 130, 550);
	m_wndDutyList.Create(this, _T("Duty list"), 145, 525, 250, 550);
	m_wndReachMinQty.Create(this, _T("Reach Min Qty"), 255, 525, 370, 550);
	m_wndSwitchDutyMode.Create(this, _T("Switch duty mode"), 395, 525, 520, 550);
	m_wndSubTotalLabel.Create(this, _T("Sub Total"), 525, 525, 675, 550);
	m_wndSubTotal.Create(this,680, 525, 805, 550); 
	m_wndList.Create(this,10, 120, 805, 520);


}
void CStorageInventory::OnInitializeComponents(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	
	
	m_wndList.EnableRowHeader(TRUE);	
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	/*
	if (pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.GetHeaderControl()->MergeCell(_T("Unit Price"), 0, 7, 2, 9);
	}
	else
	{
		m_wndList.GetHeaderControl()->MergeCell(_T("Unit Price"), 0, 5, 1, 7);
	}
	if (pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 8, 1, 10);
	}
	else if (pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 10, 1, 11);
	}
	else
	{
		m_wndList.GetHeaderControl()->MergeCell(_T("Quantity"), 0, 8, 1, 9);
	}
	*/






	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 205);
	int nCol = 3;
	if (pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.InsertColumn(nCol++, _T("Mã hiệu"), CFMT_TEXT, 100);
		m_wndList.InsertColumn(nCol++, _T("Manufacture"), CFMT_TEXT, 250);
	}
	m_wndList.InsertColumn(nCol++, _T("Uom"), CFMT_TEXT, 60);
	if(pMF->GetModuleID() == _T("MA") || pMF->m_szOriginModuleID == _T("HC"))
	{
		m_wndList.InsertColumn(nCol++, _T("Generic"), CFMT_TEXT, 0);
		m_wndList.InsertColumn(nCol++, _T("Giá VAT"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(nCol++, _T("Giá Dịch vụ"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(nCol++, _T("Giá BH"), CFMT_MONEY, 80);
	}
	else
	{
		m_wndList.InsertColumn(nCol++, _T("Generic"), CFMT_TEXT, 120);
		m_wndList.InsertColumn(nCol++, _T("Giá mua"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(nCol++, _T("Giá VAT"), CFMT_MONEY, 80);
		m_wndList.InsertColumn(nCol++, _T("Giá bán"), CFMT_MONEY, 80);
	}
	
	if (pMF->GetModuleID() == _T("PM"))
		m_wndList.InsertColumn(nCol++, _T("Duty Limit"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(nCol++, _T("SL.Tồn"), CFMT_MONEY, 80);//PM:nCol = 8, MA:nCol = 7;
	m_wndList.InsertColumn(nCol++, _T("SL.Order"), CFMT_MONEY, 70);
	
	m_wndList.InsertColumn(nCol++, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(nCol++, _T("Lot No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(nCol++, _T("Exp Date"), CFMT_DATE, 90);
	if (pMF->GetModuleID() != _T("MA"))
	{
		m_wndList.InsertColumn(nCol++, _T("Manufacture"), CFMT_TEXT, 250);
	}	
	m_wndList.InsertColumn(nCol++, _T("Resource"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(nCol++, _T("Supplier"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(nCol++, _T("LineID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(nCol++, _T("Location"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(nCol++, _T("Priority"), CFMT_TEXT, 30);

	m_wndSubTotal.SetReadOnly(TRUE);
	m_wndSubTotal.SetCurrencyFormat(TRUE);

}
void CStorageInventory::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndList.AddEvent(1, _T("Activate/Deactivate Item"), _OnManipulateItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Pre order quantity"), _OnPreorderQuantityItemFnc);
	//if (pMF->GetCurrentUser() == _T("duoc") || pMF->GetCurrentUser() == _T("trangbi"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(3, _T("View quantity difference"), _OnViewQuantityDifferenceFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(12, _T("View order difference"), _OnViewOrderDifferenceFnc);
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(11, _T("Recalc order qty"), _OnRecalcOrderQtyFnc);
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
	if (pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.AddEvent(9, _T("Post Last Inventory to Duoc QG"), _OnPostInventoryToDuocQGFnc);
	}
	//m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(10, _T("Set duty quantity"), _OnSetDutyQuantityFnc);
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
	DDX_Check(pDX, m_wndDutyList.GetDlgCtrlID(), m_bDutyList);
	DDX_Text(pDX, m_wndSubTotal.GetDlgCtrlID(), m_nSubTotal);
	DDX_Check(pDX, m_wndReachMinQty.GetDlgCtrlID(), m_bReachMinQty);
	DDX_Check(pDX, m_wndSearchByGeneric.GetDlgCtrlID(), m_bSearchByGeneric);


}
void CStorageInventory::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageInventory::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

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
	m_bSearchByGeneric = FALSE;

}
int CStorageInventory::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnTypeSelendok(){
	 OnListLoadData();
}
/*void CStorageInventory::OnTypeSetfocus(){
	
}*/
/*void CStorageInventory::OnTypeKillfocus(){
	
}*/
long CStorageInventory::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnCategorySelendok(){
	 
}
/*void CStorageInventory::OnCategorySetfocus(){
	
}*/
/*void CStorageInventory::OnCategoryKillfocus(){
	
}*/
long CStorageInventory::OnCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnStorageSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szLocked, tmpStr;

	if (!pMF->CheckPermission(_T("08.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	szSQL.Format(_T("SELECT msl_locked, msl_category FROM m_storagelist WHERE msl_storage_id=%d"), str2int(m_szStorageKey));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("msl_locked"), szLocked);
	if(szLocked == _T("D"))
	{
		m_bSwitchDutyMode = TRUE;
		TranslateString(_T("Switch normal mode"), tmpStr);
		m_wndSwitchDutyMode.SetWindowText(tmpStr);
	}
	else
	{
		m_bSwitchDutyMode = FALSE;
		TranslateString(_T("Switch duty mode"), tmpStr);
		m_wndSwitchDutyMode.SetWindowText(tmpStr);
	}
	//Disable func edit price
	//rs.GetValue(_T("msl_category"), tmpStr);
	//if (tmpStr == _T("P") || tmpStr == _T("I"))
	//	if (pMF->GetCurrentUser() != _T("admin"))
	//		m_wndList.SetMenuState(5, FALSE);
	//	else
	//		m_wndList.SetMenuState(5, TRUE);
	//else
	//	m_wndList.SetMenuState(5, TRUE);
	OnListLoadData();
}
/*void CStorageInventory::OnStorageSetfocus(){
	
}*/
/*void CStorageInventory::OnStorageKillfocus(){
	
}*/
long CStorageInventory::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	//szFilter.Format(_T(" and msl_org_id in('GL','%s') "), pMF->GetModuleID());

	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageInventory::OnExpirationDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventory::OnExpirationDateSelendok(){
	 
}
/*void CStorageInventory::OnExpirationDateSetfocus(){
	
}*/
/*void CStorageInventory::OnExpirationDateKillfocus(){
	
}*/
long CStorageInventory::OnExpirationDateLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("08.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	OnListLoadData();
}
#include "PMEditDrugDuocQG.h"
void CStorageInventory::OnListDblClick(){
	//OnSetDutyQuantity();
	int nCel= m_wndList.GetCurSel();
	if (nCel <0 )
		return ;
	long nProduct_item_id = str2long(m_wndList.GetItemText(nCel,0));
	CPMEditDrugDuocQG dlg(this,_T("INS"));
	//dlg.m_nOrderID = m_nOrderID;
	dlg.m_nProduct_Item_id = nProduct_item_id;
	if(dlg.DoModal()== IDOK)
	{
		//OnListLoadData();
	}

} 
void CStorageInventory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nPItemID = str2long(m_wndList.GetItemText(nNewItem, 0));
} 

int CStorageInventory::OnManipulateItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	bool m_bStt = false;
	szSQL.Format(_T("SELECT msl_isactive as stt ") \
				_T(" FROM m_storageline ") \
				_T(" WHERE msl_product_item_id = %ld AND msl_storage_id = %d")
				, m_nPItemID, ToInt(m_szStorageKey));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return -1;
	rs.GetValue(_T("stt"), tmpStr);
	if (tmpStr == _T("Y"))
		m_bStt = false;
	else
		m_bStt = true;
	szSQL.Format(_T("UPDATE m_storageline ") \
				_T(" SET msl_isactive = '%s' ") \
				_T(" WHERE msl_product_item_id = %ld AND msl_storage_id = %d")
				, m_bStt?_T("Y"):_T("N"), m_nPItemID, ToInt(m_szStorageKey));
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
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	_T("                FROM   mev) tbl0") \
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
#include "PMSysPurchaseToDuocQG.h"
int CStorageInventory::OnPostInventoryToDuocQG(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//pMF->m_wndLienThong.OnPostPhieuNhapKho(0,ToInt(m_szStorageKey),3);
	CPMSysPurchaseToDuocQG dlg(this);
	dlg.m_nType=3;
	dlg.DoModal();
	return 0;

}
int CStorageInventory::OnSetupChest(){
	return 0;
}

int CStorageInventory::OnAddItemtoChest(){
	if (!m_szStorageKey.IsEmpty())
	{
		CChestPaneDialog dlg(this, str2int(m_szStorageKey));
		dlg.DoModal();
		OnListLoadData();
	}
	return 0;
}
int CStorageInventory::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
} 
long CStorageInventory::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

	


	if(m_bDutyList)
	{
		szWhere.AppendFormat(_T(" and msl_product_item_id in(select msd_product_item_id from m_storage_duty where msd_storage_id=%d) "),
			str2int(m_szStorageKey));
	}
	else
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
	{
		if(m_bSearchByGeneric)
		{
			szWhere.AppendFormat(_T(" AND lower(product_classname) like chr(37)||lower('%s')||chr(37)"), m_szName);
		}
		else
		{
			szWhere.AppendFormat(_T(" AND lower(product_name) like chr(37)||lower('%s')||chr(37)"), m_szName);
		}
	}


	szWhere.AppendFormat(_T(" and product_org_id in('GL','%s') "), pMF->GetModuleID());


	szSQL.Format(
		_T(" SELECT DISTINCT msl_product_item_id, product_code, product_name, product_classname, product_uomname, product_unitprice, ") \
        _T("     product_taxprice, product_saleprice1,product_saleprice2,product_qtyonhand,product_qtyordered,amount,product_lotno, ") \
        _T("     product_priority, product_expdate,product_manufacturename,product_ma_hieu,locationid,business_partner,isactive, ") \
        _T("    qtypreorder,explevel,duty_limit,product_onhand,product_qtymin,location_name") \
		_T("   FROM (SELECT msl_product_item_id,") \
		_T("                product_code,") \
		_T("                product_name,") \
		_T("                product_classname,") \
		_T("                product_uomname,") \
		_T("                product_unitprice,") \
		_T("                product_taxprice,") \
		_T("                product_saleprice1,") \
		_T("                product_saleprice2,") \
		_T("                product_qtyonhand,") \
		_T("                product_qtyordered,") \
		_T("                amount,") \
		_T("                product_lotno,") \
		_T("                product_priority,") \
		_T("                product_expdate,") \
		_T("                product_manufacturename,") \
		_T("                product_ma_hieu,") \
		_T("                locationid,") \
		_T("                business_partner,") \
		_T("                isactive,") \
		_T("                qtypreorder,") \
		_T("                explevel,") \
		_T("                duty_limit,") \
		_T("                SUM(product_qtyonhand)") \
		_T("                  OVER (") \
		_T("                    PARTITION BY product_code) product_onhand,") \
		_T("                product_qtymin,") \
		_T("                Get_locationname(%d, locationid) AS location_name") \
		_T("           FROM (   SELECT msl_product_item_id,") \
		_T("                           product_code,") \
		_T("                           product_name,") \
		_T("                           product_classname,") \
		_T("                           product_priority,") \
		_T("                           product_uomname,") \
		_T("                           product_unitprice,") \
		_T("                           product_taxprice,") \
		_T("                           product_saleprice1,") \
		_T("                           product_saleprice2,") \
		_T("                           product_qtymin,") \
		_T("                           SUM(msl_qtyonhand) AS product_qtyonhand,") \
		_T("                           SUM(msl_qtyordered + msl_qtypreordered) AS product_qtyordered,") \
		_T("                           SUM(product_taxprice * msl_qtyonhand) AS amount,") \
		_T("                           product_lotno,") \
		_T("                           product_expdate,") \
		_T("                           product_manufacturename,") \
		_T("                           product_ma_hieu,") \
		_T("                           mpl_location_id locationid,") \
		_T("                           adp_name AS business_partner,") \
		_T("                           msl_isactive AS isactive,") \
		_T("                           msd_qtyorder_limit duty_limit,") \
		_T("                           SUM(msl_qtypreordered) AS qtypreorder,") \
		_T("                           CASE WHEN product_expdate > To_date('1752-09-14', 'YYYY-MM-DD') THEN") \
		_T("                                product_expdate -") \
		_T("                                Trunc(SYSDATE)") \
		_T("                           ELSE 1000") \
		_T("                           END AS explevel") \
		_T("                      FROM m_storageline") \
		_T("                 LEFT JOIN m_productitem_view ON( product_item_id = msl_product_item_id )") \
		_T("                 LEFT JOIN m_product_location ON ( mpl_storage_id = msl_storage_id AND") \
		_T("                                                   product_id = mpl_product_id )") \
		_T("                 LEFT JOIN ad_partner ON( adp_partner_id = product_bpartnerid )") \
		_T("                 LEFT JOIN m_storage_duty ON ( msd_storage_id = msl_storage_id AND") \
		_T("                                               msd_product_item_id = msl_product_item_id )") \
		_T("                     WHERE msl_storage_id = %d AND msl_qtyonhand > 0 %s") \
		_T("                     GROUP BY msl_product_item_id,product_code,product_name,product_classname,") \
		_T("                     product_priority,") \
		_T("                     product_uomname,product_unitprice,product_taxprice,product_saleprice1,") \
		_T("                     product_saleprice2,") \
		_T("                     product_lotno,product_expdate,product_manufacturename,product_ma_hieu, msl_isactive,") \
		_T("                     product_bpartnerid,") \
		_T("                     adp_name,") \
		_T("                     mpl_location_id,product_qtymin,msd_qtyorder_limit") \
		_T("                     ORDER BY product_name,product_uomname,product_unitprice,product_saleprice1) tbl0") \
		_T("        )") \
		_T("        tblanalytic") \
		_T("  WHERE 1 = 1 %s ")
		, str2int(m_szStorageKey), str2int(m_szStorageKey), szWhere, szWhere1);

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
				rs.GetValue(_T("product_ma_hieu")), 
				rs.GetValue(_T("product_manufacturename")),
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
	else if (pMF->m_szOriginModuleID == _T("HC") || pMF->GetModuleID() == _T("GLS"))
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
				rs.GetValue(_T("duty_limit")),
				rs.GetValue(_T("product_qtyonhand")), 
				rs.GetValue(_T("product_qtyordered")), 
				rs.GetValue(_T("Amount")), 
				rs.GetValue(_T("product_LotNo")), 
				rs.GetValue(_T("product_ExpDate")), 
				rs.GetValue(_T("product_manufacturename")), 
				_T(""),
				rs.GetValue(_T("business_partner")),
				_T(""),
				rs.GetValue(_T("location_name")),
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageInventory::OnEditStorageInventory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageInventory::OnDeleteStorageInventory(){
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
 		OnCancelStorageInventory();
 	}
	return 0;
}
int CStorageInventory::OnSaveStorageInventory(){
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("08.02")))
	{
		ShowMessageBox(_T("Permission denined."));
		return -1;
	}
	long nProductItem_ID = str2long(m_wndList.GetItemText(nSel, 0));

	CProductEditPriceDialog dlg(this);
	dlg.m_nProductItem_ID = nProductItem_ID;
	dlg.m_szStorageCategory = m_szStorageCategory;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;
}


int CStorageInventory::OnAdd_RemoveDutyList(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	long nProductItem_ID;
	if(m_bDutyList){
		for (int i =m_wndList.GetItemCount()-1; i >=0; i--)
		{
			if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
			{
				nProductItem_ID = str2long(m_wndList.GetItemText(i, 0));
				szSQL.Format(_T("M_STORAGE_DUTY_REMOVELINE(%d, %ld) "), str2int(m_szStorageKey), nProductItem_ID);
				int res = str2int(pMF->ExecDML(szSQL));
				if(res > 0) m_wndList.DeleteItem(i);
			}
		}
	}
	else
	{
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
			{
				nProductItem_ID = str2long(m_wndList.GetItemText(i, 0));
				szSQL.Format(_T("M_STORAGE_DUTY_CREATELINE(%d, %ld) "), str2int(m_szStorageKey), nProductItem_ID);
				pMF->ExecDML(szSQL);
			}
		}
	}

	return 0;
}

void CStorageInventory::OnLoadDutyList()
{
	OnListLoadData();
}

void CStorageInventory::OnSwitchDutyMode(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL, tmpStr;
	if(pMF->GetCurrentUser() != _T("admin"))
	{
		ShowMessageBox(_T("Permision denied"));
		return;
	}
	m_bSwitchDutyMode = !m_bSwitchDutyMode;
	if(m_bSwitchDutyMode){
		int res = ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD \x63huy\x1EC3n s\x61ng \x63h\x1EBF \x111\x1ED9 tr\x1EF1\x63. \x42\x1EA1n \x63\xF3 mu\x1ED1n \x63huy\x1EC3n kh\xF4ng?(Y/N)"), MB_YESNO);
		if(res == IDNO)
			return;

		szSQL.Format(_T("UPDATE m_storageline SET msl_isactive='D' ") \
			_T("WHERE msl_storage_id=%d and msl_isactive<>'N' and msl_product_item_id not in(select msd_product_item_id from m_storage_duty where msd_storage_id=%d) "),
			str2int(m_szStorageKey), str2int(m_szStorageKey));
		pMF->ExecSQL(szSQL);

		TranslateString(_T("Switch normal mode"), tmpStr);
		m_wndSwitchDutyMode.SetWindowText(tmpStr);
		szSQL.Format(_T("UPDATE m_storagelist SET msl_locked='D' WHERE msl_storage_id=%d "), str2int(m_szStorageKey));
		pMF->ExecSQL(szSQL);
	}
	else
	{
		int res = ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD h\x1EE7y \x63h\x1EBF \x111\x1ED9 tr\x1EF1\x63 v\xE0 \x63huy\x1EC3n s\x61ng \x63h\x1EBF \x111\x1ED9 \x62\xECnh th\x1B0\x1EDDng. \x42\x1EA1n \x63\xF3 mu\x1ED1n \x63huy\x1EC3n kh\xF4ng?(Y/N)"), MB_YESNO);
		if(res == IDNO)
			return;

		szSQL.Format(_T("UPDATE m_storageline SET msl_isactive='Y' ") \
			_T("WHERE msl_storage_id=%d and msl_isactive='D' "),
			str2int(m_szStorageKey), str2int(m_szStorageKey));
		pMF->ExecSQL(szSQL);
		
		TranslateString(_T("Switch duty mode"), tmpStr);
		m_wndSwitchDutyMode.SetWindowText(tmpStr);

		szSQL.Format(_T("UPDATE m_storagelist SET msl_locked='N' WHERE msl_storage_id=%d "), str2int(m_szStorageKey));
		pMF->ExecSQL(szSQL);
	}
	OnListLoadData();
}

void CStorageInventory::OnExportInventory(){
	CExcel xls;
	TCHAR szName[128];
	HDITEM hdi;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	int nRow = 1, nType = 0, nWidth = 0;

    for (int i = 0; i < m_wndList.GetColumnCount(); i++)
    {
        CString szHeaderText;

        LVCOLUMN lvCol;
        TCHAR szBuffer[256];
        lvCol.mask = LVCF_TEXT;
        lvCol.pszText = szBuffer;
        lvCol.cchTextMax = sizeof(szBuffer) / sizeof(TCHAR);

        if (m_wndList.GetColumn(i, &lvCol))
        {
            szHeaderText = lvCol.pszText;
        }
        else
        {
            szHeaderText.Format(_T("Column %d"), i + 1);
        }

        _debug(_T("%d|%s"), i, szHeaderText);
        nWidth = m_wndList.GetColumnWidth(i);
        xls.SetColumnWidth(i, nWidth / 8);
        xls.SetCellText(i, 0, szHeaderText, 4098, true);
    }

    for (int i = 0; i < m_wndList.GetItemCount(); i++)
    {
        for (int j = 0; j < m_wndList.GetColumnCount(); j++)
        {
            xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_TEXT);
        }
        nRow++;
    }
    xls.Save(_T("Exports\\Quan ly ton kho.xls"));
}

void CStorageInventory::OnSetMinQuantity(){
	CProductMinQtySetup dlg(this);
	dlg.m_nStorageID = ToInt(m_szStorageKey);
	dlg.DoModal();
}

void CStorageInventory::OnSetDutyQuantity(){
	CDutyQuantityDialog dlg(this);
	dlg.m_nStorageID = str2int(m_szStorageKey);
	dlg.m_nProductItemId = m_nPItemID;
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
}

void CStorageInventory::OnRecalcOrderQty()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	CRecord rs(&pMF->m_db);
	CString szSQL, szMsg;
	double nQty = 0;
	szSQL.Format(_T(" SELECT SUM(order_qty) as order_qty") \
	_T(" FROM   (SELECT export_qty AS order_qty") \
	_T("         FROM   v_export_pending") \
	_T("         WHERE  storage_id = %d AND sitemid = %ld") \
	_T("         UNION ALL") \
	_T("         SELECT hpolr_qtyreverse") \
	_T("         FROM   hms_ipharmaorderline_r") \
	_T("         WHERE  hpolr_storage_id = %d AND hpolr_product_item_id = %ld ") \
	_T("			AND hpolr_status IN ( 'O', 'S' )") \
	_T("			AND (select msl_type ") \
	_T("				from m_storagelist ") \
	_T("				where msl_storage_id = hpolr_storage_id) = 'C'") \
	_T("	) ")
	, str2int(m_szStorageKey), m_nPItemID
	, str2int(m_szStorageKey), m_nPItemID);


	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return;
	}
	rs.GetValue(_T("order_qty"), nQty);
	if (nQty < 0) 
	{
		return;
	}
	szMsg.Format(_T("Tác vụ sẽ cập nhật lại số lượng yêu cầu! Số lượng yêu cầu mới: %.0f"), nQty);
	if (ShowMessageBox(szMsg, MB_YESNO) == IDNO)
	{
		return;
	}
	szSQL.Format(_T("m_storageline_recalcorder_v2(%d, %ld)"), str2int(m_szStorageKey), m_nPItemID);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnListLoadData();
	}
}

void CStorageInventory::OnViewOrderDifference()
{
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CStringArray arrCol;
	CArray<long, long> arProduct_item_id;
	int nCol = 0, nRow = 0, nSheet_id = 1;
	szWhere.Empty();
	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND l.storage_id = %ld"), str2long(m_szStorageKey));
	szSQL.Format(_T(" WITH tbl_pending") \
	_T("      AS (SELECT storage_id,") \
	_T("                 sitemid,") \
	_T("                 SUM(export_qty) AS order_qty") \
	_T("          FROM   v_export_pending") \
	_T("          GROUP  BY storage_id,sitemid),") \
	_T("      tbl_line") \
	_T("      AS (SELECT msl_storage_id AS storage_id,") \
	_T("                 msl_product_item_id AS sitemid,") \
	_T("                 SUM(msl_qtyordered) AS order_qty,") \
	_T("				 SUM(msl_qtyonhand) AS onhand_qty") \
	_T("          FROM   m_storageline") \
	_T("          GROUP  BY msl_storage_id,msl_product_item_id)") \
	_T(" SELECT l.storage_id,") \
	_T("        l.sitemid,") \
	_T("        coalesce(p.order_qty, 0) as pending_qty,") \
	_T("        l.order_qty as line_qty,") \
	_T("        l.onhand_qty as onhand_qty,") \
	_T("		product_code as code,") \
	_T("		coalesce(p.order_qty, 0) - l.order_qty as difference,") \
	_T("		product_name ") \
	_T(" FROM   tbl_line l ") \
	_T(" LEFT JOIN tbl_pending p ON (p.storage_id = l.storage_id AND p.sitemid = l.sitemid)") \
	_T(" LEFT JOIN m_productitem_view ON (l.sitemid = product_item_id)") \
	_T(" WHERE coalesce(p.order_qty, 0) <> l.order_qty") \
	_T(" AND product_isactive = 'Y'") 
	_T(" %s") \
	_T(" ORDER BY code"), szWhere);


	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		_fmsg(_T("%s"), szSQL);
		return;
	}
	arrCol.Add(_T("storage_id"));
	arrCol.Add(_T("code"));
	arrCol.Add(_T("sitemid"));
	arrCol.Add(_T("pending_qty"));
	arrCol.Add(_T("line_qty"));	
	arrCol.Add(_T("onhand_qty"));	
	arrCol.Add(_T("difference"));
	arrCol.Add(_T("product_name"));
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//xls.SetColumnWidth(0, 30);
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER);
	nRow = 1;
	while (!rs.IsEOF())
	{
		for (int i = 0; i < arrCol.GetCount(); i++)
			if (i == 1 || i==7)
				xls.SetCellText(nCol + i, nRow, rs.GetValue(arrCol.GetAt(i)), FMT_TEXT);
			else
				xls.SetCellText(nCol + i, nRow, rs.GetValue(arrCol.GetAt(i)), FMT_NUMBER1);
		arProduct_item_id.Add(str2long(rs.GetValue(_T("sitemid"))));
		nRow++;
		rs.MoveNext();
	}

	arrCol.RemoveAll();
	arrCol.Add(_T("ID"));
	arrCol.Add(_T("ORDERNO"));
	arrCol.Add(_T("ORDERDATE"));
	arrCol.Add(_T("DEPTID"));
	arrCol.Add(_T("DOCNO"));
	arrCol.Add(_T("PNAME"));
	arrCol.Add(_T("STOCKID"));
	arrCol.Add(_T("ITEMID"));
	arrCol.Add(_T("SITEMID"));
	arrCol.Add(_T("ORDERQTY"));
	nRow = 0;
	for (int i = 0; i < arProduct_item_id.GetCount(); i++)
	{
		nRow = 0;
		tmpStr.Format(_T("Sheet %d"), nSheet_id+1);
		xls.AddSheet(tmpStr);
		xls.SetWorksheet(nSheet_id);
		for (int j = 0; j < arrCol.GetCount(); j++)
			xls.SetCellText(nCol + j, nRow, arrCol.GetAt(j), FMT_TEXT | FMT_CENTER);
		szSQL.Format(_T("select * ") \
					_T(" from m_orderexport_view ") \
					_T(" where stockid = %ld and sitemid = %ld")
					, str2long(m_szStorageKey), arProduct_item_id.GetAt(i));
		rs.ExecSQL(szSQL);
		nRow = 1;
		while (!rs.IsEOF())
		{
			for (int j = 0; j < rs.GetFieldCount(); j++)
			{
				xls.SetCellText(nCol+j, nRow, rs.GetValue(j), FMT_TEXT);
			}
			nRow++;
			rs.MoveNext();
		}
		nSheet_id++;
	}
	xls.SetWorksheet(0);
	xls.Save(_T("Exports\\Order Difference View.xls"));
	return;
}


void CStorageInventory::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndItemInformation, 100, 100);
	AddBottom(&m_wndLoadInactive);
	AddBottom(&m_wndDutyList);
	AddBottom(&m_wndReachMinQty);
	AddBottom(&m_wndSwitchDutyMode);
	AddBottom(&m_wndSubTotalLabel);
	AddBottom(&m_wndSubTotal);
}