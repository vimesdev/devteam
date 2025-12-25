#include "AdCompanyInformation.h"
#include "MainFrame_E10.h"
#include "AdBankAccountDialog.h"
/*static void _OnCompanyIDChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyIDChange();
} */
/*static void _OnCompanyIDSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyIDSetfocus();} */ 
/*static void _OnCompanyIDKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyIDKillfocus();
} */
static int _OnCompanyIDCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnCompanyIDCheckValue();
} 
/*static void _OnAbbreviatedNameChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAbbreviatedNameChange();
} */
/*static void _OnAbbreviatedNameSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAbbreviatedNameSetfocus();} */ 
/*static void _OnAbbreviatedNameKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAbbreviatedNameKillfocus();
} */
static int _OnAbbreviatedNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnAbbreviatedNameCheckValue();
} 
/*static void _OnCompanyNameChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyNameChange();
} */
/*static void _OnCompanyNameSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyNameSetfocus();} */ 
/*static void _OnCompanyNameKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnCompanyNameKillfocus();
} */
static int _OnCompanyNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnCompanyNameCheckValue();
} 
/*static void _OnEnglishNameChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEnglishNameChange();
} */
/*static void _OnEnglishNameSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEnglishNameSetfocus();} */ 
/*static void _OnEnglishNameKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEnglishNameKillfocus();
} */
static int _OnEnglishNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnEnglishNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnAddress2ChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddress2Change();
} */
/*static void _OnAddress2SetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddress2Setfocus();} */ 
/*static void _OnAddress2KillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnAddress2Killfocus();
} */
static int _OnAddress2CheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnAddress2CheckValue();
} 
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdCompanyInformation* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdCompanyInformation* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnDistrictAddNew();
}*/
/*static void _OnVATRegistrationNoChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnVATRegistrationNoChange();
} */
/*static void _OnVATRegistrationNoSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnVATRegistrationNoSetfocus();} */ 
/*static void _OnVATRegistrationNoKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnVATRegistrationNoKillfocus();
} */
static int _OnVATRegistrationNoCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnVATRegistrationNoCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnFaxChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnFaxChange();
} */
/*static void _OnFaxSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnFaxSetfocus();} */ 
/*static void _OnFaxKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnFaxKillfocus();
} */
static int _OnFaxCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnFaxCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnEmailCheckValue();
} 
/*static void _OnWebsiteChangeFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnWebsiteChange();
} */
/*static void _OnWebsiteSetfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnWebsiteSetfocus();} */ 
/*static void _OnWebsiteKillfocusFnc(CWnd *pWnd){
	((CAdCompanyInformation *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CAdCompanyInformation *)pWnd)->OnWebsiteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CAdCompanyInformation *pVw = (CAdCompanyInformation *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdCompanyInformation *pVw = (CAdCompanyInformation *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdCompanyInformation *pVw = (CAdCompanyInformation *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnBankListLoadDataFnc(CWnd *pWnd){
	return ((CAdCompanyInformation*)pWnd)->OnBankListLoadData();
} 
static void _OnBankListDblClickFnc(CWnd *pWnd){
	((CAdCompanyInformation*)pWnd)->OnBankListDblClick();
} 
static void _OnBankListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdCompanyInformation*)pWnd)->OnBankListSelectChange(nOldItem, nNewItem);
}

static int _OnBankListAddItemFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnBankListAddItem();
}

static int _OnBankListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnBankListDeleteItem();
} 
static int _OnAddAdCompanyInformationFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnAddAdCompanyInformation();
} 
static int _OnEditAdCompanyInformationFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnEditAdCompanyInformation();
} 
static int _OnDeleteAdCompanyInformationFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnDeleteAdCompanyInformation();
} 
static int _OnSaveAdCompanyInformationFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnSaveAdCompanyInformation();
} 
static int _OnCancelAdCompanyInformationFnc(CWnd *pWnd){
	 return ((CAdCompanyInformation*)pWnd)->OnCancelAdCompanyInformation();
} 
CAdCompanyInformation::CAdCompanyInformation(){

	m_nDlgWidth = 1018;
	m_nDlgHeight = 641;
	SetDefaultValues();
}
CAdCompanyInformation::~CAdCompanyInformation(){
}
void CAdCompanyInformation::OnCreateComponents(){
	m_wndCommunication.Create(this, _T("Communication"), 5, 275, 800, 360);
	m_wndCompanyInformation.Create(this, _T("Company Information"), 5, 5, 800, 270);
	m_wndBankInformation.Create(this, _T("Bank Information"), 5, 365, 800, 570);
	m_wndCompanyIDLabel.Create(this, _T("Company ID"), 10, 30, 140, 55);
	m_wndCompanyID.Create(this,145, 30, 395, 55); 
	m_wndAbbreviatedNameLabel.Create(this, _T("Abbreviated Name"), 400, 30, 530, 55);
	m_wndAbbreviatedName.Create(this,535, 30, 795, 55); 
	m_wndCompanyNameLabel.Create(this, _T("Company Name"), 10, 60, 140, 85);
	m_wndCompanyName.Create(this,145, 60, 795, 85); 
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 10, 90, 140, 115);
	m_wndEnglishName.Create(this,145, 90, 795, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 140, 145);
	m_wndAddress.Create(this,145, 120, 795, 145); 
	m_wndAddress2Label.Create(this, _T("Address 2"), 10, 150, 140, 175);
	m_wndAddress2.Create(this,145, 150, 795, 175); 
	m_wndProvinceLabel.Create(this, _T("Province/City"), 10, 180, 140, 205);
	m_wndProvince.Create(this,145, 180, 395, 205); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 210, 140, 235);
	m_wndDistrict.Create(this,145, 210, 395, 235); 
	m_wndVATRegistrationNoLabel.Create(this, _T("VAT Code"), 10, 240, 140, 265);
	m_wndVATRegistrationNo.Create(this,145, 240, 395, 265); 
	m_wndLogoLabel.Create(this, _T("Logo"), 400, 180, 795, 265);
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 300, 140, 325);
	m_wndPhone.Create(this,145, 300, 395, 325); 
	m_wndFaxLabel.Create(this, _T("Fax"), 400, 300, 530, 325);
	m_wndFax.Create(this,535, 300, 795, 325); 
	m_wndEmailLabel.Create(this, _T("Email"), 10, 330, 140, 355);
	m_wndEmail.Create(this,145, 330, 395, 355); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 400, 330, 530, 355);
	m_wndWebsite.Create(this,535, 330, 795, 355); 
	m_wndUpdate.Create(this, _T("&Update"), 535, 574, 620, 599);
	m_wndSave.Create(this, _T("&Save"), 625, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 800, 600);
	m_wndBankList.Create(this,10, 390, 795, 565); 

}
void CAdCompanyInformation::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCompanyID.SetLimitText(32);
	m_wndCompanyID.SetCheckValue(true);
	m_wndCompanyID.SetTextUpper();
	m_wndAbbreviatedName.SetLimitText(64);
	m_wndAbbreviatedName.SetCheckValue(true);
	m_wndAbbreviatedName.SetTextUpper();
	m_wndCompanyName.SetLimitText(255);
	m_wndCompanyName.SetCheckValue(true);
	m_wndCompanyName.SetInitCap(2);
	m_wndEnglishName.SetLimitText(255);
	m_wndEnglishName.SetCheckValue(false);
	m_wndEnglishName.SetInitCap(1);
	m_wndAddress.SetLimitText(255);
	m_wndAddress.SetCheckValue(false);
	m_wndAddress.SetInitCap(1);
	m_wndAddress2.SetLimitText(255);
	m_wndAddress2.SetCheckValue(false);
	m_wndAddress2.SetInitCap(1);
	m_wndProvince.SetCheckValue(false);
	m_wndProvince.LimitText(35);
	m_wndDistrict.SetCheckValue(false);
	m_wndDistrict.LimitText(35);
	m_wndVATRegistrationNo.SetLimitText(32);
	m_wndVATRegistrationNo.SetCheckValue(true);
	m_wndPhone.SetLimitText(15);
	m_wndPhone.SetCheckValue(false);
	m_wndFax.SetLimitText(15);
	m_wndFax.SetCheckValue(false);
	m_wndEmail.SetLimitText(64);
	m_wndEmail.SetCheckValue(false);
	m_wndWebsite.SetLimitText(128);
	m_wndWebsite.SetCheckValue(false);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvince.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndBankList.InsertColumn(0, _T("Bank Name"), 256, 250);
	m_wndBankList.InsertColumn(1, _T("Account No"), 256, 120);
	m_wndBankList.InsertColumn(2, _T("Branch"), 256, 200);
	m_wndBankList.InsertColumn(3, _T("Address"), 256, 250);


	m_ad_companyTbl.SetTableName(_T("ad_company"));
	m_ad_companyTbl.AddField(_T("adc_company_id"), dfText, 32); 
	m_ad_companyTbl.AddField(_T("adc_name"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_address"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_address2"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_postcode"), dfText, 32); 
	m_ad_companyTbl.AddField(_T("adc_city"), dfText, 32); 
	m_ad_companyTbl.AddField(_T("adc_provill_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_district_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_village_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_countryregion"), dfText, 3); 
	m_ad_companyTbl.AddField(_T("adc_vatcode"), dfText, 32); 
	m_ad_companyTbl.AddField(_T("adc_picture"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_logo"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_phone"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_fax"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_email"), dfText, 64); 
	m_ad_companyTbl.AddField(_T("adc_website"), dfText, 128); 
	m_ad_companyTbl.AddField(_T("adc_bankname"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_bankaddress"), dfText, 255); 
	m_ad_companyTbl.AddField(_T("adc_bankbranch_id"), dfText, 128); 
	m_ad_companyTbl.AddField(_T("adc_bankaccount_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_paymentrouting_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_giro_id"), dfText, 15); 
	m_ad_companyTbl.AddField(_T("adc_swiftcode"), dfText, 32); 
	m_ad_companyTbl.AddField(_T("adc_iban"), dfText, 32); 

}

void CAdCompanyInformation::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndCompanyID.SetEvent(WE_CHANGE, _OnCompanyIDChangeFnc);
	//m_wndCompanyID.SetEvent(WE_SETFOCUS, _OnCompanyIDSetfocusFnc);
	//m_wndCompanyID.SetEvent(WE_KILLFOCUS, _OnCompanyIDKillfocusFnc);
	m_wndCompanyID.SetEvent(WE_CHECKVALUE, _OnCompanyIDCheckValueFnc);
	//m_wndAbbreviatedName.SetEvent(WE_CHANGE, _OnAbbreviatedNameChangeFnc);
	//m_wndAbbreviatedName.SetEvent(WE_SETFOCUS, _OnAbbreviatedNameSetfocusFnc);
	//m_wndAbbreviatedName.SetEvent(WE_KILLFOCUS, _OnAbbreviatedNameKillfocusFnc);
	m_wndAbbreviatedName.SetEvent(WE_CHECKVALUE, _OnAbbreviatedNameCheckValueFnc);
	//m_wndCompanyName.SetEvent(WE_CHANGE, _OnCompanyNameChangeFnc);
	//m_wndCompanyName.SetEvent(WE_SETFOCUS, _OnCompanyNameSetfocusFnc);
	//m_wndCompanyName.SetEvent(WE_KILLFOCUS, _OnCompanyNameKillfocusFnc);
	m_wndCompanyName.SetEvent(WE_CHECKVALUE, _OnCompanyNameCheckValueFnc);
	//m_wndEnglishName.SetEvent(WE_CHANGE, _OnEnglishNameChangeFnc);
	//m_wndEnglishName.SetEvent(WE_SETFOCUS, _OnEnglishNameSetfocusFnc);
	//m_wndEnglishName.SetEvent(WE_KILLFOCUS, _OnEnglishNameKillfocusFnc);
	m_wndEnglishName.SetEvent(WE_CHECKVALUE, _OnEnglishNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndAddress2.SetEvent(WE_CHANGE, _OnAddress2ChangeFnc);
	//m_wndAddress2.SetEvent(WE_SETFOCUS, _OnAddress2SetfocusFnc);
	//m_wndAddress2.SetEvent(WE_KILLFOCUS, _OnAddress2KillfocusFnc);
	m_wndAddress2.SetEvent(WE_CHECKVALUE, _OnAddress2CheckValueFnc);
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	//m_wndVATRegistrationNo.SetEvent(WE_CHANGE, _OnVATRegistrationNoChangeFnc);
	//m_wndVATRegistrationNo.SetEvent(WE_SETFOCUS, _OnVATRegistrationNoSetfocusFnc);
	//m_wndVATRegistrationNo.SetEvent(WE_KILLFOCUS, _OnVATRegistrationNoKillfocusFnc);
	m_wndVATRegistrationNo.SetEvent(WE_CHECKVALUE, _OnVATRegistrationNoCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
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
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndBankList.SetEvent(WE_SELCHANGE, _OnBankListSelectChangeFnc);
	m_wndBankList.SetEvent(WE_LOADDATA, _OnBankListLoadDataFnc);
	m_wndBankList.SetEvent(WE_DBLCLICK, _OnBankListDblClickFnc);
	m_wndBankList.SetWindowText(_T("Bank Account Information"));
	m_wndBankList.AddEvent(1, _T("Add Bank Account"), _OnBankListAddItemFnc);
	m_wndBankList.AddEvent(0, _T("-"));
	m_wndBankList.AddEvent(2, _T("Delete Bank Account"), _OnBankListDeleteItemFnc, 0);
	GetDataToScreen();
	OnBankListLoadData();

}
void CAdCompanyInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCompanyID.GetDlgCtrlID(), m_szCompanyID);
	DDX_Text(pDX, m_wndAbbreviatedName.GetDlgCtrlID(), m_szAbbreviatedName);
	DDX_Text(pDX, m_wndCompanyName.GetDlgCtrlID(), m_szCompanyName);
	DDX_Text(pDX, m_wndEnglishName.GetDlgCtrlID(), m_szEnglishName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndAddress2.GetDlgCtrlID(), m_szAddress2);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_Text(pDX, m_wndVATRegistrationNo.GetDlgCtrlID(), m_szVATRegistrationNo);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndFax.GetDlgCtrlID(), m_szFax);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);
	DDX_Text(pDX, m_wndWebsite.GetDlgCtrlID(), m_szWebsite);

}
void CAdCompanyInformation::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_company "));
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()){
		rs.GetValue(_T("adc_company_id"), m_szCompanyID);
		rs.GetValue(_T("adc_name"), m_szCompanyName);
		rs.GetValue(_T("adc_address"), m_szAddress);
		rs.GetValue(_T("adc_address2"), m_szAddress2);
		rs.GetValue(_T("adc_provill_id"), m_szProvinceKey);
		rs.GetValue(_T("adc_district_id"), m_szDistrictKey);
		rs.GetValue(_T("adc_vatcode"), m_szVATRegistrationNo);
		rs.GetValue(_T("adc_phone"), m_szPhone);
		rs.GetValue(_T("adc_fax"), m_szFax);
		rs.GetValue(_T("adc_email"), m_szEmail);
		rs.GetValue(_T("adc_website"), m_szWebsite);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_EDIT);

}

void CAdCompanyInformation::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_companyTbl.SetValue(_T("adc_company_id"), m_szCompanyID);
	m_ad_companyTbl.SetValue(_T("adc_name"), m_szCompanyName);
	m_ad_companyTbl.SetValue(_T("adc_address"), m_szAddress);
	m_ad_companyTbl.SetValue(_T("adc_address2"), m_szAddress2);
	m_ad_companyTbl.SetValue(_T("adc_provill_id"), m_szProvinceKey);
	m_ad_companyTbl.SetValue(_T("adc_district_id"), m_szDistrictKey);
	m_ad_companyTbl.SetValue(_T("adc_vatcode"), m_szVATRegistrationNo);
	m_ad_companyTbl.SetValue(_T("adc_phone"), m_szPhone);
	m_ad_companyTbl.SetValue(_T("adc_fax"), m_szFax);
	m_ad_companyTbl.SetValue(_T("adc_email"), m_szEmail);
	m_ad_companyTbl.SetValue(_T("adc_website"), m_szWebsite);
}

void CAdCompanyInformation::SetDefaultValues(){
	m_szCompanyID.Empty();
	m_szAbbreviatedName.Empty();
	m_szCompanyName.Empty();
	m_szEnglishName.Empty();
	m_szAddress.Empty();
	m_szAddress2.Empty();
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVATRegistrationNo.Empty();
	m_szPhone.Empty();
	m_szFax.Empty();
	m_szEmail.Empty();
	m_szWebsite.Empty();


}

int CAdCompanyInformation::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndCompanyID.SetFocus();
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
//			m_wndCompanyID.EnableWindow(false);
			m_wndCompanyID.SetFocus();
 			EnableButtons(TRUE, 1, 2, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CAdCompanyInformation::OnCompanyIDChange(){
	
} */
/*void CAdCompanyInformation::OnCompanyIDSetfocus(){
	
} */
/*void CAdCompanyInformation::OnCompanyIDKillfocus(){
	
} */
int CAdCompanyInformation::OnCompanyIDCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnAbbreviatedNameChange(){
	
} */
/*void CAdCompanyInformation::OnAbbreviatedNameSetfocus(){
	
} */
/*void CAdCompanyInformation::OnAbbreviatedNameKillfocus(){
	
} */
int CAdCompanyInformation::OnAbbreviatedNameCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnCompanyNameChange(){
	
} */
/*void CAdCompanyInformation::OnCompanyNameSetfocus(){
	
} */
/*void CAdCompanyInformation::OnCompanyNameKillfocus(){
	
} */
int CAdCompanyInformation::OnCompanyNameCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnEnglishNameChange(){
	
} */
/*void CAdCompanyInformation::OnEnglishNameSetfocus(){
	
} */
/*void CAdCompanyInformation::OnEnglishNameKillfocus(){
	
} */
int CAdCompanyInformation::OnEnglishNameCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnAddressChange(){
	
} */
/*void CAdCompanyInformation::OnAddressSetfocus(){
	
} */
/*void CAdCompanyInformation::OnAddressKillfocus(){
	
} */
int CAdCompanyInformation::OnAddressCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnAddress2Change(){
	
} */
/*void CAdCompanyInformation::OnAddress2Setfocus(){
	
} */
/*void CAdCompanyInformation::OnAddress2Killfocus(){
	
} */
int CAdCompanyInformation::OnAddress2CheckValue(){
	return 0;
}
 
