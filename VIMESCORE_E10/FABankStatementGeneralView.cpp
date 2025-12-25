#include "FABankStatementGeneralView.h"
#include "MainFrame_E10.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnDocumentCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPartnerBankAccountChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankAccountChange();
} */
/*static void _OnPartnerBankAccountSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankAccountSetfocus();} */ 
/*static void _OnPartnerBankAccountKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankAccountKillfocus();
} */
static int _OnPartnerBankAccountCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnPartnerBankAccountCheckValue();
} 
/*static void _OnPartnerBankNameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankNameChange();
} */
/*static void _OnPartnerBankNameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankNameSetfocus();} */ 
/*static void _OnPartnerBankNameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnPartnerBankNameKillfocus();
} */
static int _OnPartnerBankNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnPartnerBankNameCheckValue();
} 
static void _OnOwnerBankAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView* )pWnd)->OnOwnerBankAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOwnerBankAccountSelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankAccountSelendok();
}
/*static void _OnOwnerBankAccountSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankAccountKillfocus();
}*/
/*static void _OnOwnerBankAccountKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankAccountKillfocus();
}*/
static long _OnOwnerBankAccountLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnOwnerBankAccountLoadData();
	
}
/*static void _OnOwnerBankAccountAddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankAccountAddNew();
}*/
/*static void _OnOwnerBankNameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankNameChange();
} */
/*static void _OnOwnerBankNameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankNameSetfocus();} */ 
/*static void _OnOwnerBankNameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBankNameKillfocus();
} */
static int _OnOwnerBankNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnOwnerBankNameCheckValue();
}


static void _OnOwnerBank2AccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView* )pWnd)->OnOwnerBank2AccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOwnerBank2AccountSelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2AccountSelendok();
}
/*static void _OnOwnerBank2AccountSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2AccountKillfocus();
}*/
/*static void _OnOwnerBank2AccountKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2AccountKillfocus();
}*/
static long _OnOwnerBank2AccountLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2AccountLoadData();
	
}
/*static void _OnOwnerBank2AccountAddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2AccountAddNew();
}*/
/*static void _OnOwnerBank2NameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2NameChange();
} */
/*static void _OnOwnerBank2NameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2NameSetfocus();} */ 
/*static void _OnOwnerBank2NameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2NameKillfocus();
} */
static int _OnOwnerBank2NameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnOwnerBank2NameCheckValue();
}

/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnReasonCheckValue();
}


static void _OnAddObjectClickFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddObjectClick();
}

