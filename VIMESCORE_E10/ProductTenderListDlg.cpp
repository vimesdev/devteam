#include "ProductTenderListDlg.h"
#include "MainFrame_E10.h"
static void _OnProductListCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderListDlg* )pWnd)->OnProductListCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductListCategorySelendokFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductListCategorySelendok();
}
/*static void _OnProductListCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductListCategoryKillfocus();
}*/
/*static void _OnProductListCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductListCategoryKillfocus();
}*/
static long _OnProductListCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnProductListCategoryLoadData();
}
/*static void _OnProductListCategoryAddNewFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductListCategoryAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductTenderListDlg *pVw = (CProductTenderListDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductTenderListDlg *pVw = (CProductTenderListDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductTenderListDlg *pVw = (CProductTenderListDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CProductTenderListDlg *pVw = (CProductTenderListDlg *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderListDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductTenderListDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductTenderListDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListCloseItemFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnListCloseItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnActiveIngredientIDChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientIDChange();
} */
/*static void _OnActiveIngredientIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientIDSetfocus();} */ 
/*static void _OnActiveIngredientIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientIDKillfocus();
} */
static int _OnActiveIngredientIDCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnActiveIngredientIDCheckValue();
} 
/*static void _OnActiveIngredientChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientChange();
} */
/*static void _OnActiveIngredientSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientSetfocus();} */ 
/*static void _OnActiveIngredientKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnActiveIngredientKillfocus();
} */
static int _OnActiveIngredientCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnActiveIngredientCheckValue();
} 
/*static void _OnCategoryChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCategoryChange();
} */
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCategorySetfocus();} */ 
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnCategoryKillfocus();
} */
static int _OnCategoryCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnCategoryCheckValue();
} 
/*static void _OnProductNameChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductNameChange();
} */
/*static void _OnProductNameSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductNameSetfocus();} */ 
/*static void _OnProductNameKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductNameKillfocus();
} */
static int _OnProductNameCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnProductNameCheckValue();
} 
/*static void _OnDosageFormChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnDosageFormChange();
} */
/*static void _OnDosageFormSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnDosageFormSetfocus();} */ 
/*static void _OnDosageFormKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnDosageFormKillfocus();
} */
static int _OnDosageFormCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnDosageFormCheckValue();
} 
/*static void _OnRouteOfAdminChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnRouteOfAdminChange();
} */
/*static void _OnRouteOfAdminSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnRouteOfAdminSetfocus();} */ 
/*static void _OnRouteOfAdminKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnRouteOfAdminKillfocus();
} */
static int _OnRouteOfAdminCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnRouteOfAdminCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnUomCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnPlannedPriceChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnPlannedPriceChange();
} */
/*static void _OnPlannedPriceSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnPlannedPriceSetfocus();} */ 
/*static void _OnPlannedPriceKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnPlannedPriceKillfocus();
} */
static int _OnPlannedPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnPlannedPriceCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnProductIDChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductIDChange();
} */
/*static void _OnProductIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductIDSetfocus();} */ 
/*static void _OnProductIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductIDKillfocus();
} */
static int _OnProductIDCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnProductIDCheckValue();
} 
/*static void _OnProductExtraInfoIDChangeFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductExtraInfoIDChange();
} */
/*static void _OnProductExtraInfoIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductExtraInfoIDSetfocus();} */ 
/*static void _OnProductExtraInfoIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderListDlg *)pWnd)->OnProductExtraInfoIDKillfocus();
} */
static int _OnProductExtraInfoIDCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderListDlg *)pWnd)->OnProductExtraInfoIDCheckValue();
} 
static int _OnAddProductTenderListDlgFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnAddProductTenderListDlg();
} 
static int _OnEditProductTenderListDlgFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnEditProductTenderListDlg();
} 
static int _OnCloseProductTenderListDlgFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnCloseProductTenderListDlg();
} 
static int _OnSaveProductTenderListDlgFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnSaveProductTenderListDlg();
} 
static int _OnCancelProductTenderListDlgFnc(CWnd *pWnd){
	 return ((CProductTenderListDlg*)pWnd)->OnCancelProductTenderListDlg();
} 
CProductTenderListDlg::CProductTenderListDlg(CWnd* pParent): CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 1158;
	m_nTenderID = 0;
}
CProductTenderListDlg::~CProductTenderListDlg(){
}
void CProductTenderListDlg::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndProductListCategoryLabel.Create(this, _T("Category"), 10, 30, 90, 55);
	m_wndProductListCategory.Create(this,95, 30, 405, 55); 
	m_wndSearchNameLabel.Create(this, _T("&Name"), 410, 30, 490, 55);
	m_wndSearchName.Create(this,495, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndList.Create(this, 10, 90, 960, 600);
	m_wndAdd.Create(this, _T("&Add"), 560, 645, 640, 670);
	m_wndClose.Create(this, _T("&Close"), 730, 645, 810, 670);
	

}
void CProductTenderListDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	SetDefaultValues();


	m_wndProductListCategory.SetCheckValue(true);
	m_wndProductListCategory.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);
	
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("CREATED"), CFMT_DATETIME, 0);
	m_wndList.InsertColumn(2, _T("CREATEDBY"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(3, _T("UPDATED"), CFMT_DATETIME, 0);
	m_wndList.InsertColumn(4, _T("UPDATEDBY"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(5, _T("Mã hoạt chất"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("id_hoat_chat"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("Tên hoạt chất"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(8, _T("Nhóm TCKT"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(9, _T("Nồng độ, hàm lượng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(10, _T("Đường dùng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(11, _T("Dạng bào chế"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(12, _T("Đơn vị"), CFMT_NUMBER, 100);
	
	//m_wndList.InsertColumn(15, _T("TOTAL AMOUNT"), CFMT_NUMBER, 100);
	//m_wndList.InsertColumn(16, _T("PRODUCT ID"), CFMT_NUMBER, 100);
	//m_wndList.InsertColumn(17, _T("PRODUCT EXTRAINFO ID"), CFMT_NUMBER, 100);


	m_m_product_tenderTbl.SetTableName(_T("m_product_tender"));
	m_m_product_tenderTbl.AddField(_T("M_PRODUCT_TENDER_ID"), dfText, 32); 
	m_m_product_tenderTbl.AddField(_T("CREATED"), dfDateTime); 
	m_m_product_tenderTbl.AddField(_T("CREATEDBY"), dfText, 32); 
	m_m_product_tenderTbl.AddField(_T("UPDATED"), dfDateTime); 
	m_m_product_tenderTbl.AddField(_T("UPDATEDBY"), dfText, 32); 
	m_m_product_tenderTbl.AddField(_T("CODE"), dfText, 32); 
	m_m_product_tenderTbl.AddField(_T("ACTIVE_INGREDIENT_ID"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("ACTIVE_INGREDIENT"), dfText, 254); 
	m_m_product_tenderTbl.AddField(_T("CATEGORY_ID"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("DOSAGE_CONCENTRATION"), dfText, 32); 
	m_m_product_tenderTbl.AddField(_T("ROUTE_OF_ADMINISTRATION"), dfText, 254); 
	m_m_product_tenderTbl.AddField(_T("DOSAGE_FORM"), dfText, 128); 
	m_m_product_tenderTbl.AddField(_T("UOM_ID"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("QUANTITY"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("PLANNED_PRICE"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("TOTAL_AMOUNT"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("PRODUCT_ID"), dfLong); 
	m_m_product_tenderTbl.AddField(_T("PRODUCT_EXTRAINFO_ID"), dfLong); 

}
void CProductTenderListDlg::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductListCategory.SetEvent(WE_SELENDOK, _OnProductListCategorySelendokFnc);
	//m_wndProductListCategory.SetEvent(WE_SETFOCUS, _OnProductListCategorySetfocusFnc);
	//m_wndProductListCategory.SetEvent(WE_KILLFOCUS, _OnProductListCategoryKillfocusFnc);
	m_wndProductListCategory.SetEvent(WE_SELCHANGE, _OnProductListCategorySelectChangeFnc);
	m_wndProductListCategory.SetEvent(WE_LOADDATA, _OnProductListCategoryLoadDataFnc);
	//m_wndProductListCategory.SetEvent(WE_ADDNEW, _OnProductListCategoryAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Close"), _OnListCloseItemFnc, 0, VK_DELETE, 0);
	
	
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CProductTenderListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductListCategory.GetDlgCtrlID(), m_szProductListCategoryKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
}
void CProductTenderListDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ProductListCategory")] =  m_szProductListCategoryKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("ActiveIngredientID")] =  m_nActiveIngredientID;
	m_jData[_T("ActiveIngredient")] =  m_szActiveIngredient;
	m_jData[_T("Category")] =  m_szCategory;
	m_jData[_T("ProductName")] =  m_szProductName;
	m_jData[_T("DosageForm")] =  m_szDosageForm;
	m_jData[_T("RouteOfAdmin")] =  m_szRouteOfAdmin;
	m_jData[_T("Uom")] =  m_szUom;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("PlannedPrice")] =  m_nPlannedPrice;
	m_jData[_T("TotalAmount")] =  m_nTotalAmount;
	m_jData[_T("ProductID")] =  m_szProductID;
	m_jData[_T("ProductExtraInfoID")] =  m_szProductExtraInfoID;
	}
	else
	{
			
	m_jData[_T("ProductListCategory")].GetValue(m_szProductListCategoryKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("ActiveIngredientID")].GetValue(m_nActiveIngredientID);
	m_jData[_T("ActiveIngredient")].GetValue(m_szActiveIngredient);
	m_jData[_T("Category")].GetValue(m_szCategory);
	m_jData[_T("ProductName")].GetValue(m_szProductName);
	m_jData[_T("DosageForm")].GetValue(m_szDosageForm);
	m_jData[_T("RouteOfAdmin")].GetValue(m_szRouteOfAdmin);
	m_jData[_T("Uom")].GetValue(m_szUom);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("PlannedPrice")].GetValue(m_nPlannedPrice);
	m_jData[_T("TotalAmount")].GetValue(m_nTotalAmount);
	m_jData[_T("ProductID")].GetValue(m_szProductID);
	m_jData[_T("ProductExtraInfoID")].GetValue(m_szProductExtraInfoID);
	}

}
void CProductTenderListDlg::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	szSQL.Format(_T("SELECT M_PRODUCT_TENDER_ID, CREATED, CREATEDBY, ") \
		_T(" UPDATED, UPDATEDBY, CODE, ACTIVE_INGREDIENT_ID, ACTIVE_INGREDIENT, ") \
		_T(" CATEGORY_ID, DOSAGE_CONCENTRATION, ROUTE_OF_ADMINISTRATION, DOSAGE_FORM, ") \
		_T(" GET_UOMNAME(UOM_ID) AS UOM, QUANTITY, PLANNED_PRICE, TOTAL_AMOUNT, PRODUCT_ID, PRODUCT_EXTRAINFO_ID") \
		_T(" FROM m_product_tender WHERE m_product_tender_id = '%s'"), m_szProductTenderID);
	rs.ExecSQL(szSQL);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("code"), m_szCode);
		rs.GetValue(_T("active_ingredient_id"), m_nActiveIngredientID);
		rs.GetValue(_T("active_ingredient"), m_szActiveIngredient);
		rs.GetValue(_T("category_id"), m_szCategory);
		rs.GetValue(_T("product_name"), m_szProductName);
		rs.GetValue(_T("dosage_form"), m_szDosageForm);
		rs.GetValue(_T("route_of_admin"), m_szRouteOfAdmin);
		rs.GetValue(_T("uom"), m_szUom);
		rs.GetValue(_T("quantity"), m_nQuantity);
		rs.GetValue(_T("planned_price"), m_nPlannedPrice);
		rs.GetValue(_T("total_amount"), m_nTotalAmount);
		rs.GetValue(_T("product_id"), m_szProductID);
		rs.GetValue(_T("product_extrainfo_id"), m_szProductExtraInfoID);
		UpdateData(FALSE);
		
	}

}
void CProductTenderListDlg::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductTenderListDlg::SetDefaultValues(){
	
	m_szProductListCategoryKey.Empty();
	m_szSearchName.Empty();
	m_szCode.Empty();
	m_nActiveIngredientID=0;
	m_szActiveIngredient.Empty();
	m_szCategory.Empty();
	m_szProductName.Empty();
	m_szDosageForm.Empty();
	m_szRouteOfAdmin.Empty();
	m_szUom.Empty();
	m_nQuantity=0;
	m_nPlannedPrice=0;
	m_nTotalAmount=0;
	m_szProductID.Empty();
	m_szProductExtraInfoID.Empty();

}
int CProductTenderListDlg::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 4, 5, -1);
			SetDefaultValues();
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
void CProductTenderListDlg::OnProductListCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductTenderListDlg::OnProductListCategorySelendok(){
	 
}
/*void CProductTenderListDlg::OnProductListCategorySetfocus(){
	
}*/
/*void CProductTenderListDlg::OnProductListCategoryKillfocus(){
	
}*/
long CProductTenderListDlg::OnProductListCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductListCategory.IsSearchKey() && !m_szProductListCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductListCategoryKey
};
	m_wndProductListCategory.CloseAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductListCategory.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderListDlg::OnProductListCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductTenderListDlg::OnSearchNameChange(){
	
} */
/*void CProductTenderListDlg::OnSearchNameSetfocus(){
	
} */
/*void CProductTenderListDlg::OnSearchNameKillfocus(){
	
} */
int CProductTenderListDlg::OnSearchNameCheckValue(){
	return 0;
} 
void CProductTenderListDlg::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	m_szProductTenderID = m_wndList.GetItemText(nSel, 0);
	CString szSQL;
	szSQL.Format(L"M_PRODUCT_TENDER_ADDLINE(%ld, '%s', '%s')", m_nTenderID, m_szProductTenderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		CString szMsg;
		
		if (ret == 0)
			szMsg.Format(L"Danh mục đã được thêm vào gói thầu");
		else
			szMsg.Format(L"[%d] Có lỗi xảy ra khi thêm", ret);
		ShowMessageBox(szMsg);
		return;
	}
	m_wndList.DeleteItem(nSel);

} 
void CProductTenderListDlg::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CProductTenderListDlg::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CProductTenderListDlg::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
void CProductTenderListDlg::OnListDblClick(){
	OnAddSelect();
} 
void CProductTenderListDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szProductTenderID = m_wndList.GetItemText(nNewItem, 0);
	//GetDataToScreen();
} 
int CProductTenderListDlg::OnListCloseItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductTenderListDlg::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	
	if (!m_szSearchName.IsEmpty())
	{
		szWhere.Format(
			_T(" AND lower(ACTIVE_INGREDIENT||'|'||CODE) like lower('%s%s%s') ")
			, _T("%"), m_szSearchName, _T("%"));
	}

	if (!m_szProductListCategoryKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND CATEGORY_ID='%s' "), m_szProductListCategoryKey);
	}

	szWhere.AppendFormat(L" and m_product_tender_id not in(select mpei_product_tender_id from m_product_extra_info where mpei_ma_goi_thau=%ld and mpei_product_tender_id is not null ) ", m_nTenderID);

	szSQL.Format(_T("SELECT M_PRODUCT_TENDER_ID, CREATED, CREATEDBY, ") \
				_T(" UPDATED, UPDATEDBY, CODE, ACTIVE_INGREDIENT_ID, ACTIVE_INGREDIENT, ") \
		_T(" CATEGORY_ID, DOSAGE_ID, ROUTE_ID, DOSAGE_FORM, ") \
		_T(" GET_UOMNAME(UOM_ID) AS UOM ") \
		_T(" FROM m_product_tender WHERE 1 = 1 %s ") \
		_T(" ORDER BY ACTIVE_INGREDIENT"), szWhere);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("M_PRODUCT_TENDER_ID")),
			rs.GetValue(_T("CREATED")),
			rs.GetValue(_T("CREATEDBY")),
			rs.GetValue(_T("UPDATED")),
			rs.GetValue(_T("UPDATEDBY")),
			rs.GetValue(_T("CODE")),
			rs.GetValue(_T("ACTIVE_INGREDIENT_ID")),
			rs.GetValue(_T("ACTIVE_INGREDIENT")),
			rs.GetValue(_T("CATEGORY_ID")),
			rs.GetValue(_T("DOSAGE_ID")),
			rs.GetValue(_T("ROUTE_ID")),
			rs.GetValue(_T("DOSAGE_FORM")),
			rs.GetValue(_T("UOM")),
			NULL);
		rs.MoveNext();

	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CProductTenderListDlg::OnCodeChange(){
	
} */
/*void CProductTenderListDlg::OnCodeSetfocus(){
	
} */
/*void CProductTenderListDlg::OnCodeKillfocus(){
	
} */
int CProductTenderListDlg::OnCodeCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnActiveIngredientIDChange(){
	
} */
/*void CProductTenderListDlg::OnActiveIngredientIDSetfocus(){
	
} */
/*void CProductTenderListDlg::OnActiveIngredientIDKillfocus(){
	
} */
int CProductTenderListDlg::OnActiveIngredientIDCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnActiveIngredientChange(){
	
} */
/*void CProductTenderListDlg::OnActiveIngredientSetfocus(){
	
} */
/*void CProductTenderListDlg::OnActiveIngredientKillfocus(){
	
} */
int CProductTenderListDlg::OnActiveIngredientCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnCategoryChange(){
	
} */
/*void CProductTenderListDlg::OnCategorySetfocus(){
	
} */
/*void CProductTenderListDlg::OnCategoryKillfocus(){
	
} */
int CProductTenderListDlg::OnCategoryCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnProductNameChange(){
	
} */
/*void CProductTenderListDlg::OnProductNameSetfocus(){
	
} */
/*void CProductTenderListDlg::OnProductNameKillfocus(){
	
} */
int CProductTenderListDlg::OnProductNameCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnDosageFormChange(){
	
} */
/*void CProductTenderListDlg::OnDosageFormSetfocus(){
	
} */
/*void CProductTenderListDlg::OnDosageFormKillfocus(){
	
} */
int CProductTenderListDlg::OnDosageFormCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnRouteOfAdminChange(){
	
} */
/*void CProductTenderListDlg::OnRouteOfAdminSetfocus(){
	
} */
/*void CProductTenderListDlg::OnRouteOfAdminKillfocus(){
	
} */
int CProductTenderListDlg::OnRouteOfAdminCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnUomChange(){
	
} */
/*void CProductTenderListDlg::OnUomSetfocus(){
	
} */
/*void CProductTenderListDlg::OnUomKillfocus(){
	
} */
int CProductTenderListDlg::OnUomCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnQuantityChange(){
	
} */
/*void CProductTenderListDlg::OnQuantitySetfocus(){
	
} */
/*void CProductTenderListDlg::OnQuantityKillfocus(){
	
} */
int CProductTenderListDlg::OnQuantityCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnPlannedPriceChange(){
	
} */
/*void CProductTenderListDlg::OnPlannedPriceSetfocus(){
	
} */
/*void CProductTenderListDlg::OnPlannedPriceKillfocus(){
	
} */
int CProductTenderListDlg::OnPlannedPriceCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnTotalAmountChange(){
	
} */
/*void CProductTenderListDlg::OnTotalAmountSetfocus(){
	
} */
/*void CProductTenderListDlg::OnTotalAmountKillfocus(){
	
} */
int CProductTenderListDlg::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnProductIDChange(){
	
} */
/*void CProductTenderListDlg::OnProductIDSetfocus(){
	
} */
/*void CProductTenderListDlg::OnProductIDKillfocus(){
	
} */
int CProductTenderListDlg::OnProductIDCheckValue(){
	return 0;
} 
/*void CProductTenderListDlg::OnProductExtraInfoIDChange(){
	
} */
/*void CProductTenderListDlg::OnProductExtraInfoIDSetfocus(){
	
} */
/*void CProductTenderListDlg::OnProductExtraInfoIDKillfocus(){
	
} */
int CProductTenderListDlg::OnProductExtraInfoIDCheckValue(){
	return 0;
} 
int CProductTenderListDlg::OnAddProductTenderListDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductTenderListDlg::OnEditProductTenderListDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductTenderListDlg::OnCloseProductTenderListDlg(){
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
 		OnCancelProductTenderListDlg();
 	}
	return 0;
}
int CProductTenderListDlg::OnSaveProductTenderListDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_m_product_tenderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		//szWhere.Format(_T(" WHERE M_PRODUCT_TENDER_ID = "));
 		szSQL = m_m_product_tenderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnProductTenderListDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductTenderListDlg::OnCancelProductTenderListDlg(){
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
int CProductTenderListDlg::OnProductTenderListDlgListLoadData(){
	return 0;
}


void CProductTenderListDlg::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndClose);
}