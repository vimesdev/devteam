#include "SysDepartment_V2.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "SearchPopup.h"

static int _OnFindNameChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnFindNameChange();
}
/*static int _OnFindNameSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnFindNameKillfocus();} */ 
/*static int _OnFindNameKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnFindNameKillfocus();
} */
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnFindNameCheckValue();
} 
static int _OnDeptListLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListLoadData();
} 
static int _OnDeptListDblClickFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListDblClick();
} 
static int _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnDeptListSetActiveFnc(CWnd *pWnd){
	 ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListSetActive();
	 return 0;
} 
static int _OnDeptListAddRoomFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListDblClick();
}

/*static void _OnChiefphysicianAddNewFnc(CWnd *pWnd){
	((CSysDepartmentSetup_V2 *)pWnd)->OnChiefphysicianAddNew();
}*/

/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnIDCheckValue();
} 
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysDepartmentSetup_V2* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnTypeAddNew();
}*/
static int _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysDepartmentSetup_V2* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnCategorySelendokFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnCategorySelendok();
}
/*static int _OnCategorySetfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnCategoryKillfocus();
}*/
/*static int _OnCategoryKillfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnCategoryKillfocus();
}*/
static int _OnCategoryLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnCategoryLoadData();
}
/*static int _OnCategoryAddNewFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2 *)pWnd)->OnCategoryAddNew();
}*/
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnNameCheckValue();
} 
/*static int _OnZoneChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnZoneChange();
} */
/*static int _OnZoneSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnZoneKillfocus();} */ 
/*static int _OnZoneKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnZoneCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup_V2 *pVw = (CSysDepartmentSetup_V2 *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup_V2 *pVw = (CSysDepartmentSetup_V2 *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup_V2 *pVw = (CSysDepartmentSetup_V2 *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup_V2 *pVw = (CSysDepartmentSetup_V2 *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup_V2 *pVw = (CSysDepartmentSetup_V2 *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnAddVIMESDepartment();
} 
static int _OnEditVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnEditVIMESDepartment();
} 
static int _OnDeleteVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnDeleteVIMESDepartment();
} 
static int _OnSaveVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnSaveVIMESDepartment();
} 
static int _OnCancelVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup_V2*)pWnd)->OnCancelVIMESDepartment();
}
static int _OnAliasCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnAliasCheckValue();
}
static int _OnInsCodeCheckValueFnc(CWnd *pWnd)
{
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnInsCodeCheckValue();
}
static int _OnDeptListSearchFnc(CWnd *pWnd)
{
	 ((CSysDepartmentSetup_V2*)pWnd)->OnDeptListSearch();
	 return 0;
}
static int _OnBedListSearchFnc(CWnd *pWnd)
{
	 ((CSysDepartmentSetup_V2*)pWnd)->OnBedListSearch();
	 return 0;
}

static int _OnTenkhoaTCCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup_V2 *)pWnd)->OnTenkhoaTCCheckValue();
} 

CSysDepartmentSetup_V2::CSysDepartmentSetup_V2(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CSysDepartmentSetup_V2::~CSysDepartmentSetup_V2(){
}
void CSysDepartmentSetup_V2::OnCreateComponents()
{
	m_wndDeptList.Create(this,10, 30, 675, 404); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 409, 101, 434);
	m_wndID.Create(this,104, 409, 174, 434); 
	m_wndAliasNameLabel.Create(this, _T("AliasName"), 180, 409, 229, 434);
	m_wndAlias.Create(this,233, 409, 675, 434); 
	m_wndDepartmentInformations.Create(this, _T("Department Informations"), 5, 5, 680, 499);
	m_wndNameLabel.Create(this, _T("Name"), 10, 439, 101, 464);
	m_wndName.Create(this,104, 439, 675, 464); 
	m_wndTenkhoaTCLabel.Create(this, _T("Tên khoa TC"), 10, 469, 101, 494);
	m_wndTenkhoaTC.Create(this,104, 469, 675, 494); 
	m_wndAdd.Create(this, _T("&Add"), 279, 505, 354, 530);
	m_wndEdit.Create(this, _T("&Edit"), 359, 505, 434, 530);
	m_wndDelete.Create(this, _T("&Delete"), 439, 505, 514, 530);
	m_wndSave.Create(this, _T("&Save"), 519, 505, 594, 530);
	m_wndCancel.Create(this, _T("&Cancel"), 599, 505, 674, 530);
	
	
	m_wndFindName.Create(this, 0, 0, 0, 0);
	m_wndFindName.ShowWindow(SW_HIDE);
	m_wndFindName.EnableWindow(FALSE);

	m_wndFindNameLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndFindNameLabel.ShowWindow(SW_HIDE);
	m_wndFindNameLabel.EnableWindow(FALSE);

}
void CSysDepartmentSetup_V2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndFindName.SetLimitText(35);
//	m_wndFindName.SetCheckValue(TRUE);
	m_wndID.SetLimitText(12);
	m_wndID.SetCheckValue(true);
	m_wndAlias.SetLimitText(20);
	m_wndAlias.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndType.SetCheckValue(TRUE);
	m_wndType.LimitText(3);
//	m_wndCategory.SetCheckValue(TRUE);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(TRUE);
	m_wndZone.SetLimitText(7);
	m_wndTenkhoaTC.SetLimitText(21);
//	m_wndZone.SetCheckValue(TRUE);
	m_wndInsCode.SetLimitText(21);
	//m_wndInsCode.SetCheckValue(true);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDeptList.InsertColumn(1, _T("Alias Name"), CFMT_TEXT, 100);
	m_wndDeptList.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndDeptList.InsertColumn(3, _T("Type"), CFMT_TEXT, 50);
	m_wndDeptList.InsertColumn(4, _T("Mã TC"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(5, _T("Active"), CFMT_TEXT, 50);
	
	
	m_sys_deptTbl.SetTableName(_T("sys_dept"));
	m_sys_deptTbl.AddField(_T("sd_createdby"), dfText, 15); 
	m_sys_deptTbl.AddField(_T("sd_createddate"), dfDateTime, 4); 
	m_sys_deptTbl.AddField(_T("sd_updatedby"), dfText, 15); 
	m_sys_deptTbl.AddField(_T("sd_updateddate"), dfDateTime, 4); 
	m_sys_deptTbl.AddField(_T("sd_id"), dfText, 7); 
	m_sys_deptTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_deptTbl.AddField(_T("sd_type"), dfText, 3); 
	m_sys_deptTbl.AddField(_T("sd_category"), dfInteger); 
	m_sys_deptTbl.AddField(_T("sd_zone"), dfText, 7);
	m_sys_deptTbl.AddField(_T("SD_ID_ALIAS"), dfText, 20);
	m_sys_deptTbl.AddField(_T("SD_INSURANCEID"), dfText, 21);
	m_sys_deptTbl.AddField(_T("sd_truongkhoa_id"), dfText, 15);
	m_sys_deptTbl.AddField(_T("sd_cchn_truong_khoa"), dfText, 20);
	m_sys_deptTbl.AddField(_T("sd_ten_truong_khoa"), dfText, 54);
	m_sys_deptTbl.AddField(_T("SD_MAKHOA_TAICHINH"), dfText, 21);

//	OnDeptListLoadData();
	SetMode(VM_NONE);

}
void CSysDepartmentSetup_V2::OnSetWindowEvents()
{
	m_wndFindName.SetEvent(WE_CHANGE, _OnFindNameChangeFnc);
	//m_wndFindName.SetEvent(WE_SETFOCUS, _OnFindNameSetfocusFnc);
	//m_wndFindName.SetEvent(WE_KILLFOCUS, _OnFindNameKillfocusFnc);
	m_wndFindName.SetEvent(WE_CHECKVALUE, _OnFindNameCheckValueFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	//m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDeptList.AddEvent(0, _T("-"));
	//m_wndDeptList.AddEvent(2, _T("Add Ward"), _OnDeptListAddWardFnc);
	
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(1, _T("Search"), _OnDeptListSearchFnc);
	m_wndAlias.SetEvent(WE_CHECKVALUE, _OnAliasCheckValueFnc);
	
	//m_wndChiefphysician.SetEvent(WE_ADDNEW, _OnChiefphysicianAddNewFnc);
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
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndZone.SetEvent(WE_CHANGE, _OnZoneChangeFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);	
	m_wndInsCode.SetEvent(WE_CHECKVALUE, _OnInsCodeCheckValueFnc);
	m_wndTenkhoaTC.SetEvent(WE_CHECKVALUE, _OnTenkhoaTCCheckValueFnc);
/*	
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESDepartmentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESDepartmentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESDepartmentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESDepartmentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESDepartmentFnc, 0, 'T', VK_CONTROL);
*/
	OnDeptListLoadData();
}
void CSysDepartmentSetup_V2::OnDoDataExchange(CDataExchange* pDX){
	//DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);
	DDX_TextEx(pDX, m_wndChiefphysician.GetDlgCtrlID(), m_szChiefphysicianKey);
	DDX_Text(pDX, m_wndAlias.GetDlgCtrlID(), m_szAlias);
	DDX_Text(pDX, m_wndInsCode.GetDlgCtrlID(), m_szInsCode);
	DDX_Text(pDX, m_wndTenkhoaTC.GetDlgCtrlID(), m_szTenkhoaTC);

}
void CSysDepartmentSetup_V2::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(!m_szID.IsEmpty())
	{
		szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_id='%s' "), m_szID);
		rs.ExecSQL(szSQL);
		if(rs.GetRecordCount() > 0){
			rs.GetValue(_T("sd_name"), m_szName);
			rs.GetValue(_T("sd_type"), m_szTypeKey);
			rs.GetValue(_T("sd_category"), m_szCategoryKey);
			rs.GetValue(_T("sd_zone"), m_szZone);
			rs.GetValue(_T("sd_truongkhoa_id"), m_szChiefphysicianKey);
			rs.GetValue(_T("SD_ID_ALIAS"), m_szAlias);
			rs.GetValue(_T("SD_INSURANCEID"), m_szInsCode);
			rs.GetValue(_T("SD_MAKHOA_TAICHINH"), m_szTenkhoaTC);

			
			m_szOldID = m_szID;
			SetMode(VM_VIEW);
		}
		else
			SetMode(VM_NONE);

	}
	else
	{
		SetDefaultValues();
		SetMode(VM_NONE);
	}
	m_wndAdd.EnableWindow(false);
	m_wndDelete.EnableWindow(false);
	m_wndAlias.SetReadOnly(true);
	m_wndType.EnableWindow(false);
	m_wndName.SetReadOnly(true);

	UpdateData(false);
}
void CSysDepartmentSetup_V2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		m_sys_deptTbl.SetValue(_T("sd_updatedby"), pMF->GetCurrentUser());
		m_sys_deptTbl.SetValue(_T("sd_updateddate"), pMF->GetSysDateTime());
	}
	m_sys_deptTbl.SetValue(_T("sd_createdby"), pMF->GetCurrentUser());
	m_sys_deptTbl.SetValue(_T("sd_createddate"), pMF->GetSysDateTime());
	m_sys_deptTbl.SetValue(_T("sd_id"), m_szID);
	m_sys_deptTbl.SetValue(_T("sd_name"), m_szName);
	m_sys_deptTbl.SetValue(_T("sd_type"), m_szTypeKey);
	m_sys_deptTbl.SetValue(_T("sd_category"), m_szCategoryKey);
	m_sys_deptTbl.SetValue(_T("sd_zone"), m_szZone);
	m_sys_deptTbl.SetValue(_T("SD_ID_ALIAS"), m_szAlias);
	m_sys_deptTbl.SetValue(_T("SD_INSURANCEID"), m_szInsCode);

	m_sys_deptTbl.SetValue(_T("sd_truongkhoa_id"), m_szChiefphysicianKey);
	m_sys_deptTbl.SetValue(_T("sd_cchn_truong_khoa"),m_wndChiefphysician.GetCurrent(2));
	m_sys_deptTbl.SetValue(_T("sd_ten_truong_khoa"), m_wndChiefphysician.GetCurrent(1));
	m_sys_deptTbl.SetValue(_T("SD_MAKHOA_TAICHINH"), m_szTenkhoaTC);

}
void CSysDepartmentSetup_V2::SetDefaultValues(){

	m_szFindName.Empty();
	m_szID.Empty();
	m_szOldID.Empty();
	m_szAlias.Empty();
	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szName.Empty();
	m_szZone.Empty();
	m_szChiefphysicianKey.Empty();
	m_szInsCode.Empty();
	m_szTenkhoaTC.Empty();

}
int CSysDepartmentSetup_V2::SetMode(int nMode)
{ 
 		int nOldMode = GetMode(); 
		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndID.EnableWindow(true);
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 			
			m_wndName.SetFocus();			
			m_wndID.EnableWindow(false);
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
		m_wndFindName.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
int CSysDepartmentSetup_V2::OnFindNameChange(){ 
	OnDeptListLoadData();
	return 0;
}
/*int CSysDepartmentSetup_V2::OnFindNameSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnFindNameKillfocus(){
	return 0;
} */
int CSysDepartmentSetup_V2::OnFindNameCheckValue(){
	UpdateData(true);
	OnDeptListLoadData();
	m_wndFindName.SetToolTipMessage(_T(""));
	return -1;
} 

#include "HMSWardSetupDialog.h"
int CSysDepartmentSetup_V2::OnDeptWardAdd()
{
	CHMSWardSetupDialog dlg(this);
	dlg.m_szDeptID = m_szID;
	dlg.DoModal();
	return 0;
}

int CSysDepartmentSetup_V2::OnInsCodeCheckValue()
{
	return 0;
} 


#include "HMSRoomSetupDialog.h"
int CSysDepartmentSetup_V2::OnDeptListDblClick()
{
	
	 return 0;
} 
int CSysDepartmentSetup_V2::OnDeptListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0 || nNewItem >= m_wndDeptList.GetItemCount())
	{
		m_szID.Empty();
		return 0;
	}

	int nSel = m_wndDeptList.GetCurSel();
	if(nSel < 0)
		return -1;

	m_szID = m_wndDeptList.GetItemText(nSel, 0);
	GetDataToScreen();	
	return 0;
}


