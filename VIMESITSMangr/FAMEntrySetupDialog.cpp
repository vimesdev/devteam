#include "FAMEntrySetupDialog.h"
#include "MainFrm.h"
#include "afxdb.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMEntrySetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnPrefixChangeFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnPrefixChange();
} */
/*static void _OnPrefixSetfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnPrefixSetfocus();} */ 
/*static void _OnPrefixKillfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnPrefixKillfocus();
} */
static int _OnPrefixCheckValueFnc(CWnd *pWnd){
	return ((CFAMEntrySetupDialog *)pWnd)->OnPrefixCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMEntrySetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMEntrySetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMEntrySetupDialog *pVw = (CFAMEntrySetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMEntrySetupDialog *pVw = (CFAMEntrySetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMEntrySetupDialogFnc(CWnd *pWnd){
	 return ((CFAMEntrySetupDialog*)pWnd)->OnAddFAMEntrySetupDialog();
} 
static int _OnEditFAMEntrySetupDialogFnc(CWnd *pWnd){
	 return ((CFAMEntrySetupDialog*)pWnd)->OnEditFAMEntrySetupDialog();
} 
static int _OnDeleteFAMEntrySetupDialogFnc(CWnd *pWnd){
	 return ((CFAMEntrySetupDialog*)pWnd)->OnDeleteFAMEntrySetupDialog();
} 
static int _OnSaveFAMEntrySetupDialogFnc(CWnd *pWnd){
	 return ((CFAMEntrySetupDialog*)pWnd)->OnSaveFAMEntrySetupDialog();
} 
static int _OnCancelFAMEntrySetupDialogFnc(CWnd *pWnd){
	 return ((CFAMEntrySetupDialog*)pWnd)->OnCancelFAMEntrySetupDialog();
} 
CFAMEntrySetupDialog::CFAMEntrySetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 360;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFAMEntrySetupDialog::~CFAMEntrySetupDialog(){
}
void CFAMEntrySetupDialog::OnCreateComponents()
{
	m_wndItemsInformation.Create(this, _T("Items Information"), 5, 5, 350, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 60, 55);
	m_wndID.Create(this,65, 30, 205, 55); 
	m_wndPrefixLabel.Create(this, _T("Prefix"), 210, 30, 270, 55);
	m_wndPrefix.Create(this,275, 30, 345, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 60, 85);
	m_wndName.Create(this,65, 60, 345, 85); 
	m_wndSave.Create(this, _T("&Save"), 185, 95, 265, 120);
	m_wndClose.Create(this, _T("&Close"), 270, 95, 350, 120);

}
void CFAMEntrySetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_LOWERCASE);
	m_wndPrefix.SetLimitText(7);
	m_wndPrefix.SetCheckValue(true);
	m_wndPrefix.ModifyStyle(0, ES_LOWERCASE);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_fam_setuplistTbl.SetTableName(_T("fam_setuplist"));
	m_fam_setuplistTbl.AddField(_T("fasl_id"), dfText, 35); 
	m_fam_setuplistTbl.AddField(_T("fasl_name"), dfText, 81); 
	m_fam_setuplistTbl.AddField(_T("fasl_type"), dfLong); 
	m_fam_setuplistTbl.AddField(_T("fasl_prefix"), dfText, 7); 
	m_fam_setuplistTbl.AddField(_T("fasl_org_id"), dfText, 3);

}
void CFAMEntrySetupDialog::OnSetWindowEvents()
{
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndPrefix.SetEvent(WE_CHANGE, _OnPrefixChangeFnc);
	//m_wndPrefix.SetEvent(WE_SETFOCUS, _OnPrefixSetfocusFnc);
	//m_wndPrefix.SetEvent(WE_KILLFOCUS, _OnPrefixKillfocusFnc);
	m_wndPrefix.SetEvent(WE_CHECKVALUE, _OnPrefixCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
}
void CFAMEntrySetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndPrefix.GetDlgCtrlID(), m_szPrefix);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CFAMEntrySetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT fasl_name, fasl_prefix FROM fam_setuplist WHERE fasl_id='%s' AND fasl_org_id = '%s'"), m_szID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("fasl_id"), m_szID);
		rs.GetValue(_T("fasl_name"), m_szName);
		rs.GetValue(_T("fasl_prefix"), m_szPrefix);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CFAMEntrySetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_setuplistTbl.SetValue(_T("fasl_id"), m_szID);
	m_fam_setuplistTbl.SetValue(_T("fasl_name"), m_szName);
	m_fam_setuplistTbl.SetValue(_T("fasl_prefix"), m_szPrefix);
	m_fam_setuplistTbl.SetValue(_T("fasl_org_id"), pMF->GetModuleID());
}
void CFAMEntrySetupDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szPrefix.Empty();
	m_szName.Empty();

}
int CFAMEntrySetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndPrefix.SetFocus();
			m_wndPrefix.SetSel(m_wndPrefix.GetWindowTextLength(), m_wndPrefix.GetWindowTextLength());  
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFAMEntrySetupDialog::OnIDChange(){
	
} */
/*void CFAMEntrySetupDialog::OnIDSetfocus(){
	
} */
/*void CFAMEntrySetupDialog::OnIDKillfocus(){
	
} */
int CFAMEntrySetupDialog::OnIDCheckValue()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_setuplist WHERE fasl_id='%s' AND fasl_org_id = '%s'"), 
		m_szID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CFAMEntrySetupDialog::OnPrefixChange(){
	
} */
/*void CFAMEntrySetupDialog::OnPrefixSetfocus(){
	
} */
/*void CFAMEntrySetupDialog::OnPrefixKillfocus(){
	
} */
int CFAMEntrySetupDialog::OnPrefixCheckValue()
{
	return 0;
} 
/*void CFAMEntrySetupDialog::OnNameChange(){
	
} */
/*void CFAMEntrySetupDialog::OnNameSetfocus(){
	
} */
/*void CFAMEntrySetupDialog::OnNameKillfocus(){
	
} */
int CFAMEntrySetupDialog::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CFAMEntrySetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMEntrySetupDialog() > 0)
		OnOK();
} 
void CFAMEntrySetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMEntrySetupDialog::OnAddFAMEntrySetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMEntrySetupDialog::OnEditFAMEntrySetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMEntrySetupDialog::OnDeleteFAMEntrySetupDialog(){
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
 		OnCancelFAMEntrySetupDialog(); 
 	}
	return 0;
}
int CFAMEntrySetupDialog::OnSaveFAMEntrySetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{
 		szSQL = m_fam_setuplistTbl.GetInsertSQL(_T("fasl_type")); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE fasl_id='%s' "), m_szID); 
 		szSQL = m_fam_setuplistTbl.GetUpdateSQL(_T("fasl_id, fasl_type"));
 		szSQL += szWhere; 
 	} 

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFAMEntrySetupDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		GetDataToScreen();
 	} 
 	/*else 
 	{ 
 	}*/ 
 	return ret; 
 	//return 0; 
}
int CFAMEntrySetupDialog::OnCancelFAMEntrySetupDialog(){
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
int CFAMEntrySetupDialog::OnFAMEntrySetupDialogListLoadData(){
	return 0;
}