void CAdCompanyInformation::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdCompanyInformation::OnProvinceSelendok(){
	 
}
/*void CAdCompanyInformation::OnProvinceSetfocus(){
	
}*/
/*void CAdCompanyInformation::OnProvinceKillfocus(){
	
}*/
long CAdCompanyInformation::OnProvinceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvince.IsSearchKey() && !m_szProvinceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProvinceKey
};
	m_wndProvince.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvince.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdCompanyInformation::OnProvinceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdCompanyInformation::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdCompanyInformation::OnDistrictSelendok(){
	 UpdateData(true);
}

/*void CAdCompanyInformation::OnDistrictSetfocus(){
	
}*/
/*void CAdCompanyInformation::OnDistrictKillfocus(){
	
}*/
long CAdCompanyInformation::OnDistrictLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	if (m_szProvinceKey.IsEmpty())
		return -1;
	szSQL.Format(_T("Select sd_id as id, sd_name as name From sys_dist Where sd_provid = '%s' Order by sd_id"), m_szProvinceKey);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CAdCompanyInformation::OnDistrictAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdCompanyInformation::OnVATRegistrationNoChange(){
	
} */
/*void CAdCompanyInformation::OnVATRegistrationNoSetfocus(){
	
} */
/*void CAdCompanyInformation::OnVATRegistrationNoKillfocus(){
	
} */
int CAdCompanyInformation::OnVATRegistrationNoCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnPhoneChange(){
	
} */
/*void CAdCompanyInformation::OnPhoneSetfocus(){
	
} */
/*void CAdCompanyInformation::OnPhoneKillfocus(){
	
} */
int CAdCompanyInformation::OnPhoneCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnFaxChange(){
	
} */
/*void CAdCompanyInformation::OnFaxSetfocus(){
	
} */
/*void CAdCompanyInformation::OnFaxKillfocus(){
	
} */
int CAdCompanyInformation::OnFaxCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnEmailChange(){
	
} */
/*void CAdCompanyInformation::OnEmailSetfocus(){
	
} */
/*void CAdCompanyInformation::OnEmailKillfocus(){
	
} */
int CAdCompanyInformation::OnEmailCheckValue(){
	return 0;
}
 
