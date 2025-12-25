#include "AdPartnerCategoryDialog.h"
#include "MainFrame_E10.h"
#include "AdPartnerCategory.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerCategoryDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdPartnerCategoryDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerCategoryDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPartnerCategoryDialog *pVw = (CAdPartnerCategoryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPartnerCategoryDialog*)pWnd)->OnActiveSelect();
}
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdPartnerCategoryDialog *pVw = (CAdPartnerCategoryDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdPartnerCategoryDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerCategoryDialog*)pWnd)->OnAddAdPartnerCategoryDialog();
} 
static int _OnEditAdPartnerCategoryDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerCategoryDialog*)pWnd)->OnEditAdPartnerCategoryDialog();
} 
static int _OnDeleteAdPartnerCategoryDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerCategoryDialog*)pWnd)->OnDeleteAdPartnerCategoryDialog();
} 
static int _OnSaveAdPartnerCategoryDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerCategoryDialog*)pWnd)->OnSaveAdPartnerCategoryDialog();
} 
static int _OnCancelAdPartnerCategoryDialogFnc(CWnd *pWnd){
	 return ((CAdPartnerCategoryDialog*)pWnd)->OnCancelAdPartnerCategoryDialog();
} 
CAdPartnerCategoryDialog::CAdPartnerCategoryDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	SetDefaultValues();
}
CAdPartnerCategoryDialog::~CAdPartnerCategoryDialog(){
}
void CAdPartnerCategoryDialog::OnCreateComponents(){
	m_wndCountryInformations.Create(this, _T("Country Information"), 5, 5, 350, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 175, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 345, 85); 
	m_wndSave.Create(this, _T("&Save"), 190, 95, 265, 120);
	m_wndActive.Create(this, _T("&Active"), 10, 95, 90, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 270, 95, 350, 120);

}
void CAdPartnerCategoryDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(3);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_ad_partner_categoryTbl.SetTableName(_T("ad_partner_category"));
	m_ad_partner_categoryTbl.AddField(_T("adpc_partner_category_id"), dfText, 3);
	m_ad_partner_categoryTbl.AddField(_T("adpc_description"), dfText, 254);
	m_ad_partner_categoryTbl.AddField(_T("adpc_isactive"), dfText, 1);

}

void CAdPartnerCategoryDialog::OnSetWindowEvents(){
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
void CAdPartnerCategoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPartnerCategoryDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_partner_category WHERE adpc_partner_category_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString szActive;
		rs.GetValue(_T("adpc_description"), m_szName);
		rs.GetValue(_T("adpc_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
	}

}

void CAdPartnerCategoryDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_partner_categoryTbl.SetValue(_T("adpc_partner_category_id"), m_szID);
	m_ad_partner_categoryTbl.SetValue(_T("adpc_description"), m_szName);
	m_ad_partner_categoryTbl.SetValue(_T("adpc_isactive"), m_bActive?_T("Y"):_T("N"));
}

void CAdPartnerCategoryDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive = true;

}

int CAdPartnerCategoryDialog::SetMode(int nMode){
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

/*void CAdPartnerCategoryDialog::OnIDChange(){
	
} */
/*void CAdPartnerCategoryDialog::OnIDSetfocus(){
	
} */
/*void CAdPartnerCategoryDialog::OnIDKillfocus(){
	
} */
int CAdPartnerCategoryDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner_category WHERE adpc_partner_category_id=upper('%s') "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdPartnerCategoryDialog::OnNameChange(){
	
} */
/*void CAdPartnerCategoryDialog::OnNameSetfocus(){
	
} */
/*void CAdPartnerCategoryDialog::OnNameKillfocus(){
	
} */
int CAdPartnerCategoryDialog::OnNameCheckValue(){
	return 0;
}
 
void CAdPartnerCategoryDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPartnerCategoryDialog();
}
 
void CAdPartnerCategoryDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdPartnerCategoryDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdPartnerCategoryDialog::OnAddAdPartnerCategoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdPartnerCategoryDialog::OnEditAdPartnerCategoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPartnerCategoryDialog::OnDeleteAdPartnerCategoryDialog(){
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
 		OnCancelAdPartnerCategoryDialog();
 	}
	return 0;
}

int CAdPartnerCategoryDialog::OnSaveAdPartnerCategoryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_partner_categoryTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpc_partner_category_id = '%s'"), m_szID);
 		szSQL = m_ad_partner_categoryTbl.GetUpdateSQL(_T("adpc_createdby, adpc_createddate"));
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
		((CAdPartnerCategory*)m_pParentWnd)->OnListLoadData();		
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdPartnerCategoryDialog::OnCancelAdPartnerCategoryDialog(){
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
 
int CAdPartnerCategoryDialog::OnAdPartnerCategoryDialogListLoadData(){
	return 0;
}

