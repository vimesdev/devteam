#include "AdDeliveryMethodDialog.h"
#include "MainFrame_E10.h"
#include "AdDeliveryMethod.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnIDKillfocus();
} */ 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryMethodDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethodDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryMethodDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdDeliveryMethodDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdDeliveryMethodDialog *pVw = (CAdDeliveryMethodDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdDeliveryMethodDialog *pVw = (CAdDeliveryMethodDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdDeliveryMethodDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethodDialog*)pWnd)->OnAddAdDeliveryMethodDialog();
} 
static int _OnEditAdDeliveryMethodDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethodDialog*)pWnd)->OnEditAdDeliveryMethodDialog();
} 
static int _OnDeleteAdDeliveryMethodDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethodDialog*)pWnd)->OnDeleteAdDeliveryMethodDialog();
} 
static int _OnSaveAdDeliveryMethodDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethodDialog*)pWnd)->OnSaveAdDeliveryMethodDialog();
} 
static int _OnCancelAdDeliveryMethodDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethodDialog*)pWnd)->OnCancelAdDeliveryMethodDialog();
} 
CAdDeliveryMethodDialog::CAdDeliveryMethodDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	m_pParentWnd = pParent;
	SetDefaultValues();
}
CAdDeliveryMethodDialog::~CAdDeliveryMethodDialog(){
}
void CAdDeliveryMethodDialog::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 465, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 195, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 460, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 90, 120);
	m_wndSave.Create(this, _T("&Save"), 300, 95, 380, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 385, 95, 465, 120);

}
void CAdDeliveryMethodDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_delivery_methodTbl.SetTableName(_T("ad_delivery_method"));
	m_ad_delivery_methodTbl.AddField(_T("ADDM_CREATEDBY"), dfText, 15); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_CREATEDDATE"), dfDateTime); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_UPDATEDBY"), dfText, 15); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_UPDATEDDATE"), dfDateTime); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_DELIVERY_METHOD_ID"), dfText, 32); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_DESCRIPTION"), dfText, 254); 
	m_ad_delivery_methodTbl.AddField(_T("ADDM_ISACTIVE"), dfText, 1); 
}

void CAdDeliveryMethodDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(m_nMode);
	if (m_nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdDeliveryMethodDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdDeliveryMethodDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT addm_description as descr, addm_isactive as active FROM ad_delivery_method WHERE addm_delivery_method_id = '%s' ORDER BY addm_delivery_method_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("descr"), m_szDescription);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdDeliveryMethodDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_delivery_methodTbl.SetValue(_T("addm_createdby"), pMF->GetCurrentUser());
	m_ad_delivery_methodTbl.SetValue(_T("addm_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE addm_delivery_method_id='%s' "), m_szID);
		m_ad_delivery_methodTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_delivery_methodTbl.SetValue(_T("addm_createddate"), pMF->GetSysDateTime());
	m_ad_delivery_methodTbl.SetValue(_T("addm_updateddate"), pMF->GetSysDateTime());
	m_ad_delivery_methodTbl.SetValue(_T("addm_delivery_method_id"), m_szID);
	m_ad_delivery_methodTbl.SetValue(_T("addm_description"), m_szDescription);
	m_ad_delivery_methodTbl.SetValue(_T("addm_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdDeliveryMethodDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdDeliveryMethodDialog::SetMode(int nMode){
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
			m_wndDescription.SetFocus();
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

/*void CAdDeliveryMethodDialog::OnIDChange(){
	
} */
/*void CAdDeliveryMethodDialog::OnIDSetfocus(){
	
} */
/*void CAdDeliveryMethodDialog::OnIDKillfocus(){
	
} */
int CAdDeliveryMethodDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_delivery_method WHERE addm_delivery_method_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdDeliveryMethodDialog::OnDescriptionChange(){
	
} */
/*void CAdDeliveryMethodDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdDeliveryMethodDialog::OnDescriptionKillfocus(){
	
} */
int CAdDeliveryMethodDialog::OnDescriptionCheckValue(){
	return 0;
}
 
	void CAdDeliveryMethodDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdDeliveryMethodDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdDeliveryMethodDialog();
}
 
void CAdDeliveryMethodDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdDeliveryMethodDialog::OnAddAdDeliveryMethodDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdDeliveryMethodDialog::OnEditAdDeliveryMethodDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdDeliveryMethodDialog::OnDeleteAdDeliveryMethodDialog(){
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
 		OnCancelAdDeliveryMethodDialog(); 
 	}
	return 0;
}

int CAdDeliveryMethodDialog::OnSaveAdDeliveryMethodDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_delivery_methodTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE addm_delivery_method_id = '%s'"), m_szID); 
 		szSQL = m_ad_delivery_methodTbl.GetUpdateSQL(_T("addm_createdby,addm_createddate, addm_delivery_method_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnOK();
		else
			SetMode(VM_ADD);
		((CAdDeliveryMethod*)m_pParentWnd)->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdDeliveryMethodDialog::OnCancelAdDeliveryMethodDialog(){
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
 
int CAdDeliveryMethodDialog::OnAdDeliveryMethodDialogListLoadData(){
	return 0;
}

