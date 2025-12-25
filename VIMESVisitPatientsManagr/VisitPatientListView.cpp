#include "VisitPatientListView.h"
#include "MainFrm.h"
#include "HMSExtraInfoDialog.h"

/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVisitPatientListView* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVisitPatientListView* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVisitPatientListView* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVillageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVisitPatientListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnVisitCardIdChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVisitCardIdChange();
} */
/*static void _OnVisitCardIdSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVisitCardIdSetfocus();} */ 
/*static void _OnVisitCardIdKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnVisitCardIdKillfocus();
} */
static int _OnVisitCardIdCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnVisitCardIdCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnBeingTreatedSelectFnc(CWnd *pWnd){
	  ((CVisitPatientListView*)pWnd)->OnBeingTreatedSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CVisitPatientListView*)pWnd)->OnDischargedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVisitPatientListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVisitPatientListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CVisitPatientListView *pVw = (CVisitPatientListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CVisitPatientListView *pVw = (CVisitPatientListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CVisitPatientListView *pVw = (CVisitPatientListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CVisitPatientListView *pVw = (CVisitPatientListView *)pWnd;
	pVw->OnTerminateSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVisitPatientListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVisitPatientListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnListDeleteItem();
} 



static long _OnVisitListLoadDataFnc(CWnd *pWnd){
	return ((CVisitPatientListView*)pWnd)->OnVisitListLoadData();
} 
static void _OnVisitListDblClickFnc(CWnd *pWnd){
	((CVisitPatientListView*)pWnd)->OnVisitListDblClick();
} 
static void _OnVisitListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVisitPatientListView*)pWnd)->OnVisitListSelectChange(nOldItem, nNewItem);
} 

static int _OnVisitListRegisterItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnVisitListRegisterItem();
} 

static int _OnVisitListEditItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnVisitListEditItem();
} 



static int _OnVisitListDeleteItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnVisitListDeleteItem();
} 

static int _OnVisitListTerminateItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnVisitListTerminateItem();
} 
static int _OnVisitListPrintItemFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnVisitListPrintItem();
}


static int _OnRegisterServicePackageFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnRegisterServicePackage();
}

static int _OnAddVisitPatientListViewFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnAddVisitPatientListView();
} 
static int _OnEditVisitPatientListViewFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnEditVisitPatientListView();
} 
static int _OnDeleteVisitPatientListViewFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnDeleteVisitPatientListView();
} 
static int _OnSaveVisitPatientListViewFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnSaveVisitPatientListView();
} 
static int _OnCancelVisitPatientListViewFnc(CWnd *pWnd){
	 return ((CVisitPatientListView*)pWnd)->OnCancelVisitPatientListView();
} 
CVisitPatientListView::CVisitPatientListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CVisitPatientListView::~CVisitPatientListView(){
}
void CVisitPatientListView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 795, 180);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 400, 55); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 405, 30, 505, 55);
	m_wndPhone.Create(this,510, 30, 790, 55); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 60, 110, 85);
	m_wndProvill.Create(this,115, 60, 400, 85); 
	m_wndDistrictLabel.Create(this, _T("District"), 405, 60, 505, 85);
	m_wndDistrict.Create(this,510, 60, 790, 85); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 90, 110, 115);
	m_wndVillage.Create(this,115, 90, 400, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 405, 90, 505, 115);
	m_wndDepartment.Create(this,510, 90, 790, 115); 
	m_wndVisitCardIdLabel.Create(this, _T("Visit Card Id"), 10, 120, 110, 145);
	m_wndVisitCardId.Create(this,115, 120, 400, 145); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 405, 120, 505, 145);
	m_wndDocumentNo.Create(this,510, 120, 610, 145); 
	m_wndStatus.Create(this, _T("Status"), 10, 150, 110, 175);
	m_wndRegisted.Create(this, _T("Đã đăng ký"), 115, 150, 210, 175);
	m_wndBeingTreated.Create(this, _T("Đang điều trị"), 215, 150, 310, 175);
	m_wndDischarged.Create(this, _T("Discharged"), 315, 150, 399, 175);
	m_wndFromDateLabel.Create(this, _T("From Date"), 404, 150, 504, 175);
	m_wndFromDate.Create(this,509, 150, 609, 175); 
	m_wndToDateLabel.Create(this, _T("To Date"), 614, 150, 689, 175);
	m_wndToDate.Create(this,694, 150, 789, 175); 
	m_wndSearch.Create(this, _T("Search"), 800, 20, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 61, 950, 96);
	m_wndRegister.Create(this, _T("Đăng ký"), 800, 103, 950, 138);
	m_wndTerminate.Create(this, _T("Kết thúc"), 800, 145, 950, 180);
	
	m_wndList.Create(this,5, 185, 955, 430); 
	m_wndVisitList.Create(this,5, 435, 955, 650); 

	
}
void CVisitPatientListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(35);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndVisitCardId.SetLimitText(35);
	m_wndVisitCardId.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 210);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 210);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 210);


	
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);



	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Department"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Document Nno"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Gender"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("Address"), CFMT_TEXT|CFMT_AUTOSIZE, 230);
	m_wndList.InsertColumn(7, _T("Phone"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(8, _T("Visit Count"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("Patient No"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T(""), CFMT_TEXT, 0);

	m_wndList.AddResizeColumn(3);
	m_wndList.AddResizeColumn(6);

	m_wndVisitList.InsertColumn(0, _T("Id"), CFMT_TEXT, 55);
	m_wndVisitList.InsertColumn(1, _T("Visit Card Id"), CFMT_TEXT, 100);
	m_wndVisitList.InsertColumn(2, _T("Time to visit"), CFMT_TEXT, 110);
	m_wndVisitList.InsertColumn(3, _T("Time out"), CFMT_TEXT, 110);
	m_wndVisitList.InsertColumn(4, _T("Visit Name"), CFMT_TEXT, 120);
	m_wndVisitList.InsertColumn(5, _T("Deposit Amount"), CFMT_NUMBER, 80);
	m_wndVisitList.InsertColumn(6, _T("Refund Amount"), CFMT_NUMBER, 80);
	m_wndVisitList.InsertColumn(7, _T("Consignment Note"), CFMT_TEXT, 100);
	m_wndVisitList.InsertColumn(8, _T("Note"), CFMT_TEXT, 50);
	m_wndVisitList.InsertColumn(9, _T("T.Thái"), CFMT_TEXT|CFMT_CENTER, 50);
	//m_wndVisitList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndVisitList.InsertColumn(10, _T("UpdateBy"), CFMT_TEXT, 70);
	
	
	m_listColumnWidth.assign(m_wndList.m_listWidthColumns.begin(), m_wndList.m_listWidthColumns.end());
	m_visitListColumnWidth.assign(m_wndVisitList.m_listWidthColumns.begin(), m_wndVisitList.m_listWidthColumns.end());
}
void CVisitPatientListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
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
	m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
	m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
	//m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndVisitCardId.SetEvent(WE_CHANGE, _OnVisitCardIdChangeFnc);
	//m_wndVisitCardId.SetEvent(WE_SETFOCUS, _OnVisitCardIdSetfocusFnc);
	//m_wndVisitCardId.SetEvent(WE_KILLFOCUS, _OnVisitCardIdKillfocusFnc);
	m_wndVisitCardId.SetEvent(WE_CHECKVALUE, _OnVisitCardIdCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndBeingTreated.SetEvent(WE_CLICK, _OnBeingTreatedSelectFnc);
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	m_wndRegister.SetEvent(WE_CLICK, _OnRegisterSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	
	//m_wndList.AddEvent(0, _T("-"), NULL);
	//m_wndList.AddEvent(2, _T("Đăng ký dịch vụ lưu trú"), _OnRegisterServicePackageFnc);

	m_wndVisitList.SetEvent(WE_SELCHANGE, _OnVisitListSelectChangeFnc);
	m_wndVisitList.SetEvent(WE_LOADDATA, _OnVisitListLoadDataFnc);
	m_wndVisitList.SetEvent(WE_DBLCLICK, _OnVisitListDblClickFnc);

	if (!pMF->CheckPermission(_T("70")))
	{
	m_wndList.AddEvent(1, _T("Đăng ký thăm\tF2"), _OnVisitListRegisterItemFnc, 0, 0, VK_F2);
	m_wndVisitList.AddEvent(1, _T("Đăng ký\tF2"), _OnVisitListRegisterItemFnc,  0, 0, VK_F2);
	m_wndVisitList.AddEvent(0, _T("-"), NULL);
	m_wndVisitList.AddEvent(2, _T("Sửa"), _OnVisitListEditItemFnc);
	m_wndVisitList.AddEvent(0, _T("-"), NULL);
	m_wndVisitList.AddEvent(3, _T("Hủy"), _OnVisitListDeleteItemFnc);
	m_wndVisitList.AddEvent(0, _T("-"), NULL);
	m_wndVisitList.AddEvent(4, _T("Kết thúc\tF5"), _OnVisitListTerminateItemFnc,0, 0, VK_F5);
	m_wndVisitList.AddEvent(0, _T("-"), NULL);		
	}
	m_wndVisitList.AddEvent(5, _T("In phiếu"), _OnVisitListPrintItemFnc);    
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);

	m_wndList.GetClientRect(&m_rcList);
	m_wndVisitList.GetWindowRect(&m_rcVisitList);
	GetClientRect(&m_rcClient);
}
void CVisitPatientListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndVisitCardId.GetDlgCtrlID(), m_szVisitCardId);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndBeingTreated.GetDlgCtrlID(), m_nDischarged);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CVisitPatientListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Provill")] =  m_szProvillKey;
	m_jData[_T("District")] =  m_szDistrictKey;
	m_jData[_T("Village")] =  m_szVillageKey;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("VisitCardId")] =  m_szVisitCardId;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("Discharged")] =  m_nDischarged;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Provill")].GetValue(m_szProvillKey);
	m_jData[_T("District")].GetValue(m_szDistrictKey);
	m_jData[_T("Village")].GetValue(m_szVillageKey);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("VisitCardId")].GetValue(m_szVisitCardId);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("Discharged")].GetValue(m_nDischarged);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CVisitPatientListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVisitPatientListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVisitPatientListView::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szPhone.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szVisitCardId.Empty();
	m_nDocumentNo=0;
	m_nDischarged=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CVisitPatientListView::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndPatientName.SetFocus();
			m_wndFromDate.EnableWindow(FALSE);
			m_wndToDate.EnableWindow(FALSE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		if (pMF->CheckPermission(_T("70")))
		{
			m_szDepartmentKey = pMF->GetCurrentDepartmentID();
			m_wndDepartment.EnableWindow(false);
		}

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CVisitPatientListView::OnPatientNameChange(){
	
} */
/*void CVisitPatientListView::OnPatientNameSetfocus(){
	
} */
/*void CVisitPatientListView::OnPatientNameKillfocus(){
	
} */
int CVisitPatientListView::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CVisitPatientListView::OnPhoneChange(){
	
} */
/*void CVisitPatientListView::OnPhoneSetfocus(){
	
} */
/*void CVisitPatientListView::OnPhoneKillfocus(){
	
} */
int CVisitPatientListView::OnPhoneCheckValue(){
	OnListLoadData();
	return 0;
} 
void CVisitPatientListView::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVisitPatientListView::OnProvillSelendok(){
	 
}
/*void CVisitPatientListView::OnProvillSetfocus(){
	
}*/
/*void CVisitPatientListView::OnProvillKillfocus(){
	
}*/
long CVisitPatientListView::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadProvillList(&m_wndProvill, m_szProvillKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProvillKey
};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
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
/*void CVisitPatientListView::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVisitPatientListView::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVisitPatientListView::OnDistrictSelendok(){
	 
}
/*void CVisitPatientListView::OnDistrictSetfocus(){
	
}*/
/*void CVisitPatientListView::OnDistrictKillfocus(){
	
}*/
long CVisitPatientListView::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDistrictList(&m_wndDistrict, m_szProvillKey, m_szDistrictKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDistrictKey
};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
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
/*void CVisitPatientListView::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVisitPatientListView::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVisitPatientListView::OnVillageSelendok(){
	 
}
/*void CVisitPatientListView::OnVillageSetfocus(){
	
}*/
/*void CVisitPatientListView::OnVillageKillfocus(){
	
}*/
long CVisitPatientListView::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadVillageList(&m_wndVillage, m_szProvillKey, m_szDistrictKey, m_szVillageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVillageKey
};
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVisitPatientListView::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVisitPatientListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVisitPatientListView::OnDepartmentSelendok(){
	 
}
/*void CVisitPatientListView::OnDepartmentSetfocus(){
	
}*/
/*void CVisitPatientListView::OnDepartmentKillfocus(){
	
}*/
long CVisitPatientListView::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type = 'DT' "));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVisitPatientListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVisitPatientListView::OnVisitCardIdChange(){
	
} */
/*void CVisitPatientListView::OnVisitCardIdSetfocus(){
	
} */
/*void CVisitPatientListView::OnVisitCardIdKillfocus(){
	
} */
int CVisitPatientListView::OnVisitCardIdCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hvi_docno FROM hms_visitinfo WHERE hvi_cardid='%s' and hvi_status='O' "), m_szVisitCardId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hvi_docno"), m_nCurDoc);
	}
	OnListLoadData();
	return 0;
} 
/*void CVisitPatientListView::OnDocumentNoChange(){
	
} */
/*void CVisitPatientListView::OnDocumentNoSetfocus(){
	
} */
/*void CVisitPatientListView::OnDocumentNoKillfocus(){
	
} */
int CVisitPatientListView::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CVisitPatientListView::OnBeingTreatedSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	UpdateData(FALSE);
	OnListLoadData();
}
void CVisitPatientListView::OnDischargedSelect(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);	
	UpdateData(FALSE);
	OnListLoadData();
}
/*void CVisitPatientListView::OnFromDateChange(){
	
} */
/*void CVisitPatientListView::OnFromDateSetfocus(){
	
} */
/*void CVisitPatientListView::OnFromDateKillfocus(){
	
} */
int CVisitPatientListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CVisitPatientListView::OnToDateChange(){
	
} */
/*void CVisitPatientListView::OnToDateSetfocus(){
	
} */
/*void CVisitPatientListView::OnToDateKillfocus(){
	
} */
int CVisitPatientListView::OnToDateCheckValue(){
	return 0;
} 
void CVisitPatientListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CVisitPatientListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
} 

