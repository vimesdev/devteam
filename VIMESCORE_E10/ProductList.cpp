#include "MainFrame_E10.h"
#include "ProductList.h"
#include "ProductDialog.h"
#include "GlassProductDialog.h"
#include "Excel.h"

#include "ProductExtraInfoMAMapDialog.h"
#include "ProductExtraInfoMapDialog.h"
#include "PMSContractorList.h"
#include "MAContractorList.h"
#include "AdBusinessPartnerDialog.h"
#include "AdManufactureDialog.h"
#include "AdUOMDialog.h"
#include "AdContractPackageDialog.h"
#include "AdContractDialog.h"

#include "ProductImportAll.h"

static void _OnTypeSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductList* )pWnd)->OnTypeSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSearchSelendokFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnTypeSearchSelendok();
}
/*static void _OnTypeSearchSetfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnTypeSearchKillfocus();
}*/
/*static void _OnTypeSearchKillfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnTypeSearchKillfocus();
}*/
static long _OnTypeSearchLoadDataFnc(CWnd *pWnd){
	return ((CProductList *)pWnd)->OnTypeSearchLoadData();
}
/*static void _OnTypeSearchAddNewFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnTypeSearchAddNew();
}*/
static void _OnProductListCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductList* )pWnd)->OnProductListCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductListCategorySelendokFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnProductListCategorySelendok();
}
/*static void _OnProductListCategorySetfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnProductListCategoryKillfocus();
}*/
/*static void _OnProductListCategoryKillfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnProductListCategoryKillfocus();
}*/
static long _OnProductListCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductList *)pWnd)->OnProductListCategoryLoadData();
}
/*static void _OnProductListCategoryAddNewFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnProductListCategoryAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CProductList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnStorageAddNew();
}*/

/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CProductList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CProductList *)pWnd)->OnSearchNameCheckValue();
} 
static int _OnContractNameCheckValueFnc(CWnd *pWnd){
	return ((CProductList *)pWnd)->OnContractNameCheckValue();
} 

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListAddItemFnc(CWnd *pWnd){
	return ((CProductList*)pWnd)->OnListAddItem();
}
static int _OnListAddNonstockItemFnc(CWnd *pWnd){
	return ((CProductList*)pWnd)->OnListAddNonstockItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnListDeleteItem();
}
static void _OnLoadInactiveSelectFnc(CWnd* pWnd){
	((CProductList*)pWnd)->OnLoadInactiveSelect();
}
static void _OnHasPrecisionSelectFnc(CWnd* pWnd){
	((CProductList*)pWnd)->OnHasPrecisionSelect();
}
static void _OnInsuranceUnPaidFnc(CWnd* pWnd){
	((CProductList*)pWnd)->OnInsuranceUnPaid();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnEditSelect();
	return 0;}

static int _OnListUpdateItemFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnUpdateSelect();
	return 0;
}

static int _OnListExportItemFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnListExportItem();
	return 0;
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductList *pVw = (CProductList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductList *pVw = (CProductList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CProductList *pVw = (CProductList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CProductList *pVw = (CProductList *)pWnd;
	pVw->OnFindSelect();
} 
static int _OnAddProductListFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnAddProductList();
} 
static int _OnEditProductListFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnEditProductList();
} 
static int _OnDeleteProductListFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnDeleteProductList();
} 
static int _OnSaveProductListFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnSaveProductList();
} 
static int _OnCancelProductListFnc(CWnd *pWnd){
	 return ((CProductList*)pWnd)->OnCancelProductList();
} 
static int _On908DocumentInputFnc(CWnd *pWnd){
	((CProductList*)pWnd)->On908DocumentInput();
	return 0;
}

static int _OnMapInsuranceGroupFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnMapInsuranceGroup();
	return 0;
}
static int _OnMapProductItemsFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnMapProductItems();
	return 0;
}
static void _OnStentSelectFnc(CWnd* pWnd){
	((CProductList*)pWnd)->OnStentSelect();
}

static void _OnNonstockSelectFnc(CWnd* pWnd){
	((CProductList*)pWnd)->OnNonstockSelect();
}
static int _OnImportProductItemsFnc(CWnd *pWnd){
	((CProductList*)pWnd)->OnImportProductItems();
	return 0;
}

static int _OnNonActiveMultiItemsFnc(CWnd *pWnd){
	return ((CProductList*)pWnd)->OnNonActiveMultiItems();
	return 0;
} 