static int _OnAddFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnAddFABankStatementGeneralView();
} 
static int _OnEditFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnEditFABankStatementGeneralView();
} 
static int _OnDeleteFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnDeleteFABankStatementGeneralView();
} 
static int _OnSaveFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnSaveFABankStatementGeneralView();
} 
static int _OnCancelFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnCancelFABankStatementGeneralView();
} 
CFABankStatementGeneralView::CFABankStatementGeneralView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 210;
	SetDefaultValues();
}
CFABankStatementGeneralView::~CFABankStatementGeneralView(){
}
void CFABankStatementGeneralView::OnCreateComponents(){
if(m_szDocType == _T("BAR"))
{
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 210);
	m_wndPartnerBankInformation.Create(this, _T("Applicant"), 230, 5, 800, 120);
	m_wndOwnerBankInformation.Create(this, _T("Benificiary"), 230, 125, 800, 210);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentLabel.Create(this, _T("Ref#"), 9, 120, 109, 145);
	m_wndDocument.Create(this,114, 120, 219, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 235, 30, 335, 55);
	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 335, 85);
	m_wndAddress.Create(this,340, 60, 795, 85); 
	m_wndPartnerBankAccountLabel.Create(this, _T("Account"), 235, 90, 335, 115);
	m_wndPartnerBankAccount.Create(this,340, 90, 460, 115); 
	m_wndPartnerBankName.Create(this,465, 90, 795, 115); 
	m_wndOwnerBankAccountLabel.Create(this, _T("Account"), 235, 150, 335, 175);
	m_wndOwnerBankAccount.Create(this,340, 150, 461, 175); 
	m_wndOwnerBankName.Create(this,466, 150, 796, 175); 
	m_wndReasonLabel.Create(this, _T("Description"), 235, 180, 335, 205);
	m_wndReason.Create(this,340, 179, 795, 205); 
}
else if(m_szDocType == _T("BAP"))
{
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 4, 5, 224, 210);
	m_wndOwnerBankInformation.Create(this, _T("Applicant"), 230, 5, 800, 90);
	m_wndPartnerBankInformation.Create(this, _T("Benificiary"), 230, 95, 800, 210);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentLabel.Create(this, _T("Ref#"), 10, 120, 109, 145);
	m_wndDocument.Create(this,114, 120, 219, 145); 

	m_wndOwnerBankAccountLabel.Create(this, _T("Account"), 235, 30, 335, 55);
	m_wndOwnerBankAccount.Create(this,340, 30, 461, 55); 
	m_wndOwnerBankName.Create(this,466, 30, 796, 55); 
	m_wndReasonLabel.Create(this, _T("Description"), 235, 60, 335, 85);
	m_wndReason.Create(this,340, 59, 795, 85); 


	m_wndObjectLabel.Create(this, _T("Object"), 235, 120, 335, 145);
	m_wndObject.Create(this,340, 120, 460, 145); 
	m_wndObjectName.Create(this,465, 120, 795, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 150, 335, 175);
	m_wndAddress.Create(this,340, 150, 795, 175); 
	m_wndPartnerBankAccountLabel.Create(this, _T("Account"), 235, 180, 335, 205);
	m_wndPartnerBankAccount.Create(this,340, 180, 460, 205); 
	m_wndPartnerBankName.Create(this,465, 180, 795, 205); 


}
else if(m_szDocType == _T("BAM"))
{
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 150);
	m_wndOwnerBankInformation.Create(this, _T("Applicant"), 230, 5, 800, 60);
	m_wndPartnerBankInformation.Create(this, _T("Benificiary"), 230, 65, 800, 120);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentLabel.Create(this, _T("Ref#"), 10, 120, 110, 145);
	m_wndDocument.Create(this,114, 120, 219, 145); 
	m_wndOwnerBankAccountLabel.Create(this, _T("Account"), 235, 30, 335, 55);
	m_wndOwnerBankAccount.Create(this,340, 30, 460, 55); 
	m_wndOwnerBankName.Create(this,465, 30, 795, 55); 
	//
	m_wndObjectLabel.Create(this, _T("Account"), 235, 90, 335, 115);
	m_wndObject.Create(this,340, 90, 461, 115); 
	m_wndObjectName.Create(this,466, 90, 796, 115); 




	m_wndOwnerBank2AccountLabel.Create(this, _T("Account"), 235, 90, 335, 115);
	m_wndOwnerBank2Account.Create(this,340, 90, 461, 115); 
	m_wndOwnerBank2Name.Create(this,466, 90, 796, 115); 


	m_wndReasonLabel.Create(this, _T("Description"), 235, 125, 335, 150);
	m_wndReason.Create(this,340, 125, 795, 150); 



	
	m_wndPartnerBankAccount.Create(this, 0, 0,0,0);
	m_wndPartnerBankName.Create(this, 0, 0, 0, 0);
	m_wndPartnerBankName.SetReadOnly(true);
	m_wndAddress.Create(this, 0, 0, 0, 0);
	m_wndPartnerBankAccount.SetReadOnly(true);
	m_wndAddress.SetReadOnly(true);
	m_wndPartnerBankAccount.ModifyStyle(WS_TABSTOP, 0);
	m_wndPartnerBankName.ModifyStyle(WS_TABSTOP, 0);
	m_wndAddress.ModifyStyle(WS_TABSTOP, 0);

	m_wndPartnerBankAccount.ShowWindow(SW_HIDE);
	m_wndPartnerBankName.ShowWindow(SW_HIDE);
	m_wndAddress.ShowWindow(SW_HIDE);

	m_wndObject.ShowWindow(SW_HIDE);
	m_wndObject.SetReadOnly(true);
	m_wndObjectName.ShowWindow(SW_HIDE);
	m_wndObjectName.SetReadOnly(true);
	m_wndObjectLabel.ShowWindow(SW_HIDE);
	m_wndObject.ModifyStyle(WS_TABSTOP, 0);
	m_wndObjectName.ModifyStyle(WS_TABSTOP, 0);




}

}
void CFABankStatementGeneralView::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndVoucherNo.SetLimitText(1024);
	m_wndVoucherNo.SetCheckValue(true);
	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndDocument.SetLimitText(35);
