#include "VIMESEntryDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnShortcutChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutChange();
} */
/*static void _OnShortcutSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutSetfocus();} */ 
/*static void _OnShortcutKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutKillfocus();
} */
static int _OnShortcutCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnShortcutCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CVIMESEntryDialog *pVw = (CVIMESEntryDialog *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESEntryDialog *pVw = (CVIMESEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnAddVIMESEntryDialog();
} 
static int _OnEditVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnEditVIMESEntryDialog();
} 
static int _OnDeleteVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnDeleteVIMESEntryDialog();
} 
static int _OnSaveVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnSaveVIMESEntryDialog();
} 
static int _OnCancelVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnCancelVIMESEntryDialog();
} 
CVIMESEntryDialog::CVIMESEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CVIMESEntryDialog::~CVIMESEntryDialog(){
}
void CVIMESEntryDialog::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 390, 125);
	m_wndIDLabel.Create(this, _T("ID"), 12, 32, 92, 57);
	m_wndID.Create(this,97, 32, 234, 57); 
	m_wndNameLabel.Create(this, _T("Name"), 12, 62, 92, 87);
	m_wndName.Create(this,97, 62, 385, 87); 
	m_wndShortcutLabel.Create(this, _T("Shortcut"), 12, 92, 92, 117);
	m_wndShortcut.Create(this,97, 92, 234, 117); 
	m_wndOk.Create(this, _T("Ok"), 227, 131, 306, 156);
	m_wndClose.Create(this, _T("Close"), 311, 131, 390, 156);

}
void CVIMESEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndShortcut.SetLimitText(7);
	m_wndShortcut.SetCheckValue(true);
	m_sys_provTbl.SetTableName(_T("sys_prov"));
	m_sys_provTbl.AddField(_T("sp_id"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_name"), dfText, 81); 
	m_sys_provTbl.AddField(_T("sp_zone"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_wrd"), dfText, 7); 
	m_sys_distTbl.SetTableName(_T("sys_dist"));
	m_sys_distTbl.AddField(_T("sd_id"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_provid"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_distTbl.AddField(_T("sd_wrd"), dfText, 7); 
	m_sys_villTbl.SetTableName(_T("sys_vill"));
	m_sys_villTbl.AddField(_T("sv_id"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_distid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_provid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_name"), dfText, 81); 
	m_sys_villTbl.AddField(_T("sv_wrd"), dfText, 7); 

}
void CVIMESEntryDialog::OnSetWindowEvents(){
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndShortcut.SetEvent(WE_CHANGE, _OnShortcutChangeFnc);
	//m_wndShortcut.SetEvent(WE_SETFOCUS, _OnShortcutSetfocusFnc);
	//m_wndShortcut.SetEvent(WE_KILLFOCUS, _OnShortcutKillfocusFnc);
	m_wndShortcut.SetEvent(WE_CHECKVALUE, _OnShortcutCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CVIMESEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndShortcut.GetDlgCtrlID(), m_szShortcut);

}
void CVIMESEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("sp_id"), m_nID);
	rs.GetValue(_T("sp_name"), m_szName);
	rs.GetValue(_T("sp_wrd"), m_szShortcut);

}
void CVIMESEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_provTbl.SetValue(_T("sp_id"), m_nID);
	m_sys_provTbl.SetValue(_T("sp_name"), m_szName);
	m_sys_provTbl.SetValue(_T("sp_wrd"), m_szShortcut);

}
void CVIMESEntryDialog::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szShortcut.Empty();

}
int CVIMESEntryDialog::SetMode(int nMode){
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
/*void CVIMESEntryDialog::OnIDChange(){
	
} */
/*void CVIMESEntryDialog::OnIDSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnIDKillfocus(){
	
} */
int CVIMESEntryDialog::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESEntryDialog::OnNameChange(){
	
} */
/*void CVIMESEntryDialog::OnNameSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnNameKillfocus(){
	
} */
int CVIMESEntryDialog::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESEntryDialog::OnShortcutChange(){
	
} */
/*void CVIMESEntryDialog::OnShortcutSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnShortcutKillfocus(){
	
} */
int CVIMESEntryDialog::OnShortcutCheckValue(){
	return 0;
} 
void CVIMESEntryDialog::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESEntryDialog::OnAddVIMESEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESEntryDialog::OnEditVIMESEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESEntryDialog::OnDeleteVIMESEntryDialog(){
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
 		OnCancelVIMESEntryDialog(); 
 	}
	return 0;
}
int CVIMESEntryDialog::OnSaveVIMESEntryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_provTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_provTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESEntryDialog::OnCancelVIMESEntryDialog(){
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
int CVIMESEntryDialog::OnVIMESEntryDialogListLoadData(){
	return 0;
}
