#include "AdBusinessPartnerContactInput.h"
#include "MainFrm.h"
#include "AdBusinessPartnerContact.h"
static void _OnPrimarySelectFnc(CWnd *pWnd){
	 ((CAdBusinessPartnerContactInput*)pWnd)->OnPrimarySelect();
}
/*static void _OnTitleChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnTitleChange();
} */
/*static void _OnTitleSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnTitleSetfocus();} */ 
/*static void _OnTitleKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnTitleKillfocus();
} */
static int _OnTitleCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContactInput *)pWnd)->OnTitleCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContactInput *)pWnd)->OnNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContactInput *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContactInput *)pWnd)->OnEmailCheckValue();
} 
/*static void _OnPositionChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPositionChange();
} */
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPositionSetfocus();} */ 
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContactInput *)pWnd)->OnPositionKillfocus();
} */
static int _OnPositionCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContactInput *)pWnd)->OnPositionCheckValue();
} 
static int _OnAddAdBusinessPartnerContactInputFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContactInput*)pWnd)->OnAddAdBusinessPartnerContactInput();
} 
static int _OnEditAdBusinessPartnerContactInputFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContactInput*)pWnd)->OnEditAdBusinessPartnerContactInput();
} 
static int _OnDeleteAdBusinessPartnerContactInputFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContactInput*)pWnd)->OnDeleteAdBusinessPartnerContactInput();
} 
static int _OnSaveAdBusinessPartnerContactInputFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContactInput*)pWnd)->OnSaveAdBusinessPartnerContactInput();
} 
static int _OnCancelAdBusinessPartnerContactInputFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContactInput*)pWnd)->OnCancelAdBusinessPartnerContactInput();
} 
CAdBusinessPartnerContactInput::CAdBusinessPartnerContactInput(){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerContactInput::~CAdBusinessPartnerContactInput(){
}
void CAdBusinessPartnerContactInput::OnCreateComponents(){
	m_wndPrimary.Create(this, _T(""), 5, 5, 85, 30);
	m_wndTitleLabel.Create(this, _T("Title"), 5, 35, 85, 60);
	m_wndTitle.Create(this,85, 35, 165, 60); 
	m_wndNameLabel.Create(this, _T("Name"), 6, 156, 86, 181);
	m_wndName.Create(this,86, 156, 166, 181); 
	m_wndPositionLabel.Create(this, _T("Position"), 5, 62, 85, 87);
	m_wndPosition.Create(this,85, 62, 165, 87); 
	m_wndEmailLabel.Create(this, _T("Email"), 5, 125, 85, 150);
	m_wndEmail.Create(this,85, 125, 165, 150); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 5, 95, 85, 120);
	m_wndPhone.Create(this,85, 95, 165, 120); 

}
void CAdBusinessPartnerContactInput::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTitle.SetLimitText(35);
	m_wndTitle.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	m_wndEmail.SetLimitText(35);
	m_wndEmail.SetCheckValue(true);
	m_wndPosition.SetLimitText(15);
	m_wndPosition.SetCheckValue(true);
	m_ad_partner_contactTbl.SetTableName(_T("ad_partner_contact"));
	m_ad_partner_contactTbl.AddField(_T("adpc_partner_contact_id"), dfText, 32);
	m_ad_partner_contactTbl.AddField(_T("adpc_client_id"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_org_id"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_user_id"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_createdby"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_createddate"), dfDateTime); 
	m_ad_partner_contactTbl.AddField(_T("adpc_updatedby"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_updateddate"), dfDateTime); 
	m_ad_partner_contactTbl.AddField(_T("adpc_isactive"), dfText, 1); 
	m_ad_partner_contactTbl.AddField(_T("adpc_partner_id"), dfText, 32); 
	m_ad_partner_contactTbl.AddField(_T("adpc_isprimary"), dfText, 1); 
	m_ad_partner_contactTbl.AddField(_T("adpc_title"), dfText, 4); 
	m_ad_partner_contactTbl.AddField(_T("adpc_position"), dfText, 15); 
	m_ad_partner_contactTbl.AddField(_T("adpc_name"), dfText, 35); 
	m_ad_partner_contactTbl.AddField(_T("adpc_tel"), dfText, 15); 
	m_ad_partner_contactTbl.AddField(_T("adpc_email"), dfText, 128); 

}
void CAdBusinessPartnerContactInput::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPrimary.SetEvent(WE_CLICK, _OnPrimarySelectFnc);
	//m_wndTitle.SetEvent(WE_CHANGE, _OnTitleChangeFnc);
	//m_wndTitle.SetEvent(WE_SETFOCUS, _OnTitleSetfocusFnc);
	//m_wndTitle.SetEvent(WE_KILLFOCUS, _OnTitleKillfocusFnc);
	m_wndTitle.SetEvent(WE_CHECKVALUE, _OnTitleCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndEmail.SetEvent(WE_CHANGE, _OnEmailChangeFnc);
	//m_wndEmail.SetEvent(WE_SETFOCUS, _OnEmailSetfocusFnc);
	//m_wndEmail.SetEvent(WE_KILLFOCUS, _OnEmailKillfocusFnc);
	m_wndEmail.SetEvent(WE_CHECKVALUE, _OnEmailCheckValueFnc);
	//m_wndPosition.SetEvent(WE_CHANGE, _OnPositionChangeFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_CHECKVALUE, _OnPositionCheckValueFnc);
	SetEditCtrl(0, &m_wndPrimary);
	SetEditCtrl(1, &m_wndTitle);
	SetEditCtrl(2, &m_wndName);
	SetEditCtrl(3, &m_wndPosition);
	SetEditCtrl(4, &m_wndEmail);
	SetEditCtrl(5, &m_wndPhone);
	int nMode = GetMode();
	SetMode(nMode);
}
void CAdBusinessPartnerContactInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndPrimary.GetDlgCtrlID(), m_bPrimary);
	DDX_Text(pDX, m_wndTitle.GetDlgCtrlID(), m_szTitle);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);
	DDX_Text(pDX, m_wndPosition.GetDlgCtrlID(), m_szPosition);

}
void CAdBusinessPartnerContactInput::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiListCtrl *pList = (CGuiListCtrl*)GetParent();
	int nIndex = GetRowIndex();
	if (m_nEditMode == VM_EDIT)
	{
		m_szTitle = pList->GetItemText(nIndex, 1);
		m_szName = pList->GetItemText(nIndex, 2);
		m_szPosition = pList->GetItemText(nIndex, 3);
		m_szEmail = pList->GetItemText(nIndex, 4);
		m_szPhone = pList->GetItemText(nIndex, 5);
		if (pList->GetCheck(nIndex))
			m_bPrimary = true;
		else
			m_bPrimary = false;
	}
	SetMode(m_nEditMode);
}
void CAdBusinessPartnerContactInput::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ad_partner_contactTbl.SetValue(_T("adpc_createdby"), pMF->GetCurrentUser());
	m_ad_partner_contactTbl.SetValue(_T("adpc_createddate"), pMF->GetSysDateTime());
	m_ad_partner_contactTbl.SetValue(_T("adpc_updatedby"), pMF->GetCurrentUser());
	m_ad_partner_contactTbl.SetValue(_T("adpc_updateddate"), pMF->GetSysDateTime());
	m_ad_partner_contactTbl.SetValue(_T("adpc_position"), m_szPosition);
	m_ad_partner_contactTbl.SetValue(_T("adpc_title"), m_szTitle);
	m_ad_partner_contactTbl.SetValue(_T("adpc_name"), m_szName);
	m_ad_partner_contactTbl.SetValue(_T("adpc_tel"), m_szPhone);
	m_ad_partner_contactTbl.SetValue(_T("adpc_email"), m_szEmail);
	m_ad_partner_contactTbl.SetValue(_T("adpc_isprimary"), m_bPrimary?_T("Y"):_T("N"));
	m_ad_partner_contactTbl.SetValue(_T("adpc_partner_id"), m_szPartnerID);
}
void CAdBusinessPartnerContactInput::ApplyToList(){
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CGridListCtrl* pList = (CGridListCtrl*) GetParent();
	//int nSel = pList->GetCurSel();
	//if (m_bPrimary)
	//{
	//	for (int i = 0; i < pList->GetItemCount(); i++)
	//		pList->SetCheck(i, false);
	//	pList->SetCheck(nSel, true);
	//}
	//else
	//	pList->SetCheck(nSel, false);
	//pList->SetItemText(nSel, 1, m_szTitle);
	//pList->SetItemText(nSel, 2, m_szName);
	//pList->SetItemText(nSel, 3, m_szPosition);
	//pList->SetItemText(nSel, 4, m_szEmail);
	//pList->SetItemText(nSel, 5, m_szPhone);
	//pList->SetItemText(nSel, 6, m_szX);
}
void CAdBusinessPartnerContactInput::SetDefaultValues(){

	m_bPrimary=0;
	m_szTitle.Empty();
	m_szName.Empty();
	m_szPhone.Empty();
	m_szEmail.Empty();
	m_szPosition.Empty();
}

int CAdBusinessPartnerContactInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_wndTitle.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_wndTitle.SetFocus();
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
		m_wndPrimary.EnableWindow(true);	
 		UpdateData(FALSE);
 		return nOldMode;
}

void CAdBusinessPartnerContactInput::OnPrimarySelect(){
}

/*void CAdBusinessPartnerContactInput::OnTitleChange(){
	
} */
/*void CAdBusinessPartnerContactInput::OnTitleSetfocus(){
	
} */
/*void CAdBusinessPartnerContactInput::OnTitleKillfocus(){
	
} */
int CAdBusinessPartnerContactInput::OnTitleCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerContactInput::OnNameChange(){
	
} */
/*void CAdBusinessPartnerContactInput::OnNameSetfocus(){
	
} */
/*void CAdBusinessPartnerContactInput::OnNameKillfocus(){
	
} */
int CAdBusinessPartnerContactInput::OnNameCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerContactInput::OnPhoneChange(){
	
} */
/*void CAdBusinessPartnerContactInput::OnPhoneSetfocus(){
	
} */
/*void CAdBusinessPartnerContactInput::OnPhoneKillfocus(){
	
} */
int CAdBusinessPartnerContactInput::OnPhoneCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerContactInput::OnEmailChange(){
	
} */
/*void CAdBusinessPartnerContactInput::OnEmailSetfocus(){
	
} */
/*void CAdBusinessPartnerContactInput::OnEmailKillfocus(){
	
} */
int CAdBusinessPartnerContactInput::OnEmailCheckValue(){
	return 0;
}
 