//	m_wndDocument.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObjectName.SetLimitText(254);
	m_wndObjectName.SetCheckValue(false);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(false);
	m_wndPartnerBankAccount.SetLimitText(15);
	m_wndPartnerBankAccount.SetCheckValue(false);
	m_wndPartnerBankName.SetLimitText(254);
	m_wndPartnerBankName.SetCheckValue(false);
	m_wndOwnerBankAccount.SetCheckValue(true);
	m_wndOwnerBankAccount.LimitText(15);
	m_wndOwnerBankName.SetLimitText(254);
//	m_wndOwnerBankName.SetCheckValue(false);
	m_wndReason.SetLimitText(254);
	m_wndReason.SetCheckValue(false);

	

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndObject.InsertColumn(3, _T("Address"), CFMT_TEXT, 0);
	m_wndObject.InsertColumn(4, _T(""), CFMT_TEXT, 0); //object_type
	m_wndObject.Format(2, 0);

	m_wndOwnerBankAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndOwnerBankAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndOwnerBankAccount.Format(2, 0);
	m_wndObjectName.SetReadOnly(false);
	m_wndOwnerBankName.SetReadOnly(false);

	m_wndObjectLabel.SetHyperlink(true);

	if(m_szDocType == _T("BAM"))
	{
		m_wndOwnerBank2Account.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
		m_wndOwnerBank2Account.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
		m_wndOwnerBank2Account.Format(2, 0);
	}
	
}
void CFABankStatementGeneralView::OnSetWindowEvents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndVoucherNo.SetEvent(WE_CHANGE, _OnVoucherNoChangeFnc);
	//m_wndVoucherNo.SetEvent(WE_SETFOCUS, _OnVoucherNoSetfocusFnc);
	//m_wndVoucherNo.SetEvent(WE_KILLFOCUS, _OnVoucherNoKillfocusFnc);
	m_wndVoucherNo.SetEvent(WE_CHECKVALUE, _OnVoucherNoCheckValueFnc);
	//m_wndVoucherDate.SetEvent(WE_CHANGE, _OnVoucherDateChangeFnc);
	//m_wndVoucherDate.SetEvent(WE_SETFOCUS, _OnVoucherDateSetfocusFnc);
	//m_wndVoucherDate.SetEvent(WE_KILLFOCUS, _OnVoucherDateKillfocusFnc);
	m_wndVoucherDate.SetEvent(WE_CHECKVALUE, _OnVoucherDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	//m_wndDocument.SetEvent(WE_CHANGE, _OnDocumentChangeFnc);
	//m_wndDocument.SetEvent(WE_SETFOCUS, _OnDocumentSetfocusFnc);
	//m_wndDocument.SetEvent(WE_KILLFOCUS, _OnDocumentKillfocusFnc);
	m_wndDocument.SetEvent(WE_CHECKVALUE, _OnDocumentCheckValueFnc);
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
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_CHANGE, _OnPartnerBankAccountChangeFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_SETFOCUS, _OnPartnerBankAccountSetfocusFnc);
	//m_wndPartnerBankAccount.SetEvent(WE_KILLFOCUS, _OnPartnerBankAccountKillfocusFnc);
	m_wndPartnerBankAccount.SetEvent(WE_CHECKVALUE, _OnPartnerBankAccountCheckValueFnc);
	//m_wndPartnerBankName.SetEvent(WE_CHANGE, _OnPartnerBankNameChangeFnc);
	//m_wndPartnerBankName.SetEvent(WE_SETFOCUS, _OnPartnerBankNameSetfocusFnc);
	//m_wndPartnerBankName.SetEvent(WE_KILLFOCUS, _OnPartnerBankNameKillfocusFnc);
	m_wndPartnerBankName.SetEvent(WE_CHECKVALUE, _OnPartnerBankNameCheckValueFnc);
	m_wndOwnerBankAccount.SetEvent(WE_SELENDOK, _OnOwnerBankAccountSelendokFnc);
	//m_wndOwnerBankAccount.SetEvent(WE_SETFOCUS, _OnOwnerBankAccountSetfocusFnc);
	//m_wndOwnerBankAccount.SetEvent(WE_KILLFOCUS, _OnOwnerBankAccountKillfocusFnc);
	m_wndOwnerBankAccount.SetEvent(WE_SELCHANGE, _OnOwnerBankAccountSelectChangeFnc);
	m_wndOwnerBankAccount.SetEvent(WE_LOADDATA, _OnOwnerBankAccountLoadDataFnc);
	//m_wndOwnerBankAccount.SetEvent(WE_ADDNEW, _OnOwnerBankAccountAddNewFnc);
	//m_wndOwnerBankName.SetEvent(WE_CHANGE, _OnOwnerBankNameChangeFnc);
	//m_wndOwnerBankName.SetEvent(WE_SETFOCUS, _OnOwnerBankNameSetfocusFnc);
	//m_wndOwnerBankName.SetEvent(WE_KILLFOCUS, _OnOwnerBankNameKillfocusFnc);
	m_wndOwnerBankName.SetEvent(WE_CHECKVALUE, _OnOwnerBankNameCheckValueFnc);


	if(m_szDocType == _T("BAM"))
	{
		m_wndOwnerBank2Account.SetEvent(WE_SELENDOK, _OnOwnerBank2AccountSelendokFnc);
		//m_wndOwnerBank2Account.SetEvent(WE_SETFOCUS, _OnOwnerBank2AccountSetfocusFnc);
		//m_wndOwnerBank2Account.SetEvent(WE_KILLFOCUS, _OnOwnerBank2AccountKillfocusFnc);
		m_wndOwnerBank2Account.SetEvent(WE_SELCHANGE, _OnOwnerBank2AccountSelectChangeFnc);
		m_wndOwnerBank2Account.SetEvent(WE_LOADDATA, _OnOwnerBank2AccountLoadDataFnc);
		//m_wndOwnerBank2Account.SetEvent(WE_ADDNEW, _OnOwnerBank2AccountAddNewFnc);
		//m_wndOwnerBank2Name.SetEvent(WE_CHANGE, _OnOwnerBank2NameChangeFnc);
		//m_wndOwnerBank2Name.SetEvent(WE_SETFOCUS, _OnOwnerBank2NameSetfocusFnc);
		//m_wndOwnerBank2Name.SetEvent(WE_KILLFOCUS, _OnOwnerBank2NameKillfocusFnc);
		m_wndOwnerBank2Name.SetEvent(WE_CHECKVALUE, _OnOwnerBank2NameCheckValueFnc);
	}


	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);

	m_wndObjectLabel.SetEvent(WE_CLICK, _OnAddObjectClickFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFABankStatementGeneralViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFABankStatementGeneralViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFABankStatementGeneralViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFABankStatementGeneralViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFABankStatementGeneralViewFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CFABankStatementGeneralView::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPartnerBankAccount.GetDlgCtrlID(), m_szPartnerBankAccount);
	DDX_Text(pDX, m_wndPartnerBankName.GetDlgCtrlID(), m_szPartnerBankName);
	DDX_TextEx(pDX, m_wndOwnerBankAccount.GetDlgCtrlID(), m_szOwnerBankAccount);
	DDX_Text(pDX, m_wndOwnerBankName.GetDlgCtrlID(), m_szOwnerBankName);
	if(m_szDocType == _T("BAM"))
	{
		DDX_TextEx(pDX, m_wndOwnerBank2Account.GetDlgCtrlID(), m_szOwnerBankAccount);
		DDX_Text(pDX, m_wndOwnerBank2Name.GetDlgCtrlID(), m_szOwnerBankName);
	}

	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CFABankStatementGeneralView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFABankStatementGeneralView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFABankStatementGeneralView::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szDocument.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szPartnerBankAccount.Empty();
	m_szPartnerBankName.Empty();
	m_szOwnerBankAccount.Empty();
	m_szOwnerBankName.Empty();
	m_szReason.Empty();

}
int CFABankStatementGeneralView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
		m_wndObjectName.EnableWindow(false);
		m_wndOwnerBankName.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFABankStatementGeneralView::OnVoucherNoChange(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherNoSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherNoKillfocus(){
	
} */
int CFABankStatementGeneralView::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnVoucherDateChange(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherDateKillfocus(){
	
} */
int CFABankStatementGeneralView::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnAccountingDateChange(){
	
} */
/*void CFABankStatementGeneralView::OnAccountingDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnAccountingDateKillfocus(){
	
} */
int CFABankStatementGeneralView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnDocumentChange(){
	
} */
/*void CFABankStatementGeneralView::OnDocumentSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnDocumentKillfocus(){
	
} */
int CFABankStatementGeneralView::OnDocumentCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView::OnObjectSelendok(){
	UpdateData(true);
	m_szObjectName = m_wndObject.GetCurrent(1);
	if(m_szAddress.IsEmpty())
		m_szAddress = m_wndObject.GetCurrent(2);

	UpdateData(false);
}
/*void CFABankStatementGeneralView::OnObjectSetfocus(){
	
}*/
/*void CFABankStatementGeneralView::OnObjectKillfocus(){
	
}*/
long CFABankStatementGeneralView::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadObjectList(&m_wndObject, m_szObjectKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementGeneralView::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView::OnObjectNameChange(){
	
} */
/*void CFABankStatementGeneralView::OnObjectNameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnObjectNameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnObjectNameCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnAddressChange(){
	
} */
/*void CFABankStatementGeneralView::OnAddressSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnAddressKillfocus(){
	
} */
int CFABankStatementGeneralView::OnAddressCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnPartnerBankAccountChange(){
	
} */
/*void CFABankStatementGeneralView::OnPartnerBankAccountSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnPartnerBankAccountKillfocus(){
	
} */
int CFABankStatementGeneralView::OnPartnerBankAccountCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnPartnerBankNameChange(){
	
} */
/*void CFABankStatementGeneralView::OnPartnerBankNameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnPartnerBankNameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnPartnerBankNameCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView::OnOwnerBankAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView::OnOwnerBankAccountSelendok(){
	 UpdateData(true);
	 m_szOwnerBankName = m_wndOwnerBankAccount.GetCurrent(1);
	 UpdateData(false);
}
/*void CFABankStatementGeneralView::OnOwnerBankAccountSetfocus(){
	
}*/
/*void CFABankStatementGeneralView::OnOwnerBankAccountKillfocus(){
	
}*/
long CFABankStatementGeneralView::OnOwnerBankAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadBankAccountList(&m_wndOwnerBankAccount, m_szOwnerBankAccount);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOwnerBankAccount.IsSearchKey() && !m_szOwnerBankAccount.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOwnerBankAccount
};
	m_wndOwnerBankAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOwnerBankAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementGeneralView::OnOwnerBankAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView::OnOwnerBankNameChange(){
	
} */
/*void CFABankStatementGeneralView::OnOwnerBankNameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnOwnerBankNameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnOwnerBankNameCheckValue(){
	return 0;
}




void CFABankStatementGeneralView::OnOwnerBank2AccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView::OnOwnerBank2AccountSelendok(){
	 UpdateData(true);
	 m_szOwnerBank2Name = m_wndOwnerBank2Account.GetCurrent(1);
	 UpdateData(false);
}
/*void CFABankStatementGeneralView::OnOwnerBank2AccountSetfocus(){
	
}*/
/*void CFABankStatementGeneralView::OnOwnerBank2AccountKillfocus(){
	
}*/
long CFABankStatementGeneralView::OnOwnerBank2AccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadBankAccountList(&m_wndOwnerBank2Account, m_szOwnerBank2Account);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOwnerBank2Account.IsSearchKey() && !m_szOwnerBank2Account.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOwnerBank2Account
};
	m_wndOwnerBank2Account.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOwnerBank2Account.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementGeneralView::OnOwnerBank2AccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView::OnOwnerBank2NameChange(){
	
} */
/*void CFABankStatementGeneralView::OnOwnerBank2NameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnOwnerBank2NameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnOwnerBank2NameCheckValue(){
	return 0;
}


/*void CFABankStatementGeneralView::OnReasonChange(){
	
} */
/*void CFABankStatementGeneralView::OnReasonSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnReasonKillfocus(){
	
} */
int CFABankStatementGeneralView::OnReasonCheckValue(){
	return 0;
} 
int CFABankStatementGeneralView::OnAddFABankStatementGeneralView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankStatementGeneralView::OnEditFABankStatementGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankStatementGeneralView::OnDeleteFABankStatementGeneralView(){
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
 		OnCancelFABankStatementGeneralView();
 	}
	return 0;
}
int CFABankStatementGeneralView::OnSaveFABankStatementGeneralView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnFABankStatementGeneralViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankStatementGeneralView::OnCancelFABankStatementGeneralView(){
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
int CFABankStatementGeneralView::OnFABankStatementGeneralViewListLoadData(){
	return 0;
}


void CFABankStatementGeneralView::GetData(CRecord* rs)
{
	if(rs == NULL)
		return;
	rs->GetValue(_T("fi_invoiceno"), m_szVoucherNo);
	rs->GetValue(_T("fi_invoicedate"), m_szVoucherDate);
	rs->GetValue(_T("fi_acctdate"), m_szAccountingDate);
	rs->GetValue(_T("fi_DocumentNo"), m_szDocument);
	rs->GetValue(_T("fi_partner_id"), m_szObjectKey);
	rs->GetValue(_T("fi_partner_name"), m_szObjectName);
	rs->GetValue(_T("fi_partner_location"), m_szAddress);
	rs->GetValue(_T("fi_reason"), m_szReason);
	rs->GetValue(_T("fi_idcard"), m_szIDCard);
	rs->GetValue(_T("fi_issuedate"), m_szIssueDate);
	rs->GetValue(_T("fi_issueplace"), m_szIssuePlace);
	rs->GetValue(_T("fi_pBankAccount_no"), m_szPartnerBankAccount);
	rs->GetValue(_T("fi_pBankName"), m_szPartnerBankName);
	rs->GetValue(_T("fi_BankAccount_no"), m_szOwnerBankAccount);
	rs->GetValue(_T("fi_BankName"), m_szOwnerBankName);

	if(m_szDocType == _T("BAM"))
	{
		m_szOwnerBank2Account = m_szPartnerBankAccount;
		m_szOwnerBank2Name = m_szPartnerBankName;
	}
	UpdateData(FALSE);
}

void CFABankStatementGeneralView::SetData(CDbfMap* dbf)
{
	if(!IsValidateData())
		return;

	dbf->SetValue(_T("fi_invoiceno"), m_szVoucherNo);
	dbf->SetValue(_T("fi_invoicedate"), m_szVoucherDate);
	dbf->SetValue(_T("fi_accdate"), m_szAccountingDate);
	dbf->SetValue(_T("fi_documentno"), m_szDocument);
	dbf->SetValue(_T("fi_partner_id"), m_szObjectKey);
	dbf->SetValue(_T("fi_partner_name"), m_szObjectName);
	dbf->SetValue(_T("fi_partner_location"), m_szAddress);
	dbf->SetValue(_T("fi_reason"), m_szReason);
	dbf->SetValue(_T("fi_bankaccount_no"), m_szOwnerBankAccount);
	dbf->SetValue(_T("fi_bankname"), m_szOwnerBankName);

	if(m_szDocType == _T("BAM"))
	{
		m_szPartnerBankAccount = m_szOwnerBank2Account;
		m_szPartnerBankName = m_szOwnerBank2Name;
	}

	dbf->SetValue(_T("fi_pbankaccount_no"), m_szPartnerBankAccount);
	dbf->SetValue(_T("fi_pbankname"), m_szPartnerBankName);


}

void CFABankStatementGeneralView::OnAddObjectClick()
{
	//_msg(_T("Add object"));
}