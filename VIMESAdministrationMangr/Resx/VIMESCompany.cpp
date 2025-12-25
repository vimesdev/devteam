#include "VIMESCompany.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnNameCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnDistrictAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnWebsiteChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnWebsiteChange();
} */
/*static void _OnWebsiteSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnWebsiteSetfocus();} */ 
/*static void _OnWebsiteKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnWebsiteCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany *)pWnd)->OnEmailCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CVIMESCompany *pVw = (CVIMESCompany *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESCompany *pVw = (CVIMESCompany *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESCompany *pVw = (CVIMESCompany *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddVIMESCompanyFnc(CWnd *pWnd){
	 return ((CVIMESCompany*)pWnd)->OnAddVIMESCompany();
} 
static int _OnEditVIMESCompanyFnc(CWnd *pWnd){
	 return ((CVIMESCompany*)pWnd)->OnEditVIMESCompany();
} 
static int _OnDeleteVIMESCompanyFnc(CWnd *pWnd){
	 return ((CVIMESCompany*)pWnd)->OnDeleteVIMESCompany();
} 
static int _OnSaveVIMESCompanyFnc(CWnd *pWnd){
	 return ((CVIMESCompany*)pWnd)->OnSaveVIMESCompany();
} 
static int _OnCancelVIMESCompanyFnc(CWnd *pWnd){
	 return ((CVIMESCompany*)pWnd)->OnCancelVIMESCompany();
} 
CVIMESCompany::CVIMESCompany(){

	m_nDlgWidth = 395;
	m_nDlgHeight = 265;
	SetDefaultValues();
}
CVIMESCompany::~CVIMESCompany(){
}
void CVIMESCompany::OnCreateComponents(){
	m_wndCompanyInformations.Create(this, _T("Company Informations"), 5, 5, 385, 230);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 87, 52);
	m_wndID.Create(this,90, 30, 160, 52); 
	m_wndTypeLabel.Create(this, _T("Type"), 165, 30, 215, 52);
	m_wndType.Create(this,220, 30, 380, 52); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 55, 87, 77);
	m_wndName.Create(this,90, 55, 380, 77); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 80, 87, 102);
	m_wndProvill.Create(this,90, 80, 380, 102); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 105, 87, 127);
	m_wndDistrict.Create(this,90, 105, 380, 127); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 130, 87, 152);
	m_wndAddress.Create(this,90, 130, 380, 152); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 155, 87, 177);
	m_wndPhone.Create(this,90, 155, 380, 177); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 10, 180, 87, 202);
	m_wndWebsite.Create(this,90, 180, 380, 202); 
	m_wndEmailLabel.Create(this, _T("Email"), 10, 205, 87, 227);
	m_wndEmail.Create(this,90, 205, 380, 227); 
	m_wndUpdate.Create(this, _T("&Update"), 165, 235, 235, 257);
	m_wndSave.Create(this, _T("&Save"), 240, 235, 310, 257);
	m_wndCancel.Create(this, _T("&Cancel"), 315, 235, 385, 257);

}
void CVIMESCompany::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(7);
	m_wndID.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndProvill.SetCheckValue(true);
	m_wndDistrict.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndPhone.SetLimitText(13);
	m_wndPhone.SetCheckValue(true);
	m_wndWebsite.SetLimitText(35);
	m_wndWebsite.SetCheckValue(true);
	m_wndEmail.SetLimitText(35);
	m_wndEmail.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_sys_companyTbl.SetTableName(_T("sys_company"));
	m_sys_companyTbl.AddField(_T("sysc_createdby"), dfText, 15); 
	m_sys_companyTbl.AddField(_T("sysc_createddate"), dfText, 4); 
	m_sys_companyTbl.AddField(_T("sysc_updatedby"), dfText, 15); 
	m_sys_companyTbl.AddField(_T("sysc_updateddate"), dfText, 4); 
	m_sys_companyTbl.AddField(_T("sysc_id"), dfText, 7); 
	m_sys_companyTbl.AddField(_T("sysc_name"), dfText, 254); 
	m_sys_companyTbl.AddField(_T("sysc_address"), dfText, 254); 
	m_sys_companyTbl.AddField(_T("sysc_phone"), dfText, 13); 
	m_sys_companyTbl.AddField(_T("sysc_website"), dfText, 35); 
	m_sys_companyTbl.AddField(_T("sysc_email"), dfText, 35); 
	m_sys_companyTbl.AddField(_T("sysc_type"), dfText, 1); 
	m_sys_companyTbl.AddField(_T("sysc_provid"), dfInteger); 
	m_sys_companyTbl.AddField(_T("sysc_distid"), dfInteger); 

}
void CVIMESCompany::OnSetWindowEvents(){
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndWebsite.SetEvent(WE_CHANGE, _OnWebsiteChangeFnc);
	//m_wndWebsite.SetEvent(WE_SETFOCUS, _OnWebsiteSetfocusFnc);
	//m_wndWebsite.SetEvent(WE_KILLFOCUS, _OnWebsiteKillfocusFnc);
	m_wndWebsite.SetEvent(WE_CHECKVALUE, _OnWebsiteCheckValueFnc);
	//m_wndEmail.SetEvent(WE_CHANGE, _OnEmailChangeFnc);
	//m_wndEmail.SetEvent(WE_SETFOCUS, _OnEmailSetfocusFnc);
	//m_wndEmail.SetEvent(WE_KILLFOCUS, _OnEmailKillfocusFnc);
	m_wndEmail.SetEvent(WE_CHECKVALUE, _OnEmailCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESCompanyFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESCompanyFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESCompanyFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESCompanyFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESCompanyFnc, 0, 'T', VK_CONTROL);

}
void CVIMESCompany::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndWebsite.GetDlgCtrlID(), m_szWebsite);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);

}
void CVIMESCompany::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("sysc_id"), m_szID);
	rs.GetValue(_T("sysc_name"), m_szName);
	rs.GetValue(_T("sysc_address"), m_szAddress);
	rs.GetValue(_T("sysc_phone"), m_szPhone);
	rs.GetValue(_T("sysc_website"), m_szWebsite);
	rs.GetValue(_T("sysc_email"), m_szEmail);
	rs.GetValue(_T("sysc_type"), m_szTypeKey);
	rs.GetValue(_T("sysc_provid"), m_szProvillKey);
	rs.GetValue(_T("sysc_distid"), m_szDistrictKey);

}
void CVIMESCompany::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_companyTbl.SetValue(_T("sysc_createdby"), pMF->GetCurrentUser());
	m_sys_companyTbl.SetValue(_T("sysc_createddate"), pMF->GetSysDateTime());
	m_sys_companyTbl.SetValue(_T("sysc_updatedby"), pMF->GetCurrentUser());
	m_sys_companyTbl.SetValue(_T("sysc_updateddate"), pMF->GetSysDateTime());
	m_sys_companyTbl.SetValue(_T("sysc_id"), m_szID);
	m_sys_companyTbl.SetValue(_T("sysc_name"), m_szName);
	m_sys_companyTbl.SetValue(_T("sysc_address"), m_szAddress);
	m_sys_companyTbl.SetValue(_T("sysc_phone"), m_szPhone);
	m_sys_companyTbl.SetValue(_T("sysc_website"), m_szWebsite);
	m_sys_companyTbl.SetValue(_T("sysc_email"), m_szEmail);
	m_sys_companyTbl.SetValue(_T("sysc_type"), m_szTypeKey);
	m_sys_companyTbl.SetValue(_T("sysc_provid"), m_szProvillKey);
	m_sys_companyTbl.SetValue(_T("sysc_distid"), m_szDistrictKey);

}
void CVIMESCompany::SetDefaultValues(){

	m_szID.Empty();
	m_szTypeKey.Empty();
	m_szName.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szWebsite.Empty();
	m_szEmail.Empty();

}
int CVIMESCompany::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
/*void CVIMESCompany::OnIDChange(){
	
} */
/*void CVIMESCompany::OnIDSetfocus(){
	
} */
/*void CVIMESCompany::OnIDKillfocus(){
	
} */
int CVIMESCompany::OnIDCheckValue(){
	return 0;
} 
void CVIMESCompany::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany::OnTypeSelendok(){
	 
}
/*void CVIMESCompany::OnTypeSetfocus(){
	
}*/
/*void CVIMESCompany::OnTypeKillfocus(){
	
}*/
long CVIMESCompany::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESCompany::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESCompany::OnNameChange(){
	
} */
/*void CVIMESCompany::OnNameSetfocus(){
	
} */
/*void CVIMESCompany::OnNameKillfocus(){
	
} */
int CVIMESCompany::OnNameCheckValue(){
	return 0;
} 
void CVIMESCompany::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany::OnProvillSelendok(){
	 
}
/*void CVIMESCompany::OnProvillSetfocus(){
	
}*/
/*void CVIMESCompany::OnProvillKillfocus(){
	
}*/
long CVIMESCompany::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
	};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESCompany::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESCompany::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany::OnDistrictSelendok(){
	 
}
/*void CVIMESCompany::OnDistrictSetfocus(){
	
}*/
/*void CVIMESCompany::OnDistrictKillfocus(){
	
}*/
long CVIMESCompany::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESCompany::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESCompany::OnAddressChange(){
	
} */
/*void CVIMESCompany::OnAddressSetfocus(){
	
} */
/*void CVIMESCompany::OnAddressKillfocus(){
	
} */
int CVIMESCompany::OnAddressCheckValue(){
	return 0;
} 
/*void CVIMESCompany::OnPhoneChange(){
	
} */
/*void CVIMESCompany::OnPhoneSetfocus(){
	
} */
/*void CVIMESCompany::OnPhoneKillfocus(){
	
} */
int CVIMESCompany::OnPhoneCheckValue(){
	return 0;
} 
/*void CVIMESCompany::OnWebsiteChange(){
	
} */
/*void CVIMESCompany::OnWebsiteSetfocus(){
	
} */
/*void CVIMESCompany::OnWebsiteKillfocus(){
	
} */
int CVIMESCompany::OnWebsiteCheckValue(){
	return 0;
} 
/*void CVIMESCompany::OnEmailChange(){
	
} */
/*void CVIMESCompany::OnEmailSetfocus(){
	
} */
/*void CVIMESCompany::OnEmailKillfocus(){
	
} */
int CVIMESCompany::OnEmailCheckValue(){
	return 0;
} 
void CVIMESCompany::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESCompany::OnAddVIMESCompany(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESCompany::OnEditVIMESCompany(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESCompany::OnDeleteVIMESCompany(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESCompany(); 
 	}
	return 0;
}
int CVIMESCompany::OnSaveVIMESCompany(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_companyTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_companyTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESCompanyListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESCompany::OnCancelVIMESCompany(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CVIMESCompany::OnVIMESCompanyListLoadData(){
	return 0;
}
