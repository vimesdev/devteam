#include "COContractDialog.h"
#include "MainFrame_E10.h"
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnContractDateChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractDateChange();
} */
/*static void _OnContractDateSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractDateSetfocus();} */ 
/*static void _OnContractDateKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnContractDateKillfocus();
} */
static int _OnContractDateCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnContractDateCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnSignatureByChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnSignatureByChange();
} */
/*static void _OnSignatureBySetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnSignatureBySetfocus();} */ 
/*static void _OnSignatureByKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnSignatureByKillfocus();
} */
static int _OnSignatureByCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnSignatureByCheckValue();
} 
/*static void _OnPositionChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPositionChange();
} */
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPositionSetfocus();} */ 
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnPositionKillfocus();
} */
static int _OnPositionCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnPositionCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCOContractDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnExchangeRateCheckValue();
} 
/*static void _OnOriginalAmountChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnOriginalAmountChange();
} */
/*static void _OnOriginalAmountSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnOriginalAmountSetfocus();} */ 
/*static void _OnOriginalAmountKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnOriginalAmountKillfocus();
} */
static int _OnOriginalAmountCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnOriginalAmountCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCOContractDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnObjectSignaturedChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectSignaturedChange();
} */
/*static void _OnObjectSignaturedSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectSignaturedSetfocus();} */ 
/*static void _OnObjectSignaturedKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectSignaturedKillfocus();
} */
static int _OnObjectSignaturedCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectSignaturedCheckValue();
} 
/*static void _OnObjectPositionChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectPositionChange();
} */
/*static void _OnObjectPositionSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectPositionSetfocus();} */ 
/*static void _OnObjectPositionKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectPositionKillfocus();
} */
static int _OnObjectPositionCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectPositionCheckValue();
} 
/*static void _OnObjectTelChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectTelChange();
} */
/*static void _OnObjectTelSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectTelSetfocus();} */ 
/*static void _OnObjectTelKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectTelKillfocus();
} */
static int _OnObjectTelCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectTelCheckValue();
} 
/*static void _OnObjectFaxChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectFaxChange();
} */
/*static void _OnObjectFaxSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectFaxSetfocus();} */ 
/*static void _OnObjectFaxKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectFaxKillfocus();
} */
static int _OnObjectFaxCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectFaxCheckValue();
} 
/*static void _OnObjectAccountChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectAccountChange();
} */
/*static void _OnObjectAccountSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectAccountSetfocus();} */ 
/*static void _OnObjectAccountKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectAccountKillfocus();
} */
static int _OnObjectAccountCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectAccountCheckValue();
} 
/*static void _OnObjectBankChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectBankChange();
} */
/*static void _OnObjectBankSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectBankSetfocus();} */ 
/*static void _OnObjectBankKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnObjectBankKillfocus();
} */
static int _OnObjectBankCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnObjectBankCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCOContractDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CCOContractDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CCOContractDialog *)pWnd)->OnReasonCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCOContractDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCOContractDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCOContractDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCOContractDialog *pVw = (CCOContractDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCOContractDialog *pVw = (CCOContractDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAttachAFileSelectFnc(CWnd *pWnd){
	CCOContractDialog *pVw = (CCOContractDialog *)pWnd;
	pVw->OnAttachAFileSelect();
} 
static int _OnAddCOContractDialogFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnAddCOContractDialog();
} 
static int _OnEditCOContractDialogFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnEditCOContractDialog();
} 
static int _OnDeleteCOContractDialogFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnDeleteCOContractDialog();
} 
static int _OnSaveCOContractDialogFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnSaveCOContractDialog();
} 
static int _OnCancelCOContractDialogFnc(CWnd *pWnd){
	 return ((CCOContractDialog*)pWnd)->OnCancelCOContractDialog();
} 
CCOContractDialog::CCOContractDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 680;
	SetDefaultValues();
}
CCOContractDialog::~CCOContractDialog(){
}
void CCOContractDialog::OnCreateComponents(){
	m_wndContractInformation.Create(this, _T("Contract Information"), 5, 5, 880, 175);
	m_wndCustomerVendorInformation.Create(this, _T("Customer-Vendor Information"), 5, 180, 880, 325);
	m_wndContractState.Create(this, _T("Contract State"), 5, 330, 880, 385);
	m_wndAttachmentFiles.Create(this, _T("Attachment Files"), 5, 390, 880, 640);
	m_wndContractNoLabel.Create(this, _T("Contract No"), 10, 30, 110, 55);
	m_wndContractNo.Create(this,115, 30, 415, 55); 
	m_wndContractDateLabel.Create(this, _T("Contract Date"), 420, 30, 520, 55);
	m_wndContractDate.Create(this,525, 30, 645, 55); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 650, 30, 750, 55);
	m_wndPerformDate.Create(this,755, 30, 875, 55); 
	m_wndSignatureByLabel.Create(this, _T("Signature By"), 10, 60, 110, 85);
	m_wndSignatureBy.Create(this,115, 60, 415, 85); 
	m_wndPositionLabel.Create(this, _T("Position"), 420, 60, 520, 85);
	m_wndPosition.Create(this,525, 60, 875, 85); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 90, 110, 115);
	m_wndCurrency.Create(this,115, 90, 185, 115); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 190, 90, 290, 115);
	m_wndExchangeRate.Create(this,295, 90, 415, 115); 
	m_wndOriginalAmountLabel.Create(this, _T("Original Value"), 420, 90, 520, 115);
	m_wndOriginalAmount.Create(this,525, 90, 645, 115); 
	m_wndAmountLabel.Create(this, _T("Contract Value"), 650, 90, 750, 115);
	m_wndAmount.Create(this,755, 90, 875, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 110, 145);
	m_wndDescription.Create(this,115, 120, 875, 170); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 204, 110, 229);
	m_wndObject.Create(this,115, 204, 415, 229); 
	m_wndObjectNameLabel.Create(this, _T("Object Name"), 420, 204, 520, 229);
	m_wndObjectName.Create(this,525, 204, 875, 229); 
	m_wndObjectSignaturedLabel.Create(this, _T("Signatured"), 10, 234, 110, 259);
	m_wndObjectSignatured.Create(this,115, 234, 415, 259); 
	m_wndObjectPositionLabel.Create(this, _T("Position"), 420, 234, 520, 259);
	m_wndObjectPosition.Create(this,525, 234, 875, 259); 
	m_wndObjectTelLabel.Create(this, _T("Telephone"), 10, 264, 110, 289);
	m_wndObjectTel.Create(this,115, 264, 415, 289); 
	m_wndObjectFaxLabel.Create(this, _T("Fax"), 420, 264, 520, 289);
	m_wndObjectFax.Create(this,525, 264, 875, 289); 
	m_wndObjectAccountLabel.Create(this, _T("Account"), 10, 294, 110, 319);
	m_wndObjectAccount.Create(this,115, 294, 414, 319); 
	m_wndObjectBankLabel.Create(this, _T("Bank"), 419, 294, 519, 319);
	m_wndObjectBank.Create(this,524, 294, 874, 319); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 355, 110, 380);
	m_wndStatus.Create(this,115, 355, 185, 380); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 190, 355, 290, 380);
	m_wndEndDate.Create(this,295, 355, 415, 380); 
	m_wndReasonLabel.Create(this, _T("Reason"), 420, 355, 520, 380);
	m_wndReason.Create(this,525, 355, 875, 380); 
	m_wndList.Create(this,10, 414, 875, 634); 
	m_wndSave.Create(this, _T("&Save"), 716, 645, 796, 670);
	m_wndClose.Create(this, _T("&Close"), 801, 645, 881, 670);
	m_wndAttachAFile.Create(this, _T("Attach a file"), 5, 645, 85, 670);

}
void CCOContractDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndContractNo.SetCheckValue(true);
	m_wndContractDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndContractDate.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndSignatureBy.SetCheckValue(true);
	m_wndPosition.SetCheckValue(true);
	m_wndCurrency.SetCheckValue(true);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndOriginalAmount.SetCheckValue(true);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndObjectSignatured.SetCheckValue(true);
	m_wndObjectPosition.SetCheckValue(true);
	m_wndObjectTel.SetCheckValue(true);
	m_wndObjectFax.SetCheckValue(true);
	m_wndObjectAccount.SetCheckValue(true);
	m_wndObjectBank.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(true);
	m_wndReason.SetCheckValue(true);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Document Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(1, _T("File Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 400);
	m_acc_contractTbl.SetTableName(_T("acc_contract"));
	m_acc_contractTbl.AddField(_T("ac_createdby"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_createddate"), dfDateTime); 
	m_acc_contractTbl.AddField(_T("ac_updatedby"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_updateddate"), dfDateTime); 
	m_acc_contractTbl.AddField(_T("ac_contract_no"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_contract_type"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_contract_category"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_contract_date"), dfDate); 
	m_acc_contractTbl.AddField(_T("ac_perform_date"), dfDate); 
	m_acc_contractTbl.AddField(_T("ac_signature_by"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_position"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_currency_id"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_exchange_rate"), dfDouble); 
	m_acc_contractTbl.AddField(_T("ac_orgamount"), dfDouble); 
	m_acc_contractTbl.AddField(_T("ac_orgpayment"), dfDouble); 
	m_acc_contractTbl.AddField(_T("ac_amount"), dfDouble); 
	m_acc_contractTbl.AddField(_T("ac_payment"), dfDouble); 
	m_acc_contractTbl.AddField(_T("ac_object_id"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_sign"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_position"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_tel"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_fax"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_account"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_object_bank"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_description"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_status"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_end_date"), dfDate); 
	m_acc_contractTbl.AddField(_T("ac_end_reason"), dfText, 0); 
	m_acc_contractTbl.AddField(_T("ac_cost_spy"), dfText, 0); 

}
void CCOContractDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndContractDate.SetEvent(WE_CHANGE, _OnContractDateChangeFnc);
	//m_wndContractDate.SetEvent(WE_SETFOCUS, _OnContractDateSetfocusFnc);
	//m_wndContractDate.SetEvent(WE_KILLFOCUS, _OnContractDateKillfocusFnc);
	m_wndContractDate.SetEvent(WE_CHECKVALUE, _OnContractDateCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	//m_wndSignatureBy.SetEvent(WE_CHANGE, _OnSignatureByChangeFnc);
	//m_wndSignatureBy.SetEvent(WE_SETFOCUS, _OnSignatureBySetfocusFnc);
	//m_wndSignatureBy.SetEvent(WE_KILLFOCUS, _OnSignatureByKillfocusFnc);
	m_wndSignatureBy.SetEvent(WE_CHECKVALUE, _OnSignatureByCheckValueFnc);
	//m_wndPosition.SetEvent(WE_CHANGE, _OnPositionChangeFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_CHECKVALUE, _OnPositionCheckValueFnc);
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchangeRate.SetEvent(WE_CHANGE, _OnExchangeRateChangeFnc);
	//m_wndExchangeRate.SetEvent(WE_SETFOCUS, _OnExchangeRateSetfocusFnc);
	//m_wndExchangeRate.SetEvent(WE_KILLFOCUS, _OnExchangeRateKillfocusFnc);
	m_wndExchangeRate.SetEvent(WE_CHECKVALUE, _OnExchangeRateCheckValueFnc);
	//m_wndOriginalAmount.SetEvent(WE_CHANGE, _OnOriginalAmountChangeFnc);
	//m_wndOriginalAmount.SetEvent(WE_SETFOCUS, _OnOriginalAmountSetfocusFnc);
	//m_wndOriginalAmount.SetEvent(WE_KILLFOCUS, _OnOriginalAmountKillfocusFnc);
	m_wndOriginalAmount.SetEvent(WE_CHECKVALUE, _OnOriginalAmountCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObjectName.SetEvent(WE_CHANGE, _OnObjectNameChangeFnc);
	//m_wndObjectName.SetEvent(WE_SETFOCUS, _OnObjectNameSetfocusFnc);
	//m_wndObjectName.SetEvent(WE_KILLFOCUS, _OnObjectNameKillfocusFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	//m_wndObjectSignatured.SetEvent(WE_CHANGE, _OnObjectSignaturedChangeFnc);
	//m_wndObjectSignatured.SetEvent(WE_SETFOCUS, _OnObjectSignaturedSetfocusFnc);
	//m_wndObjectSignatured.SetEvent(WE_KILLFOCUS, _OnObjectSignaturedKillfocusFnc);
	m_wndObjectSignatured.SetEvent(WE_CHECKVALUE, _OnObjectSignaturedCheckValueFnc);
	//m_wndObjectPosition.SetEvent(WE_CHANGE, _OnObjectPositionChangeFnc);
	//m_wndObjectPosition.SetEvent(WE_SETFOCUS, _OnObjectPositionSetfocusFnc);
	//m_wndObjectPosition.SetEvent(WE_KILLFOCUS, _OnObjectPositionKillfocusFnc);
	m_wndObjectPosition.SetEvent(WE_CHECKVALUE, _OnObjectPositionCheckValueFnc);
	//m_wndObjectTel.SetEvent(WE_CHANGE, _OnObjectTelChangeFnc);
	//m_wndObjectTel.SetEvent(WE_SETFOCUS, _OnObjectTelSetfocusFnc);
	//m_wndObjectTel.SetEvent(WE_KILLFOCUS, _OnObjectTelKillfocusFnc);
	m_wndObjectTel.SetEvent(WE_CHECKVALUE, _OnObjectTelCheckValueFnc);
	//m_wndObjectFax.SetEvent(WE_CHANGE, _OnObjectFaxChangeFnc);
	//m_wndObjectFax.SetEvent(WE_SETFOCUS, _OnObjectFaxSetfocusFnc);
	//m_wndObjectFax.SetEvent(WE_KILLFOCUS, _OnObjectFaxKillfocusFnc);
	m_wndObjectFax.SetEvent(WE_CHECKVALUE, _OnObjectFaxCheckValueFnc);
	//m_wndObjectAccount.SetEvent(WE_CHANGE, _OnObjectAccountChangeFnc);
	//m_wndObjectAccount.SetEvent(WE_SETFOCUS, _OnObjectAccountSetfocusFnc);
	//m_wndObjectAccount.SetEvent(WE_KILLFOCUS, _OnObjectAccountKillfocusFnc);
	m_wndObjectAccount.SetEvent(WE_CHECKVALUE, _OnObjectAccountCheckValueFnc);
	//m_wndObjectBank.SetEvent(WE_CHANGE, _OnObjectBankChangeFnc);
	//m_wndObjectBank.SetEvent(WE_SETFOCUS, _OnObjectBankSetfocusFnc);
	//m_wndObjectBank.SetEvent(WE_KILLFOCUS, _OnObjectBankKillfocusFnc);
	m_wndObjectBank.SetEvent(WE_CHECKVALUE, _OnObjectBankCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAttachAFile.SetEvent(WE_CLICK, _OnAttachAFileSelectFnc);
	SetMode(VM_NONE);

}
void CCOContractDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_TextEx(pDX, m_wndContractDate.GetDlgCtrlID(), m_szContractDate);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndSignatureBy.GetDlgCtrlID(), m_szSignatureBy);
	DDX_Text(pDX, m_wndPosition.GetDlgCtrlID(), m_szPosition);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_Text(pDX, m_wndOriginalAmount.GetDlgCtrlID(), m_nOriginalAmount);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndObjectSignatured.GetDlgCtrlID(), m_szObjectSignatured);
	DDX_Text(pDX, m_wndObjectPosition.GetDlgCtrlID(), m_szObjectPosition);
	DDX_Text(pDX, m_wndObjectTel.GetDlgCtrlID(), m_szObjectTel);
	DDX_Text(pDX, m_wndObjectFax.GetDlgCtrlID(), m_szObjectFax);
	DDX_Text(pDX, m_wndObjectAccount.GetDlgCtrlID(), m_szObjectAccount);
	DDX_Text(pDX, m_wndObjectBank.GetDlgCtrlID(), m_szObjectBank);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CCOContractDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ac_contract_no"), m_szContractNo);
	rs.GetValue(_T("ac_contract_date"), m_szContractDate);
	rs.GetValue(_T("ac_perform_date"), m_szPerformDate);
	rs.GetValue(_T("ac_signature_by"), m_szSignatureBy);
	rs.GetValue(_T("ac_position"), m_szPosition);
	rs.GetValue(_T("ac_currency_id"), m_szCurrencyKey);
	rs.GetValue(_T("ac_exchange_rate"), m_nExchangeRate);
	rs.GetValue(_T("ac_orgamount"), m_nOriginalAmount);
	rs.GetValue(_T("ac_amount"), m_nAmount);
	rs.GetValue(_T("ac_object_id"), m_szObjectKey);
	rs.GetValue(_T("ac_object_sign"), m_szObjectSignatured);
	rs.GetValue(_T("ac_object_position"), m_szObjectPosition);
	rs.GetValue(_T("ac_object_tel"), m_szObjectTel);
	rs.GetValue(_T("ac_object_fax"), m_szObjectFax);
	rs.GetValue(_T("ac_object_account"), m_szObjectAccount);
	rs.GetValue(_T("ac_object_bank"), m_szObjectBank);
	rs.GetValue(_T("ac_description"), m_szDescription);
	rs.GetValue(_T("ac_status"), m_szStatusKey);
	rs.GetValue(_T("ac_end_date"), m_szEndDate);
	rs.GetValue(_T("ac_end_reason"), m_szReason);

}
void CCOContractDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_acc_contractTbl.SetValue(_T("ac_createdby"), pMF->GetCurrentUser());
	m_acc_contractTbl.SetValue(_T("ac_createddate"), pMF->GetSysDateTime());
	m_acc_contractTbl.SetValue(_T("ac_updatedby"), pMF->GetCurrentUser());
	m_acc_contractTbl.SetValue(_T("ac_updateddate"), pMF->GetSysDateTime());
	m_acc_contractTbl.SetValue(_T("ac_contract_no"), m_szContractNo);
	m_acc_contractTbl.SetValue(_T("ac_contract_date"), m_szContractDate);
	m_acc_contractTbl.SetValue(_T("ac_perform_date"), m_szPerformDate);
	m_acc_contractTbl.SetValue(_T("ac_signature_by"), m_szSignatureBy);
	m_acc_contractTbl.SetValue(_T("ac_position"), m_szPosition);
	m_acc_contractTbl.SetValue(_T("ac_currency_id"), m_szCurrencyKey);
	m_acc_contractTbl.SetValue(_T("ac_exchange_rate"), m_nExchangeRate);
	m_acc_contractTbl.SetValue(_T("ac_orgamount"), m_nOriginalAmount);
	m_acc_contractTbl.SetValue(_T("ac_amount"), m_nAmount);
	m_acc_contractTbl.SetValue(_T("ac_object_id"), m_szObjectKey);
	m_acc_contractTbl.SetValue(_T("ac_object_sign"), m_szObjectSignatured);
	m_acc_contractTbl.SetValue(_T("ac_object_position"), m_szObjectPosition);
	m_acc_contractTbl.SetValue(_T("ac_object_tel"), m_szObjectTel);
	m_acc_contractTbl.SetValue(_T("ac_object_fax"), m_szObjectFax);
	m_acc_contractTbl.SetValue(_T("ac_object_account"), m_szObjectAccount);
	m_acc_contractTbl.SetValue(_T("ac_object_bank"), m_szObjectBank);
	m_acc_contractTbl.SetValue(_T("ac_description"), m_szDescription);
	m_acc_contractTbl.SetValue(_T("ac_status"), m_szStatusKey);
	m_acc_contractTbl.SetValue(_T("ac_end_date"), m_szEndDate);
	m_acc_contractTbl.SetValue(_T("ac_end_reason"), m_szReason);

}
void CCOContractDialog::SetDefaultValues(){

	m_szContractNo.Empty();
	m_szContractDate.Empty();
	m_szPerformDate.Empty();
	m_szSignatureBy.Empty();
	m_szPosition.Empty();
	m_szCurrencyKey.Empty();
	m_nExchangeRate=0;
	m_nOriginalAmount=0;
	m_nAmount=0;
	m_szDescription.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szObjectSignatured.Empty();
	m_szObjectPosition.Empty();
	m_szObjectTel.Empty();
	m_szObjectFax.Empty();
	m_szObjectAccount.Empty();
	m_szObjectBank.Empty();
	m_szStatusKey.Empty();
	m_szEndDate.Empty();
	m_szReason.Empty();

}
int CCOContractDialog::SetMode(int nMode){
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
/*void CCOContractDialog::OnContractNoChange(){
	
} */
/*void CCOContractDialog::OnContractNoSetfocus(){
	
} */
/*void CCOContractDialog::OnContractNoKillfocus(){
	
} */
int CCOContractDialog::OnContractNoCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnContractDateChange(){
	
} */
/*void CCOContractDialog::OnContractDateSetfocus(){
	
} */
/*void CCOContractDialog::OnContractDateKillfocus(){
	
} */
int CCOContractDialog::OnContractDateCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnPerformDateChange(){
	
} */
/*void CCOContractDialog::OnPerformDateSetfocus(){
	
} */
/*void CCOContractDialog::OnPerformDateKillfocus(){
	
} */
int CCOContractDialog::OnPerformDateCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnSignatureByChange(){
	
} */
/*void CCOContractDialog::OnSignatureBySetfocus(){
	
} */
/*void CCOContractDialog::OnSignatureByKillfocus(){
	
} */
int CCOContractDialog::OnSignatureByCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnPositionChange(){
	
} */
/*void CCOContractDialog::OnPositionSetfocus(){
	
} */
/*void CCOContractDialog::OnPositionKillfocus(){
	
} */
int CCOContractDialog::OnPositionCheckValue(){
	return 0;
} 
void CCOContractDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractDialog::OnCurrencySelendok(){
	 
}
/*void CCOContractDialog::OnCurrencySetfocus(){
	
}*/
/*void CCOContractDialog::OnCurrencyKillfocus(){
	
}*/
long CCOContractDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCurrency.IsSearchKey() && !m_szCurrencyKey.IsEmpty()){
	};
	m_wndCurrency.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCurrency.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCOContractDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCOContractDialog::OnExchangeRateChange(){
	
} */
/*void CCOContractDialog::OnExchangeRateSetfocus(){
	
} */
/*void CCOContractDialog::OnExchangeRateKillfocus(){
	
} */
int CCOContractDialog::OnExchangeRateCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnOriginalAmountChange(){
	
} */
/*void CCOContractDialog::OnOriginalAmountSetfocus(){
	
} */
/*void CCOContractDialog::OnOriginalAmountKillfocus(){
	
} */
int CCOContractDialog::OnOriginalAmountCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnAmountChange(){
	
} */
/*void CCOContractDialog::OnAmountSetfocus(){
	
} */
/*void CCOContractDialog::OnAmountKillfocus(){
	
} */
int CCOContractDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnDescriptionChange(){
	
} */
/*void CCOContractDialog::OnDescriptionSetfocus(){
	
} */
/*void CCOContractDialog::OnDescriptionKillfocus(){
	
} */
int CCOContractDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CCOContractDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractDialog::OnObjectSelendok(){
	 
}
/*void CCOContractDialog::OnObjectSetfocus(){
	
}*/
/*void CCOContractDialog::OnObjectKillfocus(){
	
}*/
long CCOContractDialog::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCOContractDialog::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCOContractDialog::OnObjectNameChange(){
	
} */
/*void CCOContractDialog::OnObjectNameSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectNameKillfocus(){
	
} */
int CCOContractDialog::OnObjectNameCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectSignaturedChange(){
	
} */
/*void CCOContractDialog::OnObjectSignaturedSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectSignaturedKillfocus(){
	
} */
int CCOContractDialog::OnObjectSignaturedCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectPositionChange(){
	
} */
/*void CCOContractDialog::OnObjectPositionSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectPositionKillfocus(){
	
} */
int CCOContractDialog::OnObjectPositionCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectTelChange(){
	
} */
/*void CCOContractDialog::OnObjectTelSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectTelKillfocus(){
	
} */
int CCOContractDialog::OnObjectTelCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectFaxChange(){
	
} */
/*void CCOContractDialog::OnObjectFaxSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectFaxKillfocus(){
	
} */
int CCOContractDialog::OnObjectFaxCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectAccountChange(){
	
} */
/*void CCOContractDialog::OnObjectAccountSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectAccountKillfocus(){
	
} */
int CCOContractDialog::OnObjectAccountCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnObjectBankChange(){
	
} */
/*void CCOContractDialog::OnObjectBankSetfocus(){
	
} */
/*void CCOContractDialog::OnObjectBankKillfocus(){
	
} */
int CCOContractDialog::OnObjectBankCheckValue(){
	return 0;
} 
void CCOContractDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractDialog::OnStatusSelendok(){
	 
}
/*void CCOContractDialog::OnStatusSetfocus(){
	
}*/
/*void CCOContractDialog::OnStatusKillfocus(){
	
}*/
long CCOContractDialog::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCOContractDialog::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCOContractDialog::OnEndDateChange(){
	
} */
/*void CCOContractDialog::OnEndDateSetfocus(){
	
} */
/*void CCOContractDialog::OnEndDateKillfocus(){
	
} */
int CCOContractDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CCOContractDialog::OnReasonChange(){
	
} */
/*void CCOContractDialog::OnReasonSetfocus(){
	
} */
/*void CCOContractDialog::OnReasonKillfocus(){
	
} */
int CCOContractDialog::OnReasonCheckValue(){
	return 0;
} 
void CCOContractDialog::OnListDblClick(){
	
} 
void CCOContractDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CCOContractDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CCOContractDialog::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("DocumentName")), 
			rs.GetValue(_T("FileName")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCOContractDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractDialog::OnAttachAFileSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CCOContractDialog::OnAddCOContractDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCOContractDialog::OnEditCOContractDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCOContractDialog::OnDeleteCOContractDialog(){
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
 		OnCancelCOContractDialog();
 	}
	return 0;
}
int CCOContractDialog::OnSaveCOContractDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_acc_contractTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_acc_contractTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnCOContractDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCOContractDialog::OnCancelCOContractDialog(){
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
int CCOContractDialog::OnCOContractDialogListLoadData(){
	return 0;
}
