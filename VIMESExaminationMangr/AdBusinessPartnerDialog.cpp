#include "AdBusinessPartnerDialog.h"
#include "MainFrm.h"

int	LoadBankList(CWnd* pWnd, CString szKey, CString szFilter=_T("")){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and adb_bank_id='%s' "), szKey);
	};
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adb_bank_id as id, adb_name as name FROM ad_bank WHERE adb_isactive='Y' %s %s ORDER BY adb_bank_id "), szWhere, szFilter);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}



static void _OnPartnerTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDialog* )pWnd)->OnPartnerTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerTypeSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerTypeSelendok();
}
/*static void _OnPartnerTypeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerTypeKillfocus();
}*/
/*static void _OnPartnerTypeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerTypeKillfocus();
}*/
static long _OnPartnerTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnPartnerTypeLoadData();
}
/*static void _OnPartnerTypeAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerTypeAddNew();
}*/
static void _OnPartnerCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDialog* )pWnd)->OnPartnerCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerCategorySelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerCategorySelendok();
}
/*static void _OnPartnerCategorySetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerCategoryKillfocus();
}*/
/*static void _OnPartnerCategoryKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerCategoryKillfocus();
}*/
static long _OnPartnerCategoryLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnPartnerCategoryLoadData();
}
/*static void _OnPartnerCategoryAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerCategoryAddNew();
}*/
/*static void _OnPartnerIDChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerIDChange();
} */
/*static void _OnPartnerIDSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerIDSetfocus();} */ 
/*static void _OnPartnerIDKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnPartnerIDKillfocus();
} */
static int _OnPartnerIDCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnPartnerIDCheckValue();
} 
/*static void _OnVATRegistrationNumberChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnVATRegistrationNumberChange();
} */
/*static void _OnVATRegistrationNumberSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnVATRegistrationNumberSetfocus();} */ 
/*static void _OnVATRegistrationNumberKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnVATRegistrationNumberKillfocus();
} */
static int _OnVATRegistrationNumberCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnVATRegistrationNumberCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnTelephoneChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnTelephoneChange();
} */
/*static void _OnTelephoneSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnTelephoneSetfocus();} */ 
/*static void _OnTelephoneKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnTelephoneKillfocus();
} */
static int _OnTelephoneCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnTelephoneCheckValue();
} 
/*static void _OnFaxChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFaxChange();
} */
/*static void _OnFaxSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFaxSetfocus();} */ 
/*static void _OnFaxKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFaxKillfocus();
} */
static int _OnFaxCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnFaxCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnEmailCheckValue();
} 
/*static void _OnWebsiteChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnWebsiteChange();
} */
/*static void _OnWebsiteSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnWebsiteSetfocus();} */ 
/*static void _OnWebsiteKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnWebsiteCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnAccountNumberChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountNumberChange();
} */
/*static void _OnAccountNumberSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountNumberSetfocus();} */ 
/*static void _OnAccountNumberKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountNumberKillfocus();
} */
static int _OnAccountNumberCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnAccountNumberCheckValue();
} 
static void _OnBankNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDialog* )pWnd)->OnBankNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankNameSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBankNameSelendok();
}
/*static void _OnBankNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBankNameKillfocus();
}*/
/*static void _OnBankNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBankNameKillfocus();
}*/
static long _OnBankNameLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnBankNameLoadData();
}
/*static void _OnBankNameAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBankNameAddNew();
}*/
/*static void _OnBranchChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBranchChange();
} */
/*static void _OnBranchSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBranchSetfocus();} */ 
/*static void _OnBranchKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnBranchKillfocus();
} */
static int _OnBranchCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnBranchCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CAdBusinessPartnerDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerDialog *pVw = (CAdBusinessPartnerDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerDialog *pVw = (CAdBusinessPartnerDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdBusinessPartnerDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDialog*)pWnd)->OnAddAdBusinessPartnerDialog();
} 
static int _OnEditAdBusinessPartnerDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDialog*)pWnd)->OnEditAdBusinessPartnerDialog();
} 
static int _OnDeleteAdBusinessPartnerDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDialog*)pWnd)->OnDeleteAdBusinessPartnerDialog();
} 
static int _OnSaveAdBusinessPartnerDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDialog*)pWnd)->OnSaveAdBusinessPartnerDialog();
} 
static int _OnCancelAdBusinessPartnerDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDialog*)pWnd)->OnCancelAdBusinessPartnerDialog();
} 
CAdBusinessPartnerDialog::CAdBusinessPartnerDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 365;
	SetDefaultValues();
}
CAdBusinessPartnerDialog::~CAdBusinessPartnerDialog(){
}
void CAdBusinessPartnerDialog::OnCreateComponents(){
	m_wndPartnerTypeLabel.Create(this, _T("Type"), 10, 30, 115, 55);
	m_wndPartnerType.Create(this,120, 30, 360, 55); 
	if (m_szPartnerTypeKey == _T("CT"))
		m_wndBusinessPartnerInformation.Create(this, _T("Customer Information"), 5, 5, 800, 240);
	else
		m_wndBusinessPartnerInformation.Create(this, _T("Business Partner Information"), 5, 5, 800, 240);
	m_wndBankAccountInformation.Create(this, _T("Bank Account Information"), 5, 245, 800, 360);
	m_wndPartnerCategoryLabel.Create(this, _T("Category"), 365, 30, 500, 55);
	m_wndPartnerCategory.Create(this,505, 30, 795, 55); 
	m_wndPartnerIDLabel.Create(this, _T("ID"), 10, 60, 115, 85);
	m_wndPartnerID.Create(this,120, 60, 360, 85); 
	m_wndVATRegistrationNumberLabel.Create(this, _T("VAT Reg"), 365, 60, 500, 85);
	m_wndVATRegistrationNumber.Create(this,505, 60, 795, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 115, 115);
	m_wndName.Create(this,120, 90, 360, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 365, 90, 500, 115);
	m_wndAddress.Create(this,505, 90, 795, 115); 
	m_wndTelephoneLabel.Create(this, _T("Telephone"), 10, 120, 115, 145);
	m_wndTelephone.Create(this,120, 120, 360, 145); 
	m_wndFaxLabel.Create(this, _T("Fax"), 365, 120, 500, 145);
	m_wndFax.Create(this,505, 120, 795, 145); 
	m_wndEmailLabel.Create(this, _T("Email"), 10, 150, 115, 175);
	m_wndEmail.Create(this,120, 150, 360, 175); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 365, 150, 500, 175);
	m_wndWebsite.Create(this,505, 150, 795, 175); 
	m_wndFinancialCodeLabel.Create(this, _T("Financial Code"), 10, 180, 115, 205);
	m_wndFinancialCode.Create(this,120, 180, 360, 205); 
	m_wndFinancialCode2Label.Create(this, _T("Financial Code 2"), 365, 180, 500, 205);
	m_wndFinancialCode2.Create(this,505, 180, 795, 205);  
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 210, 115, 235);
	m_wndDescription.Create(this,120, 210, 795, 235); 
	m_wndAccountNumberLabel.Create(this, _T("Account Number"), 10, 270, 115, 295);
	m_wndAccountNumber.Create(this,120, 270, 360, 295); 
	m_wndBankNameLabel.Create(this, _T("Bank Name"), 365, 270, 500, 295);
	m_wndBankName.Create(this,505, 270, 795, 295); 
	m_wndBranchLabel.Create(this, _T("Branch"), 10, 300, 115, 325);
	m_wndBranch.Create(this,120, 300, 360, 325); 
	m_wndContractNoLabel.Create(this, _T("Contract No"), 365, 300, 500, 325);
	m_wndContractNo.Create(this,505, 300, 795, 325); 
	m_wndCitasCodeLabel.Create(this, _T("Citas Code"), 9, 330, 114, 355);
	m_wndCitasCode.Create(this,119, 330, 359, 355); 
	m_wndAccountHolderLabel.Create(this, _T("Account Holder"), 365, 330, 500, 355);
	m_wndAccountHolder.Create(this,505, 330, 795, 355); 
	m_wndIsActive.Create(this, _T("Is Active"), 10, 365, 115, 390);
	m_wndSave.Create(this, _T("&Save"), 614, 365, 704, 390);
	m_wndClose.Create(this, _T("&Close"), 709, 365, 799, 390);

}
void CAdBusinessPartnerDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPartnerType.SetCheckValue(true);
	m_wndPartnerType.SetReadOnly(true);
	m_wndPartnerType.LimitText(35);
	m_wndPartnerID.SetLimitText(32);
	m_wndPartnerID.SetCheckValue(true);
	m_wndPartnerID.ModifyStyle(0, ES_UPPERCASE);