int CSysDepartmentSetup_V2::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(!OnCheckBeforeDelete())
		return -1;
	if(GetMode() != VM_VIEW) 
 		return -1;
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  sys_dept WHERE  sd_id='%s'  "), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		int nSel = m_wndDeptList.GetCurSel();
		m_wndDeptList.DeleteItem(nSel);
		m_wndDeptList.SetCurSel(nSel-1);
 	}
	 return 0;
} 

void CSysDepartmentSetup_V2::OnDeptListSetActive(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndDeptList.GetCurSel();
	if (nSel < 0) return;
	CString szActive = m_wndDeptList.GetItemText(nSel, 5);
	CString szSQL;
	szSQL.Format(_T("UPDATE sys_dept SET sd_isactive = '%s' WHERE sd_id = '%s'"), szActive==_T("Y")?_T("N"):_T("Y"), m_szID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0) OnDeptListLoadData();
}




bool CSysDepartmentSetup_V2::OnCheckBeforeDelete(){
	//check if deptid using in the any tables then don't allow delete record;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_roomlist WHERE hrl_deptid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("This department has setup room. Can not delete it"), MB_OK);
		return false;
	}
	return true;
}
int CSysDepartmentSetup_V2::OnDeptListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL, szWhere;
	if(!m_szFindName.IsEmpty())
		szWhere.Format(_T(" WHERE lower(sd_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFindName); 
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as type, sd_isactive active,") \
				_T("(select ss_desc from sys_sel where ss_id = 'hms_dept_category' and ss_code = sd_category) as category, ") \
				_T("SD_ID_ALIAS as aliasName, SD_INSURANCEID as inscode, SD_MAKHOA_TAICHINH as makhoatc") \
				_T(" FROM sys_dept ORDER BY sd_id "));
	m_wndDeptList.BeginLoad(); 
	m_wndDeptList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("aliasName")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("type")),
			rs.GetValue(_T("makhoatc")), 
			rs.GetValue(_T("active")),NULL);

		    
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
}
/*int CSysDepartmentSetup_V2::OnIDChange(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnIDSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnIDKillfocus(){
	return 0;
} */
int CSysDepartmentSetup_V2::OnIDCheckValue(){
	UpdateData(true);
	if(m_szID.IsEmpty()){
		return -1;
	}
	else
	{
		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		if(GetMode() == VM_ADD)
			szSQL.Format(_T("SELECT count(*) FROM sys_dept WHERE lower(sd_id)=lower('%s') "), m_szID);
		else
			szSQL.Format(_T("SELECT count(*) FROM sys_dept WHERE lower(sd_id)=lower('%s') AND lower(sd_id) <> lower('%s') "), m_szID, m_szOldID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndID.SetToolTipMessage(_T("ID is existing in the database"));
			return -1;
		}
	}
	return 0;
} 
int CSysDepartmentSetup_V2::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysDepartmentSetup_V2::OnTypeSelendok(){
	 return 0;
}
/*int CSysDepartmentSetup_V2::OnTypeSetfocus(){
	 return 0;
}*/
/*int CSysDepartmentSetup_V2::OnTypeKillfocus(){
	 return 0;
}*/
int CSysDepartmentSetup_V2::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndType.IsSearchKey()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_dept_type' %s ORDER BY ss_code "), szWhere);

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