CProductList::CProductList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 615;
	SetDefaultValues();
}
CProductList::~CProductList(){
}
void CProductList::OnCreateComponents()
{
	//m_wndItemInformation.Create(this, _T("Item Information"), 5, 65, 810, 430);
	//m_wndTypeSearchLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	//m_wndTypeSearch.Create(this,95, 30, 260, 55); 
	//m_wndProductListCategoryLabel.Create(this, _T("Category"), 265, 30, 345, 55);
	//m_wndProductListCategory.Create(this,350, 30, 515, 55); 
	//m_wndSearchNameLabel.Create(this, _T("&Name"), 520, 30, 600, 55);
	//m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	//m_wndSearchName.Create(this,605, 30, 775, 55); 
	//m_wndList.Create(this,10, 90, 805, 425);
	//m_wndProductInfo.Create(this, CRect(5, 435, 810, 595));
	//m_wndLoadInactive.Create(this, _T("Load Inactive Item"), 5, 595, 135, 620);
	//m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	//m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	//m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	//m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);

	m_wndTypeSearchLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndTypeSearch.Create(this,95, 30, 405, 55); 
	m_wndProductListCategoryLabel.Create(this, _T("Category"), 410, 30, 490, 55);
	m_wndProductListCategory.Create(this,495, 30, 805, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 405, 85); 
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndItemInformation.Create(this, _T("Item List"), 5, 95, 810, 400);
	m_wndSearchNameLabel.Create(this, _T("&Name"), 410, 60, 490, 85);
	m_wndSearchName.Create(this,495, 60, 700, 85);
	m_wndContractName.Create(this,705, 60, 775, 85);
	m_wndFind.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndList.Create(this,10, 120, 805, 395); 
	m_wndProductInfo.Create(this, CRect(5, 405, 810, 560));
	m_wndLoadInactive.Create(this, _T("Inactive"), 5, 565, 135, 590);
	m_wndHasPrecision.Create(this, _T("Has Precision"), 140, 565, 331, 590);
	m_wndStent.Create(this, _T("Stent"), 336, 565, 416, 590);
	m_wndIUnPaid.Create(this, _T("BH không TT"), 420, 565, 555, 590);
	m_wndNonstock.Create(this, _T("Nonstock"), 560, 565, 725, 590);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CProductList::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndTypeSearch.SetCheckValue(true);
	m_wndTypeSearch.LimitText(35);
	//m_wndProductListCategory.SetCheckValue(true);
	m_wndProductListCategory.LimitText(35);
	m_wndSearchName.SetLimitText(512);
	m_wndSearchName.SetCheckValue(true);
	m_wndSearchName.SetNotEmpty(false);
	//m_wndFind.ModifyStyle(WS_TABSTOP, 0);

	m_wndTypeSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndTypeSearch.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	
	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndProductListCategory.Format(3, 2);
	m_wndProductListCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndProductListCategory.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	m_wndProductListCategory.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);

	/*
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50); //product_id
	m_wndList.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 75);
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 300);
		m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 80);
		m_wndList.InsertColumn(4, _T("Generic"), CFMT_TEXT, 150);
	}

	else
	{
		m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
		m_wndList.InsertColumn(4, _T("Generic"), CFMT_TEXT, 0);
	}
	m_wndList.InsertColumn(5, _T("Purchase Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(6, _T("Sale Price"), CFMT_MONEY, 80);
	if(pMF->GetModuleID() == _T("GLS"))
	{
		m_wndList.InsertColumn(7, _T("Ins Price"), CFMT_MONEY, 0);
	}
	else
		m_wndList.InsertColumn(7, _T("Ins Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Policy Price"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(9, _T("Serial No."), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Manufacture"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Country"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Vendor"), CFMT_TEXT, 0);
	
	int nWeith=0;
	if(pMF->GetModuleID() == _T("MA"))
		nWeith=100;
	m_wndList.InsertColumn(13, _T("ContractNo"), CFMT_TEXT,nWeith);
	m_wndList.InsertColumn(14, _T("category"), CFMT_TEXT, 120);
	*/
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50); //product_id
	m_wndList.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 75);
	m_wndList.InsertColumn(2, _T("Mã hiệu"), CFMT_TEXT, 90);
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.InsertColumn(3, _T("Item Name"), CFMT_TEXT, 300);
		m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
		m_wndList.InsertColumn(5, _T("Generic"), CFMT_TEXT, 150);
	}

	else
	{
		m_wndList.InsertColumn(3, _T("Item Name"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 70);
		m_wndList.InsertColumn(5, _T("Generic"), CFMT_TEXT, 0);
	}
	m_wndList.InsertColumn(6, _T("Purchase Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 80);
	if(pMF->GetModuleID() == _T("GLS"))
	{
		m_wndList.InsertColumn(8, _T("Ins Price"), CFMT_MONEY, 0);
	}
	else
		m_wndList.InsertColumn(8, _T("Ins Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("Policy Price"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(10, _T("Serial No."), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Country"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T("Vendor"), CFMT_TEXT, 0);
	
	
	int nWeith=0;
	if(pMF->GetModuleID() == _T("MA"))
		nWeith=100;
	m_wndList.InsertColumn(14, _T("ContractNo"), CFMT_TEXT,nWeith);
	m_wndList.InsertColumn(15, _T("category"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(16, _T("Created By"), CFMT_TEXT, 100);
//	m_wndList.GetHeaderControl()->SetItemHeight(1);

	//Truong hop module kinh mat ko can cac field nay
	if(pMF->GetModuleID() == _T("GLS"))
	{
		m_wndStent.ShowWindow(SW_HIDE);
		m_wndIUnPaid.ShowWindow(SW_HIDE);
	}
}
void CProductList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTypeSearch.SetEvent(WE_SELENDOK, _OnTypeSearchSelendokFnc);
	//m_wndTypeSearch.SetEvent(WE_SETFOCUS, _OnTypeSearchSetfocusFnc);
	//m_wndTypeSearch.SetEvent(WE_KILLFOCUS, _OnTypeSearchKillfocusFnc);
	m_wndTypeSearch.SetEvent(WE_SELCHANGE, _OnTypeSearchSelectChangeFnc);
	m_wndTypeSearch.SetEvent(WE_LOADDATA, _OnTypeSearchLoadDataFnc);
	//m_wndTypeSearch.SetEvent(WE_ADDNEW, _OnTypeSearchAddNewFnc);
	m_wndProductListCategory.SetEvent(WE_SELENDOK, _OnProductListCategorySelendokFnc);
	//m_wndProductListCategory.SetEvent(WE_SETFOCUS, _OnProductListCategorySetfocusFnc);
	//m_wndProductListCategory.SetEvent(WE_KILLFOCUS, _OnProductListCategoryKillfocusFnc);
	m_wndProductListCategory.SetEvent(WE_SELCHANGE, _OnProductListCategorySelectChangeFnc);
	m_wndProductListCategory.SetEvent(WE_LOADDATA, _OnProductListCategoryLoadDataFnc);
	//m_wndProductListCategory.SetEvent(WE_ADDNEW, _OnProductListCategoryAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndContractName.SetEvent(WE_CHECKVALUE,_OnContractNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Items"));
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(8, _T("Add Non-stock"), _OnListAddNonstockItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Export XLS"), _OnListExportItemFnc);
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(5, _T("908/BYT-BH Document Info"), _On908DocumentInputFnc);

		//m_wndList.AddEvent(0, _T("-"), NULL);
		//m_wndList.AddEvent(6, _T("MAP BYHT"), _OnMapProductItemsFnc);

	/*
	if(pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(6, _T("Map Insurance Group"), _OnMapInsuranceGroupFnc);
	}
*/
	}
	if (pMF->GetModuleID() == _T("PM") || pMF->GetModuleID() == _T("MA") || pMF->m_szOriginModuleID == _T("HC"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(6, _T("MAP BYHT"), _OnMapProductItemsFnc);
	}
	if(pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(7, _T("Import danh mục hàng từ Excel"), _OnImportProductItemsFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);

		if(pMF->CheckPermission(_T("40.03")))
		{
		m_wndList.AddEvent(9, _T("Bỏ hoạt động nhiều mặt hàng"), _OnNonActiveMultiItemsFnc);
		}

		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(20, _T("Cập nhật tên ánh xạ (trường hợp ko nhập thầu), mã hiệu"), _OnListUpdateItemFnc);
	}	
	

	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndHasPrecision.SetEvent(WE_CLICK, _OnHasPrecisionSelectFnc);
	m_wndIUnPaid.SetEvent(WE_CLICK, _OnInsuranceUnPaidFnc);
	
	m_wndStent.SetEvent(WE_CLICK, _OnStentSelectFnc);
	m_wndNonstock.SetEvent(WE_CLICK, _OnNonstockSelectFnc);
	//Layout
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndProductListCategory, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndSearchNameLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndSearchName, WS_REPOSX | WS_RESIZEX, 50, 100, 50, 50);
	AddLayoutControl(&m_wndFind, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndItemInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndEdit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	//m_wndList.SetAutoColumnSize(true);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
//	OnListLoadData();
	SetMode(VM_NONE);

}
void CProductList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTypeSearch.GetDlgCtrlID(), m_szTypeSearchKey);
	DDX_TextEx(pDX, m_wndProductListCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Text(pDX, m_wndContractName.GetDlgCtrlID(), m_szContractName);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
	DDX_Check(pDX, m_wndHasPrecision.GetDlgCtrlID(), m_bHasPrecision);
	DDX_Check(pDX, m_wndStent.GetDlgCtrlID(), m_bStent);
	DDX_Check(pDX, m_wndIUnPaid.GetDlgCtrlID(), m_bInsuranceUnpaid);
	DDX_Check(pDX, m_wndNonstock.GetDlgCtrlID(), m_bNonstock);
}
void CProductList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_m_productTbl.SetValue(_T("pmsp_createdby"), pMF->GetCurrentUser());
	m_m_productTbl.SetValue(_T("pmsp_createddate"), pMF->GetSysDateTime());
	m_m_productTbl.SetValue(_T("pmsp_updatedby"), pMF->GetCurrentUser());
	m_m_productTbl.SetValue(_T("pmsp_updateddate"), pMF->GetSysDateTime());

}
void CProductList::SetDefaultValues(){
	m_bNonstock = FALSE;
	m_szTypeSearchKey.Empty();
	m_szProductCategoryKey.Empty();
	m_szSearchName.Empty();
	m_bLoadInactive = false;
	m_bHasPrecision = false;
	m_bStent = FALSE;
	m_szContractName.Empty();
}
int CProductList::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, 2, 3, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, -1); 
 			break; 
 		}; 
		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CProductList::OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	OnListLoadData();
} 
void CProductList::OnTypeSearchSelendok(){
	 
}
/*void CProductList::OnTypeSearchSetfocus(){
	
}*/
/*void CProductList::OnTypeSearchKillfocus(){
	
}*/
long CProductList::OnTypeSearchLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductTypeList(&m_wndTypeSearch, m_szTypeSearchKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeSearch.IsSearchKey() && !m_szTypeSearchKey.IsEmpty()){
		szWhere.Format(_T(" AND pmt_product_type_id='%s' "), m_szTypeSearchKey);
	};
	m_wndTypeSearch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmt_product_type_id as id, pmt_name as name ") \
		_T("FROM m_product_type ") \
		_T("WHERE mpt_isactive='Y' %s ") \
		_T("ORDER BY mpt_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CProductList::OnTypeSearchAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductList::OnProductListCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//OnListLoadData();
} 
void CProductList::OnProductListCategorySelendok(){
	 
}
/*void CProductList::OnProductListCategorySetfocus(){
	
}*/
/*void CProductList::OnProductListCategoryKillfocus(){
	
}*/
long CProductList::OnProductListCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndProductListCategory, m_szProductCategoryKey);
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szName;
	if(m_wndProductListCategory.IsSearchKey() && !m_szProductCategoryKey.IsEmpty()){
		szWhere.Format(_T(" and mpc_product_category_id='%s' "), m_szProductCategoryKey);
	};
	m_wndProductListCategory.DeleteAllItems(); 
	int nCount = 0;
	int nLevel;
	szSQL.Format(_T("SELECT * FROM m_product_class WHERE 0=0 %s ORDER BY mpc_product_category_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mpc_level"), nLevel);
		szName.Empty();
		for (int i =0; i < nLevel; i++){
			szName += _T("  ");
		}
		szName += rs.GetValue(_T("mpc_name"));
		m_wndProductListCategory.AddItems(
			rs.GetValue(_T("mpc_product_category_id")), 
			szName,
			NULL);
		rs.MoveNext();
	}
	return nCount;
	*/

}
/*void CProductList::OnProductListCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	OnListLoadData();
} 
void CProductList::OnStorageSelendok(){
	 
}
/*void CProductList::OnStorageSetfocus(){
	
}*/
/*void CProductList::OnStorageKillfocus(){
	
}*/
long CProductList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if(pMF->GetModuleID() == L"GLS")
	{
		szFilter.Format(_T(" and msl_org_id='%s' "), pMF->GetModuleID());
	}
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
		szWhere.Format(_T(" AND pmt_product_type_id='%s' "), m_szStorageKey);
	};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmt_product_type_id as id, pmt_name as name ") \
		_T("FROM m_product_type ") \
		_T("WHERE mpt_isactive='Y' %s ") \
		_T("ORDER BY mpt_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CProductList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductList::OnSearchNameChange(){
	
} */
/*void CProductList::OnSearchNameSetfocus(){
	
} */
/*void CProductList::OnSearchNameKillfocus(){
	
} */
int CProductList::OnSearchNameCheckValue(){
	OnListLoadData();
	return 1;
} 
int CProductList::OnContractNameCheckValue(){
	OnListLoadData();
	return 1;
}
void CProductList::OnListDblClick()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	long nProductID = str2long(m_wndList.GetItemText(nSel, 0));
	if(pMF->GetModuleID() == _T("GLS"))
	{
		CGlassProductDialog dlg(this, VM_VIEW);
		dlg.m_nProductID = nProductID;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	else
	{
		CProductDialog dlg(this, VM_VIEW);
		dlg.m_nProductID = nProductID;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	m_wndEdit.SetFocus();

} 
void CProductList::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szProductID = m_wndList.GetItemText(nNewItem, 0);
	m_wndProductInfo.Refresh(str2long(m_szProductID));
//	m_wndPopup.ClosePopup();
} 
int CProductList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteSelect();
	return 0;
}

