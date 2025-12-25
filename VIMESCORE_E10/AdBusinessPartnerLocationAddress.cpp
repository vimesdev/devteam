#include "AdBusinessPartnerLocationAddress.h"
#include "MainFrame_E10.h"
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerLocationAddress* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerLocationAddress *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerLocationAddress* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerLocationAddress *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerLocationAddress* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerLocationAddress *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerLocationAddress *)pWnd)->OnVillageAddNew();
}*/
static int _OnAddAdBusinessPartnerLocationAddressFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerLocationAddress*)pWnd)->OnAddAdBusinessPartnerLocationAddress();
} 
static int _OnEditAdBusinessPartnerLocationAddressFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerLocationAddress*)pWnd)->OnEditAdBusinessPartnerLocationAddress();
} 
static int _OnDeleteAdBusinessPartnerLocationAddressFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerLocationAddress*)pWnd)->OnDeleteAdBusinessPartnerLocationAddress();
} 
static int _OnSaveAdBusinessPartnerLocationAddressFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerLocationAddress*)pWnd)->OnSaveAdBusinessPartnerLocationAddress();
} 
static int _OnCancelAdBusinessPartnerLocationAddressFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerLocationAddress*)pWnd)->OnCancelAdBusinessPartnerLocationAddress();
} 
CAdBusinessPartnerLocationAddress::CAdBusinessPartnerLocationAddress(){

	m_nDlgWidth = 785;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CAdBusinessPartnerLocationAddress::~CAdBusinessPartnerLocationAddress(){
}
void CAdBusinessPartnerLocationAddress::OnCreateComponents(){
	m_wndProvinceLabel.Create(this, _T("Province"), 8, 5, 163, 30);
	m_wndProvince.Create(this,168, 5, 518, 30); 
	m_wndDistrictLabel.Create(this, _T("District"), 8, 35, 163, 60);
	m_wndDistrict.Create(this,168, 35, 518, 60); 
	m_wndVillageLabel.Create(this, _T("Village"), 8, 65, 163, 90);
	m_wndVillage.Create(this,168, 65, 518, 90); 

}
void CAdBusinessPartnerLocationAddress::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndProvince.LimitText(35);
	//m_wndDistrict.LimitText(35);
	//m_wndVillage.LimitText(35);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvince.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	
	m_ad_partnerTbl.SetTableName(_T("ad_partner"));
	m_ad_partnerTbl.AddField(_T("adp_provill_id"), dfText, 3);
	m_ad_partnerTbl.AddField(_T("adp_district_id"), dfText, 5);
	m_ad_partnerTbl.AddField(_T("adp_village_id"), dfText, 7);
}
void CAdBusinessPartnerLocationAddress::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
	m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
	//m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdBusinessPartnerLocationAddressFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdBusinessPartnerLocationAddressFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdBusinessPartnerLocationAddressFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdBusinessPartnerLocationAddressFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdBusinessPartnerLocationAddressFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerLocationAddress::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);

}
void CAdBusinessPartnerLocationAddress::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_partner WHERE adp_partner_id = '%s'"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adp_provill_id"), m_szProvinceKey);
		rs.GetValue(_T("adp_district_id"), m_szDistrictKey);
		rs.GetValue(_T("adp_village_id"), m_szVillageKey);
		SetMode(VM_VIEW);
	}

}
void CAdBusinessPartnerLocationAddress::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_partnerTbl.SetValue(_T("adp_provill_id"), m_szProvinceKey);
	m_ad_partnerTbl.SetValue(_T("adp_district_id"),m_szDistrictKey);
	m_ad_partnerTbl.SetValue(_T("adp_village_id"), m_szVillageKey);
}
void CAdBusinessPartnerLocationAddress::SetDefaultValues(){

	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();

}
int CAdBusinessPartnerLocationAddress::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
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
void CAdBusinessPartnerLocationAddress::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerLocationAddress::OnProvinceSelendok(){
	 
}
/*void CAdBusinessPartnerLocationAddress::OnProvinceSetfocus(){
	
}*/
/*void CAdBusinessPartnerLocationAddress::OnProvinceKillfocus(){
	
}*/
long CAdBusinessPartnerLocationAddress::OnProvinceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvince.IsSearchKey() && m_szProvinceKey != _T("0")){
		szWhere.Format(_T(" and sp_id='%s' "), m_szProvinceKey);
	};
	m_wndProvince.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov WHERE 1=1 %s ORDER BY sp_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvince.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdBusinessPartnerLocationAddress::OnProvinceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerLocationAddress::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerLocationAddress::OnDistrictSelendok(){
	 
}
/*void CAdBusinessPartnerLocationAddress::OnDistrictSetfocus(){
	
}*/
/*void CAdBusinessPartnerLocationAddress::OnDistrictKillfocus(){
	
}*/
long CAdBusinessPartnerLocationAddress::OnDistrictLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && m_szDistrictKey != _T("0")){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDistrictKey);
	};
	//_msg(_T("%s"), m_szProvinceKey);
	if (m_szProvinceKey != _T("0"))
		szWhere.AppendFormat(_T(" and sd_provid = '%s'"), m_szProvinceKey);
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdBusinessPartnerLocationAddress::OnDistrictAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerLocationAddress::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerLocationAddress::OnVillageSelendok(){
	 
}
/*void CAdBusinessPartnerLocationAddress::OnVillageSetfocus(){
	
}*/
/*void CAdBusinessPartnerLocationAddress::OnVillageKillfocus(){
	
}*/
long CAdBusinessPartnerLocationAddress::OnVillageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && m_szVillageKey != _T("0")){
	 szWhere.Format(_T(" and sv_id='%s' "), m_szVillageKey);
	};
	//_msg(_T("%s:%s"), m_szProvinceKey, m_szDistrictKey);
	if (m_szProvinceKey != _T("0"))
		szWhere.AppendFormat(_T(" and sv_provid = '%s'"), m_szProvinceKey);
	if (m_szVillageKey != _T("0"))
		szWhere.AppendFormat(_T(" and sv_distid = '%s'"), m_szDistrictKey);
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sv_id as id, sv_name as name FROM sys_vill WHERE 1=1 %s ORDER BY sv_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdBusinessPartnerLocationAddress::OnVillageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CAdBusinessPartnerLocationAddress::OnAddAdBusinessPartnerLocationAddress(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerLocationAddress::OnEditAdBusinessPartnerLocationAddress(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerLocationAddress::OnDeleteAdBusinessPartnerLocationAddress(){
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
 		OnCancelAdBusinessPartnerLocationAddress();
 	}
	return 0;
}
int CAdBusinessPartnerLocationAddress::OnSaveAdBusinessPartnerLocationAddress(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;
 	szWhere.Format(_T(" WHERE adp_partner_id = '%s'"), m_szPartnerID);
 	szSQL = m_ad_partnerTbl.GetUpdateSQL();
 	szSQL += szWhere;
	
 	int ret = pMF->ExecSQL(szSQL);
 	return ret;
}
int CAdBusinessPartnerLocationAddress::OnCancelAdBusinessPartnerLocationAddress(){
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
int CAdBusinessPartnerLocationAddress::OnAdBusinessPartnerLocationAddressListLoadData(){
	return 0;
}
