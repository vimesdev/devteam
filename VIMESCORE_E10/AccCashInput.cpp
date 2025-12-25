#include "AccCashInput.h"
#include "MainFrame_E10.h"
#include "AccCashDialog.h"
#include "AccTaxCalculationsDialog.h"


/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnDebitAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashInput* )pWnd)->OnDebitAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAccountSelendokFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDebitAccountSelendok();
}
/*static void _OnDebitAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDebitAccountKillfocus();
}*/
/*static void _OnDebitAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDebitAccountKillfocus();
}*/
static long _OnDebitAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnDebitAccountLoadData();
}
/*static void _OnDebitAccountAddNewFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnDebitAccountAddNew();
}*/
static void _OnCreditAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashInput* )pWnd)->OnCreditAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAccountSelendokFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnCreditAccountSelendok();
}
/*static void _OnCreditAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnCreditAccountKillfocus();
}*/
/*static void _OnCreditAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnCreditAccountKillfocus();
}*/
static long _OnCreditAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnCreditAccountLoadData();
}
/*static void _OnCreditAccountAddNewFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnCreditAccountAddNew();
}*/


/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnAmountCheckValue();
}
static void _OnAmountClickFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnAmountClick();
}

static void _OnTaxIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashInput* )pWnd)->OnTaxIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxIDSelendokFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxIDSelendok();
}
/*static void _OnTaxIDSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxIDKillfocus();
}*/
static void _OnTaxIDKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxIDKillfocus();
}
static long _OnTaxIDLoadDataFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnTaxIDLoadData();
}
/*static void _OnTaxIDAddNewFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxIDAddNew();
}*/


static int _OnTaxIDCheckValueFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnTaxIDCheckValue();
}

static void _OnTaxAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashInput* )pWnd)->OnTaxAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAccountSelendokFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxAccountSelendok();
}
/*static void _OnTaxAccountSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxAccountKillfocus();
}*/
/*static void _OnTaxAccountKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxAccountKillfocus();
}*/
static long _OnTaxAccountLoadDataFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnTaxAccountLoadData();
}
/*static void _OnTaxAccountAddNewFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnTaxAccountAddNew();
}*/

static void _OnJobIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccCashInput* )pWnd)->OnJobIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnJobIDSelendokFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnJobIDSelendok();
}
/*static void _OnJobIDSetfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnJobIDKillfocus();
}*/
/*static void _OnJobIDKillfocusFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnJobIDKillfocus();
}*/
static long _OnJobIDLoadDataFnc(CWnd *pWnd){
	return ((CAccCashInput *)pWnd)->OnJobIDLoadData();
}
/*static void _OnJobIDAddNewFnc(CWnd *pWnd){
	((CAccCashInput *)pWnd)->OnJobIDAddNew();
}*/
static int _OnAddAccCashInputFnc(CWnd *pWnd){
	 return ((CAccCashInput*)pWnd)->OnAddAccCashInput();
} 
static int _OnEditAccCashInputFnc(CWnd *pWnd){
	 return ((CAccCashInput*)pWnd)->OnEditAccCashInput();
} 
static int _OnDeleteAccCashInputFnc(CWnd *pWnd){
	 return ((CAccCashInput*)pWnd)->OnDeleteAccCashInput();
} 
static int _OnSaveAccCashInputFnc(CWnd *pWnd){
	 return ((CAccCashInput*)pWnd)->OnSaveAccCashInput();
} 
static int _OnCancelAccCashInputFnc(CWnd *pWnd){
	 return ((CAccCashInput*)pWnd)->OnCancelAccCashInput();
}


CAccCashInput::CAccCashInput()
{

	m_nDlgWidth = 105;
	m_nDlgHeight = 205;
	SetDefaultValues();
}

