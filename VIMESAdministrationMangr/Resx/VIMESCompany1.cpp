#include "VIMESCompany1.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany1* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnNameCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany1* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESCompany1* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnDistrictAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnWebsiteChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnWebsiteChange();
} */
/*static void _OnWebsiteSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnWebsiteSetfocus();} */ 
/*static void _OnWebsiteKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnWebsiteCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CVIMESCompany1 *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CVIMESCompany1 *)pWnd)->OnEmailCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CVIMESCompany1 *pVw = (CVIMESCompany1 *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESCompany1 *pVw = (CVIMESCompany1 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESCompany1 *pVw = (CVIMESCompany1 *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnConfigurationSelectFnc(CWnd *pWnd){
	CVIMESCompany1 *pVw = (CVIMESCompany1 *)pWnd;
	pVw->OnConfigurationSelect();
} 
static long _OnConfigListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESCompany1*)pWnd)->OnConfigListLoadData();
} 
static void _OnConfigListDblClickFnc(CWnd *pWnd){
	((CVIMESCompany1*)pWnd)->OnConfigListDblClick();
} 
static void _OnConfigListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESCompany1*)pWnd)->OnConfigListSelectChange(nOldItem, nNewItem);
} 
static int _OnConfigListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnConfigListDeleteItem();
} 
static int _OnAddVIMESCompany1Fnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnAddVIMESCompany1();
} 
static int _OnEditVIMESCompany1Fnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnEditVIMESCompany1();
} 
static int _OnDeleteVIMESCompany1Fnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnDeleteVIMESCompany1();
} 
static int _OnSaveVIMESCompany1Fnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnSaveVIMESCompany1();
} 
static int _OnCancelVIMESCompany1Fnc(CWnd *pWnd){
	 return ((CVIMESCompany1*)pWnd)->OnCancelVIMESCompany1();
} 
CVIMESCompany1::CVIMESCompany1(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESCompany1::~CVIMESCompany1(){
}
void CVIMESCompany1::OnCreateComponents(){
	m_wndCompanyInformations.Create(this, _T("Company Informations"), 5, 5, 805, 130);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 52);
	m_wndID.Create(this,95, 30, 165, 52); 
	m_wndTypeLabel.Create(this, _T("Type"), 170, 30, 220, 52);
	m_wndType.Create(this,225, 30, 385, 52); 
	m_wndNameLabel.Create(this, _T("Name"), 390, 30, 470, 52);
	m_wndName.Create(this,475, 30, 800, 52); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 55, 90, 77);
	m_wndProvill.Create(this,95, 55, 385, 77); 
	m_wndDistrictLabel.Create(this, _T("District"), 390, 56, 470, 78);
	m_wndDistrict.Create(this,475, 55, 800, 77); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 80, 90, 102);
	m_wndAddress.Create(this,95, 80, 385, 102); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 390, 80, 470, 102);
	m_wndPhone.Create(this,475, 80, 800, 102); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 10, 105, 90, 127);
	m_wndWebsite.Create(this,95, 105, 385, 127); 
	m_wndEmailLabel.Create(this, _T("Email"), 390, 105, 470, 127);
	m_wndEmail.Create(this,475, 105, 800, 127); 
	m_wndUpdate.Create(this, _T("&Update"), 585, 135, 655, 157);
	m_wndSave.Create(this, _T("&Save"), 660, 135, 730, 157);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 135, 805, 157);
	m_wndConfiguration.Create(this, _T("Configuration"), 5, 135, 85, 160);
	m_wndConfigList.Create(this,5, 165, 805, 610); 

}
void CVIMESCompany1::OnInitializeComponents(){
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


	m_wndConfigList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 30);
	m_wndConfigList.InsertColumn(1, _T("ID"), CFMT_TEXT, 200);
	m_wndConfigList.InsertColumn(2, _T("Description"), CFMT_TEXT, 400);
	m_wndConfigList.InsertColumn(3, _T("Value"), CFMT_TEXT, 80);
	m_wndConfigList.InsertColumn(4, _T("Data Type"), CFMT_NUMBER, 30);
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
void CVIMESCompany1::OnSetWindowEvents(){
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
	m_wndConfiguration.SetEvent(WE_CLICK, _OnConfigurationSelectFnc);
	m_wndConfigList.SetEvent(WE_SELCHANGE, _OnConfigListSelectChangeFnc);
	m_wndConfigList.SetEvent(WE_LOADDATA, _OnConfigListLoadDataFnc);
	m_wndConfigList.SetEvent(WE_DBLCLICK, _OnConfigListDblClickFnc);
	m_wndConfigList.AddEvent(1, _T("Delete"), _OnConfigListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESCompany1Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESCompany1Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESCompany1Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESCompany1Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESCompany1Fnc, 0, 'T', VK_CONTROL);

}
void CVIMESCompany1::OnDoDataExchange(CDataExchange* pDX){
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
void CVIMESCompany1::GetDataToScreen(){
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
void CVIMESCompany1::GetScreenToData(){
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
void CVIMESCompany1::SetDefaultValues(){

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
int CVIMESCompany1::SetMode(int nMode){
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
/*void CVIMESCompany1::OnIDChange(){
	
} */
/*void CVIMESCompany1::OnIDSetfocus(){
	
} */
/*void CVIMESCompany1::OnIDKillfocus(){
	
} */
int CVIMESCompany1::OnIDCheckValue(){
	return 0;
} 
void CVIMESCompany1::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnTypeSelendok(){
	 
}
/*void CVIMESCompany1::OnTypeSetfocus(){
	
}*/
/*void CVIMESCompany1::OnTypeKillfocus(){
	
}*/
long CVIMESCompany1::OnTypeLoadData(){
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
/*void CVIMESCompany1::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESCompany1::OnNameChange(){
	
} */
/*void CVIMESCompany1::OnNameSetfocus(){
	
} */
/*void CVIMESCompany1::OnNameKillfocus(){
	
} */
int CVIMESCompany1::OnNameCheckValue(){
	return 0;
} 
void CVIMESCompany1::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnProvillSelendok(){
	 
}
/*void CVIMESCompany1::OnProvillSetfocus(){
	
}*/
/*void CVIMESCompany1::OnProvillKillfocus(){
	
}*/
long CVIMESCompany1::OnProvillLoadData(){
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
/*void CVIMESCompany1::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESCompany1::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnDistrictSelendok(){
	 
}
/*void CVIMESCompany1::OnDistrictSetfocus(){
	
}*/
/*void CVIMESCompany1::OnDistrictKillfocus(){
	
}*/
long CVIMESCompany1::OnDistrictLoadData(){
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
/*void CVIMESCompany1::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESCompany1::OnAddressChange(){
	
} */
/*void CVIMESCompany1::OnAddressSetfocus(){
	
} */
/*void CVIMESCompany1::OnAddressKillfocus(){
	
} */
int CVIMESCompany1::OnAddressCheckValue(){
	return 0;
} 
/*void CVIMESCompany1::OnPhoneChange(){
	
} */
/*void CVIMESCompany1::OnPhoneSetfocus(){
	
} */
/*void CVIMESCompany1::OnPhoneKillfocus(){
	
} */
int CVIMESCompany1::OnPhoneCheckValue(){
	return 0;
} 
/*void CVIMESCompany1::OnWebsiteChange(){
	
} */
/*void CVIMESCompany1::OnWebsiteSetfocus(){
	
} */
/*void CVIMESCompany1::OnWebsiteKillfocus(){
	
} */
int CVIMESCompany1::OnWebsiteCheckValue(){
	return 0;
} 
/*void CVIMESCompany1::OnEmailChange(){
	
} */
/*void CVIMESCompany1::OnEmailSetfocus(){
	
} */
/*void CVIMESCompany1::OnEmailKillfocus(){
	
} */
int CVIMESCompany1::OnEmailCheckValue(){
	return 0;
} 
void CVIMESCompany1::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnConfigurationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESCompany1::OnConfigListDblClick(){
	
} 
void CVIMESCompany1::OnConfigListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESCompany1::OnConfigListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESCompany1::OnConfigListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndConfigList.BeginLoad(); 
	m_wndConfigList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndConfigList.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Value")), 
			rs.GetValue(_T("DataType")), NULL);
		rs.MoveNext();
	}
	m_wndConfigList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CVIMESCompany1::OnAddVIMESCompany1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESCompany1::OnEditVIMESCompany1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESCompany1::OnDeleteVIMESCompany1(){
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
 		OnCancelVIMESCompany1(); 
 	}
	return 0;
}
int CVIMESCompany1::OnSaveVIMESCompany1(){
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
 		//OnVIMESCompany1ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESCompany1::OnCancelVIMESCompany1(){
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
int CVIMESCompany1::OnVIMESCompany1ListLoadData(){
	return 0;
}
