#include "SysDepartment.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSBedSetupDialog.h"
#include "HMSDynBedListSetupDialog.h"
#include "SearchPopup.h"

static int _OnFindNameChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnFindNameChange();
}
/*static int _OnFindNameSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnFindNameKillfocus();} */ 
/*static int _OnFindNameKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnFindNameKillfocus();
} */
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnFindNameCheckValue();
} 
static int _OnDeptListLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnDeptListLoadData();
} 
static int _OnDeptListDblClickFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnDeptListDblClick();
} 
static int _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysDepartmentSetup*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnDeptListSetActiveFnc(CWnd *pWnd){
	 ((CSysDepartmentSetup*)pWnd)->OnDeptListSetActive();
	 return 0;
} 
static int _OnDeptListAddRoomFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup*)pWnd)->OnDeptListDblClick();
}
static int _OnDeptListAddWardFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup*)pWnd)->OnDeptWardAdd();
} 

static int _OnDeptListAddBedFnc(CWnd *pWnd){
	 ((CSysDepartmentSetup*)pWnd)->OnDeptListAddBed();
	 return 0;
} 

static int _OnDeptListDynamicBedListFnc(CWnd *pWnd){
	 ((CSysDepartmentSetup*)pWnd)->OnDeptListDynamicBedList();
	 return 0;
}
static int _OnMachineSetupListFnc(CWnd *pWnd){
	 ((CSysDepartmentSetup*)pWnd)->OnMachineSetupList();
	 return 0;
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CSysDepartmentSetup*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysDepartmentSetup*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnRoomDeleteItem();
} 
static long _OnBedLoadDataFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup*)pWnd)->OnBedLoadData();
} 
static void _OnBedDblClickFnc(CWnd *pWnd){
	((CSysDepartmentSetup*)pWnd)->OnBedDblClick();
} 
static void _OnBedSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysDepartmentSetup*)pWnd)->OnBedSelectChange(nOldItem, nNewItem);
} 

static int _OnBedAddItemFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnBedAddItem();
}
static int _OnBedDeleteItemFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnBedDeleteItem();
}

static void _OnAddItemSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	pVw->OnAddItemSelect();
}
static void _OnChiefphysicianSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysDepartmentSetup* )pWnd)->OnChiefphysicianSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChiefphysicianSelendokFnc(CWnd *pWnd){
	((CSysDepartmentSetup *)pWnd)->OnChiefphysicianSelendok();
}
/*static void _OnChiefphysicianSetfocusFnc(CWnd *pWnd){
	((CSysDepartmentSetup *)pWnd)->OnChiefphysicianKillfocus();
}*/
/*static void _OnChiefphysicianKillfocusFnc(CWnd *pWnd){
	((CSysDepartmentSetup *)pWnd)->OnChiefphysicianKillfocus();
}*/
static long _OnChiefphysicianLoadDataFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnChiefphysicianLoadData();
}
/*static void _OnChiefphysicianAddNewFnc(CWnd *pWnd){
	((CSysDepartmentSetup *)pWnd)->OnChiefphysicianAddNew();
}*/