/*int CSysDepartmentSetup_V2::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
int CSysDepartmentSetup_V2::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysDepartmentSetup_V2::OnCategorySelendok(){
	 return 0;
}
int CSysDepartmentSetup_V2::OnAliasCheckValue(){
	return 0;
}
/*int CSysDepartmentSetup_V2::OnCategorySetfocus(){
	 return 0;
}*/
/*int CSysDepartmentSetup_V2::OnCategoryKillfocus(){
	 return 0;
}*/
int CSysDepartmentSetup_V2::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szCategoryKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_dept_category' %s ORDER BY ss_code "), szWhere);
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


/*int CSysDepartmentSetup_V2::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysDepartmentSetup_V2::OnNameChange(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnNameSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnNameKillfocus(){
	return 0;
} */
int CSysDepartmentSetup_V2::OnNameCheckValue(){
	return 0;
} 
/*int CSysDepartmentSetup_V2::OnZoneChange(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnZoneSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup_V2::OnZoneKillfocus(){
	return 0;
} */
int CSysDepartmentSetup_V2::OnZoneCheckValue(){
	return 0;
} 



void CSysDepartmentSetup_V2::OnChiefphysicianSelendok(){
	 
}
/*void CSysDepartmentSetup_V2::OnChiefphysicianSetfocus(){
	
}*/
/*void CSysDepartmentSetup_V2::OnChiefphysicianKillfocus(){
	
}*/
long CSysDepartmentSetup_V2::OnChiefphysicianLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndChiefphysician.IsSearchKey() && !m_szChiefphysicianKey.IsEmpty())
	{
		szWhere.Format(_T(" AND su_userid='%s' "), m_szChiefphysicianKey);
	}
	if(!m_szID.IsEmpty())
		szWhere.AppendFormat(_T(" and su_deptid='%s' "), m_szID);

	m_wndChiefphysician.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name , trim(su_certificate) as cchn ") \
		         _T("FROM sys_user ") \
				 _T("WHERE su_groupid NOT IN('F') AND su_isactive = 'Y' and length(trim(su_certificate)) >4  %s ") \
				 _T("ORDER BY su_userid"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChiefphysician.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("cchn")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysDepartmentSetup_V2::OnChiefphysicianAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CSysDepartmentSetup_V2::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup_V2::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup_V2::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup_V2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup_V2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup_V2::OnAddVIMESDepartment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	m_wndID.SetFocus();
	return 0;
} 
int CSysDepartmentSetup_V2::OnEditVIMESDepartment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	//m_wndID.SetReadOnly(true);
	return 0;  
 
} 
int CSysDepartmentSetup_V2::OnDeleteVIMESDepartment(){
 	OnDeptListDeleteItem();
	return 0;
 } 
