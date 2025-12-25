#include "AdBankAccountPopup.h"
#include "MainFrame_E10.h"
#include "AdBankAccount.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdBankAccountPopup *)pWnd)->OnIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdBankAccountPopup*)pWnd)->OnActiveSelect();
}
static void _OnBankNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBankAccountPopup* )pWnd)->OnBankNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankNameSelendokFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBankNameSelendok();
}
/*static void _OnBankNameSetfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBankNameKillfocus();
}*/
/*static void _OnBankNameKillfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBankNameKillfocus();
}*/
static long _OnBankNameLoadDataFnc(CWnd *pWnd){
	return ((CAdBankAccountPopup *)pWnd)->OnBankNameLoadData();
}
/*static void _OnBankNameAddNewFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBankNameAddNew();
}*/
/*static void _OnBranchChangeFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBranchChange();
} */
/*static void _OnBranchSetfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBranchSetfocus();} */ 
/*static void _OnBranchKillfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnBranchKillfocus();
} */
static int _OnBranchCheckValueFnc(CWnd *pWnd){
	return ((CAdBankAccountPopup *)pWnd)->OnBranchCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdBankAccountPopup *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdBankAccountPopup *)pWnd)->OnAddressCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBankAccountPopup *pVw = (CAdBankAccountPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdBankAccountPopupFnc(CWnd *pWnd){
	 return ((CAdBankAccountPopup*)pWnd)->OnAddAdBankAccountPopup();
} 
static int _OnEditAdBankAccountPopupFnc(CWnd *pWnd){
	 return ((CAdBankAccountPopup*)pWnd)->OnEditAdBankAccountPopup();
} 
static int _OnDeleteAdBankAccountPopupFnc(CWnd *pWnd){
	 return ((CAdBankAccountPopup*)pWnd)->OnDeleteAdBankAccountPopup();
} 
static int _OnSaveAdBankAccountPopupFnc(CWnd *pWnd){
	 return ((CAdBankAccountPopup*)pWnd)->OnSaveAdBankAccountPopup();
} 
static int _OnCancelAdBankAccountPopupFnc(CWnd *pWnd){
	 return ((CAdBankAccountPopup*)pWnd)->OnCancelAdBankAccountPopup();
} 
CAdBankAccountPopup::CAdBankAccountPopup(){
	SetAutoClose(false);
	m_nDlgWidth = 790;
	m_nDlgHeight = 110;
	SetDefaultValues();
}

CAdBankAccountPopup::~CAdBankAccountPopup(){
}
void CAdBankAccountPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 790, 110);
	m_wndIDLabel.Create(this, _T("Account No"), 5, 25, 110, 50);
	m_wndID.Create(this,115, 25, 390, 50); 
	m_wndBankNameLabel.Create(this, _T("Bank Name"), 395, 25, 500, 50);
	m_wndBankName.Create(this,505, 25, 785, 50); 
	m_wndBranchLabel.Create(this, _T("Branch"), 5, 55, 110, 80);
	m_wndBranch.Create(this,115, 55, 390, 80); 
	m_wndAddressLabel.Create(this, _T("Address"), 395, 55, 500, 80);
	m_wndAddress.Create(this,505, 55, 785, 80); 
	m_wndActive.Create(this, _T("Active"), 5, 85, 85, 110);
	m_wndSave.Create(this, _T("&Save"), 700, 85, 785, 110);
}
void CAdBankAccountPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndEntry.ModifyStyle(WS_BORDER,0);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndBranch.SetLimitText(254);
	//m_wndBranch.SetCheckValue(true);
	m_wndBranch.SetInitCap(1);
	m_wndAddress.SetLimitText(254);
	//m_wndAddress.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_wndBankName.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndBankName.InsertColumn(1, _T("Name"), CFMT_TEXT, 375);
	m_ad_bank_accountTbl.SetTableName(_T("ad_bank_account"));
	m_ad_bank_accountTbl.AddField(_T("adba_CREATEDBY"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_CREATEDDATE"), dfDateTime); 
	m_ad_bank_accountTbl.AddField(_T("adba_UPDATEDBY"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_UPDATEDDATE"), dfDateTime); 
	m_ad_bank_accountTbl.AddField(_T("adba_bank_account_id"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_bank_id"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_partner_id"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_accountno"), dfText, 15); 
	m_ad_bank_accountTbl.AddField(_T("adba_BRANCH"), dfText, 254); 
	m_ad_bank_accountTbl.AddField(_T("adba_ADDRESS"), dfText, 254); 
	m_ad_bank_accountTbl.AddField(_T("adba_isactive"), dfText, 1); 	
}

void CAdBankAccountPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndBankName.SetEvent(WE_SELENDOK, _OnBankNameSelendokFnc);
	//m_wndBankName.SetEvent(WE_SETFOCUS, _OnBankNameSetfocusFnc);
	//m_wndBankName.SetEvent(WE_KILLFOCUS, _OnBankNameKillfocusFnc);
	m_wndBankName.SetEvent(WE_SELCHANGE, _OnBankNameSelectChangeFnc);
	m_wndBankName.SetEvent(WE_LOADDATA, _OnBankNameLoadDataFnc);
	//m_wndBankName.SetEvent(WE_ADDNEW, _OnBankNameAddNewFnc);
	//m_wndBranch.SetEvent(WE_CHANGE, _OnBranchChangeFnc);
	//m_wndBranch.SetEvent(WE_SETFOCUS, _OnBranchSetfocusFnc);
	//m_wndBranch.SetEvent(WE_KILLFOCUS, _OnBranchKillfocusFnc);
	m_wndBranch.SetEvent(WE_CHECKVALUE, _OnBranchCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
	
}
void CAdBankAccountPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankNameKey);
	DDX_Text(pDX, m_wndBranch.GetDlgCtrlID(), m_szBranch);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);

}
void CAdBankAccountPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_bank_account LEFT JOIN ad_bank ON (adb_bank_id = adba_bank_id) ") \
		_T("WHERE adba_accountno='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adba_bank_id"), m_szBankNameKey);
		rs.GetValue(_T("adba_accountno"), m_szID);
		rs.GetValue(_T("adba_isactive"), szActive);
		rs.GetValue(_T("adba_branch"), m_szBranch);
		rs.GetValue(_T("adba_address"), m_szAddress);

		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(FALSE);
	}

}

void CAdBankAccountPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_bank_accountTbl.SetValue(_T("adba_createdby"), pMF->GetCurrentUser());
	m_ad_bank_accountTbl.SetValue(_T("adba_updatedby"), pMF->GetCurrentUser());
	m_ad_bank_accountTbl.SetValue(_T("adba_createddate"), pMF->GetSysDateTime());

	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adba_accountno='%s' "), m_szID);
		m_ad_bank_accountTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_bank_accountTbl.SetValue(_T("adba_updateddate"), pMF->GetSysDateTime());
	m_ad_bank_accountTbl.SetValue(_T("adba_accountno"), m_szID);
	m_ad_bank_accountTbl.SetValue(_T("adba_bank_id"), m_szBankNameKey);
//	m_ad_bank_accountTbl.SetValue(_T("adba_accountno"), m_szAccountNo);
	m_ad_bank_accountTbl.SetValue(_T("adba_branch"), m_szBranch);
	m_ad_bank_accountTbl.SetValue(_T("adba_address"), m_szAddress);
	m_ad_bank_accountTbl.SetValue(_T("adba_isactive"), m_bActive?_T("Y"):_T("N"));

}

void CAdBankAccountPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szBankNameKey.Empty();
	m_bActive=TRUE;
	m_szBranch.Empty();
	m_szAddress.Empty();
//	m_szPath.Empty();

}

int CAdBankAccountPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			SetDefaultValues(); 
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndBankName.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}

/*void CAdBankAccountPopup::OnIDChange(){
	
} */
/*void CAdBankAccountPopup::OnIDSetfocus(){
	
} */
/*void CAdBankAccountPopup::OnIDKillfocus(){
	
} */
int CAdBankAccountPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_bank_account WHERE adba_accountno='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
	void CAdBankAccountPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdBankAccountPopup::OnBankNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
 
void CAdBankAccountPopup::OnBankNameSelendok(){
	//UpdateData(true);
	//CString szPath;
	//szPath.Format(_T("Reports/s.jpg"), m_szBankNameKey);
	//m_wndImage.Release();
	//m_wndImage.SetFileName(szPath);	 
	//m_wndImage.Invalidate();
	//UpdateData(false);
}

/*void CAdBankAccountPopup::OnBankNameSetfocus(){
	
}*/
/*void CAdBankAccountPopup::OnBankNameKillfocus(){
	
}*/
long CAdBankAccountPopup::OnBankNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankName.IsSearchKey() && !m_szBankNameKey.IsEmpty()){
		szWhere.Format(_T(" and adb_bank_id = '%s'"), m_szBankNameKey);
	};
	m_wndBankName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adb_bank_id as id, adb_name as name ") \
		_T("FROM ad_bank ") \
		_T("WHERE adb_isactive='Y' %s ") \
		_T("ORDER BY adb_bank_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankName.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CAdBankAccountPopup::OnBankNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdBankAccountPopup::OnBranchChange(){
	
} */
/*void CAdBankAccountPopup::OnBranchSetfocus(){
	
} */
/*void CAdBankAccountPopup::OnBranchKillfocus(){
	
} */
int CAdBankAccountPopup::OnBranchCheckValue(){
	return 0;
}
 
/*void CAdBankAccountPopup::OnAddressChange(){
	
} */
/*void CAdBankAccountPopup::OnAddressSetfocus(){
	
} */
/*void CAdBankAccountPopup::OnAddressKillfocus(){
	
} */
int CAdBankAccountPopup::OnAddressCheckValue(){
	return 0;
}
 
void CAdBankAccountPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdBankAccountPopup();
}
 
int CAdBankAccountPopup::OnAddAdBankAccountPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdBankAccountPopup::OnEditAdBankAccountPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBankAccountPopup::OnDeleteAdBankAccountPopup(){
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
 		OnCancelAdBankAccountPopup(); 
 	}
	return 0;
}

int CAdBankAccountPopup::OnSaveAdBankAccountPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_bank_accountTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adba_accountno='%s' "), m_szID); 
 		szSQL = m_ad_bank_accountTbl.GetUpdateSQL(_T("adba_bank_account_id")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
 			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdBankAccount*)m_wndParent)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CAdBankAccountPopup::OnCancelAdBankAccountPopup(){
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
 
int CAdBankAccountPopup::OnAdBankAccountPopupListLoadData(){
	return 0;
}
void CAdBankAccountPopup::ClosePopup(){
	if (IsWindowVisible())
	{
		CGuiPopup::ClosePopup();
		((CAdBankAccount*)GetParentWnd())->SetMode(m_nMode);
	}
}

