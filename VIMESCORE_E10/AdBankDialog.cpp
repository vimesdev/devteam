#include "AdBankDialog.h"
#include "MainFrame_E10.h"
#include "AdBankList.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdBankDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBankDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdBankDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBankDialog *pVw = (CAdBankDialog *)pWnd;
	pVw->OnSaveSelect();
}

static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBankDialog *pVw = (CAdBankDialog *)pWnd;
	pVw->OnCloseSelect();
}

/*static void _OnEnglishNameChangeFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnEnglishNameChange();
} */
/*static void _OnEnglishNameSetfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnEnglishNameSetfocus();} */ 
/*static void _OnEnglishNameKillfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnEnglishNameKillfocus();
} */
static int _OnEnglishNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBankDialog *)pWnd)->OnEnglishNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdBankDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdBankDialog *)pWnd)->OnAddressCheckValue();
} 
static int _OnAddAdBankDialogFnc(CWnd *pWnd){
	 return ((CAdBankDialog*)pWnd)->OnAddAdBankDialog();
} 
static int _OnEditAdBankDialogFnc(CWnd *pWnd){
	 return ((CAdBankDialog*)pWnd)->OnEditAdBankDialog();
} 
static int _OnDeleteAdBankDialogFnc(CWnd *pWnd){
	 return ((CAdBankDialog*)pWnd)->OnDeleteAdBankDialog();
} 
static int _OnSaveAdBankDialogFnc(CWnd *pWnd){
	 return ((CAdBankDialog*)pWnd)->OnSaveAdBankDialog();
} 
static int _OnCancelAdBankDialogFnc(CWnd *pWnd){
	 return ((CAdBankDialog*)pWnd)->OnCancelAdBankDialog();
} 
CAdBankDialog::CAdBankDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 790;
	m_nDlgHeight = 140;
	SetDefaultValues();
	m_pParent = pParent;
}