//	m_wndPartnerCategory.LimitText(32);
	m_wndName.SetLimitText(255);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	m_wndVATRegistrationNumber.SetLimitText(15);
//	m_wndVATRegistrationNumber.SetCheckValue(true);

	m_wndAddress.SetLimitText(255);
	m_wndTelephone.SetLimitText(15);
//	m_wndTelephone.SetCheckValue(true);
	m_wndFax.SetLimitText(15);
	m_wndEmail.SetLimitText(128);
	m_wndWebsite.SetLimitText(255);
	m_wndDescription.SetLimitText(255);
	m_wndAccountNumber.SetLimitText(20);
	m_wndBranch.SetLimitText(255);
	m_wndCitasCode.SetLimitText(20);
	m_wndFinancialCode.SetLimitText(20);
	m_wndFinancialCode2.SetLimitText(20);
	m_wndContractNo.SetLimitText(81);

	m_wndIsActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndPartnerType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPartnerType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndPartnerCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPartnerCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndBankName.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndBankName.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);
	
	m_ad_partnerTbl.SetTableName(_T("ad_partner"));
	m_ad_partnerTbl.AddField(_T("adp_partner_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_client_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_org_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_user_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_createdby"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_createddate"), dfDateTime); 
	m_ad_partnerTbl.AddField(_T("adp_updatedby"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_updateddate"), dfDateTime); 
	m_ad_partnerTbl.AddField(_T("adp_isactive"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_partner_type_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_partner_category_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_bank_id"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_payment_terms_id"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_name"), dfText, 255); 
	m_ad_partnerTbl.AddField(_T("adp_ispersonal"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_issupplier"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_iscustomer"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_isemployee"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_provill_id"), dfDouble); 
	m_ad_partnerTbl.AddField(_T("adp_district_id"), dfDouble); 
	m_ad_partnerTbl.AddField(_T("adp_village_id"), dfDouble);
	m_ad_partnerTbl.AddField(_T("adp_address"), dfText, 255); 
	m_ad_partnerTbl.AddField(_T("adp_taxcode"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_telephone"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_fax"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_email"), dfText, 128); 
	m_ad_partnerTbl.AddField(_T("adp_website"), dfText, 255); 
	m_ad_partnerTbl.AddField(_T("adp_bankname"), dfText, 255);
	m_ad_partnerTbl.AddField(_T("adp_branch"), dfText, 255);
	m_ad_partnerTbl.AddField(_T("adp_bankaccount"), dfText, 20);
	m_ad_partnerTbl.AddField(_T("adp_description"), dfText, 255); 
	m_ad_partnerTbl.AddField(_T("adp_contract_no"), dfText, 81);
	m_ad_partnerTbl.AddField(_T("adp_citas_code"), dfText, 20);
	m_ad_partnerTbl.AddField(_T("adp_financial_code"), dfText, 20);
	m_ad_partnerTbl.AddField(_T("adp_financial_code2"), dfText, 20);
	m_ad_partnerTbl.AddField(_T("adp_account_holder"), dfText, 35);
}

void CAdBusinessPartnerDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPartnerType.SetEvent(WE_SELENDOK, _OnPartnerTypeSelendokFnc);
	//m_wndPartnerType.SetEvent(WE_SETFOCUS, _OnPartnerTypeSetfocusFnc);
	//m_wndPartnerType.SetEvent(WE_KILLFOCUS, _OnPartnerTypeKillfocusFnc);
	m_wndPartnerType.SetEvent(WE_SELCHANGE, _OnPartnerTypeSelectChangeFnc);
	m_wndPartnerType.SetEvent(WE_LOADDATA, _OnPartnerTypeLoadDataFnc);
	//m_wndPartnerType.SetEvent(WE_ADDNEW, _OnPartnerTypeAddNewFnc);
	m_wndPartnerCategory.SetEvent(WE_SELENDOK, _OnPartnerCategorySelendokFnc);
	//m_wndPartnerCategory.SetEvent(WE_SETFOCUS, _OnPartnerCategorySetfocusFnc);
	//m_wndPartnerCategory.SetEvent(WE_KILLFOCUS, _OnPartnerCategoryKillfocusFnc);
	m_wndPartnerCategory.SetEvent(WE_SELCHANGE, _OnPartnerCategorySelectChangeFnc);
	m_wndPartnerCategory.SetEvent(WE_LOADDATA, _OnPartnerCategoryLoadDataFnc);
	//m_wndPartnerCategory.SetEvent(WE_ADDNEW, _OnPartnerCategoryAddNewFnc);
	//m_wndPartnerID.SetEvent(WE_CHANGE, _OnPartnerIDChangeFnc);
	//m_wndPartnerID.SetEvent(WE_SETFOCUS, _OnPartnerIDSetfocusFnc);
	//m_wndPartnerID.SetEvent(WE_KILLFOCUS, _OnPartnerIDKillfocusFnc);
	m_wndPartnerID.SetEvent(WE_CHECKVALUE, _OnPartnerIDCheckValueFnc);
	//m_wndVATRegistrationNumber.SetEvent(WE_CHANGE, _OnVATRegistrationNumberChangeFnc);
	//m_wndVATRegistrationNumber.SetEvent(WE_SETFOCUS, _OnVATRegistrationNumberSetfocusFnc);
	//m_wndVATRegistrationNumber.SetEvent(WE_KILLFOCUS, _OnVATRegistrationNumberKillfocusFnc);
	m_wndVATRegistrationNumber.SetEvent(WE_CHECKVALUE, _OnVATRegistrationNumberCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndTelephone.SetEvent(WE_CHANGE, _OnTelephoneChangeFnc);
	//m_wndTelephone.SetEvent(WE_SETFOCUS, _OnTelephoneSetfocusFnc);
	//m_wndTelephone.SetEvent(WE_KILLFOCUS, _OnTelephoneKillfocusFnc);
	m_wndTelephone.SetEvent(WE_CHECKVALUE, _OnTelephoneCheckValueFnc);
	//m_wndFax.SetEvent(WE_CHANGE, _OnFaxChangeFnc);
	//m_wndFax.SetEvent(WE_SETFOCUS, _OnFaxSetfocusFnc);
	//m_wndFax.SetEvent(WE_KILLFOCUS, _OnFaxKillfocusFnc);
	m_wndFax.SetEvent(WE_CHECKVALUE, _OnFaxCheckValueFnc);
	//m_wndEmail.SetEvent(WE_CHANGE, _OnEmailChangeFnc);
	//m_wndEmail.SetEvent(WE_SETFOCUS, _OnEmailSetfocusFnc);
	//m_wndEmail.SetEvent(WE_KILLFOCUS, _OnEmailKillfocusFnc);
	m_wndEmail.SetEvent(WE_CHECKVALUE, _OnEmailCheckValueFnc);
	//m_wndWebsite.SetEvent(WE_CHANGE, _OnWebsiteChangeFnc);
	//m_wndWebsite.SetEvent(WE_SETFOCUS, _OnWebsiteSetfocusFnc);
	//m_wndWebsite.SetEvent(WE_KILLFOCUS, _OnWebsiteKillfocusFnc);
	m_wndWebsite.SetEvent(WE_CHECKVALUE, _OnWebsiteCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndAccountNumber.SetEvent(WE_CHANGE, _OnAccountNumberChangeFnc);
	//m_wndAccountNumber.SetEvent(WE_SETFOCUS, _OnAccountNumberSetfocusFnc);
	//m_wndAccountNumber.SetEvent(WE_KILLFOCUS, _OnAccountNumberKillfocusFnc);
	m_wndAccountNumber.SetEvent(WE_CHECKVALUE, _OnAccountNumberCheckValueFnc);
	m_wndBankName.SetEvent(WE_SELENDOK, _OnBankNameSelendokFnc);
	//m_wndBankName.SetEvent(WE_SETFOCUS, _OnBankNameSetfocusFnc);
	//m_wndBankName.SetEvent(WE_KILLFOCUS, _OnBankNameKillfocusFnc);
	m_wndBankName.SetEvent(WE_SELCHANGE, _OnBankNameSelectChangeFnc);
	m_wndBankName.SetEvent(WE_LOADDATA, _OnBankNameLoadDataFnc);
	//m_wndBankName.SetEvent(WE_ADDNEW, _OnBankNameAddNewFnc);
	//m_wndBranch.SetEvent(WE_CHANGE, _OnBranchChangeFnc);
	//m_wndBranch.SetEvent(WE_SETFOCUS, _OnBranchSetfocusFnc);
	//m_wndBranch.SetEvent(WE_KILLFOCUS, _OnBranchKillfocusFnc);
	m_wndBranch.SetEvent(WE_CHECKVALUE, _OnBranchCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if(GetMode() == VM_EDIT || GetMode() == VM_VIEW){
		GetDataToScreen();
	}
	SetMode(GetMode());

}
void CAdBusinessPartnerDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPartnerType.GetDlgCtrlID(), m_szPartnerTypeKey);
	DDX_TextEx(pDX, m_wndPartnerCategory.GetDlgCtrlID(), m_szPartnerCategoryKey);
	DDX_Text(pDX, m_wndPartnerID.GetDlgCtrlID(), m_szPartnerID);
	DDX_Text(pDX, m_wndVATRegistrationNumber.GetDlgCtrlID(), m_szVATRegistrationNumber);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndTelephone.GetDlgCtrlID(), m_szTelephone);
	DDX_Text(pDX, m_wndFax.GetDlgCtrlID(), m_szFax);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);
	DDX_Text(pDX, m_wndWebsite.GetDlgCtrlID(), m_szWebsite);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndAccountNumber.GetDlgCtrlID(), m_szAccountNumber);
	DDX_TextEx(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankNameKey);
	DDX_Text(pDX, m_wndBranch.GetDlgCtrlID(), m_szBranch);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);
	DDX_Text(pDX, m_wndFinancialCode.GetDlgCtrlID(), m_szFinancialCode);
	DDX_Text(pDX, m_wndFinancialCode2.GetDlgCtrlID(), m_szFinancialCode2);
	DDX_Text(pDX, m_wndCitasCode.GetDlgCtrlID(), m_szCitasCode);
	DDX_Text(pDX, m_wndAccountHolder.GetDlgCtrlID(), m_szAccountHolder);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);

}
void CAdBusinessPartnerDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_partner WHERE adp_partner_id = '%s'"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adp_partner_id"), m_szPartnerID);
		rs.GetValue(_T("adp_partner_type_id"), m_szPartnerTypeKey);
		rs.GetValue(_T("adp_taxcode"), m_szVATRegistrationNumber);
		rs.GetValue(_T("adp_partner_category_id"), m_szPartnerCategoryKey);
		rs.GetValue(_T("adp_name"), m_szName);
		m_szOldName = m_szName;
		rs.GetValue(_T("adp_address"), m_szAddress);
		rs.GetValue(_T("adp_telephone"), m_szTelephone);
		rs.GetValue(_T("adp_fax"), m_szFax);
		rs.GetValue(_T("adp_email"), m_szEmail);
		rs.GetValue(_T("adp_website"), m_szWebsite);
		rs.GetValue(_T("adp_description"), m_szDescription);
		rs.GetValue(_T("adp_bankname"), m_szBankNameKey);
		rs.GetValue(_T("adp_branch"), m_szBranch);
		rs.GetValue(_T("adp_bankaccount"), m_szAccountNumber);
		rs.GetValue(_T("adp_isactive"), szActive);
		m_szOldStatus = szActive;
		rs.GetValue(_T("adp_financial_code"), m_szFinancialCode);
		rs.GetValue(_T("adp_financial_code2"), m_szFinancialCode2);
		rs.GetValue(_T("adp_citas_code"), m_szCitasCode);
		rs.GetValue(_T("adp_contract_no"), m_szContractNo);
		rs.GetValue(_T("adp_account_holder"), m_szAccountHolder);
		m_bIsActive = szActive == _T("Y")?true:false;
	}
}

void CAdBusinessPartnerDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ad_partnerTbl.SetValue(_T("adp_partner_id"), m_szPartnerID);
	m_ad_partnerTbl.SetValue(_T("adp_createdby"), pMF->GetCurrentUser());
	m_ad_partnerTbl.SetValue(_T("adp_createddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adp_partner_id='%s' "), m_szPartnerID);
		m_ad_partnerTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_partnerTbl.SetValue(_T("adp_updatedby"), pMF->GetCurrentUser());
	m_ad_partnerTbl.SetValue(_T("adp_updateddate"), pMF->GetSysDateTime());
	m_ad_partnerTbl.SetValue(_T("adp_isactive"), m_bIsActive?_T("Y"):_T("N"));
	m_ad_partnerTbl.SetValue(_T("adp_partner_type_id"), m_szPartnerTypeKey);
	m_ad_partnerTbl.SetValue(_T("adp_taxcode"), m_szVATRegistrationNumber);
	m_ad_partnerTbl.SetValue(_T("adp_partner_category_id"), m_szPartnerCategoryKey);
	m_ad_partnerTbl.SetValue(_T("adp_name"), m_szName);
	m_ad_partnerTbl.SetValue(_T("adp_bank_id"), m_szBankNameKey);
	m_ad_partnerTbl.SetValue(_T("adp_address"), m_szAddress);
	m_ad_partnerTbl.SetValue(_T("adp_telephone"), m_szTelephone);
	m_ad_partnerTbl.SetValue(_T("adp_fax"), m_szFax);
	m_ad_partnerTbl.SetValue(_T("adp_email"), m_szEmail);
	m_ad_partnerTbl.SetValue(_T("adp_website"), m_szWebsite);
	m_ad_partnerTbl.SetValue(_T("adp_description"), m_szDescription);
	m_ad_partnerTbl.SetValue(_T("adp_bankname"), m_wndBankName.GetCurrent(0));
	m_ad_partnerTbl.SetValue(_T("adp_branch"), m_szBranch);
	m_ad_partnerTbl.SetValue(_T("adp_bankaccount"), m_szAccountNumber);
	m_ad_partnerTbl.SetValue(_T("adp_org_id"), pMF->GetModuleID());
	m_ad_partnerTbl.SetValue(_T("adp_contract_no"), m_szContractNo);
	m_ad_partnerTbl.SetValue(_T("adp_financial_code"), m_szFinancialCode);
	m_ad_partnerTbl.SetValue(_T("adp_financial_code2"), m_szFinancialCode2);
	m_ad_partnerTbl.SetValue(_T("adp_citas_code"), m_szCitasCode);
	m_ad_partnerTbl.SetValue(_T("adp_account_holder"), m_szAccountHolder);
}

