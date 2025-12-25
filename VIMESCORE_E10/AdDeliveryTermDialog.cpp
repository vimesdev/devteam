#include "AdDeliveryTermDialog.h"
#include "MainFrame_E10.h"
#include "AdDeliveryTerm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryTermDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryTermDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryTermDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdDeliveryTermDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdDeliveryTermDialog *pVw = (CAdDeliveryTermDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdDeliveryTermDialog *pVw = (CAdDeliveryTermDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdDeliveryTermDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryTermDialog*)pWnd)->OnAddAdDeliveryTermDialog();
} 
static int _OnEditAdDeliveryTermDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryTermDialog*)pWnd)->OnEditAdDeliveryTermDialog();
} 
static int _OnDeleteAdDeliveryTermDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryTermDialog*)pWnd)->OnDeleteAdDeliveryTermDialog();
} 
static int _OnSaveAdDeliveryTermDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryTermDialog*)pWnd)->OnSaveAdDeliveryTermDialog();
} 
static int _OnCancelAdDeliveryTermDialogFnc(CWnd *pWnd){
	 return ((CAdDeliveryTermDialog*)pWnd)->OnCancelAdDeliveryTermDialog();
} 
CAdDeliveryTermDialog::CAdDeliveryTermDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	SetDefaultValues();
}
CAdDeliveryTermDialog::~CAdDeliveryTermDialog(){
}
void CAdDeliveryTermDialog::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 465, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 195, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 460, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 90, 120);
	m_wndSave.Create(this, _T("&Save"), 300, 95, 380, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 385, 95, 465, 120);

}
void CAdDeliveryTermDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_delivery_termTbl.SetTableName(_T("ad_delivery_term"));
	m_ad_delivery_termTbl.AddField(_T("ADDT_CREATEDBY"), dfText, 15); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_CREATEDDATE"), dfDateTime); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_UPDATEDBY"), dfText, 15); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_UPDATEDDATE"), dfDateTime); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_DELIVERY_TERM_ID"), dfText, 32); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_DESCRIPTION"), dfText, 254); 
	m_ad_delivery_termTbl.AddField(_T("ADDT_ISACTIVE"), dfText, 1); 
}

void CAdDeliveryTermDialog::OnSetWindowEvents(){
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
void CAdDeliveryTermDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdDeliveryTermDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT addt_description as descr, addt_isactive as active FROM ad_delivery_term WHERE addt_delivery_term_id = '%s' ORDER BY addt_delivery_term_id"), m_szID);
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

void CAdDeliveryTermDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_delivery_termTbl.SetValue(_T("addt_createdby"), pMF->GetCurrentUser());
	m_ad_delivery_termTbl.SetValue(_T("addt_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE addt_delivery_term_id='%s' "), m_szID);
		m_ad_delivery_termTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_delivery_termTbl.SetValue(_T("addt_createddate"), pMF->GetSysDateTime());
	m_ad_delivery_termTbl.SetValue(_T("addt_updateddate"), pMF->GetSysDateTime());
	m_ad_delivery_termTbl.SetValue(_T("addt_delivery_term_id"), m_szID);
	m_ad_delivery_termTbl.SetValue(_T("addt_description"), m_szDescription);
	m_ad_delivery_termTbl.SetValue(_T("addt_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdDeliveryTermDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdDeliveryTermDialog::SetMode(int nMode){
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

/*void CAdDeliveryTermDialog::OnIDChange(){
	
} */
/*void CAdDeliveryTermDialog::OnIDSetfocus(){
	
} */
/*void CAdDeliveryTermDialog::OnIDKillfocus(){
	
} */
int CAdDeliveryTermDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_delivery_term WHERE addt_delivery_term_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdDeliveryTermDialog::OnDescriptionChange(){
	
} */
/*void CAdDeliveryTermDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdDeliveryTermDialog::OnDescriptionKillfocus(){
	
} */
int CAdDeliveryTermDialog::OnDescriptionCheckValue(){
	return 0;
}
 
void CAdDeliveryTermDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdDeliveryTermDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdDeliveryTermDialog();
}
 
void CAdDeliveryTermDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdDeliveryTermDialog::OnAddAdDeliveryTermDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdDeliveryTermDialog::OnEditAdDeliveryTermDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdDeliveryTermDialog::OnDeleteAdDeliveryTermDialog(){
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
 		OnCancelAdDeliveryTermDialog(); 
 	}
	return 0;
}

int CAdDeliveryTermDialog::OnSaveAdDeliveryTermDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_delivery_termTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE addt_delivery_term_id = '%s'"), m_szID); 
 		szSQL = m_ad_delivery_termTbl.GetUpdateSQL(_T("addt_createdby,addt_createddate, addt_delivery_term_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnOK();
		else
			SetMode(VM_ADD);
		((CAdDeliveryTerm*)m_pParentWnd)->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdDeliveryTermDialog::OnCancelAdDeliveryTermDialog(){
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
 
int CAdDeliveryTermDialog::OnAdDeliveryTermDialogListLoadData(){
	return 0;
}