int CProductList::OnListAddItem(){
	OnAddProductList();
	return 0;
}

long CProductList::OnListLoadData()
{

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CString szSQL, szWhere, szStorages;
	szWhere.Empty();
	UpdateData(true);
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	for (int i = 0; i < m_wndStorage.GetCount(); i++)
		if (m_wndStorage.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_szStorageKey);
		}	
	
	if (!m_szSearchName.IsEmpty())
	{
		szWhere.Format(
			_T(" AND lower(product_name||'|'||product_code) like lower('%s%s%s') ")
			, _T("%"), m_szSearchName, _T("%"));
	}
	
	if (!m_szTypeSearchKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND product_producttype='%s' "), m_szTypeSearchKey);
	}

	if (!m_szProductCategoryKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND product_categoryid=%ld "), str2long(m_szProductCategoryKey));
	}
	if (!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN (SELECT distinct msl_product_id FROM m_storageline WHERE msl_storage_id IN (%s))"), szStorages);
	szWhere.AppendFormat(_T(" and product_org_id IN('GL', '%s') "), pMF->GetModuleID());

	if (!m_bLoadInactive)
		szWhere.AppendFormat(_T(" AND product_isactive='Y'"));
	else 
		szWhere.AppendFormat(_T(" AND product_isactive<>'Y'"));
	if (m_bHasPrecision)
		szWhere.AppendFormat(_T(" AND product_isprecision = 'Y'"));
	else
		szWhere.AppendFormat(_T(" AND coalesce(product_isprecision, cast('N' as NVARCHAR2(1))) <> 'Y'"));

	if (m_bStent)
	{
		szWhere.AppendFormat(_T(" AND product_isstent = 'Y'"));
	}
	if(m_bInsuranceUnpaid)
		szWhere.AppendFormat(_T(" AND product_ispaid1 <> 'Y'"));

	if(!m_szContractName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(product_decision) like lower('%s%s%s') "), _T("%"), m_szContractName, _T("%"));
	if (m_bNonstock)
	{
		szWhere.AppendFormat(_T(" AND product_nonstock = 'Y'"));
	}
_tprintf(_T("\nszWhere: %s"), szWhere);
	szSQL.Format(_T(" SELECT product_id,") \
				_T("   product_code,") \
				_T("   product_name,") \
				_T("   GET_UOMNAME(product_purchase_uomid) as product_purchase_uomname,") \
				_T("   product_classname,") \
				_T("   product_serial,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1,") \
				_T("   product_saleprice2,") \
				_T("   product_saleprice3,") \
				_T("   product_manufacturename,") \
				_T("   product_countryname,	") \
				_T("   product_bpartnerid,") \
				_T("   product_isactive,product_decision, product_category, MA_HIEU,") \
				_T("   get_username(product_createdby) as created_by ") \
				_T(" from m_product_view") \
				_T(" WHERE 1=1 %s") \
				_T(" ORDER BY product_name"), szWhere);
	_tprintf(_T("\nszSQL: %s"),szSQL);
	nCount = rs.ExecSQL(szSQL);

	CString tmpStr, szName, szContent, szGeneric, szTemp;
	int nIndex=0, nItem = 0;
	while(!rs.IsEOF()){ 
		szTemp.Empty();
		szGeneric.Empty();
		tmpStr.Format(_T("%d"), ++nIndex);
		rs.GetValue(_T("product_isactive"), szTemp);
		
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("MA_HIEU")),
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_purchase_uomname")), 
			rs.GetValue(_T("product_classname")),
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_saleprice1")),
			rs.GetValue(_T("product_saleprice2")),
			rs.GetValue(_T("product_saleprice3")),
			rs.GetValue(_T("product_serial")),
			rs.GetValue(_T("product_manufacturename")), 
			rs.GetValue(_T("product_countryname")),
			rs.GetValue(_T("product_bpartnerid")),
			rs.GetValue(_T("product_decision")),
			rs.GetValue(_T("product_category")),
			rs.GetValue(_T("created_by")),
			NULL);
		if (szTemp == _T("N"))
			m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
			rs.MoveNext();
	}
	
	m_wndList.EndLoad();
	return nCount;

}
void CProductList::OnAddSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CString szName, szID, szSQL, tmpStr, szItemID;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT mp_product_id, pmsp_name FROM m_product ORDER BY pmsp_name"));
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("mp_product_id"), szID);
		rs.GetValue(_T("pmsp_name"), tmpStr);
		
		UnMarkString(tmpStr, szName.GetBufferSetLength(tmpStr.GetLength()+1));
		szName.Trim();
		szName.Replace(_T(" "), _T(""));
		szName = szName.Left(3);
		long nID = str2long(pMF->ExecDML(_T("GetNextValues('PMS_ITEMID_ASQ')")));
		szItemID.Format(_T("%s%.5d"), szName, nID);
		szItemID.MakeUpper();
		szSQL.Format(_T("PMS_ITEMS_CHANGEID('%s','%s') "), szID, szItemID);
		pMF->ExecDML(szSQL);

		rs.MoveNext();
	}
		
