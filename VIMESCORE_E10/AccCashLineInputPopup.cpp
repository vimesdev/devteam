#include "AccCashLineInputPopup.h"
#include "MainFrame_E10.h"
#include "AccCashDialog.h"
 
static void _OnDebitAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashLineInputPopup* )pWnd)->OnDebitAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAccountSelendokFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDebitAccountSelendok();
}
/*static void _OnDebitAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDebitAccountKillfocus();
}*/
/*static void _OnDebitAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDebitAccountKillfocus();
}*/
static long _OnDebitAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnDebitAccountLoadData();
}
/*static void _OnDebitAccountAddNewFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDebitAccountAddNew();
}*/
static void _OnCreditAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashLineInputPopup* )pWnd)->OnCreditAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAccountSelendokFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnCreditAccountSelendok();
}
/*static void _OnCreditAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnCreditAccountKillfocus();
}*/
/*static void _OnCreditAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnCreditAccountKillfocus();
}*/
static long _OnCreditAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnCreditAccountLoadData();
}
/*static void _OnCreditAccountAddNewFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnCreditAccountAddNew();
}*/
static void _OnTaxAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashLineInputPopup* )pWnd)->OnTaxAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAccountSelendokFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxAccountSelendok();
}
/*static void _OnTaxAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxAccountKillfocus();
}*/
/*static void _OnTaxAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxAccountKillfocus();
}*/
static long _OnTaxAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnTaxAccountLoadData();
}
/*static void _OnTaxAccountAddNewFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxAccountAddNew();
}*/


static long _OnTaxAccountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnTaxAccountCheckValue();
}


