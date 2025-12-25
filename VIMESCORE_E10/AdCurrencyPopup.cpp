#include "AdCurrencyPopup.h"
#include "MainFrame_E10.h"
#include "AdCurrency.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdCurrencyPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdCurrencyPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCurrencyPopup *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdCurrencyPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdCurrencyPopup *pVw = (CAdCurrencyPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdCurrencyPopupFnc(CWnd *pWnd){
	 return ((CAdCurrencyPopup*)pWnd)->OnAddAdCurrencyPopup();
} 
static int _OnEditAdCurrencyPopupFnc(CWnd *pWnd){
	 return ((CAdCurrencyPopup*)pWnd)->OnEditAdCurrencyPopup();
} 
static int _OnDeleteAdCurrencyPopupFnc(CWnd *pWnd){
	 return ((CAdCurrencyPopup*)pWnd)->OnDeleteAdCurrencyPopup();
} 
static int _OnSaveAdCurrencyPopupFnc(CWnd *pWnd){
	 return ((CAdCurrencyPopup*)pWnd)->OnSaveAdCurrencyPopup();
} 
static int _OnCancelAdCurrencyPopupFnc(CWnd *pWnd){
	 return ((CAdCurrencyPopup*)pWnd)->OnCancelAdCurrencyPopup();
} 
CAdCurrencyPopup::CAdCurrencyPopup(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 50;
	SetDefaultValues();
}
CAdCurrencyPopup::~CAdCurrencyPopup(){
}
void CAdCurrencyPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 50);
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 190, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 195, 25, 275, 50);
	m_wndName.Create(this,280, 25, 615, 50); 
	m_wndActive.Create(this, _T("Active"), 620, 25, 710, 50);
	m_wndSave.Create(this, _T("&Save"), 715, 25, 795, 50);


}
void CAdCurrencyPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER,0);
	m_accSetupTbl.SetTableName(_T("ad_currency"));
	m_accSetupTbl.AddField(_T("adc_createdby"), dfText, 15);
	m_accSetupTbl.AddField(_T("adc_createddate"), dfDateTime);
	m_accSetupTbl.AddField(_T("adc_updatedby"), dfText, 15);
	m_accSetupTbl.AddField(_T("adc_updateddate"), dfDateTime);
	m_accSetupTbl.AddField(_T("adc_currency_id"), dfText, 3);
	m_accSetupTbl.AddField(_T("adc_iso_code"), dfText, 3);
	m_accSetupTbl.AddField(_T("adc_description"), dfText, 35);
	m_accSetupTbl.AddField(_T("adc_isactive"), dfText, 1);

	m_wndID.SetLimitText(3);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(1);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);


}

void CAdCurrencyPopup::OnSetWindowEvents(){
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
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdCurrencyPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdCurrencyPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_currency WHERE adc_currency_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adc_description"), m_szName);
		rs.GetValue(_T("adc_isactive"), szActive);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(FALSE);
	}
	


}

void CAdCurrencyPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_accSetupTbl.SetValue(_T("adc_createdby"), pMF->GetCurrentUser());
	m_accSetupTbl.SetValue(_T("adc_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adc_currency_id='%s' "), m_szID);
		m_accSetupTbl.Open(&pMF->m_db, szWhere);
	}
	m_accSetupTbl.SetValue(_T("adc_createddate"), pMF->GetSysDateTime());
	m_accSetupTbl.SetValue(_T("adc_updateddate"), pMF->GetSysDateTime());
	m_accSetupTbl.SetValue(_T("adc_currency_id"), m_szID);
	m_accSetupTbl.SetValue(_T("adc_iso_code"), m_szID);
	m_accSetupTbl.SetValue(_T("adc_description"), m_szName);
	m_accSetupTbl.SetValue(_T("adc_isactive"), m_bActive?_T("Y"):_T("N"));

}

void CAdCurrencyPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=TRUE;

}

int CAdCurrencyPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			SetDefaultValues(); 
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE);
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}

/*void CAdCurrencyPopup::OnIDChange(){
	
} */
/*void CAdCurrencyPopup::OnIDSetfocus(){
	
} */
/*void CAdCurrencyPopup::OnIDKillfocus(){
	
} */
int CAdCurrencyPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_currency WHERE adc_currency_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdCurrencyPopup::OnNameChange(){
	
} */
/*void CAdCurrencyPopup::OnNameSetfocus(){
	
} */
/*void CAdCurrencyPopup::OnNameKillfocus(){
	
} */
int CAdCurrencyPopup::OnNameCheckValue(){
	return 0;
}
 
	void CAdCurrencyPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdCurrencyPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdCurrencyPopup();
}
 
int CAdCurrencyPopup::OnAddAdCurrencyPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdCurrencyPopup::OnEditAdCurrencyPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdCurrencyPopup::OnDeleteAdCurrencyPopup(){
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
 		OnCancelAdCurrencyPopup(); 
 	}
	return 0;
}

int CAdCurrencyPopup::OnSaveAdCurrencyPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_accSetupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adc_currency_id='%s' "), m_szID); 
 		szSQL = m_accSetupTbl.GetUpdateSQL(_T("adc_currency_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
 			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdCurrency*)m_wndParent)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdCurrencyPopup::OnCancelAdCurrencyPopup(){
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
 
int CAdCurrencyPopup::OnAdCurrencyPopupListLoadData(){
	return 0;
}
void CAdCurrencyPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdCurrency*)GetParentWnd())->SetMode(m_nMode);
}
