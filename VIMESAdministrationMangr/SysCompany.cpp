#include "SysCompany.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "SysConfigConfirmDialog.h"
#include "SysConfigEditDialog.h"
#include "Excel.h"
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnIDCheckValue();
} 
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysCompanySetup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnTypeAddNew();
}*/
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnNameCheckValue();
} 
static int _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysCompanySetup* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnProvillSelendokFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnProvillSelendok();
}
/*static int _OnProvillSetfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnProvillKillfocus();
}*/
/*static int _OnProvillKillfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnProvillKillfocus();
}*/
static int _OnProvillLoadDataFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnProvillLoadData();
}
/*static int _OnProvillAddNewFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnProvillAddNew();
}*/
static int _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysCompanySetup* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDistrictSelendokFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnDistrictSelendok();
}
/*static int _OnDistrictSetfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnDistrictKillfocus();
}*/
/*static int _OnDistrictKillfocusFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnDistrictKillfocus();
}*/
static int _OnDistrictLoadDataFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnDistrictLoadData();
}
/*static int _OnDistrictAddNewFnc(CWnd *pWnd){
	 return ((CSysCompanySetup *)pWnd)->OnDistrictAddNew();
}*/
/*static int _OnAddressChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnAddressChange();
} */
/*static int _OnAddressSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnAddressKillfocus();} */ 
/*static int _OnAddressKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnAddressCheckValue();
} 
/*static int _OnPhoneChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnPhoneChange();
} */
/*static int _OnPhoneSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnPhoneKillfocus();} */ 
/*static int _OnPhoneKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnPhoneCheckValue();
} 
/*static int _OnWebsiteChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnWebsiteChange();
} */
/*static int _OnWebsiteSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnWebsiteKillfocus();} */ 
/*static int _OnWebsiteKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnWebsiteCheckValue();
} 
/*static int _OnEmailChangeFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnEmailChange();
} */
/*static int _OnEmailSetfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnEmailKillfocus();} */ 
/*static int _OnEmailKillfocusFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CSysCompanySetup *)pWnd)->OnEmailCheckValue();
} 
static int _OnUpdateSelectFnc(CWnd *pWnd){
	CSysCompanySetup *pVw = (CSysCompanySetup *)pWnd;
	return pVw->OnUpdateSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysCompanySetup *pVw = (CSysCompanySetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysCompanySetup *pVw = (CSysCompanySetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESCompanyFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnAddVIMESCompany();
} 
static int _OnEditVIMESCompanyFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnEditVIMESCompany();
} 
static int _OnDeleteVIMESCompanyFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnDeleteVIMESCompany();
} 
static int _OnSaveVIMESCompanyFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnSaveVIMESCompany();
} 
static int _OnCancelVIMESCompanyFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnCancelVIMESCompany();
} 
static void _OnConfigurationSelectFnc(CWnd *pWnd){
	CSysCompanySetup *pVw = (CSysCompanySetup *)pWnd;
	pVw->OnConfigurationSelect();
} 
static long _OnConfigListLoadDataFnc(CWnd *pWnd){
	return ((CSysCompanySetup*)pWnd)->OnConfigListLoadData();
} 
static void _OnConfigListDblClickFnc(CWnd *pWnd){
	((CSysCompanySetup*)pWnd)->OnConfigListDblClick();
} 
static void _OnConfigListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysCompanySetup*)pWnd)->OnConfigListSelectChange(nOldItem, nNewItem);
} 
static int _OnConfigListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysCompanySetup*)pWnd)->OnConfigListDeleteItem();
} 
static int _OnConfigListRefreshItemFnc(CWnd *pWnd){
	return ((CSysCompanySetup*)pWnd)->OnConfigListLoadData();
}
static int _OnConfigListLoadFnc(CWnd *pWnd){
	return ((CSysCompanySetup*)pWnd)->OnConfigListLoad();
}
CSysCompanySetup::CSysCompanySetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
	bConfig = false;
	::GetCurrentDirectory(MAX_PATH, m_szPath);
	m_szFileName.Format(_T("%s\\VIMESConfig.jpg"), m_szPath);
}

CSysCompanySetup::~CSysCompanySetup(){
}
void CSysCompanySetup::OnCreateComponents(){
	m_wndCompanyInformations.Create(this, _T("Company Informations"), 5, 5, 805, 150);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 165, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 170, 30, 220, 55);
	m_wndType.Create(this,225, 30, 385, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 390, 30, 470, 55);
	m_wndName.Create(this,475, 30, 800, 55); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 60, 90, 85);
	m_wndProvill.Create(this,95, 60, 385, 85); 
	m_wndDistrict.Create(this,475, 60, 800, 85); 
	m_wndDistrictLabel.Create(this, _T("District"), 390, 60, 470, 85);
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 90, 115);
	m_wndAddress.Create(this,95, 90, 385, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 390, 90, 470, 115);
	m_wndPhone.Create(this,475, 90, 800, 115); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 10, 120, 90, 145);
	m_wndWebsite.Create(this,95, 120, 385, 145); 
	m_wndEmailLabel.Create(this, _T("Email"), 390, 120, 470, 145);
	m_wndEmail.Create(this,475, 120, 800, 145); 
	m_wndUpdate.Create(this, _T("&Update"), 585, 155, 655, 180);
	m_wndSave.Create(this, _T("&Save"), 660, 155, 730, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 155, 805, 180);
	m_wndConfiguration.Create(this, _T("Configuration"), 5, 155, 85, 180);
	m_wndConfigList.Create(this,5, 185, 805, 620); 
	m_wndConfigList.GetWindowRect(&rect);
	ScreenToClient(&rect);
	m_wndImage.Create(this, &rect);


}
void CSysCompanySetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndConfigList.ShowWindow(SW_HIDE);
	m_wndID.SetLimitText(5);
	m_wndID.SetCheckValue(TRUE);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndType.SetCheckValue(TRUE);
	m_wndType.LimitText(1);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(TRUE);
	m_wndProvill.SetCheckValue(TRUE);
	m_wndDistrict.SetCheckValue(TRUE);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(TRUE);
	m_wndPhone.SetLimitText(32);
//	m_wndPhone.SetCheckValue(TRUE);
	m_wndWebsite.SetLimitText(35);
//	m_wndWebsite.SetCheckValue(TRUE);
	m_wndEmail.SetLimitText(35);
//	m_wndEmail.SetCheckValue(TRUE);


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
	m_wndConfigList.InsertColumn(4, _T("Data Type"), CFMT_TEXT, 50);
	m_sys_companyTbl.SetTableName(_T("sys_company"));
	m_sys_companyTbl.AddField(_T("sc_createdby"), dfText, 15); 
	m_sys_companyTbl.AddField(_T("sc_createddate"), dfDateTime, 4); 
	m_sys_companyTbl.AddField(_T("sc_updatedby"), dfText, 15); 
	m_sys_companyTbl.AddField(_T("sc_updateddate"), dfDateTime, 4); 
	m_sys_companyTbl.AddField(_T("sc_id"), dfText, 7); 
	m_sys_companyTbl.AddField(_T("sc_name"), dfText, 254); 
	m_sys_companyTbl.AddField(_T("sc_address"), dfText, 254); 
	m_sys_companyTbl.AddField(_T("sc_phone"), dfText, 32);
	m_sys_companyTbl.AddField(_T("sc_website"), dfText, 35); 
	m_sys_companyTbl.AddField(_T("sc_email"), dfText, 35); 
//	m_sys_companyTbl.AddField(_T("sc_bankact"), dfText, 13); 
	m_sys_companyTbl.AddField(_T("sc_type"), dfText, 1); 
	m_sys_companyTbl.AddField(_T("sc_provid"), dfInteger); 
	m_sys_companyTbl.AddField(_T("sc_distid"), dfLong); 
	m_wndImage.SetAutoResize(false);
	if (!m_szFileName.IsEmpty())
		m_wndImage.SetFileName(m_szFileName, true);
	
}
void CSysCompanySetup::OnSetWindowEvents(){
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
	m_wndConfigList.SetWindowText(_T("Config"));
	m_wndConfigList.AddEvent(1, _T("Load Config"), _OnConfigListLoadFnc, 0, VK_DELETE, 0);
	m_wndConfigList.AddEvent(2, _T("Refresh"), _OnConfigListRefreshItemFnc, 0, VK_F5, 0);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESCompanyFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESCompanyFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESCompanyFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESCompanyFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESCompanyFnc, 0, 'T', VK_CONTROL);
*/
	GetDataToScreen();
	OnConfigListLoadData();
}
void CSysCompanySetup::OnDoDataExchange(CDataExchange* pDX){
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
void CSysCompanySetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_company"));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("sc_id"), m_szID);
		rs.GetValue(_T("sc_name"), m_szName);
		rs.GetValue(_T("sc_address"), m_szAddress);
		rs.GetValue(_T("sc_phone"), m_szPhone);
		rs.GetValue(_T("sc_website"), m_szWebsite);
		rs.GetValue(_T("sc_email"), m_szEmail);
		rs.GetValue(_T("sc_type"), m_szTypeKey);
		rs.GetValue(_T("sc_provid"), m_szProvillKey);
		rs.GetValue(_T("sc_distid"), m_szDistrictKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CSysCompanySetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_sys_companyTbl.SetValue(_T("sc_updatedby"), pMF->GetCurrentUser());
	m_sys_companyTbl.SetValue(_T("sc_updateddate"), pMF->GetSysDateTime());
	m_sys_companyTbl.SetValue(_T("sc_id"), m_szID);
	m_sys_companyTbl.SetValue(_T("sc_name"), m_szName);
	m_sys_companyTbl.SetValue(_T("sc_address"), m_szAddress);
	m_sys_companyTbl.SetValue(_T("sc_phone"), m_szPhone);
	m_sys_companyTbl.SetValue(_T("sc_website"), m_szWebsite);
	m_sys_companyTbl.SetValue(_T("sc_email"), m_szEmail);
	m_sys_companyTbl.SetValue(_T("sc_type"), m_szTypeKey);
	m_sys_companyTbl.SetValue(_T("sc_provid"), m_szProvillKey);
	m_sys_companyTbl.SetValue(_T("sc_distid"), m_szDistrictKey);

}
void CSysCompanySetup::SetDefaultValues(){

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
int CSysCompanySetup::SetMode(int nMode)
{ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 1, 2, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, 2, -1); 
			m_wndUpdate.SetFocus();
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
/*int CSysCompanySetup::OnIDChange(){
	return 0;
} */
/*int CSysCompanySetup::OnIDSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnIDKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnIDCheckValue(){
	return 0;
} 
int CSysCompanySetup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysCompanySetup::OnTypeSelendok(){
	 return 0;
}
/*int CSysCompanySetup::OnTypeSetfocus(){
	 return 0;
}*/
/*int CSysCompanySetup::OnTypeKillfocus(){
	 return 0;
}*/
int CSysCompanySetup::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey()){
		szWhere.Format(_T(" AND ss_code='%s'"), m_szTypeKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_hospital_type' %s ORDER BY ss_code "), szWhere);
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
}
/*int CSysCompanySetup::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysCompanySetup::OnNameChange(){
	return 0;
} */
/*int CSysCompanySetup::OnNameSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnNameKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnNameCheckValue(){
	m_wndName.GetWindowText(m_szName);
	InitCap(m_szName, m_szName);
	UpdateData(false);
	return 0;
} 
int CSysCompanySetup::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysCompanySetup::OnProvillSelendok(){
	m_wndDistrict.DeleteAllItems();
	m_wndDistrict.SetCurSel(-1);
	 return 0;
}
/*int CSysCompanySetup::OnProvillSetfocus(){
	 return 0;
}*/
/*int CSysCompanySetup::OnProvillKillfocus(){
	 return 0;
}*/
int CSysCompanySetup::OnProvillLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndProvill.IsSearchKey() && ToLong(m_szProvillKey) > 0)
	{
		szWhere.Format(_T(" WHERE sp_id = %ld"), ToLong(m_szProvillKey));
	}

	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov %s ORDER BY sp_id "), szWhere);
	
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

}
/*int CSysCompanySetup::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
int CSysCompanySetup::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysCompanySetup::OnDistrictSelendok(){
	 return 0;
}
/*int CSysCompanySetup::OnDistrictSetfocus(){
	 return 0;
}*/
/*int CSysCompanySetup::OnDistrictKillfocus(){
	 return 0;
}*/
int CSysCompanySetup::OnDistrictLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndDistrict.IsSearchKey() && ToLong(m_szDistrictKey) > 0)
	{
		szWhere.Format(_T(" AND sd_id=%ld "), ToLong(m_szDistrictKey));
	}

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE sd_provid=%ld %s ORDER BY sd_id "), ToLong(m_szProvillKey), szWhere);

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
	
}
/*int CSysCompanySetup::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysCompanySetup::OnAddressChange(){
	return 0;
} */
/*int CSysCompanySetup::OnAddressSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnAddressKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnAddressCheckValue(){
	return 0;
} 
/*int CSysCompanySetup::OnPhoneChange(){
	return 0;
} */
/*int CSysCompanySetup::OnPhoneSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnPhoneKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnPhoneCheckValue(){
	return 0;
} 
/*int CSysCompanySetup::OnWebsiteChange(){
	return 0;
} */
/*int CSysCompanySetup::OnWebsiteSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnWebsiteKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnWebsiteCheckValue(){
	return 0;
} 
/*int CSysCompanySetup::OnEmailChange(){
	return 0;
} */
/*int CSysCompanySetup::OnEmailSetfocus(){
	return 0;
} */
/*int CSysCompanySetup::OnEmailKillfocus(){
	return 0;
} */
int CSysCompanySetup::OnEmailCheckValue(){
	return 0;
} 
int CSysCompanySetup::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditVIMESCompany();
	 return 0;
} 
int CSysCompanySetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveVIMESCompany();
	 return 0;
} 
int CSysCompanySetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelVIMESCompany();
	 return 0;

} 
void CSysCompanySetup::OnConfigurationSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if (bConfig)
	{
		
		CString tmpStr;
		TranslateString(_T("Configuration"), tmpStr);
		m_wndConfiguration.SetWindowText(tmpStr);
		
		m_wndImage.ShowWindow(SW_SHOW);
		m_wndConfigList.ShowWindow(SW_HIDE);
	}
	else
	{
		CSysConfigConfirmDialog dlg(this);
		if (dlg.DoModal()!=IDOK){
			return;
		}
		m_wndConfiguration.SetWindowText(_T("OK"));
		m_wndImage.ShowWindow(SW_HIDE);
		m_wndConfigList.ShowWindow(SW_SHOW);
		OnConfigListLoadData();
	}
	bConfig = !bConfig;
} 
void CSysCompanySetup::OnConfigListDblClick()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel;
	nSel = m_wndConfigList.GetCurSel();
	CSysConfigEditDialog dlg(this);
	dlg.m_nSTT = ToInt(m_wndConfigList.GetItemText(nSel, 0));
	dlg.m_szID= m_wndConfigList.GetItemText(nSel, 1);
	dlg.m_szDescription = m_wndConfigList.GetItemText(nSel, 2);
	dlg.m_szValue = m_wndConfigList.GetItemText(nSel, 3);
	dlg.m_szDataTypeKey = m_wndConfigList.GetItemText(nSel, 4);
	dlg.SetMode(VM_EDIT);
	if (dlg.DoModal()==IDOK)
		OnConfigListLoadData();
	
} 
void CSysCompanySetup::OnConfigListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
} 
int CSysCompanySetup::OnConfigListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
long CSysCompanySetup::OnConfigListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sc_id as STT, sc_name as ID, sc_desc as Description, sc_val as Value, (select ss_desc from sys_sel where ss_id = 'vimes_data_type' and ss_code = sc_type) as DataType FROM sys_config ORDER BY sc_id"));
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
}
int CSysCompanySetup::OnAddVIMESCompany(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CSysCompanySetup::OnEditVIMESCompany(){
 //	if(GetMode() != VM_VIEW) 
 //		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	m_wndID.SetFocus();
	return 0;  
 
} 
int CSysCompanySetup::OnDeleteVIMESCompany(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESCompany(); 
 		OnVIMESCompanyLoadData(); 
 	} */ return 0;
 } 