CAccCashInput::CAccCashInput(CWnd* pParent)
{

	m_nDlgWidth = 105;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CAccCashInput::~CAccCashInput(){
}
void CAccCashInput::OnCreateComponents(){
	m_wndDebitAccount.Create(this,6, 38, 86, 63); 
	m_wndCreditAccount.Create(this,6, 38, 86, 63); 
	m_wndDescription.Create(this,5, 8, 85, 33); 
//	m_wndAmount.SetButtonMode(BUTTON_CALCULATOR);
	m_wndAmount.Create(this,6, 68, 86, 93); 
	m_wndTaxID.Create(this,6, 98, 86, 123); 
	m_wndTaxAmount.Create(this,6, 98, 86, 123); 
	m_wndTaxAccount.Create(this,6, 98, 86, 123); 
	m_wndJobID.Create(this,6, 128, 86, 153); 
}
void CAccCashInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

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
	m_wndTaxID.SetCheckValue(false);
	m_wndTaxID.LimitText(35);
	m_wndTaxAmount.SetReadOnly(TRUE);
	m_wndTaxAccount.SetCheckValue(false);
	m_wndTaxAccount.LimitText(35);

	m_wndJobID.SetCheckValue(false);
	m_wndJobID.LimitText(35);

	m_wndDebitAccount.Format(2, 0, 10, 1);
	m_wndDebitAccount.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDebitAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDebitAccount.InsertColumn(2, _T("istax"), CFMT_TEXT, 0);

	m_wndCreditAccount.Format(2, 0, 10, 1);
	m_wndCreditAccount.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCreditAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndCreditAccount.InsertColumn(2, _T("istax"), CFMT_TEXT, 0);

	m_wndTaxID.Format(2, 0, 10, 1);
	m_wndTaxID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTaxID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndTaxID.InsertColumn(2, _T("rate"), CFMT_TEXT, 0);

	m_wndTaxAccount.Format(2, 0, 10, 1);
	m_wndTaxAccount.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTaxAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndJobID.Format(2, 0, 10, 1);
	m_wndJobID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndJobID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_fa_cashlineTbl.SetTableName(_T("fa_cashline"));
	m_fa_cashlineTbl.AddField(_T("acl_invoicetype"), dfText, 1); 
	m_fa_cashlineTbl.AddField(_T("acl_cash_id"), dfText, 32); 
	m_fa_cashlineTbl.AddField(_T("acl_cashline_id"), dfText, 32); 
	m_fa_cashlineTbl.AddField(_T("acl_description"), dfText, 255); 
	m_fa_cashlineTbl.AddField(_T("acl_debit_acct"), dfText, 32); 
	m_fa_cashlineTbl.AddField(_T("acl_credit_acct"), dfText, 32); 	
	m_fa_cashlineTbl.AddField(_T("acl_amount"), dfDouble); 
	m_fa_cashlineTbl.AddField(_T("acl_tax_id"), dfText, 32);
	m_fa_cashlineTbl.AddField(_T("acl_taxamt"), dfDouble); 
	m_fa_cashlineTbl.AddField(_T("acl_tax_acct"), dfText, 32);
	m_fa_cashlineTbl.AddField(_T("acl_job_id"), dfText, 32); 

}
void CAccCashInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
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

	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndAmount.SetEvent(WE_CLICK, _OnAmountClickFnc);
	m_wndTaxID.SetEvent(WE_SELENDOK, _OnTaxIDSelendokFnc);
	//m_wndTaxID.SetEvent(WE_SETFOCUS, _OnTaxIDSetfocusFnc);
	m_wndTaxID.SetEvent(WE_KILLFOCUS, _OnTaxIDKillfocusFnc);
	m_wndTaxID.SetEvent(WE_SELCHANGE, _OnTaxIDSelectChangeFnc);
	m_wndTaxID.SetEvent(WE_LOADDATA, _OnTaxIDLoadDataFnc);
	//m_wndTaxID.SetEvent(WE_ADDNEW, _OnTaxIDAddNewFnc);
	m_wndTaxID.SetEvent(WE_CHECKVALUE, _OnTaxIDCheckValueFnc);

	m_wndTaxAccount.SetEvent(WE_SELENDOK, _OnTaxAccountSelendokFnc);
	//m_wndTaxAccount.SetEvent(WE_SETFOCUS, _OnTaxAccountSetfocusFnc);
	//m_wndTaxAccount.SetEvent(WE_KILLFOCUS, _OnTaxAccountKillfocusFnc);
	m_wndTaxAccount.SetEvent(WE_SELCHANGE, _OnTaxAccountSelectChangeFnc);
	m_wndTaxAccount.SetEvent(WE_LOADDATA, _OnTaxAccountLoadDataFnc);
	//m_wndTaxAccount.SetEvent(WE_ADDNEW, _OnTaxAccountAddNewFnc);


	m_wndJobID.SetEvent(WE_SELENDOK, _OnJobIDSelendokFnc);
	//m_wndJobID.SetEvent(WE_SETFOCUS, _OnJobIDSetfocusFnc);
	//m_wndJobID.SetEvent(WE_KILLFOCUS, _OnJobIDKillfocusFnc);
	m_wndJobID.SetEvent(WE_SELCHANGE, _OnJobIDSelectChangeFnc);
	m_wndJobID.SetEvent(WE_LOADDATA, _OnJobIDLoadDataFnc);
	//m_wndJobID.SetEvent(WE_ADDNEW, _OnJobIDAddNewFnc);