*/
	OnAddProductList();
} 

void CProductList::OnLoadInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_isactive = 'N'"));
	rs.ExecSQL(szSQL);
	int nRes = rs.GetIntValue();
	if (nRes > 0)
		OnListLoadData();
}
void CProductList::OnHasPrecisionSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_isprecision = 'Y'"));
	rs.ExecSQL(szSQL);
	int nRes = rs.GetIntValue();
	if (nRes > 0)
		OnListLoadData();
}
void CProductList::OnInsuranceUnPaid(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	OnListLoadData();
}
void CProductList::OnStentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_stent = 'Y'"));
	rs.ExecSQL(szSQL);
	int nRes = rs.GetIntValue();
	if (nRes > 0)
		OnListLoadData();
}
void CProductList::OnEditSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditProductList();
}
long CProductList::OnListExportItem()
{
	CExcel xls;
	CString szName;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	int nRow = 1, nType = 0, nWidth = 0;
	//CGridListItem *pHdr = m_wndList.GetHeaderItem();
	for (int i = 0; i < m_wndList.GetColumnCount(); i++)
	{
//		hdi.mask = HDI_TEXT;
//		hdi.pszText = szName;
//		m_wndList.GetHeaderControl()->GetItem(i, &hdi);
//		_debug(_T("%d|%s"), i, szName);
		nWidth = m_wndList.GetColumnWidth(i);
		xls.SetColumnWidth(i, nWidth/8);
		//xls.SetCellText(i, 0, arrCol.GetAt(i), 4098, true);
		szName = m_wndList.GetColumnName(i);
		xls.SetCellText(i, 0, szName, FMT_TEXT, true);
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
	xls.Save(_T("Exports\\danh_muc_hang.xls"));
	return nRow;
} 
void CProductList::OnDeleteSelect()
{
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	
	long nProductID = str2long(m_wndList.GetItemText(nSel, 0));
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
	szSQL.Format(_T("SELECT COUNT(*) FROM m_product_item WHERE mpi_product_id=%ld "), nProductID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessage(3, MB_OK);
 		return; 
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return; 
 	szSQL.Format(_T("DELETE FROM m_product WHERE mp_product_id=%ld "), nProductID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		SetMode(VM_NONE); 
 		OnCancelProductList(); 
		m_wndList.DeleteItem(m_wndList.GetCurSel());
 	} 

} 
void CProductList::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
int CProductList::OnAddProductList()
{
 	//if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 	//	return -1; 
 	//CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	//SetMode(VM_ADD);
//	CProductListPopup *newPopup = new CProductListPopup(this);
//	newPopup->SetMode(VM_ADD);
//	newPopup->ShowPopup(&m_wndList, WPS_RIGHT);
	
//	m_wndPopup.SetMode(VM_ADD);
	//m_wndPopup.OnSetWindowEvents();
//	SetMode(VM_ADD);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("GLS"))
	{
		CGlassProductDialog dlg(this, VM_ADD);
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	else
	{
		CProductDialog dlg(this, VM_ADD);
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	m_wndAdd.SetFocus();
	return 0; 
}
int CProductList::OnEditProductList()
{
 	//if(GetMode() != VM_VIEW) 
 	//	return -1; 
 	//CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	//SetMode(VM_EDIT);
	//CProductListPopup *newPopup = new CProductListPopup(this);
	//newPopup->SetMode(VM_EDIT);
	//newPopup->m_szProductID = m_szProductID;
	//newPopup->ShowPopup(&m_wndList, WPS_RIGHT);
	//m_wndPopup.SetMode(VM_EDIT);
	//m_wndPopup.ShowPopup(&m_wndList, WPS_RIGHT);

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	long nProductID = str2long(m_wndList.GetItemText(nSel, 0));

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("GLS"))
	{
		CGlassProductDialog dlg(this, VM_EDIT);
		dlg.m_nProductID = nProductID;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}

	}
	else
	{
		CProductDialog dlg(this, VM_EDIT);
		dlg.m_nProductID = nProductID;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	m_wndEdit.SetFocus();


	
	return 0;  
}
int CProductList::OnDeleteProductList(){
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
 		OnCancelProductList(); 
 	}
	return 0;
}
int CProductList::OnSaveProductList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_m_productTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_m_productTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	}  
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnProductListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 

 	return 0; 
}
int CProductList::OnCancelProductList(){
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
int CProductList::OnProductListListLoadData(){
	return 0;
}


void CProductList::Refresh(LPCTSTR szActiveID, LPCTSTR lpszSearchName){
	CString tmpStr;
	tmpStr = szActiveID;
	if(tmpStr.IsEmpty())
	{
		static bool loaded = false;
		if(!loaded)
		{
			OnListLoadData();
			loaded = true;
			Invalidate();
		}
	}
	else
	{
		int i = m_wndList.GetItemCount();
		ReloadData(szActiveID);
		m_wndList.EnsureVisible(i, true);
		m_wndList.SetItemTextColor(i, RGB(255, 255, 255), FALSE);
		m_wndList.SetItemBkColor(i, RGB(255, 128, 64), TRUE);
		if(i > 0)
		m_wndList.SetCurSel(i-1);
	}
}


void CProductList::ReloadData(LPCTSTR lpszItemID)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" and mp_product_id='%s' "), lpszItemID);

	szSQL.Format(_T(" SELECT pmsp_line as idx, mp_product_id as id, ") \
		_T(" pmsp_regcode as regcode, ") \
		_T(" pmsp_product_class_id as generic, ") \
		_T(" pmsp_name as name, ") \
		_T(" pmsp_content as content, ") \
		_T(" pmsp_uom_id as unit, ") \
		_T(" (select distinct adc_name from ad_country where adc_country_id=pmsp_country_id) as mfgname, ") \
		_T(" pmsp_saleprice as servprice, ") \
		_T(" pmsp_unitprice as unitprice, ") \
		_T(" pmsp_insprice as insprice, ") \
		_T(" pmsp_isactive as active,") \
		_T(" pmsp_priority as level1, pmsp_inspaid as inspaid, pmsp_polpaid as polpaid, pmsp_diffpaid as diffpaid ") \
	_T(" FROM m_product WHERE 1=1 %s ORDER BY active DESC, id, name") , szWhere);


	int nCount = rs.ExecSQL(szSQL);
	CString tmpStr, szName, szContent, szGeneric, szTemp;
	int nIndex=0;
	m_wndList.BeginLoad();

	if(!rs.IsEOF()){ 
		szTemp.Empty();
		szGeneric.Empty();
		tmpStr.Format(_T("%d"), ++nIndex);
		rs.GetValue(_T("name"), szName);
		rs.GetValue(_T("content"), szContent);
		rs.GetValue(_T("generic"), m_szGenericName);
		if(!szContent.IsEmpty()){
			szName.AppendFormat(_T(" /%s"), szContent);
		}
		
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("id")), 
			szName, 
			rs.GetValue(_T("unit")), 
			szGeneric, 
			rs.GetValue(_T("regcode")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("insprice")),
			rs.GetValue(_T("servprice")),
			rs.GetValue(_T("mfgname")), 
			rs.GetValue(_T("inspaid"))==_T("Y")?_T(""):_T("N"),
			rs.GetValue(_T("polpaid"))==_T("Y")?_T(""):_T("N"),
			rs.GetValue(_T("diffpaid"))==_T("Y")?_T(""):_T("N"),
			rs.GetValue(_T("active"))==_T("Y")?_T("Y"):_T("N"),
			NULL);
	}
	
	m_wndList.EndLoad();

}
BEGIN_MESSAGE_MAP(CProductList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CProductList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearchName.SetFocus();
}


