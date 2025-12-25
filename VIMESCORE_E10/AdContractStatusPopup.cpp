#include "AdContractStatusPopup.h"
#include "MainFrame_E10.h"
#include "AdContractStatus.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdContractStatusPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdContractStatusPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdContractStatusPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdContractStatusPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdContractStatusPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdContractStatusPopup *pVw = (CAdContractStatusPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdContractStatusPopupFnc(CWnd *pWnd){
	 return ((CAdContractStatusPopup*)pWnd)->OnAddAdContractStatusPopup();
} 
static int _OnEditAdContractStatusPopupFnc(CWnd *pWnd){
	 return ((CAdContractStatusPopup*)pWnd)->OnEditAdContractStatusPopup();
} 
static int _OnDeleteAdContractStatusPopupFnc(CWnd *pWnd){
	 return ((CAdContractStatusPopup*)pWnd)->OnDeleteAdContractStatusPopup();
} 
static int _OnSaveAdContractStatusPopupFnc(CWnd *pWnd){
	 return ((CAdContractStatusPopup*)pWnd)->OnSaveAdContractStatusPopup();
} 
static int _OnCancelAdContractStatusPopupFnc(CWnd *pWnd){
	 return ((CAdContractStatusPopup*)pWnd)->OnCancelAdContractStatusPopup();
} 
CAdContractStatusPopup::CAdContractStatusPopup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CAdContractStatusPopup::~CAdContractStatusPopup(){
}
void CAdContractStatusPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 795, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 215, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 220, 30, 300, 55);
	m_wndName.Create(this,305, 30, 705, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 705, 85); 
	m_wndActive.Create(this, _T("Active"), 710, 30, 790, 55);
	m_wndSave.Create(this, _T("&Save"), 710, 60, 790, 85);

}
void CAdContractStatusPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_contract_statusTbl.SetTableName(_T("ad_contract_status"));
	m_ad_contract_statusTbl.AddField(_T("CS_CREATEDBY"), dfText, 15); 
	m_ad_contract_statusTbl.AddField(_T("CS_CREATEDDATE"), dfDateTime); 
	m_ad_contract_statusTbl.AddField(_T("CS_UPDATEDBY"), dfText, 15); 
	m_ad_contract_statusTbl.AddField(_T("CS_UPDATEDDATE"), dfDateTime); 
	m_ad_contract_statusTbl.AddField(_T("CS_CONTRACT_STATUS_ID"), dfText, 32); 
	m_ad_contract_statusTbl.AddField(_T("CS_NAME"), dfText, 254); 
	m_ad_contract_statusTbl.AddField(_T("CS_DESCRIPTION"), dfText, 254); 
	m_ad_contract_statusTbl.AddField(_T("CS_ISACTIVE"), dfText, 1); 
}


void CAdContractStatusPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdContractStatusPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdContractStatusPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT cs_name as name, cs_description as descr, cs_isactive as active FROM ad_contract_status WHERE cs_contract_status_id = '%s' ORDER BY cs_contract_status_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		rs.GetValue(_T("descr"), m_szDescription);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}


void CAdContractStatusPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_contract_statusTbl.SetValue(_T("cs_createdby"), pMF->GetCurrentUser());
	m_ad_contract_statusTbl.SetValue(_T("cs_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE cs_contract_status_id='%s' "), m_szID);
		m_ad_contract_statusTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_contract_statusTbl.SetValue(_T("cs_createddate"), pMF->GetSysDateTime());
	m_ad_contract_statusTbl.SetValue(_T("cs_updateddate"), pMF->GetSysDateTime());
	m_ad_contract_statusTbl.SetValue(_T("cs_contract_status_id"), m_szID);
	m_ad_contract_statusTbl.SetValue(_T("cs_name"), m_szName);
	m_ad_contract_statusTbl.SetValue(_T("cs_description"), m_szDescription);
	m_ad_contract_statusTbl.SetValue(_T("cs_isactive"), m_bActive?_T("Y"):_T("N"));	
}


void CAdContractStatusPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}


int CAdContractStatusPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndID.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
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


/*void CAdContractStatusPopup::OnIDChange(){
	
} */
/*void CAdContractStatusPopup::OnIDSetfocus(){
	
} */
/*void CAdContractStatusPopup::OnIDKillfocus(){
	
} */
int CAdContractStatusPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_contract_status WHERE cs_contract_status_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}

 
/*void CAdContractStatusPopup::OnNameChange(){
	
} */
/*void CAdContractStatusPopup::OnNameSetfocus(){
	
} */
/*void CAdContractStatusPopup::OnNameKillfocus(){
	
} */
int CAdContractStatusPopup::OnNameCheckValue(){
	return 0;
}

 
/*void CAdContractStatusPopup::OnDescriptionChange(){
	
} */
/*void CAdContractStatusPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdContractStatusPopup::OnDescriptionKillfocus(){
	
} */
int CAdContractStatusPopup::OnDescriptionCheckValue(){
	return 0;
}

 
	void CAdContractStatusPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}


void CAdContractStatusPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdContractStatusPopup();
}

 
int CAdContractStatusPopup::OnAddAdContractStatusPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}


int CAdContractStatusPopup::OnEditAdContractStatusPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}


int CAdContractStatusPopup::OnDeleteAdContractStatusPopup(){
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
 		OnCancelAdContractStatusPopup(); 
 	}
	return 0;
}


int CAdContractStatusPopup::OnSaveAdContractStatusPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_contract_statusTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE cs_contract_status_id = '%s'"), m_szID); 
 		szSQL = m_ad_contract_statusTbl.GetUpdateSQL(_T("cs_createdby,cs_createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
 			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdContractStatus*)GetParentWnd())->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}


int CAdContractStatusPopup::OnCancelAdContractStatusPopup(){
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

 
int CAdContractStatusPopup::OnAdContractStatusPopupListLoadData(){
	return 0;
}

void CAdContractStatusPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdContractStatus*)GetParentWnd())->SetMode(m_nMode);
}