/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnIDCheckValue();
} 
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysDepartmentSetup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnTypeAddNew();
}*/
static int _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysDepartmentSetup* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnCategorySelendokFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnCategorySelendok();
}
/*static int _OnCategorySetfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnCategoryKillfocus();
}*/
/*static int _OnCategoryKillfocusFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnCategoryKillfocus();
}*/
static int _OnCategoryLoadDataFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnCategoryLoadData();
}
/*static int _OnCategoryAddNewFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup *)pWnd)->OnCategoryAddNew();
}*/
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnNameCheckValue();
} 
/*static int _OnZoneChangeFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnZoneChange();
} */
/*static int _OnZoneSetfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnZoneKillfocus();} */ 
/*static int _OnZoneKillfocusFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnZoneCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysDepartmentSetup *pVw = (CSysDepartmentSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnAddVIMESDepartment();
} 
static int _OnEditVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnEditVIMESDepartment();
} 
static int _OnDeleteVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnDeleteVIMESDepartment();
} 
static int _OnSaveVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnSaveVIMESDepartment();
} 
static int _OnCancelVIMESDepartmentFnc(CWnd *pWnd){
	 return ((CSysDepartmentSetup*)pWnd)->OnCancelVIMESDepartment();
}
static int _OnAliasCheckValueFnc(CWnd *pWnd){
	return ((CSysDepartmentSetup *)pWnd)->OnAliasCheckValue();
}
static int _OnInsCodeCheckValueFnc(CWnd *pWnd)
{
	return ((CSysDepartmentSetup *)pWnd)->OnInsCodeCheckValue();
}
static int _OnDeptListSearchFnc(CWnd *pWnd)
{
	 ((CSysDepartmentSetup*)pWnd)->OnDeptListSearch();
	 return 0;
}
static int _OnBedListSearchFnc(CWnd *pWnd)
{
	 ((CSysDepartmentSetup*)pWnd)->OnBedListSearch();
	 return 0;
}

CSysDepartmentSetup::CSysDepartmentSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CSysDepartmentSetup::~CSysDepartmentSetup(){
}
void CSysDepartmentSetup::OnCreateComponents()
{
	m_wndDepartmentInformations.Create(this, _T("Department Informations"), 5, 5, 455, 590);
	m_wndRoomList.Create(this, _T("Room List"), 460, 5, 805, 285);
	m_wndBedList.Create(this, _T("Bed List"), 460, 290, 805, 590);
	m_wndDeptList.Create(this,10, 30, 450, 404); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 409, 90, 434);
	m_wndID.Create(this,95, 409, 165, 434); 
	m_wndAliasNameLabel.Create(this, _T("AliasName"), 170, 409, 219, 434);
	m_wndAlias.Create(this,224, 409, 450, 434); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 441, 90, 466);
	m_wndType.Create(this,95, 441, 450, 466); 
	m_wndCategoryLabel.Create(this, _T("Category"), 170, 531, 219, 556);
	m_wndCategory.Create(this,225, 531, 450, 556); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 471, 90, 496);
	m_wndName.Create(this,95, 471, 450, 496); 
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 531, 90, 556);
	m_wndZone.Create(this,95, 531, 165, 556); 
	m_wndAdd.Create(this, _T("&Add"), 60, 595, 135, 620);
	m_wndEdit.Create(this, _T("&Edit"), 140, 595, 215, 620);
	m_wndDelete.Create(this, _T("&Delete"), 220, 595, 295, 620);
	m_wndSave.Create(this, _T("&Save"), 300, 595, 375, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 380, 595, 455, 620);
	m_wndRoom.Create(this,465, 30, 800, 280); 
	m_wndBed.Create(this,465, 315, 800, 585); 
	m_wndAddItem.Create(this, _T("Add Item"), 730, 595, 805, 620);
	m_wndChiefphysicianLabel.Create(this, _T("Bs trưởng khoa"), 10, 501, 90, 526);
	m_wndChiefphysician.Create(this,95, 501, 450, 526); 
	m_wndInsCodeLabel.Create(this, _T("Mã BH"), 11, 561, 91, 586);
	m_wndInsCode.Create(this,96, 561, 451, 586); 
	
	m_wndFindName.Create(this, 0, 0, 0, 0);
	m_wndFindName.ShowWindow(SW_HIDE);
	m_wndFindName.EnableWindow(FALSE);

	m_wndFindNameLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndFindNameLabel.ShowWindow(SW_HIDE);
	m_wndFindNameLabel.EnableWindow(FALSE);

}
void CSysDepartmentSetup::OnInitializeComponents(){
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
//	m_wndZone.SetCheckValue(TRUE);
	m_wndInsCode.SetLimitText(21);
	//m_wndInsCode.SetCheckValue(true);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDeptList.InsertColumn(1, _T("Alias Name"), CFMT_TEXT, 100);
	m_wndDeptList.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndDeptList.InsertColumn(3, _T("Type"), CFMT_TEXT, 50);
	m_wndDeptList.InsertColumn(4, _T("Mã BH"), CFMT_TEXT, 80);
	m_wndDeptList.InsertColumn(5, _T("Active"), CFMT_TEXT, 50);
	
	

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Phân Loại"), CFMT_TEXT, 150);

	m_wndBed.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndBed.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndChiefphysician.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChiefphysician.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndChiefphysician.InsertColumn(2, _T("CCHN"), CFMT_TEXT, 150);

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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

//	OnDeptListLoadData();
	SetMode(VM_NONE);

}
void CSysDepartmentSetup::OnSetWindowEvents()
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
	m_wndDeptList.SetWindowText(_T("Department List"));
	m_wndDeptList.AddEvent(1, _T("Add Room"), _OnDeptListAddRoomFnc);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(2, _T("Add Bed"), _OnDeptListAddBedFnc);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(3, _T("Dynamic Bed List"), _OnDeptListDynamicBedListFnc);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(4, _T("Machine List"), _OnMachineSetupListFnc);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(5, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(6, _T("Set Active/DeActive"), _OnDeptListSetActiveFnc);
	m_wndDeptList.AddEvent(0, _T("-"));
	m_wndDeptList.AddEvent(7, _T("Search"), _OnDeptListSearchFnc);
	m_wndAlias.SetEvent(WE_CHECKVALUE, _OnAliasCheckValueFnc);
	m_wndChiefphysician.SetEvent(WE_SELENDOK, _OnChiefphysicianSelendokFnc);
	//m_wndChiefphysician.SetEvent(WE_SETFOCUS, _OnChiefphysicianSetfocusFnc);
	//m_wndChiefphysician.SetEvent(WE_KILLFOCUS, _OnChiefphysicianKillfocusFnc);
	m_wndChiefphysician.SetEvent(WE_SELCHANGE, _OnChiefphysicianSelectChangeFnc);
	m_wndChiefphysician.SetEvent(WE_LOADDATA, _OnChiefphysicianLoadDataFnc);
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
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndInsCode.SetEvent(WE_CHECKVALUE, _OnInsCodeCheckValueFnc);
	m_wndRoom.SetWindowText(_T("Room List"));

	m_wndRoom.AddEvent(1, _T("Add Bed"), _OnDeptListAddBedFnc, 0, 0, 0);
	m_wndRoom.AddEvent(0, _T("-"));
	m_wndRoom.AddEvent(2, _T("Add Dynamic Bed"), _OnDeptListDynamicBedListFnc, 0, 0, 0);
	m_wndRoom.AddEvent(0, _T("-"));
	m_wndRoom.AddEvent(3, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRoom.AddEvent(0, _T("-"));
	m_wndRoom.AddEvent(4, _T("Search"), _OnDeptListSearchFnc);	

	m_wndBed.SetEvent(WE_SELCHANGE, _OnBedSelectChangeFnc);
	m_wndBed.SetEvent(WE_LOADDATA, _OnBedLoadDataFnc);
	m_wndBed.SetEvent(WE_DBLCLICK, _OnBedDblClickFnc);

	m_wndBed.SetWindowText(_T("Bed List"));
	m_wndBed.AddEvent(1, _T("Add Bed"), _OnBedAddItemFnc);
	m_wndBed.AddEvent(0, _T("-"));
	m_wndBed.AddEvent(2, _T("Delete"), _OnBedDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndBed.AddEvent(0, _T("-"));
	m_wndBed.AddEvent(3, _T("Search"), _OnBedListSearchFnc);	
	
	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
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
void CSysDepartmentSetup::OnDoDataExchange(CDataExchange* pDX){
	//DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);
	DDX_TextEx(pDX, m_wndChiefphysician.GetDlgCtrlID(), m_szChiefphysicianKey);
	DDX_Text(pDX, m_wndAlias.GetDlgCtrlID(), m_szAlias);
	DDX_Text(pDX, m_wndInsCode.GetDlgCtrlID(), m_szInsCode);

}
void CSysDepartmentSetup::GetDataToScreen(){
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
	UpdateData(false);
}
void CSysDepartmentSetup::GetScreenToData(){
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

}
void CSysDepartmentSetup::SetDefaultValues(){

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

}
int CSysDepartmentSetup::SetMode(int nMode){ 
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
int CSysDepartmentSetup::OnFindNameChange(){ 
	OnDeptListLoadData();
	return 0;
}
/*int CSysDepartmentSetup::OnFindNameSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup::OnFindNameKillfocus(){
	return 0;
} */
int CSysDepartmentSetup::OnFindNameCheckValue(){
	UpdateData(true);
	OnDeptListLoadData();
	m_wndFindName.SetToolTipMessage(_T(""));
	return -1;
} 

