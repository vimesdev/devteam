#include "stdafx.h"
#include "PMReportConditionForm.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

static bool m_bGroupChestType = false;
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnFromDateKillfocus();
} */
/*static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnFromDateCheckValue();
}*/ 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReportConditionForm* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnStorageAddNew();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnSupplierLoadData();
}
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReportConditionForm* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReportConditionForm* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnCategoryAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReportConditionForm* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPMReportConditionForm *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMReportConditionForm *)pWnd)->OnNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMReportConditionForm*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMReportConditionForm*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMReportConditionForm*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMReportConditionForm*)pWnd)->OnListDeleteItem();
} 
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CPMReportConditionForm*)pWnd)->OnListSelectAll();
} 
static int _OnListUnselectAllFnc(CWnd *pWnd){
	return ((CPMReportConditionForm*)pWnd)->OnListUnselectAll();
} 
static void _OnChestInventorySelectFnc(CWnd *pWnd){
	 ((CPMReportConditionForm*)pWnd)->OnChestInventorySelect();
}
static void _OnTypeSortSelectFnc(CWnd *pWnd){
	 ((CPMReportConditionForm*)pWnd)->OnTypeSortSelect();
}
static void _OnCategorySortSelectFnc(CWnd *pWnd){
	 ((CPMReportConditionForm*)pWnd)->OnCategorySortSelect();
}
static void _OnSupplierSortSelectFnc(CWnd *pWnd){
	 ((CPMReportConditionForm*)pWnd)->OnSupplierSortSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMReportConditionForm *pVw = (CPMReportConditionForm *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMReportConditionForm *pVw = (CPMReportConditionForm *)pWnd;
	pVw->OnExportSelect();
} 
CPMReportConditionForm::CPMReportConditionForm(CWnd *pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 245;
	SetDefaultValues();

	//Biên b?n ki?m kê kho
}
CPMReportConditionForm::~CPMReportConditionForm(){
}
void CPMReportConditionForm::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 515);
	m_wndToDateLabel.Create(this, _T("To Date"), 10, 30, 100, 55);
	m_wndToDate.Create(this,105, 30, 245, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 250, 30, 325, 55);
	m_wndStorage.SetCheckBox(true);
	m_wndStorage.Create(this,330, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 100, 85);
	m_wndSupplier.Create(this,105, 60, 570, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 100, 115);
	m_wndType.Create(this,105, 90, 570, 115); 
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 120, 100, 145);
	m_wndCategory.Create(this,105, 120, 570, 145); 
	m_wndSourceLabel.Create(this, _T("Source"), 10, 150, 102, 175);
	m_wndSource.Create(this,105, 150, 570, 175); 
	m_wndNameLabel.Create(this, _T("Name /Cnt"), 10, 180, 100, 205);
	m_wndName.Create(this,105, 180, 570, 205); 
	m_wndList.Create(this,10, 210, 570, 510); 
	m_wndChestInventory.Create(this, _T("Chest Inventory"), 5, 520, 125, 545);
	m_wndTypeSort.Create(this, _T("Type Sort"), 130, 520, 230, 545);
	m_wndCategorySort.Create(this, _T("Category Sort"), 235, 520, 400, 545);
	m_wndSupplierSort.Create(this, _T("Supplier Sort"), 405, 520, 570, 545);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 370, 550, 470, 575);
	m_wndExport.Create(this, _T("&Export"), 475, 550, 575, 575);

}
void CPMReportConditionForm::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(1024);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);
	//m_wndName.SetLimitText(35);
	//m_wndName.SetCheckValue(true);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndCategory.Format(3, 2);
	m_wndCategory.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndCategory.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);
	
	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Generic"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Org Name"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Product ID"), CFMT_TEXT, 0);
	
}
void CPMReportConditionForm::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	//m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
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
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Drug List"));
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	m_wndChestInventory.SetEvent(WE_CLICK, _OnChestInventorySelectFnc);
	m_wndTypeSort.SetEvent(WE_CLICK, _OnTypeSortSelectFnc);
	m_wndCategorySort.SetEvent(WE_CLICK, _OnCategorySortSelectFnc);
	m_wndSupplierSort.SetEvent(WE_CLICK, _OnSupplierSortSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	//m_wndFromDate.EnableWindow(FALSE);
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

}
void CPMReportConditionForm::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndChestInventory.GetDlgCtrlID(), m_bChestInventory);
	DDX_Check(pDX, m_wndTypeSort.GetDlgCtrlID(), m_bTypeSort);
	DDX_Check(pDX, m_wndCategorySort.GetDlgCtrlID(), m_bCategorySort);
	DDX_Check(pDX, m_wndSupplierSort.GetDlgCtrlID(), m_bSupplierSort);

}
void CPMReportConditionForm::SetDefaultValues(){

	//m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szSourceKey.Empty();
	m_szName.Empty();
	m_bChestInventory=FALSE;
	m_bTypeSort=FALSE;
	m_bCategorySort=FALSE;
	m_bSupplierSort=FALSE;
}
int CPMReportConditionForm::SetMode(int nMode){
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
/*void CPMReportConditionForm::OnFromDateChange(){
	
} */
/*void CPMReportConditionForm::OnFromDateSetfocus(){
	
} */
/*void CPMReportConditionForm::OnFromDateKillfocus(){
	
} */
/*int CPMReportConditionForm::OnFromDateCheckValue(){
	return 0;
}*/ 
/*void CPMReportConditionForm::OnToDateChange(){
	
} */
/*void CPMReportConditionForm::OnToDateSetfocus(){
	
} */
/*void CPMReportConditionForm::OnToDateKillfocus(){
	
} */
int CPMReportConditionForm::OnToDateCheckValue(){
	return 0;
} 
void CPMReportConditionForm::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMReportConditionForm::OnStorageSelendok(){
	UpdateData(true);
	OnListLoadData();
}
/*void CPMReportConditionForm::OnStorageSetfocus(){
	
}*/
/*void CPMReportConditionForm::OnStorageKillfocus(){
	
}*/
long CPMReportConditionForm::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
}
/*void CPMReportConditionForm::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CPMReportConditionForm::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*)AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CPMReportConditionForm::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CPMReportConditionForm::OnTypeSelendok(){
	 
}
/*void CPMReportConditionForm::OnTypeSetfocus(){
	
}*/
/*void CPMReportConditionForm::OnTypeKillfocus(){
	
}*/
long CPMReportConditionForm::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
	_T("                 product_type_name ") \
	_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
	_T("                ELSE mpt_product_type_id ") \
	_T("                END product_type_id, ") \
	_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
	_T("                ELSE mpt_name ") \
	_T("                END product_type_name ") \
	_T("         FROM   m_product_type ") \
	_T("         WHERE  mpt_org_id = '%s' ") \
	_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
	_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMReportConditionForm::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMReportConditionForm::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMReportConditionForm::OnCategorySelendok(){
	 
}
/*void CPMReportConditionForm::OnCategorySetfocus(){
	
}*/
/*void CPMReportConditionForm::OnCategoryKillfocus(){
	
}*/
long CPMReportConditionForm::OnCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND mpc_level = 2"));
	return pMF->LoadProductCategoryList(&m_wndCategory, m_szCategoryKey, szFilter);
}
/*void CPMReportConditionForm::OnCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMReportConditionForm::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMReportConditionForm::OnSourceSelendok(){
	 
}
/*void CPMReportConditionForm::OnSourceSetfocus(){
	
}*/
/*void CPMReportConditionForm::OnSourceKillfocus(){
	
}*/
long CPMReportConditionForm::OnSourceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductResourceList(&m_wndSource, m_szSourceKey);
}
/*void CPMReportConditionForm::OnSourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMReportConditionForm::OnNameChange(){
	
} */
/*void CPMReportConditionForm::OnNameSetfocus(){
	
} */
/*void CPMReportConditionForm::OnNameKillfocus(){
	
} */
int CPMReportConditionForm::OnNameCheckValue(){
	OnListLoadData();
	return 1;
}
int CPMReportConditionForm::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
} 