#include "HMSVisitInfoDialog.h"
#include ".\visitpatientlistview.h"

void CVisitPatientListView::OnRegisterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	int nVisitCount = str2int(m_wndList.GetItemText(nSel, 8));
	if(nVisitCount > 0)
	{
		int nMsg = ShowMessageBox(_T("Thông báo bệnh nhân đang có người thăm. Tiếp tục cho lên thăm?"), MB_YESNO|MB_ICONWARNING);
		if(nMsg == IDNO)
			return;
	}

	CHMSVisitInfoDialog dlg(this, VM_ADD);
	dlg.m_nDocumentNo = nDocNo;
	dlg.m_szDept = m_wndList.GetItemText(nSel, 1);
	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 3);
	dlg.m_szYob = m_wndList.GetItemText(nSel, 4);
	dlg.m_szGender = m_wndList.GetItemText(nSel, 5);
	dlg.m_szAddress = m_wndList.GetItemText(nSel, 6);

	if(dlg.DoModal() == IDOK)
	{
		OnVisitListLoadData();
		OnVisitListPrintItem();
	}
} 
void CVisitPatientListView::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_nPatientSel;

	nSel = m_wndVisitList.GetCurSel();
	if(nSel < 0)
		return;
	CString szStatus = m_wndVisitList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã được kết thúc"));
		return;
	}

	long nVisitId = str2long(m_wndVisitList.GetItemText(nSel, 0));

	nSel = m_nPatientSel;

	CHMSVisitInfoDialog dlg(this, VM_TERM);
	dlg.m_nVisitInfoId = nVisitId;
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_szDept = m_wndList.GetItemText(nSel, 1);
	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 3);
	dlg.m_szYob = m_wndList.GetItemText(nSel, 4);
	dlg.m_szGender = m_wndList.GetItemText(nSel, 5);
	dlg.m_szAddress = m_wndList.GetItemText(nSel, 6);


	

	if(dlg.DoModal() == IDOK)
	{
		
		OnVisitListLoadData();
		
	}
} 
void CVisitPatientListView::OnListDblClick(){
	OnRegisterSelect();
} 
void CVisitPatientListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_wndRegister.EnableWindow(TRUE);
	m_nCurDoc = str2long(m_wndList.GetItemText(nNewItem, 2));
	m_nPatientSel = nNewItem;
	OnVisitListLoadData();
} 
int CVisitPatientListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVisitPatientListView::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(m_nDischarged == 0)
	{
		szWhere.AppendFormat(_T(" and (htr_status in('A','I')  or (hcr_status='T' and hcrf_acceptedfee<>'P' and trunc(hcr_dischargedate) >= trunc(sysdate)-15 )) "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hcr_status ='T' and trunc(hcr_dischargedate) between to_date('%s','YYYY-MM-DD') and to_date('%s','YYYY-MM-DD')  "),
			m_szFromDate, m_szToDate);
	}

	if(!m_szPatientName.IsEmpty())
	{
		//szWhere.AppendFormat(_T(" and lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), m_szPatientName);
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and htr_deptid='%s' "), m_szDepartmentKey);
	}

	if(!m_szProvillKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hp_provid=%ld "), str2long(m_szProvillKey));
	}
	
	if(!m_szDistrictKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hp_distid=%ld "), str2long(m_szDistrictKey));
	}

	if(!m_szVillageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hp_villid=%ld "), str2long(m_szVillageKey));
	}

	if(!m_szPhone.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hd_telephone||hd_contacttel like(chr(37)||'%s'||chr(37)) "), m_szPhone);
	}

	if(!m_szVisitCardId.IsEmpty() && m_nCurDoc > 0)
	{
		szWhere.AppendFormat(_T(" and hd_docno=%ld "), m_nCurDoc);
	}
	if(m_nDocumentNo > 0 )
	{
		szWhere.AppendFormat(_T(" and hd_docno=%ld "), m_nDocumentNo);

	}
	
	if (pMF->CheckPermission(_T("70")))
	{
		szWhere.AppendFormat(_T(" and htr_deptid='%s' "), pMF->GetCurrentDepartmentID());
	}
			szSQL.Format(_T(" SELECT distinct htr_docno as docno, htr_patientno as patientno, ") \
						_T("   htr_deptid as  deptid,") \
						_T("   trim( hp_surname") \
						_T("   ||' '") \
						_T("   ||hp_midname") \
						_T("   ||' '") \
						_T("   ||hp_firstname)                                 AS pname,") \
						_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
						_T("   hms_getsex(hp_sex)                            AS gender,") \
						_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
						_T("   hd_telephone") \
						_T("   ||','") \
						_T("   ||hd_contacttel AS phone, (select count(*) from hms_visitinfo where hvi_docno=hd_docno and hvi_status='O') as visit_count ") \
						_T(" FROM hms_patient,") \
						_T("   hms_doc,") \
						_T("   hms_clinical_record,") \
						_T("   hms_treatment_record") \
						_T(" WHERE hp_patientno            = hd_patientno") \
						_T(" AND hd_docno                  = hcr_docno") \
						_T(" AND hcr_docno                 = htr_docno") \
						_T(" %s ") \
						_T(" ORDER BY pname"), szWhere);


_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	if(nCount <= 0)
	{
		//ShowMessageBox(_T("Không tìm thấy bệnh nhân nào trong điều kiện"));
		return 0;
	}
	CString tmpStr, tmpStr2;
	int nIdx = 0;
	int nVisitCount = 0;
	int nItem;


	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}




	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("visit_count"), nVisitCount);
		/*if(m_bRegisted && nVisitCount == 0)
		{
			rs.MoveNext();
			continue;
		}*/

		rs.GetValue(_T("pname"), tmpStr);

		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}


		tmpStr2.Format(_T("%d"), nVisitCount);
		tmpStr.Format(_T("%d"), ++nIdx);
		nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("gender")), 
			rs.GetValue(_T("Address")), 
			rs.GetValue(_T("Phone")), 
			tmpStr2,
			rs.GetValue(_T("patientno")), 
			NULL);

		if(nVisitCount > 0)
		{
			CGridListItem* pItem = m_wndList.GetInternalData(nItem);
			
			pItem->GetCell(2)->m_clrBorder = RGB(255,128,0);
			//pItem->GetCell(2)->m_clrText = RGB(255, 255,255);
			
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	m_wndVisitList.DeleteAllItems();
	return nCount;

	return 0;
}
void CVisitPatientListView::OnVisitListDblClick(){
	OnTerminateSelect();
} 
void CVisitPatientListView::OnVisitListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

