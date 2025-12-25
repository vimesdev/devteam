#include "SignatureSetupDialog.h"
#include "MainFrm.h"
static void _OnUserSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSignatureSetupDialog* )pWnd)->OnUserSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserSelendokFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnUserSelendok();
}
/*static void _OnUserSetfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnUserKillfocus();
}*/
/*static void _OnUserKillfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnUserKillfocus();
}*/
static long _OnUserLoadDataFnc(CWnd *pWnd){
	return ((CSignatureSetupDialog *)pWnd)->OnUserLoadData();
}
/*static void _OnUserAddNewFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnUserAddNew();
}*/
/*static void _OnSignIDChangeFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignIDChange();
} */
/*static void _OnSignIDSetfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignIDSetfocus();} */ 
/*static void _OnSignIDKillfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignIDKillfocus();
} */
static int _OnSignIDCheckValueFnc(CWnd *pWnd){
	return ((CSignatureSetupDialog *)pWnd)->OnSignIDCheckValue();
} 
static void _OnSignFileSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSignatureSetupDialog* )pWnd)->OnSignFileSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSignFileSelendokFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFileSelendok();
}
/*static void _OnSignFileSetfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFileKillfocus();
}*/
/*static void _OnSignFileKillfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFileKillfocus();
}*/
static long _OnSignFileLoadDataFnc(CWnd *pWnd){
	return ((CSignatureSetupDialog *)pWnd)->OnSignFileLoadData();
}
/*static void _OnSignFileAddNewFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFileAddNew();
}*/
static void _OnSignFile2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSignatureSetupDialog* )pWnd)->OnSignFile2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSignFile2SelendokFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFile2Selendok();
}
/*static void _OnSignFile2SetfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFile2Killfocus();
}*/
/*static void _OnSignFile2KillfocusFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFile2Killfocus();
}*/
static long _OnSignFile2LoadDataFnc(CWnd *pWnd){
	return ((CSignatureSetupDialog *)pWnd)->OnSignFile2LoadData();
}
/*static void _OnSignFile2AddNewFnc(CWnd *pWnd){
	((CSignatureSetupDialog *)pWnd)->OnSignFile2AddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CSignatureSetupDialog *pVw = (CSignatureSetupDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSignatureSetupDialog *pVw = (CSignatureSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSignatureSetupDialogFnc(CWnd *pWnd){
	 return ((CSignatureSetupDialog*)pWnd)->OnAddSignatureSetupDialog();
} 
static int _OnEditSignatureSetupDialogFnc(CWnd *pWnd){
	 return ((CSignatureSetupDialog*)pWnd)->OnEditSignatureSetupDialog();
} 
static int _OnDeleteSignatureSetupDialogFnc(CWnd *pWnd){
	 return ((CSignatureSetupDialog*)pWnd)->OnDeleteSignatureSetupDialog();
} 
static int _OnSaveSignatureSetupDialogFnc(CWnd *pWnd){
	 return ((CSignatureSetupDialog*)pWnd)->OnSaveSignatureSetupDialog();
} 
static int _OnCancelSignatureSetupDialogFnc(CWnd *pWnd){
	 return ((CSignatureSetupDialog*)pWnd)->OnCancelSignatureSetupDialog();
} 
CSignatureSetupDialog::CSignatureSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 295;
	SetDefaultValues();
}
CSignatureSetupDialog::~CSignatureSetupDialog(){
}
void CSignatureSetupDialog::OnCreateComponents(){
	m_wndUserLabel.Create(this, _T("User"), 5, 5, 105, 30);
	m_wndUser.Create(this,110, 5, 310, 30); 
	m_wndSignIDLabel.Create(this, _T("Sign ID"), 5, 35, 105, 60);
	m_wndSignID.Create(this,110, 35, 310, 60); 
	m_wndSignFileLabel.Create(this, _T("Sign file"), 5, 65, 105, 90);
	m_wndSignFile.Create(this,110, 65, 310, 90); 
	m_wndSignImage.Create(this, _T("SignImage"), 110, 95, 310, 159);
	m_wndSignFile2Label.Create(this, _T("Sign file2"), 5, 164, 105, 189);
	m_wndSignFile2.Create(this,110, 164, 310, 189); 
	m_wndSignImage2.Create(this, _T("SignImage2"), 110, 194, 310, 258);
	m_wndApply.Create(this, _T("&Apply"), 145, 263, 225, 288);
	m_wndClose.Create(this, _T("&Close"), 230, 263, 310, 288);

}
void CSignatureSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUser.SetCheckValue(true);
	m_wndUser.LimitText(35);
	m_wndSignID.SetLimitText(35);
	m_wndSignID.SetCheckValue(true);
	m_wndSignFile.SetCheckValue(true);
	m_wndSignFile.LimitText(35);
	m_wndSignFile2.SetCheckValue(true);
	m_wndSignFile2.LimitText(35);


	m_wndUser.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSignFile.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSignFile.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSignFile2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSignFile2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CSignatureSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUser.SetEvent(WE_SELENDOK, _OnUserSelendokFnc);
	//m_wndUser.SetEvent(WE_SETFOCUS, _OnUserSetfocusFnc);
	//m_wndUser.SetEvent(WE_KILLFOCUS, _OnUserKillfocusFnc);
	m_wndUser.SetEvent(WE_SELCHANGE, _OnUserSelectChangeFnc);
	m_wndUser.SetEvent(WE_LOADDATA, _OnUserLoadDataFnc);
	//m_wndUser.SetEvent(WE_ADDNEW, _OnUserAddNewFnc);
	//m_wndSignID.SetEvent(WE_CHANGE, _OnSignIDChangeFnc);
	//m_wndSignID.SetEvent(WE_SETFOCUS, _OnSignIDSetfocusFnc);
	//m_wndSignID.SetEvent(WE_KILLFOCUS, _OnSignIDKillfocusFnc);
	m_wndSignID.SetEvent(WE_CHECKVALUE, _OnSignIDCheckValueFnc);
	m_wndSignFile.SetEvent(WE_SELENDOK, _OnSignFileSelendokFnc);
	//m_wndSignFile.SetEvent(WE_SETFOCUS, _OnSignFileSetfocusFnc);
	//m_wndSignFile.SetEvent(WE_KILLFOCUS, _OnSignFileKillfocusFnc);
	m_wndSignFile.SetEvent(WE_SELCHANGE, _OnSignFileSelectChangeFnc);
	m_wndSignFile.SetEvent(WE_LOADDATA, _OnSignFileLoadDataFnc);
	//m_wndSignFile.SetEvent(WE_ADDNEW, _OnSignFileAddNewFnc);
	m_wndSignFile2.SetEvent(WE_SELENDOK, _OnSignFile2SelendokFnc);
	//m_wndSignFile2.SetEvent(WE_SETFOCUS, _OnSignFile2SetfocusFnc);
	//m_wndSignFile2.SetEvent(WE_KILLFOCUS, _OnSignFile2KillfocusFnc);
	m_wndSignFile2.SetEvent(WE_SELCHANGE, _OnSignFile2SelectChangeFnc);
	m_wndSignFile2.SetEvent(WE_LOADDATA, _OnSignFile2LoadDataFnc);
	//m_wndSignFile2.SetEvent(WE_ADDNEW, _OnSignFile2AddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CSignatureSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndUser.GetDlgCtrlID(), m_szUserKey);
	DDX_Text(pDX, m_wndSignID.GetDlgCtrlID(), m_szSignID);
	DDX_TextEx(pDX, m_wndSignFile.GetDlgCtrlID(), m_szSignFileKey);
	DDX_TextEx(pDX, m_wndSignFile2.GetDlgCtrlID(), m_szSignFile2Key);

}
void CSignatureSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("User")] =  m_szUserKey;
	m_jData[_T("SignID")] =  m_szSignID;
	m_jData[_T("SignFile")] =  m_szSignFileKey;
	m_jData[_T("SignFile2")] =  m_szSignFile2Key;
	}
	else
	{
			
	m_jData[_T("User")].GetValue(m_szUserKey);
	m_jData[_T("SignID")].GetValue(m_szSignID);
	m_jData[_T("SignFile")].GetValue(m_szSignFileKey);
	m_jData[_T("SignFile2")].GetValue(m_szSignFile2Key);
	}

}
void CSignatureSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSignatureSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSignatureSetupDialog::SetDefaultValues(){

	m_szUserKey.Empty();
	m_szSignID.Empty();
	m_szSignFileKey.Empty();
	m_szSignFile2Key.Empty();

}
int CSignatureSetupDialog::SetMode(int nMode){
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
void CSignatureSetupDialog::OnUserSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureSetupDialog::OnUserSelendok(){
	 
}
/*void CSignatureSetupDialog::OnUserSetfocus(){
	
}*/
/*void CSignatureSetupDialog::OnUserKillfocus(){
	
}*/
long CSignatureSetupDialog::OnUserLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser.IsSearchKey() && !m_szUserKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUserKey
};
	m_wndUser.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSignatureSetupDialog::OnUserAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSignatureSetupDialog::OnSignIDChange(){
	
} */
/*void CSignatureSetupDialog::OnSignIDSetfocus(){
	
} */
/*void CSignatureSetupDialog::OnSignIDKillfocus(){
	
} */
int CSignatureSetupDialog::OnSignIDCheckValue(){
	return 0;
} 
void CSignatureSetupDialog::OnSignFileSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureSetupDialog::OnSignFileSelendok(){
	 
}
/*void CSignatureSetupDialog::OnSignFileSetfocus(){
	
}*/
/*void CSignatureSetupDialog::OnSignFileKillfocus(){
	
}*/
long CSignatureSetupDialog::OnSignFileLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSignFile.IsSearchKey() && !m_szSignFileKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSignFileKey
};
	m_wndSignFile.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSignFile.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSignatureSetupDialog::OnSignFileAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSignatureSetupDialog::OnSignFile2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureSetupDialog::OnSignFile2Selendok(){
	 
}
/*void CSignatureSetupDialog::OnSignFile2Setfocus(){
	
}*/
/*void CSignatureSetupDialog::OnSignFile2Killfocus(){
	
}*/
long CSignatureSetupDialog::OnSignFile2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSignFile2.IsSearchKey() && !m_szSignFile2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSignFile2Key
};
	m_wndSignFile2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSignFile2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSignatureSetupDialog::OnSignFile2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSignatureSetupDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSignatureSetupDialog::OnAddSignatureSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSignatureSetupDialog::OnEditSignatureSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSignatureSetupDialog::OnDeleteSignatureSetupDialog(){
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
 		OnCancelSignatureSetupDialog();
 	}
	return 0;
}
int CSignatureSetupDialog::OnSaveSignatureSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnSignatureSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSignatureSetupDialog::OnCancelSignatureSetupDialog(){
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
int CSignatureSetupDialog::OnSignatureSetupDialogListLoadData(){
	return 0;
}
