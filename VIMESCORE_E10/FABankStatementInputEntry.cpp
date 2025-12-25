#include "FABankStatementInputEntry.h"
#include "MainFrame_E10.h"

static void _OnCaptionSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFABankStatementInputEntry*)pWnd)->OnCaptionSelectChange(nOld, nNew);
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementInputEntry* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementInputEntry* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnCreditAcctAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementInputEntry* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxAcctAddNew();
}*/

static int _OnTaxAcctCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnTaxAcctCheckValue();
}

static void _OnTaxIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementInputEntry* )pWnd)->OnTaxIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxIDSelendokFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxIDSelendok();
}
/*static void _OnTaxIDSetfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxIDKillfocus();
}*/
/*static void _OnTaxIDKillfocusFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxIDKillfocus();
}*/
static long _OnTaxIDLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementInputEntry *)pWnd)->OnTaxIDLoadData();
}
/*static void _OnTaxIDAddNewFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnTaxIDAddNew();
}*/


static void _OnSaveFnc(CWnd *pWnd){
	((CFABankStatementInputEntry *)pWnd)->OnSaveSelect();
}

static int _OnAddFABankStatementInputEntryFnc(CWnd *pWnd){
	 return ((CFABankStatementInputEntry*)pWnd)->OnAddFABankStatementInputEntry();
} 
static int _OnEditFABankStatementInputEntryFnc(CWnd *pWnd){
	 return ((CFABankStatementInputEntry*)pWnd)->OnEditFABankStatementInputEntry();
} 
static int _OnDeleteFABankStatementInputEntryFnc(CWnd *pWnd){
	 return ((CFABankStatementInputEntry*)pWnd)->OnDeleteFABankStatementInputEntry();
} 
static int _OnSaveFABankStatementInputEntryFnc(CWnd *pWnd){
	 return ((CFABankStatementInputEntry*)pWnd)->OnSaveFABankStatementInputEntry();
} 
static int _OnCancelFABankStatementInputEntryFnc(CWnd *pWnd){
	 return ((CFABankStatementInputEntry*)pWnd)->OnCancelFABankStatementInputEntry();
} 
CFABankStatementInputEntry::CFABankStatementInputEntry(CWnd *pParent, CString szDocType, long nInvoiceID, int nMode, BOOL bTaxIncluded):
	CGuiPopup(pParent)
{
	m_pWndLines = pParent;
	CGuiPopup::SetMode(nMode);
	m_nInvoiceID = nInvoiceID;
	m_bTaxIncluded = bTaxIncluded;

	m_nDlgWidth = 805;
	m_nDlgHeight = 60;
	SetDefaultValues();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();

	m_szTaxAcctKey.Empty();
	m_szTaxIDKey.Empty();
	m_szDocType = szDocType;
	m_szCashAccounts.Format(_T("'1111', '1112','1113'"));

}
CFABankStatementInputEntry::~CFABankStatementInputEntry(){
}
void CFABankStatementInputEntry::OnCreateComponents(){
	m_wndCaption.CreateEx(this, 0, 0, 800, 25); 
	m_wndDescription.Create(this,6, 27, 371, 52); 
	m_wndDebitAcct.Create(this,376, 27, 456, 52); 
	m_wndCreditAcct.Create(this,460, 27, 540, 52); 
	m_wndAmount.Create(this,546, 27, 626, 52); 
	m_wndTaxAcct.Create(this,630, 25, 710, 50); 
	m_wndTaxID.Create(this,715, 25, 795, 50); 
	m_wndTaxAmount.Create(this,715, 25, 795, 50); 
	m_wndSave.Create(this, _T("&Save"), 800, 25, 820, 50);

}
void CFABankStatementInputEntry::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);
	m_wndDebitAcct.SetCheckValue(true);
	m_wndDebitAcct.LimitText(20);
	m_wndCreditAcct.SetCheckValue(true);
	m_wndCreditAcct.LimitText(20);
	m_wndAmount.SetLimitText(15);
	m_wndAmount.SetCheckValue(true);
	m_wndTaxAcct.SetCheckValue(false);
	m_wndTaxAcct.LimitText(20);
	m_wndTaxID.SetCheckValue(false);
	m_wndTaxID.LimitText(20);

	m_wndTaxAmount.SetReadOnly(true);

	m_wndDescription.SetInitCap(1);

	m_wndDebitAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDebitAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndDebitAcct.Format(2, 0);

	m_wndCreditAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCreditAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndCreditAcct.Format(2, 0);

	m_wndTaxAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndTaxAcct.Format(2, 0);

	m_wndTaxID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCaption.InsertColumn(0, _T("Description"), 300, &m_wndDescription);
	m_wndCaption.InsertColumn(1, _T("Debit_Acct"), 70, &m_wndDebitAcct);
	m_wndCaption.InsertColumn(2, _T("Credit_Acct"), 70, &m_wndCreditAcct);
	m_wndCaption.InsertColumn(3, _T("Amount"), 90, &m_wndAmount);
	if(m_bTaxIncluded)
	{
		m_wndCaption.InsertColumn(4, _T("Tax_Acct"), 70, &m_wndTaxAcct);
		m_wndCaption.InsertColumn(5, _T("Tax_ID"), 70, &m_wndTaxID);
		m_wndCaption.InsertColumn(6, _T("Tax Amount"), 55, &m_wndTaxAmount);
	}
	else
	{
		m_wndCaption.InsertColumn(4, _T("Tax_Acct"), 0, &m_wndTaxAcct);
		m_wndCaption.InsertColumn(5, _T("Tax_ID"), 0, &m_wndTaxID);
		m_wndCaption.InsertColumn(6, _T("Tax Amount"), 0, &m_wndTaxAmount);
		m_wndTaxAcct.SetReadOnly(true);
		m_wndTaxID.SetReadOnly(true);
		m_wndTaxAmount.SetReadOnly(true);
		m_wndTaxAcct.ShowWindow(SW_HIDE);
		m_wndTaxID.ShowWindow(SW_HIDE);
		m_wndTaxAmount.ShowWindow(SW_HIDE);

	}
	m_wndCaption.InsertColumn(7, _T(""), 25, &m_wndSave);
	m_wndCaption.RecalcLayout();
	m_wndCaption.EnableWindow(FALSE);

	m_cashline_Tbl.AddField(_T("fil_userid"), dfText, 20);
	m_cashline_Tbl.AddField(_T("fil_invoice_id"), dfLong);
	m_cashline_Tbl.AddField(_T("fil_description"), dfText, 254);
	m_cashline_Tbl.AddField(_T("fil_debit_acct"), dfText, 10);
	m_cashline_Tbl.AddField(_T("fil_credit_acct"), dfText, 10);
	m_cashline_Tbl.AddField(_T("fil_amount"), dfDouble);
	m_cashline_Tbl.AddField(_T("fil_tax_acct"), dfText, 10);
	m_cashline_Tbl.AddField(_T("fil_tax_id"), dfText, 10);


}
void CFABankStatementInputEntry::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndCaption.SetEvent(WE_SELCHANGE, _OnCaptionSelectChangeFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndDebitAcct.SetEvent(WE_SELENDOK, _OnDebitAcctSelendokFnc);
	//m_wndDebitAcct.SetEvent(WE_SETFOCUS, _OnDebitAcctSetfocusFnc);
	//m_wndDebitAcct.SetEvent(WE_KILLFOCUS, _OnDebitAcctKillfocusFnc);
	m_wndDebitAcct.SetEvent(WE_SELCHANGE, _OnDebitAcctSelectChangeFnc);
	m_wndDebitAcct.SetEvent(WE_LOADDATA, _OnDebitAcctLoadDataFnc);
	//m_wndDebitAcct.SetEvent(WE_ADDNEW, _OnDebitAcctAddNewFnc);
	m_wndCreditAcct.SetEvent(WE_SELENDOK, _OnCreditAcctSelendokFnc);
	//m_wndCreditAcct.SetEvent(WE_SETFOCUS, _OnCreditAcctSetfocusFnc);
	//m_wndCreditAcct.SetEvent(WE_KILLFOCUS, _OnCreditAcctKillfocusFnc);
	m_wndCreditAcct.SetEvent(WE_SELCHANGE, _OnCreditAcctSelectChangeFnc);
	m_wndCreditAcct.SetEvent(WE_LOADDATA, _OnCreditAcctLoadDataFnc);
	//m_wndCreditAcct.SetEvent(WE_ADDNEW, _OnCreditAcctAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndTaxAcct.SetEvent(WE_SELENDOK, _OnTaxAcctSelendokFnc);
	//m_wndTaxAcct.SetEvent(WE_SETFOCUS, _OnTaxAcctSetfocusFnc);
	//m_wndTaxAcct.SetEvent(WE_KILLFOCUS, _OnTaxAcctKillfocusFnc);
	m_wndTaxAcct.SetEvent(WE_SELCHANGE, _OnTaxAcctSelectChangeFnc);
	m_wndTaxAcct.SetEvent(WE_LOADDATA, _OnTaxAcctLoadDataFnc);
	//m_wndTaxAcct.SetEvent(WE_ADDNEW, _OnTaxAcctAddNewFnc);
	m_wndTaxAcct.SetEvent(WE_CHECKVALUE, _OnTaxAcctCheckValueFnc);

	m_wndTaxID.SetEvent(WE_SELENDOK, _OnTaxIDSelendokFnc);
	//m_wndTaxID.SetEvent(WE_SETFOCUS, _OnTaxIDSetfocusFnc);
	//m_wndTaxID.SetEvent(WE_KILLFOCUS, _OnTaxIDKillfocusFnc);
	m_wndTaxID.SetEvent(WE_SELCHANGE, _OnTaxIDSelectChangeFnc);
	m_wndTaxID.SetEvent(WE_LOADDATA, _OnTaxIDLoadDataFnc);
	//m_wndTaxID.SetEvent(WE_ADDNEW, _OnTaxIDAddNewFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFABankStatementInputEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFABankStatementInputEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFABankStatementInputEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFABankStatementInputEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFABankStatementInputEntryFnc, 0, 'T', VK_CONTROL);
*/
	m_szDebitAcctKey = _T("1111");
	m_szCreditAcctKey = _T("5111");
	m_szTaxAcctKey.Empty();

	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CFABankStatementInputEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDebitAcct.GetDlgCtrlID(), m_szDebitAcctKey);
	DDX_TextEx(pDX, m_wndCreditAcct.GetDlgCtrlID(), m_szCreditAcctKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndTaxAcct.GetDlgCtrlID(), m_szTaxAcctKey);
	DDX_TextEx(pDX, m_wndTaxID.GetDlgCtrlID(), m_szTaxIDKey);

}
void CFABankStatementInputEntry::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_invoiceline WHERE fil_invoice_id =%ld and fil_invoiceline_id=%ld"), m_nInvoiceID, m_nInvoiceLine_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fil_description"), m_szDescription);
		rs.GetValue(_T("fil_debit_acct"), m_szDebitAcctKey);
		rs.GetValue(_T("fil_credit_acct"), m_szCreditAcctKey);
		rs.GetValue(_T("fil_amount"), m_nAmount);
		rs.GetValue(_T("fil_tax_id"), m_szTaxIDKey);
		rs.GetValue(_T("fil_tax_acct"), m_szTaxAcctKey);

	}

}
void CFABankStatementInputEntry::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_cashline_Tbl.SetValue(_T("fil_invoice_id"), m_nInvoiceID);
	m_cashline_Tbl.SetValue(_T("fil_description"), m_szDescription);
	m_cashline_Tbl.SetValue(_T("fil_debit_acct"), m_szDebitAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_credit_acct"), m_szCreditAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_amount"), m_nAmount);
	m_cashline_Tbl.SetValue(_T("fil_tax_acct"), m_szTaxAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_tax_id"), m_szTaxIDKey);
}
void CFABankStatementInputEntry::SetDefaultValues(){

	m_szDescription.Empty();
	m_nAmount=0;

}
int CFABankStatementInputEntry::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_wndDescription.SetFocus();
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

		m_wndSave.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFABankStatementInputEntry::OnCaptionSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