int CVisitPatientListView::OnVisitListRegisterItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnRegisterSelect();
	 return 0;
} 

int CVisitPatientListView::OnVisitListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndVisitList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nVisitId = str2long(m_wndVisitList.GetItemText(nSel, 0));
	CString szStatus = m_wndVisitList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không cho phép sửa khi trạng thái đã kết thúc"));
		return 0;
	}
	CHMSVisitInfoDialog dlg(this, VM_EDIT);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nVisitInfoId = nVisitId;
	dlg.m_szDept = m_wndList.GetItemText(nSel, 1);	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 3);	dlg.m_szYob = m_wndList.GetItemText(nSel, 4);	dlg.m_szGender = m_wndList.GetItemText(nSel, 5);	dlg.m_szAddress = m_wndList.GetItemText(nSel, 6);
	if(dlg.DoModal() == IDOK)
	{
		OnVisitListLoadData();
		m_wndVisitList.SetCurSel(nSel);
	}

	 return 0;
} 

int CVisitPatientListView::OnVisitListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndVisitList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nVisitId = str2long(m_wndVisitList.GetItemText(nSel, 0));
	CString szStatus = m_wndVisitList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã được kết thúc"));
		return 0;
	}

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy đề mục đã chọn không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_visitinfo SET hvi_status='C' WHERE hvi_visitinfo_id=%ld and hvi_createdby='%s' "), nVisitId, pMF->GetCurrentUser());
	int ret = pMF->ExecSQL(szSQL);
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được đề mục"));
	}
	else
	{
		CString szEvent,szDesc;
		szEvent.Format(_T("Cancel"));
		szDesc.Format(_T("ID:%ld - SHS: %ld, Hủy phiếu thăm "), nVisitId,m_nCurDoc);
		pMF->SystemLog(szEvent, szDesc);
		OnVisitListLoadData();
	}
	 return 0;
} 