CAdBankDialog::~CAdBankDialog(){
}
void CAdBankDialog::OnCreateComponents(){
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 120, 55);
	m_wndID.Create(this,125, 30, 324, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 120, 85);
	m_wndName.Create(this,125, 60, 525, 85); 
	m_wndEnglishNameLabel.Create(this, _T("English Name"), 10, 90, 120, 115);
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 650, 150);
	m_wndEnglishName.Create(this,125, 90, 525, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 120, 145);
	m_wndAddress.Create(this,125, 120, 525, 145); 
	m_wndImage.Create(this, 530, 30, 645, 145);
	m_wndActive.Create(this, _T("Active"), 10, 155, 120, 180);
	m_wndSave.Create(this, _T("&Save"), 485, 155, 565, 180);
	m_wndClose.Create(this, _T("&Close"), 570, 155, 650, 180);
}
void CAdBankDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndID.SetTextUpper();
	//m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	m_wndEnglishName.SetLimitText(254);
	m_wndEnglishName.SetCheckValue(true);
	m_wndEnglishName.SetInitCap(2);
	m_wndAddress.SetLimitText(254);
	//m_wndAddress.SetCheckValue(true);

	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	
	m_ad_bankTbl.SetTableName(_T("ad_bank"));
	m_ad_bankTbl.AddField(_T("adb_CREATEDBY"), dfText, 15);
	m_ad_bankTbl.AddField(_T("adb_CREATEDDATE"), dfDateTime);
	m_ad_bankTbl.AddField(_T("adb_UPDATEDBY"), dfText, 15);
	m_ad_bankTbl.AddField(_T("adb_UPDATEDDATE"), dfDateTime);
	m_ad_bankTbl.AddField(_T("adb_bank_id"), dfText, 15);
	m_ad_bankTbl.AddField(_T("adb_NAME"), dfText, 254);
	m_ad_bankTbl.AddField(_T("adb_ENNAME"), dfText, 254);
	m_ad_bankTbl.AddField(_T("adb_ADDRESS"), dfText, 254);
	m_ad_bankTbl.AddField(_T("adb_ICON"), dfText, 254);
	m_ad_bankTbl.AddField(_T("adb_ISACTIVE"), dfText, 1);
}
void CAdBankDialog::OnSetWindowEvents(){
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
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndEnglishName.SetEvent(WE_CHANGE, _OnEnglishNameChangeFnc);
	//m_wndEnglishName.SetEvent(WE_SETFOCUS, _OnEnglishNameSetfocusFnc);
	//m_wndEnglishName.SetEvent(WE_KILLFOCUS, _OnEnglishNameKillfocusFnc);
	m_wndEnglishName.SetEvent(WE_CHECKVALUE, _OnEnglishNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if(nMode == VM_EDIT){
		GetDataToScreen();
	}
	CString szPath;
	szPath.Format(_T("DATA/%s"), m_szPath);
	m_wndImage.SetFileName(szPath);

}
void CAdBankDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndEnglishName.GetDlgCtrlID(), m_szEnglishName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);

}
void CAdBankDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_bank WHERE adb_bank_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adb_name"), m_szName);
		rs.GetValue(_T("adb_isactive"), szActive);
		rs.GetValue(_T("adb_enname"), m_szEnglishName);
		rs.GetValue(_T("adb_address"), m_szAddress);
		rs.GetValue(_T("adb_icon"), m_szPath);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(FALSE);
	}

}
void CAdBankDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_bankTbl.SetValue(_T("adb_createdby"), pMF->GetCurrentUser());
	m_ad_bankTbl.SetValue(_T("adb_updatedby"), pMF->GetCurrentUser());
	//if(GetMode() == VM_EDIT){
	//	CString szWhere;
	//	szWhere.Format(_T(" WHERE adb_bank_id='%s' "), m_szID);
	//	m_ad_bankTbl.Open(&pMF->m_db, szWhere);
	//}
	m_ad_bankTbl.SetValue(_T("adb_createddate"), pMF->GetSysDateTime());
	m_ad_bankTbl.SetValue(_T("adb_updateddate"), pMF->GetSysDateTime());
	m_ad_bankTbl.SetValue(_T("adb_bank_id"), m_szID);
	m_ad_bankTbl.SetValue(_T("adb_name"), m_szName);
	m_ad_bankTbl.SetValue(_T("adb_enname"), m_szEnglishName);
	m_ad_bankTbl.SetValue(_T("adb_address"), m_szAddress);
	tmpStr.Format(_T("%s.jpg"), m_szID);
	m_ad_bankTbl.SetValue(_T("adb_icon"), tmpStr);
	m_ad_bankTbl.SetValue(_T("adb_isactive"), m_bActive?_T("Y"):_T("N"));

}
void CAdBankDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=TRUE;
	m_szEnglishName.Empty();
	m_szAddress.Empty();
	m_szPath.Empty();

}
int CAdBankDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}
/*void CAdBankDialog::OnIDChange(){
	
} */
/*void CAdBankDialog::OnIDSetfocus(){
	
} */
/*void CAdBankDialog::OnIDKillfocus(){
	
} */
int CAdBankDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_bank WHERE adb_bank_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
} 
/*void CAdBankDialog::OnNameChange(){
	
} */
/*void CAdBankDialog::OnNameSetfocus(){
	
} */
/*void CAdBankDialog::OnNameKillfocus(){
	
} */
int CAdBankDialog::OnNameCheckValue(){
	return 0;
} 
void CAdBankDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdBankDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdBankDialog();
}

void CAdBankDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

/*void CAdBankDialog::OnEnglishNameChange(){
	
} */
/*void CAdBankDialog::OnEnglishNameSetfocus(){
	
} */
/*void CAdBankDialog::OnEnglishNameKillfocus(){
	
} */
int CAdBankDialog::OnEnglishNameCheckValue(){
	return 0;
} 
/*void CAdBankDialog::OnAddressChange(){
	
} */
/*void CAdBankDialog::OnAddressSetfocus(){
	
} */
/*void CAdBankDialog::OnAddressKillfocus(){
	
} */
int CAdBankDialog::OnAddressCheckValue(){
	return 0;
} 
int CAdBankDialog::OnAddAdBankDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdBankDialog::OnEditAdBankDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBankDialog::OnDeleteAdBankDialog(){
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
 		OnCancelAdBankDialog(); 
 	}
	return 0;
}
int CAdBankDialog::OnSaveAdBankDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 

 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_bankTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adb_bank_id='%s' "), m_szID); 
 		szSQL = m_ad_bankTbl.GetUpdateSQL(_T("adb_bank_id")); 
 		szSQL += szWhere; 
 	}
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnCancel();
		else
			SetMode(VM_ADD);
		((CAdBankList*)m_pParent)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CAdBankDialog::OnCancelAdBankDialog(){
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
int CAdBankDialog::OnAdBankDialogListLoadData(){
	return 0;
}
