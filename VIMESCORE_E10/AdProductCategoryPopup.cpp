#include "AdProductCategoryPopup.h"
#include "MainFrame_E10.h"
#include "AdProductCategory.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdProductCategoryPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdProductCategoryPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdProductCategoryPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdProductCategoryPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductCategoryPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdProductCategoryPopup *pVw = (CAdProductCategoryPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdProductCategoryPopupFnc(CWnd *pWnd){
	 return ((CAdProductCategoryPopup*)pWnd)->OnAddAdProductCategoryPopup();
} 
static int _OnEditAdProductCategoryPopupFnc(CWnd *pWnd){
	 return ((CAdProductCategoryPopup*)pWnd)->OnEditAdProductCategoryPopup();
} 
static int _OnDeleteAdProductCategoryPopupFnc(CWnd *pWnd){
	 return ((CAdProductCategoryPopup*)pWnd)->OnDeleteAdProductCategoryPopup();
} 
static int _OnSaveAdProductCategoryPopupFnc(CWnd *pWnd){
	 return ((CAdProductCategoryPopup*)pWnd)->OnSaveAdProductCategoryPopup();
} 
static int _OnCancelAdProductCategoryPopupFnc(CWnd *pWnd){
	 return ((CAdProductCategoryPopup*)pWnd)->OnCancelAdProductCategoryPopup();
} 
CAdProductCategoryPopup::CAdProductCategoryPopup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 80;
	SetDefaultValues();
}
CAdProductCategoryPopup::~CAdProductCategoryPopup(){
}
void CAdProductCategoryPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 80);
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 210, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 215, 25, 295, 50);
	m_wndName.Create(this,300, 25, 710, 50); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 55, 85, 80);
	m_wndDescription.Create(this,90, 55, 710, 80); 
	m_wndActive.Create(this, _T("Active"), 715, 25, 795, 50);
	m_wndSave.Create(this, _T("&Save"), 715, 55, 795, 80);

}
void CAdProductCategoryPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	//m_wndName.SetInitCap(1);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetInitCap(2);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_product_categoryTbl.SetTableName(_T("ad_product_category"));
	m_ad_product_categoryTbl.AddField(_T("ADPC_CREATEDBY"), dfText, 15); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_CREATEDDATE"), dfDateTime); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_UPDATEDBY"), dfText, 15); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_UPDATEDDATE"), dfDateTime); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_PRODUCT_CATEGORY_ID"), dfText, 32); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_NAME"), dfText, 254); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_DESCRIPTION"), dfText, 254); 
	m_ad_product_categoryTbl.AddField(_T("ADPC_ISACTIVE"), dfText, 1); 
}

void CAdProductCategoryPopup::OnSetWindowEvents(){
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
void CAdProductCategoryPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdProductCategoryPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adpc_name as name, adpc_description as descr, adpc_isactive as active FROM ad_product_category WHERE adpc_product_category_id = '%s' ORDER BY adpc_product_category_id"), m_szID);
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

void CAdProductCategoryPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_product_categoryTbl.SetValue(_T("adpc_createdby"), pMF->GetCurrentUser());
	m_ad_product_categoryTbl.SetValue(_T("adpc_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adpc_product_category_id='%s' "), m_szID);
		m_ad_product_categoryTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_product_categoryTbl.SetValue(_T("adpc_createddate"), pMF->GetSysDateTime());
	m_ad_product_categoryTbl.SetValue(_T("adpc_updateddate"), pMF->GetSysDateTime());
	m_ad_product_categoryTbl.SetValue(_T("adpc_product_category_id"), m_szID);
	m_ad_product_categoryTbl.SetValue(_T("adpc_name"), m_szName);
	m_ad_product_categoryTbl.SetValue(_T("adpc_description"), m_szDescription);
	m_ad_product_categoryTbl.SetValue(_T("adpc_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdProductCategoryPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdProductCategoryPopup::SetMode(int nMode){
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

/*void CAdProductCategoryPopup::OnIDChange(){
	
} */
/*void CAdProductCategoryPopup::OnIDSetfocus(){
	
} */
/*void CAdProductCategoryPopup::OnIDKillfocus(){
	
} */
int CAdProductCategoryPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_product_category WHERE adpc_product_category_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdProductCategoryPopup::OnNameChange(){
	
} */
/*void CAdProductCategoryPopup::OnNameSetfocus(){
	
} */
/*void CAdProductCategoryPopup::OnNameKillfocus(){
	
} */
int CAdProductCategoryPopup::OnNameCheckValue(){
	return 0;
}
 
/*void CAdProductCategoryPopup::OnDescriptionChange(){
	
} */
/*void CAdProductCategoryPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdProductCategoryPopup::OnDescriptionKillfocus(){
	
} */
int CAdProductCategoryPopup::OnDescriptionCheckValue(){
	return 0;
}
 
	void CAdProductCategoryPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdProductCategoryPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdProductCategoryPopup();
}
 
int CAdProductCategoryPopup::OnAddAdProductCategoryPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdProductCategoryPopup::OnEditAdProductCategoryPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProductCategoryPopup::OnDeleteAdProductCategoryPopup(){
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
 		OnCancelAdProductCategoryPopup(); 
 	}
	return 0;
}

int CAdProductCategoryPopup::OnSaveAdProductCategoryPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_product_categoryTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE adpc_product_category_id = '%s'"), m_szID); 
 		szSQL = m_ad_product_categoryTbl.GetUpdateSQL(_T("adpc_createdby,adpc_createddate,adpc_product_category_id")); 
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
		((CAdProductCategory*)GetParentWnd())->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdProductCategoryPopup::OnCancelAdProductCategoryPopup(){
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
 
int CAdProductCategoryPopup::OnAdProductCategoryPopupListLoadData(){
	return 0;
}

void CAdProductCategoryPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdProductCategory*)GetParentWnd())->SetMode(m_nMode);
}