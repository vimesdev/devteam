#include "AdProductPopup.h"
#include "MainFrame_E10.h"
#include "AdProduct.h"
/*static void _OnProductIDChangeFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductIDChange();
} */
/*static void _OnProductIDSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductIDSetfocus();} */ 
/*static void _OnProductIDKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductIDKillfocus();
} */
static int _OnProductIDCheckValueFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnProductIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductPopup*)pWnd)->OnActiveSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnNameCheckValue();
} 
static void _OnBusinessPartnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductPopup* )pWnd)->OnBusinessPartnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBusinessPartnerSelendokFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnBusinessPartnerSelendok();
}
/*static void _OnBusinessPartnerSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnBusinessPartnerKillfocus();
}*/
/*static void _OnBusinessPartnerKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnBusinessPartnerKillfocus();
}*/
static long _OnBusinessPartnerLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnBusinessPartnerLoadData();
}
/*static void _OnBusinessPartnerAddNewFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnBusinessPartnerAddNew();
}*/
static void _OnProductTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductPopup* )pWnd)->OnProductTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductTypeSelendokFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductTypeSelendok();
}
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductTypeKillfocus();
}*/
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductTypeKillfocus();
}*/
static long _OnProductTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnProductTypeLoadData();
}
/*static void _OnProductTypeAddNewFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductTypeAddNew();
}*/
static void _OnProductCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductPopup* )pWnd)->OnProductCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCategorySelendokFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductCategorySelendok();
}
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductCategoryKillfocus();
}*/
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductCategoryKillfocus();
}*/
static long _OnProductCategoryLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnProductCategoryLoadData();
}
/*static void _OnProductCategoryAddNewFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnProductCategoryAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductPopup* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPopup *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CAdProductPopup *)pWnd)->OnUnitAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdProductPopup *pVw = (CAdProductPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdProductPopupFnc(CWnd *pWnd){
	 return ((CAdProductPopup*)pWnd)->OnAddAdProductPopup();
} 
static int _OnEditAdProductPopupFnc(CWnd *pWnd){
	 return ((CAdProductPopup*)pWnd)->OnEditAdProductPopup();
} 
static int _OnDeleteAdProductPopupFnc(CWnd *pWnd){
	 return ((CAdProductPopup*)pWnd)->OnDeleteAdProductPopup();
} 
static int _OnSaveAdProductPopupFnc(CWnd *pWnd){
	 return ((CAdProductPopup*)pWnd)->OnSaveAdProductPopup();
} 
static int _OnCancelAdProductPopupFnc(CWnd *pWnd){
	 return ((CAdProductPopup*)pWnd)->OnCancelAdProductPopup();
} 
CAdProductPopup::CAdProductPopup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CAdProductPopup::~CAdProductPopup(){
}
void CAdProductPopup::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Product Information"), 5, 5, 795, 150);
	m_wndProductTypeLabel.Create(this, _T("Product Type"), 10, 30, 115, 55);
	m_wndProductType.Create(this,120, 30, 395, 55); 
	m_wndProductCategoryLabel.Create(this, _T("Product Category"), 400, 30, 505, 55);
	m_wndProductCategory.Create(this,510, 30, 790, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 115, 85);
	m_wndName.Create(this,120, 60, 395, 85); 
	m_wndProductIDLabel.Create(this, _T("Product ID"), 400, 60, 505, 85);
	m_wndProductID.Create(this,510, 60, 640, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 645, 60, 695, 85);
	m_wndUnit.Create(this,700, 60, 790, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 115, 115);
	m_wndDescription.Create(this,120, 90, 790, 115); 
	m_wndBusinessPartnerLabel.Create(this, _T("Business Partner"), 10, 120, 115, 145);
	m_wndBusinessPartner.Create(this,120, 120, 395, 145); 
	m_wndActive.Create(this, _T("Active"), 5, 155, 110, 180);
	m_wndSave.Create(this, _T("&Save"), 715, 155, 795, 180);

}
void CAdProductPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductID.SetLimitText(32);
	m_wndProductID.SetCheckValue(true);
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	//m_wndBusinessPartner.SetCheckValue(true);
	m_wndBusinessPartner.LimitText(32);
	m_wndProductType.SetCheckValue(true);
	m_wndProductType.LimitText(32);
	m_wndProductCategory.SetCheckValue(true);
	m_wndProductCategory.LimitText(32);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetInitCap(2);
	//m_wndDescription.SetCheckValue(true);
	//m_wndUnit.SetCheckValue(true);
	m_wndUnit.LimitText(32);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);


	m_wndProductType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProductType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProductCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProductCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	
	m_wndBusinessPartner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndBusinessPartner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUnit.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ad_productTbl.SetTableName(_T("ad_product"));
	m_ad_productTbl.AddField(_T("adp_product_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_client_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_org_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_user_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_createdby"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_createddate"), dfDateTime); 
	m_ad_productTbl.AddField(_T("adp_updatedby"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_updateddate"), dfDateTime); 
	m_ad_productTbl.AddField(_T("adp_isactive"), dfText, 1); 
	m_ad_productTbl.AddField(_T("adp_name"), dfText, 65); 
	m_ad_productTbl.AddField(_T("adp_product_type_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_product_category_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_uom_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_image_id"), dfText, 254); 
	m_ad_productTbl.AddField(_T("adp_description"), dfText, 254); 
	m_ad_productTbl.AddField(_T("adp_gurantee_days"), dfLong); 
	m_ad_productTbl.AddField(_T("adp_business_partner_id"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_safe_stock"), dfLong); 
	m_ad_productTbl.AddField(_T("adp_price"), dfDouble); 

}

void CAdProductPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndProductID.SetEvent(WE_CHANGE, _OnProductIDChangeFnc);
	//m_wndProductID.SetEvent(WE_SETFOCUS, _OnProductIDSetfocusFnc);
	//m_wndProductID.SetEvent(WE_KILLFOCUS, _OnProductIDKillfocusFnc);
	m_wndProductID.SetEvent(WE_CHECKVALUE, _OnProductIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndBusinessPartner.SetEvent(WE_SELENDOK, _OnBusinessPartnerSelendokFnc);
	//m_wndBusinessPartner.SetEvent(WE_SETFOCUS, _OnBusinessPartnerSetfocusFnc);
	//m_wndBusinessPartner.SetEvent(WE_KILLFOCUS, _OnBusinessPartnerKillfocusFnc);
	m_wndBusinessPartner.SetEvent(WE_SELCHANGE, _OnBusinessPartnerSelectChangeFnc);
	m_wndBusinessPartner.SetEvent(WE_LOADDATA, _OnBusinessPartnerLoadDataFnc);
	//m_wndBusinessPartner.SetEvent(WE_ADDNEW, _OnBusinessPartnerAddNewFnc);
	m_wndProductType.SetEvent(WE_SELENDOK, _OnProductTypeSelendokFnc);
	//m_wndProductType.SetEvent(WE_SETFOCUS, _OnProductTypeSetfocusFnc);
	//m_wndProductType.SetEvent(WE_KILLFOCUS, _OnProductTypeKillfocusFnc);
	m_wndProductType.SetEvent(WE_SELCHANGE, _OnProductTypeSelectChangeFnc);
	m_wndProductType.SetEvent(WE_LOADDATA, _OnProductTypeLoadDataFnc);
	//m_wndProductType.SetEvent(WE_ADDNEW, _OnProductTypeAddNewFnc);
	m_wndProductCategory.SetEvent(WE_SELENDOK, _OnProductCategorySelendokFnc);
	//m_wndProductCategory.SetEvent(WE_SETFOCUS, _OnProductCategorySetfocusFnc);
	//m_wndProductCategory.SetEvent(WE_KILLFOCUS, _OnProductCategoryKillfocusFnc);
	m_wndProductCategory.SetEvent(WE_SELCHANGE, _OnProductCategorySelectChangeFnc);
	m_wndProductCategory.SetEvent(WE_LOADDATA, _OnProductCategoryLoadDataFnc);
	//m_wndProductCategory.SetEvent(WE_ADDNEW, _OnProductCategoryAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdProductPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProductID.GetDlgCtrlID(), m_szProductID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBusinessPartner.GetDlgCtrlID(), m_szBusinessPartnerKey);
	DDX_TextEx(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductTypeKey);
	DDX_TextEx(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);

}
void CAdProductPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_product WHERE adp_product_id = '%s'"), m_szProductID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString szActive;
		rs.GetValue(_T("adp_product_id"), m_szProductID);
		rs.GetValue(_T("adp_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
		rs.GetValue(_T("adp_name"), m_szName);
		rs.GetValue(_T("adp_product_type_id"), m_szProductTypeKey);
		rs.GetValue(_T("adp_product_category_id"), m_szProductCategoryKey);
		rs.GetValue(_T("adp_uom_id"), m_szUnitKey);
		rs.GetValue(_T("adp_description"), m_szDescription);
		rs.GetValue(_T("adp_business_partner_id"), m_szBusinessPartnerKey);
		UpdateData(false);
	}

}

void CAdProductPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_productTbl.SetValue(_T("adp_createdby"), pMF->GetCurrentUser());
	m_ad_productTbl.SetValue(_T("adp_createddate"), pMF->GetSysDateTime());
	if (GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE adp_product_id = '%s'"), m_szProductID);
		m_ad_productTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_productTbl.SetValue(_T("adp_product_id"), m_szProductID);
	m_ad_productTbl.SetValue(_T("adp_updatedby"), pMF->GetCurrentUser());
	m_ad_productTbl.SetValue(_T("adp_updateddate"), pMF->GetSysDateTime());
	m_ad_productTbl.SetValue(_T("adp_isactive"), m_bActive?_T("Y"):_T("N"));
	m_ad_productTbl.SetValue(_T("adp_name"), m_szName);
	m_ad_productTbl.SetValue(_T("adp_product_type_id"), m_szProductTypeKey);
	m_ad_productTbl.SetValue(_T("adp_product_category_id"), m_szProductCategoryKey);
	m_ad_productTbl.SetValue(_T("adp_uom_id"), m_szUnitKey);
	m_ad_productTbl.SetValue(_T("adp_description"), m_szDescription);
	m_ad_productTbl.SetValue(_T("adp_business_partner_id"), m_szBusinessPartnerKey);

}

void CAdProductPopup::SetDefaultValues(){

	m_szProductID.Empty();
	m_bActive=TRUE;
	m_szName.Empty();
	m_szBusinessPartnerKey.Empty();
	//m_szProductTypeKey.Empty();
	//m_szProductCategoryKey.Empty();
	m_szDescription.Empty();
	m_szUnitKey.Empty();

}

int CAdProductPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndProductType.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndProductID.EnableWindow(false);
			m_wndName.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode;
}

/*void CAdProductPopup::OnProductIDChange(){
	
} */
/*void CAdProductPopup::OnProductIDSetfocus(){
	
} */
/*void CAdProductPopup::OnProductIDKillfocus(){
	
} */
int CAdProductPopup::OnProductIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_product WHERE adp_product_id = '%s' "), m_szProductID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndProductID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
void CAdProductPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