static void _OnTaxRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashLineInputPopup* )pWnd)->OnTaxRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxRateSelendokFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxRateSelendok();
}
/*static void _OnTaxRateSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxRateKillfocus();
}*/
/*static void _OnTaxRateKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxRateKillfocus();
}*/
static long _OnTaxRateLoadDataFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnTaxRateLoadData();
}
/*static void _OnTaxRateAddNewFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnTaxRateAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAccCashLineInputPopup *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashLineInputPopup *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAccCashLineInputPopup *pVw = (CAccCashLineInputPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAccCashLineInputPopup *pVw = (CAccCashLineInputPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAccCashLineInputPopupFnc(CWnd *pWnd){
	 return ((CAccCashLineInputPopup*)pWnd)->OnAddAccCashLineInputPopup();
} 
static int _OnEditAccCashLineInputPopupFnc(CWnd *pWnd){
	 return ((CAccCashLineInputPopup*)pWnd)->OnEditAccCashLineInputPopup();
} 
static int _OnDeleteAccCashLineInputPopupFnc(CWnd *pWnd){
	 return ((CAccCashLineInputPopup*)pWnd)->OnDeleteAccCashLineInputPopup();
} 
static int _OnSaveAccCashLineInputPopupFnc(CWnd *pWnd){
	 return ((CAccCashLineInputPopup*)pWnd)->OnSaveAccCashLineInputPopup();
} 
static int _OnCancelAccCashLineInputPopupFnc(CWnd *pWnd){
	 return ((CAccCashLineInputPopup*)pWnd)->OnCancelAccCashLineInputPopup();
} 
CAccCashLineInputPopup::CAccCashLineInputPopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 645;
	m_nDlgHeight = 100;
	m_bTaxIncluded = FALSE;
	SetDefaultValues();
}
CAccCashLineInputPopup::~CAccCashLineInputPopup(){
}
void CAccCashLineInputPopup::OnCreateComponents(){
	m_wndDebitAccountLabel.Create(this, _T("Debit Account"), 6, 7, 106, 32);
	m_wndDebitAccount.Create(this,111, 7, 201, 32); 
	m_wndCreditAccountLabel.Create(this, _T("Credit Account"), 206, 7, 306, 32);
	m_wndCreditAccount.Create(this,311, 7, 401, 32); 
	m_wndTaxAccountLabel.Create(this, _T("Tax Account"), 406, 7, 486, 32);
	m_wndTaxAccount.Create(this,491, 7, 581, 32); 
	m_wndTaxRateLabel.Create(this, _T("Tax Rate"), 586, 7, 666, 32);
	m_wndTaxRate.Create(this,671, 7, 761, 32); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 6, 37, 106, 62);
	m_wndDescription.Create(this,111, 37, 581, 62); 
	m_wndAmountLabel.Create(this, _T("Amount"), 586, 37, 666, 62);
	m_wndAmount.Create(this,671, 37, 761, 62); 
	m_wndSave.Create(this, _T("&Save"), 671, 67, 731, 92);
	m_wndClose.Create(this, _T("&Close"), 736, 67, 761, 92);

}
void CAccCashLineInputPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDebitAccount.SetCheckValue(true);
	m_wndDebitAccount.LimitText(32);
	m_wndCreditAccount.SetCheckValue(true);
	m_wndCreditAccount.LimitText(32);
	m_wndTaxAccount.SetCheckValue(true);
	m_wndTaxAccount.LimitText(35);
	m_wndTaxRate.SetCheckValue(true);
	m_wndTaxRate.LimitText(35);
	m_wndDescription.SetLimitText(255);
	m_wndDescription.SetCheckValue(true);
	m_wndAmount.SetLimitText(22);
	m_wndAmount.SetCheckValue(true);


	m_wndDebitAccount.SetCheckValue(true);
	m_wndDebitAccount.LimitText(35);
	m_wndCreditAccount.SetCheckValue(true);
	m_wndCreditAccount.LimitText(35);

	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndDescription.SetInitCap(2);

	m_wndAmount.SetLimitText(10);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetNumberDecimal(3);


	m_wndTaxAccount.SetCheckValue(false);
	m_wndTaxRate.SetCheckValue(false);


	m_wndDebitAccount.Format(2, 0, 10, 1);
	m_wndDebitAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDebitAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDebitAccount.InsertColumn(2, _T("istax"), CFMT_TEXT, 0);

	m_wndCreditAccount.Format(2, 0, 10, 1);
	m_wndCreditAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndCreditAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndCreditAccount.InsertColumn(2, _T("istax"), CFMT_TEXT, 0);


	m_wndTaxAccount.Format(2, 0, 10, 1);
	m_wndTaxAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTaxAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndTaxAccount.InsertColumn(2, _T("istax"), CFMT_TEXT, 0);


	m_wndTaxRate.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTaxRate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	

	m_fa_cashlineTbl.SetTableName(_T("fa_cashline"));
	m_fa_cashlineTbl.AddField(_T("facl_org_id"), dfText, 5); 
	m_fa_cashlineTbl.AddField(_T("facl_userid"), dfText, 32); 
	m_fa_cashlineTbl.AddField(_T("facl_cash_id"), dfLong); 
	m_fa_cashlineTbl.AddField(_T("facl_cashline_id"), dfLong); 
	m_fa_cashlineTbl.AddField(_T("facl_description"), dfText, 255); 
	m_fa_cashlineTbl.AddField(_T("facl_debit_acct"), dfText, 15); 
	m_fa_cashlineTbl.AddField(_T("facl_credit_acct"), dfText,15); 	
	m_fa_cashlineTbl.AddField(_T("facl_tax_acct"), dfText, 15); 	
	m_fa_cashlineTbl.AddField(_T("facl_tax_id"), dfText, 3); 	
	m_fa_cashlineTbl.AddField(_T("facl_amount"), dfDouble);
	

}
void CAccCashLineInputPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDebitAccount.SetEvent(WE_SELENDOK, _OnDebitAccountSelendokFnc);
	//m_wndDebitAccount.SetEvent(WE_SETFOCUS, _OnDebitAccountSetfocusFnc);
	//m_wndDebitAccount.SetEvent(WE_KILLFOCUS, _OnDebitAccountKillfocusFnc);
	m_wndDebitAccount.SetEvent(WE_SELCHANGE, _OnDebitAccountSelectChangeFnc);
	m_wndDebitAccount.SetEvent(WE_LOADDATA, _OnDebitAccountLoadDataFnc);
	//m_wndDebitAccount.SetEvent(WE_ADDNEW, _OnDebitAccountAddNewFnc);
	m_wndCreditAccount.SetEvent(WE_SELENDOK, _OnCreditAccountSelendokFnc);
	//m_wndCreditAccount.SetEvent(WE_SETFOCUS, _OnCreditAccountSetfocusFnc);
	//m_wndCreditAccount.SetEvent(WE_KILLFOCUS, _OnCreditAccountKillfocusFnc);
	m_wndCreditAccount.SetEvent(WE_SELCHANGE, _OnCreditAccountSelectChangeFnc);
	m_wndCreditAccount.SetEvent(WE_LOADDATA, _OnCreditAccountLoadDataFnc);
	//m_wndCreditAccount.SetEvent(WE_ADDNEW, _OnCreditAccountAddNewFnc);
	m_wndTaxAccount.SetEvent(WE_SELENDOK, _OnTaxAccountSelendokFnc);
	//m_wndTaxAccount.SetEvent(WE_SETFOCUS, _OnTaxAccountSetfocusFnc);
	//m_wndTaxAccount.SetEvent(WE_KILLFOCUS, _OnTaxAccountKillfocusFnc);
	m_wndTaxAccount.SetEvent(WE_SELCHANGE, _OnTaxAccountSelectChangeFnc);
	m_wndTaxAccount.SetEvent(WE_LOADDATA, _OnTaxAccountLoadDataFnc);
	//m_wndTaxAccount.SetEvent(WE_ADDNEW, _OnTaxAccountAddNewFnc);
	m_wndTaxAccount.SetEvent(WE_CLICK, _OnTaxAccountCheckValueFnc);

	m_wndTaxRate.SetEvent(WE_SELENDOK, _OnTaxRateSelendokFnc);
	//m_wndTaxRate.SetEvent(WE_SETFOCUS, _OnTaxRateSetfocusFnc);
	//m_wndTaxRate.SetEvent(WE_KILLFOCUS, _OnTaxRateKillfocusFnc);
	m_wndTaxRate.SetEvent(WE_SELCHANGE, _OnTaxRateSelectChangeFnc);
	m_wndTaxRate.SetEvent(WE_LOADDATA, _OnTaxRateLoadDataFnc);
	//m_wndTaxRate.SetEvent(WE_ADDNEW, _OnTaxRateAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
	{

	}
	
	SetMode(nMode);


}
void CAccCashLineInputPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDebitAccount.GetDlgCtrlID(), m_szDebitAccountKey);
	DDX_TextEx(pDX, m_wndCreditAccount.GetDlgCtrlID(), m_szCreditAccountKey);
	DDX_TextEx(pDX, m_wndTaxAccount.GetDlgCtrlID(), m_szTaxAccountKey);
	DDX_TextEx(pDX, m_wndTaxRate.GetDlgCtrlID(), m_szTaxRateKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CAccCashLineInputPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("FACL_DESCRIPTION"), m_szDescription);
	rs.GetValue(_T("FACL_DEBIT_ACCT"), m_szDebitAccountKey);
	rs.GetValue(_T("FACL_CREDIT_ACCT"), m_szCreditAccountKey);
	rs.GetValue(_T("FACL_AMOUNT"), m_nAmount);

}
void CAccCashLineInputPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	m_fa_cashlineTbl.SetValue(_T("facl_org_id"), pMF->GetModuleID()); 
	m_fa_cashlineTbl.SetValue(_T("facl_userid"), pMF->GetCurrentUser()); 
	m_fa_cashlineTbl.SetValue(_T("facl_cash_id"), m_nCash_ID); 
	m_fa_cashlineTbl.SetValue(_T("facl_cashline_id"), m_nCashLine_ID); 
	m_fa_cashlineTbl.SetValue(_T("facl_debit_acct"), m_szDebitAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("facl_credit_acct"), m_szCreditAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("facl_tax_acct"), m_szTaxAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("facl_tax_id"), m_szTaxRateKey); 
	m_fa_cashlineTbl.SetValue(_T("facl_description"), m_szDescription); 
	m_fa_cashlineTbl.SetValue(_T("facl_amount"), m_nAmount); 
	



}
void CAccCashLineInputPopup::SetDefaultValues(){

	m_szDebitAccountKey.Empty();
	m_szCreditAccountKey.Empty();
	m_szTaxAccountKey.Empty();
	m_szTaxRateKey.Empty();
	m_szDescription.Empty();
	m_szDebitAccountKey = m_szDefDebitAcct;
	m_szCreditAccountKey = m_szDefCreditAcct;
	m_nAmount=0;

}
int CAccCashLineInputPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,  -1);
 			SetDefaultValues();
			m_wndDebitAccount.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(true);
		UpdateData(FALSE);
 		return nOldMode;
}
void CAccCashLineInputPopup::OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashLineInputPopup::OnDebitAccountSelendok(){
	 
}
/*void CAccCashLineInputPopup::OnDebitAccountSetfocus(){
	
}*/
/*void CAccCashLineInputPopup::OnDebitAccountKillfocus(){
	
}*/
long CAccCashLineInputPopup::OnDebitAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	
	if(!m_szCreditAccountKey.IsEmpty())
		szFilter.Format(_T(" and ada_account_id <> '%s' "), m_szCreditAccountKey);
	if(m_szInvoiceType == _T("R"))
		szFilter.AppendFormat(_T(" and substr(ada_account_id, 1, 3) = '111' "));
	if(m_szInvoiceType == _T("P"))
		szFilter.AppendFormat(_T(" and substr(ada_account_id, 1, 3) <> '111' "));
	return pMF->LoadAccountList(&m_wndDebitAccount, m_szDebitAccountKey, szFilter);


