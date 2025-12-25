#include "AdOfficeDialog.h"
#include "MainFrame_E10.h"

static void _OnPartnerTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdOfficeDialog* )pWnd)->OnPartnerTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerTypeSelendokFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerTypeSelendok();
}
/*static void _OnPartnerTypeSetfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerTypeKillfocus();
}*/
/*static void _OnPartnerTypeKillfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerTypeKillfocus();
}*/
static long _OnPartnerTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdOfficeDialog *)pWnd)->OnPartnerTypeLoadData();
}
/*static void _OnPartnerTypeAddNewFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerTypeAddNew();
}*/
/*static void _OnPartnerIDChangeFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerIDChange();
} */
/*static void _OnPartnerIDSetfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerIDSetfocus();} */ 
/*static void _OnPartnerIDKillfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnPartnerIDKillfocus();
} */
static int _OnPartnerIDCheckValueFnc(CWnd *pWnd){
	return ((CAdOfficeDialog *)pWnd)->OnPartnerIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdOfficeDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdOfficeDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdOfficeDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CAdOfficeDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdOfficeDialog *pVw = (CAdOfficeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdOfficeDialog *pVw = (CAdOfficeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddAdOfficeDialogFnc(CWnd *pWnd){
	 return ((CAdOfficeDialog*)pWnd)->OnAddAdOfficeDialog();
} 
static int _OnEditAdOfficeDialogFnc(CWnd *pWnd){
	 return ((CAdOfficeDialog*)pWnd)->OnEditAdOfficeDialog();
} 
static int _OnDeleteAdOfficeDialogFnc(CWnd *pWnd){
	 return ((CAdOfficeDialog*)pWnd)->OnDeleteAdOfficeDialog();
} 
static int _OnSaveAdOfficeDialogFnc(CWnd *pWnd){
	 return ((CAdOfficeDialog*)pWnd)->OnSaveAdOfficeDialog();
} 
static int _OnCancelAdOfficeDialogFnc(CWnd *pWnd){
	 return ((CAdOfficeDialog*)pWnd)->OnCancelAdOfficeDialog();
} 
CAdOfficeDialog::CAdOfficeDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 535;
	m_nDlgHeight = 155;
	
	SetDefaultValues();
}
CAdOfficeDialog::~CAdOfficeDialog(){
}
void CAdOfficeDialog::OnCreateComponents(){
	m_wndBusinessPartnerInformation.Create(this, _T("Business Partner Information"), 5, 5, 530, 120);
	m_wndPartnerTypeLabel.Create(this, _T("Partner Type"), 10, 30, 115, 55);
	m_wndPartnerType.Create(this,120, 30, 278, 55); 
	m_wndPartnerIDLabel.Create(this, _T("Partner ID"), 285, 30, 390, 55);
	m_wndPartnerID.Create(this,395, 30, 525, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 115, 85);
	m_wndName.Create(this,119, 60, 525, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 115, 115);
	m_wndAddress.Create(this,120, 90, 525, 115); 
	m_wndIsActive.Create(this, _T("Is Active"), 10, 125, 115, 150);
	m_wndSave.Create(this, _T("&Save"), 345, 125, 435, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 125, 530, 150);

}
void CAdOfficeDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndPartnerType.SetCheckValue(true);
	m_wndPartnerType.SetReadOnly(true);
	m_wndPartnerType.LimitText(35);
	m_wndPartnerID.SetLimitText(32);
	m_wndPartnerID.SetCheckValue(true);
	m_wndPartnerID.ModifyStyle(0, ES_UPPERCASE);
//	m_wndPartnerCategory.LimitText(32);
	m_wndName.SetLimitText(255);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);

	m_wndAddress.SetLimitText(255);

	m_wndIsActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndPartnerType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPartnerType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	
	m_ad_partnerTbl.SetTableName(_T("ad_partner"));
	m_ad_partnerTbl.AddField(_T("adp_partner_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_client_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_org_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_user_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_createdby"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_createddate"), dfDateTime); 
	m_ad_partnerTbl.AddField(_T("adp_updatedby"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_updateddate"), dfDateTime); 
	m_ad_partnerTbl.AddField(_T("adp_isactive"), dfText, 1); 
	m_ad_partnerTbl.AddField(_T("adp_partner_type_id"), dfText, 32); 
	m_ad_partnerTbl.AddField(_T("adp_name"), dfText, 255); 
	m_ad_partnerTbl.AddField(_T("adp_address"), dfText, 255); 

}

void CAdOfficeDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPartnerType.SetEvent(WE_SELENDOK, _OnPartnerTypeSelendokFnc);
	//m_wndPartnerType.SetEvent(WE_SETFOCUS, _OnPartnerTypeSetfocusFnc);
	//m_wndPartnerType.SetEvent(WE_KILLFOCUS, _OnPartnerTypeKillfocusFnc);
	m_wndPartnerType.SetEvent(WE_SELCHANGE, _OnPartnerTypeSelectChangeFnc);
	m_wndPartnerType.SetEvent(WE_LOADDATA, _OnPartnerTypeLoadDataFnc);
	//m_wndPartnerType.SetEvent(WE_ADDNEW, _OnPartnerTypeAddNewFnc);
	//m_wndPartnerID.SetEvent(WE_CHANGE, _OnPartnerIDChangeFnc);
	//m_wndPartnerID.SetEvent(WE_SETFOCUS, _OnPartnerIDSetfocusFnc);
	//m_wndPartnerID.SetEvent(WE_KILLFOCUS, _OnPartnerIDKillfocusFnc);
	m_wndPartnerID.SetEvent(WE_CHECKVALUE, _OnPartnerIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(GetMode());

}
void CAdOfficeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPartnerType.GetDlgCtrlID(), m_szPartnerTypeKey);
	DDX_Text(pDX, m_wndPartnerID.GetDlgCtrlID(), m_szPartnerID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CAdOfficeDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_partner WHERE adp_partner_id = '%s'"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adp_partner_id"), m_szPartnerID);
		rs.GetValue(_T("adp_partner_type_id"), m_szPartnerTypeKey);
		rs.GetValue(_T("adp_name"), m_szName);
		rs.GetValue(_T("adp_address"), m_szAddress);
		rs.GetValue(_T("adp_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bIsActive = true;
		else
			m_bIsActive = false;
	}
}

void CAdOfficeDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_partnerTbl.SetValue(_T("adp_partner_id"), m_szPartnerID);
	m_ad_partnerTbl.SetValue(_T("adp_createdby"), pMF->GetCurrentUser());
	m_ad_partnerTbl.SetValue(_T("adp_createddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adp_partner_id='%s' "), m_szPartnerID);
		m_ad_partnerTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_partnerTbl.SetValue(_T("adp_updatedby"), pMF->GetCurrentUser());
	m_ad_partnerTbl.SetValue(_T("adp_updateddate"), pMF->GetSysDateTime());
	m_ad_partnerTbl.SetValue(_T("adp_isactive"), m_bIsActive?_T("Y"):_T("N"));
	m_ad_partnerTbl.SetValue(_T("adp_partner_type_id"), m_szPartnerTypeKey);
	m_ad_partnerTbl.SetValue(_T("adp_name"), m_szName);
	m_ad_partnerTbl.SetValue(_T("adp_address"), m_szAddress);
	m_ad_partnerTbl.SetValue(_T("adp_org_id"), pMF->GetModuleID());
}

void CAdOfficeDialog::SetDefaultValues(){

	m_szPartnerTypeKey=_T("DV");
	m_szPartnerID.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_bIsActive=TRUE;

}

int CAdOfficeDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndPartnerType.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndName.SetFocus();
			m_wndPartnerID.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1);
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

