#include "AdPriceSchemaPopup.h"
#include "MainFrame_E10.h"
#include "AdPriceSchema.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceSchemaPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchemaPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceSchemaPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPriceSchemaPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPriceSchemaPopup *pVw = (CAdPriceSchemaPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdPriceSchemaPopupFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaPopup*)pWnd)->OnAddAdPriceSchemaPopup();
} 
static int _OnEditAdPriceSchemaPopupFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaPopup*)pWnd)->OnEditAdPriceSchemaPopup();
} 
static int _OnDeleteAdPriceSchemaPopupFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaPopup*)pWnd)->OnDeleteAdPriceSchemaPopup();
} 
static int _OnSaveAdPriceSchemaPopupFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaPopup*)pWnd)->OnSaveAdPriceSchemaPopup();
} 
static int _OnCancelAdPriceSchemaPopupFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaPopup*)pWnd)->OnCancelAdPriceSchemaPopup();
} 
CAdPriceSchemaPopup::CAdPriceSchemaPopup(){
	SetAutoClose(false);
	m_nDlgWidth = 850;
	m_nDlgHeight = 55;
	SetDefaultValues();
}
CAdPriceSchemaPopup::~CAdPriceSchemaPopup(){
}
void CAdPriceSchemaPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 790, 55);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 175, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 180, 30, 260, 55);
	m_wndDescription.Create(this,265, 30, 605, 55); 
	m_wndActive.Create(this, _T("Active"), 620, 30, 700, 55);
	m_wndSave.Create(this, _T("&Save"), 705, 30, 785, 55);

}
void CAdPriceSchemaPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	//m_wndDescription.SetCheckValue(true);
	
	m_ad_price_schemaTbl.SetTableName(_T("ad_price_schema"));
	m_ad_price_schemaTbl.AddField(_T("adps_price_schema_id"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_client_id"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_org_id"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_user_id"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_createdby"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_createddate"), dfDateTime);
	m_ad_price_schemaTbl.AddField(_T("adps_updatedby"), dfText, 32);
	m_ad_price_schemaTbl.AddField(_T("adps_updateddate"), dfDateTime);
	m_ad_price_schemaTbl.AddField(_T("adps_name"), dfText, 65);
	m_ad_price_schemaTbl.AddField(_T("adps_description"), dfText, 254);
	m_ad_price_schemaTbl.AddField(_T("adps_isactive"), dfText, 1);
}
void CAdPriceSchemaPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
void CAdPriceSchemaPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPriceSchemaPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_price_schema WHERE adps_price_schema_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString szActive;
		rs.GetValue(_T("adps_name"), m_szName);
		rs.GetValue(_T("adps_description"), m_szDescription);
		rs.GetValue(_T("adps_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
		SetMode(VM_EDIT);
	}
}
void CAdPriceSchemaPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_price_schemaTbl.SetValue(_T("adps_createdby"), pMF->GetCurrentUser());
	if (GetMode() == VM_ADD)
	{
		m_szID = pMF->ExecDML(_T("get_uuid()"));
		m_ad_price_schemaTbl.SetValue(_T("adps_price_schema_id"), m_szID);
		m_ad_price_schemaTbl.SetValue(_T("adps_createdby"), pMF->GetCurrentUser());
		m_ad_price_schemaTbl.SetValue(_T("adps_createddate"), pMF->GetSysDate());
	}	
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE adps_price_schema_id = '%s'"), m_szID);
		m_ad_price_schemaTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_price_schemaTbl.SetValue(_T("adps_updatedby"), pMF->GetCurrentUser());
	m_ad_price_schemaTbl.SetValue(_T("adps_updateddate"), pMF->GetSysDate());
	m_ad_price_schemaTbl.SetValue(_T("adps_name"), m_szName);
	m_ad_price_schemaTbl.SetValue(_T("adps_description"), m_szDescription);
	m_ad_price_schemaTbl.SetValue(_T("adps_isactive"), m_bActive?_T("Y"):_T("N"));
}
void CAdPriceSchemaPopup::SetDefaultValues(){

	m_szName.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}
int CAdPriceSchemaPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_wndName.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
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
/*void CAdPriceSchemaPopup::OnNameChange(){
	
} */
/*void CAdPriceSchemaPopup::OnNameSetfocus(){
	
} */
/*void CAdPriceSchemaPopup::OnNameKillfocus(){
	
} */
int CAdPriceSchemaPopup::OnNameCheckValue(){
	if (GetMode() == VM_EDIT)
		return 0;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_price_schema WHERE adps_name='%s' "), m_szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndName.SetToolTipMessage(_T("This Name must be unique"));
		return -1;
	}
	return 0;
} 
/*void CAdPriceSchemaPopup::OnDescriptionChange(){
	
} */
/*void CAdPriceSchemaPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdPriceSchemaPopup::OnDescriptionKillfocus(){
	
} */
int CAdPriceSchemaPopup::OnDescriptionCheckValue(){
	return 0;
} 
void CAdPriceSchemaPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdPriceSchemaPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPriceSchemaPopup();
} 
int CAdPriceSchemaPopup::OnAddAdPriceSchemaPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceSchemaPopup::OnEditAdPriceSchemaPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceSchemaPopup::OnDeleteAdPriceSchemaPopup(){
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
 		OnCancelAdPriceSchemaPopup();
 	}
	return 0;
}
int CAdPriceSchemaPopup::OnSaveAdPriceSchemaPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_price_schemaTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adps_price_schema_id = '%s'"), m_szID);
 		szSQL = m_ad_price_schemaTbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			ClosePopup();
		((CAdPriceSchema*)GetParentWnd())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceSchemaPopup::OnCancelAdPriceSchemaPopup(){
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
int CAdPriceSchemaPopup::OnAdPriceSchemaPopupListLoadData(){
	return 0;
}

void CAdPriceSchemaPopup::ClosePopup()
{
	CGuiPopup::ClosePopup();
	((CAdPriceSchema*)GetParentWnd())->SetMode(m_nMode);
}