/*void CAdBusinessPartnerContactInput::OnPositionChange(){
	
} */
/*void CAdBusinessPartnerContactInput::OnPositionSetfocus(){
	
} */
/*void CAdBusinessPartnerContactInput::OnPositionKillfocus(){
	
} */
int CAdBusinessPartnerContactInput::OnPositionCheckValue(){
	return 0;
} 
int CAdBusinessPartnerContactInput::OnAddAdBusinessPartnerContactInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdBusinessPartnerContactInput::OnEditAdBusinessPartnerContactInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBusinessPartnerContactInput::OnDeleteAdBusinessPartnerContactInput(){
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
 		OnCancelAdBusinessPartnerContactInput();
 	}
	return 0;
}
int CAdBusinessPartnerContactInput::OnOK(){
	return OnSaveAdBusinessPartnerContactInput();
}
void CAdBusinessPartnerContactInput::OnCancel(){
	CGuiListCtrl* pList = (CGuiListCtrl*) GetParent();
	pList->SetCurSel(GetRowIndex());
}
int CAdBusinessPartnerContactInput::OnSaveAdBusinessPartnerContactInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	if (m_bPrimary)
		szSQL.Format(_T("UPDATE ad_partner_contact SET adpc_isprimary = 'N' WHERE adpc_partner_id = '%s'"), m_szPartnerID);
	int ret = pMF->ExecSQL(szSQL);
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_partner_contactTbl.GetInsertSQL(_T("adpc_partner_contact_id"));
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpc_partner_contact_id = '%s'"), m_szID);
 		szSQL = m_ad_partner_contactTbl.GetUpdateSQL(_T("adpc_createdby,adpc_createddate, adpc_partner_contact_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		//ApplyToList();
		//((CAdBusinessPartnerContact*)m_pWnd)->OnListLoadData();
		((CAdBusinessPartnerContact*)GetParent()->GetParent())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdBusinessPartnerContactInput::OnCancelAdBusinessPartnerContactInput(){
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
 
int CAdBusinessPartnerContactInput::OnAdBusinessPartnerContactInputListLoadData(){
	return 0;
}