int CPMReportConditionForm::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
} 
void CPMReportConditionForm::OnListDblClick(){
	UpdateData(TRUE);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,false);
	}
	m_wndList.SetCheck(nSel, !m_wndList.GetCheck(nSel));
	
} 
void CPMReportConditionForm::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMReportConditionForm::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMReportConditionForm::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStockID;
	UpdateData(true);

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStockID.IsEmpty())
				szStockID.AppendFormat(_T(", "));
			szStockID.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(0));
		}
	}
	if (!szStockID.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id IN (%s)"), szStockID);


	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szName.IsEmpty())
	{
		szWhere.Format(_T(" and lower(mp_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}
	szWhere.AppendFormat(_T(" AND mp_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT") \
		_T("   DISTINCT") \
		_T("   mp_code                                                         AS id,") \
		_T("   mp_name                                                         AS name,") \
		_T("   Get_uomname(mp_uom_id)                                          AS unit,") \
		_T("   Get_productclassname(mp_product_class_id)                       AS genericname,") \
		_T("   Get_countryname((SELECT") \
		_T("                      DISTINCT") \
		_T("                      adm_country_id") \
		_T("                    FROM   ad_manufacture") \
		_T("                    WHERE  adm_manufacture_id=mp_manufacture_id)) AS orgname,") \
		_T("   mp_product_id as productid") \
		_T(" FROM   m_storageline") \
		_T("        LEFT JOIN m_product ON(msl_product_id=mp_product_id)") \
		_T(" WHERE  msl_product_item_id>0") \
		_T("        AND msl_qtyonhand>0 %s") \
		_T(" ORDER  BY name,") \
		_T("           unit "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("GenericName")), 
			rs.GetValue(_T("OrgName")), 
			rs.GetValue(_T("ProductID")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CPMReportConditionForm::OnChestInventorySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplierSort.SetCheck(false);
}
void CPMReportConditionForm::OnTypeSortSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCategorySort.SetCheck(false);
}
void CPMReportConditionForm::OnCategorySortSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTypeSort.SetCheck(false);	
}
void CPMReportConditionForm::OnSupplierSortSelect(){
	m_wndChestInventory.SetCheck(false);
}
void CPMReportConditionForm::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	
	menu.CreatePopupMenu();
	TranslateString(_T("Print Format 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Format 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Print Format 3"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			PrintFormat1();
			break;
		case 2:
			PrintFormat2();
			break;
		case 3:
			PrintFormat3();
			break;
	}
}

void CPMReportConditionForm::PrintFormat1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptFooter = NULL;
	CRecord rs(&pMF->m_db), mrs(&pMF->m_db);
	CString szSQL, szName, tmpStr, szPreviousID, szCurrentID, szPreviousGroup, szCurrentGroup, szCurrentDate, szSumInWord;
	double nCost = 0;
	long double nGroupAmount = 0, nTtlAmount = 0, nChestAmount = 0, nSupplierAmount = 0;
	int n = 0, nIdx = 1;
	if (pMF->GetModuleID() == _T("PM"))
		tmpStr.Format(_T("PMS_BIENBANKIEMKETHUOC.RPT"));
	else
		tmpStr.Format(_T("MA_BIENBANKIEMKETHUOC.RPT"));
	szName.Format(_T("Reports/HMS/%s"), tmpStr);
	if(!rpt.Init(szName)){
			return;
	}
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);

	//Member
	szSQL.Format(_T("SELECT mm_id id, mm_title title, mm_name name FROM m_member ORDER BY mm_id"));
	mrs.ExecSQL(szSQL);
	while(!mrs.IsEOF()){
		tmpStr.Format(_T("Title%d"), nIdx);
		rptHeader->SetValue(tmpStr, mrs.GetValue(_T("title")));
		tmpStr.Format(_T("Member%d"), nIdx);
		rptHeader->SetValue(tmpStr, mrs.GetValue(_T("name")));
		nIdx++;
		mrs.MoveNext();
	}
	nIdx = 1;
	tmpStr.Format(_T("%s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	rptHeader->SetValue(_T("StockName"), m_szStockName);
	while (!rs.IsEOF())
	{
		//_debug(_T("Chest:%f|Group:%f|ChestNewID:%s|ChestOldID:%s|GroupNewID:%s|GroupOldID:%s "), nChestAmount, nGroupAmount, szCurrentID, szPreviousID, szCurrentGroup, szPreviousGroup);
		if ((m_bTypeSort || m_bCategorySort) && (!m_bChestInventory && !m_bSupplierSort))
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%f"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				TranslateString(rs.GetValue(_T("groupname")), tmpStr);
				rptDetail->SetValue(_T("GroupName"), tmpStr);
				szPreviousGroup = szCurrentGroup;
			}
		}
		if (m_bChestInventory)
		{
			rs.GetValue(_T("locationame"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nChestAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%f"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%f"), nChestAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nChestAmount = 0;
				}
				if (!szPreviousID.IsEmpty() && szCurrentID != szPreviousID)
					rptDetail->SetPageBreak();
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bSupplierSort)
		{
			rs.GetValue(_T("product_bpartnerid"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nSupplierAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%f"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%f"), nSupplierAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nSupplierAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("partnername")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bTypeSort || m_bCategorySort)
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%f"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
				szPreviousGroup = szCurrentGroup;
			}
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("name")));
		rptDetail->SetValue(_T("10"), rs.GetValue(_T("genericname")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("country")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("lotno")));
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), tmpStr.IsEmpty()?_T("NA"):tmpStr);
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("instockqty")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("price")));
		rs.GetValue(_T("instockamount"), nCost);
		nGroupAmount += nCost;
		nChestAmount += nCost;
		nSupplierAmount += nCost;
		nTtlAmount += nCost;
		rptDetail->SetValue(_T("9"), double2str(nCost));
		rs.MoveNext();
	}
	if (m_bTypeSort || m_bCategorySort)
	{
		rs.GetValue(_T("groupid"), szCurrentGroup);
		if (szCurrentGroup != szPreviousGroup)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
			if (nGroupAmount > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%f"), nGroupAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);	
			}
			szPreviousGroup = szCurrentGroup;
		}
	}
	if (m_bSupplierSort)
	{
		if (nSupplierAmount > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
			tmpStr.Format(_T("%f"), nSupplierAmount);
			rptDetail->SetValue(_T("s9"), tmpStr);	
		}
	}
	if (m_bChestInventory)
	{
		rs.GetValue(_T("locationame"), szCurrentID);
		if (szCurrentID != szPreviousID)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
			if (nChestAmount > 0)
			{
				//if (m_bTypeSort || m_bCategorySort)
				//{
				//	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				//	tmpStr.Format(_T("%f"), nGroupAmount);
				//	rptDetail->SetValue(_T("s9"), tmpStr);
				//}
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%f"), nChestAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);
				
			}
			szPreviousID = szCurrentID;
		}
	}
	if (nTtlAmount > 0)
	{
		rptFooter = rpt.GetReportFooter();
		nIdx--;
		rptFooter->SetValue(_T("TotalOrder"), int2str(nIdx));
		tmpStr.Format(_T("%f"), nTtlAmount);
		rptFooter->SetValue(_T("TotalAmount"), tmpStr);
		MoneyToString(tmpStr, szSumInWord);
		rptFooter->SetValue(_T("SumInWord"), szSumInWord);
	}
	szCurrentDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurrentDate.Mid(8, 2), szCurrentDate.Mid(5, 2), szCurrentDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("UserName"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMReportConditionForm::PrintFormat2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szName, szCurrentGroup, szPreviousGroup, szCurrentID, szPreviousID, szSumInWord, szCurrentDate;
	CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptFooter = NULL;
	CRecord rs(&pMF->m_db), mrs(&pMF->m_db);
	int nCost = 0;
	int nGroupAmount = 0, nTtlAmount = 0, nChestAmount = 0, nSupplierAmount = 0;
	int n = 0, nIdx = 1;
	szPreviousID.Empty();
	tmpStr.Format(_T("PMS_BIENBANKIEMKETHUOC_BB.RPT"));
	szName.Format(_T("Reports/HMS/%s"), tmpStr);
	if(!rpt.Init(szName)){
			return;
	}
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	nIdx = 1;
	tmpStr.Format(_T("%s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	rptHeader->SetValue(_T("StockName"), m_szStockName);
	while (!rs.IsEOF())
	{
		//_debug(_T("Chest:%f|Group:%f|ChestNewID:%s|ChestOldID:%s|GroupNewID:%s|GroupOldID:%s "), nChestAmount, nGroupAmount, szCurrentID, szPreviousID, szCurrentGroup, szPreviousGroup);
		if ((m_bTypeSort || m_bCategorySort) && (!m_bChestInventory && !m_bSupplierSort))
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
				szPreviousGroup = szCurrentGroup;
			}
		}
		if (m_bChestInventory)
		{
			rs.GetValue(_T("locationame"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nChestAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%d"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nChestAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nChestAmount = 0;
				}
				if (!szPreviousID.IsEmpty() && szCurrentID != szPreviousID)
					rptDetail->SetPageBreak();
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bSupplierSort)
		{
			rs.GetValue(_T("product_bpartnerid"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nSupplierAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%d"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nSupplierAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nSupplierAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("partnername")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bTypeSort || m_bCategorySort)
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
				szPreviousGroup = szCurrentGroup;
			}
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("name")));
		rptDetail->SetValue(_T("10"), rs.GetValue(_T("genericname")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("country")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("lotno")));
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), tmpStr.IsEmpty()?_T("NA"):tmpStr);
		rs.GetValue(_T("instockqty"), nCost);
		nGroupAmount += nCost;
		nChestAmount += nCost;
		nSupplierAmount += nCost;
		nTtlAmount += nCost;
 		rptDetail->SetValue(_T("8"), int2str(nCost));
// 		rptDetail->SetValue(_T("5"), rs.GetValue(_T("price")));
// 		rs.GetValue(_T("instockamount"), nCost);
// 		nGroupAmount += nCost;
// 		nChestAmount += nCost;
// 		nSupplierAmount += nCost;
// 		nTtlAmount += nCost;
// 		rptDetail->SetValue(_T("9"), double2str(nCost));
// 		rptDetail->SetValue(_T("9"), rs.GetValue(_T("instockamount")));
		rs.MoveNext();
	}
	if (m_bTypeSort || m_bCategorySort)
	{
		rs.GetValue(_T("groupid"), szCurrentGroup);
		if (szCurrentGroup != szPreviousGroup)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
			if (nGroupAmount > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%d"), nGroupAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);	
			}
			szPreviousGroup = szCurrentGroup;
		}
	}
	if (m_bSupplierSort)
	{
		if (nSupplierAmount > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
			tmpStr.Format(_T("%d"), nSupplierAmount);
			rptDetail->SetValue(_T("s9"), tmpStr);	
		}
	}
	if (m_bChestInventory)
	{
		rs.GetValue(_T("locationame"), szCurrentID);
		if (szCurrentID != szPreviousID)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
			if (nChestAmount > 0)
			{
				//if (m_bTypeSort || m_bCategorySort)
				//{
				//	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				//	tmpStr.Format(_T("%f"), nGroupAmount);
				//	rptDetail->SetValue(_T("s9"), tmpStr);
				//}
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%d"), nChestAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);
				
			}
			szPreviousID = szCurrentID;
		}
	}
	if (nTtlAmount > 0)
	{
		rptFooter = rpt.GetReportFooter();
		nIdx--;
		rptFooter->SetValue(_T("TotalOrder"), int2str(nIdx));
		tmpStr.Format(_T("%d"), nTtlAmount);
		rptFooter->SetValue(_T("TotalAmount"), tmpStr);
		MoneyToString(tmpStr, szSumInWord);
		rptFooter->SetValue(_T("SumInWord"), szSumInWord);
	}
	szCurrentDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurrentDate.Mid(8, 2), szCurrentDate.Mid(5, 2), szCurrentDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rptFooter->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMReportConditionForm::PrintFormat3(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szName, szCurrentGroup, szPreviousGroup, szCurrentID, szPreviousID, szSumInWord, szCurrentDate;
	CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptFooter = NULL;
	CRecord rs(&pMF->m_db), mrs(&pMF->m_db);
	int nCost = 0;
	int nGroupAmount = 0, nTtlAmount = 0, nChestAmount = 0, nSupplierAmount = 0;
	int n = 0, nIdx = 1;
	tmpStr.Format(_T("PMS_BIENBANKIEMKETHUOC_BB1.RPT"));
	szName.Format(_T("Reports/HMS/%s"), tmpStr);
	if(!rpt.Init(szName)){
		return;
	}
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	nIdx = 1;
	tmpStr.Format(_T("%s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	rptHeader->SetValue(_T("StockName"), m_szStockName);
	while (!rs.IsEOF())
	{
		//_debug(_T("Chest:%f|Group:%f|ChestNewID:%s|ChestOldID:%s|GroupNewID:%s|GroupOldID:%s "), nChestAmount, nGroupAmount, szCurrentID, szPreviousID, szCurrentGroup, szPreviousGroup);
		if ((m_bTypeSort || m_bCategorySort) && (!m_bChestInventory && !m_bSupplierSort))
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
				szPreviousGroup = szCurrentGroup;
			}
		}
		if (m_bChestInventory)
		{
			rs.GetValue(_T("locationame"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nChestAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%d"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nChestAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nChestAmount = 0;
				}
				if (!szPreviousID.IsEmpty() && szCurrentID != szPreviousID)
					rptDetail->SetPageBreak();
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bSupplierSort)
		{
			rs.GetValue(_T("product_bpartnerid"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nSupplierAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						tmpStr.Format(_T("%d"), nGroupAmount);
						rptDetail->SetValue(_T("s9"), tmpStr);	
						nGroupAmount = 0;
					}
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nSupplierAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nSupplierAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("partnername")));
				szPreviousID = szCurrentID;
			}
		}
		if (m_bTypeSort || m_bCategorySort)
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					tmpStr.Format(_T("%d"), nGroupAmount);
					rptDetail->SetValue(_T("s9"), tmpStr);	
					nGroupAmount = 0;
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
				szPreviousGroup = szCurrentGroup;
			}
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("name")));
		rptDetail->SetValue(_T("10"), rs.GetValue(_T("genericname")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("country")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("lotno")));
		rptDetail->SetValue(_T("5"),rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("9"), rs.GetValue(_T("amount")));
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), tmpStr.IsEmpty()?_T("NA"):tmpStr);
		rs.GetValue(_T("instockqty"), nCost);
		nGroupAmount += nCost;
		nChestAmount += nCost;
		nSupplierAmount += nCost;
		nTtlAmount += nCost;
		rptDetail->SetValue(_T("8"), int2str(nCost));
		 		/*rptDetail->SetValue(_T("5"), rs.GetValue(_T("price")));
		 		rs.GetValue(_T("amount"), nCost);
		 		nGroupAmount += nCost;
		 		nChestAmount += nCost;
		 		nSupplierAmount += nCost;
		 		nTtlAmount += nCost;
		 		rptDetail->SetValue(_T("9"), double2str(nCost));
		 		rptDetail->SetValue(_T("9"), rs.GetValue(_T("amount")));*/
		rs.MoveNext();
	}
	if (m_bTypeSort || m_bCategorySort)
	{
		rs.GetValue(_T("groupid"), szCurrentGroup);
		if (szCurrentGroup != szPreviousGroup)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("groupname")));
			if (nGroupAmount > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%d"), nGroupAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);	
			}
			szPreviousGroup = szCurrentGroup;
		}
	}
	if (m_bSupplierSort)
	{
		if (nSupplierAmount > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
			tmpStr.Format(_T("%d"), nSupplierAmount);
			rptDetail->SetValue(_T("s9"), tmpStr);	
		}
	}
	if (m_bChestInventory)
	{
		rs.GetValue(_T("locationame"), szCurrentID);
		if (szCurrentID != szPreviousID)
		{
			//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			//rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("locationame")));
			if (nChestAmount > 0)
			{
				//if (m_bTypeSort || m_bCategorySort)
				//{
				//	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				//	tmpStr.Format(_T("%f"), nGroupAmount);
				//	rptDetail->SetValue(_T("s9"), tmpStr);
				//}
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("%d"), nChestAmount);
				rptDetail->SetValue(_T("s9"), tmpStr);

			}
			szPreviousID = szCurrentID;
		}
	}
	if (nTtlAmount > 0)
	{
		rptFooter = rpt.GetReportFooter();
		nIdx--;
		rptFooter->SetValue(_T("TotalOrder"), int2str(nIdx));
		tmpStr.Format(_T("%d"), nTtlAmount);
		rptFooter->SetValue(_T("TotalAmount"), tmpStr);
		MoneyToString(tmpStr, szSumInWord);
		rptFooter->SetValue(_T("SumInWord"), szSumInWord);
	}
	szCurrentDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurrentDate.Mid(8, 2), szCurrentDate.Mid(5, 2), szCurrentDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rptFooter->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMReportConditionForm::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;

	menu.CreatePopupMenu();
	TranslateString(_T("Xuất mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất mẫu 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Xuất theo nhóm tủ"));
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();
			break;
		case 2:
			OnExport2();
			break;
		case 3:
			m_bGroupChestType = true;
			OnExport2();
			m_bGroupChestType = false;
			break;
	}
}

