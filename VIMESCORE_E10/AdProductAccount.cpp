#include "AdProductAccount.h"
#include "MainFrame_E10.h"
static void _OnMaterialExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnMaterialExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMaterialExpenseSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnMaterialExpenseSelendok();
}
/*static void _OnMaterialExpenseSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnMaterialExpenseKillfocus();
}*/
/*static void _OnMaterialExpenseKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnMaterialExpenseKillfocus();
}*/
static long _OnMaterialExpenseLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnMaterialExpenseLoadData();
}
/*static void _OnMaterialExpenseAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnMaterialExpenseAddNew();
}*/
static void _OnLaborExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnLaborExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLaborExpenseSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnLaborExpenseSelendok();
}
/*static void _OnLaborExpenseSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnLaborExpenseKillfocus();
}*/
/*static void _OnLaborExpenseKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnLaborExpenseKillfocus();
}*/
static long _OnLaborExpenseLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnLaborExpenseLoadData();
}
/*static void _OnLaborExpenseAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnLaborExpenseAddNew();
}*/
static void _OnPrepaidExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnPrepaidExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrepaidExpenseSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPrepaidExpenseSelendok();
}
/*static void _OnPrepaidExpenseSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPrepaidExpenseKillfocus();
}*/
/*static void _OnPrepaidExpenseKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPrepaidExpenseKillfocus();
}*/
static long _OnPrepaidExpenseLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnPrepaidExpenseLoadData();
}
/*static void _OnPrepaidExpenseAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPrepaidExpenseAddNew();
}*/
static void _OnPayableExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnPayableExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayableExpenseSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPayableExpenseSelendok();
}
/*static void _OnPayableExpenseSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPayableExpenseKillfocus();
}*/
/*static void _OnPayableExpenseKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPayableExpenseKillfocus();
}*/
static long _OnPayableExpenseLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnPayableExpenseLoadData();
}
/*static void _OnPayableExpenseAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnPayableExpenseAddNew();
}*/
static void _OnGeneralExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnGeneralExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGeneralExpenseSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnGeneralExpenseSelendok();
}
/*static void _OnGeneralExpenseSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnGeneralExpenseKillfocus();
}*/
/*static void _OnGeneralExpenseKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnGeneralExpenseKillfocus();
}*/
static long _OnGeneralExpenseLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnGeneralExpenseLoadData();
}
/*static void _OnGeneralExpenseAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnGeneralExpenseAddNew();
}*/
static void _OnUnfinishedWorkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductAccount* )pWnd)->OnUnfinishedWorkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnfinishedWorkSelendokFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnUnfinishedWorkSelendok();
}
/*static void _OnUnfinishedWorkSetfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnUnfinishedWorkKillfocus();
}*/
/*static void _OnUnfinishedWorkKillfocusFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnUnfinishedWorkKillfocus();
}*/
static long _OnUnfinishedWorkLoadDataFnc(CWnd *pWnd){
	return ((CAdProductAccount *)pWnd)->OnUnfinishedWorkLoadData();
}
/*static void _OnUnfinishedWorkAddNewFnc(CWnd *pWnd){
	((CAdProductAccount *)pWnd)->OnUnfinishedWorkAddNew();
}*/
static int _OnAddAdProductAccountFnc(CWnd *pWnd){
	 return ((CAdProductAccount*)pWnd)->OnAddAdProductAccount();
} 
static int _OnEditAdProductAccountFnc(CWnd *pWnd){
	 return ((CAdProductAccount*)pWnd)->OnEditAdProductAccount();
} 
static int _OnDeleteAdProductAccountFnc(CWnd *pWnd){
	 return ((CAdProductAccount*)pWnd)->OnDeleteAdProductAccount();
} 
static int _OnSaveAdProductAccountFnc(CWnd *pWnd){
	 return ((CAdProductAccount*)pWnd)->OnSaveAdProductAccount();
} 
static int _OnCancelAdProductAccountFnc(CWnd *pWnd){
	 return ((CAdProductAccount*)pWnd)->OnCancelAdProductAccount();
} 
CAdProductAccount::CAdProductAccount(){

	m_nDlgWidth = 966;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CAdProductAccount::~CAdProductAccount(){
}
void CAdProductAccount::OnCreateComponents(){
	m_wndProductAccount.Create(this, _T("Product Account"), 0, 0, 790, 380);
	m_wndMaterialExpenseLabel.Create(this, _T("Material Expense"), 5, 25, 125, 50);
	m_wndMaterialExpense.Create(this,130, 25, 390, 50); 
	m_wndLaborExpenseLabel.Create(this, _T("Labor Expense"), 395, 25, 515, 50);
	m_wndLaborExpense.Create(this,520, 25, 780, 50); 
	m_wndPrepaidExpenseLabel.Create(this, _T("Prepaid Expense"), 5, 55, 125, 80);
	m_wndPrepaidExpense.Create(this,130, 55, 390, 80); 
	m_wndPayableExpenseLabel.Create(this, _T("Payable Expense"), 395, 55, 515, 80);
	m_wndPayableExpense.Create(this,520, 55, 780, 80); 
	m_wndGeneralExpenseLabel.Create(this, _T("General Expense"), 5, 85, 125, 110);
	m_wndGeneralExpense.Create(this,130, 85, 390, 110); 
	m_wndUnfinishedWorkLabel.Create(this, _T("Unfinished Work"), 395, 85, 515, 110);
	m_wndUnfinishedWork.Create(this,520, 85, 780, 110); 

}
void CAdProductAccount::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndMaterialExpense.SetCheckValue(true);
	m_wndMaterialExpense.LimitText(35);
	//m_wndLaborExpense.SetCheckValue(true);
	m_wndLaborExpense.LimitText(35);
	//m_wndPrepaidExpense.SetCheckValue(true);
	m_wndPrepaidExpense.LimitText(35);
	//m_wndPayableExpense.SetCheckValue(true);
	m_wndPayableExpense.LimitText(35);
	//m_wndGeneralExpense.SetCheckValue(true);
	m_wndGeneralExpense.LimitText(35);
	//m_wndUnfinishedWork.SetCheckValue(true);
	m_wndUnfinishedWork.LimitText(35);


	m_wndMaterialExpense.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMaterialExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndLaborExpense.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLaborExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPrepaidExpense.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPrepaidExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPayableExpense.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPayableExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndGeneralExpense.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGeneralExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndUnfinishedWork.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUnfinishedWork.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_ad_productTbl.SetTableName(_T("ad_product"));
	m_ad_productTbl.AddField(_T("adp_material_expense"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_labor_expense"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_prepaid_expense"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_payable_expense"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_general_expense"), dfText, 32); 
	m_ad_productTbl.AddField(_T("adp_unfinished_expense"), dfText, 32); 
}
void CAdProductAccount::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndMaterialExpense.SetEvent(WE_SELENDOK, _OnMaterialExpenseSelendokFnc);
	//m_wndMaterialExpense.SetEvent(WE_SETFOCUS, _OnMaterialExpenseSetfocusFnc);
	//m_wndMaterialExpense.SetEvent(WE_KILLFOCUS, _OnMaterialExpenseKillfocusFnc);
	m_wndMaterialExpense.SetEvent(WE_SELCHANGE, _OnMaterialExpenseSelectChangeFnc);
	m_wndMaterialExpense.SetEvent(WE_LOADDATA, _OnMaterialExpenseLoadDataFnc);
	//m_wndMaterialExpense.SetEvent(WE_ADDNEW, _OnMaterialExpenseAddNewFnc);
	m_wndLaborExpense.SetEvent(WE_SELENDOK, _OnLaborExpenseSelendokFnc);
	//m_wndLaborExpense.SetEvent(WE_SETFOCUS, _OnLaborExpenseSetfocusFnc);
	//m_wndLaborExpense.SetEvent(WE_KILLFOCUS, _OnLaborExpenseKillfocusFnc);
	m_wndLaborExpense.SetEvent(WE_SELCHANGE, _OnLaborExpenseSelectChangeFnc);
	m_wndLaborExpense.SetEvent(WE_LOADDATA, _OnLaborExpenseLoadDataFnc);
	//m_wndLaborExpense.SetEvent(WE_ADDNEW, _OnLaborExpenseAddNewFnc);
	m_wndPrepaidExpense.SetEvent(WE_SELENDOK, _OnPrepaidExpenseSelendokFnc);
	//m_wndPrepaidExpense.SetEvent(WE_SETFOCUS, _OnPrepaidExpenseSetfocusFnc);
	//m_wndPrepaidExpense.SetEvent(WE_KILLFOCUS, _OnPrepaidExpenseKillfocusFnc);
	m_wndPrepaidExpense.SetEvent(WE_SELCHANGE, _OnPrepaidExpenseSelectChangeFnc);
	m_wndPrepaidExpense.SetEvent(WE_LOADDATA, _OnPrepaidExpenseLoadDataFnc);
	//m_wndPrepaidExpense.SetEvent(WE_ADDNEW, _OnPrepaidExpenseAddNewFnc);
	m_wndPayableExpense.SetEvent(WE_SELENDOK, _OnPayableExpenseSelendokFnc);
	//m_wndPayableExpense.SetEvent(WE_SETFOCUS, _OnPayableExpenseSetfocusFnc);
	//m_wndPayableExpense.SetEvent(WE_KILLFOCUS, _OnPayableExpenseKillfocusFnc);
	m_wndPayableExpense.SetEvent(WE_SELCHANGE, _OnPayableExpenseSelectChangeFnc);
	m_wndPayableExpense.SetEvent(WE_LOADDATA, _OnPayableExpenseLoadDataFnc);
	//m_wndPayableExpense.SetEvent(WE_ADDNEW, _OnPayableExpenseAddNewFnc);
	m_wndGeneralExpense.SetEvent(WE_SELENDOK, _OnGeneralExpenseSelendokFnc);
	//m_wndGeneralExpense.SetEvent(WE_SETFOCUS, _OnGeneralExpenseSetfocusFnc);
	//m_wndGeneralExpense.SetEvent(WE_KILLFOCUS, _OnGeneralExpenseKillfocusFnc);
	m_wndGeneralExpense.SetEvent(WE_SELCHANGE, _OnGeneralExpenseSelectChangeFnc);
	m_wndGeneralExpense.SetEvent(WE_LOADDATA, _OnGeneralExpenseLoadDataFnc);
	//m_wndGeneralExpense.SetEvent(WE_ADDNEW, _OnGeneralExpenseAddNewFnc);
	m_wndUnfinishedWork.SetEvent(WE_SELENDOK, _OnUnfinishedWorkSelendokFnc);
	//m_wndUnfinishedWork.SetEvent(WE_SETFOCUS, _OnUnfinishedWorkSetfocusFnc);
	//m_wndUnfinishedWork.SetEvent(WE_KILLFOCUS, _OnUnfinishedWorkKillfocusFnc);
	m_wndUnfinishedWork.SetEvent(WE_SELCHANGE, _OnUnfinishedWorkSelectChangeFnc);
	m_wndUnfinishedWork.SetEvent(WE_LOADDATA, _OnUnfinishedWorkLoadDataFnc);
	//m_wndUnfinishedWork.SetEvent(WE_ADDNEW, _OnUnfinishedWorkAddNewFnc);
}
void CAdProductAccount::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMaterialExpense.GetDlgCtrlID(), m_szMaterialExpenseKey);
	DDX_TextEx(pDX, m_wndLaborExpense.GetDlgCtrlID(), m_szLaborExpenseKey);
	DDX_TextEx(pDX, m_wndPrepaidExpense.GetDlgCtrlID(), m_szPrepaidExpenseKey);
	DDX_TextEx(pDX, m_wndPayableExpense.GetDlgCtrlID(), m_szPayableExpenseKey);
	DDX_TextEx(pDX, m_wndGeneralExpense.GetDlgCtrlID(), m_szGeneralExpenseKey);
	DDX_TextEx(pDX, m_wndUnfinishedWork.GetDlgCtrlID(), m_szUnfinishedWorkKey);

}
void CAdProductAccount::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_product WHERE adp_product_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adp_material_expense"), m_szMaterialExpenseKey);
		rs.GetValue(_T("adp_labor_expense"), m_szLaborExpenseKey);
		rs.GetValue(_T("adp_prepaid_expense"), m_szPrepaidExpenseKey);
		rs.GetValue(_T("adp_payable_expense"), m_szPayableExpenseKey);
		rs.GetValue(_T("adp_general_expense"), m_szGeneralExpenseKey);
		rs.GetValue(_T("adp_unfinished_expense"), m_szUnfinishedWorkKey);
	}
}
void CAdProductAccount::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	m_ad_productTbl.SetValue(_T("adp_material_expense"), m_szMaterialExpenseKey);
	m_ad_productTbl.SetValue(_T("adp_labor_expense"), m_szLaborExpenseKey);
	m_ad_productTbl.SetValue(_T("adp_prepaid_expense"), m_szPrepaidExpenseKey);
	m_ad_productTbl.SetValue(_T("adp_payable_expense"), m_szPayableExpenseKey);
	m_ad_productTbl.SetValue(_T("adp_general_expense"), m_szGeneralExpenseKey);
	m_ad_productTbl.SetValue(_T("adp_unfinished_expense"), m_szUnfinishedWorkKey);
}
void CAdProductAccount::SetDefaultValues(){

	m_szMaterialExpenseKey.Empty();
	m_szLaborExpenseKey.Empty();
	m_szPrepaidExpenseKey.Empty();
	m_szPayableExpenseKey.Empty();
	m_szGeneralExpenseKey.Empty();
	m_szUnfinishedWorkKey.Empty();

}
int CAdProductAccount::SetMode(int nMode){
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
 		UpdateData(FALSE);
 		return nOldMode;
}
void CAdProductAccount::OnMaterialExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnMaterialExpenseSelendok(){
	 
}
/*void CAdProductAccount::OnMaterialExpenseSetfocus(){
	
}*/
/*void CAdProductAccount::OnMaterialExpenseKillfocus(){
	
}*/
long CAdProductAccount::OnMaterialExpenseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndMaterialExpense, m_szMaterialExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMaterialExpense.IsSearchKey() && !m_szMaterialExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMaterialExpenseKey
};
	m_wndMaterialExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterialExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnMaterialExpenseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductAccount::OnLaborExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnLaborExpenseSelendok(){
	 
}
/*void CAdProductAccount::OnLaborExpenseSetfocus(){
	
}*/
/*void CAdProductAccount::OnLaborExpenseKillfocus(){
	
}*/
long CAdProductAccount::OnLaborExpenseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndLaborExpense, m_szLaborExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLaborExpense.IsSearchKey() && !m_szLaborExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szLaborExpenseKey
};
	m_wndLaborExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLaborExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnLaborExpenseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductAccount::OnPrepaidExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnPrepaidExpenseSelendok(){
	 
}
/*void CAdProductAccount::OnPrepaidExpenseSetfocus(){
	
}*/
/*void CAdProductAccount::OnPrepaidExpenseKillfocus(){
	
}*/
long CAdProductAccount::OnPrepaidExpenseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndPrepaidExpense, m_szPrepaidExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPrepaidExpense.IsSearchKey() && !m_szPrepaidExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPrepaidExpenseKey
};
	m_wndPrepaidExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrepaidExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnPrepaidExpenseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductAccount::OnPayableExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnPayableExpenseSelendok(){
	 
}
/*void CAdProductAccount::OnPayableExpenseSetfocus(){
	
}*/
/*void CAdProductAccount::OnPayableExpenseKillfocus(){
	
}*/
long CAdProductAccount::OnPayableExpenseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndPayableExpense, m_szPayableExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayableExpense.IsSearchKey() && !m_szPayableExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayableExpenseKey
};
	m_wndPayableExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayableExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnPayableExpenseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductAccount::OnGeneralExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnGeneralExpenseSelendok(){
	 
}
/*void CAdProductAccount::OnGeneralExpenseSetfocus(){
	
}*/
/*void CAdProductAccount::OnGeneralExpenseKillfocus(){
	
}*/
long CAdProductAccount::OnGeneralExpenseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndGeneralExpense, m_szGeneralExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGeneralExpense.IsSearchKey() && !m_szGeneralExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGeneralExpenseKey
};
	m_wndGeneralExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGeneralExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnGeneralExpenseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdProductAccount::OnUnfinishedWorkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductAccount::OnUnfinishedWorkSelendok(){
	 
}
/*void CAdProductAccount::OnUnfinishedWorkSetfocus(){
	
}*/
/*void CAdProductAccount::OnUnfinishedWorkKillfocus(){
	
}*/
long CAdProductAccount::OnUnfinishedWorkLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndUnfinishedWork, m_szUnfinishedWorkKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnfinishedWork.IsSearchKey() && !m_szUnfinishedWorkKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnfinishedWorkKey
};
	m_wndUnfinishedWork.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnfinishedWork.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductAccount::OnUnfinishedWorkAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CAdProductAccount::OnAddAdProductAccount(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdProductAccount::OnEditAdProductAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdProductAccount::OnDeleteAdProductAccount(){
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
 		OnCancelAdProductAccount();
 	}
	return 0;
}
int CAdProductAccount::OnSaveAdProductAccount(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;
 	szWhere.Format(_T(" WHERE adp_product_id = '%s'"), m_szID);
 	szSQL = m_ad_productTbl.GetUpdateSQL();
 	szSQL += szWhere;
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	return ret;
}
int CAdProductAccount::OnCancelAdProductAccount(){
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
int CAdProductAccount::OnAdProductAccountListLoadData(){
	return 0;
}