void CAdOfficeDialog::OnPartnerTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdOfficeDialog::OnPartnerTypeSelendok(){
	 
}

/*void CAdOfficeDialog::OnPartnerTypeSetfocus(){
	
}*/
/*void CAdOfficeDialog::OnPartnerTypeKillfocus(){
	
}*/
long CAdOfficeDialog::OnPartnerTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerTypeList(&m_wndPartnerType, m_szPartnerTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPartnerType.IsSearchKey() && !m_szPartnerTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPartnerTypeKey
};
	m_wndPartnerType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPartnerType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CAdOfficeDialog::OnPartnerTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdOfficeDialog::OnPartnerIDChange(){
	
} */
/*void CAdOfficeDialog::OnPartnerIDSetfocus(){
	
} */
/*void CAdOfficeDialog::OnPartnerIDKillfocus(){
	
} */
int CAdOfficeDialog::OnPartnerIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner WHERE adp_partner_id='%s' "), m_szPartnerID);
	_debug(_T("%s"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndPartnerID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdOfficeDialog::OnNameChange(){
	
} */
/*void CAdOfficeDialog::OnNameSetfocus(){
	
} */
/*void CAdOfficeDialog::OnNameKillfocus(){
	
} */
int CAdOfficeDialog::OnNameCheckValue(){
	return 0;
}
 
/*void CAdOfficeDialog::OnAddressChange(){
	
} */
/*void CAdOfficeDialog::OnAddressSetfocus(){
	
} */
/*void CAdOfficeDialog::OnAddressKillfocus(){
	
} */
int CAdOfficeDialog::OnAddressCheckValue(){
	return 0;
}
 
	void CAdOfficeDialog::OnIsActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdOfficeDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdOfficeDialog();
}
 
void CAdOfficeDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdOfficeDialog::OnAddAdOfficeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdOfficeDialog::OnEditAdOfficeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdOfficeDialog::OnDeleteAdOfficeDialog(){
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
 		OnCancelAdOfficeDialog();
 	}
	return 0;
}

int CAdOfficeDialog::OnSaveAdOfficeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	/*
	if (!m_wndDetail.IsValidateData())
	{
		if (m_wndTab.GetCurSel() != 0)
			m_wndTab.SetCurSel(0);
		return -1;
	}
	if (!m_wndLocationAddress.IsValidateData())	
	{
		if (m_wndTab.GetCurSel() != 2)
			m_wndTab.SetCurSel(2);
		return -1;
	}
*/
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_partnerTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adp_partner_id='%s' "),  m_szPartnerID);
		szSQL = m_ad_partnerTbl.GetUpdateSQL(_T("adp_partner_id,createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
}

int CAdOfficeDialog::OnCancelAdOfficeDialog(){
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
 
int CAdOfficeDialog::OnAdOfficeDialogListLoadData(){
	return 0;
}