int CSysDepartmentSetup_V2::OnTenkhoaTCCheckValue()
{
	return 0;
} 
int CSysDepartmentSetup_V2::OnSaveVIMESDepartment(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	if(!IsValidateData()) 
 		return -1; 

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	
 	if(GetMode() == VM_ADD){ 
		szSQL = m_sys_deptTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE sd_id='%s'  "), m_szOldID); 
 		szSQL = m_sys_deptTbl.GetUpdateSQL(_T("sd_createdby,sd_createddate")); 
 		szSQL += szWhere; 
 	} 
	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnVIMESDepartmentListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
		m_wndAdd.SetFocus();
		OnDeptListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CSysDepartmentSetup_V2::OnCancelVIMESDepartment(){
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
int CSysDepartmentSetup_V2::OnVIMESDepartmentListLoadData(){
	return 0;
}

void CSysDepartmentSetup_V2::Refresh()
{
	static bool bLoaded = false;
	if(!bLoaded){
		OnDeptListLoadData();
		bLoaded = true;
	}
}
void CSysDepartmentSetup_V2::OnDeptListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndDeptList);
	newPopup->m_nSearchCol = 2;
	newPopup->ShowPopup(&m_wndDeptList);
	
}
void CSysDepartmentSetup_V2::OnRoomListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndRoom);
	newPopup->ShowPopup(&m_wndRoom);
} 
void CSysDepartmentSetup_V2::OnBedListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndBed);
	newPopup->ShowPopup(&m_wndBed);
} 