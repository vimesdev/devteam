#include "HMSPriceSchemaSetupDialog.h"
#include "..\MainFrm.h"
#include "HMSPriceSchemaLineSetupDialog.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnExtraSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaSetupDialog *pVw = (CHMSPriceSchemaSetupDialog *)pWnd;
	pVw->OnExtraSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaSetupDialog *pVw = (CHMSPriceSchemaSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaSetupDialog *pVw = (CHMSPriceSchemaSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaSetupDialog*)pWnd)->OnAddHMSPriceSchemaSetupDialog();
} 
static int _OnEditHMSPriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaSetupDialog*)pWnd)->OnEditHMSPriceSchemaSetupDialog();
} 
static int _OnDeleteHMSPriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaSetupDialog*)pWnd)->OnDeleteHMSPriceSchemaSetupDialog();
} 
static int _OnSaveHMSPriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaSetupDialog*)pWnd)->OnSaveHMSPriceSchemaSetupDialog();
} 
static int _OnCancelHMSPriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaSetupDialog*)pWnd)->OnCancelHMSPriceSchemaSetupDialog();
} 
CHMSPriceSchemaSetupDialog::CHMSPriceSchemaSetupDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_nPriceSchemaID = 0;
	m_szTitle.Format(_T("%s price schema")
		, nMode==VM_ADD?_T("Add"):_T("Edit"));
	SetWindowText(m_szTitle);
}
CHMSPriceSchemaSetupDialog::~CHMSPriceSchemaSetupDialog(){
}
void CHMSPriceSchemaSetupDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 340, 30); 
	m_wndExtra.Create(this, _T("..."), 5, 35, 85, 60);
	m_wndSave.Create(this, _T("Save"), 175, 35, 255, 60);
	m_wndClose.Create(this, _T("Close"), 260, 35, 340, 60);
	m_wndExtra.ShowWindow(SW_HIDE);
}
void CHMSPriceSchemaSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);

}
void CHMSPriceSchemaSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndExtra.SetEvent(WE_CLICK, _OnExtraSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(GetMode());
}
void CHMSPriceSchemaSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSPriceSchemaSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CHMSPriceSchemaSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	szSQL.Format(_T("SELECT ps_id as id, ps_name as name ") \
				_T(" FROM hms_price_schema_view ") \
				_T(" WHERE ps_id = %ld %s %s"), m_nPriceSchemaID, szWhere, szFilter);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		UpdateData(FALSE);
	}

}
void CHMSPriceSchemaSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaSetupDialog::SetDefaultValues(){

	m_szName.Empty();

}
int CHMSPriceSchemaSetupDialog::SetMode(int nMode){
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
/*void CHMSPriceSchemaSetupDialog::OnNameChange(){
	
} */
/*void CHMSPriceSchemaSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSPriceSchemaSetupDialog::OnNameKillfocus(){
	
} */
int CHMSPriceSchemaSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSPriceSchemaSetupDialog::OnExtraSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSPriceSchemaLineSetupDialog dlg(this, VM_ADD);
	//dlg.m_szPriceSchemaKey.Format(_T("%ld"), m_nPriceSchemaID);
	dlg.DoModal();
} 
void CHMSPriceSchemaSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSPriceSchemaSetupDialog();
} 
void CHMSPriceSchemaSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSPriceSchemaSetupDialog::OnAddHMSPriceSchemaSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaSetupDialog::OnEditHMSPriceSchemaSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaSetupDialog::OnDeleteHMSPriceSchemaSetupDialog(){
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
 		OnCancelHMSPriceSchemaSetupDialog();
 	}
	return 0;
}
int CHMSPriceSchemaSetupDialog::OnSaveHMSPriceSchemaSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("hms_price_schema_add('%s', '%s')")
			, pMF->GetCurrentUser(), m_szName);
 	}
 	else if(GetMode() == VM_EDIT){
		szSQL.Format(_T("hms_price_schema_edit('%s',%ld,'%s')")
			, pMF->GetCurrentUser(), m_nPriceSchemaID,m_szName);
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		pMF->m_wndPriceSchemaFullView.OnSchemaListLoadData();
		SetMode(GetMode());
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaSetupDialog::OnCancelHMSPriceSchemaSetupDialog(){
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
int CHMSPriceSchemaSetupDialog::OnHMSPriceSchemaSetupDialogListLoadData(){
	return 0;
}