#include "HMSWardSetupDialog.h"
int CSysDepartmentSetup::OnDeptWardAdd(){
	CHMSWardSetupDialog dlg(this);
	dlg.m_szDeptID = m_szID;
	dlg.DoModal();
	return 0;
}

int CSysDepartmentSetup::OnInsCodeCheckValue()
{
	return 0;
} 


#include "HMSRoomSetupDialog.h"
int CSysDepartmentSetup::OnDeptListDblClick(){
	CHMSRoomSetupDialog dlg(this);
	dlg.m_szDeptID = m_szID;
	if (dlg.DoModal()==IDCANCEL)
		OnRoomLoadData();
	 return 0;
} 
int CSysDepartmentSetup::OnDeptListSelectChange(int nOldItem, int nNewItem){
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
	OnRoomLoadData();
	m_wndBed.DeleteAllItems();
	return 0;
}


int CSysDepartmentSetup::OnDeptListDeleteItem(){
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

void CSysDepartmentSetup::OnDeptListSetActive(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndDeptList.GetCurSel();
	if (nSel < 0) return;
	CString szActive = m_wndDeptList.GetItemText(nSel, 5);
	CString szSQL;
	szSQL.Format(_T("UPDATE sys_dept SET sd_isactive = '%s' WHERE sd_id = '%s'"), szActive==_T("Y")?_T("N"):_T("Y"), m_szID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0) OnDeptListLoadData();
}

void CSysDepartmentSetup::OnDeptListAddBed(){
	if(GetMode() != VM_VIEW) 
 		return;
	CHMSBedSetupDialog dlg(this);
	dlg.m_szDepartmentKey = m_szID;
	dlg.m_szRoomKey.Format(_T("%d"), m_nRoomID);
	if (dlg.DoModal()==IDCANCEL)
		OnBedLoadData();
}

#include "HMSDynBedSetupDialog.h"

void CSysDepartmentSetup::OnDeptListDynamicBedList(){
	if(GetMode() != VM_VIEW) 
 		return;
	CHMSDynBedSetupDialog dlg(this);
	dlg.m_szDepartmentKey = m_szID;
	dlg.DoModal();
//	CHMSDynBedListSetupDialog dlg(this);
//	dlg.m_szDepartmentKey = m_szID;
//	dlg.DoModal();
}

#include "HMSMachineSetupDialog.h"
void CSysDepartmentSetup::OnMachineSetupList(){
	
	CHMSMachineSetupDialog dlg(this);
	dlg.m_szDeptID= m_szID;
	dlg.DoModal();
}
bool CSysDepartmentSetup::OnCheckBeforeDelete(){
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
int CSysDepartmentSetup::OnDeptListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL, szWhere;
	if(!m_szFindName.IsEmpty())
		szWhere.Format(_T(" WHERE lower(sd_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFindName); 
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as type, sd_isactive active,") \
				_T("(select ss_desc from sys_sel where ss_id = 'hms_dept_category' and ss_code = sd_category) as category, ") \
				_T("SD_ID_ALIAS as aliasName, SD_INSURANCEID as inscode") \
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
			rs.GetValue(_T("inscode")), 
			rs.GetValue(_T("active")),NULL);

		    
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
}
/*int CSysDepartmentSetup::OnIDChange(){
	return 0;
} */
/*int CSysDepartmentSetup::OnIDSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup::OnIDKillfocus(){
	return 0;
} */
int CSysDepartmentSetup::OnIDCheckValue(){
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
int CSysDepartmentSetup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysDepartmentSetup::OnTypeSelendok(){
	 return 0;
}
/*int CSysDepartmentSetup::OnTypeSetfocus(){
	 return 0;
}*/
/*int CSysDepartmentSetup::OnTypeKillfocus(){
	 return 0;
}*/
int CSysDepartmentSetup::OnTypeLoadData(){
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


/*int CSysDepartmentSetup::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
int CSysDepartmentSetup::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysDepartmentSetup::OnCategorySelendok(){
	 return 0;
}
int CSysDepartmentSetup::OnAliasCheckValue(){
	return 0;
}
/*int CSysDepartmentSetup::OnCategorySetfocus(){
	 return 0;
}*/
/*int CSysDepartmentSetup::OnCategoryKillfocus(){
	 return 0;
}*/
int CSysDepartmentSetup::OnCategoryLoadData(){
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


/*int CSysDepartmentSetup::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysDepartmentSetup::OnNameChange(){
	return 0;
} */
/*int CSysDepartmentSetup::OnNameSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup::OnNameKillfocus(){
	return 0;
} */
int CSysDepartmentSetup::OnNameCheckValue(){
	return 0;
} 
/*int CSysDepartmentSetup::OnZoneChange(){
	return 0;
} */
/*int CSysDepartmentSetup::OnZoneSetfocus(){
	return 0;
} */
/*int CSysDepartmentSetup::OnZoneKillfocus(){
	return 0;
} */
int CSysDepartmentSetup::OnZoneCheckValue(){
	return 0;
} 
void CSysDepartmentSetup::OnRoomDblClick(){
	OnDeptListAddBed();
} 
void CSysDepartmentSetup::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_nRoomID = ToInt(m_wndRoom.GetItemText(nNewItem, 0));
	OnBedLoadData();
} 
int CSysDepartmentSetup::OnRoomDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(!OnCheckBeforeDeleteRoom())
		return -1;
	if(GetMode() != VM_VIEW) 
 		return -1;
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_roomlist WHERE hrl_deptid = '%s' AND hrl_id=%d  "), m_szID, m_nRoomID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		int nSel = m_wndRoom.GetCurSel();
		m_wndRoom.DeleteItem(nSel);
		m_wndRoom.SetCurSel(nSel-1);
 	}
	 return 0;
} 
long CSysDepartmentSetup::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (!m_szID.IsEmpty())
		szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_section FROM hms_roomlist WHERE hrl_deptid = '%s' ORDER BY hrl_id"), m_szID);
	m_wndRoom.BeginLoad(); 
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndRoom.AddItems(rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("hrl_section")), 
			NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;
}
bool CSysDepartmentSetup::OnCheckBeforeDeleteRoom(){
	//check if roomid using in the any tables then don't allow delete record;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_bedlist WHERE hbl_deptid='%s' AND hbl_roomid = %d"), m_szID, m_nRoomID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("This room has setup bed. Can not delete it"), MB_OK);
		return false;
	}
	return true;
}
void CSysDepartmentSetup::OnBedDblClick(){
	
} 
void CSysDepartmentSetup::OnBedSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_nBedID = ToInt(m_wndBed.GetItemText(nNewItem, 0));
} 
int CSysDepartmentSetup::OnBedAddItem(){
	OnDeptListAddBed();
	return 0;
}
int CSysDepartmentSetup::OnBedDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() != VM_VIEW) 
 		return 0;
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM hms_bed WHERE hb_deptid='%s' and hb_roomid=%d and hb_bedid=%d"),
		m_szID, m_nRoomID, m_nBedID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This bed has been used"));
		return -1;
	}
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 


 	szSQL.Format(_T("DELETE FROM hms_bedlist WHERE hbl_deptid = '%s' AND hbl_roomid=%d  AND hbl_id= %d"), m_szID, m_nRoomID, m_nBedID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		int nSel = m_wndBed.GetCurSel();
		m_wndBed.DeleteItem(nSel);
		m_wndBed.SetCurSel(nSel-1);
 	}
	 return 1;
} 
long CSysDepartmentSetup::OnBedLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_nRoomID>0)
		szSQL.Format(_T("SELECT hbl_id as id, hbl_name as name FROM hms_bedlist WHERE hbl_deptid ='%s' AND hbl_roomid=%d "), m_szID, m_nRoomID);
	m_wndBed.BeginLoad(); 
	m_wndBed.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBed.AddItems(rs.GetValue(_T("id")),
						rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndBed.EndLoad(); 
	return nCount;
}
void CSysDepartmentSetup::OnAddItemSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Room"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Add Bed"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Add Dynamic Bed"));	
	m_wndAddItem.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top, this);

	switch(nPos){
	case 1:
		OnDeptListDblClick();
		break;
	case 2:
		OnDeptListAddBed();
		break;
	case 3:
		OnDeptListDynamicBedList();
		break;
	};
} 
void CSysDepartmentSetup::OnChiefphysicianSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysDepartmentSetup::OnChiefphysicianSelendok(){
	 
}
/*void CSysDepartmentSetup::OnChiefphysicianSetfocus(){
	
}*/
/*void CSysDepartmentSetup::OnChiefphysicianKillfocus(){
	
}*/
long CSysDepartmentSetup::OnChiefphysicianLoadData(){
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
/*void CSysDepartmentSetup::OnChiefphysicianAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CSysDepartmentSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelVIMESDepartment();
	 return 0;
} 
int CSysDepartmentSetup::OnAddVIMESDepartment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	m_wndID.SetFocus();
	return 0;
} 
int CSysDepartmentSetup::OnEditVIMESDepartment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	//m_wndID.SetReadOnly(true);
	return 0;  
 
} 
int CSysDepartmentSetup::OnDeleteVIMESDepartment(){
 	OnDeptListDeleteItem();
	return 0;
 } 
int CSysDepartmentSetup::OnSaveVIMESDepartment(){
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
int CSysDepartmentSetup::OnCancelVIMESDepartment(){
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
int CSysDepartmentSetup::OnVIMESDepartmentListLoadData(){
	return 0;
}

void CSysDepartmentSetup::Refresh()
{
	static bool bLoaded = false;
	if(!bLoaded){
		OnDeptListLoadData();
		bLoaded = true;
	}
}
void CSysDepartmentSetup::OnDeptListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndDeptList);
	newPopup->m_nSearchCol = 2;
	newPopup->ShowPopup(&m_wndDeptList);
	
}
void CSysDepartmentSetup::OnRoomListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndRoom);
	newPopup->ShowPopup(&m_wndRoom);
} 
void CSysDepartmentSetup::OnBedListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndBed);
	newPopup->ShowPopup(&m_wndBed);
} 