void CAdBusinessPartnerDialog::SetDefaultValues(){
	if (m_szPartnerTypeKey.IsEmpty())
		m_szPartnerTypeKey=_T("KH");
	m_szVATRegistrationNumber.Empty();
	m_szPartnerID.Empty();
	m_szPartnerCategoryKey.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_szTelephone.Empty();
	m_szFax.Empty();
	m_szEmail.Empty();
	m_szWebsite.Empty();
	m_szDescription.Empty();
	m_bIsActive=TRUE;
	m_szContractNo.Empty();
	m_szFinancialCode.Empty();
	m_szFinancialCode2.Empty();
	m_szCitasCode.Empty();
	m_szAccountHolder.Empty();
}

int CAdBusinessPartnerDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
			EnableControls(TRUE);
			if (m_szPartnerTypeKey == _T("CT"))
			{
 				EnableControls(FALSE);
				m_wndName.EnableWindow(TRUE);
				m_wndAddress.EnableWindow(TRUE);
				m_wndTelephone.EnableWindow(TRUE);
				m_wndPartnerCategory.EnableWindow(TRUE);
				m_wndPartnerCategory.SetFocus();
			}
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndPartnerID.EnableWindow(TRUE);		
			
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndName.SetFocus();
			m_wndPartnerID.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndPartnerType.EnableWindow(FALSE);
 		return nOldMode;
}