int CVisitPatientListView::OnVisitListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnTerminateSelect();
	return 0;

	int nSel = m_wndVisitList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nVisitId = str2long(m_wndVisitList.GetItemText(nSel, 0));
	CString szStatus = m_wndVisitList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã được kết thúc"));
		return 0;
	}

	CHMSVisitInfoDialog dlg(this, VM_TERM);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nVisitInfoId = nVisitId;
	if(dlg.DoModal() == IDOK)
	{
		OnVisitListLoadData();
		m_wndVisitList.SetCurSel(nSel);
	}

	 return 0;
} 
int CVisitPatientListView::OnVisitListPrintItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndVisitList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nVisitId = str2long(m_wndVisitList.GetItemText(nSel, 0));

	CReport rpt;
	CString szSQL, tmpStr, szSysDate = pMF->GetSysDateTime();
	CRecord rs(&pMF->m_db);
	CReportSection *rptDetail = NULL;
	tmpStr.Format(_T("Reports\\HMS\\PHIEUTHAMBENHNHAN.RPT"));
	if(!rpt.Init(tmpStr))
		return 0;	
	
	rptDetail = rpt.AddDetail();
	
	rptDetail->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);


	szSQL.Format(_T(" SELECT distinct htr_docno as docno,") \
_T("   htr_deptid as  deptid,") \
_T("   trim( hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                 AS pname,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
_T("   hms_getsex(hp_sex)                            AS gender,") \
_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
_T("   hd_telephone") \
_T("   ||','") \
_T("   ||hd_contacttel AS phone,  hvi_visitor as visitor, hvi_cardid as visitcard, hvi_deposit as deposit, hvi_consignmentnote as consignmentnote, hvi_note as note, hvi_visittime as visittime ") \
_T(" FROM hms_patient,") \
_T("   hms_doc,") \
_T("   hms_clinical_record,") \
_T("   hms_treatment_record, hms_visitinfo ") \
_T(" WHERE hp_patientno            = hd_patientno") \
_T(" AND hd_docno                  = hcr_docno") \
_T(" AND hcr_docno                 = htr_docno") \
_T(" and hd_docno = hvi_docno ") \
_T(" and hvi_visitinfo_id=%ld "), nVisitId);



	rs.ExecSQL(szSQL);
	

	rs.GetValue(_T("docno"), tmpStr);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%ld"), nVisitId);
	rptDetail->SetValue(_T("VisitId"), tmpStr);
	rs.GetValue(_T("visittime"), tmpStr);
	rptDetail->SetValue(_T("Visittime"), tmpStr);

	rs.GetValue(_T("visitcard"), tmpStr);
	rptDetail->SetValue(_T("visitcard"), tmpStr);

	rs.GetValue(_T("pname"), tmpStr);
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("yob"), tmpStr);
	rptDetail->SetValue(_T("Yob"), tmpStr);
	rs.GetValue(_T("gender"), tmpStr);
	rptDetail->SetValue(_T("sex"), tmpStr);
	rs.GetValue(_T("Address"), tmpStr);
	rptDetail->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("deptid"), tmpStr);
	rptDetail->SetValue(_T("Department"), tmpStr);
	rs.GetValue(_T("visitor"), tmpStr);
	rptDetail->SetValue(_T("Visitor"), tmpStr);
	rs.GetValue(_T("deposit"), tmpStr);
	rptDetail->SetValue(_T("Deposit"), tmpStr);
	rs.GetValue(_T("note"), tmpStr);
	rptDetail->SetValue(_T("Note"), tmpStr);
	rs.GetValue(_T("consignmentnote"), tmpStr);
	rptDetail->SetValue(_T("ConsignmentNote"), tmpStr);


	CString dte,tm;
	
	tm = szSysDate.Mid(11);
	szSysDate = szSysDate.Left(10);
	tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), tm, szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rptDetail->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	return 0;
}


