#include "AdManufactureDialog.h"
#include "MainFrame_E10.h"
#include "AdManufactureList.h"

/*static void _OnManufactureNoChangeFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNoChange();
} */
/*static void _OnManufactureNoSetfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNoSetfocus();} */ 
/*static void _OnManufactureNoKillfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNoKillfocus();
} */
static int _OnManufactureNoCheckValueFnc(CWnd *pWnd){
	return ((CAdManufactureDialog *)pWnd)->OnManufactureNoCheckValue();
} 
/*static void _OnManufactureNameChangeFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNameChange();
} */
/*static void _OnManufactureNameSetfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNameSetfocus();} */ 
/*static void _OnManufactureNameKillfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnManufactureNameKillfocus();
} */
static int _OnManufactureNameCheckValueFnc(CWnd *pWnd){
	return ((CAdManufactureDialog *)pWnd)->OnManufactureNameCheckValue();
} 
static void _OnProductCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdManufactureDialog* )pWnd)->OnProductCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductCountrySelendokFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnProductCountrySelendok();
}
/*static void _OnProductCountrySetfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnProductCountryKillfocus();
}*/
/*static void _OnProductCountryKillfocusFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnProductCountryKillfocus();
}*/
static long _OnProductCountryLoadDataFnc(CWnd *pWnd){
	return ((CAdManufactureDialog *)pWnd)->OnProductCountryLoadData();
}
/*static void _OnProductCountryAddNewFnc(CWnd *pWnd){
	((CAdManufactureDialog *)pWnd)->OnProductCountryAddNew();
}*/
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdManufactureDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdManufactureDialog *pVw = (CAdManufactureDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdManufactureDialog *pVw = (CAdManufactureDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdManufactureDialogFnc(CWnd *pWnd){
	 return ((CAdManufactureDialog*)pWnd)->OnAddAdManufactureDialog();
} 
static int _OnEditAdManufactureDialogFnc(CWnd *pWnd){
	 return ((CAdManufactureDialog*)pWnd)->OnEditAdManufactureDialog();
} 
static int _OnDeleteAdManufactureDialogFnc(CWnd *pWnd){
	 return ((CAdManufactureDialog*)pWnd)->OnDeleteAdManufactureDialog();
} 
static int _OnSaveAdManufactureDialogFnc(CWnd *pWnd){
	 return ((CAdManufactureDialog*)pWnd)->OnSaveAdManufactureDialog();
} 
static int _OnCancelAdManufactureDialogFnc(CWnd *pWnd){
	 return ((CAdManufactureDialog*)pWnd)->OnCancelAdManufactureDialog();
} 
CAdManufactureDialog::CAdManufactureDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 485;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CAdManufactureDialog::~CAdManufactureDialog(){
}
void CAdManufactureDialog::OnCreateComponents(){
	m_wndManufactureInformation.Create(this, _T("Manufacture Information"), 5, 5, 490, 90);
	m_wndManufactureNoLabel.Create(this, _T("Manufacture No"), 10, 30, 130, 55);
	m_wndManufactureNo.Create(this,135, 30, 235, 55); 
	m_wndProductCountryLabel.Create(this, _T("Producing Country"), 240, 30, 360, 55);
	m_wndProductCountry.Create(this,365, 30, 485, 55); 
	m_wndManufactureNameLabel.Create(this, _T("Manufacture Name"), 10, 60, 130, 85);
	m_wndManufactureName.Create(this,135, 60, 485, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 130, 120);
	m_wndSave.Create(this, _T("&Save"), 315, 95, 400, 120);
	m_wndClose.Create(this, _T("&Discard"), 405, 95, 490, 120);

}
void CAdManufactureDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndManufactureNo.SetLimitText(15);
	m_wndManufactureNo.SetCheckValue(true);
	m_wndManufactureNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndManufactureName.SetLimitText(254);
	m_wndManufactureName.SetCheckValue(true);
	m_wndProductCountry.SetCheckValue(true);
	m_wndProductCountry.LimitText(254);


	m_wndManufactureName.SetInitCap(2);

	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndProductCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndProductCountry.InsertColumn(1, _T("Description"), CFMT_TEXT, 90);

	m_manufactureTbl.SetTableName(_T("ad_manufacture"));
	m_manufactureTbl.AddField(_T("adm_createdby"), dfText);
	m_manufactureTbl.AddField(_T("adm_createddate"), dfDateTime);
	m_manufactureTbl.AddField(_T("adm_updatedby"), dfText);
	m_manufactureTbl.AddField(_T("adm_updateddate"), dfDateTime);
	m_manufactureTbl.AddField(_T("adm_isactive"), dfText, 1); 
	m_manufactureTbl.AddField(_T("adm_country_id"), dfText, 3); 
	m_manufactureTbl.AddField(_T("adm_code"), dfText, 15); 
	m_manufactureTbl.AddField(_T("adm_name"), dfText, 254); 
	m_manufactureTbl.AddField(_T("adm_org_id"), dfText, 3); 

}
void CAdManufactureDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndManufactureNo.SetEvent(WE_CHANGE, _OnManufactureNoChangeFnc);
	//m_wndManufactureNo.SetEvent(WE_SETFOCUS, _OnManufactureNoSetfocusFnc);
	//m_wndManufactureNo.SetEvent(WE_KILLFOCUS, _OnManufactureNoKillfocusFnc);
	m_wndManufactureNo.SetEvent(WE_CHECKVALUE, _OnManufactureNoCheckValueFnc);
	//m_wndManufactureName.SetEvent(WE_CHANGE, _OnManufactureNameChangeFnc);
	//m_wndManufactureName.SetEvent(WE_SETFOCUS, _OnManufactureNameSetfocusFnc);
	//m_wndManufactureName.SetEvent(WE_KILLFOCUS, _OnManufactureNameKillfocusFnc);
	m_wndManufactureName.SetEvent(WE_CHECKVALUE, _OnManufactureNameCheckValueFnc);
	m_wndProductCountry.SetEvent(WE_SELENDOK, _OnProductCountrySelendokFnc);
	//m_wndProductCountry.SetEvent(WE_SETFOCUS, _OnProductCountrySetfocusFnc);
	//m_wndProductCountry.SetEvent(WE_KILLFOCUS, _OnProductCountryKillfocusFnc);
	m_wndProductCountry.SetEvent(WE_SELCHANGE, _OnProductCountrySelectChangeFnc);
	m_wndProductCountry.SetEvent(WE_LOADDATA, _OnProductCountryLoadDataFnc);
	//m_wndProductCountry.SetEvent(WE_ADDNEW, _OnProductCountryAddNewFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CAdManufactureDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndManufactureNo.GetDlgCtrlID(), m_szManufactureNo);
	DDX_Text(pDX, m_wndManufactureName.GetDlgCtrlID(), m_szManufactureName);
	DDX_TextEx(pDX, m_wndProductCountry.GetDlgCtrlID(), m_szProductCountryKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdManufactureDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;;
	szSQL.Format(_T("SELECT * FROM ad_manufacture WHERE adm_manufacture_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		
		rs.GetValue(_T("adm_country_id"), m_szProductCountryKey);
		rs.GetValue(_T("adm_code"), m_szManufactureNo);
		rs.GetValue(_T("adm_name"), m_szManufactureName);
	}
}
void CAdManufactureDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_manufactureTbl.SetValue(_T("adm_manufacture_id"), m_szID);
	m_manufactureTbl.SetValue(_T("adm_createdby"), pMF->GetCurrentUser());
	m_manufactureTbl.SetValue(_T("adm_createddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adm_manufacture_id=%ld "), m_nID);
		m_manufactureTbl.Open(&pMF->m_db, szWhere);
	}
	m_manufactureTbl.SetValue(_T("adm_updatedby"), pMF->GetCurrentUser());
	m_manufactureTbl.SetValue(_T("adm_updateddate"), pMF->GetSysDateTime());
	m_manufactureTbl.SetValue(_T("adm_isactive"), m_bActive?_T("Y"):_T("N"));
	m_manufactureTbl.SetValue(_T("adm_country_id"), m_szProductCountryKey);
	m_manufactureTbl.SetValue(_T("adm_code"), m_szManufactureNo);
	m_manufactureTbl.SetValue(_T("adm_name"), m_szManufactureName);
	
	m_manufactureTbl.SetValue(_T("adm_org_id"), pMF->GetModuleID());

}
void CAdManufactureDialog::SetDefaultValues(){

	m_szManufactureNo.Empty();
	m_szManufactureName.Empty();
	m_szProductCountryKey.Empty();
	m_bActive=TRUE;

}
int CAdManufactureDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
			m_wndManufactureNo.SetFocus();
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
			m_wndManufactureName.SetFocus();
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
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode; 
}
/*void CAdManufactureDialog::OnManufactureNoChange(){
	
} */
/*void CAdManufactureDialog::OnManufactureNoSetfocus(){
	
} */
/*void CAdManufactureDialog::OnManufactureNoKillfocus(){
	
} */
int CAdManufactureDialog::OnManufactureNoCheckValue(){
	if (GetMode() == VM_ADD)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT count(*) FROM ad_manufacture WHERE adm_code='%s' "), m_szManufactureNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndManufactureNo.SetToolTipMessage(_T("Manufacture No is existing"));
			return -1;
		}
		return 0;
	}
	return 0;
} 
/*void CAdManufactureDialog::OnManufactureNameChange(){
	
} */
/*void CAdManufactureDialog::OnManufactureNameSetfocus(){
	
} */
/*void CAdManufactureDialog::OnManufactureNameKillfocus(){
	
} */
int CAdManufactureDialog::OnManufactureNameCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT count(*) FROM ad_manufacture WHERE lower(adm_name)=lower('%s') "), m_szManufactureName);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndManufactureName.SetToolTipMessage(_T("This item is existing."));
			return -1;
		}
	}
	else
	{
		szSQL.Format(_T("SELECT count(*) FROM ad_manufacture ") \
			_T(" WHERE lower(adm_name)=lower('%s') and adm_manufacture_id<>%ld "), m_szManufactureName, m_nID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndManufactureName.SetToolTipMessage(_T("This item is existing."));
			return -1;
		}
	}
	_debug(_T("%s"), szSQL);
	return 0;
} 
void CAdManufactureDialog::OnProductCountrySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdManufactureDialog::OnProductCountrySelendok(){
	 
}
/*void CAdManufactureDialog::OnProductCountrySetfocus(){
	
}*/
/*void CAdManufactureDialog::OnProductCountryKillfocus(){
	
}*/
long CAdManufactureDialog::OnProductCountryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCountryList(&m_wndProductCountry, m_szProductCountryKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductCountry.IsSearchKey() && !m_szProductCountryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductCountryKey
};
	m_wndProductCountry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductCountry.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdManufactureDialog::OnProductCountryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
	void CAdManufactureDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdManufactureDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdManufactureDialog();
} 
void CAdManufactureDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdManufactureDialog::OnAddAdManufactureDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdManufactureDialog::OnEditAdManufactureDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdManufactureDialog::OnDeleteAdManufactureDialog(){
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
 		OnCancelAdManufactureDialog();
 	}
	return 0;
}
int CAdManufactureDialog::OnSaveAdManufactureDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_manufactureTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adm_manufacture_id=%ld "), m_nID); 
 		szSQL = m_manufactureTbl.GetUpdateSQL(_T("adm_createdby,adm_createddate, adm_manufacture_id")); 
 		szSQL += szWhere; 
 	} 
 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(m_pParentWnd->IsKindOf(RUNTIME_CLASS(CAdManufactureList)))
		{
			((CAdManufactureList*)m_pParentWnd)->Refresh(m_nID);
			if(GetMode() == VM_ADD)
				SetMode(VM_ADD);
		}
		else
		{
			CGuiDialog::OnOK();
		}
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdManufactureDialog::OnCancelAdManufactureDialog(){
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
int CAdManufactureDialog::OnAdManufactureDialogListLoadData(){
	return 0;
}
