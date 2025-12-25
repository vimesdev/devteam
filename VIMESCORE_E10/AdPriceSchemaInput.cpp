#include "AdPriceSchemaInput.h"
#include "MainFrame_E10.h"
#include "AdPriceSchemaLine.h"
static void _OnPartnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceSchemaInput* )pWnd)->OnPartnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerSelendokFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnPartnerSelendok();
}
/*static void _OnPartnerSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnPartnerKillfocus();
}*/
/*static void _OnPartnerKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnPartnerKillfocus();
}*/
static long _OnPartnerLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnPartnerLoadData();
}
/*static void _OnPartnerAddNewFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnPartnerAddNew();
}*/
static void _OnProductCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceSchemaInput* )pWnd)->OnProductCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCategorySelendokFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductCategorySelendok();
}
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductCategoryKillfocus();
}*/
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductCategoryKillfocus();
}*/
static long _OnProductCategoryLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnProductCategoryLoadData();
}
/*static void _OnProductCategoryAddNewFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductCategoryAddNew();
}*/
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceSchemaInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnProductAddNew();
}*/
static void _OnRefPriceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceSchemaInput* )pWnd)->OnRefPriceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRefPriceTypeSelendokFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceTypeSelendok();
}
/*static void _OnRefPriceTypeSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceTypeKillfocus();
}*/
/*static void _OnRefPriceTypeKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceTypeKillfocus();
}*/
static long _OnRefPriceTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnRefPriceTypeLoadData();
}
/*static void _OnRefPriceTypeAddNewFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceTypeAddNew();
}*/
static void _OnUnitPriceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceSchemaInput* )pWnd)->OnUnitPriceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitPriceTypeSelendokFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceTypeSelendok();
}
/*static void _OnUnitPriceTypeSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceTypeKillfocus();
}*/
/*static void _OnUnitPriceTypeKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceTypeKillfocus();
}*/
static long _OnUnitPriceTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnUnitPriceTypeLoadData();
}
/*static void _OnUnitPriceTypeAddNewFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceTypeAddNew();
}*/
/*static void _OnRefPriceAdjustChangeFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceAdjustChange();
} */
/*static void _OnRefPriceAdjustSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceAdjustSetfocus();} */ 
/*static void _OnRefPriceAdjustKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnRefPriceAdjustKillfocus();
} */
static int _OnRefPriceAdjustCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnRefPriceAdjustCheckValue();
} 
/*static void _OnUnitPriceAdjustChangeFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceAdjustChange();
} */
/*static void _OnUnitPriceAdjustSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceAdjustSetfocus();} */ 
/*static void _OnUnitPriceAdjustKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaInput *)pWnd)->OnUnitPriceAdjustKillfocus();
} */
static int _OnUnitPriceAdjustCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceSchemaInput *)pWnd)->OnUnitPriceAdjustCheckValue();
} 
static int _OnAddAdPriceSchemaInputFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaInput*)pWnd)->OnAddAdPriceSchemaInput();
} 
static int _OnEditAdPriceSchemaInputFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaInput*)pWnd)->OnEditAdPriceSchemaInput();
} 
static int _OnDeleteAdPriceSchemaInputFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaInput*)pWnd)->OnDeleteAdPriceSchemaInput();
} 
static int _OnSaveAdPriceSchemaInputFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaInput*)pWnd)->OnSaveAdPriceSchemaInput();
} 
static int _OnCancelAdPriceSchemaInputFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaInput*)pWnd)->OnCancelAdPriceSchemaInput();
} 
CAdPriceSchemaInput::CAdPriceSchemaInput(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdPriceSchemaInput::~CAdPriceSchemaInput(){
}
void CAdPriceSchemaInput::OnCreateComponents(){
	m_wndPartnerLabel.Create(this, _T("Partner"), 5, 5, 85, 30);
	m_wndPartner.Create(this,85, 5, 165, 30); 
	m_wndProductCategoryLabel.Create(this, _T("Product Category"), 5, 33, 85, 58);
	m_wndProductCategory.Create(this,85, 33, 165, 58); 
	m_wndProductLabel.Create(this, _T("Product"), 5, 63, 85, 88);
	m_wndProduct.Create(this,85, 63, 165, 88); 
	m_wndRefPriceTypeLabel.Create(this, _T("Ref Price Type"), 5, 93, 85, 118);
	m_wndRefPriceType.Create(this,85, 93, 165, 118); 
	m_wndRefPriceAdjustLabel.Create(this, _T("Ref Price Adjust"), 5, 153, 85, 178);
	m_wndRefPriceAdjust.Create(this,85, 153, 165, 178); 
	m_wndUnitPriceTypeLabel.Create(this, _T("Unit Price Type"), 5, 123, 85, 148);
	m_wndUnitPriceType.Create(this,85, 123, 165, 148); 
	m_wndUnitPriceAdjustLabel.Create(this, _T("Unit Price Adjust"), 5, 183, 85, 208);
	m_wndUnitPriceAdjust.Create(this,85, 183, 165, 208); 

}
void CAdPriceSchemaInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPartner.SetCheckValue(true);
	m_wndPartner.LimitText(35);
	m_wndProductCategory.SetCheckValue(true);
	m_wndProductCategory.LimitText(35);
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(35);
	m_wndRefPriceType.SetCheckValue(true);
	m_wndRefPriceType.LimitText(35);
	m_wndUnitPriceType.SetCheckValue(true);
	m_wndUnitPriceType.LimitText(35);
	m_wndRefPriceAdjust.SetLimitText(35);
	m_wndRefPriceAdjust.SetCheckValue(true);
	m_wndUnitPriceAdjust.SetLimitText(35);
	m_wndUnitPriceAdjust.SetCheckValue(true);


	m_wndPartner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPartner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProductCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProductCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProduct.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndProduct.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndRefPriceType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRefPriceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUnitPriceType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUnitPriceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ad_price_schema_lineTbl.SetTableName(_T("ad_price_schema_line"));
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_price_schema_line_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_client_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_org_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_user_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_createdby"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_createddate"), dfDateTime); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_updatedby"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_updateddate"), dfDateTime); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_price_schema_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_business_partner_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_product_category_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_product_id"), dfText, 32); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_ref_price_type"), dfLong); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_unit_price_type"), dfLong); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_ref_price_adjust"), dfText, 9); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_unit_price_adjust"), dfText, 9); 
	m_ad_price_schema_lineTbl.AddField(_T("adpsl_isactive"), dfText, 1); 
}
void CAdPriceSchemaInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPartner.SetEvent(WE_SELENDOK, _OnPartnerSelendokFnc);
	//m_wndPartner.SetEvent(WE_SETFOCUS, _OnPartnerSetfocusFnc);
	//m_wndPartner.SetEvent(WE_KILLFOCUS, _OnPartnerKillfocusFnc);
	m_wndPartner.SetEvent(WE_SELCHANGE, _OnPartnerSelectChangeFnc);
	m_wndPartner.SetEvent(WE_LOADDATA, _OnPartnerLoadDataFnc);
	//m_wndPartner.SetEvent(WE_ADDNEW, _OnPartnerAddNewFnc);
	m_wndProductCategory.SetEvent(WE_SELENDOK, _OnProductCategorySelendokFnc);
	//m_wndProductCategory.SetEvent(WE_SETFOCUS, _OnProductCategorySetfocusFnc);
	//m_wndProductCategory.SetEvent(WE_KILLFOCUS, _OnProductCategoryKillfocusFnc);
	m_wndProductCategory.SetEvent(WE_SELCHANGE, _OnProductCategorySelectChangeFnc);
	m_wndProductCategory.SetEvent(WE_LOADDATA, _OnProductCategoryLoadDataFnc);
	//m_wndProductCategory.SetEvent(WE_ADDNEW, _OnProductCategoryAddNewFnc);
	m_wndProduct.SetEvent(WE_SELENDOK, _OnProductSelendokFnc);
	//m_wndProduct.SetEvent(WE_SETFOCUS, _OnProductSetfocusFnc);
	//m_wndProduct.SetEvent(WE_KILLFOCUS, _OnProductKillfocusFnc);
	m_wndProduct.SetEvent(WE_SELCHANGE, _OnProductSelectChangeFnc);
	m_wndProduct.SetEvent(WE_LOADDATA, _OnProductLoadDataFnc);
	//m_wndProduct.SetEvent(WE_ADDNEW, _OnProductAddNewFnc);
	m_wndRefPriceType.SetEvent(WE_SELENDOK, _OnRefPriceTypeSelendokFnc);
	//m_wndRefPriceType.SetEvent(WE_SETFOCUS, _OnRefPriceTypeSetfocusFnc);
	//m_wndRefPriceType.SetEvent(WE_KILLFOCUS, _OnRefPriceTypeKillfocusFnc);
	m_wndRefPriceType.SetEvent(WE_SELCHANGE, _OnRefPriceTypeSelectChangeFnc);
	m_wndRefPriceType.SetEvent(WE_LOADDATA, _OnRefPriceTypeLoadDataFnc);
	//m_wndRefPriceType.SetEvent(WE_ADDNEW, _OnRefPriceTypeAddNewFnc);
	m_wndUnitPriceType.SetEvent(WE_SELENDOK, _OnUnitPriceTypeSelendokFnc);
	//m_wndUnitPriceType.SetEvent(WE_SETFOCUS, _OnUnitPriceTypeSetfocusFnc);
	//m_wndUnitPriceType.SetEvent(WE_KILLFOCUS, _OnUnitPriceTypeKillfocusFnc);
	m_wndUnitPriceType.SetEvent(WE_SELCHANGE, _OnUnitPriceTypeSelectChangeFnc);
	m_wndUnitPriceType.SetEvent(WE_LOADDATA, _OnUnitPriceTypeLoadDataFnc);
	//m_wndUnitPriceType.SetEvent(WE_ADDNEW, _OnUnitPriceTypeAddNewFnc);
	//m_wndRefPriceAdjust.SetEvent(WE_CHANGE, _OnRefPriceAdjustChangeFnc);
	//m_wndRefPriceAdjust.SetEvent(WE_SETFOCUS, _OnRefPriceAdjustSetfocusFnc);
	//m_wndRefPriceAdjust.SetEvent(WE_KILLFOCUS, _OnRefPriceAdjustKillfocusFnc);
	m_wndRefPriceAdjust.SetEvent(WE_CHECKVALUE, _OnRefPriceAdjustCheckValueFnc);
	//m_wndUnitPriceAdjust.SetEvent(WE_CHANGE, _OnUnitPriceAdjustChangeFnc);
	//m_wndUnitPriceAdjust.SetEvent(WE_SETFOCUS, _OnUnitPriceAdjustSetfocusFnc);
	//m_wndUnitPriceAdjust.SetEvent(WE_KILLFOCUS, _OnUnitPriceAdjustKillfocusFnc);
	m_wndUnitPriceAdjust.SetEvent(WE_CHECKVALUE, _OnUnitPriceAdjustCheckValueFnc);
	SetEditCtrl(0, &m_wndPartner);
	SetEditCtrl(1, &m_wndProductCategory);
	SetEditCtrl(2, &m_wndProduct);
	SetEditCtrl(3, &m_wndRefPriceType);
	SetEditCtrl(4, &m_wndRefPriceAdjust);
	SetEditCtrl(5, &m_wndUnitPriceType);
	SetEditCtrl(6, &m_wndUnitPriceAdjust);
	int nMode = GetMode();
	SetMode(nMode);
}
void CAdPriceSchemaInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPartner.GetDlgCtrlID(), m_szPartnerKey);
	DDX_TextEx(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_TextEx(pDX, m_wndRefPriceType.GetDlgCtrlID(), m_szRefPriceTypeKey);
	DDX_TextEx(pDX, m_wndUnitPriceType.GetDlgCtrlID(), m_szUnitPriceTypeKey);
	DDX_Text(pDX, m_wndRefPriceAdjust.GetDlgCtrlID(), m_szRefPriceAdjust);
	DDX_Text(pDX, m_wndUnitPriceAdjust.GetDlgCtrlID(), m_szUnitPriceAdjust);

}
void CAdPriceSchemaInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CGuiListCtrl* pList = (CGuiListCtrl*)GetParent();
	int nIndex = GetRowIndex();
	if (m_nEditMode == VM_EDIT)
	{
		m_szPartnerKey = pList->GetItemText(nIndex, 0);
		m_szProductCategoryKey = pList->GetItemText(nIndex, 1);
		m_szProductKey = pList->GetItemText(nIndex, 2);
		m_szRefPriceTypeKey = pList->GetItemText(nIndex, 3);
		m_szRefPriceAdjust = pList->GetItemText(nIndex, 4);
		m_szUnitPriceTypeKey = pList->GetItemText(nIndex, 5);
		m_szUnitPriceAdjust = pList->GetItemText(nIndex, 6);
	}
	SetMode(m_nEditMode);
}
void CAdPriceSchemaInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_nEditMode == VM_ADD)
	{
		CString szID;
		szID = pMF->ExecDML(_T("get_uuid()"));
		m_ad_price_schema_lineTbl.SetValue(_T("adpsl_price_schema_line_id"), szID);
		m_ad_price_schema_lineTbl.SetValue(_T("adpsl_createdby") ,pMF->GetCurrentUser());
		m_ad_price_schema_lineTbl.SetValue(_T("adpsl_createddate"), pMF->GetSysDateTime());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE adpsl_price_schema_line_id = '%s'"), m_szID);
		m_ad_price_schema_lineTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_updatedby"), pMF->GetCurrentUser());
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_updateddate"), pMF->GetSysDateTime());
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_price_schema_id"), m_szPriceSchemaID);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_business_partner_id"), m_szPartnerKey);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_product_category_id"), m_szProductCategoryKey);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_product_id"), m_szProductKey);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_ref_price_type"), m_szRefPriceTypeKey);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_unit_price_type"), m_szUnitPriceTypeKey);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_ref_price_adjust"), m_szRefPriceAdjust);
	m_ad_price_schema_lineTbl.SetValue(_T("adpsl_unit_price_adjust"), m_szUnitPriceAdjust);
}
void CAdPriceSchemaInput::SetDefaultValues(){

	m_szPartnerKey.Empty();
	m_szProductCategoryKey.Empty();
	m_szProductKey.Empty();
	m_szRefPriceTypeKey.Empty();
	m_szUnitPriceTypeKey.Empty();
	m_szRefPriceAdjust.Empty();
	m_szUnitPriceAdjust.Empty();

}
int CAdPriceSchemaInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
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
void CAdPriceSchemaInput::OnPartnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceSchemaInput::OnPartnerSelendok(){
	 
}
/*void CAdPriceSchemaInput::OnPartnerSetfocus(){
	
}*/
/*void CAdPriceSchemaInput::OnPartnerKillfocus(){
	
}*/
long CAdPriceSchemaInput::OnPartnerLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndPartner, m_szPartnerKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartner.IsSearchKey() && !m_szPartnerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPartnerKey
};
	m_wndPartner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdPriceSchemaInput::OnPartnerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceSchemaInput::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceSchemaInput::OnProductCategorySelendok(){
	 
}
/*void CAdPriceSchemaInput::OnProductCategorySetfocus(){
	
}*/
/*void CAdPriceSchemaInput::OnProductCategoryKillfocus(){
	
}*/
long CAdPriceSchemaInput::OnProductCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndProductCategory, m_szProductCategoryKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductCategory.IsSearchKey() && !m_szProductCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductCategoryKey
};
	m_wndProductCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdPriceSchemaInput::OnProductCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceSchemaInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceSchemaInput::OnProductSelendok(){
	 
}
/*void CAdPriceSchemaInput::OnProductSetfocus(){
	
}*/
/*void CAdPriceSchemaInput::OnProductKillfocus(){
	
}*/
long CAdPriceSchemaInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductList(&m_wndProduct, m_szProductKey);
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
/*void CAdPriceSchemaInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceSchemaInput::OnRefPriceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceSchemaInput::OnRefPriceTypeSelendok(){
	 
}
/*void CAdPriceSchemaInput::OnRefPriceTypeSetfocus(){
	
}*/
/*void CAdPriceSchemaInput::OnRefPriceTypeKillfocus(){
	
}*/
long CAdPriceSchemaInput::OnRefPriceTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndRefPriceType.AddItems(_T("0"), _T("Ref Price"));
	m_wndRefPriceType.AddItems(_T("1"), _T("Unit Price"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRefPriceType.IsSearchKey() && !m_szRefPriceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRefPriceTypeKey
};
	m_wndRefPriceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRefPriceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdPriceSchemaInput::OnRefPriceTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceSchemaInput::OnUnitPriceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceSchemaInput::OnUnitPriceTypeSelendok(){
	 
}
/*void CAdPriceSchemaInput::OnUnitPriceTypeSetfocus(){
	
}*/
/*void CAdPriceSchemaInput::OnUnitPriceTypeKillfocus(){
	
}*/
long CAdPriceSchemaInput::OnUnitPriceTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndUnitPriceType.AddItems(_T("0"), _T("Ref Price"));
	m_wndUnitPriceType.AddItems(_T("1"), _T("Unit Price"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnitPriceType.IsSearchKey() && !m_szUnitPriceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnitPriceTypeKey
};
	m_wndUnitPriceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnitPriceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdPriceSchemaInput::OnUnitPriceTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdPriceSchemaInput::OnRefPriceAdjustChange(){
	
} */
/*void CAdPriceSchemaInput::OnRefPriceAdjustSetfocus(){
	
} */
/*void CAdPriceSchemaInput::OnRefPriceAdjustKillfocus(){
	
} */
int CAdPriceSchemaInput::OnRefPriceAdjustCheckValue(){
	return 0;
} 
/*void CAdPriceSchemaInput::OnUnitPriceAdjustChange(){
	
} */
/*void CAdPriceSchemaInput::OnUnitPriceAdjustSetfocus(){
	
} */
/*void CAdPriceSchemaInput::OnUnitPriceAdjustKillfocus(){
	
} */
int CAdPriceSchemaInput::OnUnitPriceAdjustCheckValue(){
	return 0;
} 
int CAdPriceSchemaInput::OnAddAdPriceSchemaInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceSchemaInput::OnEditAdPriceSchemaInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceSchemaInput::OnDeleteAdPriceSchemaInput(){
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
 		OnCancelAdPriceSchemaInput();
 	}
	return 0;
}

int CAdPriceSchemaInput::OnSaveAdPriceSchemaInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_price_schema_lineTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpsl_price_schema_line_id = '%s'"), m_szID);
 		szSQL = m_ad_price_schema_lineTbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 _msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		((CAdPriceSchemaLine*)GetParent()->GetParent())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceSchemaInput::OnCancelAdPriceSchemaInput(){
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
int CAdPriceSchemaInput::OnAdPriceSchemaInputListLoadData(){
	return 0;
}

int CAdPriceSchemaInput::OnOK(){
	return OnSaveAdPriceSchemaInput();

}