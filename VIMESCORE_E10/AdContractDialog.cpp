#include "AdContractDialog.h"
#include "AdBusinessPartnerList.h"
#include "MainFrame_E10.h"
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
/*static void _OnDurationChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDurationChange();
} */
/*static void _OnDurationSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDurationSetfocus();} */ 
/*static void _OnDurationKillfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnDurationKillfocus();
} */
static int _OnDurationCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnDurationCheckValue();
} 
/*static void _OnAdjustedAmtChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAdjustedAmtChange();
} */
/*static void _OnAdjustedAmtSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnAdjustedAmtSetfocus();} */
	/*static void _OnAdjustedAmtKillfocusFnc(CWnd *pWnd){
		((CAdContractDialog *)pWnd)->OnAdjustedAmtKillfocus();
	} */
static int _OnAdjustedAmtCheckValueFnc(CWnd* pWnd) {
	return ((CAdContractDialog*)pWnd)->OnAdjustedAmtCheckValue();
}
/*static void _OnPaidAmtChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPaidAmtChange();
} */
/*static void _OnPaidAmtSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnPaidAmtSetfocus();} */
	/*static void _OnPaidAmtKillfocusFnc(CWnd *pWnd){
		((CAdContractDialog *)pWnd)->OnPaidAmtKillfocus();
	} */
static int _OnPaidAmtCheckValueFnc(CWnd* pWnd) {
	return ((CAdContractDialog*)pWnd)->OnPaidAmtCheckValue();
}
/*static void _OnRemainingAmtChangeFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnRemainingAmtChange();
} */
/*static void _OnRemainingAmtSetfocusFnc(CWnd *pWnd){
	((CAdContractDialog *)pWnd)->OnRemainingAmtSetfocus();} */
	/*static void _OnRemainingAmtKillfocusFnc(CWnd *pWnd){
		((CAdContractDialog *)pWnd)->OnRemainingAmtKillfocus();
	} */
static int _OnRemainingAmtCheckValueFnc(CWnd* pWnd) {
	return ((CAdContractDialog*)pWnd)->OnRemainingAmtCheckValue();
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
static int _OnTyleungCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnTyleungCheckValue();
}
static int _OnDiachinhacungcapCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnDiachinhacungcapCheckValue();
}

static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnPhoneCheckValue();
}

static int _OnMataichinhCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnMataichinhCheckValue();
}

static int _OnBranchCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnBranchCheckValue();
} 

static int _OnCitasCodeCheckValueFnc(CWnd *pWnd){
	return ((CAdContractDialog *)pWnd)->OnCitasCodeCheckValue();
}

static void _OnPartnerLabelClickFnc(CWnd *pWnd){
	CAdContractDialog *pVw = (CAdContractDialog *)pWnd;
	pVw->OnPartnerLabelClick();
} 