/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDebitAccount.IsSearchKey() && !m_szDebitAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDebitAccountKey
};
	m_wndDebitAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDebitAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccCashLineInputPopup::OnDebitAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashLineInputPopup::OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashLineInputPopup::OnCreditAccountSelendok(){
	 
}
/*void CAccCashLineInputPopup::OnCreditAccountSetfocus(){
	
}*/
/*void CAccCashLineInputPopup::OnCreditAccountKillfocus(){
	
}*/
long CAccCashLineInputPopup::OnCreditAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	if(!m_szDebitAccountKey.IsEmpty())
		szFilter.Format(_T(" and ada_account_id <> '%s' "), m_szDebitAccountKey);

	if (m_szInvoiceType == _T("P"))
		szFilter.AppendFormat(_T(" and substr(ada_account_id, 1, 3) = '111'"));
	if (m_szInvoiceType == _T("R"))
		szFilter.AppendFormat(_T(" and substr(ada_account_id, 1, 3) <> '111'"));

	return pMF->LoadAccountList(&m_wndCreditAccount, m_szCreditAccountKey, szFilter);


/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCreditAccount.IsSearchKey() && !m_szCreditAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCreditAccountKey
};
	m_wndCreditAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCreditAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccCashLineInputPopup::OnCreditAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashLineInputPopup::OnTaxAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashLineInputPopup::OnTaxAccountSelendok(){
	
}
/*void CAccCashLineInputPopup::OnTaxAccountSetfocus(){
	
}*/
/*void CAccCashLineInputPopup::OnTaxAccountKillfocus(){
	
}*/
long CAccCashLineInputPopup::OnTaxAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	if(!m_szDebitAccountKey.IsEmpty())
		szFilter.Format(_T(" and ada_account_id <> '%s' "), m_szDebitAccountKey);

	if(!m_szCreditAccountKey.IsEmpty())
		szFilter.Format(_T(" and ada_account_id <> '%s' "), m_szCreditAccountKey);

	szFilter.AppendFormat(_T(" and substr(ada_account_id, 1, 3) = '333'"));

	return pMF->LoadAccountList(&m_wndTaxAccount, m_szTaxAccountKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxAccount.IsSearchKey() && !m_szTaxAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxAccountKey
};
	m_wndTaxAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccCashLineInputPopup::OnTaxAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAccCashLineInputPopup::OnTaxRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashLineInputPopup::OnTaxRateSelendok(){
	 
}
/*void CAccCashLineInputPopup::OnTaxRateSetfocus(){
	
}*/
/*void CAccCashLineInputPopup::OnTaxRateKillfocus(){
	
}*/
long CAccCashLineInputPopup::OnTaxRateLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndTaxRate, m_szTaxRateKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxRate.IsSearchKey() && !m_szTaxRateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxRateKey
};
	m_wndTaxRate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxRate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccCashLineInputPopup::OnTaxRateAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccCashLineInputPopup::OnDescriptionChange(){
	
} */
/*void CAccCashLineInputPopup::OnDescriptionSetfocus(){
	
} */
/*void CAccCashLineInputPopup::OnDescriptionKillfocus(){
	
} */
int CAccCashLineInputPopup::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAccCashLineInputPopup::OnAmountChange(){
	
} */
/*void CAccCashLineInputPopup::OnAmountSetfocus(){
	
} */
/*void CAccCashLineInputPopup::OnAmountKillfocus(){
	
} */
int CAccCashLineInputPopup::OnAmountCheckValue(){
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CAccCashLineInputPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAccCashLineInputPopup();
} 
void CAccCashLineInputPopup::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CAccCashLineInputPopup::OnAddAccCashLineInputPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccCashLineInputPopup::OnEditAccCashLineInputPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccCashLineInputPopup::OnDeleteAccCashLineInputPopup(){
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
 		OnCancelAccCashLineInputPopup();
 	}
	return 0;
}
int CAccCashLineInputPopup::OnSaveAccCashLineInputPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("FA_CASHLINE_CREATE( %s) "), m_fa_cashlineTbl.FormatSQL(_T("facl_cashline_id")));
	else
		szSQL.Format(_T("FA_CASHLINE_UPDATE( %s) "), m_fa_cashlineTbl.FormatSQL());
//Notice(szSQL);
 	m_nCashLine_ID = str2long(pMF->ExecDML(szSQL));
 	if(m_nCashLine_ID <= 0)
 	{
		return -1;
 	}
	_tprintf(_T("\r\n%d"), m_nCashLine_ID);	
	if(m_szInvoiceType == _T("R"))
		m_szCreditAccountKey.Empty();
	else
		m_szDebitAccountKey.Empty();
	SetMode(VM_ADD);
	((CAccCashDialog*)GetParent())->RefreshData();
	
	return 1;
}
int CAccCashLineInputPopup::OnCancelAccCashLineInputPopup(){
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
int CAccCashLineInputPopup::OnAccCashLineInputPopupListLoadData(){
	return 0;
}


int CAccCashLineInputPopup::OnTaxAccountCheckValue()
{
	if(m_szTaxAccountKey.IsEmpty())
	{
		m_wndTaxRate.SetCheckValue(false);
	}
	else
		m_wndTaxRate.SetCheckValue(true);	
	return true;
}