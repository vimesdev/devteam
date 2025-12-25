#include "AdTaxRatePopup.h"
#include "MainFrame_E10.h"
#include "AdTaxRate.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdTaxRatePopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnRateChangeFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnRateChange();
} */
/*static void _OnRateSetfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnRateSetfocus();} */ 
/*static void _OnRateKillfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnRateKillfocus();
} */
static int _OnRateCheckValueFnc(CWnd *pWnd){
	return ((CAdTaxRatePopup *)pWnd)->OnRateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdTaxRatePopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdTaxRatePopup *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdTaxRatePopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdTaxRatePopup *pVw = (CAdTaxRatePopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdTaxRatePopupFnc(CWnd *pWnd){
	 return ((CAdTaxRatePopup*)pWnd)->OnAddAdTaxRatePopup();
} 
static int _OnEditAdTaxRatePopupFnc(CWnd *pWnd){
	 return ((CAdTaxRatePopup*)pWnd)->OnEditAdTaxRatePopup();
} 
static int _OnDeleteAdTaxRatePopupFnc(CWnd *pWnd){
	 return ((CAdTaxRatePopup*)pWnd)->OnDeleteAdTaxRatePopup();
} 
static int _OnSaveAdTaxRatePopupFnc(CWnd *pWnd){
	 return ((CAdTaxRatePopup*)pWnd)->OnSaveAdTaxRatePopup();
} 
static int _OnCancelAdTaxRatePopupFnc(CWnd *pWnd){
	 return ((CAdTaxRatePopup*)pWnd)->OnCancelAdTaxRatePopup();
} 
CAdTaxRatePopup::CAdTaxRatePopup(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 50;
	SetDefaultValues();
}
CAdTaxRatePopup::~CAdTaxRatePopup(){
}
void CAdTaxRatePopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 795, 50);
	m_wndRateLabel.Create(this, _T("Rate"), 5, 25, 75, 50);
	m_wndRate.Create(this,80, 25, 160, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 165, 25, 235, 50);
	m_wndName.Create(this,240, 25, 615, 50); 
	m_wndActive.Create(this, _T("Active"), 620, 25, 705, 50);
	m_wndSave.Create(this, _T("&Save"), 710, 25, 790, 50);


}
void CAdTaxRatePopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(1);
	m_wndRate.SetLimitText(16);
	m_wndRate.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_taxrateTbl.SetTableName(_T("ad_taxrate"));
	m_ad_taxrateTbl.AddField(_T("ADT_CREATEDBY"), dfText, 15); 
	m_ad_taxrateTbl.AddField(_T("ADT_CREATEDDATE"), dfDateTime); 
	m_ad_taxrateTbl.AddField(_T("ADT_UPDATEDBY"), dfText, 15); 
	m_ad_taxrateTbl.AddField(_T("ADT_UPDATEDDATE"), dfDateTime); 
	m_ad_taxrateTbl.AddField(_T("ADT_TAXRATE_ID"), dfText, 15);
	m_ad_taxrateTbl.AddField(_T("ADT_DESCRIPTION"), dfText, 254); 
	m_ad_taxrateTbl.AddField(_T("ADT_RATE"), dfInteger); 
	m_ad_taxrateTbl.AddField(_T("ADT_ISACTIVE"), dfText, 1); 
}

void CAdTaxRatePopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndRate.SetEvent(WE_CHANGE, _OnRateChangeFnc);
	//m_wndRate.SetEvent(WE_SETFOCUS, _OnRateSetfocusFnc);
	//m_wndRate.SetEvent(WE_KILLFOCUS, _OnRateKillfocusFnc);
	m_wndRate.SetEvent(WE_CHECKVALUE, _OnRateCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdTaxRatePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRate.GetDlgCtrlID(), m_nRate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdTaxRatePopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adt_description as name, adt_rate as rate, adt_isactive as active FROM ad_taxrate WHERE adt_taxrate_id = '%s' ORDER BY adt_taxrate_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		rs.GetValue(_T("rate"), m_nRate);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdTaxRatePopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_taxrateTbl.SetValue(_T("adt_createdby"), pMF->GetCurrentUser());
	m_ad_taxrateTbl.SetValue(_T("adt_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adt_taxrate_id='%s' "), m_szID);
		m_ad_taxrateTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_taxrateTbl.SetValue(_T("adt_createddate"), pMF->GetSysDateTime());
	m_ad_taxrateTbl.SetValue(_T("adt_updateddate"), pMF->GetSysDateTime());
	m_ad_taxrateTbl.SetValue(_T("adt_taxrate_id"), m_szID);
	m_ad_taxrateTbl.SetValue(_T("adt_description"), m_szName);
	m_ad_taxrateTbl.SetValue(_T("adt_rate"), m_nRate);
	m_ad_taxrateTbl.SetValue(_T("adt_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdTaxRatePopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_nRate=0;
	m_bActive=TRUE;

}

int CAdTaxRatePopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndRate.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndRate.EnableWindow(FALSE);
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

 
/*void CAdTaxRatePopup::OnRateChange(){
	
} */
/*void CAdTaxRatePopup::OnRateSetfocus(){
	
} */
/*void CAdTaxRatePopup::OnRateKillfocus(){
	
} */
int CAdTaxRatePopup::OnRateCheckValue(){
	if (m_nRate < 0 || m_nRate > 100)
		return -1;
	m_szID.Format(_T("%d"), m_nRate);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_taxrate WHERE adt_taxrate_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndRate.SetToolTipMessage(_T("This [Rate] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdTaxRatePopup::OnNameChange(){
	
} */
/*void CAdTaxRatePopup::OnNameSetfocus(){
	
} */
/*void CAdTaxRatePopup::OnNameKillfocus(){
	
} */
int CAdTaxRatePopup::OnNameCheckValue(){
	return 0;
}
 
void CAdTaxRatePopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdTaxRatePopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdTaxRatePopup();
}
 
int CAdTaxRatePopup::OnAddAdTaxRatePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdTaxRatePopup::OnEditAdTaxRatePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdTaxRatePopup::OnDeleteAdTaxRatePopup(){
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
 		OnCancelAdTaxRatePopup();
 	}
	return 0;
}
int CAdTaxRatePopup::OnSaveAdTaxRatePopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_taxrateTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adt_taxrate_id = '%s'"), m_szID);
 		szSQL = m_ad_taxrateTbl.GetUpdateSQL(_T("adt_createdby,adt_createddate,adt_taxrate_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if (GetMode() == VM_EDIT)
			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdTaxRate*)GetParentWnd())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdTaxRatePopup::OnCancelAdTaxRatePopup(){
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
int CAdTaxRatePopup::OnAdTaxRatePopupListLoadData(){
	return 0;
}
void CAdTaxRatePopup::ClosePopup(){
	CGuiPopup::ClosePopup();	
	((CAdTaxRate*)GetParentWnd())->SetMode(m_nMode);
}