void CProductList::On908DocumentInput(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("PM") || pMF->m_szOriginModuleID == _T("HC"))
	{
		CProductExtraInfoMapDialog dlg(&m_wndList);
		dlg.DoModal();
	}
	else if(pMF->GetModuleID() == _T("MA"))
	{
		CProductExtraInfoMAMapDialog dlg(&m_wndList);
		dlg.DoModal();
	}
}

#include "ProductMapInsuranceGroupDialog.h"
void CProductList::OnMapInsuranceGroup(){
	CProductMapInsuranceGroupDialog dlg(this);
	
	dlg.DoModal();
}
void CProductList::OnMapProductItems(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	long nProductID = str2long(m_wndList.GetItemText(nSel, 0));
	CString szName= m_wndList.GetItemText(nSel, 3);
	CString szMPCode=m_wndList.GetItemText(nSel,1);
	if (pMF->GetModuleID() == _T("PM") || pMF->m_szOriginModuleID == _T("HC"))
	{
		CPMSContractorList dlg(&m_wndList);
		dlg.m_nProductID= nProductID;
		dlg.m_szDrugName = szName;
		dlg.m_szItemid=szMPCode;
		dlg.DoModal();
	}
	else
	{
{
		CMAContractorList dlg(&m_wndList);
		dlg.m_nProductID= nProductID;
		dlg.m_szDrugName = szName;
		dlg.m_szItemid=szMPCode;
		dlg.DoModal();
	}	
	}
}