void CAdBusinessPartnerDialog::OnPartnerTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CAdBusinessPartnerDialog::OnPartnerTypeSelendok(){
	 
}

/*void CAdBusinessPartnerDialog::OnPartnerTypeSetfocus(){
	
}*/
/*void CAdBusinessPartnerDialog::OnPartnerTypeKillfocus(){
	
}*/
long CAdBusinessPartnerDialog::OnPartnerTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return LoadPartnerTypeList(&m_wndPartnerType, m_szPartnerTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartnerType.IsSearchKey() && !m_szPartnerTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPartnerTypeKey
};
	m_wndPartnerType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartnerType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdBusinessPartnerDialog::OnPartnerTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerDialog::OnPartnerCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CAdBusinessPartnerDialog::OnPartnerCategorySelendok(){
	 
}

/*void CAdBusinessPartnerDialog::OnPartnerCategorySetfocus(){
	
}*/
/*void CAdBusinessPartnerDialog::OnPartnerCategoryKillfocus(){
	
}*/
long CAdBusinessPartnerDialog::OnPartnerCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartnerCategory.IsSearchKey() && !m_szPartnerCategoryKey.IsEmpty()){
		szWhere.Format(_T(" and adpc_partner_category_id='%s' "), m_szPartnerCategoryKey);
	}
	m_wndPartnerCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpc_partner_category_id as id, adpc_description as name FROM ad_partner_category WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartnerCategory.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CAdBusinessPartnerDialog::OnPartnerCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdBusinessPartnerDialog::OnPartnerIDChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnPartnerIDSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnPartnerIDKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnPartnerIDCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner WHERE adp_partner_id='%s' "), m_szPartnerID);
	_debug(_T("%s"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndPartnerID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnVATRegistrationNumberChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnVATRegistrationNumberSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnVATRegistrationNumberKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnVATRegistrationNumberCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnNameChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnNameSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnNameKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnNameCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnAddressChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnAddressSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnAddressKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnAddressCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnTelephoneChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnTelephoneSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnTelephoneKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnTelephoneCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnFaxChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnFaxSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnFaxKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnFaxCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnEmailChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnEmailSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnEmailKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnEmailCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnWebsiteChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnWebsiteSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnWebsiteKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnWebsiteCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnDescriptionChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnDescriptionKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerDialog::OnAccountNumberChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnAccountNumberSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnAccountNumberKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnAccountNumberCheckValue(){
	return 0;
}
 
void CAdBusinessPartnerDialog::OnBankNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CAdBusinessPartnerDialog::OnBankNameSelendok(){
	 
}

/*void CAdBusinessPartnerDialog::OnBankNameSetfocus(){
	
}*/
/*void CAdBusinessPartnerDialog::OnBankNameKillfocus(){
	
}*/
long CAdBusinessPartnerDialog::OnBankNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return LoadBankList(&m_wndBankName, m_szBankNameKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankName.IsSearchKey() && !m_szBankNameKeyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankNameKeyKey
};
	m_wndBankName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdBusinessPartnerDialog::OnBankNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdBusinessPartnerDialog::OnBranchChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnBranchSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnBranchKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnBranchCheckValue(){
	return 0;
}
 
	void CAdBusinessPartnerDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CAdBusinessPartnerDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveAdBusinessPartnerDialog();
}
 
void CAdBusinessPartnerDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdBusinessPartnerDialog::OnAddAdBusinessPartnerDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdBusinessPartnerDialog::OnEditAdBusinessPartnerDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBusinessPartnerDialog::OnDeleteAdBusinessPartnerDialog(){
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
 		OnCancelAdBusinessPartnerDialog();
 	}
	return 0;
}

