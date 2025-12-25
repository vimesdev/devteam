#include "AdTransportMethodDialog.h"
#include "MainFrame_E10.h"
#include "AdTransportMethod.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethodDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethodDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethodDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdTransportMethodDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdTransportMethodDialog *pVw = (CAdTransportMethodDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdTransportMethodDialog *pVw = (CAdTransportMethodDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdTransportMethodDialogFnc(CWnd *pWnd){
	 return ((CAdTransportMethodDialog*)pWnd)->OnAddAdTransportMethodDialog();
} 
static int _OnEditAdTransportMethodDialogFnc(CWnd *pWnd){
	 return ((CAdTransportMethodDialog*)pWnd)->OnEditAdTransportMethodDialog();
} 
static int _OnDeleteAdTransportMethodDialogFnc(CWnd *pWnd){
	 return ((CAdTransportMethodDialog*)pWnd)->OnDeleteAdTransportMethodDialog();
} 
static int _OnSaveAdTransportMethodDialogFnc(CWnd *pWnd){
	 return ((CAdTransportMethodDialog*)pWnd)->OnSaveAdTransportMethodDialog();
} 
static int _OnCancelAdTransportMethodDialogFnc(CWnd *pWnd){
	 return ((CAdTransportMethodDialog*)pWnd)->OnCancelAdTransportMethodDialog();
} 
CAdTransportMethodDialog::CAdTransportMethodDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	m_pParentWnd = pParent;
	SetDefaultValues();
}
CAdTransportMethodDialog::~CAdTransportMethodDialog(){
}
void CAdTransportMethodDialog::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 465, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 195, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 460, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 90, 120);
	m_wndSave.Create(this, _T("&Save"), 300, 95, 380, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 385, 95, 465, 120);

}
void CAdTransportMethodDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndName.SetLimitText(254);
	//m_wndName.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_transport_methodTbl.SetTableName(_T("ad_transport_method"));
	m_ad_transport_methodTbl.AddField(_T("ADTM_CREATEDBY"), dfText, 15); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_CREATEDDATE"), dfDateTime); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_UPDATEDBY"), dfText, 15); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_UPDATEDDATE"), dfDateTime); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_TRANSPORT_METHOD_ID"), dfText, 32); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_NAME"), dfText, 254); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_ISACTIVE"), dfText, 1); 
}

void CAdTransportMethodDialog::OnSetWindowEvents(){
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
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(m_nMode);
	if (m_nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdTransportMethodDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdTransportMethodDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adtm_name as name, adtm_isactive as active FROM ad_transport_method WHERE adtm_transport_method_id = '%s' ORDER BY adtm_transport_method_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdTransportMethodDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_transport_methodTbl.SetValue(_T("adtm_createdby"), pMF->GetCurrentUser());
	m_ad_transport_methodTbl.SetValue(_T("adtm_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adtm_transport_method_id='%s' "), m_szID);
		m_ad_transport_methodTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_transport_methodTbl.SetValue(_T("adtm_createddate"), pMF->GetSysDateTime());
	m_ad_transport_methodTbl.SetValue(_T("adtm_updateddate"), pMF->GetSysDateTime());
	m_ad_transport_methodTbl.SetValue(_T("adtm_transport_method_id"), m_szID);
	m_ad_transport_methodTbl.SetValue(_T("adtm_name"), m_szName);
	m_ad_transport_methodTbl.SetValue(_T("adtm_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdTransportMethodDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=TRUE;

}

int CAdTransportMethodDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndID.SetFocus();
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
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

/*void CAdTransportMethodDialog::OnIDChange(){
	
} */
/*void CAdTransportMethodDialog::OnIDSetfocus(){
	
} */
/*void CAdTransportMethodDialog::OnIDKillfocus(){
	
} */
int CAdTransportMethodDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_transport_method WHERE adtm_transport_method_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdTransportMethodDialog::OnNameChange(){
	
} */
/*void CAdTransportMethodDialog::OnNameSetfocus(){
	
} */
/*void CAdTransportMethodDialog::OnNameKillfocus(){
	
} */
int CAdTransportMethodDialog::OnNameCheckValue(){
	return 0;
}
 
	void CAdTransportMethodDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdTransportMethodDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdTransportMethodDialog();
}
 
void CAdTransportMethodDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdTransportMethodDialog::OnAddAdTransportMethodDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdTransportMethodDialog::OnEditAdTransportMethodDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdTransportMethodDialog::OnDeleteAdTransportMethodDialog(){
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
 		OnCancelAdTransportMethodDialog(); 
 	}
	return 0;
}

int CAdTransportMethodDialog::OnSaveAdTransportMethodDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_transport_methodTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE adtm_transport_method_id = '%s'"), m_szID); 
 		szSQL = m_ad_transport_methodTbl.GetUpdateSQL(_T("adtm_createdby,adtm_createddate, adtm_transport_method_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnOK();
		else
			SetMode(VM_ADD);
		((CAdTransportMethod*)m_pParentWnd)->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdTransportMethodDialog::OnCancelAdTransportMethodDialog(){
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
 
int CAdTransportMethodDialog::OnAdTransportMethodDialogListLoadData(){
	return 0;
}