void CPMReportConditionForm::OnExport1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousID, szCurrentID, szPreviousGroup, szCurrentGroup;
	CStringArray arrCol;
	int nCol = 0, nRow = 0, nIdx = 1;
	double nCost = 0;
	long double nChestAmount = 0, nGroupAmount = 0, nTtlAmount = 0, nSupplierAmount = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 9);
	xls.SetCellMergedColumns(0, 3, 9);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	xls.SetCellText(0, 2, _T("BIÊN B?N KI?M KÊ THU?C HÓA CH?T V?T TU"), 4098, true);
	tmpStr.Format(_T("Ð?n ngày %s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098);
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Tên thu?c/ hàm lu?ng"));
	arrCol.Add(_T("Ho?t ch?t"));
	arrCol.Add(_T("ÐVT"));
	arrCol.Add(_T("Nu?c SX"));
	arrCol.Add(_T("H?n dùng"));
	arrCol.Add(_T("SL"));
	arrCol.Add(_T("Ðon giá"));
	arrCol.Add(_T("Thành ti?n"));
	for (int i = 0; i < arrCol.GetCount(); i ++)
	{
		xls.SetCellText(nCol + i,  4, arrCol.GetAt(i), 4098, true);
	}
	nRow = 5;
	while (!rs.IsEOF())
	{
		if ((m_bTypeSort || m_bCategorySort) && (!m_bChestInventory && !m_bSupplierSort))
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					xls.SetCellText(7, nRow, _T("Tổng nhóm"), 4098, true);
					tmpStr.Format(_T("%f"), nGroupAmount);
					xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
					nRow++;
					nGroupAmount = 0;
				}
				xls.SetCellText(0, nRow, rs.GetValue(_T("groupname")), FMT_TEXT, true);
				nRow++;
				szPreviousGroup = szCurrentGroup;
			}
		}
		if (m_bChestInventory)
		{
			rs.GetValue(_T("locationame"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nChestAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						xls.SetCellText(7, nRow, _T("Tổng nhóm"), 4098, true);
						tmpStr.Format(_T("%f"), nGroupAmount);
						xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
						nRow++;
						nGroupAmount = 0;
					}
					xls.SetCellText(7, nRow, _T("T?ng t?"), 4098, true);
					tmpStr.Format(_T("%f"), nChestAmount);
					xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
					nRow++;
					nChestAmount = 0;
				}
				xls.SetCellText(0, nRow, rs.GetValue(_T("locationame")), FMT_TEXT, true);
				szPreviousID = szCurrentID;
				nRow++;
			}
		}
		if (m_bSupplierSort)
		{
			rs.GetValue(_T("product_bpartnerid"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nSupplierAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						xls.SetCellText(7, nRow, _T("Tổng nhóm"), 4098, true);
						tmpStr.Format(_T("%f"), nGroupAmount);
						xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
						nRow++;
						nGroupAmount = 0;
					}
					xls.SetCellText(7, nRow, _T("T?ng t?"), 4098, true);
					tmpStr.Format(_T("%f"), nSupplierAmount);
					xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
					nRow++;
					nSupplierAmount = 0;
				}
				xls.SetCellText(0, nRow, rs.GetValue(_T("partnername")), FMT_TEXT, true);
				szPreviousID = szCurrentID;
				nRow++;
			}
		}
		if (m_bTypeSort || m_bCategorySort)
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					xls.SetCellText(7, nRow, _T("Tổng nhóm"), 4098, true);
					tmpStr.Format(_T("%f"), nGroupAmount);
					xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
					nRow++;
					nGroupAmount = 0;
				}
				xls.SetCellText(0, nRow, rs.GetValue(_T("groupname")), FMT_TEXT, true);
				nRow++;
				szPreviousGroup = szCurrentGroup;
			}
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("genericname")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("unit")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("country")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(5, nRow, tmpStr.IsEmpty()?_T("NA"):tmpStr, FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("instockqty")), FMT_NUMBER1);
		xls.SetCellText(7, nRow, rs.GetValue(_T("price")), FMT_NUMBER1);
		rs.GetValue(_T("instockamount"), nCost);
		nGroupAmount += nCost;
		nChestAmount += nCost;
		nSupplierAmount += nCost;
		nTtlAmount += nCost;
		xls.SetCellText(8, nRow, double2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (m_bTypeSort || m_bCategorySort)
	{
		if (nGroupAmount > 0)
		{
			xls.SetCellText(7, nRow, _T("Tổng nhóm"), 4098, true);
			tmpStr.Format(_T("%f"), nGroupAmount);
			xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
			nRow++;
			nGroupAmount = 0;
		}
	}
	if (m_bSupplierSort)
	{
		if (nSupplierAmount > 0)
		{
			xls.SetCellText(7, nRow, _T("T?ng t?"), 4098, true);
			tmpStr.Format(_T("%f"), nSupplierAmount);
			xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
			nRow++;
			nSupplierAmount = 0;
		}
	}
	if (m_bChestInventory)
	{
		if (nChestAmount > 0)
		{
			xls.SetCellText(7, nRow, _T("T?ng t?"), 4098, true);
			tmpStr.Format(_T("%f"), nChestAmount);
			xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
			nRow++;
			nChestAmount = 0;
		}
	}
	if (nTtlAmount > 0)
	{
		xls.SetCellText(7, nRow, _T("T?ng c?ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTtlAmount);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bien ban kiem kho kho.xls"));
} 
void CPMReportConditionForm::OnExport2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szName, szCurrentGroup, szPreviousGroup, szCurrentID, szPreviousID, szSumInWord, szCurrentDate;
	CRecord rs(&pMF->m_db), mrs(&pMF->m_db);
	int nCost = 0;
	int nGroupAmount = 0, nTtlAmount = 0, nChestAmount = 0, nSupplierAmount = 0;
	int n = 0, nIdx = 1, nCol = 0, nRow = 0;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);

	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	tmpStr.Format(_T("Ðến ngày %s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	tmpStr.Format(_T("Ðã kiểm kê tại: %s"), m_szStockName);
	xls.SetCellText(0, 4, tmpStr, 4098, true);

	xls.SetCellText(0, 2, _T("BIÊN BẢN KIỂM KÊ THUỐC-HÓA CHẤT-VẬT TU Y TẾ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("Tên thuốc/ hàm lượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("Hoạt chất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("ÐVT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("Nước SX"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 5, _T("Thừa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("Thiếu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("Thực tế"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 8);
	xls.SetMerge(3, 3, 0, 8);
	xls.SetMerge(4, 4, 0, 8);

	nRow = 6;
	nCol = 0;

	while (!rs.IsEOF())
	{
		//_debug(_T("Chest:%f|Group:%f|ChestNewID:%s|ChestOldID:%s|GroupNewID:%s|GroupOldID:%s "), nChestAmount, nGroupAmount, szCurrentID, szPreviousID, szCurrentGroup, szPreviousGroup);
		if ((m_bTypeSort || m_bCategorySort) && (!m_bChestInventory && !m_bSupplierSort))
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					xls.SetCellMergedColumns(0, nRow, 5);
					xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
					tmpStr.Format(_T("%d"), nGroupAmount);
					xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nGroupAmount = 0;
					nRow++;
				}
				xls.SetCellMergedColumns(0, nRow, 9);
				rs.GetValue(_T("groupname"), tmpStr);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11);
				szPreviousGroup = szCurrentGroup;
				nRow++;
			}
		}
		if (m_bChestInventory)
		{
			rs.GetValue(_T("locationame"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nChestAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						xls.SetCellMergedColumns(0, nRow, 5);
						xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
						tmpStr.Format(_T("%d"), nGroupAmount);
						xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
						nGroupAmount = 0;
						nRow++;
					}
					xls.SetCellMergedColumns(0, nRow, 5);
					xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
					tmpStr.Format(_T("%d"), nChestAmount);
					xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nChestAmount = 0;	
					nRow++;
				}
				if (!szPreviousID.IsEmpty() && szCurrentID != szPreviousID)
				xls.SetCellMergedColumns(0, nRow, 9);
				rs.GetValue(_T("locationame"), tmpStr);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11);
				szPreviousID = szCurrentID;
				nRow++;
			}
		}
		if (m_bSupplierSort)
		{
			rs.GetValue(_T("product_bpartnerid"), szCurrentID);
			if (szCurrentID != szPreviousID)
			{
				if (nSupplierAmount > 0)
				{
					if ((m_bCategorySort || m_bTypeSort) && nGroupAmount > 0)
					{
						xls.SetCellMergedColumns(0, nRow, 5);
						xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
						tmpStr.Format(_T("%d"), nGroupAmount);
						xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
						nGroupAmount = 0;
						nRow++;
					}
					xls.SetCellMergedColumns(0, nRow, 5);
					xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
					tmpStr.Format(_T("%d"), nSupplierAmount);
					xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nSupplierAmount = 0;
					nRow++;
				}
				xls.SetCellMergedColumns(0, nRow, 9);
				rs.GetValue(_T("partnername"), tmpStr);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11);
				szPreviousID = szCurrentID;
				nRow++;
			}
		}
		if (m_bTypeSort || m_bCategorySort)
		{
			rs.GetValue(_T("groupid"), szCurrentGroup);
			if (szCurrentGroup != szPreviousGroup)
			{
				if (nGroupAmount > 0)
				{
					xls.SetCellMergedColumns(0, nRow, 5);
					xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
					tmpStr.Format(_T("%d"), nGroupAmount);
					xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nGroupAmount = 0;
					nRow++;
				}
				xls.SetCellMergedColumns(0, nRow, 9);
				rs.GetValue(_T("groupname"), tmpStr);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11);
				szPreviousGroup = szCurrentGroup;
				nRow++;
			}
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("genericname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("country"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("instockqty"), nCost);
		nGroupAmount += nCost;
		nChestAmount += nCost;
		nSupplierAmount += nCost;
		nTtlAmount += nCost;
		xls.SetCellText(nCol+5, nRow, int2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (m_bTypeSort || m_bCategorySort)
	{
		rs.GetValue(_T("groupid"), szCurrentGroup);
		if (szCurrentGroup != szPreviousGroup)
		{
			if (nGroupAmount > 0)
			{
				xls.SetCellMergedColumns(0, nRow, 5);
				xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
				tmpStr.Format(_T("%d"), nGroupAmount);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
				nRow++;
			}
			szPreviousGroup = szCurrentGroup;
		}
	}
	if (m_bSupplierSort)
	{
		if (nSupplierAmount > 0)
		{
			xls.SetCellMergedColumns(0, nRow, 5);
			xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
			tmpStr.Format(_T("%d"), nSupplierAmount);
			xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
			nRow++;	
		}
	}
	if (m_bChestInventory)
	{
		rs.GetValue(_T("locationame"), szCurrentID);
		if (szCurrentID != szPreviousID)
		{
			if (nChestAmount > 0)
			{
				xls.SetCellMergedColumns(0, nRow, 5);
				xls.SetCellText(0, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_RIGHT, true, 11);
				tmpStr.Format(_T("%d"), nChestAmount);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
				nRow++;
			}
			szPreviousID = szCurrentID;
		}
	}
	if (nTtlAmount > 0)
	{
		xls.SetCellMergedColumns(0, nRow, 5);
		xls.SetCellText(0, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_RIGHT, true, 11);
		tmpStr.Format(_T("%d"), nTtlAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 11);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\bien ban kiem ke.xls"));
}

CString CPMReportConditionForm::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szInnerWhere, szStockID, szField, szGroupBy, szOrderBy, StockStr;
	m_szStockName.Empty();
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStockID.IsEmpty())
				szStockID.AppendFormat(_T(", "));
			szStockID.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(0));
			if (!m_szStockName.IsEmpty())
				m_szStockName.AppendFormat(_T(", "));
			m_szStockName.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(1));
		}
	}
	szInnerWhere.Format(_T(" AND io_date < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szToDate);
	if (!szStockID.IsEmpty())
		szInnerWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStockID);
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_bpartnerid = '%s'"), m_szSupplierKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	if (!m_szCategoryKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_rootid = '%s'"), m_szCategoryKey);
	//if (!m_szSourceKey.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND product_resourceid = %s"), m_szSourceKey);
	szWhere.AppendFormat(_T(" and product_org_id = '%s'"), pMF->GetModuleID());
	szField.Empty();
	szGroupBy.Empty();
	szOrderBy.Empty();
	if (m_bChestInventory)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T(" location_idx, PM_GET_LOCATION_NAME_V2(storage_id, product_id) AS locationame"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T(" location_idx"));

		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T(" location_idx, locationame "));
	}
	if (m_bSupplierSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_bpartnerid, get_partnername(product_bpartnerid) partnername"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_bpartnerid"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_bpartnerid"));
	}
	if (m_bTypeSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		//szField.AppendFormat(_T("product_producttype AS groupid, product_typename AS groupname"));
		szField.AppendFormat(_T("product_groupid AS groupid, product_groupname AS groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_groupid, product_groupname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_groupid"));

	}
	if (m_bCategorySort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_rootid groupid, product_rootname groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_rootid, product_rootname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_rootid"));
	}
	if (!szField.IsEmpty())
		szField.AppendFormat(_T(", "));
	if (!szGroupBy.IsEmpty())
		szGroupBy.AppendFormat(_T(", "));
	if (!szOrderBy.IsEmpty())
		szOrderBy.AppendFormat(_T(", "));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!StockStr.IsEmpty())
			{
				StockStr += _T(", ");
			}
			StockStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 5));
		}
	}
	if (!StockStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN (%s)"), StockStr);

	szSQL.Format(_T("SELECT %s id, name, unit, genericname, ") \
	_T("			expdate, country, price, ") \
	_T("			sum(instockqty) instockqty, sum(instockamount) instockamount") \
	_T("	FROM(") \
	_T("		SELECT product_rootid, product_rootname, product_groupid, product_groupname, ") \
	_T("		   (SELECT Get_productclassname(mp_product_class_id) FROM m_product WHERE mp_product_id = product_id) AS genericname,") \
	_T("		   pm_get_location(storage_id, item_id) as location, ") \
	_T("		   pm_get_location_name(storage_id, item_id) as locationame,") \
	_T("		   product_bpartnerid, storage_id,") \
	_T("		   product_code as id,") \
	_T("           product_name AS name,") \
	_T("           product_uomname AS unit,") \
	_T("           product_lotno AS lotno,") \
	_T("           CASE WHEN product_hasexp = 'Y' THEN product_expdate ELSE NULL END AS expdate,") \
	_T("           product_countryname AS country,") \
	_T("           product_taxprice AS price,") \
	_T("           period_qty AS instockqty,") \
	_T("           period_qty*product_taxprice AS instockamount, PM_GET_LOCATION_IDX_V2(storage_id, item_id) AS location_idx, product_id ") \
	_T("         FROM   (SELECT") \
	_T("                   storage_id,") \
	_T("                   item_id,") \
	_T("                   COALESCE(imp_qty-exp_qty, 0) period_qty") \
	_T("                 FROM   (SELECT") \
	_T("                           impstockid AS storage_id,") \
	_T("                           impdate    AS io_date,") \
	_T("                           sitemid item_id,") \
	_T("                           impqty imp_qty,") \
	_T("                           0          AS exp_qty") \
	_T("                         FROM   miv") \
	_T("                         UNION ALL") \
	_T("                         SELECT") \
	_T("                           expstockid,") \
	_T("                           expdate,") \
	_T("                           sitemid,") \
	_T("                           0,") \
	_T("                           expqty") \
	_T("                         FROM   mev) ptbl") \
	_T("                 WHERE 1=1 ") \
	_T("					%s) instock") \
	_T("                 LEFT JOIN m_productitem_view3 ON(product_item_id=item_id)") \
	_T("				 LEFT JOIN m_storagelist ON (msl_storage_id = storage_id)") \
	_T("         WHERE item_id>0 ") \
	_T("				%s)") \
	_T("         GROUP  BY %s ") \
	_T("				storage_id, product_id, id, name, unit, genericname, ") \
	_T("			expdate, country, price ") \
	_T("		HAVING sum(instockqty) > 0 ") \
	_T("		ORDER BY %s ") \
	_T("		id, expdate, price"), szField, szInnerWhere, szWhere, szGroupBy, szOrderBy);
	//_msg(_T("%s"),szSQL);
	return szSQL;
}
CString CPMReportConditionForm::GetQueryString1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szInnerWhere, szStockID, szField, szGroupBy, szOrderBy, StockStr;
	m_szStockName.Empty();
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStockID.IsEmpty())
				szStockID.AppendFormat(_T(", "));
			szStockID.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(0));
			if (!m_szStockName.IsEmpty())
				m_szStockName.AppendFormat(_T(", "));
			m_szStockName.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(1));
		}
	}
	szInnerWhere.Format(_T(" AND io_date < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szToDate);
	if (!szStockID.IsEmpty())
		szInnerWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStockID);
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_bpartnerid = '%s'"), m_szSupplierKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	if (!m_szCategoryKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_rootid = '%s'"), m_szCategoryKey);
	//if (!m_szSourceKey.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND product_resourceid = %s"), m_szSourceKey);
	szWhere.AppendFormat(_T(" and product_org_id = '%s'"), pMF->GetModuleID());
	szField.Empty();
	szGroupBy.Empty();
	szOrderBy.Empty();
	if (m_bChestInventory)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		if (m_bGroupChestType)
		{
			szField.AppendFormat(_T("location_group"));
		}
		else
		{
			szField.AppendFormat(_T("location_idx"));
		}
		szField.AppendFormat(_T(" , locationame"));
		szGroupBy = szField;
		szOrderBy = szField;
	}
	if (m_bSupplierSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_bpartnerid, get_partnername(product_bpartnerid) partnername"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_bpartnerid"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_bpartnerid"));
	}
	if (m_bTypeSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		//szField.AppendFormat(_T("product_producttype AS groupid, product_typename AS groupname"));
		szField.AppendFormat(_T("product_groupid AS groupid, product_groupname AS groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_groupid, product_groupname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_groupid"));

	}
	if (m_bCategorySort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_rootid groupid, product_rootname groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_rootid, product_rootname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_rootid"));
	}
	if (!szField.IsEmpty())
		szField.AppendFormat(_T(", "));
	if (!szGroupBy.IsEmpty())
		szGroupBy.AppendFormat(_T(", "));
	if (!szOrderBy.IsEmpty())
		szOrderBy.AppendFormat(_T(", "));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!StockStr.IsEmpty())
			{
				StockStr += _T(", ");
			}
			StockStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 5));
		}
	}
	if (!StockStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN (%s)"), StockStr);

	szSQL.Format(
		_T("SELECT %s id,") \
		_T("   name,") \
		_T("   unit, genericname,") \
		_T("   SUM(instockqty) AS instockqty") \
		_T(" FROM (") \
		_T("SELECT product_rootid, product_rootname, product_groupid, product_groupname, ") \
		_T("(SELECT Get_productclassname(mp_product_class_id) FROM m_product WHERE mp_product_id = product_id) AS genericname,") \
		_T("  pm_get_location(storage_id, item_id) as location, ") \
		_T("  PM_GET_LOCATION_NAME_V2(storage_id, product_id) as locationame,") \
		_T("  product_bpartnerid, storage_id,") \
		_T("  product_code AS id,") \
		_T("   product_name      AS name,") \
		_T("   product_uomname   AS unit,") \
		_T("   (period_qty) AS instockqty, PM_GET_LOCATION_IDX_V2(storage_id, item_id) AS location_idx, product_id, ") \
		_T("  PM_GET_LOCATION_GROUP(storage_id, item_id) as location_group") \
		_T(" FROM") \
		_T("   (SELECT storage_id,") \
		_T("     item_id,") \
		_T("     COALESCE(imp_qty-exp_qty, 0) period_qty") \
		_T("   FROM") \
		_T("     (SELECT impstockid AS storage_id,") \
		_T("       impdate          AS io_date,") \
		_T("       sitemid item_id,") \
		_T("       impqty imp_qty,") \
		_T("       0 AS exp_qty") \
		_T("     FROM miv") \
		_T("     UNION ALL") \
		_T("     SELECT expstockid, expdate, sitemid, 0, expqty FROM mev") \
		_T("     ) ptbl") \
		_T("   WHERE 1=1 ") \
		_T("   %s) instock") \
		_T(" LEFT JOIN m_productitem_view3 ON(product_item_id=item_id)") \
		_T(" LEFT JOIN m_storagelist ON (msl_storage_id = storage_id)") \
		_T(" WHERE item_id      >0 %s)") \
		_T(" GROUP BY %s product_id, name,") \
		_T("   id,") \
		_T("   unit, genericname") \
		_T(" HAVING SUM(instockqty) > 0") \
		_T(" ORDER BY %s id"), szField, szInnerWhere, szWhere, szGroupBy, szOrderBy);
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}
CString CPMReportConditionForm::GetQueryString2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szInnerWhere, szStockID, szField, szGroupBy, szOrderBy, StockStr;
	m_szStockName.Empty();
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStockID.IsEmpty())
				szStockID.AppendFormat(_T(", "));
			szStockID.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(0));
			if (!m_szStockName.IsEmpty())
				m_szStockName.AppendFormat(_T(", "));
			m_szStockName.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(1));
		}
	}
	szInnerWhere.Format(_T(" AND io_date < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szToDate);
	if (!szStockID.IsEmpty())
		szInnerWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStockID);
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_bpartnerid = '%s'"), m_szSupplierKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	if (!m_szCategoryKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_rootid = '%s'"), m_szCategoryKey);
	//if (!m_szSourceKey.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND product_resourceid = %s"), m_szSourceKey);
	szWhere.AppendFormat(_T(" and product_org_id = '%s'"), pMF->GetModuleID());
	szField.Empty();
	szGroupBy.Empty();
	szOrderBy.Empty();
	if (m_bChestInventory)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T(" location_idx, PM_GET_LOCATION_NAME_V2(storage_id, product_id) AS locationame"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T(" location_idx"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T(" location_idx"));
	}
	if (m_bSupplierSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_bpartnerid, get_partnername(product_bpartnerid) partnername"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_bpartnerid"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_bpartnerid"));
	}
	if (m_bTypeSort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		//szField.AppendFormat(_T("product_producttype AS groupid, product_typename AS groupname"));
		szField.AppendFormat(_T("product_groupid AS groupid, product_groupname AS groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_groupid, product_groupname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_groupid"));

	}
	if (m_bCategorySort)
	{
		if (!szField.IsEmpty())
			szField.AppendFormat(_T(", "));
		szField.AppendFormat(_T("product_rootid groupid, product_rootname groupname"));
		if (!szGroupBy.IsEmpty())
			szGroupBy.AppendFormat(_T(", "));
		szGroupBy.AppendFormat(_T("product_rootid, product_rootname"));
		if (!szOrderBy.IsEmpty())
			szOrderBy.AppendFormat(_T(", "));
		szOrderBy.AppendFormat(_T("product_rootid"));
	}
	if (!szField.IsEmpty())
		szField.AppendFormat(_T(", "));
	if (!szGroupBy.IsEmpty())
		szGroupBy.AppendFormat(_T(", "));
	if (!szOrderBy.IsEmpty())
		szOrderBy.AppendFormat(_T(", "));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!StockStr.IsEmpty())
			{
				StockStr += _T(", ");
			}
			StockStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 5));
		}
	}
	if (!StockStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN (%s)"), StockStr);

	szSQL.Format(_T("SELECT %s id,") \
		_T("   name,") \
		_T("   unit, genericname,price, sum(instockamount) as amount,") \
		_T("   SUM(instockqty) AS instockqty") \
		_T(" FROM (") \
		_T("SELECT product_rootid, product_rootname, product_groupid, product_groupname, ") \
		_T("(SELECT Get_productclassname(mp_product_class_id) FROM m_product WHERE mp_product_id = product_id) AS genericname,") \
		_T("  pm_get_location(storage_id, item_id) as location, ") \
		_T("  pm_get_location_name(storage_id, item_id) as locationame,") \
		_T("  product_bpartnerid, storage_id,") \
		_T("  product_code AS id,") \
		_T("   product_name      AS name,") \
		_T("   product_uomname   AS unit,product_taxprice AS price,period_qty*product_taxprice AS instockamount,") \
		_T("   (period_qty) AS instockqty, PM_GET_LOCATION_IDX_V2(storage_id, item_id) AS location_idx, product_id ") \
		_T(" FROM") \
		_T("   (SELECT storage_id,") \
		_T("     item_id,") \
		_T("     COALESCE(imp_qty-exp_qty, 0) period_qty") \
		_T("   FROM") \
		_T("     (SELECT impstockid AS storage_id,") \
		_T("       impdate          AS io_date,") \
		_T("       sitemid item_id,") \
		_T("       impqty imp_qty,") \
		_T("       0 AS exp_qty") \
		_T("     FROM miv") \
		_T("     UNION ALL") \
		_T("     SELECT expstockid, expdate, sitemid, 0, expqty FROM mev") \
		_T("     ) ptbl") \
		_T("   WHERE 1=1 ") \
		_T("   %s) instock") \
		_T(" LEFT JOIN m_productitem_view3 ON(product_item_id=item_id)") \
		_T(" LEFT JOIN m_storagelist ON (msl_storage_id = storage_id)") \
		_T(" WHERE item_id      >0 %s)") \
		_T(" GROUP BY %s storage_id, product_id, name,") \
		_T("   id,price,") \
		_T("   unit, genericname") \
		_T(" HAVING SUM(instockqty) > 0") \
		_T(" ORDER BY %s id"), szField, szInnerWhere, szWhere, szGroupBy, szOrderBy);
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}