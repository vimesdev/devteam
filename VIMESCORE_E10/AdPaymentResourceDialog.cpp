#include "AdPaymentResourceDialog.h"
#include "MainFrame_E10.h"
#include "AdPaymentResource.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdPaymentResourceDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdPaymentResourceDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdPaymentResourceDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentResourceDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPaymentResourceDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPaymentResourceDialog *pVw = (CAdPaymentResourceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdPaymentResourceDialog *pVw = (CAdPaymentResourceDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdPaymentResourceDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentResourceDialog*)pWnd)->OnAddAdPaymentResourceDialog();
} 
static int _OnEditAdPaymentResourceDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentResourceDialog*)pWnd)->OnEditAdPaymentResourceDialog();
} 
static int _OnDeleteAdPaymentResourceDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentResourceDialog*)pWnd)->OnDeleteAdPaymentResourceDialog();
} 
static int _OnSaveAdPaymentResourceDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentResourceDialog*)pWnd)->OnSaveAdPaymentResourceDialog();
} 
static int _OnCancelAdPaymentResourceDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentResourceDialog*)pWnd)->OnCancelAdPaymentResourceDialog();
} 
CAdPaymentResourceDialog::CAdPaymentResourceDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdPaymentResourceDialog::~CAdPaymentResourceDialog(){
}
void CAdPaymentResourceDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 335, 55); 
	m_wndActive.Create(this, _T("&Active"), 10, 65, 90, 90);
	m_wndSave.Create(this, _T("&Save"), 180, 65, 255, 90);
	m_wndDiscard.Create(this, _T("&Discard"), 260, 65, 340, 90);
	m_wndGroupList.Create(this, _T("Payment Resource List"), 5, 5, 340, 60);

}
void CAdPaymentResourceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);

	m_payment_resourceTbl.SetTableName(_T("ad_payment_resource"));
	m_payment_resourceTbl.AddField(_T("adpr_payment_resource_id"), dfText, 4);
	m_payment_resourceTbl.AddField(_T("adpr_org_id"), dfText, 32);
	m_payment_resourceTbl.AddField(_T("adpr_description"), dfText, 35);
	m_payment_resourceTbl.AddField(_T("adpr_isactive"), dfText, 1);
}

void CAdPaymentResourceDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
	SetMode(GetMode());
}
void CAdPaymentResourceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPaymentResourceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_payment_resource WHERE adpr_payment_resource_id = %d"), m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adpr_description"), m_szName);
		CString szActive;
		rs.GetValue(_T("adpr_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
	}

}

void CAdPaymentResourceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_payment_resourceTbl.SetValue(_T("adpr_org_id"), pMF->GetModuleID());
	m_payment_resourceTbl.SetValue(_T("adpr_description"), m_szName);
	m_payment_resourceTbl.SetValue(_T("adpr_isactive"), m_bActive?_T("Y"):_T("N"));
}

void CAdPaymentResourceDialog::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_bActive = true;
}

int CAdPaymentResourceDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
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

/*void CAdPaymentResourceDialog::OnNameChange(){
	
} */
/*void CAdPaymentResourceDialog::OnNameSetfocus(){
	
} */
/*void CAdPaymentResourceDialog::OnNameKillfocus(){
	
} */
int CAdPaymentResourceDialog::OnNameCheckValue(){
	return 0;
}
 
void CAdPaymentResourceDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdPaymentResourceDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPaymentResourceDialog();
}
 
void CAdPaymentResourceDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
int CAdPaymentResourceDialog::OnAddAdPaymentResourceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdPaymentResourceDialog::OnEditAdPaymentResourceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPaymentResourceDialog::OnDeleteAdPaymentResourceDialog(){
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
 		OnCancelAdPaymentResourceDialog();
 	}
	return 0;
}

int CAdPaymentResourceDialog::OnSaveAdPaymentResourceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	int nSourceID = 0;
	szSQL.Format(_T("SELECT coalesce(max(to_number(adpr_payment_resource_id)), 0) + 1 sourceid FROM ad_payment_resource"));
	rs.ExecSQL(szSQL);
	nSourceID = rs.GetIntValue();
 	if(GetMode() == VM_ADD){
		m_payment_resourceTbl.SetValue(_T("adpr_payment_resource_id"), nSourceID);
		szSQL = m_payment_resourceTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpr_payment_resource_id = %d"), m_nID);
 		szSQL = m_payment_resourceTbl.GetUpdateSQL(_T("adpr_createdby,adpr_createddate, adpr_payment_resource_id"));
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
		((CAdPaymentResource*)m_pParentWnd)->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdPaymentResourceDialog::OnCancelAdPaymentResourceDialog(){
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
 
int CAdPaymentResourceDialog::OnAdPaymentResourceDialogListLoadData(){
	return 0;
}

