#include "AdProductDialog.h"
#include "MainFrame_E10.h"
#include "AdProduct.h"
/*static void _OnProductIDChangeFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductIDChange();
} */
/*static void _OnProductIDSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductIDSetfocus();} */ 
/*static void _OnProductIDKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductIDKillfocus();
} */
static int _OnProductIDCheckValueFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnProductIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductDialog*)pWnd)->OnActiveSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnBusinessPartnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductDialog* )pWnd)->OnBusinessPartnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBusinessPartnerSelendokFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnBusinessPartnerSelendok();
}
/*static void _OnBusinessPartnerSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnBusinessPartnerKillfocus();
}*/
/*static void _OnBusinessPartnerKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnBusinessPartnerKillfocus();
}*/
static long _OnBusinessPartnerLoadDataFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnBusinessPartnerLoadData();
}
/*static void _OnBusinessPartnerAddNewFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnBusinessPartnerAddNew();
}*/
static void _OnProductTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductDialog* )pWnd)->OnProductTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductTypeSelendokFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductTypeSelendok();
}
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductTypeKillfocus();
}*/
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductTypeKillfocus();
}*/
static long _OnProductTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnProductTypeLoadData();
}
/*static void _OnProductTypeAddNewFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductTypeAddNew();
}*/
static void _OnProductCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductDialog* )pWnd)->OnProductCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCategorySelendokFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductCategorySelendok();
}
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductCategoryKillfocus();
}*/
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductCategoryKillfocus();
}*/
static long _OnProductCategoryLoadDataFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnProductCategoryLoadData();
}
/*static void _OnProductCategoryAddNewFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnProductCategoryAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductDialog* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CAdProductDialog *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CAdProductDialog *)pWnd)->OnUnitAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdProductDialog *pVw = (CAdProductDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAdProductDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddAdProductDialogFnc(CWnd *pWnd){
	 return ((CAdProductDialog*)pWnd)->OnAddAdProductDialog();
} 
static int _OnEditAdProductDialogFnc(CWnd *pWnd){
	 return ((CAdProductDialog*)pWnd)->OnEditAdProductDialog();
} 
static int _OnDeleteAdProductDialogFnc(CWnd *pWnd){
	 return ((CAdProductDialog*)pWnd)->OnDeleteAdProductDialog();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdProductDialog *pVw = (CAdProductDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdProductDialog *pVw = (CAdProductDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdProductDialog *pVw = (CAdProductDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdProductDialog *pVw = (CAdProductDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnCancelAdProductDialogFnc(CWnd *pWnd){
	 return ((CAdProductDialog*)pWnd)->OnCancelAdProductDialog();
} 
CAdProductDialog::CAdProductDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 810;
	m_nDlgHeight = 565;
	SetDefaultValues();
}
CAdProductDialog::~CAdProductDialog(){
}
void CAdProductDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Product Information"), 5, 5, 805, 560);
	m_wndProductTypeLabel.Create(this, _T("Product Type"), 10, 30, 115, 55);
	m_wndProductType.Create(this,120, 30, 395, 55); 
	m_wndProductCategoryLabel.Create(this, _T("Product Category"), 400, 30, 505, 55);
	m_wndProductCategory.Create(this,510, 30, 800, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 115, 85);
	m_wndName.Create(this,120, 60, 395, 85); 
	m_wndProductIDLabel.Create(this, _T("Product ID"), 400, 60, 505, 85);
	m_wndProductID.Create(this,510, 60, 640, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 645, 60, 695, 85);
	m_wndUnit.Create(this,700, 60, 800, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 115, 115);
	m_wndDescription.Create(this,120, 90, 800, 115); 
	m_wndBusinessPartnerLabel.Create(this, _T("Business Partner"), 10, 120, 115, 145);
	m_wndBusinessPartner.Create(this,120, 120, 395, 145); 
	m_wndTab.Create(this,10, 150, 800, 530); 
	m_wndActive.Create(this, _T("Active"), 10, 535, 115, 560);
	m_wndAdd.Create(this, _T("&Add"), 380, 535, 460, 560);
	m_wndEdit.Create(this, _T("&Edit"), 465, 535, 545, 560);
	m_wndDelete.Create(this, _T("&Delete"), 550, 535, 630, 560);
	m_wndSave.Create(this, _T("&Save"), 635, 535, 715, 560);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 535, 800, 560);
	CreateTabViews();
}
void CAdProductDialog::OnInitializeComponents(){
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
	//m_ad_productTbl.AddField(_T("adp_material_expense"), dfText, 32); 
	//m_ad_productTbl.AddField(_T("adp_labor_expense"), dfText, 32); 
	//m_ad_productTbl.AddField(_T("adp_prepaid_expense"), dfText, 32); 
	//m_ad_productTbl.AddField(_T("adp_payable_expense"), dfText, 32); 
	//m_ad_productTbl.AddField(_T("adp_general_expense"), dfText, 32); 
	//m_ad_productTbl.AddField(_T("adp_unfinished_expense"), dfText, 32); 
}

void CAdProductDialog::OnSetWindowEvents(){
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

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	int nMode = GetMode();
	if (nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();
		m_wndPrice.m_szID = m_szProductID;
		m_wndPrice.OnListLoadData();
		m_wndAccount.m_szID = m_szProductID;
		m_wndAccount.GetDataToScreen();
	}
	SetMode(nMode);
}
void CAdProductDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProductID.GetDlgCtrlID(), m_szProductID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBusinessPartner.GetDlgCtrlID(), m_szBusinessPartnerKey);
	DDX_TextEx(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductTypeKey);
	DDX_TextEx(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategoryKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);

}
void CAdProductDialog::GetDataToScreen(){
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

void CAdProductDialog::GetScreenToData(){
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

void CAdProductDialog::SetDefaultValues(){

	m_szProductID.Empty();
	m_bActive=TRUE;
	m_szName.Empty();
	m_szBusinessPartnerKey.Empty();
	//m_szProductTypeKey.Empty();
	//m_szProductCategoryKey.Empty();
	m_szDescription.Empty();
	m_szUnitKey.Empty();

}

int CAdProductDialog::SetMode(int nMode){
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
			m_wndProductType.SetFocus();
			m_wndDetail.SetMode(VM_ADD);
			m_wndPrice.SetMode(VM_ADD);
			m_wndAccount.SetMode(VM_ADD);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndProductType.SetFocus();
			m_wndProductID.EnableWindow(FALSE);
			m_wndDetail.SetMode(VM_EDIT);
			m_wndPrice.SetMode(VM_EDIT);
			m_wndAccount.SetMode(VM_EDIT);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndDetail.SetMode(VM_VIEW);
			m_wndPrice.SetMode(VM_VIEW);
			m_wndAccount.SetMode(VM_VIEW);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			m_wndDetail.SetMode(VM_NONE);
			m_wndPrice.SetMode(VM_NONE);
			m_wndAccount.SetMode(VM_NONE);
 			break;
		}
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CAdProductDialog::OnProductIDChange(){
	
} */
/*void CAdProductDialog::OnProductIDSetfocus(){
	
} */
/*void CAdProductDialog::OnProductIDKillfocus(){
	
} */
int CAdProductDialog::OnProductIDCheckValue(){
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
 
	void CAdProductDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

/*void CAdProductDialog::OnNameChange(){
	
} */
/*void CAdProductDialog::OnNameSetfocus(){
	
} */
/*void CAdProductDialog::OnNameKillfocus(){
	
} */
int CAdProductDialog::OnNameCheckValue(){
	return 0;
}
 
void CAdProductDialog::OnBusinessPartnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductDialog::OnBusinessPartnerSelendok(){
	 
}

/*void CAdProductDialog::OnBusinessPartnerSetfocus(){
	
}*/
/*void CAdProductDialog::OnBusinessPartnerKillfocus(){
	
}*/
long CAdProductDialog::OnBusinessPartnerLoadData(){
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

/*void CAdProductDialog::OnBusinessPartnerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductDialog::OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductDialog::OnProductTypeSelendok(){
	 
}

/*void CAdProductDialog::OnProductTypeSetfocus(){
	
}*/
/*void CAdProductDialog::OnProductTypeKillfocus(){
	
}*/
long CAdProductDialog::OnProductTypeLoadData(){
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

/*void CAdProductDialog::OnProductTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductDialog::OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductDialog::OnProductCategorySelendok(){
	 
}

/*void CAdProductDialog::OnProductCategorySetfocus(){
	
}*/
/*void CAdProductDialog::OnProductCategoryKillfocus(){
	
}*/
long CAdProductDialog::OnProductCategoryLoadData(){
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

/*void CAdProductDialog::OnProductCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdProductDialog::OnDescriptionChange(){
	
} */
/*void CAdProductDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdProductDialog::OnDescriptionKillfocus(){
	
} */
int CAdProductDialog::OnDescriptionCheckValue(){
	return 0;
}
 
void CAdProductDialog::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdProductDialog::OnUnitSelendok(){
	 
}

/*void CAdProductDialog::OnUnitSetfocus(){
	
}*/
/*void CAdProductDialog::OnUnitKillfocus(){
	
}*/
long CAdProductDialog::OnUnitLoadData(){
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

/*void CAdProductDialog::OnUnitAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_ADD);
} 
void CAdProductDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdProductDialog();
} 
void CAdProductDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdProductDialog();
} 
void CAdProductDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelAdProductDialog();
} 
 
void CAdProductDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdProductDialog::OnAddAdProductDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdProductDialog::OnEditAdProductDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProductDialog::OnDeleteAdProductDialog(){
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
 		OnCancelAdProductDialog();
 	}
	return 0;
}

int CAdProductDialog::OnSaveAdProductDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if (!m_wndAccount.IsValidateData())
	{
		m_wndTab.SetCurSel(2);
		return -1;
	}
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
		m_wndAccount.m_szID = m_szProductID;
		if (m_wndAccount.OnSaveAdProductAccount() > 0)
		{
			SetMode(VM_VIEW);
			m_wndAccount.SetMode(VM_VIEW);
		}
		((CAdProduct*)m_pWnd)->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
}

int CAdProductDialog::OnCancelAdProductDialog(){
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
 
int CAdProductDialog::OnAdProductDialogListLoadData(){
	return 0;
}
void CAdProductDialog::CreateTabViews(){
	m_wndTab.SetItemSize(CSize(30, 30));
	m_wndTab.SetPadding(CSize(50, 30));
	m_wndDetail.Create(&m_wndTab);
	m_wndDetail.OnInitDialog();
	m_wndTab.Add(_T("Detail"), &m_wndDetail);
	m_wndPrice.Create(&m_wndTab);
	m_wndPrice.OnInitDialog();
	m_wndTab.Add(_T("Price"), &m_wndPrice);
	m_wndAccount.Create(&m_wndTab);
	m_wndAccount.OnInitDialog();
	m_wndTab.Add(_T("Account"), &m_wndAccount);
	m_wndCostRule.Create(&m_wndTab);
	m_wndCostRule.OnInitDialog();
	m_wndTab.Add(_T("Costing Rule"), &m_wndCostRule);
	m_wndTab.SetCurSel(1);
}
