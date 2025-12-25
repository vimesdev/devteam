#include "AdContractDialog.h"
#include "MainFrm.h"
/*static void _OnContractidChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractidChange();
} */
/*static void _OnContractidSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractidSetfocus();} */ 
/*static void _OnContractidKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractidKillfocus();
} */
static int _OnContractidCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnContractidCheckValue();
} 
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnSignedDateChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnSignedDateChange();
} */
/*static void _OnSignedDateSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnSignedDateSetfocus();} */ 
/*static void _OnSignedDateKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnSignedDateKillfocus();
} */
static int _OnSignedDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnSignedDateCheckValue();
} 
/*static void _OnPerformedDateChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPerformedDateChange();
} */
/*static void _OnPerformedDateSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPerformedDateSetfocus();} */ 
/*static void _OnPerformedDateKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPerformedDateKillfocus();
} */
static int _OnPerformedDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnPerformedDateCheckValue();
} 
static void _OnPartnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractDialog* )pWnd)->OnPartnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerSelendokFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPartnerSelendok();
}
/*static void _OnPartnerSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPartnerKillfocus();
}*/
/*static void _OnPartnerKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPartnerKillfocus();
}*/
static long _OnPartnerLoadDataFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnPartnerLoadData();
}
/*static void _OnPartnerAddNewFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPartnerAddNew();
}*/
static void _OnContractPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractDialog* )pWnd)->OnContractPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractPackageSelendokFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractPackageSelendok();
}
/*static void _OnContractPackageSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractPackageKillfocus();
}*/
/*static void _OnContractPackageKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractPackageKillfocus();
}*/
static long _OnContractPackageLoadDataFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnContractPackageLoadData();
}
/*static void _OnContractPackageAddNewFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnContractPackageAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnPaymentDateChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPaymentDateChange();
} */
/*static void _OnPaymentDateSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPaymentDateSetfocus();} */ 
/*static void _OnPaymentDateKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPaymentDateKillfocus();
} */
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnPaymentDateCheckValue();
} 
/*static void _OnBankAccountChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankAccountChange();
} */
/*static void _OnBankAccountSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankAccountSetfocus();} */ 
/*static void _OnBankAccountKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankAccountKillfocus();
} */
static int _OnBankAccountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnBankAccountCheckValue();
} 
static void _OnBankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractDialog* )pWnd)->OnBankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankSelendokFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankSelendok();
}
/*static void _OnBankSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankKillfocus();
}*/
/*static void _OnBankKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankKillfocus();
}*/
static long _OnBankLoadDataFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnBankLoadData();
}
/*static void _OnBankAddNewFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnBankAddNew();
}*/
/*static void _OnAccountHolderChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAccountHolderChange();
} */
/*static void _OnAccountHolderSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAccountHolderSetfocus();} */ 
/*static void _OnAccountHolderKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAccountHolderKillfocus();
} */
static int _OnAccountHolderCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnAccountHolderCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CAdContractDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdContractDialog *pVw = (CAdContractDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdContractDialog *pVw = (CAdContractDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdContractDialogFnc(CWnd *pWnd){
	 return ((CAdContractDialog*)pWnd)->OnAddAdContractDialog();
} 
static int _OnEditAdContractDialogFnc(CWnd *pWnd){
	 return ((CAdContractDialog*)pWnd)->OnEditAdContractDialog();
} 
static int _OnDeleteAdContractDialogFnc(CWnd *pWnd){
	 return ((CAdContractDialog*)pWnd)->OnDeleteAdContractDialog();
} 
static int _OnSaveAdContractDialogFnc(CWnd *pWnd){
	 return ((CAdContractDialog*)pWnd)->OnSaveAdContractDialog();
} 
static int _OnCancelAdContractDialogFnc(CWnd *pWnd){
	 return ((CAdContractDialog*)pWnd)->OnCancelAdContractDialog();
} 
CAdContractDialog::CAdContractDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 515;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CAdContractDialog::~CAdContractDialog(){
}
void CAdContractDialog::OnCreateComponents(){
	m_wndContractidLabel.Create(this, _T("contract_id"), 5, 5, 125, 30);
	m_wndContractid.Create(this,130, 5, 250, 30); 
	m_wndContractNoLabel.Create(this, _T("ContractNo"), 255, 5, 375, 30);
	m_wndContractNo.Create(this,380, 5, 500, 30); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 35, 125, 60);
	m_wndDescription.Create(this,130, 35, 499, 60); 
	m_wndSignedDateLabel.Create(this, _T("Signed Date"), 5, 65, 125, 90);
	m_wndSignedDate.Create(this,130, 65, 250, 90); 
	m_wndPerformedDateLabel.Create(this, _T("Performed Date"), 255, 65, 375, 90);
	m_wndPerformedDate.Create(this,380, 65, 500, 90); 
	m_wndPartnerLabel.Create(this, _T("Partner"), 5, 95, 125, 120);
	m_wndPartner.Create(this,130, 95, 500, 120); 
	m_wndContractPackageLabel.Create(this, _T("Contract Package"), 5, 125, 125, 150);
	m_wndContractPackage.Create(this,130, 125, 500, 150); 
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 155, 125, 180);
	m_wndAmount.Create(this,130, 155, 250, 180); 
	m_wndPaymentDateLabel.Create(this, _T("Payment Date"), 255, 155, 375, 180);
	m_wndPaymentDate.Create(this,380, 155, 500, 180); 
	m_wndBankAccountLabel.Create(this, _T("Bank Account"), 5, 185, 125, 210);
	m_wndBankAccount.Create(this,130, 185, 500, 210); 
	m_wndBankLabel.Create(this, _T("Bank"), 5, 215, 125, 240);
	m_wndBank.Create(this,130, 215, 500, 240); 
	m_wndAccountHolderLabel.Create(this, _T("Account Holder"), 5, 245, 125, 270);
	m_wndAccountHolder.Create(this,130, 245, 500, 270); 
	m_wndIsActive.Create(this, _T("IsActive"), 5, 274, 125, 299);
	m_wndSave.Create(this, _T("&Save"), 335, 275, 415, 300);
	m_wndClose.Create(this, _T("&Close"), 420, 275, 500, 300);

}
void CAdContractDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndContractid.SetLimitText(22);
	m_wndContractid.SetCheckValue(true);
	m_wndContractNo.SetLimitText(15);
	m_wndContractNo.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndSignedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndSignedDate.SetCheckValue(true);
	m_wndPerformedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformedDate.SetCheckValue(true);
	m_wndPartner.SetCheckValue(true);
	m_wndPartner.LimitText(15);
	m_wndContractPackage.SetCheckValue(true);
	m_wndContractPackage.LimitText(15);
	m_wndAmount.SetLimitText(22);
	m_wndAmount.SetCheckValue(true);
	m_wndPaymentDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPaymentDate.SetCheckValue(true);
	m_wndBankAccount.SetLimitText(15);
	m_wndBankAccount.SetCheckValue(true);
	m_wndBank.SetCheckValue(true);
	m_wndBank.LimitText(15);
	m_wndAccountHolder.SetLimitText(35);
	m_wndAccountHolder.SetCheckValue(true);


	m_wndPartner.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPartner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndContractPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndContractPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndBank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ad_contractTbl.SetTableName(_T("ad_contract"));
	m_ad_contractTbl.AddField(_T("ADC_CONTRACT_ID"), dfLong); 
	m_ad_contractTbl.AddField(_T("ADC_CREATEDBY"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_CREATEDDATE"), dfDateTime); 
	m_ad_contractTbl.AddField(_T("ADC_UPDATEDBY"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_UPDATEDDATE"), dfDateTime); 
	m_ad_contractTbl.AddField(_T("ADC_ORG_ID"), dfLong); 
	m_ad_contractTbl.AddField(_T("ADC_ISACTIVE"), dfText, 1); 
	m_ad_contractTbl.AddField(_T("ADC_DEPTID"), dfText, 7); 
	m_ad_contractTbl.AddField(_T("ADC_CONTRACT_NO"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_SIGNEDDATE"), dfDate); 
	m_ad_contractTbl.AddField(_T("ADC_DESCRIPTION"), dfText, 1024); 
	m_ad_contractTbl.AddField(_T("ADC_PARTNER_ID"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_CONTRACT_PACKAGE_ID"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_PERFORM_DATE"), dfDate); 
	m_ad_contractTbl.AddField(_T("ADC_AMOUNT"), dfLong); 
	m_ad_contractTbl.AddField(_T("ADC_PAYMENT_DATE"), dfDate); 
	m_ad_contractTbl.AddField(_T("ADC_BANK_AMOUNT"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_BANK_ID"), dfText, 15); 

}
void CAdContractDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndContractid.SetEvent(WE_CHANGE, _OnContractidChangeFnc);
	//m_wndContractid.SetEvent(WE_SETFOCUS, _OnContractidSetfocusFnc);
	//m_wndContractid.SetEvent(WE_KILLFOCUS, _OnContractidKillfocusFnc);
	m_wndContractid.SetEvent(WE_CHECKVALUE, _OnContractidCheckValueFnc);
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndSignedDate.SetEvent(WE_CHANGE, _OnSignedDateChangeFnc);
	//m_wndSignedDate.SetEvent(WE_SETFOCUS, _OnSignedDateSetfocusFnc);
	//m_wndSignedDate.SetEvent(WE_KILLFOCUS, _OnSignedDateKillfocusFnc);
	m_wndSignedDate.SetEvent(WE_CHECKVALUE, _OnSignedDateCheckValueFnc);
	//m_wndPerformedDate.SetEvent(WE_CHANGE, _OnPerformedDateChangeFnc);
	//m_wndPerformedDate.SetEvent(WE_SETFOCUS, _OnPerformedDateSetfocusFnc);
	//m_wndPerformedDate.SetEvent(WE_KILLFOCUS, _OnPerformedDateKillfocusFnc);
	m_wndPerformedDate.SetEvent(WE_CHECKVALUE, _OnPerformedDateCheckValueFnc);
	m_wndPartner.SetEvent(WE_SELENDOK, _OnPartnerSelendokFnc);
	//m_wndPartner.SetEvent(WE_SETFOCUS, _OnPartnerSetfocusFnc);
	//m_wndPartner.SetEvent(WE_KILLFOCUS, _OnPartnerKillfocusFnc);
	m_wndPartner.SetEvent(WE_SELCHANGE, _OnPartnerSelectChangeFnc);
	m_wndPartner.SetEvent(WE_LOADDATA, _OnPartnerLoadDataFnc);
	//m_wndPartner.SetEvent(WE_ADDNEW, _OnPartnerAddNewFnc);
	m_wndContractPackage.SetEvent(WE_SELENDOK, _OnContractPackageSelendokFnc);
	//m_wndContractPackage.SetEvent(WE_SETFOCUS, _OnContractPackageSetfocusFnc);
	//m_wndContractPackage.SetEvent(WE_KILLFOCUS, _OnContractPackageKillfocusFnc);
	m_wndContractPackage.SetEvent(WE_SELCHANGE, _OnContractPackageSelectChangeFnc);
	m_wndContractPackage.SetEvent(WE_LOADDATA, _OnContractPackageLoadDataFnc);
	//m_wndContractPackage.SetEvent(WE_ADDNEW, _OnContractPackageAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndPaymentDate.SetEvent(WE_CHANGE, _OnPaymentDateChangeFnc);
	//m_wndPaymentDate.SetEvent(WE_SETFOCUS, _OnPaymentDateSetfocusFnc);
	//m_wndPaymentDate.SetEvent(WE_KILLFOCUS, _OnPaymentDateKillfocusFnc);
	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
	//m_wndBankAccount.SetEvent(WE_CHANGE, _OnBankAccountChangeFnc);
	//m_wndBankAccount.SetEvent(WE_SETFOCUS, _OnBankAccountSetfocusFnc);
	//m_wndBankAccount.SetEvent(WE_KILLFOCUS, _OnBankAccountKillfocusFnc);
	m_wndBankAccount.SetEvent(WE_CHECKVALUE, _OnBankAccountCheckValueFnc);
	m_wndBank.SetEvent(WE_SELENDOK, _OnBankSelendokFnc);
	//m_wndBank.SetEvent(WE_SETFOCUS, _OnBankSetfocusFnc);
	//m_wndBank.SetEvent(WE_KILLFOCUS, _OnBankKillfocusFnc);
	m_wndBank.SetEvent(WE_SELCHANGE, _OnBankSelectChangeFnc);
	m_wndBank.SetEvent(WE_LOADDATA, _OnBankLoadDataFnc);
	//m_wndBank.SetEvent(WE_ADDNEW, _OnBankAddNewFnc);
	//m_wndAccountHolder.SetEvent(WE_CHANGE, _OnAccountHolderChangeFnc);
	//m_wndAccountHolder.SetEvent(WE_SETFOCUS, _OnAccountHolderSetfocusFnc);
	//m_wndAccountHolder.SetEvent(WE_KILLFOCUS, _OnAccountHolderKillfocusFnc);
	m_wndAccountHolder.SetEvent(WE_CHECKVALUE, _OnAccountHolderCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CAdContractDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndContractid.GetDlgCtrlID(), m_nContractid);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndSignedDate.GetDlgCtrlID(), m_szSignedDate);
	DDX_TextEx(pDX, m_wndPerformedDate.GetDlgCtrlID(), m_szPerformedDate);
	DDX_TextEx(pDX, m_wndPartner.GetDlgCtrlID(), m_szPartnerKey);
	DDX_TextEx(pDX, m_wndContractPackage.GetDlgCtrlID(), m_szContractPackageKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
	DDX_Text(pDX, m_wndBankAccount.GetDlgCtrlID(), m_szBankAccount);
	DDX_TextEx(pDX, m_wndBank.GetDlgCtrlID(), m_szBankKey);
	DDX_Text(pDX, m_wndAccountHolder.GetDlgCtrlID(), m_szAccountHolder);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CAdContractDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Contractid")] =  m_nContractid;
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("SignedDate")] =  m_szSignedDate;
	m_jData[_T("PerformedDate")] =  m_szPerformedDate;
	m_jData[_T("Partner")] =  m_szPartnerKey;
	m_jData[_T("ContractPackage")] =  m_szContractPackageKey;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("PaymentDate")] =  m_szPaymentDate;
	m_jData[_T("BankAccount")] =  m_szBankAccount;
	m_jData[_T("Bank")] =  m_szBankKey;
	m_jData[_T("AccountHolder")] =  m_szAccountHolder;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Contractid")].GetValue(m_nContractid);
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("SignedDate")].GetValue(m_szSignedDate);
	m_jData[_T("PerformedDate")].GetValue(m_szPerformedDate);
	m_jData[_T("Partner")].GetValue(m_szPartnerKey);
	m_jData[_T("ContractPackage")].GetValue(m_szContractPackageKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("PaymentDate")].GetValue(m_szPaymentDate);
	m_jData[_T("BankAccount")].GetValue(m_szBankAccount);
	m_jData[_T("Bank")].GetValue(m_szBankKey);
	m_jData[_T("AccountHolder")].GetValue(m_szAccountHolder);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CAdContractDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ADC_CONTRACT_ID"), m_nContractid);
	rs.GetValue(_T("ADC_CONTRACT_NO"), m_szContractNo);
	rs.GetValue(_T("ADC_SIGNEDDATE"), m_szSignedDate);
	rs.GetValue(_T("ADC_DESCRIPTION"), m_szDescription);
	rs.GetValue(_T("ADC_PARTNER_ID"), m_szPartnerKey);
	rs.GetValue(_T("ADC_CONTRACT_PACKAGE_ID"), m_szContractPackageKey);
	rs.GetValue(_T("ADC_PERFORM_DATE"), m_szPerformedDate);
	rs.GetValue(_T("ADC_AMOUNT"), m_nAmount);
	rs.GetValue(_T("ADC_PAYMENT_DATE"), m_szPaymentDate);
	rs.GetValue(_T("ADC_BANK_AMOUNT"), m_szBankAccount);
	rs.GetValue(_T("ADC_BANK_ID"), m_szBankKey);

}
void CAdContractDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ad_contractTbl.SetValue(_T("ADC_CONTRACT_ID"), m_nContractid);
	m_ad_contractTbl.SetValue(_T("ADC_CONTRACT_NO"), m_szContractNo);
	m_ad_contractTbl.SetValue(_T("ADC_SIGNEDDATE"), m_szSignedDate);
	m_ad_contractTbl.SetValue(_T("ADC_DESCRIPTION"), m_szDescription);
	m_ad_contractTbl.SetValue(_T("ADC_PARTNER_ID"), m_szPartnerKey);
	m_ad_contractTbl.SetValue(_T("ADC_CONTRACT_PACKAGE_ID"), m_szContractPackageKey);
	m_ad_contractTbl.SetValue(_T("ADC_PERFORM_DATE"), m_szPerformedDate);
	m_ad_contractTbl.SetValue(_T("ADC_AMOUNT"), m_nAmount);
	m_ad_contractTbl.SetValue(_T("ADC_PAYMENT_DATE"), m_szPaymentDate);
	m_ad_contractTbl.SetValue(_T("ADC_BANK_AMOUNT"), m_szBankAccount);
	m_ad_contractTbl.SetValue(_T("ADC_BANK_ID"), m_szBankKey);

}
void CAdContractDialog::SetDefaultValues(){

	m_nContractid=0;
	m_szContractNo.Empty();
	m_szDescription.Empty();
	m_szSignedDate.Empty();
	m_szPerformedDate.Empty();
	m_szPartnerKey.Empty();
	m_szContractPackageKey.Empty();
	m_nAmount=0;
	m_szPaymentDate.Empty();
	m_szBankAccount.Empty();
	m_szBankKey.Empty();
	m_szAccountHolder.Empty();
	m_bIsActive=FALSE;

}
int CAdContractDialog::SetMode(int nMode){
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
/*void CAdContractDialog::OnContractidChange(){
	
} */
/*void CAdContractDialog::OnContractidSetfocus(){
	
} */
/*void CAdContractDialog::OnContractidKillfocus(){
	
} */
int CAdContractDialog::OnContractidCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnContractNoChange(){
	
} */
/*void CAdContractDialog::OnContractNoSetfocus(){
	
} */
/*void CAdContractDialog::OnContractNoKillfocus(){
	
} */
int CAdContractDialog::OnContractNoCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnDescriptionChange(){
	
} */
/*void CAdContractDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdContractDialog::OnDescriptionKillfocus(){
	
} */
int CAdContractDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnSignedDateChange(){
	
} */
/*void CAdContractDialog::OnSignedDateSetfocus(){
	
} */
/*void CAdContractDialog::OnSignedDateKillfocus(){
	
} */
int CAdContractDialog::OnSignedDateCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnPerformedDateChange(){
	
} */
/*void CAdContractDialog::OnPerformedDateSetfocus(){
	
} */
/*void CAdContractDialog::OnPerformedDateKillfocus(){
	
} */
int CAdContractDialog::OnPerformedDateCheckValue(){
	return 0;
} 
void CAdContractDialog::OnPartnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnPartnerSelendok(){
	 
}
/*void CAdContractDialog::OnPartnerSetfocus(){
	
}*/
/*void CAdContractDialog::OnPartnerKillfocus(){
	
}*/
long CAdContractDialog::OnPartnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CAdContractDialog::OnPartnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdContractDialog::OnContractPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnContractPackageSelendok(){
	 
}
/*void CAdContractDialog::OnContractPackageSetfocus(){
	
}*/
/*void CAdContractDialog::OnContractPackageKillfocus(){
	
}*/
long CAdContractDialog::OnContractPackageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContractPackage.IsSearchKey() && !m_szContractPackageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractPackageKey
};
	m_wndContractPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContractPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractDialog::OnContractPackageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdContractDialog::OnAmountChange(){
	
} */
/*void CAdContractDialog::OnAmountSetfocus(){
	
} */
/*void CAdContractDialog::OnAmountKillfocus(){
	
} */
int CAdContractDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnPaymentDateChange(){
	
} */
/*void CAdContractDialog::OnPaymentDateSetfocus(){
	
} */
/*void CAdContractDialog::OnPaymentDateKillfocus(){
	
} */
int CAdContractDialog::OnPaymentDateCheckValue(){
	return 0;
} 
/*void CAdContractDialog::OnBankAccountChange(){
	
} */
/*void CAdContractDialog::OnBankAccountSetfocus(){
	
} */
/*void CAdContractDialog::OnBankAccountKillfocus(){
	
} */
int CAdContractDialog::OnBankAccountCheckValue(){
	return 0;
} 
void CAdContractDialog::OnBankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnBankSelendok(){
	 
}
/*void CAdContractDialog::OnBankSetfocus(){
	
}*/
/*void CAdContractDialog::OnBankKillfocus(){
	
}*/
long CAdContractDialog::OnBankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBank.IsSearchKey() && !m_szBankKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankKey
};
	m_wndBank.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractDialog::OnBankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdContractDialog::OnAccountHolderChange(){
	
} */
/*void CAdContractDialog::OnAccountHolderSetfocus(){
	
} */
/*void CAdContractDialog::OnAccountHolderKillfocus(){
	
} */
int CAdContractDialog::OnAccountHolderCheckValue(){
	return 0;
} 
	void CAdContractDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CAdContractDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdContractDialog::OnAddAdContractDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractDialog::OnEditAdContractDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractDialog::OnDeleteAdContractDialog(){
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
 		OnCancelAdContractDialog();
 	}
	return 0;
}
int CAdContractDialog::OnSaveAdContractDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_ad_contractTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_ad_contractTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnAdContractDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractDialog::OnCancelAdContractDialog(){
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
int CAdContractDialog::OnAdContractDialogListLoadData(){
	return 0;
}