/*
	SetEditCtrl(0, &m_wndDebitAccount);
	SetEditCtrl(1, &m_wndCreditAccount);
	SetEditCtrl(2, &m_wndDescription);
	SetEditCtrl(3, &m_wndAmount);
	SetEditCtrl(4, &m_wndTaxID);
	SetEditCtrl(5, &m_wndTaxAmount);
	SetEditCtrl(6, &m_wndTaxAccount);
	SetEditCtrl(7, &m_wndJobID);

	SetButtonCtrl(0);
*/
//	GetDataToScreen();

}
void CAccCashInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDebitAccount.GetDlgCtrlID(), m_szDebitAccountKey);
	DDX_TextEx(pDX, m_wndCreditAccount.GetDlgCtrlID(), m_szCreditAccountKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndTaxID.GetDlgCtrlID(), m_szTaxIDKey);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);
	DDX_TextEx(pDX, m_wndTaxAccount.GetDlgCtrlID(), m_szTaxAccountKey);
	DDX_TextEx(pDX, m_wndJobID.GetDlgCtrlID(), m_szJobIDKey);

}
void CAccCashInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CGuiListCtrl* pList = (CGuiListCtrl*) GetParent();
	/*
	int nIndex = GetRowIndex();
	if(m_nEditMode == VM_EDIT)
	{
		m_szDebitAccountKey = pList->GetItemText(nIndex, 0);
		m_szCreditAccountKey = pList->GetItemText(nIndex, 1);
		m_szDescription = pList->GetItemText(nIndex, 2);
		m_nAmount= str2double(pList->GetItemText(nIndex, 3));
		m_szTaxIDKey = pList->GetItemText(nIndex, 4);
		m_nTaxAmount= str2double(pList->GetItemText(nIndex, 5));
		m_szTaxAccountKey = pList->GetItemText(nIndex, 6);
		m_szJobIDKey = pList->GetItemText(nIndex, 7);
		UpdateData(false);
	}
	*/
	SetMode(m_nEditMode);

}
void CAccCashInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_fa_cashlineTbl.SetValue(_T("acl_invoicetype"), m_szInvoiceType); 
	m_fa_cashlineTbl.SetValue(_T("acl_cash_id"), m_szCashID); 
	m_fa_cashlineTbl.SetValue(_T("acl_cashline_id"), m_szLineID); 

	m_fa_cashlineTbl.SetValue(_T("acl_debit_acct"), m_szDebitAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("acl_credit_acct"), m_szCreditAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("acl_description"), m_szDescription); 
	m_fa_cashlineTbl.SetValue(_T("acl_amount"), m_nAmount); 
	m_fa_cashlineTbl.SetValue(_T("acl_tax_id"), m_szTaxIDKey); 
	m_fa_cashlineTbl.SetValue(_T("acl_taxamt"), m_nTaxAmount); 
	m_fa_cashlineTbl.SetValue(_T("acl_tax_acct"), m_szTaxAccountKey); 
	m_fa_cashlineTbl.SetValue(_T("acl_job_id"), m_szJobIDKey); 


}