void CProductList::OnImportProductItems()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CProductImportAll dlg(this);
	dlg.m_dlgs[_T("ad_partner")] = new CAdBusinessPartnerDialog(this, VM_ADD);
	dlg.m_dlgs[_T("ad_manufacture")] = new CAdManufactureDialog(this, VM_ADD);
	dlg.m_dlgs[_T("ad_uom")] = new CAdUOMDialog(this, VM_ADD);
	dlg.m_dlgs[_T("ad_contract_package")] = new CAdContractPackageDialog(this, VM_ADD, 0);
	dlg.m_dlgs[_T("ad_contract")] = new CAdContractDialog(this, VM_ADD, 0);
	

	
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
}

int CProductList::OnListAddNonstockItem()
{
	CProductDialog dlg(this, VM_ADD, true);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}


void CProductList::OnNonstockSelect()
{
	UpdateData();
	OnListLoadData();
}

long CProductList::OnNonActiveMultiItems()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CString szSQL, szWhere, szStorages;
	
	szWhere.Empty();
	UpdateData(true);
	m_wndList.BeginLoad(); 
	long nCount = 0;
	

	if(!m_szContractName.IsEmpty())
		szWhere.AppendFormat(_T(" lower(MP_DECISION) like lower('%s%s%s') "), _T("%"), m_szContractName, _T("%"));
	OnListLoadData();
	szSQL.Format(_T(" Select count(*) From M_PRODUCT WHERE %s and MP_ISACTIVE='Y' and MP_DECISION is not null"), szWhere);				
	rs.ExecSQL(szSQL);	
	nCount = rs.GetIntValue();
	_msg(_T("Có tất cả %ld mục được tìm kiếm theo số quyết định trên màn hình"),nCount);
	int ret = ShowMessageBox(_T("Bạn có muốn bỏ hoạt động các mục trên màn hình không? (lưu ý chỉ bỏ những mục có số quyết định)"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	else
	szSQL.Format(_T(" Update M_PRODUCT set MP_ISACTIVE='N',  MP_UPDATEDBY='%s', MP_UPDATEDDATE=TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') WHERE %s and MP_ISACTIVE='Y' and MP_DECISION is not null"), pMF->GetCurrentUser(), pMF->GetSysDateTime(),szWhere);				
	rsf.ExecSQL(szSQL);	
	_msg(_T("%s"),szSQL);
	_msg(_T("Có tất cả %ld mục được bỏ hoạt động"),nCount);
	OnListLoadData();
	return nCount;
}
#include "ProductUpdateDialog.h"
void CProductList::OnUpdateSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	long nProductID = str2long(m_wndList.GetItemText(nSel, 0));	
	{
		ProductUpdateDialog dlg(this);
		dlg.m_nProductID = nProductID;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	m_wndEdit.SetFocus();
	
}
void CProductList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndItemInformation, 100, 100);
	
	AddBottom(&m_wndLoadInactive);
	AddBottom(&m_wndHasPrecision);
	AddBottom(&m_wndStent);
	AddBottom(&m_wndIUnPaid);
	AddBottom(&m_wndNonstock);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}