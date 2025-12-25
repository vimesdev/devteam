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

	m_nDlgWidth = 786;
	m_nDlgHeight = 586;
	SetDefaultValues();
}
CFinancialAccountSetupDialog::~CFinancialAccountSetupDialog(){
}
void CFinancialAccountSetupDialog::OnCreateComponents(){
	m_wndAccountIDLabel.Create(this, _T("Account ID"), 7, 352, 110, 377);
	m_wndAccountID.Create(this,115, 352, 195, 377); 
	m_wndAccountNameLabel.Create(this, _T("Account Name"), 7, 378, 110, 403);
	m_wndAccountName.Create(this,115, 378, 195, 403); 
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 7, 404, 110, 429);
	m_wndEnglishName.Create(this,115, 404, 195, 429); 
	m_wndAccountTypeLabel.Create(this, _T("Account Type"), 7, 430, 110, 455);
	m_wndAccountType.Create(this,115, 430, 195, 455); 
	m_wndCategoryLabel.Create(this, _T("Category"), 7, 456, 110, 481);
	m_wndCategory.Create(this,115, 456, 195, 481); 
	m_wndParentIDLabel.Create(this, _T("Parent ID"), 7, 482, 110, 507);
	m_wndParentID.Create(this,115, 482, 195, 507); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 7, 508, 110, 533);
	m_wndCurrency.Create(this,115, 508, 195, 533); 
	m_wndList.Create(this,12, 4, 581, 320); 
	m_wndAdd.Create(this, _T("&Add"), 270, 356, 345, 381);
	m_wndEdit.Create(this, _T("&Edit"), 270, 386, 345, 411);
	m_wndDelete.Create(this, _T("&Delete"), 270, 416, 345, 441);
	m_wndSave.Create(this, _T("&Save"), 270, 446, 345, 471);
	m_wndCancel.Create(this, _T("&Cancel"), 270, 476, 345, 501);
	m_wndClose.Create(this, _T("&Close"), 270, 506, 345, 531);

}
void CFinancialAccountSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndAccountID.SetLimitText(15);
	m_wndAccountID.SetCheckValue(true);
	m_wndAccountName.SetLimitText(128);
	m_wndAccountName.SetCheckValue(true);
	m_wndEnglishName.SetLimitText(128);
	m_wndEnglishName.SetCheckValue(true);
	m_wndAccountType.SetCheckValue(true);
	m_wndAccountType.LimitText(7);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(15);
	m_wndParentID.SetCheckValue(true);
	m_wndParentID.LimitText(15);
	m_wndCurrency.SetLimitText(3);
	m_wndCurrency.SetCheckValue(true);


	m_wndAccountType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAccountType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndParentID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndParentID.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Account ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Account Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("English Name"), CFMT_TEXT, 200);
	m_accountTbl.SetTableName(_T("account"));
	m_accountTbl.AddField(_T("accountid"), dfText, 15); 
	m_accountTbl.AddField(_T("accountname"), dfText, 128); 
	m_accountTbl.AddField(_T("accountnameen"), dfText, 128); 
	m_accountTbl.AddField(_T("accounttype"), dfText, 7); 
	m_accountTbl.AddField(_T("categoryid"), dfText, 15); 
	m_accountTbl.AddField(_T("grade"), dfLong); 
	m_accountTbl.AddField(_T("parentid"), dfText, 15); 
	m_accountTbl.AddField(_T("currencyid"), dfText, 3); 
	m_accountTbl.AddField(_T("balancesheetid"), dfText, 15); 
	m_accountTbl.AddField(_T("balanceside"), dfLong); 
	m_accountTbl.AddField(_T("active"), dfText, 1); 

}
void CFinancialAccountSetupDialog::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();

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
void CFinancialAccountSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("accountid"), m_szAccountID);
	rs.GetValue(_T("accountname"), m_szAccountName);
	rs.GetValue(_T("accountnameen"), m_szEnglishName);
	rs.GetValue(_T("accounttype"), m_szAccountTypeKey);
	rs.GetValue(_T("categoryid"), m_szCategoryKey);
	rs.GetValue(_T("parentid"), m_szParentIDKey);
	rs.GetValue(_T("currencyid"), m_szCurrency);

}
void CFinancialAccountSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_accountTbl.SetValue(_T("accountid"), m_szAccountID);
	m_accountTbl.SetValue(_T("accountname"), m_szAccountName);
	m_accountTbl.SetValue(_T("accountnameen"), m_szEnglishName);
	m_accountTbl.SetValue(_T("accounttype"), m_szAccountTypeKey);
	m_accountTbl.SetValue(_T("categoryid"), m_szCategoryKey);
	m_accountTbl.SetValue(_T("parentid"), m_szParentIDKey);
	m_accountTbl.SetValue(_T("currencyid"), m_szCurrency);

}
void CFinancialAccountSetupDialog::SetDefaultValues(){

	m_szAccountID.Empty();
	m_szAccountName.Empty();
	m_szEnglishName.Empty();
	m_szAccountTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szParentIDKey.Empty();
	m_szCurrency.Empty();

}
int CFinancialAccountSetupDialog::SetMode(int nMode){
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
/*void CFinancialAccountSetupDialog::OnAccountIDChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountIDSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountIDKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnAccountIDCheckValue(){
	return 0;
} 
/*void CFinancialAccountSetupDialog::OnAccountNameChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountNameSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnAccountNameKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnAccountNameCheckValue(){
	return 0;
} 
/*void CFinancialAccountSetupDialog::OnEnglishNameChange(){
	
} */
/*void CFinancialAccountSetupDialog::OnEnglishNameSetfocus(){
	
} */
/*void CFinancialAccountSetupDialog::OnEnglishNameKillfocus(){
	
} */
int CFinancialAccountSetupDialog::OnEnglishNameCheckValue(){
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
long CFinancialAccountSetupDialog::OnAccountTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAccountType.IsSearchKey() && !m_szAccountTypeKey.IsEmpty()){
		
	};
	m_wndAccountType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAccountType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
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
long CFinancialAccountSetupDialog::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
long CFinancialAccountSetupDialog::OnParentIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndParentID.IsSearchKey() && !m_szParentIDKey.IsEmpty()){
		szWhere.Format(_T(" AND accountid='%s' "), m_szParentIDKey);
	};
	m_wndParentID.DeleteAllItems(); 
	int nCount = 0;
	tmpStr.Format(_T("%s"), m_szAccountID.Left(m_szAccountID.GetLength()-1));

	szSQL.Format(_T("SELECT * FROM account WHERE accountid='%s' %s ORDER BY accountid "), tmpStr, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParentID.AddItems(
			rs.GetValue(_T("accountid")), 
			rs.GetValue(_T("accountname")), NULL);
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
void CFinancialAccountSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFinancialAccountSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFinancialAccountSetupDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szParentID;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM account WHERE grade=1 ORDER BY accountid"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("accountid"), szParentID);
		m_wndList.AddItems(
			rs.GetValue(_T("AccountID")), 
			rs.GetValue(_T("AccountName")), 
			rs.GetValue(_T("EnglishName")), NULL);
		LoadAccount(&m_wndList, szParentID);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

void CFinancialAccountSetupDialog::LoadAccount(CGuiListCtrl *pList, CString szParentID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szAccountID, szAccountName, tmpStr;
	szSQL.Format(_T("SELECT * FROM account WHERE parentid='%s' ORDER BY accountid"), szParentID);
	rs.ExecSQL(szSQL);
	
	int nGrade=0;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("accountid"), szAccountID);
		rs.GetValue(_T("accountName"), szAccountName);
		rs.GetValue(_T("grade"), nGrade);
		tmpStr.Empty();
		for (int i=0; i < nGrade; i++)
			tmpStr += _T(" ");

		m_wndList.AddItems(
			tmpStr+szAccountID, 
			rs.GetValue(_T("AccountName")), 
			rs.GetValue(_T("EnglishName")), NULL);

		LoadAccount(&m_wndList, szAccountID);
		rs.MoveNext();
	}
}
void CFinancialAccountSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFinancialAccountSetupDialog();
} 
void CFinancialAccountSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFinancialAccountSetupDialog::OnAddFinancialAccountSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFinancialAccountSetupDialog::OnEditFinancialAccountSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFinancialAccountSetupDialog::OnDeleteFinancialAccountSetupDialog(){
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
 		OnCancelFinancialAccountSetupDialog(); 
 	}
	return 0;
}
int CFinancialAccountSetupDialog::OnSaveFinancialAccountSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_accountTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_accountTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFinancialAccountSetupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFinancialAccountSetupDialog::OnCancelFinancialAccountSetupDialog(){
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
int CFinancialAccountSetupDialog::OnFinancialAccountSetupDialogListLoadData(){
	return 0;
}
