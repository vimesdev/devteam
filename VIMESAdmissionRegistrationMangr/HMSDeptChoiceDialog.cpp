#include "HMSDeptChoiceDialog.h"
#include "MainFrm.h"
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDeptChoiceDialog* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSDeptChoiceDialog *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnFromDeptAddNew();
}*/
static void _OnToDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDeptChoiceDialog* )pWnd)->OnToDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDeptSelendokFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnToDeptSelendok();
}
/*static void _OnToDeptSetfocusFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnToDeptKillfocus();
}*/
/*static void _OnToDeptKillfocusFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnToDeptKillfocus();
}*/
static long _OnToDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSDeptChoiceDialog *)pWnd)->OnToDeptLoadData();
}
/*static void _OnToDeptAddNewFnc(CWnd *pWnd){
	((CHMSDeptChoiceDialog *)pWnd)->OnToDeptAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDeptChoiceDialog *pVw = (CHMSDeptChoiceDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDeptChoiceDialog *pVw = (CHMSDeptChoiceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDeptChoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSDeptChoiceDialog*)pWnd)->OnAddHMSDeptChoiceDialog();
} 
static int _OnEditHMSDeptChoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSDeptChoiceDialog*)pWnd)->OnEditHMSDeptChoiceDialog();
} 
static int _OnDeleteHMSDeptChoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSDeptChoiceDialog*)pWnd)->OnDeleteHMSDeptChoiceDialog();
} 
static int _OnSaveHMSDeptChoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSDeptChoiceDialog*)pWnd)->OnSaveHMSDeptChoiceDialog();
} 
static int _OnCancelHMSDeptChoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSDeptChoiceDialog*)pWnd)->OnCancelHMSDeptChoiceDialog();
} 
CHMSDeptChoiceDialog::CHMSDeptChoiceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDeptChoiceDialog::~CHMSDeptChoiceDialog(){
}
void CHMSDeptChoiceDialog::OnCreateComponents(){
	m_wndFromDeptLabel.Create(this, _T("From Dept"), 5, 5, 85, 30);
	m_wndFromDept.Create(this,90, 5, 390, 30); 
	m_wndToDeptLabel.Create(this, _T("To Dept"), 5, 35, 85, 60);
	m_wndToDept.Create(this,90, 35, 390, 60); 
	m_wndApply.Create(this, _T("&Apply"), 225, 65, 305, 90);
	m_wndClose.Create(this, _T("&Close"), 310, 65, 390, 90);

}
void CHMSDeptChoiceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDept.SetCheckValue(true);
	m_wndFromDept.LimitText(35);
	m_wndToDept.SetCheckValue(true);
	m_wndToDept.LimitText(35);


	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndToDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSDeptChoiceDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);
	m_wndToDept.SetEvent(WE_SELENDOK, _OnToDeptSelendokFnc);
	//m_wndToDept.SetEvent(WE_SETFOCUS, _OnToDeptSetfocusFnc);
	//m_wndToDept.SetEvent(WE_KILLFOCUS, _OnToDeptKillfocusFnc);
	m_wndToDept.SetEvent(WE_SELCHANGE, _OnToDeptSelectChangeFnc);
	m_wndToDept.SetEvent(WE_LOADDATA, _OnToDeptLoadDataFnc);
	//m_wndToDept.SetEvent(WE_ADDNEW, _OnToDeptAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	EnableControls();
	EnableButtons(FALSE, -1);

}
void CHMSDeptChoiceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
	DDX_TextEx(pDX, m_wndToDept.GetDlgCtrlID(), m_szToDeptKey);

}
void CHMSDeptChoiceDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDept")] =  m_szFromDeptKey;
	m_jData[_T("ToDept")] =  m_szToDeptKey;
	}
	else
	{
			
	m_jData[_T("FromDept")].GetValue(m_szFromDeptKey);
	m_jData[_T("ToDept")].GetValue(m_szToDeptKey);
	}

}
void CHMSDeptChoiceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDeptChoiceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDeptChoiceDialog::SetDefaultValues(){

	m_szFromDeptKey.Empty();
	m_szToDeptKey.Empty();

}
int CHMSDeptChoiceDialog::SetMode(int nMode){
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
void CHMSDeptChoiceDialog::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDeptChoiceDialog::OnFromDeptSelendok(){
	 
}
/*void CHMSDeptChoiceDialog::OnFromDeptSetfocus(){
	
}*/
/*void CHMSDeptChoiceDialog::OnFromDeptKillfocus(){
	
}*/
long CHMSDeptChoiceDialog::OnFromDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter = _T(" and sd_type = 'DT'");
	return pMF->LoadDepartment(&m_wndFromDept, m_szFromDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromDept.IsSearchKey() && !m_szFromDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromDeptKey
};
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDeptChoiceDialog::OnFromDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDeptChoiceDialog::OnToDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDeptChoiceDialog::OnToDeptSelendok(){
	 
}
/*void CHMSDeptChoiceDialog::OnToDeptSetfocus(){
	
}*/
/*void CHMSDeptChoiceDialog::OnToDeptKillfocus(){
	
}*/
long CHMSDeptChoiceDialog::OnToDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter = _T(" and sd_type = 'DT'");
	szFilter.AppendFormat(_T(" and sd_id <> '%s'"), m_szFromDeptKey);
	return pMF->LoadDepartment(&m_wndToDept, m_szToDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDept.IsSearchKey() && !m_szToDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szToDeptKey
};
	m_wndToDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDeptChoiceDialog::OnToDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDeptChoiceDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL;
	szSQL.Format(_T("hms_autoadd_admissionfile('%s', '%s')"), m_szFromDeptKey, m_szToDeptKey);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CHMSDeptChoiceDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDeptChoiceDialog::OnAddHMSDeptChoiceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDeptChoiceDialog::OnEditHMSDeptChoiceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDeptChoiceDialog::OnDeleteHMSDeptChoiceDialog(){
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
 		OnCancelHMSDeptChoiceDialog();
 	}
	return 0;
}
int CHMSDeptChoiceDialog::OnSaveHMSDeptChoiceDialog(){
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
 		//OnHMSDeptChoiceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDeptChoiceDialog::OnCancelHMSDeptChoiceDialog(){
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
int CHMSDeptChoiceDialog::OnHMSDeptChoiceDialogListLoadData(){
	return 0;
}