int CSysCompanySetup::OnSaveVIMESCompany(){ 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_company "));
	CRecord rs(&pMF->m_db);
	int ret = rs.ExecSQL(szSQL);
	if(ret <=0 )
	{
		m_sys_companyTbl.SetValue(_T("sc_createdby"), pMF->GetCurrentUser());
		m_sys_companyTbl.SetValue(_T("sc_createddate"), pMF->GetSysDateTime());
 		szSQL = m_sys_companyTbl.GetInsertSQL(); 
	}
	else
	{ 
 		szSQL = m_sys_companyTbl.GetUpdateSQL(_T("sc_createdby,sc_createddate")); 
 	} 

 	ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnVIMESCompanyListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CSysCompanySetup::OnCancelVIMESCompany(){ 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CSysCompanySetup::OnVIMESCompanyListLoadData(){
	return 0;
}
void CSysCompanySetup::Refresh()
{
	static bool bLoaded = false;
	if (!bLoaded)
	{
		GetDataToScreen();
		bLoaded = true;
	}
}
BOOL CSysCompanySetup::PreTranslateMessage(MSG* pMsg){
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam==VK_ESCAPE)
	{
		SetMode(VM_VIEW);
		return true;
	}
	return CGuiView::PreTranslateMessage(pMsg);
}
int CSysCompanySetup::OnConfigListLoad()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL;
	int nCount;
	if (SysCheckConfig()<0){
		ExportConfigField();
		szSQL.Format(_T("DELETE FROM sys_config WHERE sc_name NOT IN (SELECT column_name FROM INFORMATION_SCHEMA.COLUMNS WHERE table_name = 'hms_config')"));
		nCount = pMF->ExecSQL(szSQL);	
		if (nCount > 0)
			ShowMessageBox(_T("Synchronize sucessfully!"), MB_ICONINFORMATION);
		else
			return -1;
	}
	OnConfigListLoadData();
	szSQL.Empty();
	for (int i=0;i<m_wndConfigList.GetItemCount();i++){
		szSQL.AppendFormat(_T(" UPDATE sys_config") \
					_T(" SET sc_val = (select %s from hms_config) ") \
					_T(" WHERE sc_name = '%s';"), m_wndConfigList.GetItemText(i, 1), m_wndConfigList.GetItemText(i, 1));	
	}
	nCount = pMF->ExecSQL(szSQL);
	OnConfigListLoadData();
	return nCount;
}
int CSysCompanySetup::SysCheckConfig(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCount;
	szSQL.Format(_T("SELECT sys_check_config() as count"));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("count"), nCount);
	if (nCount<0)
		ShowMessageBox(_T("Missing config!"), MB_ICONASTERISK);
	else
		ShowMessageBox(_T("Config loaded"), MB_ICONINFORMATION);
	return nCount;

}
void CSysCompanySetup::ExportConfigField(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nRow;
	int nIndex=1;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 60);
	xls.SetCellMergedColumns(0, 0, 4);
	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 11);
	nRow = 3;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(1, nRow, _T("Field Name"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(2, nRow, _T("Description"), FMT_TEXT | FMT_CENTER, true);
	//command
	szSQL.Format(_T("SELECT sc_name as name, sc_desc as desc FROM sys_config WHERE sc_name NOT IN (SELECT column_name FROM INFORMATION_SCHEMA.COLUMNS WHERE table_name = 'hms_config')"));
	rs.ExecSQL(szSQL);
	nRow = 4;
	while (!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("desc"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.MoveNext();
		nRow++;
		nIndex++;
	}
	xls.Save(_T("Exports\\CacTruongConfigThieu.xls"));
}