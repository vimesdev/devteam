#include "AdBusinessPartnerDialog.h"
#include "MainFrm.h"
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
/*static void _OnFinancialCodeChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCodeChange();
} */
/*static void _OnFinancialCodeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCodeSetfocus();} */ 
/*static void _OnFinancialCodeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCodeKillfocus();
} */
static int _OnFinancialCodeCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCodeCheckValue();
} 
/*static void _OnFinancialCode2ChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCode2Change();
} */
/*static void _OnFinancialCode2SetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCode2Setfocus();} */ 
/*static void _OnFinancialCode2KillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCode2Killfocus();
} */
static int _OnFinancialCode2CheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnFinancialCode2CheckValue();
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
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnCitasCodeChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnCitasCodeChange();
} */
/*static void _OnCitasCodeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnCitasCodeSetfocus();} */ 
/*static void _OnCitasCodeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnCitasCodeKillfocus();
} */
static int _OnCitasCodeCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnCitasCodeCheckValue();
} 
/*static void _OnAccountHolderChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountHolderChange();
} */
/*static void _OnAccountHolderSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountHolderSetfocus();} */ 
/*static void _OnAccountHolderKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDialog *)pWnd)->OnAccountHolderKillfocus();
} */
static int _OnAccountHolderCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDialog *)pWnd)->OnAccountHolderCheckValue();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAdBusinessPartnerDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
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
CAdBusinessPartnerDialog::CAdBusinessPartnerDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdBusinessPartnerDialog::~CAdBusinessPartnerDialog(){
}
void CAdBusinessPartnerDialog::OnCreateComponents(){
	m_wndBusinessPartnerInformation.Create(this, _T("Business Partner Information"), 5, 5, 800, 240);
	m_wndPartnerTypeLabel.Create(this, _T("Type"), 10, 30, 115, 55);
	m_wndPartnerType.Create(this,120, 30, 360, 55); 
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
	m_wndCitasCodeLabel.Create(this, _T("Citas Code"), 10, 330, 115, 355);
	m_wndCitasCode.Create(this,120, 330, 360, 355); 
	m_wndAccountHolderLabel.Create(this, _T("Account Holder"), 365, 330, 500, 355);
	m_wndAccountHolder.Create(this,505, 330, 795, 355); 
	m_wndTab.Create(this,5, 365, 800, 570); 
	m_wndIsActive.Create(this, _T("Is Active"), 10, 575, 115, 600);
	m_wndSave.Create(this, _T("&Save"), 615, 575, 705, 600);
	m_wndClose.Create(this, _T("&Close"), 710, 575, 800, 600);

}
void CAdBusinessPartnerDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPartnerType.SetCheckValue(true);
	m_wndPartnerType.LimitText(1024);
	m_wndPartnerCategory.SetCheckValue(true);
	m_wndPartnerCategory.LimitText(1024);
	m_wndPartnerID.SetLimitText(1024);
	m_wndPartnerID.SetCheckValue(true);
	m_wndVATRegistrationNumber.SetLimitText(1024);
	m_wndVATRegistrationNumber.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndTelephone.SetLimitText(1024);
	m_wndTelephone.SetCheckValue(true);
	m_wndFax.SetLimitText(1024);
	m_wndFax.SetCheckValue(true);
	m_wndEmail.SetLimitText(1024);
	m_wndEmail.SetCheckValue(true);
	m_wndWebsite.SetLimitText(1024);
	m_wndWebsite.SetCheckValue(true);
	m_wndFinancialCode.SetLimitText(1024);
	m_wndFinancialCode.SetCheckValue(true);
	m_wndFinancialCode2.SetLimitText(1024);
	m_wndFinancialCode2.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndAccountNumber.SetLimitText(1024);
	m_wndAccountNumber.SetCheckValue(true);
	m_wndBankName.SetCheckValue(true);
	m_wndBankName.LimitText(1024);
	m_wndBranch.SetLimitText(1024);
	m_wndBranch.SetCheckValue(true);
	m_wndContractNo.SetLimitText(1024);
	m_wndContractNo.SetCheckValue(true);
	m_wndCitasCode.SetLimitText(1024);
	m_wndCitasCode.SetCheckValue(true);
	m_wndAccountHolder.SetLimitText(1024);
	m_wndAccountHolder.SetCheckValue(true);







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
	//m_wndFinancialCode.SetEvent(WE_CHANGE, _OnFinancialCodeChangeFnc);
	//m_wndFinancialCode.SetEvent(WE_SETFOCUS, _OnFinancialCodeSetfocusFnc);
	//m_wndFinancialCode.SetEvent(WE_KILLFOCUS, _OnFinancialCodeKillfocusFnc);
	m_wndFinancialCode.SetEvent(WE_CHECKVALUE, _OnFinancialCodeCheckValueFnc);
	//m_wndFinancialCode2.SetEvent(WE_CHANGE, _OnFinancialCode2ChangeFnc);
	//m_wndFinancialCode2.SetEvent(WE_SETFOCUS, _OnFinancialCode2SetfocusFnc);
	//m_wndFinancialCode2.SetEvent(WE_KILLFOCUS, _OnFinancialCode2KillfocusFnc);
	m_wndFinancialCode2.SetEvent(WE_CHECKVALUE, _OnFinancialCode2CheckValueFnc);
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
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndCitasCode.SetEvent(WE_CHANGE, _OnCitasCodeChangeFnc);
	//m_wndCitasCode.SetEvent(WE_SETFOCUS, _OnCitasCodeSetfocusFnc);
	//m_wndCitasCode.SetEvent(WE_KILLFOCUS, _OnCitasCodeKillfocusFnc);
	m_wndCitasCode.SetEvent(WE_CHECKVALUE, _OnCitasCodeCheckValueFnc);
	//m_wndAccountHolder.SetEvent(WE_CHANGE, _OnAccountHolderChangeFnc);
	//m_wndAccountHolder.SetEvent(WE_SETFOCUS, _OnAccountHolderSetfocusFnc);
	//m_wndAccountHolder.SetEvent(WE_KILLFOCUS, _OnAccountHolderKillfocusFnc);
	m_wndAccountHolder.SetEvent(WE_CHECKVALUE, _OnAccountHolderCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

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
	DDX_Text(pDX, m_wndFinancialCode.GetDlgCtrlID(), m_szFinancialCode);
	DDX_Text(pDX, m_wndFinancialCode2.GetDlgCtrlID(), m_szFinancialCode2);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndAccountNumber.GetDlgCtrlID(), m_szAccountNumber);
	DDX_TextEx(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankNameKey);
	DDX_Text(pDX, m_wndBranch.GetDlgCtrlID(), m_szBranch);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_Text(pDX, m_wndCitasCode.GetDlgCtrlID(), m_szCitasCode);
	DDX_Text(pDX, m_wndAccountHolder.GetDlgCtrlID(), m_szAccountHolder);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CAdBusinessPartnerDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PartnerType")] =  m_szPartnerTypeKey;
	m_jData[_T("PartnerCategory")] =  m_szPartnerCategoryKey;
	m_jData[_T("PartnerID")] =  m_szPartnerID;
	m_jData[_T("VATRegistrationNumber")] =  m_szVATRegistrationNumber;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Telephone")] =  m_szTelephone;
	m_jData[_T("Fax")] =  m_szFax;
	m_jData[_T("Email")] =  m_szEmail;
	m_jData[_T("Website")] =  m_szWebsite;
	m_jData[_T("FinancialCode")] =  m_szFinancialCode;
	m_jData[_T("FinancialCode2")] =  m_szFinancialCode2;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("AccountNumber")] =  m_szAccountNumber;
	m_jData[_T("BankName")] =  m_szBankNameKey;
	m_jData[_T("Branch")] =  m_szBranch;
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("CitasCode")] =  m_szCitasCode;
	m_jData[_T("AccountHolder")] =  m_szAccountHolder;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("PartnerType")].GetValue(m_szPartnerTypeKey);
	m_jData[_T("PartnerCategory")].GetValue(m_szPartnerCategoryKey);
	m_jData[_T("PartnerID")].GetValue(m_szPartnerID);
	m_jData[_T("VATRegistrationNumber")].GetValue(m_szVATRegistrationNumber);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Telephone")].GetValue(m_szTelephone);
	m_jData[_T("Fax")].GetValue(m_szFax);
	m_jData[_T("Email")].GetValue(m_szEmail);
	m_jData[_T("Website")].GetValue(m_szWebsite);
	m_jData[_T("FinancialCode")].GetValue(m_szFinancialCode);
	m_jData[_T("FinancialCode2")].GetValue(m_szFinancialCode2);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("AccountNumber")].GetValue(m_szAccountNumber);
	m_jData[_T("BankName")].GetValue(m_szBankNameKey);
	m_jData[_T("Branch")].GetValue(m_szBranch);
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("CitasCode")].GetValue(m_szCitasCode);
	m_jData[_T("AccountHolder")].GetValue(m_szAccountHolder);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CAdBusinessPartnerDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerDialog::SetDefaultValues(){

	m_szPartnerTypeKey.Empty();
	m_szPartnerCategoryKey.Empty();
	m_szPartnerID.Empty();
	m_szVATRegistrationNumber.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_szTelephone.Empty();
	m_szFax.Empty();
	m_szEmail.Empty();
	m_szWebsite.Empty();
	m_szFinancialCode.Empty();
	m_szFinancialCode2.Empty();
	m_szDescription.Empty();
	m_szAccountNumber.Empty();
	m_szBankNameKey.Empty();
	m_szBranch.Empty();
	m_szContractNo.Empty();
	m_szCitasCode.Empty();
	m_szAccountHolder.Empty();
	m_bIsActive=FALSE;

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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartnerCategory.IsSearchKey() && !m_szPartnerCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPartnerCategoryKey
};
	m_wndPartnerCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartnerCategory.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
/*void CAdBusinessPartnerDialog::OnFinancialCodeChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnFinancialCodeSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnFinancialCodeKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnFinancialCodeCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerDialog::OnFinancialCode2Change(){
	
} */
/*void CAdBusinessPartnerDialog::OnFinancialCode2Setfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnFinancialCode2Killfocus(){
	
} */
int CAdBusinessPartnerDialog::OnFinancialCode2CheckValue(){
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankName.IsSearchKey() && !m_szBankNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankNameKey
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
/*void CAdBusinessPartnerDialog::OnContractNoChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnContractNoSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnContractNoKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnContractNoCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerDialog::OnCitasCodeChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnCitasCodeSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnCitasCodeKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnCitasCodeCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerDialog::OnAccountHolderChange(){
	
} */
/*void CAdBusinessPartnerDialog::OnAccountHolderSetfocus(){
	
} */
/*void CAdBusinessPartnerDialog::OnAccountHolderKillfocus(){
	
} */
int CAdBusinessPartnerDialog::OnAccountHolderCheckValue(){
	return 0;
} 
void CAdBusinessPartnerDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CAdBusinessPartnerDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CAdBusinessPartnerDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 		//OnAdBusinessPartnerDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