void CAccCashInput::ApplyToList(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	CGridListCtrl* pList = (CGridListCtrl*) GetParent();
	int nSel = pList->GetCurSel();
	pList->SetItemText(nSel, 0, m_szDebitAccountKey);
	pList->SetItemText(nSel, 1, m_szCreditAccountKey);
	pList->SetItemText(nSel, 2, m_szDescription);
	pList->SetItemText(nSel, 3, double2str(m_nAmount));
	pList->SetItemText(nSel, 4, m_szTaxIDKey);
	pList->SetItemText(nSel, 5, double2str(m_nTaxAmount));
	pList->SetItemText(nSel, 6, m_szTaxAccountKey);
	pList->SetItemText(nSel, 7, m_szJobIDKey);
	pList->SetItemText(nSel, 8, m_szLineID);
}
void CAccCashInput::SetDefaultValues(){

	m_szDescription.Empty();
	m_szDebitAccountKey.Empty();
	m_szCreditAccountKey.Empty();
	m_nAmount=0;
	m_nTaxAmount=0;
	m_szTaxIDKey.Empty();
	m_szJobIDKey.Empty();

}
int CAccCashInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);

  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
// 			EnableButtons(TRUE, 3, 4, -1);
// 			SetDefaultValues();
			m_wndDebitAccount.SetFocus();
 			break;

 		case VM_EDIT: 
 			EnableControls(TRUE);
 //			EnableButtons(TRUE, 3, 4, -1);
			m_wndDebitAccount.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
// 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
// 			EnableButtons(TRUE, 0, 6, -1);
// 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CAccCashInput::OnDescriptionChange(){
	
} */
/*void CAccCashInput::OnDescriptionSetfocus(){
	
} */
/*void CAccCashInput::OnDescriptionKillfocus(){
	
} */
int CAccCashInput::OnDescriptionCheckValue(){
	
	return 0;
} 
void CAccCashInput::OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashInput::OnDebitAccountSelendok(){
	UpdateData(true);
	/*if(m_szDescription.IsEmpty())
	{
		m_szDescription = m_wndDebitAccount.GetCurrent(1);
		m_wndDescription.SetWindowText(m_szDescription);
		m_wndDescription.SetSel(-1);
	}*/

}
/*void CAccCashInput::OnDebitAccountSetfocus(){
	
}*/
/*void CAccCashInput::OnDebitAccountKillfocus(){
	
}*/
long CAccCashInput::OnDebitAccountLoadData(){
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
	};
	m_wndDebitAccount.DeleteAllItems(); 
	int nCount = 0;
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
/*void CAccCashInput::OnDebitAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CAccCashInput::OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashInput::OnCreditAccountSelendok(){
	UpdateData(true);
	/*if(m_szDescription.IsEmpty())
	{
		m_szDescription = m_wndCreditAccount.GetCurrent(1);
		m_wndDescription.SetWindowText(m_szDescription);
		m_wndDescription.SetSel(-1);
	}*/

}
/*void CAccCashInput::OnCreditAccountSetfocus(){
	
}*/
/*void CAccCashInput::OnCreditAccountKillfocus(){
	
}*/
long CAccCashInput::OnCreditAccountLoadData(){
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
	};
	m_wndCreditAccount.DeleteAllItems(); 
	int nCount = 0;
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
/*void CAccCashInput::OnCreditAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CAccCashInput::OnAmountChange(){
	
} */
/*void CAccCashInput::OnAmountSetfocus(){
	
} */
/*void CAccCashInput::OnAmountKillfocus(){
	
} */
int CAccCashInput::OnAmountCheckValue(){
_tprintf(_T("\r\n%f"), m_nAmount);
	if(m_nAmount <= 0)
		return -1;
	return 0;
}

void CAccCashInput::OnAmountClick(){
	CString szIsTax = m_wndDebitAccount.GetCurrent(2);
	if(szIsTax == _T("Y"))
	{
		CAccTaxCalculationsDialog dlg(this);
		dlg.m_nUntaxesAmount = m_nAmount;
		if(dlg.DoModal() == IDOK){
			m_nAmount = dlg.m_nTaxAmount;
			UpdateData(FALSE);
		}
	}
	else
	{
		
	}
}