int CAdBusinessPartnerDialog::OnSaveAdBusinessPartnerDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	/*
	if (!m_wndDetail.IsValidateData())
	{
		if (m_wndTab.GetCurSel() != 0)
			m_wndTab.SetCurSel(0);
		return -1;
	}
	if (!m_wndLocationAddress.IsValidateData())	
	{
		if (m_wndTab.GetCurSel() != 2)
			m_wndTab.SetCurSel(2);
		return -1;
	}
	*/
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
 		szSQL = m_ad_partnerTbl.GetInsertSQL();
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adp_partner_id='%s' "),  m_szPartnerID);
		szSQL = m_ad_partnerTbl.GetUpdateSQL(_T("adp_partner_id,createdby,createddate"));
 		szSQL += szWhere;
 	}
 	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0){
		if (GetMode() == VM_EDIT){
			CString szDesc, tmpStr;
			if (m_szOldName != m_szName)
				szDesc.AppendFormat(_T("Old Name: %s->New Name: %s"), m_szOldName, m_szName);
			tmpStr = m_bIsActive?_T("Y"):_T("N");
			if (m_szOldStatus != tmpStr){
				if (!szDesc.IsEmpty()) szDesc += _T(", ");
				szDesc.AppendFormat(_T("Old Status: %s->New Status: %s"), m_szOldStatus, tmpStr);
			}
			if (!szDesc.IsEmpty()) pMF->SystemLog(_T("Edit Business Partner Information"), szDesc);
		}
		CGuiDialog::OnOK();
	}
 	return ret;
}

int CAdBusinessPartnerDialog::OnCancelAdBusinessPartnerDialog(){
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
 
int CAdBusinessPartnerDialog::OnAdBusinessPartnerDialogListLoadData(){
	return 0;
}

