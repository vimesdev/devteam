#include "HMSPrescriptionLockInfoDialog.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionLockInfoDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockInfoDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockInfoDialog *)pWnd)->OnNameCheckValue();
} 
static long _OnUserLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnUserLoadData();
} 
static void _OnUserDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionLockInfoDialog*)pWnd)->OnUserDblClick();
} 
static void _OnUserSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionLockInfoDialog*)pWnd)->OnUserSelectChange(nOldItem, nNewItem);
} 
static int _OnUserDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnUserDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPrescriptionLockInfoDialog *pVw = (CHMSPrescriptionLockInfoDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionLockInfoDialog *pVw = (CHMSPrescriptionLockInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionLockInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnAddHMSPrescriptionLockInfoDialog();
} 
static int _OnEditHMSPrescriptionLockInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnEditHMSPrescriptionLockInfoDialog();
} 
static int _OnDeleteHMSPrescriptionLockInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnDeleteHMSPrescriptionLockInfoDialog();
} 
static int _OnSaveHMSPrescriptionLockInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnSaveHMSPrescriptionLockInfoDialog();
} 
static int _OnCancelHMSPrescriptionLockInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockInfoDialog*)pWnd)->OnCancelHMSPrescriptionLockInfoDialog();
} 
CHMSPrescriptionLockInfoDialog::CHMSPrescriptionLockInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 490;
	m_nDlgHeight = 490;
	SetDefaultValues();
}
CHMSPrescriptionLockInfoDialog::~CHMSPrescriptionLockInfoDialog(){
}
void CHMSPrescriptionLockInfoDialog::OnCreateComponents(){
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 5, 85, 30);
	m_wndDepartment.Create(this,90, 5, 290, 30); 
	m_wndNameLabel.Create(this, _T("Name"), 295, 5, 375, 30);
	m_wndName.Create(this,380, 5, 485, 30); 
	m_wndUser.Create(this,5, 35, 485, 435); 
	m_wndApply.Create(this, _T("&Apply"), 320, 440, 400, 465);
	m_wndClose.Create(this, _T("&Close"), 405, 440, 485, 465);

}
void CHMSPrescriptionLockInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser.InsertColumn(0, _T("Lock"), CFMT_TEXT, 50);
	m_wndUser.InsertColumn(1, _T("Room"), CFMT_TEXT, 70);
	m_wndUser.InsertColumn(2, _T("User ID"), CFMT_TEXT, 100);
	m_wndUser.InsertColumn(3, _T("User Name"), CFMT_TEXT, 180);

}
void CHMSPrescriptionLockInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndUser.SetEvent(WE_SELCHANGE, _OnUserSelectChangeFnc);
	m_wndUser.SetEvent(WE_LOADDATA, _OnUserLoadDataFnc);
	m_wndUser.SetEvent(WE_DBLCLICK, _OnUserDblClickFnc);
	m_wndUser.AddEvent(1, _T("Delete"), _OnUserDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPrescriptionLockInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSPrescriptionLockInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionLockInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionLockInfoDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szName.Empty();

}
int CHMSPrescriptionLockInfoDialog::SetMode(int nMode){
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
void CHMSPrescriptionLockInfoDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionLockInfoDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPrescriptionLockInfoDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPrescriptionLockInfoDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPrescriptionLockInfoDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionLockInfoDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionLockInfoDialog::OnNameChange(){
	
} */
/*void CHMSPrescriptionLockInfoDialog::OnNameSetfocus(){
	
} */
/*void CHMSPrescriptionLockInfoDialog::OnNameKillfocus(){
	
} */
int CHMSPrescriptionLockInfoDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSPrescriptionLockInfoDialog::OnUserDblClick(){
	
} 
void CHMSPrescriptionLockInfoDialog::OnUserSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionLockInfoDialog::OnUserDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionLockInfoDialog::OnUserLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndUser.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser.AddItems(
			rs.GetValue(_T("Lock")), 
			rs.GetValue(_T("Room")), 
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("UserName")), NULL);
		rs.MoveNext();
	}
	m_wndUser.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionLockInfoDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionLockInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionLockInfoDialog::OnAddHMSPrescriptionLockInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionLockInfoDialog::OnEditHMSPrescriptionLockInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionLockInfoDialog::OnDeleteHMSPrescriptionLockInfoDialog(){
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
 		OnCancelHMSPrescriptionLockInfoDialog();
 	}
	return 0;
}
int CHMSPrescriptionLockInfoDialog::OnSaveHMSPrescriptionLockInfoDialog(){
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
 		//OnHMSPrescriptionLockInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionLockInfoDialog::OnCancelHMSPrescriptionLockInfoDialog(){
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
int CHMSPrescriptionLockInfoDialog::OnHMSPrescriptionLockInfoDialogListLoadData(){
	return 0;
}