void CAccCashInput::OnTaxIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashInput::OnTaxIDSelendok(){
	OnTaxIDCheckValue();
}
/*void CAccCashInput::OnTaxIDSetfocus(){
	
}*/
void CAccCashInput::OnTaxIDKillfocus(){
	

}
long CAccCashInput::OnTaxIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	return pMF->LoadTaxList(&m_wndTaxID, m_szTaxIDKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxID.IsSearchKey() && !m_szTaxIDKey.IsEmpty()){
	};
	m_wndTaxID.DeleteAllItems(); 
	int nCount = 0;
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
/*void CAccCashInput::OnTaxIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */


int CAccCashInput::OnTaxIDCheckValue(){
	UpdateData(TRUE);
	float nTaxRate = str2float(m_wndTaxID.GetCurrent(2));
	if(!m_szTaxIDKey.IsEmpty())
	{
		m_wndTaxAccount.SetCheckValue(TRUE);
		m_wndTaxAccount.EnableWindow(TRUE);
	}
	else
	{
		m_wndTaxAccount.SetCheckValue(FALSE);
		m_wndTaxAccount.EnableWindow(FALSE);
		m_szTaxAccountKey.Empty();
	}
	m_nTaxAmount = m_nAmount*nTaxRate/100.0;
	UpdateData(FALSE);

	return 0;
}


void CAccCashInput::OnTaxAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashInput::OnTaxAccountSelendok(){
	
}
/*void CAccCashInput::OnTaxAccountSetfocus(){
	
}*/
/*void CAccCashInput::OnTaxAccountKillfocus(){
	
}*/
long CAccCashInput::OnTaxAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ada_istax='Y' "));
	if(m_szInvoiceType == _T("R")){
//		szFilter.AppendFormat(_T(" and ada_typeid='1' "));
	}
	else
	{
//		szFilter.AppendFormat(_T(" and ada_typeid='2' "));
	}
	return pMF->LoadAccountList(&m_wndTaxAccount, m_szTaxAccountKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxAccount.IsSearchKey() && !m_szTaxAccountKey.IsEmpty()){
	};
	m_wndTaxAccount.DeleteAllItems(); 
	int nCount = 0;
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
/*void CAccCashInput::OnTaxAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */


void CAccCashInput::OnJobIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccCashInput::OnJobIDSelendok(){
	 
}
/*void CAccCashInput::OnJobIDSetfocus(){
	
}*/
/*void CAccCashInput::OnJobIDKillfocus(){
	
}*/
long CAccCashInput::OnJobIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadJobList(&m_wndJobID, m_szJobIDKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndJobID.IsSearchKey() && !m_szJobIDKey.IsEmpty()){
	};
	m_wndJobID.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndJobID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccCashInput::OnJobIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CAccCashInput::OnAddAccCashInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccCashInput::OnEditAccCashInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccCashInput::OnDeleteAccCashInput(){
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
 		OnCancelAccCashInput();
 	}
	return 0;
}
int CAccCashInput::OnSaveAccCashInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("FA_CASHLINE_CREATE( %s) "), m_fa_cashlineTbl.FormatSQL());
	else
		szSQL.Format(_T("FA_CASHLINE_UPDATE( %s) "), m_fa_cashlineTbl.FormatSQL());
//Notice(szSQL);
 	m_szLineID = pMF->ExecDML(szSQL);
 	if(m_szLineID == _T("ERR"))
 	{
		return -1;
 	}
	
	ApplyToList();
	if(m_szInvoiceType == _T("R"))
		m_szCreditAccountKey.Empty();
	else
		m_szDebitAccountKey.Empty();

	((CAccCashDialog*)GetParent()->GetParent())->RecalcTotalAmount();
	int ret = 0;
	if(GetMode() == VM_EDIT)
		ret = 0;
 	return ret;
}
int CAccCashInput::OnCancelAccCashInput(){
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
int CAccCashInput::OnAccCashInputListLoadData(){
	return 0;
}

int CAccCashInput::OnOK(){
	return  OnSaveAccCashInput();

}

void CAccCashInput::OnCancel(){
	CGuiListCtrl* pList = (CGuiListCtrl*) GetParent();
//	pList->SetCurSel(GetRowIndex());
}

void CAccCashInput::SetReference(CString szInvoiceType, CString szCashID, CString szLineID){
	m_szInvoiceType = szInvoiceType;

	m_szCashID = szCashID;
	m_szLineID = szLineID;
}