long CVisitPatientListView::OnVisitListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndVisitList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_visitinfo WHERE hvi_docno=%ld ORDER BY hvi_visitinfo_id desc"), m_nCurDoc);

	nCount = rs.ExecSQL(szSQL);
	int nItem=0;
	CString szStatus, szInDate, szOutDate;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hvi_status"), szStatus);
		rs.GetValue(_T("hvi_visittime"), szInDate);
		rs.GetValue(_T("hvi_visitout"), szOutDate);
		nItem = m_wndVisitList.AddItems(
			rs.GetValue(_T("hvi_visitinfo_id")), 
			rs.GetValue(_T("hvi_cardid")), 
			CDateTime::Convert(szInDate, yyyymmdd|hhmmss, ddmmyyyy|hhmm),
			CDateTime::Convert(szOutDate, yyyymmdd|hhmmss, ddmmyyyy|hhmm),
			rs.GetValue(_T("hvi_visitor")), 
			rs.GetValue(_T("hvi_deposit")), 
			rs.GetValue(_T("hvi_refund")), 
			rs.GetValue(_T("hvi_ConsignmentNote")), 
			rs.GetValue(_T("hvi_note")), 
			rs.GetValue(_T("hvi_status")), 
			rs.GetValue(_T("hvi_updatedby")),
			NULL);
		if(szStatus == _T("O"))
		{
			m_wndVisitList.SetItemTextColor(nItem, RGB(0, 0, 255));
		}
		if(szStatus == _T("C"))
		{
			m_wndVisitList.SetItemTextColor(nItem, RGB(255, 128, 64));
		}
		rs.MoveNext();
	}
	m_wndVisitList.EndLoad(); 
	m_wndVisitList.SetCurSel(0);
	return nCount;

	return 0;
}
int CVisitPatientListView::OnAddVisitPatientListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVisitPatientListView::OnEditVisitPatientListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVisitPatientListView::OnDeleteVisitPatientListView(){
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
 		OnCancelVisitPatientListView();
 	}
	return 0;
}
int CVisitPatientListView::OnSaveVisitPatientListView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnVisitPatientListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVisitPatientListView::OnCancelVisitPatientListView(){
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
int CVisitPatientListView::OnVisitPatientListViewListLoadData(){
	return 0;
}


BOOL CVisitPatientListView::PreTranslateMessage(MSG *pMsg)
{
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_F2)
		{
			OnRegisterSelect();
			return TRUE;
		}
		if(pMsg->wParam == VK_F5)
		{
			OnTerminateSelect();
			return TRUE;
		}

	}
	return CGuiView::PreTranslateMessage(pMsg);
}

int CVisitPatientListView::OnRegisterServicePackage()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	CHMSExtraInfoDialog dlg(this);
	dlg.DoModal();
	return 0;
}

void CVisitPatientListView::OnResizeLayout()
{
	//AddLayoutControl(&m_wndList, WS_RESIZEX, 0, 0, 100, 0);
	//AddLayoutControl(&m_wndVisitList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddResize(&m_wndSearchInformation, 100, 100);
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndVisitList, 100, 100);
}
