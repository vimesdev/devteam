//#include "stdafx.h"
#include "MainFrm.h"
#include "VIMESLISPermissionDialog.h"

static void _OnUserNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISPermissionDialog* )pWnd)->OnUserNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserNameSelendokFnc(CWnd *pWnd){
	((CVIMESLISPermissionDialog *)pWnd)->OnUserNameSelendok();
}
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPermissionDialog *)pWnd)->OnUserNameKillfocus();
}*/
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPermissionDialog *)pWnd)->OnUserNameKillfocus();
}*/
static long _OnUserNameLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPermissionDialog *)pWnd)->OnUserNameLoadData();
}
/*static void _OnUserNameAddNewFnc(CWnd *pWnd){
	((CVIMESLISPermissionDialog *)pWnd)->OnUserNameAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPermissionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESLISPermissionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISPermissionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CVIMESLISPermissionDialog *pVw = (CVIMESLISPermissionDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESLISPermissionDialog *pVw = (CVIMESLISPermissionDialog *)pWnd;
	pVw->OnCloseSelect();
} 

static int _OnAddHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnAddHMSParaclinicalPermDialog();
} 
static int _OnEditHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnEditHMSParaclinicalPermDialog();
} 
static int _OnDeleteHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnDeleteHMSParaclinicalPermDialog();
} 
static int _OnSaveHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnSaveHMSParaclinicalPermDialog();
} 
static int _OnCancelHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CVIMESLISPermissionDialog*)pWnd)->OnCancelHMSParaclinicalPermDialog();
} 
CVIMESLISPermissionDialog::CVIMESLISPermissionDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 405;
	m_nDlgHeight = 440;
	SetDefaultValues();
}
CVIMESLISPermissionDialog::~CVIMESLISPermissionDialog(){
}
void CVIMESLISPermissionDialog::OnCreateComponents(){
	m_wndParaclinicalGroup.Create(this, _T("Paraclinical Group"), 5, 5, 395, 401);
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 372, 90, 394);
	m_wndUserName.Create(this,95, 372, 390, 394); 
	m_wndList.Create(this,10, 28, 390, 367); 
	m_wndApply.Create(this, _T("&Apply"), 250, 406, 320, 428);
	m_wndClose.Create(this, _T("&Close"), 325, 406, 395, 428);
}
void CVIMESLISPermissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndUserName.SetCheckValue(true);
	m_wndUserName.LimitText(15);


	m_wndUserName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUserName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
//	m_wndList.SetCheckBox(true);

	m_hms_paraclinicalpermTbl.SetTableName(_T("hms_paraclinicalperm"));
	m_hms_paraclinicalpermTbl.AddField(_T("hpp_userid"), dfText, 15); 
	m_hms_paraclinicalpermTbl.AddField(_T("hpp_type"), dfText, 7); 


}
void CVIMESLISPermissionDialog::OnSetWindowEvents(){
	m_wndUserName.SetEvent(WE_SELENDOK, _OnUserNameSelendokFnc);
	//m_wndUserName.SetEvent(WE_SETFOCUS, _OnUserNameSetfocusFnc);
	//m_wndUserName.SetEvent(WE_KILLFOCUS, _OnUserNameKillfocusFnc);
	m_wndUserName.SetEvent(WE_SELCHANGE, _OnUserNameSelectChangeFnc);
	m_wndUserName.SetEvent(WE_LOADDATA, _OnUserNameLoadDataFnc);
	//m_wndUserName.SetEvent(WE_ADDNEW, _OnUserNameAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
}
void CVIMESLISPermissionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserNameKey);

}
void CVIMESLISPermissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpp_userid"), m_szUserNameKey);

}
void CVIMESLISPermissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_paraclinicalpermTbl.SetValue(_T("hpp_userid"), m_szUserNameKey);

}
void CVIMESLISPermissionDialog::SetDefaultValues(){
	m_szUserNameKey.Empty();
}
int CVIMESLISPermissionDialog::SetMode(int nMode){ 
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
void CVIMESLISPermissionDialog::OnUserNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISPermissionDialog::OnUserNameSelendok(){
	UpdateData(true);
	OnListLoadData();
}
/*void CVIMESLISPermissionDialog::OnUserNameSetfocus(){
	
}*/
/*void CVIMESLISPermissionDialog::OnUserNameKillfocus(){
	
}*/
long CVIMESLISPermissionDialog::OnUserNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUserName.IsSearchKey() && !m_szUserNameKey.IsEmpty()){
		szWhere.Format(_T(" WHERE lower(su_userid)=lower('%s') "), m_szUserNameKey);
	};
	m_wndUserName.DeleteAllItems(); 

	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id , su_name as name FROM sys_user %s ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CVIMESLISPermissionDialog::OnUserNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISPermissionDialog::OnListDblClick(){
	
} 
void CVIMESLISPermissionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESLISPermissionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESLISPermissionDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
		_T(" htg_id as id,") \
		_T(" htg_desc as name,") \
		_T(" case when length(hpp_type) > 0 then 'Y' else 'N' end as active") \
		_T(" from hms_testgrouplist") \
		_T(" left join hms_paraclinicalperm") \
		_T(" on(htg_id=hpp_type and lower(hpp_userid)=lower('%s'))") \
		_T(" ORDER BY htg_id"), m_szUserNameKey);
//_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("active"), szActive);
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);

		if(szActive == _T("Y")){
			m_wndList.SetCheck(m_wndList.GetItemCount()-1, true);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

void CVIMESLISPermissionDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_paraclinicalperm WHERE lower(hpp_userid)=lower('%s') "), m_szUserNameKey);
	pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			szSQL.Format(_T("INSERT INTO hms_paraclinicalperm VALUES('%s', '%s') "), m_szUserNameKey, m_wndList.GetItemText(i, 0));
			pMF->ExecSQL(szSQL);
		}
	}
	pMF->Commit();
	ShowMessageBox(_T("Permission applied"), MB_OK);
	
} 
void CVIMESLISPermissionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 

int CVIMESLISPermissionDialog::OnAddHMSParaclinicalPermDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSParaclinicalPermDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CVIMESLISPermissionDialog::OnEditHMSParaclinicalPermDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSParaclinicalPermDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CVIMESLISPermissionDialog::OnDeleteHMSParaclinicalPermDialog(){
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
 		OnCancelHMSParaclinicalPermDialog(); 
 	}
return 0;
 } 
int CVIMESLISPermissionDialog::OnSaveHMSParaclinicalPermDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_paraclinicalpermTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_paraclinicalpermTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSParaclinicalPermDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESLISPermissionDialog::OnCancelHMSParaclinicalPermDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CVIMESLISPermissionDialog::OnHMSParaclinicalPermDialogListLoadData(){
	return 0;
}