/*void CAdProductPopup::OnNameChange(){
	
} */
/*void CAdProductPopup::OnNameSetfocus(){
	
} */
/*void CAdProductPopup::OnNameKillfocus(){
	
} */
int CAdProductPopup::OnNameCheckValue(){
	return 0;
}
 
void CAdProductPopup::OnBusinessPartnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductPopup::OnBusinessPartnerSelendok(){
	 
}

/*void CAdProductPopup::OnBusinessPartnerSetfocus(){
	
}*/
/*void CAdProductPopup::OnBusinessPartnerKillfocus(){
	
}*/
long CAdProductPopup::OnBusinessPartnerLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	//szFilter.Format(_T(" AND adp_partner_type_id = 'NCC'"));
	return pMF->LoadPartnerList(&m_wndBusinessPartner, m_szBusinessPartnerKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBusinessPartner.IsSearchKey() && !m_szBusinessPartnerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBusinessPartnerKey
};
	m_wndBusinessPartner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBusinessPartner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdProductPopup::OnBusinessPartnerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductPopup::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductPopup::OnProductTypeSelendok(){
	 
}

/*void CAdProductPopup::OnProductTypeSetfocus(){
	
}*/
/*void CAdProductPopup::OnProductTypeKillfocus(){
	
}*/
long CAdProductPopup::OnProductTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStringArray arrType;
	m_wndProductType.AddItems(_T("E"), _T("Expense Type"));
	m_wndProductType.AddItems(_T("I"), _T("Item"));
	m_wndProductType.AddItems(_T("O"), _T("Online"));
	m_wndProductType.AddItems(_T("R"), _T("Resource"));
	m_wndProductType.AddItems(_T("S"), _T("Service"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductType.IsSearchKey() && !m_szProductTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductTypeKey
};
	m_wndProductType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdProductPopup::OnProductTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductPopup::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductPopup::OnProductCategorySelendok(){
	 
}

/*void CAdProductPopup::OnProductCategorySetfocus(){
	
}*/
/*void CAdProductPopup::OnProductCategoryKillfocus(){
	
}*/
long CAdProductPopup::OnProductCategoryLoadData(){
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

/*void CAdProductPopup::OnProductCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdProductPopup::OnDescriptionChange(){
	
} */
/*void CAdProductPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdProductPopup::OnDescriptionKillfocus(){
	
} */
int CAdProductPopup::OnDescriptionCheckValue(){
	return 0;
}
 
void CAdProductPopup::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductPopup::OnUnitSelendok(){
	 
}

/*void CAdProductPopup::OnUnitSetfocus(){
	
}*/
/*void CAdProductPopup::OnUnitKillfocus(){
	
}*/
long CAdProductPopup::OnUnitLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUOMList(&m_wndUnit, m_szUnitKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnit.IsSearchKey() && !m_szUnitKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnitKey
};
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdProductPopup::OnUnitAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdProductPopup();
}
 
int CAdProductPopup::OnAddAdProductPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdProductPopup::OnEditAdProductPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProductPopup::OnDeleteAdProductPopup(){
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
 		OnCancelAdProductPopup();
 	}
	return 0;
}

int CAdProductPopup::OnSaveAdProductPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_productTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE adp_product_id = '%s'"), m_szProductID);
 		szSQL = m_ad_productTbl.GetUpdateSQL(_T("adp_createdby,adp_createddate, adp_product_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_ADD)
 			SetMode(VM_ADD);
		else
			ClosePopup();
		((CAdProduct*)GetParentWnd())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdProductPopup::OnCancelAdProductPopup(){
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
 
int CAdProductPopup::OnAdProductPopupListLoadData(){
	return 0;
}

void CAdProductPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdProduct*)GetParentWnd())->SetMode(m_nMode);
}