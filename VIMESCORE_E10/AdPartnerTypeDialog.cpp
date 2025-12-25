#include "AdPartnerTypeDialog.h"
#include "MainFrame_E10.h"
#include "AdPartnerType.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerTypeDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdPartnerTypeDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerTypeDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPartnerTypeDialog *pVw = (CAdPartnerTypeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPartnerTypeDialog*)pWnd)->OnActiveSelect();
}
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdPartnerTypeDialog *pVw = (CAdPartnerTypeDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdPartnerTypeDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerTypeDialog*)pWnd)->OnAddAdPartnerTypeDialog();
} 
static int _OnEditAdPartnerTypeDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerTypeDialog*)pWnd)->OnEditAdPartnerTypeDialog();
} 
static int _OnDeleteAdPartnerTypeDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerTypeDialog*)pWnd)->OnDeleteAdPartnerTypeDialog();
} 
static int _OnSaveAdPartnerTypeDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerTypeDialog*)pWnd)->OnSaveAdPartnerTypeDialog();
} 
static int _OnCancelAdPartnerTypeDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerTypeDialog*)pWnd)->OnCancelAdPartnerTypeDialog();
} 
CAdPartnerTypeDialog::CAdPartnerTypeDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	SetDefaultValues();
}
CAdPartnerTypeDialog::~CAdPartnerTypeDialog(){
}
void CAdPartnerTypeDialog::OnCreateComponents(){
	m_wndCountryInformations.Create(this, _T("Country Information"), 5, 5, 350, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 175, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 345, 85); 
	m_wndSave.Create(this, _T("&Save"), 190, 95, 265, 120);
	m_wndActive.Create(this, _T("&Active"), 10, 95, 90, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 270, 95, 350, 120);

}
void CAdPartnerTypeDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(3);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_ad_partner_typeTbl.SetTableName(_T("ad_partner_type"));
	m_ad_partner_typeTbl.AddField(_T("adpt_partner_type_id"), dfText, 3);
	m_ad_partner_typeTbl.AddField(_T("adpt_description"), dfText, 254);
	m_ad_partner_typeTbl.AddField(_T("adpt_isactive"), dfText, 1);

}

void CAdPartnerTypeDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	if (m_nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(m_nMode);

}
void CAdPartnerTypeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPartnerTypeDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_partner_type WHERE adpt_partner_type_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString szActive;
		rs.GetValue(_T("adpt_description"), m_szName);
		rs.GetValue(_T("adpt_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
	}

}

void CAdPartnerTypeDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_partner_typeTbl.SetValue(_T("adpt_partner_type_id"), m_szID);
	m_ad_partner_typeTbl.SetValue(_T("adpt_description"), m_szName);
	m_ad_partner_typeTbl.SetValue(_T("adpt_isactive"), m_bActive?_T("Y"):_T("N"));
}

void CAdPartnerTypeDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive = true;

}

int CAdPartnerTypeDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
			m_wndID.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(false);
			m_wndName.SetFocus();
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
		m_wndSave.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CAdPartnerTypeDialog::OnIDChange(){
	
} */
/*void CAdPartnerTypeDialog::OnIDSetfocus(){
	
} */
/*void CAdPartnerTypeDialog::OnIDKillfocus(){
	
} */
int CAdPartnerTypeDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner_type WHERE adpt_partner_type_id=upper('%s') "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdPartnerTypeDialog::OnNameChange(){
	
} */
/*void CAdPartnerTypeDialog::OnNameSetfocus(){
	
} */
/*void CAdPartnerTypeDialog::OnNameKillfocus(){
	
} */
int CAdPartnerTypeDialog::OnNameCheckValue(){
	return 0;
}
 
void CAdPartnerTypeDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPartnerTypeDialog();
}
 
void CAdPartnerTypeDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdPartnerTypeDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdPartnerTypeDialog::OnAddAdPartnerTypeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdPartnerTypeDialog::OnEditAdPartnerTypeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPartnerTypeDialog::OnDeleteAdPartnerTypeDialog(){
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
 		OnCancelAdPartnerTypeDialog();
 	}
	return 0;
}

int CAdPartnerTypeDialog::OnSaveAdPartnerTypeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_partner_typeTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpt_partner_type_id = '%s'"), m_szID);
 		szSQL = m_ad_partner_typeTbl.GetUpdateSQL(_T("adpt_createdby, adpt_createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiDialog::OnOK();
		((CAdPartnerType*)m_pParentWnd)->OnListLoadData();		
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdPartnerTypeDialog::OnCancelAdPartnerTypeDialog(){
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
 
int CAdPartnerTypeDialog::OnAdPartnerTypeDialogListLoadData(){
	return 0;
}

