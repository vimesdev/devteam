#include "HMSExpenseTypeSetupDialog.h"
#include "..\MainFrm.h"
#include "HMSExpenseTypeDialog.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseTypeSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExpenseTypeSetupDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeSetupDialog *pVw = (CHMSExpenseTypeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeSetupDialog *pVw = (CHMSExpenseTypeSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSExpenseTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeSetupDialog*)pWnd)->OnAddHMSExpenseTypeSetupDialog();
} 
static int _OnEditHMSExpenseTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeSetupDialog*)pWnd)->OnEditHMSExpenseTypeSetupDialog();
} 
static int _OnDeleteHMSExpenseTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeSetupDialog*)pWnd)->OnDeleteHMSExpenseTypeSetupDialog();
} 
static int _OnSaveHMSExpenseTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeSetupDialog*)pWnd)->OnSaveHMSExpenseTypeSetupDialog();
} 
static int _OnCancelHMSExpenseTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeSetupDialog*)pWnd)->OnCancelHMSExpenseTypeSetupDialog();
} 
CHMSExpenseTypeSetupDialog::CHMSExpenseTypeSetupDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_nExpenseTypeID = 0;
	m_szTitle.Format(_T("%s expense type")
		, nMode==VM_ADD?_T("Add"):_T("Edit"));
	SetWindowText(m_szTitle);
}
CHMSExpenseTypeSetupDialog::~CHMSExpenseTypeSetupDialog(){
}
void CHMSExpenseTypeSetupDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 340, 30); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 35, 85, 60);
	m_wndType.Create(this,90, 35, 340, 60); 
	m_wndSave.Create(this, _T("Save"), 175, 65, 255, 90);
	m_wndClose.Create(this, _T("Close"), 260, 65, 340, 90);

}
void CHMSExpenseTypeSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(256);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExpenseTypeSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(GetMode());
}
void CHMSExpenseTypeSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CHMSExpenseTypeSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CHMSExpenseTypeSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	if (m_nExpenseTypeID > 0)
	{
		szWhere.Format(_T(" and et_id = %ld"), m_nExpenseTypeID);
	}
	szSQL.Format(_T("SELECT et_id, et_name, et_type_id ") \
				_T(" FROM hms_expense_type_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("et_name"), m_szName);
		rs.GetValue(_T("et_type_id"), m_szTypeKey);
		UpdateData(FALSE);
	}

}
void CHMSExpenseTypeSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseTypeSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szTypeKey.Empty();

}
int CHMSExpenseTypeSetupDialog::SetMode(int nMode){
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
		EnableButtons(FALSE, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSExpenseTypeSetupDialog::OnNameChange(){
	
} */
/*void CHMSExpenseTypeSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSExpenseTypeSetupDialog::OnNameKillfocus(){
	
} */
int CHMSExpenseTypeSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSExpenseTypeSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseTypeSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSExpenseTypeSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExpenseTypeSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSExpenseTypeSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType, _T("hms_expense_type_category"), m_szTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExpenseTypeSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExpenseTypeSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExpenseTypeSetupDialog();
} 
void CHMSExpenseTypeSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSExpenseTypeSetupDialog::OnAddHMSExpenseTypeSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseTypeSetupDialog::OnEditHMSExpenseTypeSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseTypeSetupDialog::OnDeleteHMSExpenseTypeSetupDialog(){
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
 		OnCancelHMSExpenseTypeSetupDialog();
 	}
	return 0;
}
int CHMSExpenseTypeSetupDialog::OnSaveHMSExpenseTypeSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CDbfMap dbm;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("hms_expense_type_add('%s', '%s', '%s')"),
			pMF->GetCurrentUser(), m_szName, m_szTypeKey);
 	}
 	else if(GetMode() == VM_EDIT){
 		szSQL.Format(_T("hms_expense_type_edit('%s',%ld,'%s','%s')")
			,pMF->GetCurrentUser(),m_nExpenseTypeID,m_szName, m_szTypeKey);
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if (GetMode() == VM_EDIT)
		{
			OnOK();
		}
		if (GetParent() != NULL)
		{
			((CHMSExpenseTypeDialog*) GetParent())->OnListLoadData();
		}
		SetMode(GetMode());
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseTypeSetupDialog::OnCancelHMSExpenseTypeSetupDialog(){
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
int CHMSExpenseTypeSetupDialog::OnHMSExpenseTypeSetupDialogListLoadData(){
	return 0;
}