/*void CAdCompanyInformation::OnWebsiteChange(){
	
} */
/*void CAdCompanyInformation::OnWebsiteSetfocus(){
	
} */
/*void CAdCompanyInformation::OnWebsiteKillfocus(){
	
} */
int CAdCompanyInformation::OnWebsiteCheckValue(){
	return 0;
}
 
void CAdCompanyInformation::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_EDIT);
}
 
void CAdCompanyInformation::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdCompanyInformation();
}
 
void CAdCompanyInformation::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelAdCompanyInformation();
}
 
void CAdCompanyInformation::OnBankListDblClick(){
	
} 
void CAdCompanyInformation::OnBankListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

int CAdCompanyInformation::OnBankListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAdBankAccountDialog dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_szCompanyID = m_szCompanyID;
	dlg.m_pParent = this;
	dlg.DoModal();
	return 0;
}

int CAdCompanyInformation::OnBankListDeleteItem(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndBankList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szAccountNo;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szAccountNo = m_wndBankList.GetItemText(nSel, 1);
	szSQL.Format(_T("DELETE FROM ad_bank_account WHERE adba_accountno = '%s'"), szAccountNo);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnBankListLoadData();
 	}
	return 0;
} 
long CAdCompanyInformation::OnBankListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndBankList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT (Select adb_name from ad_bank where adb_bank_id = adba_bank_id) as BankName,") \
				_T("adba_accountno as AccountNo,") \
				_T("adba_branch as Branch,") \
				_T("adba_address as Address ") \
				_T("FROM ad_bank_account WHERE adba_partner_id = '%s'"), m_szCompanyID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankList.AddItems(
			rs.GetValue(_T("BankName")), 
			rs.GetValue(_T("AccountNo")), 
			rs.GetValue(_T("Branch")), 
			rs.GetValue(_T("Address")), NULL);
		rs.MoveNext();
	}
	m_wndBankList.EndLoad(); 
	return nCount;
}
int CAdCompanyInformation::OnAddAdCompanyInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdCompanyInformation::OnEditAdCompanyInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdCompanyInformation::OnDeleteAdCompanyInformation(){
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
 		OnCancelAdCompanyInformation(); 
 	}
	return 0;
}

int CAdCompanyInformation::OnSaveAdCompanyInformation(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT adc_company_id FROM ad_company"));
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		szSQL = m_ad_companyTbl.GetInsertSQL(); 
	}
  	else{ 

 		CString szWhere; 
		rs.GetValue(_T("adc_company_id"), m_szCompanyID);
 		szWhere.Format(_T(" WHERE adc_company_id = '%s'"), m_szCompanyID); 
 		szSQL = m_ad_companyTbl.GetUpdateSQL(_T("")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		SetMode(VM_VIEW);
	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdCompanyInformation::OnCancelAdCompanyInformation(){
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
 
int CAdCompanyInformation::OnAdCompanyInformationListLoadData(){
	return 0;
}

