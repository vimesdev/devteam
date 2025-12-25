#include "AdTransportMethodPopup.h"
#include "MainFrame_E10.h"
#include "AdTransportMethod.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethodPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethodPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethodPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethodPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdTransportMethodPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdTransportMethodPopup *pVw = (CAdTransportMethodPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdTransportMethodPopupFnc(CWnd *pWnd){
	 return ((CAdTransportMethodPopup*)pWnd)->OnAddAdTransportMethodPopup();
} 
static int _OnEditAdTransportMethodPopupFnc(CWnd *pWnd){
	 return ((CAdTransportMethodPopup*)pWnd)->OnEditAdTransportMethodPopup();
} 
static int _OnDeleteAdTransportMethodPopupFnc(CWnd *pWnd){
	 return ((CAdTransportMethodPopup*)pWnd)->OnDeleteAdTransportMethodPopup();
} 
static int _OnSaveAdTransportMethodPopupFnc(CWnd *pWnd){
	 return ((CAdTransportMethodPopup*)pWnd)->OnSaveAdTransportMethodPopup();
} 
static int _OnCancelAdTransportMethodPopupFnc(CWnd *pWnd){
	 return ((CAdTransportMethodPopup*)pWnd)->OnCancelAdTransportMethodPopup();
} 
CAdTransportMethodPopup::CAdTransportMethodPopup(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 85;
	SetDefaultValues();
}
CAdTransportMethodPopup::~CAdTransportMethodPopup(){
}
void CAdTransportMethodPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 80);
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 190, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 195, 25, 275, 50);
	m_wndName.Create(this,280, 25, 710, 50); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 55, 85, 80);
	m_wndDescription.Create(this,90, 55, 710, 80); 
	m_wndActive.Create(this, _T("Active"), 714, 25, 794, 50);
	m_wndSave.Create(this, _T("&Save"), 714, 55, 794, 80);

}
void CAdTransportMethodPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndID.SetTextUpper();
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_transport_methodTbl.SetTableName(_T("ad_transport_method"));
	m_ad_transport_methodTbl.AddField(_T("ADTM_CREATEDBY"), dfText, 15); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_CREATEDDATE"), dfDateTime); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_UPDATEDBY"), dfText, 15); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_UPDATEDDATE"), dfDateTime); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_TRANSPORT_METHOD_ID"), dfText, 15); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_NAME"), dfText, 254); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_DESCRIPTION"), dfText, 254); 
	m_ad_transport_methodTbl.AddField(_T("ADTM_ISACTIVE"), dfText, 1); 
}


void CAdTransportMethodPopup::OnSetWindowEvents(){
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
void CAdTransportMethodPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdTransportMethodPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adtm_name as name, adtm_description as descr, adtm_isactive as active FROM ad_transport_method WHERE adtm_transport_method_id = '%s' ORDER BY adtm_transport_method_id"), m_szID);
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


void CAdTransportMethodPopup::GetScreenToData(){
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
	m_ad_transport_methodTbl.SetValue(_T("adtm_description"), m_szDescription);
	m_ad_transport_methodTbl.SetValue(_T("adtm_isactive"), m_bActive?_T("Y"):_T("N"));	
}


void CAdTransportMethodPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}


int CAdTransportMethodPopup::SetMode(int nMode){
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


/*void CAdTransportMethodPopup::OnIDChange(){
	
} */
/*void CAdTransportMethodPopup::OnIDSetfocus(){
	
} */
/*void CAdTransportMethodPopup::OnIDKillfocus(){
	
} */
int CAdTransportMethodPopup::OnIDCheckValue(){
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

 
/*void CAdTransportMethodPopup::OnNameChange(){
	
} */
/*void CAdTransportMethodPopup::OnNameSetfocus(){
	
} */
/*void CAdTransportMethodPopup::OnNameKillfocus(){
	
} */
int CAdTransportMethodPopup::OnNameCheckValue(){
	return 0;
}

 
/*void CAdTransportMethodPopup::OnDescriptionChange(){
	
} */
/*void CAdTransportMethodPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdTransportMethodPopup::OnDescriptionKillfocus(){
	
} */
int CAdTransportMethodPopup::OnDescriptionCheckValue(){
	return 0;
}

 
	void CAdTransportMethodPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}


void CAdTransportMethodPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdTransportMethodPopup();
}

 
int CAdTransportMethodPopup::OnAddAdTransportMethodPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdTransportMethodPopup::OnEditAdTransportMethodPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdTransportMethodPopup::OnDeleteAdTransportMethodPopup(){
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
 		OnCancelAdTransportMethodPopup();
 	}
	return 0;
}
int CAdTransportMethodPopup::OnSaveAdTransportMethodPopup(){
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
 		szSQL = m_ad_transport_methodTbl.GetUpdateSQL(_T("adtm_createdby,adtm_createddate,adtm_transport_method_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_EDIT)
			ClosePopup();
		else if (GetMode() == VM_ADD)
			SetMode(VM_ADD);
		((CAdTransportMethod*)GetParentWnd())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdTransportMethodPopup::OnCancelAdTransportMethodPopup(){
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
int CAdTransportMethodPopup::OnAdTransportMethodPopupListLoadData(){
	return 0;
}
void CAdTransportMethodPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdTransportMethod*)GetParentWnd())->SetMode(m_nMode);
}