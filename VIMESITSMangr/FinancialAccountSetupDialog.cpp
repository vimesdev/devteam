#include "FinancialAccountSetupDialog.h"
#include "MainFrm.h"
/*static void _OnAccountIDChangeFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountIDChange();
} */
/*static void _OnAccountIDSetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountIDSetfocus();} */ 
/*static void _OnAccountIDKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountIDKillfocus();
} */
static int _OnAccountIDCheckValueFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnAccountIDCheckValue();
} 
/*static void _OnAccountNameChangeFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountNameChange();
} */
/*static void _OnAccountNameSetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountNameSetfocus();} */ 
/*static void _OnAccountNameKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountNameKillfocus();
} */
static int _OnAccountNameCheckValueFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnAccountNameCheckValue();
} 
/*static void _OnEnglishNameChangeFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnEnglishNameChange();
} */
/*static void _OnEnglishNameSetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnEnglishNameSetfocus();} */ 
/*static void _OnEnglishNameKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnEnglishNameKillfocus();
} */
static int _OnEnglishNameCheckValueFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnEnglishNameCheckValue();
} 
static void _OnAccountTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFinancialAccountSetupDialog* )pWnd)->OnAccountTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAccountTypeSelendokFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountTypeSelendok();
}
/*static void _OnAccountTypeSetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountTypeKillfocus();
}*/
/*static void _OnAccountTypeKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountTypeKillfocus();
}*/
static long _OnAccountTypeLoadDataFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnAccountTypeLoadData();
}
/*static void _OnAccountTypeAddNewFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnAccountTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFinancialAccountSetupDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnParentIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFinancialAccountSetupDialog* )pWnd)->OnParentIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentIDSelendokFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnParentIDSelendok();
}
/*static void _OnParentIDSetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnParentIDKillfocus();
}*/
/*static void _OnParentIDKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnParentIDKillfocus();
}*/
static long _OnParentIDLoadDataFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnParentIDLoadData();
}
/*static void _OnParentIDAddNewFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnParentIDAddNew();
}*/
/*static void _OnCurrencyChangeFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCurrencyChange();
} */
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCurrencySetfocus();} */ 
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog *)pWnd)->OnCurrencyKillfocus();
} */
static int _OnCurrencyCheckValueFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog *)pWnd)->OnCurrencyCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFinancialAccountSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFinancialAccountSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFinancialAccountSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFinancialAccountSetupDialog *pVw = (CFinancialAccountSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFinancialAccountSetupDialogFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnAddFinancialAccountSetupDialog();
} 
static int _OnEditFinancialAccountSetupDialogFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnEditFinancialAccountSetupDialog();
} 
static int _OnDeleteFinancialAccountSetupDialogFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnDeleteFinancialAccountSetupDialog();
} 
static int _OnSaveFinancialAccountSetupDialogFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnSaveFinancialAccountSetupDialog();
} 
static int _OnCancelFinancialAccountSetupDialogFnc(CWnd *pWnd){
	 return ((CFinancialAccountSetupDialog*)pWnd)->OnCancelFinancialAccountSetupDialog();
} 
CFinancialAccountSetupDialog::CFinancialAccountSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CFinancialAccountSetupDialog::~CFinancialAccountSetupDialog(){
}
void CFinancialAccountSetupDialog::OnCreateComponents()
{
	m_wndList.Create(this,5, 5, 635, 285); 
	m_wndAccountIDLabel.Create(this, _T("Account ID"), 5, 290, 95, 315);
	m_wndAccountID.Create(this,100, 290, 190, 315); 
	m_wndAccountNameLabel.Create(this, _T("Account Name"), 5, 320, 95, 345);
	m_wndAccountName.Create(this,100, 320, 320, 345); 
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 5, 350, 95, 375);
	m_wndEnglishName.Create(this,100, 350, 320, 375); 
	m_wndAccountTypeLabel.Create(this, _T("Account Type"), 5, 380, 95, 405);
	m_wndAccountType.Create(this,100, 380, 190, 405); 
	m_wndCategoryLabel.Create(this, _T("Category"), 325, 290, 430, 315);
	m_wndCategory.Create(this,435, 290, 635, 315); 
	m_wndParentIDLabel.Create(this, _T("Parent Account"), 325, 320, 430, 345);
	m_wndParentID.Create(this,435, 320, 635, 345); 
	m_wndCurrencyLabel.Create(this, _T("Currency Unit"), 325, 350, 430, 375);
	m_wndCurrency.Create(this,435, 350, 525, 375); 
	m_wndAdd.Create(this, _T("&Add"), 160, 410, 235, 435);
	m_wndEdit.Create(this, _T("&Edit"), 240, 410, 315, 435);
	m_wndDelete.Create(this, _T("&Delete"), 320, 410, 395, 435);
	m_wndSave.Create(this, _T("&Save"), 400, 410, 475, 435);
	m_wndCancel.Create(this, _T("&Cancel"), 480, 410, 555, 435);
	m_wndClose.Create(this, _T("&Close"), 560, 410, 635, 435);
}
void CFinancialAccountSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndAccountID.ModifyStyle(0, ES_UPPERCASE);
	m_wndAccountID.SetLimitText(15);
	m_wndAccountID.SetCheckValue(true);
	m_wndAccountName.SetLimitText(128);
	m_wndAccountName.SetCheckValue(true);
	m_wndEnglishName.SetLimitText(128);
	//m_wndEnglishName.SetCheckValue(true);
	m_wndAccountType.SetCheckValue(true);
	m_wndAccountType.LimitText(7);
	//m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(15);
	//m_wndParentID.SetCheckValue(true);
	m_wndParentID.LimitText(15);
	m_wndCurrency.SetLimitText(3);
	//m_wndCurrency.SetCheckValue(true);


	m_wndAccountType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAccountType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndParentID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParentID.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Account ID"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(1, _T("Account Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("English Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Account Type"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Category"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Parent ID"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(6, _T("Currency Unit"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T(""), CFMT_TEXT, 35);

	m_accountTbl.SetTableName(_T("ad_account"));
	m_accountTbl.AddField(_T("ada_account_id"), dfText, 15); 
	m_accountTbl.AddField(_T("ada_vnname"), dfText, 128); 
	m_accountTbl.AddField(_T("ada_enname"), dfText, 128); 
	m_accountTbl.AddField(_T("ada_account_type_id"), dfText, 7); 
	m_accountTbl.AddField(_T("ada_account_category_id"), dfText, 15); 
	m_accountTbl.AddField(_T("ada_grade"), dfLong); 
	m_accountTbl.AddField(_T("ada_parent_id"), dfText, 15); 
	m_accountTbl.AddField(_T("ada_currency_id"), dfText, 3); 
	//m_accountTbl.AddField(_T("balancesheetid"), dfText, 15); 
	//m_accountTbl.AddField(_T("balanceside"), dfLong); 
	//m_accountTbl.AddField(_T("active"), dfText, 1); 
	SetWindowTitle(_T("Account Information"));
}
void CFinancialAccountSetupDialog::OnSetWindowEvents()
{
	//m_wndAccountID.SetEvent(WE_CHANGE, _OnAccountIDChangeFnc);
	//m_wndAccountID.SetEvent(WE_SETFOCUS, _OnAccountIDSetfocusFnc);
	//m_wndAccountID.SetEvent(WE_KILLFOCUS, _OnAccountIDKillfocusFnc);
	m_wndAccountID.SetEvent(WE_CHECKVALUE, _OnAccountIDCheckValueFnc);
	//m_wndAccountName.SetEvent(WE_CHANGE, _OnAccountNameChangeFnc);
	//m_wndAccountName.SetEvent(WE_SETFOCUS, _OnAccountNameSetfocusFnc);
	//m_wndAccountName.SetEvent(WE_KILLFOCUS, _OnAccountNameKillfocusFnc);
	m_wndAccountName.SetEvent(WE_CHECKVALUE, _OnAccountNameCheckValueFnc);
	//m_wndEnglishName.SetEvent(WE_CHANGE, _OnEnglishNameChangeFnc);
	//m_wndEnglishName.SetEvent(WE_SETFOCUS, _OnEnglishNameSetfocusFnc);
	//m_wndEnglishName.SetEvent(WE_KILLFOCUS, _OnEnglishNameKillfocusFnc);
	m_wndEnglishName.SetEvent(WE_CHECKVALUE, _OnEnglishNameCheckValueFnc);
	m_wndAccountType.SetEvent(WE_SELENDOK, _OnAccountTypeSelendokFnc);
	//m_wndAccountType.SetEvent(WE_SETFOCUS, _OnAccountTypeSetfocusFnc);
	//m_wndAccountType.SetEvent(WE_KILLFOCUS, _OnAccountTypeKillfocusFnc);
	m_wndAccountType.SetEvent(WE_SELCHANGE, _OnAccountTypeSelectChangeFnc);
	m_wndAccountType.SetEvent(WE_LOADDATA, _OnAccountTypeLoadDataFnc);
	//m_wndAccountType.SetEvent(WE_ADDNEW, _OnAccountTypeAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndParentID.SetEvent(WE_SELENDOK, _OnParentIDSelendokFnc);
	//m_wndParentID.SetEvent(WE_SETFOCUS, _OnParentIDSetfocusFnc);
	//m_wndParentID.SetEvent(WE_KILLFOCUS, _OnParentIDKillfocusFnc);
	m_wndParentID.SetEvent(WE_SELCHANGE, _OnParentIDSelectChangeFnc);
	m_wndParentID.SetEvent(WE_LOADDATA, _OnParentIDLoadDataFnc);
	//m_wndParentID.SetEvent(WE_ADDNEW, _OnParentIDAddNewFnc);
	//m_wndCurrency.SetEvent(WE_CHANGE, _OnCurrencyChangeFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_CHECKVALUE, _OnCurrencyCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Account"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddFinancialAccountSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditFinancialAccountSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteFinancialAccountSetupDialogFnc, 0, 0, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
		//m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		//m_wndList.SetFocus();
		m_szAccountID = m_wndList.GetItemText(0, 0).Trim();
		m_nIndex = 0;
		//GetDataToScreen();
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CFinancialAccountSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAccountID.GetDlgCtrlID(), m_szAccountID);
	DDX_Text(pDX, m_wndAccountName.GetDlgCtrlID(), m_szAccountName);
	DDX_Text(pDX, m_wndEnglishName.GetDlgCtrlID(), m_szEnglishName);
	DDX_TextEx(pDX, m_wndAccountType.GetDlgCtrlID(), m_szAccountTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndParentID.GetDlgCtrlID(), m_szParentIDKey);
	DDX_Text(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrency);

}
void CFinancialAccountSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_account WHERE ada_account_id='%s'"), m_szAccountID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("accountid"), m_szAccountID);
		rs.GetValue(_T("ada_vnname"), m_szAccountName);
		rs.GetValue(_T("ada_enname"), m_szEnglishName);
		rs.GetValue(_T("ada_account_type_id"), m_szAccountTypeKey);
		rs.GetValue(_T("ada_account_category_id"), m_szCategoryKey);
		//rs.GetValue(_T("grade"), m_nGrade);
		rs.GetValue(_T("ada_parent_id"), m_szParentIDKey);
		rs.GetValue(_T("ada_currency_id"), m_szCurrency);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CFinancialAccountSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_accountTbl.SetValue(_T("accountid"), m_szAccountID);
	if (GetMode() == VM_ADD)
		m_nGrade = m_szAccountID.Trim().GetLength() - 2;
	m_accountTbl.SetValue(_T("ada_vnname"), m_szAccountName);
	m_accountTbl.SetValue(_T("ada_enname"), m_szEnglishName);
	m_accountTbl.SetValue(_T("ada_account_type_id"), m_szAccountTypeKey);
	m_accountTbl.SetValue(_T("ada_account_category_id"), m_szCategoryKey);
	m_accountTbl.SetValue(_T("ada_grade"), m_nGrade);
	m_accountTbl.SetValue(_T("ada_parent_id"), m_szParentIDKey);
	m_accountTbl.SetValue(_T("ada_currency_id"), m_szCurrency);

}
void CFinancialAccountSetupDialog::SetDefaultValues()
{

	m_szAccountID.Empty();
	m_szAccountName.Empty();
	m_szEnglishName.Empty();
	m_szAccountTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szParentIDKey.Empty();
	m_szCurrency.Empty();
	m_nGrade = 0;
}
int CFinancialAccountSetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues();
			m_wndAccountID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndAccountID.EnableWindow(FALSE);
			m_wndAccountName.SetFocus();
			m_wndAccountName.SetSel(m_wndAccountName.GetWindowTextLength(), m_wndAccountName.GetWindowTextLength());
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFinancialAccountSetupDialog::OnAccountIDChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountIDSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountIDKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnAccountIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsb(&pMF->m_db);
	CString szSQL;
	int nCount;
	szSQL.Format(_T("SELECT Count(*) FROM ad_account WHERE ada_account_id='%s'"), m_szAccountID);
	nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndAccountID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	if (m_szAccountID.GetLength() > 3)
	{
		szSQL.Format(_T("SELECT Count(*) FROM ad_account WHERE ada_account_id='%s'"), m_szAccountID.Left(3));
		rsb.ExecSQL(szSQL);
		nCount = rsb.GetIntValue();
		if (nCount <= 0)
		{
			m_wndAccountID.SetToolTipMessage(_T("This account id hasn't got any parent account id"));
			return -1;
		}
	}
	return 0;
} 
/*void CFinancialAccountSetupDialog::OnAccountNameChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountNameSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountNameKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnAccountNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szAccountName, szTemp);
	m_szAccountName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
/*void CFinancialAccountSetupDialog::OnEnglishNameChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnEnglishNameSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnEnglishNameKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnEnglishNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szEnglishName, szTemp);
	m_szEnglishName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CFinancialAccountSetupDialog::OnAccountTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CFinancialAccountSetupDialog::OnAccountTypeSelendok(){
	 
}
/*void CFinancialAccountSetupDialog::OnAccountTypeSetfocus(){
	
}*/
/*void CFinancialAccountSetupDialog::OnAccountTypeKillfocus(){
	
}*/
long CFinancialAccountSetupDialog::OnAccountTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndAccountType.IsSearchKey() && !m_szAccountTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fact_id='%s' "), m_szAccountTypeKey);
	};
	m_wndAccountType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_acctype %s ORDER BY fact_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAccountType.AddItems(
			rs.GetValue(_T("fact_id")), 
			rs.GetValue(_T("fact_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFinancialAccountSetupDialog::OnAccountTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFinancialAccountSetupDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFinancialAccountSetupDialog::OnCategorySelendok(){
	 
}
/*void CFinancialAccountSetupDialog::OnCategorySetfocus(){
	
}*/
/*void CFinancialAccountSetupDialog::OnCategoryKillfocus(){
	
}*/
long CFinancialAccountSetupDialog::OnCategoryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE famc_id='%s' "), m_szCategoryKey);
	}
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_id AS id, famc_name AS description FROM fam_category ORDER BY famc_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFinancialAccountSetupDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFinancialAccountSetupDialog::OnParentIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFinancialAccountSetupDialog::OnParentIDSelendok(){
	 
}
/*void CFinancialAccountSetupDialog::OnParentIDSetfocus(){
	
}*/
/*void CFinancialAccountSetupDialog::OnParentIDKillfocus(){
	
}*/
long CFinancialAccountSetupDialog::OnParentIDLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndParentID.IsSearchKey() && !m_szParentIDKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ada_account_id='%s' "), m_szParentIDKey);
	};
	m_wndParentID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ada_account_id AS id, ada_vnname AS description FROM ad_account WHERE ada_account_id='%s' %s ORDER BY ada_account_id"),
		m_szAccountID.Left(m_szAccountID.Trim().GetLength() - 1), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParentID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFinancialAccountSetupDialog::OnParentIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFinancialAccountSetupDialog::OnCurrencyChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnCurrencySetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnCurrencyKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnCurrencyCheckValue(){
	return 0;
} 
void CFinancialAccountSetupDialog::OnListDblClick(){
	
} 
void CFinancialAccountSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szAccountID = m_wndList.GetItemText(nNewItem, 0).Trim();
	GetDataToScreen();
} 
int CFinancialAccountSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFinancialAccountSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szParentID;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM ad_account WHERE ada_grade=1 ORDER BY ada_account_id"));
				 /*_T("SELECT ss_desc FROM sys_sel WHERE ss_code=accounttype, ")\
				 _T("SELECT famc_name FROM fam_category WHERE famc_id=categoryid, parentid, currencyid ")\*/
				 //_T("FROM account WHERE grade=1 ORDER BY accountid"));
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("ada_account_id"), szParentID);
		m_wndList.AddItems(
			szParentID, 
			rs.GetValue(_T("ada_vnname")), 
			rs.GetValue(_T("ada_enname")), 
			rs.GetValue(_T("ada_account_type_id")), 
			rs.GetValue(_T("ada_account_category_id")), 
			rs.GetValue(_T("ada_parent_id")), 
			rs.GetValue(_T("ada_currency_id")), NULL);
		LoadAccount(&m_wndList, szParentID); 
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CFinancialAccountSetupDialog::LoadAccount(CGuiListCtrl *pList, CString szParentID)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szAccountID, szSpace;
	int nGrade = 0;
	//m_wndList.BeginLoad(); 
	//m_wndList.DeleteAllItems();
	//_msg(_T("Parent: %s"), szParentID);
	szSQL.Format(_T("SELECT * FROM ad_account WHERE ada_parent_id='%s' ORDER BY ada_account_id"), szParentID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%d"), rs.GetRecordCount());
	while (!rs.IsEOF())
	{
		//MessageBox(_T("OK"));
		szSpace.Empty();
		rs.GetValue(_T("ada_account_id"), szAccountID);
		//_msg(_T("Child: %s"), szAccountID);
		rs.GetValue(_T("ada_grade"), nGrade);
		for (int i = 0; i < nGrade; i++)
			szSpace += _T(" ");
		//_msg(_T("Space: %d"), szSpace.GetLength());
		m_wndList.AddItems(
			szSpace + szAccountID, 
			rs.GetValue(_T("ada_vnname")), 
			rs.GetValue(_T("ada_enname")), 
			rs.GetValue(_T("ada_account_type_id")), 
			rs.GetValue(_T("ada_account_category_id")), 
			rs.GetValue(_T("ada_parent_id")), 
			rs.GetValue(_T("ada_currency_id")), NULL);
		LoadAccount(&m_wndList, szAccountID);
		rs.MoveNext();
	}
	//m_wndList.EndLoad(); 
}
void CFinancialAccountSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rsm(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_assetaccount='%s' OR fa_depraccount='%s' OR fa_expenseaccount='%s'"), 
				 m_szAccountID, m_szAccountID, m_szAccountID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset contains this account. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	if (m_szAccountID.GetLength() == 3)
	{
		szSQL.Format(_T("SELECT Count(*) FROM ada_account WHERE ada_account_id LIKE '%s%s'"), m_szAccountID, _T("%"));
		rsm.ExecSQL(szSQL);
		if (rsm.GetIntValue() > 1)
		{
			ShowMessageBox(_T("You must delete child account(s) first"), MB_OK | MB_ICONERROR);
			return;
		}
	}
	OnDeleteFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFinancialAccountSetupDialog::OnAddFinancialAccountSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFinancialAccountSetupDialog::OnEditFinancialAccountSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFinancialAccountSetupDialog::OnDeleteFinancialAccountSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szId;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
	//szId = m_wndList.GetItemText(m_nIndex, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM ad_account WHERE ada_account_id='%s'"), m_szAccountID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{
		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szAccountID, m_nIndex);
			//m_szAccountID = m_wndList.GetItemText(m_nIndex, 0).Trim();
		//_msg(_T("%d"), m_nIndex);
			//GetDataToScreen();
		/*if (m_wndList.GetItemCount() > 0)
 			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);*/
		}
		else
		{
 			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 		//OnCancelFinancialAccountSetupDialog(); 
 	}
	return 0;
}
int CFinancialAccountSetupDialog::OnSaveFinancialAccountSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_accountTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		m_nIndex = m_wndList.GetCurSel();
		szWhere.Format(_T(" WHERE ada_account_id='%s' "), m_szAccountID); 
 		szSQL = m_accountTbl.GetUpdateSQL(_T("ada_account_id, ada_grade")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFinancialAccountSetupDialogListLoadData(); 
		OnListLoadData();
		SetItemSel(&m_wndList, m_szAccountID, m_nIndex);
 		/*if (GetMode() == VM_EDIT)
		{
			m_szAccountID = m_wndList.GetItemText(m_nIndex, 0).Trim();
			GetDataToScreen();
		}*/
 		SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 /*	else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CFinancialAccountSetupDialog::OnCancelFinancialAccountSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szAccountID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CFinancialAccountSetupDialog::OnFinancialAccountSetupDialogListLoadData(){
	return 0;
}

void CFinancialAccountSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				//pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(i, 1);
				m_nIndex = i;
				//pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
		//pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		//pList->EnsureVisible(nIndex, 1);
		//pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				//pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(0, 1);
				//pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();
				pList->SetCurSel(m_nIndex);
			}
		}
	}
}