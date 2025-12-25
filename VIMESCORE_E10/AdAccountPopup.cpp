#include "AdAccountPopup.h"
#include "MainFrame_E10.h"
#include "AdAccount.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdAccountPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdAccountPopup *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdAccountPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdAccountPopup *pVw = (CAdAccountPopup *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _OnEnglishNameChangeFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnEnglishNameChange();
} */
/*static void _OnEnglishNameSetfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnEnglishNameSetfocus();} */ 
/*static void _OnEnglishNameKillfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnEnglishNameKillfocus();
} */
static int _OnEnglishNameCheckValueFnc(CWnd *pWnd){
	return ((CAdAccountPopup *)pWnd)->OnEnglishNameCheckValue();
} 
static void _OnPropertySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdAccountPopup* )pWnd)->OnPropertySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPropertySelendokFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnPropertySelendok();
}
/*static void _OnPropertySetfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnPropertyKillfocus();
}*/
/*static void _OnPropertyKillfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnPropertyKillfocus();
}*/
static long _OnPropertyLoadDataFnc(CWnd *pWnd){
	return ((CAdAccountPopup *)pWnd)->OnPropertyLoadData();
}
/*static void _OnPropertyAddNewFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnPropertyAddNew();
}*/
static void _OnParentAccSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdAccountPopup* )pWnd)->OnParentAccSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentAccSelendokFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnParentAccSelendok();
}
/*static void _OnParentAccSetfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnParentAccKillfocus();
}*/
/*static void _OnParentAccKillfocusFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnParentAccKillfocus();
}*/
static long _OnParentAccLoadDataFnc(CWnd *pWnd){
	return ((CAdAccountPopup *)pWnd)->OnParentAccLoadData();
}
/*static void _OnParentAccAddNewFnc(CWnd *pWnd){
	((CAdAccountPopup *)pWnd)->OnParentAccAddNew();
}*/
static int _OnAddAdAccountPopupFnc(CWnd *pWnd){
	 return ((CAdAccountPopup*)pWnd)->OnAddAdAccountPopup();
} 
static int _OnEditAdAccountPopupFnc(CWnd *pWnd){
	 return ((CAdAccountPopup*)pWnd)->OnEditAdAccountPopup();
} 
static int _OnDeleteAdAccountPopupFnc(CWnd *pWnd){
	 return ((CAdAccountPopup*)pWnd)->OnDeleteAdAccountPopup();
} 
static int _OnSaveAdAccountPopupFnc(CWnd *pWnd){
	 return ((CAdAccountPopup*)pWnd)->OnSaveAdAccountPopup();
}
static int _OnCancelAdAccountPopupFnc(CWnd *pWnd){
	 return ((CAdAccountPopup*)pWnd)->OnCancelAdAccountPopup();
} 
CAdAccountPopup::CAdAccountPopup(){
	m_nDlgWidth = 800;
	m_nDlgHeight = 110;
	SetDefaultValues();
}
CAdAccountPopup::CAdAccountPopup(CWnd *pParent):
	CGuiPopup(pParent){
	m_nDlgWidth = 800;
	m_nDlgHeight = 110;
	SetDefaultValues();
}
CAdAccountPopup::~CAdAccountPopup(){
}
void CAdAccountPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 110);
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 190, 50); 
	m_wndActive.Create(this, _T("Active"), 195, 25, 275, 50);
	m_wndName.Create(this,90, 54, 390, 79); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 55, 85, 80);
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 395, 55, 475, 80);
	m_wndEnglishName.Create(this,480, 55, 795, 80); 
	m_wndParentAccLabel.Create(this, _T("Tài khoản cha"), 5, 85, 85, 110);
	m_wndParentAcc.Create(this,90, 85, 390, 110); 
	m_wndPropertyLabel.Create(this, _T("Thuộc tính"), 395, 85, 475, 110);
	m_wndProperty.Create(this,480, 85, 705, 110); 
	m_wndSave.Create(this, _T("&Save"), 710, 85, 795, 110);

}
void CAdAccountPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndEntry.ModifyStyle(WS_BORDER,0);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	m_wndEnglishName.SetLimitText(254);
	m_wndEnglishName.SetCheckValue(true);
	m_wndEnglishName.SetInitCap(2);
	m_wndProperty.SetCheckValue(true);
	m_wndProperty.LimitText(35);
	m_wndProperty.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndProperty.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	//m_wndParentAcc.SetCheckValue(true);
	m_wndParentAcc.LimitText(35);
	m_wndParentAcc.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndParentAcc.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_accountTbl.SetTableName(_T("ad_account"));
	m_ad_accountTbl.AddField(_T("ADA_CREATEDBY"), dfText, 15); 
	m_ad_accountTbl.AddField(_T("ADA_CREATEDDATE"), dfDateTime); 
	m_ad_accountTbl.AddField(_T("ADA_UPDATEDBY"), dfText, 15); 
	m_ad_accountTbl.AddField(_T("ADA_UPDATEDDATE"), dfDateTime); 
	m_ad_accountTbl.AddField(_T("ADA_ACCOUNT_ID"), dfText, 15); 
	m_ad_accountTbl.AddField(_T("ADA_VNNAME"), dfText, 128); 
	m_ad_accountTbl.AddField(_T("ADA_ENNAME"), dfText, 128); 
	m_ad_accountTbl.AddField(_T("ADA_PARENT_ID"), dfText, 15);
	m_ad_accountTbl.AddField(_T("ADA_ACCOUNT_TYPE_ID"), dfText, 7);
	m_ad_accountTbl.AddField(_T("ADA_ISACTIVE"), dfText, 1); 	
}
void CAdAccountPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndEnglishName.SetEvent(WE_CHANGE, _OnEnglishNameChangeFnc);
	//m_wndEnglishName.SetEvent(WE_SETFOCUS, _OnEnglishNameSetfocusFnc);
	//m_wndEnglishName.SetEvent(WE_KILLFOCUS, _OnEnglishNameKillfocusFnc);
	m_wndEnglishName.SetEvent(WE_CHECKVALUE, _OnEnglishNameCheckValueFnc);
	m_wndProperty.SetEvent(WE_SELENDOK, _OnPropertySelendokFnc);
	//m_wndProperty.SetEvent(WE_SETFOCUS, _OnPropertySetfocusFnc);
	//m_wndProperty.SetEvent(WE_KILLFOCUS, _OnPropertyKillfocusFnc);
	m_wndProperty.SetEvent(WE_SELCHANGE, _OnPropertySelectChangeFnc);
	m_wndProperty.SetEvent(WE_LOADDATA, _OnPropertyLoadDataFnc);
	//m_wndProperty.SetEvent(WE_ADDNEW, _OnPropertyAddNewFnc);
	m_wndParentAcc.SetEvent(WE_SELENDOK, _OnParentAccSelendokFnc);
	//m_wndParentAcc.SetEvent(WE_SETFOCUS, _OnParentAccSetfocusFnc);
	//m_wndParentAcc.SetEvent(WE_KILLFOCUS, _OnParentAccKillfocusFnc);
	m_wndParentAcc.SetEvent(WE_SELCHANGE, _OnParentAccSelectChangeFnc);
	m_wndParentAcc.SetEvent(WE_LOADDATA, _OnParentAccLoadDataFnc);
	//m_wndParentAcc.SetEvent(WE_ADDNEW, _OnParentAccAddNewFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if(nMode == VM_EDIT){
		GetDataToScreen();
	}

}
void CAdAccountPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndEnglishName.GetDlgCtrlID(), m_szEnglishName);
	DDX_TextEx(pDX, m_wndProperty.GetDlgCtrlID(), m_szPropertyKey);
	DDX_TextEx(pDX, m_wndParentAcc.GetDlgCtrlID(), m_szParentAccKey);

}
void CAdAccountPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_account WHERE ada_account_id='%s' "), m_szID.TrimLeft());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ada_vnname"), m_szName);
		rs.GetValue(_T("ada_isactive"), szActive);
		rs.GetValue(_T("ada_enname"), m_szEnglishName);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		rs.GetValue(_T("ada_account_type_id"), m_szPropertyKey);
		rs.GetValue(_T("ada_parent_id"), m_szParentAccKey);
		UpdateData(FALSE);
	}

}
void CAdAccountPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_accountTbl.SetValue(_T("ada_createdby"), pMF->GetCurrentUser());
	m_ad_accountTbl.SetValue(_T("ada_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE ada_account_id='%s' "), m_szID);
		m_ad_accountTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_accountTbl.SetValue(_T("ada_createddate"), pMF->GetSysDateTime());
	m_ad_accountTbl.SetValue(_T("ada_updateddate"), pMF->GetSysDateTime());
	m_ad_accountTbl.SetValue(_T("ada_account_id"), m_szID);
	m_ad_accountTbl.SetValue(_T("ada_vnname"), m_szName);
	m_ad_accountTbl.SetValue(_T("ada_enname"), m_szEnglishName);
	m_ad_accountTbl.SetValue(_T("ada_parent_id"), m_szParentAccKey);
	m_ad_accountTbl.SetValue(_T("ada_account_type_id"), m_szPropertyKey);
	m_ad_accountTbl.SetValue(_T("ada_isactive"), m_bActive?_T("Y"):_T("N"));

}
void CAdAccountPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=TRUE;
	m_szEnglishName.Empty();

}
int CAdAccountPopup::SetMode(int nMode){
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
			m_wndName.SetFocus();
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
/*void CAdAccountPopup::OnIDChange(){
	
} */
/*void CAdAccountPopup::OnIDSetfocus(){
	
} */
/*void CAdAccountPopup::OnIDKillfocus(){
	
} */
int CAdAccountPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nTemp = 0;
	szSQL.Format(_T("SELECT count(*) FROM ad_account WHERE ada_account_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	nTemp = m_szParentAccKey.GetLength(); 
	if (!m_szParentAccKey.IsEmpty() && m_szID.Left(nTemp) != m_szParentAccKey)
	{
		m_wndID.SetToolTipMessage(_T("This [ID] is invalid!"));
		return -1;
	}
	return 0;
} 
/*void CAdAccountPopup::OnNameChange(){
	
} */
/*void CAdAccountPopup::OnNameSetfocus(){
	
} */
/*void CAdAccountPopup::OnNameKillfocus(){
	
} */
int CAdAccountPopup::OnNameCheckValue(){
	return 0;
} 
void CAdAccountPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdAccountPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdAccountPopup();
} 
/*void CAdAccountPopup::OnEnglishNameChange(){
	
} */
/*void CAdAccountPopup::OnEnglishNameSetfocus(){
	
} */
/*void CAdAccountPopup::OnEnglishNameKillfocus(){
	
} */
int CAdAccountPopup::OnEnglishNameCheckValue(){
	return 0;
} 
void CAdAccountPopup::OnPropertySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdAccountPopup::OnPropertySelendok(){
	 
}
/*void CAdAccountPopup::OnPropertySetfocus(){
	
}*/
/*void CAdAccountPopup::OnPropertyKillfocus(){
	
}*/
long CAdAccountPopup::OnPropertyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProperty.IsSearchKey() && !m_szPropertyKey.IsEmpty()){
	};
	m_wndProperty.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProperty.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	m_wndProperty.AddItems(_T("0"), _T("\x44\x1B0 n\x1EE3"));
	m_wndProperty.AddItems(_T("1"), _T("\x44\x1B0 \x63\xF3"));
	m_wndProperty.AddItems(_T("2"), _T("L\x1B0\x1EE1ng t\xEDnh"));
	return 0;
}
/*void CAdAccountPopup::OnPropertyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdAccountPopup::OnParentAccSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdAccountPopup::OnParentAccSelendok(){
	 
}
/*void CAdAccountPopup::OnParentAccSetfocus(){
	
}*/
/*void CAdAccountPopup::OnParentAccKillfocus(){
	
}*/
long CAdAccountPopup::OnParentAccLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParentAcc.IsSearchKey() && !m_szParentAccKey.IsEmpty()){
	};
	m_wndParentAcc.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("Select ada_account_id as id, ada_vnname as name From ad_account Order by ada_account_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParentAcc.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdAccountPopup::OnParentAccAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CAdAccountPopup::OnAddAdAccountPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdAccountPopup::OnEditAdAccountPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdAccountPopup::OnDeleteAdAccountPopup(){
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
 		OnCancelAdAccountPopup(); 
 	}
	return 0;
}
int CAdAccountPopup::OnSaveAdAccountPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_accountTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE ada_account_id='%s' "), m_szID); 
 		szSQL = m_ad_accountTbl.GetUpdateSQL(_T("ada_account_id")); 
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
	((CAdAccount*)m_wndParent)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CAdAccountPopup::OnCancelAdAccountPopup(){
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
int CAdAccountPopup::OnAdAccountPopupListLoadData(){
	return 0;
}
void CAdAccountPopup::ClosePopup()
{
	//if(IsWindowVisible())
	//{
		CGuiPopup::ClosePopup();
		((CAdAccount*)GetParentWnd())->SetMode(m_nMode);
	//}
}