CAdContractDialog::CAdContractDialog(CWnd *pParent, int nMode, long nId):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
		
	m_nDlgWidth = 515;
	m_nDlgHeight = 285;
	SetDefaultValues();
	m_nContractId = nId;
}
CAdContractDialog::~CAdContractDialog(){
}
void CAdContractDialog::OnCreateComponents()
{
	m_wndContractidLabel.Create(this, _T("ID"), 5, 5, 135, 30);
	m_wndContractid.Create(this, 140, 5, 335, 30);
	m_wndContractNoLabel.Create(this, _T("Contract No"), 340, 5, 480, 30);
	m_wndContractNo.Create(this, 485, 5, 680, 30);
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 35, 135, 60);
	m_wndDescription.Create(this, 140, 35, 680, 60);
	m_wndSignedDateLabel.Create(this, _T("Ngày ký"), 5, 65, 135, 90);
	m_wndSignedDate.Create(this, 140, 65, 335, 90);
	m_wndPerformedDateLabel.Create(this, _T("Ngày thực hiện"), 340, 65, 480, 90);
	m_wndPerformedDate.Create(this, 485, 65, 680, 90);
	m_wndPartnerLabel.Create(this, _T("Nhà cung cấp"), 5, 95, 135, 120);
	m_wndPartner.Create(this, 140, 95, 680, 120);
	m_wndDiachinhacungcapLabel.Create(this, _T("Địa chỉ công ty"), 5, 125, 135, 150);
	m_wndDiachinhacungcap.Create(this, 140, 125, 680, 150);
	m_wndPhoneLabel.Create(this, _T("Số điện thoại"), 5, 155, 135, 180);
	m_wndPhone.Create(this, 140, 155, 335, 180);
	m_wndMataichinhLabel.Create(this, _T("Mã tài chính"), 340, 155, 480, 180);
	m_wndMataichinh.Create(this, 485, 155, 680, 180);
	m_wndContractPackageLabel.Create(this, _T("Gói thầu / Số QĐ"), 5, 185, 135, 210);
	m_wndContractPackage.Create(this, 140, 185, 680, 210);
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 215, 135, 240);
	m_wndAmount.Create(this, 140, 215, 335, 240);
	m_wndDurationLabel.Create(this, _T("Ngày hết hiệu lực"), 340, 215, 480, 240);
	m_wndDuration.Create(this, 485, 215, 680, 240);
	m_wndAdjustedAmtLabel.Create(this, _T("Adjusted Amt"), 5, 245, 135, 270);
	m_wndAdjustedAmt.Create(this, 140, 245, 335, 270);
	m_wndPaidAmtLabel.Create(this, _T("Paid Amt"), 340, 245, 480, 270);
	m_wndPaidAmt.Create(this, 485, 245, 680, 270);
	m_wndRemainingAmtLabel.Create(this, _T("Remaining Amt"), 5, 275, 135, 300);
	m_wndRemainingAmt.Create(this, 140, 275, 335, 300);
	m_wndBankAccountLabel.Create(this, _T("Số tài khoản"), 340, 275, 480, 300);
	m_wndBankAccount.Create(this, 485, 275, 680, 300);
	m_wndBankLabel.Create(this, _T("Tên ngân hàng"), 5, 305, 135, 330);
	m_wndBank.Create(this, 140, 305, 680, 330);
	m_wndBranchLabel.Create(this, _T("Chi nhánh ngân hàng"), 5, 335, 135, 360);
	m_wndBranch.Create(this, 140, 335, 480, 360);
	m_wndCitascodeLabel.Create(this, _T("Mã CITAS"), 485, 335, 565, 360);
	m_wndCitasCode.Create(this, 570, 335, 680, 360);
	m_wndAccountHolderLabel.Create(this, _T("Người đại diện"), 5, 365, 135, 390);
	m_wndAccountHolder.Create(this, 140, 365, 680, 390);
	m_wndTyleungtruoclabel.Create(this, _T("Tỷ lệ ứng trước (%)"), 5, 395, 135, 420);
	m_wndTyleung.Create(this, 140, 395, 680, 420);
	m_wndIsActive.Create(this, _T("IsActive"), 5, 425, 135, 450);
	m_wndSave.Create(this, _T("&Save"), 515, 425, 595, 450);
	m_wndClose.Create(this, _T("&Close"), 600, 425, 680, 450);

}
void CAdContractDialog::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndContractid.SetLimitText(22);
	m_wndContractid.SetReadOnly(true);
	m_wndContractNo.SetLimitText(15);
	m_wndContractNo.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	//m_wndDescription.SetCheckValue(true);
	//m_wndSignedDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndSignedDate.SetCheckValue(true);
	//m_wndPerformedDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndPerformedDate.SetCheckValue(true);
	//m_wndPartner.SetCheckValue(true);
	m_wndPartner.LimitText(15);
	//m_wndContractPackage.SetCheckValue(false);
	m_wndContractPackage.LimitText(15);
	m_wndAmount.SetLimitText(15);
	//m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(TRUE);
	//m_wndDuration.SetMax(CDate(pMF->GetSysDate()));
	//m_wndDuration.SetCheckValue(false);
	m_wndRemainingAmt.SetReadOnly();
	m_wndBankAccount.SetLimitText(15);
	//m_wndBankAccount.SetCheckValue(true);
	//m_wndBank.SetCheckValue(true);
	m_wndBank.LimitText(15);
	m_wndAccountHolder.SetLimitText(35);
	//m_wndAccountHolder.SetCheckValue(true);
	//m_wndTyleung.SetCheckValue(true);
	m_wndPartnerLabel.SetHyperlink(true);

	m_wndPartner.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPartner.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndPartner.InsertColumn(2, _T("địa chỉ"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(4, _T("contact_name"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(5, _T("telephone"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(6, _T("contact_mobile"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(7, _T("bankacc"), CFMT_TEXT, 0);
	m_wndPartner.InsertColumn(8, _T("bankid"), CFMT_TEXT, 0);

	m_wndContractPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndContractPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndBank.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndBank.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_ad_contractTbl.SetTableName(_T("ad_contract"));
	//m_ad_contractTbl.AddField(_T("ADC_CONTRACT_ID"), dfLong); 
	m_ad_contractTbl.AddField(_T("ADC_CREATEDBY"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_CREATEDDATE"), dfDateTime); 
	m_ad_contractTbl.AddField(_T("ADC_UPDATEDBY"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_UPDATEDDATE"), dfDateTime); 
	m_ad_contractTbl.AddField(_T("ADC_ORG_ID"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_ISACTIVE"), dfText, 1); 
	m_ad_contractTbl.AddField(_T("ADC_DEPTID"), dfText, 7); 
	m_ad_contractTbl.AddField(_T("ADC_CONTRACT_NO"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_SIGNEDDATE"), dfDate); 
	m_ad_contractTbl.AddField(_T("ADC_DESCRIPTION"), dfText, 1024); 
	m_ad_contractTbl.AddField(_T("ADC_PARTNER_ID"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_CONTRACT_PACKAGE_ID"), dfLong); 
	m_ad_contractTbl.AddField(_T("ADC_PERFORM_DATE"), dfDate); 
	m_ad_contractTbl.AddField(_T("ADC_AMOUNT"), dfDouble); 
	m_ad_contractTbl.AddField(_T("ADC_DURATION"), dfInteger); 
	m_ad_contractTbl.AddField(_T("ADC_BANK_ACCOUNT"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_BANK_ID"), dfText, 15); 
	m_ad_contractTbl.AddField(_T("ADC_ACCOUNT_HOLDER"), dfText, 64);
	m_ad_contractTbl.AddField(_T("ADC_TYLEUNG"), dfInteger); 
	m_ad_contractTbl.AddField(_T("ADC_PAID_AMOUNT"), dfDouble);
	m_ad_contractTbl.AddField(_T("ADC_ADJUSTED_AMOUNT"), dfDouble);
}
void CAdContractDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	//m_wndDuration.SetEvent(WE_CHANGE, _OnDurationChangeFnc);
	//m_wndDuration.SetEvent(WE_SETFOCUS, _OnDurationSetfocusFnc);
	//m_wndDuration.SetEvent(WE_KILLFOCUS, _OnDurationKillfocusFnc);
	m_wndDuration.SetEvent(WE_CHECKVALUE, _OnDurationCheckValueFnc);
	//m_wndAdjustedAmt.SetEvent(WE_CHANGE, _OnAdjustedAmtChangeFnc);
	//m_wndAdjustedAmt.SetEvent(WE_SETFOCUS, _OnAdjustedAmtSetfocusFnc);
	//m_wndAdjustedAmt.SetEvent(WE_KILLFOCUS, _OnAdjustedAmtKillfocusFnc);
	m_wndAdjustedAmt.SetEvent(WE_CHECKVALUE, _OnAdjustedAmtCheckValueFnc);
	//m_wndPaidAmt.SetEvent(WE_CHANGE, _OnPaidAmtChangeFnc);
	//m_wndPaidAmt.SetEvent(WE_SETFOCUS, _OnPaidAmtSetfocusFnc);
	//m_wndPaidAmt.SetEvent(WE_KILLFOCUS, _OnPaidAmtKillfocusFnc);
	m_wndPaidAmt.SetEvent(WE_CHECKVALUE, _OnPaidAmtCheckValueFnc);
	//m_wndRemainingAmt.SetEvent(WE_CHANGE, _OnRemainingAmtChangeFnc);
	//m_wndRemainingAmt.SetEvent(WE_SETFOCUS, _OnRemainingAmtSetfocusFnc);
	//m_wndRemainingAmt.SetEvent(WE_KILLFOCUS, _OnRemainingAmtKillfocusFnc);
	m_wndRemainingAmt.SetEvent(WE_CHECKVALUE, _OnRemainingAmtCheckValueFnc);
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
	m_wndTyleung.SetEvent(WE_CHECKVALUE, _OnTyleungCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndDiachinhacungcap.SetEvent(WE_CHECKVALUE, _OnDiachinhacungcapCheckValueFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndMataichinh.SetEvent(WE_CHECKVALUE, _OnMataichinhCheckValueFnc);
	m_wndBranch.SetEvent(WE_CHECKVALUE, _OnBranchCheckValueFnc);
	m_wndCitasCode.SetEvent(WE_CHECKVALUE, _OnCitasCodeCheckValueFnc);

	m_wndPartnerLabel.SetEvent(WE_CLICK, _OnPartnerLabelClickFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW){
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CAdContractDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndContractid.GetDlgCtrlID(), m_nContractId);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndSignedDate.GetDlgCtrlID(), m_szSignedDate);
	DDX_TextEx(pDX, m_wndPerformedDate.GetDlgCtrlID(), m_szPerformedDate);
	DDX_TextEx(pDX, m_wndPartner.GetDlgCtrlID(), m_szPartnerKey);
	DDX_TextEx(pDX, m_wndContractPackage.GetDlgCtrlID(), m_szContractPackageKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDuration.GetDlgCtrlID(), m_nDuration);
	DDX_Text(pDX, m_wndAdjustedAmt.GetDlgCtrlID(), m_nAdjustedAmt);
	DDX_Text(pDX, m_wndPaidAmt.GetDlgCtrlID(), m_nPaidAmt);
	DDX_Text(pDX, m_wndRemainingAmt.GetDlgCtrlID(), m_nRemainingAmt);
	DDX_Text(pDX, m_wndBankAccount.GetDlgCtrlID(), m_szBankAccount);
	DDX_TextEx(pDX, m_wndBank.GetDlgCtrlID(), m_szBankKey);
	DDX_Text(pDX, m_wndAccountHolder.GetDlgCtrlID(), m_szAccountHolder);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);
	DDX_Text(pDX, m_wndTyleung.GetDlgCtrlID(), m_nTyleung);
	DDX_Text(pDX, m_wndDiachinhacungcap.GetDlgCtrlID(), m_szDiachinhacungcap);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndMataichinh.GetDlgCtrlID(), m_szMataichinh);
	DDX_Text(pDX, m_wndBranch.GetDlgCtrlID(), m_szBranch);
	DDX_Text(pDX, m_wndCitasCode.GetDlgCtrlID(), m_szCitasCode);

}
void CAdContractDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Contractid")] =  m_nContractId;
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("SignedDate")] =  m_szSignedDate;
	m_jData[_T("PerformedDate")] =  m_szPerformedDate;
	m_jData[_T("Partner")] =  m_szPartnerKey;
	m_jData[_T("ContractPackage")] =  m_szContractPackageKey;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Duration")] =  m_nDuration;
	m_jData[_T("BankAccount")] =  m_szBankAccount;
	m_jData[_T("Bank")] =  m_szBankKey;
	m_jData[_T("AccountHolder")] =  m_szAccountHolder;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Contractid")].GetValue(m_nContractId);
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("SignedDate")].GetValue(m_szSignedDate);
	m_jData[_T("PerformedDate")].GetValue(m_szPerformedDate);
	m_jData[_T("Partner")].GetValue(m_szPartnerKey);
	m_jData[_T("ContractPackage")].GetValue(m_szContractPackageKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Duration")].GetValue(m_nDuration);
	m_jData[_T("BankAccount")].GetValue(m_szBankAccount);
	m_jData[_T("Bank")].GetValue(m_szBankKey);
	m_jData[_T("AccountHolder")].GetValue(m_szAccountHolder);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CAdContractDialog::GetDataToScreen()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT ") \
	_T(" ADC_CONTRACT_NO,") \
	_T(" ADC_SIGNEDDATE,") \
	_T(" ADC_DESCRIPTION,") \
	_T(" ADC_PARTNER_ID,") \
	_T(" ADC_CONTRACT_PACKAGE_ID,") \
	_T(" ADC_PERFORM_DATE,") \
	_T(" ADC_AMOUNT,") \
	_T(" ADC_PAYMENT_DATE,") \
	_T(" ADC_BANK_ACCOUNT,") \
	_T(" ADC_BANK_ID,") \
	_T(" ADC_ACCOUNT_HOLDER,") \
	_T(" ADC_DURATION,") \
	_T(" ADC_TYLEUNG,") \
	_T(" ADC_ISACTIVE,") \
	_T(" ADP_ADDRESS, ADP_TELEPHONE, ADP_FINANCIAL_CODE,") \
	_T(" ADP_BRANCH, ADP_CITAS_CODE,") \
	_T(" ADC_PAID_AMOUNT, ADC_ADJUSTED_AMOUNT")
	_T(" FROM ad_contract") \
	_T(" LEFT JOIN AD_PARTNER ON (adc_partner_id=adp_partner_id)") \
	_T(" WHERE adc_contract_id=%ld"), m_nContractId);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ADC_CONTRACT_NO"), m_szContractNo);
		rs.GetValue(_T("ADC_SIGNEDDATE"), m_szSignedDate);
		rs.GetValue(_T("ADC_DESCRIPTION"), m_szDescription);
		rs.GetValue(_T("ADC_PARTNER_ID"), m_szPartnerKey);
		rs.GetValue(_T("ADC_CONTRACT_PACKAGE_ID"), m_szContractPackageKey);
		rs.GetValue(_T("ADC_PERFORM_DATE"), m_szPerformedDate);
		rs.GetValue(_T("ADC_AMOUNT"), m_nAmount);
		rs.GetValue(_T("ADC_PAYMENT_DATE"), m_nDuration);
		rs.GetValue(_T("ADC_BANK_ACCOUNT"), m_szBankAccount);
		rs.GetValue(_T("ADC_BANK_ID"), m_szBankKey);
		rs.GetValue(_T("ADC_ACCOUNT_HOLDER"), m_szAccountHolder);
		rs.GetValue(_T("ADC_DURATION"), m_nDuration);
		rs.GetValue(_T("ADC_TYLEUNG"), m_nTyleung);
		CString tmpStr;
		rs.GetValue(_T("ADC_ISACTIVE"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bIsActive = TRUE;
		rs.GetValue(_T("ADP_ADDRESS"), m_szDiachinhacungcap);
		rs.GetValue(_T("ADP_TELEPHONE"), m_szPhone);
		rs.GetValue(_T("ADP_FINANCIAL_CODE"), m_szMataichinh);
		rs.GetValue(_T("ADP_BRANCH"), m_szBranch);
		rs.GetValue(_T("ADP_CITAS_CODE"), m_szCitasCode);	
		rs.GetValue(_T("ADC_PAID_AMOUNT"), m_nPaidAmt);
		rs.GetValue(_T("ADC_ADJUSTED_AMOUNT"), m_nAdjustedAmt);
	}

}
void CAdContractDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_contractTbl.SetValue(_T("ADC_ORG_ID"), pMF->GetModuleID());
	m_ad_contractTbl.SetValue(_T("ADC_DEPTID"), pMF->GetDepartmentID());
	m_ad_contractTbl.SetValue(_T("ADC_CREATEDBY"),pMF->GetCurrentUser());
	m_ad_contractTbl.SetValue(_T("ADC_UPDATEDBY"),pMF->GetCurrentUser());
	m_ad_contractTbl.SetValue(_T("ADC_UPDATEDDATE"),pMF->GetSysDateTime());
	m_ad_contractTbl.SetValue(_T("ADC_CONTRACT_NO"), m_szContractNo);
	m_ad_contractTbl.SetValue(_T("ADC_SIGNEDDATE"), m_szSignedDate);
	m_ad_contractTbl.SetValue(_T("ADC_DESCRIPTION"), m_szDescription);
	m_ad_contractTbl.SetValue(_T("ADC_PARTNER_ID"), m_szPartnerKey);
	m_ad_contractTbl.SetValue(_T("ADC_CONTRACT_PACKAGE_ID"), m_szContractPackageKey);
	m_ad_contractTbl.SetValue(_T("ADC_PERFORM_DATE"), m_szPerformedDate);
	m_ad_contractTbl.SetValue(_T("ADC_AMOUNT"), m_nAmount);
	m_ad_contractTbl.SetValue(_T("ADC_DURATION"), m_nDuration);
	m_ad_contractTbl.SetValue(_T("ADC_TYLEUNG"), m_nTyleung);
	m_ad_contractTbl.SetValue(_T("ADC_BANK_ACCOUNT"), m_szBankAccount);
	m_ad_contractTbl.SetValue(_T("ADC_BANK_ID"), m_szBankKey);
	m_ad_contractTbl.SetValue(_T("ADC_ACCOUNT_HOLDER"), m_szAccountHolder);
	m_ad_contractTbl.SetValue(_T("ADC_ISACTIVE"), m_bIsActive?_T("Y"):_T("N"));

}
void CAdContractDialog::SetDefaultValues(){

	m_szContractNo.Empty();
	m_szDescription.Empty();
	m_szSignedDate.Empty();
	m_szPerformedDate.Empty();
	m_szPartnerKey.Empty();
	m_szContractPackageKey.Empty();
	m_nAmount=0;
	m_nDuration=0;
	m_nAdjustedAmt = 0;
	m_nPaidAmt = 0;
	m_nRemainingAmt = 0;
	m_szBankAccount.Empty();
	m_szBankKey.Empty();
	m_szAccountHolder.Empty();
	m_bIsActive=TRUE;
	m_nTyleung=0;
	m_szDiachinhacungcap.Empty();
	m_szPhone.Empty();
	m_szMataichinh.Empty();
	m_szBranch.Empty();
	m_szCitasCode.Empty();

}
int CAdContractDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CAdContractDialog::OnContractidChange(){
	
} */
/*void CAdContractDialog::OnContractidSetfocus(){
	
} */
/*void CAdContractDialog::OnContractidKillfocus(){
	
} */
int CAdContractDialog::OnTyleungCheckValue(){
	return 0;
}
int CAdContractDialog::OnContractidCheckValue(){
	return 0;
}
int CAdContractDialog::OnDiachinhacungcapCheckValue(){
	return 0;
}
int CAdContractDialog::OnPhoneCheckValue(){
	return 0;
}
int CAdContractDialog::OnMataichinhCheckValue(){
	return 0;
}
int CAdContractDialog::OnBranchCheckValue(){
	return 0;
}
int CAdContractDialog::OnCitasCodeCheckValue(){
	return 0;
}
#include "AdBusinessPartnerDialog.h"

void CAdContractDialog::OnPartnerLabelClick()
{
	//if(GetMode() != VM_VIEW) 
 	//	return ; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	CAdBusinessPartnerDialog dlg(this, VM_EDIT);
	dlg.m_szPartnerID = m_szPartnerKey;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK)
	{		
		GetDataToScreen();
		UpdateData(false);
	}

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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnPartnerSelendok()
{
	 CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	m_szBankAccount = m_wndPartner.GetCurrent(7);
	m_szBankKey = m_wndPartner.GetCurrent(8);
	UpdateData(false);
}
/*void CAdContractDialog::OnPartnerSetfocus(){
	
}*/
/*void CAdContractDialog::OnPartnerKillfocus(){
	
}*/
long CAdContractDialog::OnPartnerLoadData(){
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
/*void CAdContractDialog::OnPartnerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdContractDialog::OnContractPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnContractPackageSelendok(){
	 
}
/*void CAdContractDialog::OnContractPackageSetfocus(){
	
}*/
/*void CAdContractDialog::OnContractPackageKillfocus(){
	
}*/
long CAdContractDialog::OnContractPackageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContractPackage.IsSearchKey() && str2long(m_szContractPackageKey) > 0){
	 szWhere.Format(_T(" and adcp_contract_package_uid=%ld "), str2long(m_szContractPackageKey));
	};
	m_wndContractPackage.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" and adcp_org_id='%s' "), pMF->GetModuleID());

	szSQL.Format(_T("SELECT adcp_contract_package_uid as id, adcp_description as name ") \
		_T("FROM ad_contract_package WHERE adcp_isactive='Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContractPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CAdContractDialog::OnContractPackageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
/*void CAdContractDialog::OnDurationChange(){
	
} */
/*void CAdContractDialog::OnDurationSetfocus(){
	
} */
/*void CAdContractDialog::OnDurationKillfocus(){
	
} */
int CAdContractDialog::OnDurationCheckValue(){
	return 0;
} 
int CAdContractDialog::OnAdjustedAmtCheckValue() {
	return 0;
}
/*void CAdContractDialog::OnPaidAmtChange(){

} */
/*void CAdContractDialog::OnPaidAmtSetfocus(){

} */
/*void CAdContractDialog::OnPaidAmtKillfocus(){

} */
int CAdContractDialog::OnPaidAmtCheckValue() {
	return 0;
}
/*void CAdContractDialog::OnRemainingAmtChange(){

} */
/*void CAdContractDialog::OnRemainingAmtSetfocus(){

} */
/*void CAdContractDialog::OnRemainingAmtKillfocus(){

} */
int CAdContractDialog::OnRemainingAmtCheckValue() {
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractDialog::OnBankSelendok(){
	 
}
/*void CAdContractDialog::OnBankSetfocus(){
	
}*/
/*void CAdContractDialog::OnBankKillfocus(){
	
}*/
long CAdContractDialog::OnBankLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	pMF->LoadBankList(&m_wndBank, m_szBankKey);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdContractDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdContractDialog();
} 
void CAdContractDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdContractDialog::OnAddAdContractDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractDialog::OnEditAdContractDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractDialog::OnDeleteAdContractDialog(){
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
 		OnCancelAdContractDialog();
 	}
	return 0;
}
int CAdContractDialog::OnSaveAdContractDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_contractTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adc_contract_id=%ld "), m_nContractId);
 		szSQL = m_ad_contractTbl.GetUpdateSQL(_T("adc_contract_id, adc_org_id, adc_createdby,adc_createddate"));
 		szSQL += szWhere;
 	}
 _tprintf(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 		
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CAdContractDialog::OnAdContractDialogListLoadData(){
	return 0;
}
