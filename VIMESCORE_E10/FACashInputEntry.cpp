#include "FACashInputEntry.h"
#include "MainFrame_E10.h"

static void _OnCaptionSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFACashInputEntry*)pWnd)->OnCaptionSelectChange(nOld, nNew);
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashInputEntry* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashInputEntry* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnCreditAcctAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashInputEntry* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxAcctAddNew();
}*/

static int _OnTaxAcctCheckValueFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnTaxAcctCheckValue();
}

static void _OnTaxIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashInputEntry* )pWnd)->OnTaxIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxIDSelendokFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxIDSelendok();
}
/*static void _OnTaxIDSetfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxIDKillfocus();
}*/
/*static void _OnTaxIDKillfocusFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxIDKillfocus();
}*/
static long _OnTaxIDLoadDataFnc(CWnd *pWnd){
	return ((CFACashInputEntry *)pWnd)->OnTaxIDLoadData();
}
/*static void _OnTaxIDAddNewFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnTaxIDAddNew();
}*/


static void _OnSaveFnc(CWnd *pWnd){
	((CFACashInputEntry *)pWnd)->OnSaveSelect();
}

static int _OnAddFACashInputEntryFnc(CWnd *pWnd){
	 return ((CFACashInputEntry*)pWnd)->OnAddFACashInputEntry();
} 
static int _OnEditFACashInputEntryFnc(CWnd *pWnd){
	 return ((CFACashInputEntry*)pWnd)->OnEditFACashInputEntry();
} 
static int _OnDeleteFACashInputEntryFnc(CWnd *pWnd){
	 return ((CFACashInputEntry*)pWnd)->OnDeleteFACashInputEntry();
} 
static int _OnSaveFACashInputEntryFnc(CWnd *pWnd){
	 return ((CFACashInputEntry*)pWnd)->OnSaveFACashInputEntry();
} 
static int _OnCancelFACashInputEntryFnc(CWnd *pWnd){
	 return ((CFACashInputEntry*)pWnd)->OnCancelFACashInputEntry();
} 
CFACashInputEntry::CFACashInputEntry(CWnd *pParent, CString szDocType, long nInvoiceID, int nMode, BOOL bTaxIncluded):
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
CFACashInputEntry::~CFACashInputEntry(){
}
void CFACashInputEntry::OnCreateComponents(){
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
void CFACashInputEntry::OnInitializeComponents(){
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

	CString szLabel;
	TranslateString(_T("Description"), szLabel);
	m_wndCaption.InsertColumn(0, szLabel, 300, &m_wndDescription);
	TranslateString(_T("Debit_Acct"), szLabel);
	m_wndCaption.InsertColumn(1, szLabel, 70, &m_wndDebitAcct);
	TranslateString(_T("Credit_Acct"), szLabel);
	m_wndCaption.InsertColumn(2, szLabel, 70, &m_wndCreditAcct);
	TranslateString(_T("Amount"), szLabel);
	m_wndCaption.InsertColumn(3, szLabel, 90, &m_wndAmount);
	if(m_bTaxIncluded)
	{
		TranslateString(_T("Tax_Acct"), szLabel);
		m_wndCaption.InsertColumn(4, szLabel, 70, &m_wndTaxAcct);
		TranslateString(_T("Tax_Rate"), szLabel);
		m_wndCaption.InsertColumn(5, szLabel, 70, &m_wndTaxID);
		TranslateString(_T("Tax Amount"), szLabel);
		m_wndCaption.InsertColumn(6, szLabel, 55, &m_wndTaxAmount);
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
void CFACashInputEntry::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashInputEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashInputEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashInputEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashInputEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashInputEntryFnc, 0, 'T', VK_CONTROL);
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
void CFACashInputEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDebitAcct.GetDlgCtrlID(), m_szDebitAcctKey);
	DDX_TextEx(pDX, m_wndCreditAcct.GetDlgCtrlID(), m_szCreditAcctKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndTaxAcct.GetDlgCtrlID(), m_szTaxAcctKey);
	DDX_TextEx(pDX, m_wndTaxID.GetDlgCtrlID(), m_szTaxIDKey);

}
void CFACashInputEntry::GetDataToScreen(){
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
void CFACashInputEntry::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_cashline_Tbl.SetValue(_T("fil_invoice_id"), m_nInvoiceID);
	m_cashline_Tbl.SetValue(_T("fil_description"), m_szDescription);
	m_cashline_Tbl.SetValue(_T("fil_debit_acct"), m_szDebitAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_credit_acct"), m_szCreditAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_amount"), m_nAmount);
	m_cashline_Tbl.SetValue(_T("fil_tax_acct"), m_szTaxAcctKey);
	m_cashline_Tbl.SetValue(_T("fil_tax_id"), m_szTaxIDKey);
}
void CFACashInputEntry::SetDefaultValues(){

	m_szDescription.Empty();
	m_nAmount=0;

}
int CFACashInputEntry::SetMode(int nMode){
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
void CFACashInputEntry::OnCaptionSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
/*void CFACashInputEntry::OnDescriptionChange(){
	
} */
/*void CFACashInputEntry::OnDescriptionSetfocus(){
	
} */
/*void CFACashInputEntry::OnDescriptionKillfocus(){
	
} */
int CFACashInputEntry::OnDescriptionCheckValue(){
	return 0;
} 
void CFACashInputEntry::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashInputEntry::OnDebitAcctSelendok(){
	 
}
/*void CFACashInputEntry::OnDebitAcctSetfocus(){
	
}*/
/*void CFACashInputEntry::OnDebitAcctKillfocus(){
	
}*/
long CFACashInputEntry::OnDebitAcctLoadData(){
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
/*void CFACashInputEntry::OnDebitAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFACashInputEntry::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashInputEntry::OnCreditAcctSelendok(){
	 
}
/*void CFACashInputEntry::OnCreditAcctSetfocus(){
	
}*/
/*void CFACashInputEntry::OnCreditAcctKillfocus(){
	
}*/
long CFACashInputEntry::OnCreditAcctLoadData(){
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
/*void CFACashInputEntry::OnCreditAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFACashInputEntry::OnAmountChange(){
	
} */
/*void CFACashInputEntry::OnAmountSetfocus(){
	
} */
/*void CFACashInputEntry::OnAmountKillfocus(){
	
} */
int CFACashInputEntry::OnAmountCheckValue(){
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CFACashInputEntry::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashInputEntry::OnTaxAcctSelendok(){
	 
}
/*void CFACashInputEntry::OnTaxAcctSetfocus(){
	
}*/
/*void CFACashInputEntry::OnTaxAcctKillfocus(){
	
}*/
long CFACashInputEntry::OnTaxAcctLoadData(){
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
/*void CFACashInputEntry::OnTaxAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFACashInputEntry::OnTaxIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashInputEntry::OnTaxIDSelendok(){
	 
}
/*void CFACashInputEntry::OnTaxIDSetfocus(){
	
}*/
/*void CFACashInputEntry::OnTaxIDKillfocus(){
	
}*/
long CFACashInputEntry::OnTaxIDLoadData(){
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
/*void CFACashInputEntry::OnTaxIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CFACashInputEntry::OnAddFACashInputEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashInputEntry::OnEditFACashInputEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashInputEntry::OnDeleteFACashInputEntry(){
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
 		OnCancelFACashInputEntry();
 	}
	return 0;
}
int CFACashInputEntry::OnSaveFACashInputEntry(){
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
int CFACashInputEntry::OnCancelFACashInputEntry(){
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
int CFACashInputEntry::OnFACashInputEntryListLoadData(){
	return 0;
}


void CFACashInputEntry::OnSaveSelect()
{
	if(OnSaveFACashInputEntry() <= 0)
		return;

}

int CFACashInputEntry::OnTaxAcctCheckValue()
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