#include "AccAccount.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAccAccount *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAccAccount *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAccAccount*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAccAccount *pVw = (CAccAccount *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _OnEnglishNameChangeFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnEnglishNameChange();
} */
/*static void _OnEnglishNameSetfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnEnglishNameSetfocus();} */ 
/*static void _OnEnglishNameKillfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnEnglishNameKillfocus();
} */
static int _OnEnglishNameCheckValueFnc(CWnd *pWnd){
	return ((CAccAccount *)pWnd)->OnEnglishNameCheckValue();
} 
static void _OnPropertySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccAccount* )pWnd)->OnPropertySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPropertySelendokFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnPropertySelendok();
}
/*static void _OnPropertySetfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnPropertyKillfocus();
}*/
/*static void _OnPropertyKillfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnPropertyKillfocus();
}*/
static long _OnPropertyLoadDataFnc(CWnd *pWnd){
	return ((CAccAccount *)pWnd)->OnPropertyLoadData();
}
/*static void _OnPropertyAddNewFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnPropertyAddNew();
}*/
static void _OnParentAccSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccAccount* )pWnd)->OnParentAccSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentAccSelendokFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnParentAccSelendok();
}
/*static void _OnParentAccSetfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnParentAccKillfocus();
}*/
/*static void _OnParentAccKillfocusFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnParentAccKillfocus();
}*/
static long _OnParentAccLoadDataFnc(CWnd *pWnd){
	return ((CAccAccount *)pWnd)->OnParentAccLoadData();
}
/*static void _OnParentAccAddNewFnc(CWnd *pWnd){
	((CAccAccount *)pWnd)->OnParentAccAddNew();
}*/
static int _OnAddAccAccountFnc(CWnd *pWnd){
	 return ((CAccAccount*)pWnd)->OnAddAccAccount();
} 
static int _OnEditAccAccountFnc(CWnd *pWnd){
	 return ((CAccAccount*)pWnd)->OnEditAccAccount();
} 
static int _OnDeleteAccAccountFnc(CWnd *pWnd){
	 return ((CAccAccount*)pWnd)->OnDeleteAccAccount();
} 
static int _OnSaveAccAccountFnc(CWnd *pWnd){
	 return ((CAccAccount*)pWnd)->OnSaveAccAccount();
} 
static int _OnCancelAccAccountFnc(CWnd *pWnd){
	 return ((CAccAccount*)pWnd)->OnCancelAccAccount();
} 
CAccAccount::CAccAccount(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 625;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CAccAccount::~CAccAccount(){
}
void CAccAccount::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 615, 150);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 195, 55); 
	m_wndNameLabel.Create(this, _T("Tên"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 610, 85); 
	m_wndActive.Create(this, _T("Active"), 200, 30, 280, 55);
	m_wndSave.Create(this, _T("&Save"), 525, 120, 610, 145);
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 10, 90, 90, 115);
	m_wndEnglishName.Create(this,95, 90, 610, 115); 
	m_wndPropertyLabel.Create(this, _T("Property"), 285, 30, 365, 55);
	m_wndProperty.Create(this,370, 30, 610, 55); 
	m_wndParentAccLabel.Create(this, _T("Parent Acc"), 10, 120, 90, 145);
	m_wndParentAcc.Create(this,95, 120, 520, 145); 

}
void CAccAccount::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndEnglishName.SetLimitText(35);
	m_wndEnglishName.SetCheckValue(true);
	m_wndProperty.SetCheckValue(true);
	m_wndProperty.LimitText(35);
	m_wndParentAcc.SetCheckValue(true);
	m_wndParentAcc.LimitText(35);




	m_wndParentAcc.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParentAcc.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_acc_bankTbl.SetTableName(_T("acc_bank"));
	m_acc_bankTbl.AddField(_T("AB_CREATEDBY"), dfText, 11); 
	m_acc_bankTbl.AddField(_T("AB_CREATEDDATE"), dfDateTime); 
	m_acc_bankTbl.AddField(_T("AB_UPDATEDBY"), dfText, 11); 
	m_acc_bankTbl.AddField(_T("AB_UPDATEDDATE"), dfDateTime); 
	m_acc_bankTbl.AddField(_T("AB_ID"), dfLong); 
	m_acc_bankTbl.AddField(_T("AB_NAME"), dfText, 250); 
	m_acc_bankTbl.AddField(_T("AB_ENNAME"), dfText, 250); 
	m_acc_bankTbl.AddField(_T("AB_ADDRESS"), dfText, 250); 
	m_acc_bankTbl.AddField(_T("AB_ICON"), dfText, 250); 
	m_acc_bankTbl.AddField(_T("AB_ACTIVE"), dfText, -3); 

}
void CAccAccount::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	SetMode(VM_NONE);

}
void CAccAccount::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndEnglishName.GetDlgCtrlID(), m_szEnglishName);
	DDX_TextEx(pDX, m_wndProperty.GetDlgCtrlID(), m_szPropertyKey);
	DDX_TextEx(pDX, m_wndParentAcc.GetDlgCtrlID(), m_szParentAccKey);

}
void CAccAccount::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Active")] =  m_bActive;
	m_jData[_T("EnglishName")] =  m_szEnglishName;
	m_jData[_T("Property")] =  m_szPropertyKey;
	m_jData[_T("ParentAcc")] =  m_szParentAccKey;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Active")].GetValue(m_bActive);
	m_jData[_T("EnglishName")].GetValue(m_szEnglishName);
	m_jData[_T("Property")].GetValue(m_szPropertyKey);
	m_jData[_T("ParentAcc")].GetValue(m_szParentAccKey);
	}

}
void CAccAccount::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccAccount::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAccAccount::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=FALSE;
	m_szEnglishName.Empty();
	m_szPropertyKey.Empty();
	m_szParentAccKey.Empty();

}
int CAccAccount::SetMode(int nMode){
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
/*void CAccAccount::OnIDChange(){
	
} */
/*void CAccAccount::OnIDSetfocus(){
	
} */
/*void CAccAccount::OnIDKillfocus(){
	
} */
int CAccAccount::OnIDCheckValue(){
	return 0;
} 
/*void CAccAccount::OnNameChange(){
	
} */
/*void CAccAccount::OnNameSetfocus(){
	
} */
/*void CAccAccount::OnNameKillfocus(){
	
} */
int CAccAccount::OnNameCheckValue(){
	return 0;
} 
	void CAccAccount::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CAccAccount::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CAccAccount::OnEnglishNameChange(){
	
} */
/*void CAccAccount::OnEnglishNameSetfocus(){
	
} */
/*void CAccAccount::OnEnglishNameKillfocus(){
	
} */
int CAccAccount::OnEnglishNameCheckValue(){
	return 0;
} 
void CAccAccount::OnPropertySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAccAccount::OnPropertySelendok(){
	 
}
/*void CAccAccount::OnPropertySetfocus(){
	
}*/
/*void CAccAccount::OnPropertyKillfocus(){
	
}*/
long CAccAccount::OnPropertyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProperty.IsSearchKey() && !m_szPropertyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPropertyKey
};
	m_wndProperty.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProperty.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccAccount::OnPropertyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAccAccount::OnParentAccSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAccAccount::OnParentAccSelendok(){
	 
}
/*void CAccAccount::OnParentAccSetfocus(){
	
}*/
/*void CAccAccount::OnParentAccKillfocus(){
	
}*/
long CAccAccount::OnParentAccLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParentAcc.IsSearchKey() && !m_szParentAccKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szParentAccKey
};
	m_wndParentAcc.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParentAcc.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccAccount::OnParentAccAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CAccAccount::OnAddAccAccount(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccAccount::OnEditAccAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccAccount::OnDeleteAccAccount(){
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
 		OnCancelAccAccount();
 	}
	return 0;
}
int CAccAccount::OnSaveAccAccount(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_acc_bankTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_acc_bankTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnAccAccountListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAccAccount::OnCancelAccAccount(){
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
int CAccAccount::OnAccAccountListLoadData(){
	return 0;
}