/*void CFABankStatementInputEntry::OnDescriptionChange(){
	
} */
/*void CFABankStatementInputEntry::OnDescriptionSetfocus(){
	
} */
/*void CFABankStatementInputEntry::OnDescriptionKillfocus(){
	
} */
int CFABankStatementInputEntry::OnDescriptionCheckValue(){
	return 0;
} 
void CFABankStatementInputEntry::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementInputEntry::OnDebitAcctSelendok(){
	 
}
/*void CFABankStatementInputEntry::OnDebitAcctSetfocus(){
	
}*/
/*void CFABankStatementInputEntry::OnDebitAcctKillfocus(){
	
}*/
long CFABankStatementInputEntry::OnDebitAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString szFilter;
	szFilter.Empty();
	if(m_szDocType == _T("CAR"))
	{
		szFilter.Format(_T(" and ada_account_id in(%s)  "), m_szCashAccounts);
	}
	else
	{
		szFilter.Format(_T(" and substr(ada_account_id, 1, 3) <> '111' "));
	}

	return pMF->LoadAccountList(&m_wndDebitAcct, m_szDebitAcctKey, szFilter);


/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDebitAcct.IsSearchKey() && !m_szDebitAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDebitAcctKey
};
	m_wndDebitAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDebitAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementInputEntry::OnDebitAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFABankStatementInputEntry::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementInputEntry::OnCreditAcctSelendok(){
	 
}
/*void CFABankStatementInputEntry::OnCreditAcctSetfocus(){
	
}*/
/*void CFABankStatementInputEntry::OnCreditAcctKillfocus(){
	
}*/
long CFABankStatementInputEntry::OnCreditAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if(m_szDocType == _T("CAR"))
	{
		szFilter.Format(_T(" and substr(ada_account_id, 1, 3) <> '111' "));
	}
	else
	{
		szFilter.Format(_T(" and ada_account_id in(%s) "), m_szCashAccounts);

	}
	return pMF->LoadAccountList(&m_wndCreditAcct, m_szCreditAcctKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCreditAcct.IsSearchKey() && !m_szCreditAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCreditAcctKey
};
	m_wndCreditAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCreditAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementInputEntry::OnCreditAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFABankStatementInputEntry::OnAmountChange(){
	
} */
/*void CFABankStatementInputEntry::OnAmountSetfocus(){
	
} */
/*void CFABankStatementInputEntry::OnAmountKillfocus(){
	
} */
int CFABankStatementInputEntry::OnAmountCheckValue(){
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CFABankStatementInputEntry::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementInputEntry::OnTaxAcctSelendok(){
	 
}
/*void CFABankStatementInputEntry::OnTaxAcctSetfocus(){
	
}*/
/*void CFABankStatementInputEntry::OnTaxAcctKillfocus(){
	
}*/
long CFABankStatementInputEntry::OnTaxAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString szFilter;
	szFilter.Empty();
	szFilter.Format(_T(" and ada_account_id not in('%s', '%s') and ada_istax='Y'  "), m_szDebitAcctKey, m_szCreditAcctKey);

	return pMF->LoadAccountList(&m_wndTaxAcct, m_szTaxAcctKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxAcct.IsSearchKey() && !m_szTaxAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxAcctKey
};
	m_wndTaxAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementInputEntry::OnTaxAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFABankStatementInputEntry::OnTaxIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFABankStatementInputEntry::OnTaxIDSelendok(){
	 
}
/*void CFABankStatementInputEntry::OnTaxIDSetfocus(){
	
}*/
/*void CFABankStatementInputEntry::OnTaxIDKillfocus(){
	
}*/
long CFABankStatementInputEntry::OnTaxIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndTaxID, m_szTaxIDKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxID.IsSearchKey() && !m_szTaxIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxIDKey
};
	m_wndTaxID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementInputEntry::OnTaxIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CFABankStatementInputEntry::OnAddFABankStatementInputEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankStatementInputEntry::OnEditFABankStatementInputEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankStatementInputEntry::OnDeleteFABankStatementInputEntry(){
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
 		OnCancelFABankStatementInputEntry();
 	}
	return 0;
}
int CFABankStatementInputEntry::OnSaveFABankStatementInputEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("FA_INVOICE_CREATELINE(%s) "), m_cashline_Tbl.FormatSQL());
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fil_invoice_id = %ld and fil_invoiceline_id"), m_nInvoiceID, m_nInvoiceLine_ID);
 		szSQL.Format(_T("FA_INVOICE_UPDATELINE(%s) "), m_cashline_Tbl.FormatSQL());
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	long ret = str2long(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		SetMode(VM_ADD);
		if(m_pWndLines)
		{
			m_pWndLines->SendMessage(WM_REFRESH, 0, 0);
		}
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankStatementInputEntry::OnCancelFABankStatementInputEntry(){
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
int CFABankStatementInputEntry::OnFABankStatementInputEntryListLoadData(){
	return 0;
}


void CFABankStatementInputEntry::OnSaveSelect()
{
	if(OnSaveFABankStatementInputEntry() <= 0)
		return;

}

int CFABankStatementInputEntry::OnTaxAcctCheckValue()
{
	if(m_szTaxAcctKey.IsEmpty())
	{
		m_wndTaxID.SetCheckValue(false);
		m_szTaxIDKey.Empty();
		m_wndTaxID.EnableWindow(FALSE);
	}
	else
	{
		m_wndTaxID.SetCheckValue(true);
		m_wndTaxID.EnableWindow(TRUE);
	}
	return 0;
}