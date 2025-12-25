#include "ServicePackageListView.h"
#include "MainFrm.h"
#include "HMSExtraInfoDialog.h"

/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CServicePackageListView* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CServicePackageListView* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CServicePackageListView* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnVillageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CServicePackageListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnCardNumberCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnDocumentNoCheckValue();
} 

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnOrderNoCheckValue();
} 

static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CServicePackageListView*)pWnd)->OnPendingOptionSelect();
}

static void _OnRegistedOptionSelectFnc(CWnd *pWnd){
	  ((CServicePackageListView*)pWnd)->OnRegistedOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CServicePackageListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CServicePackageListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnTerminateSelect();
} 


static void _OnRegisterNewSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnRegisterNewSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CServicePackageListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CServicePackageListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnListDeleteItem();
} 



static long _OnPackageListLoadDataFnc(CWnd *pWnd){
	return ((CServicePackageListView*)pWnd)->OnPackageListLoadData();
} 
static void _OnPackageListDblClickFnc(CWnd *pWnd){
	((CServicePackageListView*)pWnd)->OnPackageListDblClick();
} 
static void _OnPackageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CServicePackageListView*)pWnd)->OnPackageListSelectChange(nOldItem, nNewItem);
} 

static int _OnPackageListRegisterItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnPackageListRegisterItem();
} 

static int _OnPackageListEditItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnPackageListEditItem();
} 



static int _OnPackageListDeleteItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnPackageListDeleteItem();
} 

static int _OnPackageListTerminateItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnPackageListTerminateItem();
} 
static int _OnPackageListPrintItemFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnPackageListPrintItem();
}


static int _OnRegisterServicePackageFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnRegisterServicePackage();
}

static int _OnAddServicePackageListViewFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnAddServicePackageListView();
} 
static int _OnEditServicePackageListViewFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnEditServicePackageListView();
} 
static int _OnDeleteServicePackageListViewFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnDeleteServicePackageListView();
} 
static int _OnSaveServicePackageListViewFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnSaveServicePackageListView();
} 
static int _OnCancelServicePackageListViewFnc(CWnd *pWnd){
	 return ((CServicePackageListView*)pWnd)->OnCancelServicePackageListView();
} 
CServicePackageListView::CServicePackageListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CServicePackageListView::~CServicePackageListView(){
}
void CServicePackageListView::OnCreateComponents(){
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
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 10, 120, 110, 145);
	m_wndCardNumber.Create(this,115, 120, 400, 145); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 405, 120, 505, 145);
	m_wndDocumentNo.Create(this,510, 120, 610, 145); 
	
	m_wndOrderNoLabel.Create(this, _T("Order No"), 614, 120, 689, 145);
	m_wndOrderNo.Create(this,694, 120, 789, 145); 

	m_wndStatus.Create(this, _T("Status"), 10, 150, 110, 175);
	m_wndPendingOption.Create(this, _T("Đang đợi"), 115, 150, 210, 175);
	m_wndRegistedOption.Create(this, _T("Đang lưu trú"), 215, 150, 310, 175);
	m_wndTerminateOption.Create(this, _T("Đã kết thúc"), 315, 150, 399, 175);
	m_wndFromDateLabel.Create(this, _T("From Date"), 404, 150, 504, 175);
	m_wndFromDate.Create(this,509, 150, 609, 175); 
	m_wndToDateLabel.Create(this, _T("To Date"), 614, 150, 689, 175);
	m_wndToDate.Create(this,694, 150, 789, 175); 
	m_wndSearch.Create(this, _T("Search"), 800, 20, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 61, 950, 96);
	m_wndRegister.Create(this, _T("Đăng ký"), 800, 103, 950, 138);
	m_wndRegisterNew.Create(this, _T("Đăng ký ngoài"), 800, 145, 950, 180);
	m_wndList.Create(this,5, 185, 955, 430); 
	m_wndPackageList.Create(this,5, 435, 955, 650); 

}
void CServicePackageListView::OnInitializeComponents(){
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
	m_wndCardNumber.SetLimitText(35);
	m_wndCardNumber.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);

	m_wndOrderNo.SetLimitText(16);
	m_wndOrderNo.SetCheckValue(true);

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Department"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Document Nno"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Gender"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("Address"), CFMT_TEXT, 230);
	m_wndList.InsertColumn(7, _T("Phone"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(8, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T(""), CFMT_TEXT, 0);


	m_wndPackageList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 35);
	m_wndPackageList.InsertColumn(1, _T("Card Number"), CFMT_TEXT, 120);
	m_wndPackageList.InsertColumn(2, _T("Relative"), CFMT_TEXT, 120);
	m_wndPackageList.InsertColumn(3, _T("Description"), CFMT_TEXT, 200);
	m_wndPackageList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 50);
	m_wndPackageList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 80);
	m_wndPackageList.InsertColumn(6, _T("Begin Date"), CFMT_TEXT, 120);
	m_wndPackageList.InsertColumn(7, _T("End Date"), CFMT_TEXT, 120);
	m_wndPackageList.InsertColumn(8, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndPackageList.InsertColumn(9, _T("Batch Id"), CFMT_TEXT|CFMT_CENTER, 80); //batchId

}
void CServicePackageListView::OnSetWindowEvents(){
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
	//m_wndCardNumber.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndCardNumber.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndCardNumber.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndCardNumber.SetEvent(WE_CHECKVALUE, _OnCardNumberCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);

	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);

	m_wndPendingOption.SetEvent(WE_CLICK, _OnPendingOptionSelectFnc);
	m_wndRegistedOption.SetEvent(WE_CLICK, _OnRegistedOptionSelectFnc);
	m_wndTerminateOption.SetEvent(WE_CLICK, _OnTerminateOptionSelectFnc);
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
	m_wndRegisterNew.SetEvent(WE_CLICK, _OnRegisterNewSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
//	m_wndList.AddEvent(1, _T("Đăng ký thăm\tF2"), _OnPackageListRegisterItemFnc, 0, 0, VK_F2);
//	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Đăng ký dịch vụ lưu trú"), _OnRegisterServicePackageFnc);

	m_wndPackageList.SetEvent(WE_SELCHANGE, _OnPackageListSelectChangeFnc);
	m_wndPackageList.SetEvent(WE_LOADDATA, _OnPackageListLoadDataFnc);
	m_wndPackageList.SetEvent(WE_DBLCLICK, _OnPackageListDblClickFnc);
	

	m_wndPackageList.AddEvent(1, _T("Xác nhận lưu trú\tF2"), _OnPackageListRegisterItemFnc,  0, 0, VK_F2);
//	m_wndPackageList.AddEvent(0, _T("-"), NULL);
//	m_wndPackageList.AddEvent(2, _T("Sửa"), _OnPackageListEditItemFnc);
//	m_wndPackageList.AddEvent(0, _T("-"), NULL);
//	m_wndPackageList.AddEvent(3, _T("Hủy"), _OnPackageListDeleteItemFnc);
	m_wndPackageList.AddEvent(0, _T("-"), NULL);
	m_wndPackageList.AddEvent(4, _T("Kết thúc lưu trú\tF5"), _OnPackageListTerminateItemFnc,0, 0, VK_F5);
	m_wndPackageList.AddEvent(0, _T("-"), NULL);
	m_wndPackageList.AddEvent(5, _T("In phiếu"), _OnPackageListPrintItemFnc);
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);

}
void CServicePackageListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nStatusOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CServicePackageListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Provill")] =  m_szProvillKey;
	m_jData[_T("District")] =  m_szDistrictKey;
	m_jData[_T("Village")] =  m_szVillageKey;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CardNumber")] =  m_szCardNumber;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("TerminateOption")] =  m_nStatusOption;
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
	m_jData[_T("CardNumber")].GetValue(m_szCardNumber);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("TerminateOption")].GetValue(m_nStatusOption);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CServicePackageListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CServicePackageListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CServicePackageListView::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szPhone.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szCardNumber.Empty();
	m_nDocumentNo=0;
	m_nOrderNo = 0;
	m_nStatusOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CServicePackageListView::SetMode(int nMode){
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
 		UpdateData(FALSE);
		m_wndRegisterNew.EnableWindow(TRUE);
 		return nOldMode;
}
/*void CServicePackageListView::OnPatientNameChange(){
	
} */
/*void CServicePackageListView::OnPatientNameSetfocus(){
	
} */
/*void CServicePackageListView::OnPatientNameKillfocus(){
	
} */
int CServicePackageListView::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CServicePackageListView::OnPhoneChange(){
	
} */
/*void CServicePackageListView::OnPhoneSetfocus(){
	
} */
/*void CServicePackageListView::OnPhoneKillfocus(){
	
} */
int CServicePackageListView::OnPhoneCheckValue(){
	OnListLoadData();
	return 0;
} 
void CServicePackageListView::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnProvillSelendok(){
	 
}
/*void CServicePackageListView::OnProvillSetfocus(){
	
}*/
/*void CServicePackageListView::OnProvillKillfocus(){
	
}*/
long CServicePackageListView::OnProvillLoadData(){
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
/*void CServicePackageListView::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CServicePackageListView::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnDistrictSelendok(){
	 
}
/*void CServicePackageListView::OnDistrictSetfocus(){
	
}*/
/*void CServicePackageListView::OnDistrictKillfocus(){
	
}*/
long CServicePackageListView::OnDistrictLoadData(){
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
/*void CServicePackageListView::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CServicePackageListView::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnVillageSelendok(){
	 
}
/*void CServicePackageListView::OnVillageSetfocus(){
	
}*/
/*void CServicePackageListView::OnVillageKillfocus(){
	
}*/
long CServicePackageListView::OnVillageLoadData(){
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
/*void CServicePackageListView::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CServicePackageListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnDepartmentSelendok(){
	 
}
/*void CServicePackageListView::OnDepartmentSetfocus(){
	
}*/
/*void CServicePackageListView::OnDepartmentKillfocus(){
	
}*/
long CServicePackageListView::OnDepartmentLoadData(){
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
/*void CServicePackageListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CServicePackageListView::OnCardNumberChange(){
	
} */
/*void CServicePackageListView::OnCardNumberSetfocus(){
	
} */
/*void CServicePackageListView::OnCardNumberKillfocus(){
	
} */
int CServicePackageListView::OnCardNumberCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hvi_docno FROM hms_visitinfo WHERE hvi_cardid='%s' and hvi_status='O' "), m_szCardNumber);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hvi_docno"), m_nCurDoc);
	}
	OnListLoadData();
	return 0;
} 
/*void CServicePackageListView::OnDocumentNoChange(){
	
} */
/*void CServicePackageListView::OnDocumentNoSetfocus(){
	
} */
/*void CServicePackageListView::OnDocumentNoKillfocus(){
	
} */
int CServicePackageListView::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 

/*void CServicePackageListView::OnOrderNoChange(){
	
} */
/*void CServicePackageListView::OnOrderNoSetfocus(){
	
} */
/*void CServicePackageListView::OrderNoKillfocus(){
	
} */
int CServicePackageListView::OnOrderNoCheckValue(){
	OnListLoadData();
	return 0;
}

void CServicePackageListView::OnPendingOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	OnListLoadData();
}

void CServicePackageListView::OnRegistedOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	OnListLoadData();
}
void CServicePackageListView::OnTerminateOptionSelect(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);	
	UpdateData(FALSE);
	OnListLoadData();

}
/*void CServicePackageListView::OnFromDateChange(){
	
} */
/*void CServicePackageListView::OnFromDateSetfocus(){
	
} */
/*void CServicePackageListView::OnFromDateKillfocus(){
	
} */
int CServicePackageListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CServicePackageListView::OnToDateChange(){
	
} */
/*void CServicePackageListView::OnToDateSetfocus(){
	
} */
/*void CServicePackageListView::OnToDateKillfocus(){
	
} */
int CServicePackageListView::OnToDateCheckValue(){
	return 0;
} 
void CServicePackageListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CServicePackageListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
} 

#include "HMSRegisterPackageDialog.h"

void CServicePackageListView::OnRegisterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nPSel = m_nPatientSel;

	if(nPSel < 0)
	{
		return;
	}
	int nSel = m_wndPackageList.GetCurSel();
	
	if(nSel < 0)
	{
		return;
	}
	long nOrderId = str2long(m_wndPackageList.GetItemText(nSel, 0));
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("S"))
	{
		if(szStatus == _T("I"))
			ShowMessageBox(_T("Trạng thái đang lưu trú"));
		if(szStatus == _T("T"))
			ShowMessageBox(_T("Trạng thái đã kết thúc"));
		return;
	}

	CHMSRegisterPackageDialog dlg(this, VM_EDIT);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_szDept = m_wndList.GetItemText(nPSel, 1);
	dlg.m_szPatientName = m_wndList.GetItemText(nPSel, 3);
	dlg.m_szYob = m_wndList.GetItemText(nPSel, 4);
	dlg.m_szGender = m_wndList.GetItemText(nPSel, 5);
	dlg.m_szAddress = m_wndList.GetItemText(nPSel, 6);
	dlg.m_nOrderId = m_nOrderId;
	dlg.m_szStatus = GetOrderStatus();
	if(dlg.DoModal() == IDOK)
	{
		OnPackageListLoadData();
		OnPackageListPrintItem();
	}
} 
void CServicePackageListView::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nPSel = m_nPatientSel;
	int nSel = m_wndPackageList.GetCurSel();
	if(nSel < 0)
		return;

	long nOrderId = str2long(m_wndPackageList.GetItemText(nSel, 0));
	CString szStatus = GetOrderStatus();
	
	if(szStatus != _T("I"))
	{
		ShowMessageBox(_T("Trạng thái đã kết thúc"));
		return;
	}
	CHMSRegisterPackageDialog dlg(this, VM_TERM);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nOrderId = nOrderId;

	dlg.m_szPatientName = m_wndList.GetItemText(nPSel, 3);
	dlg.m_szYob = m_wndList.GetItemText(nPSel, 4);
	dlg.m_szGender = m_wndList.GetItemText(nPSel, 5);
	dlg.m_szAddress = m_wndList.GetItemText(nPSel, 6);
	dlg.m_szStatus = szStatus;

	if(dlg.DoModal() == IDOK)
	{

	}
} 


#include "HMSExtraPatientPackageDialog.h"

void CServicePackageListView::OnRegisterNewSelect(){
	CHMSExtraPatientPackageDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		m_nDocumentNo = dlg.m_nDocumentNo;
		UpdateData(FALSE);
		OnListLoadData();
		OnListSelectChange(0,0);
		OnRegisterServicePackage();
	}

}
void CServicePackageListView::OnListDblClick(){
	OnRegisterServicePackage();
} 
void CServicePackageListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_wndRegister.EnableWindow(TRUE);
	m_nCurDoc = str2long(m_wndList.GetItemText(nNewItem, 2));
	OnPackageListLoadData();
	pMF->m_nPatientNo = str2long(m_wndList.GetItemText(nNewItem, 9));
	pMF->m_nDocumentNo = m_nCurDoc;
	pMF->m_szDept = m_wndList.GetItemText(nNewItem, 1);
	m_nPatientSel  = nNewItem;
} 
int CServicePackageListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CServicePackageListView::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere2;

	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	
	szWhere.Empty();

	

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

	szWhere2.Format(_T("(hcr_status             IN('A','I')") \
		_T(" OR (hcr_status                ='T'") \
		_T(" AND hcrf_acceptedfee         <>'P'") \
		_T(" AND TRUNC(hcr_dischargedate) >= TRUNC(sysdate)-15 )) "));

	if(m_nStatusOption == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_status='I' "));
		szWhere2.Empty();
	}
	else if(m_nStatusOption == 2)
	{
		szWhere.AppendFormat(_T(" and hfe_status='T' "));
		szWhere.AppendFormat(_T(" and trunc(hfe_enddate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "),m_szFromDate, m_szToDate);
		szWhere2.Empty();
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_status in('O','S') "));
		szWhere2.Empty();
		
		
	}

	if(!m_szCardNumber.IsEmpty() && m_nCurDoc > 0)
	{
		szWhere.Format(_T(" and hd_docno=%ld "), m_nCurDoc);
		szWhere2.Empty();
	}
	if(m_nDocumentNo > 0 )
	{
		szWhere.Format(_T(" and hd_docno=%ld "), m_nDocumentNo);
		szWhere2.Empty();
	}

	if(m_nStatusOption == 0)
	{
		//szWhere.AppendFormat(_T(" and htr_status in('A','I') "));
	}



	if(m_nOrderNo > 0 )
	{
		szWhere.Format(_T(" and hfe_fee_extra_id=%ld "), m_nOrderNo);
		szWhere2.Empty();


	}

	

	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
_T("   hd_patientno           AS patientno,") \
_T("   case when htr_deptid is not null then htr_deptid else hd_enddept end  AS deptid,") \
_T("   trim( hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                 AS pname,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
_T("   hms_getsex(hp_sex)                              AS gender,") \
_T("   hms_getaddress(hp_provid, hp_distid, hp_villid) AS address,") \
_T("   hd_telephone") \
_T("   ||','") \
_T("   ||hd_contacttel AS phone, ") \
_T(" (select sum(extract(day from  systimestamp-hfe_enddate)*24+extract(hour from  systimestamp-hfe_enddate)) from hms_fee_extra where hfe_docno=hd_docno) as ttl_hour ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno = hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno = hd_docno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(hcr_docno = htr_docno)") \
_T(" LEFT JOIN hms_fee_extra") \
_T(" ON(hfe_docno                  = hd_docno") \
_T(" AND hfe_type                  ='S')") \
_T(" WHERE 1=1  %s ORDER BY pname"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	if(nCount <= 0)
	{
		return 0;
		//ShowMessageBox(_T("Không tìm thấy bệnh nhân nào trong điều kiện"));
	}
	CString tmpStr, tmpStr2;
	int nIdx = 0;
	int nVisitCount = 0;
	int nItem;
	long nHour = 0;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	CString szDept;


	while(!rs.IsEOF()){ 
		rs.GetValue(_T("pname"), tmpStr);
		rs.GetValue(_T("ttl_hour"), nHour);
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

		rs.GetValue(_T("deptid"), szDept);
		if(szDept.IsEmpty())
		{
			rs.GetValue(_T("exm_deptid"), szDept);
		}
		tmpStr2.Format(_T("%d"), nVisitCount);
		tmpStr.Format(_T("%d"), ++nIdx);
		nItem = m_wndList.AddItems(
			tmpStr, 
			szDept, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("gender")), 
			rs.GetValue(_T("Address")), 
			rs.GetValue(_T("Phone")), 
			tmpStr2,
			rs.GetValue(_T("patientno")), 
			NULL);
		if(nHour > 0)
		{
			CGridListItem* pItem = m_wndList.GetInternalData(nItem);
			pItem->GetCell(2)->m_clrBackground = RGB(255,128,0);
			pItem->GetCell(2)->m_clrText = RGB(255, 255,255);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CServicePackageListView::OnPackageListDblClick(){
	OnTerminateSelect();
} 
void CServicePackageListView::OnPackageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderId = str2long(m_wndPackageList.GetItemText(nNewItem, 0));
	
} 

int CServicePackageListView::OnPackageListRegisterItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnRegisterSelect();
	 return 0;
} 

int CServicePackageListView::OnPackageListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndPackageList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndPackageList.GetItemText(nSel, 0));
	CString szStatus = m_wndPackageList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không cho phép sửa khi trạng thái đã kết thúc"));
		return 0;
	}
	CHMSRegisterPackageDialog dlg(this, VM_EDIT);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nOrderId = nOrderId;
	if(dlg.DoModal() == IDOK)
	{
		OnPackageListLoadData();
		m_wndPackageList.SetCurSel(nSel);
	}

	 return 0;
} 

int CServicePackageListView::OnPackageListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndPackageList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndPackageList.GetItemText(nSel, 0));
	CString szStatus = m_wndPackageList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã được kết thúc"));
		return 0;
	}

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy đề mục đã chọn không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_visitinfo SET hvi_status='C' WHERE hvi_visitinfo_id=%ld and hvi_createdby='%s' "), nOrderId, pMF->GetCurrentUser());
	int ret = pMF->ExecSQL(szSQL);
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được đề mục"));
	}
	else
	{
		OnPackageListLoadData();
	}
	 return 0;
} 

int CServicePackageListView::OnPackageListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnTerminateSelect();
	 return 0;
} 
int CServicePackageListView::OnPackageListPrintItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
return 0;
	int nSel = m_wndPackageList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndPackageList.GetItemText(nSel, 0));

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
_T("   hms_getaddress(hp_provid, hp_distid, hp_villid) AS address,") \
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
_T(" and hvi_visitinfo_id=%ld "), nOrderId);



	rs.ExecSQL(szSQL);
	

	rs.GetValue(_T("docno"), tmpStr);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%ld"), nOrderId);
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


long CServicePackageListView::OnPackageListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPackageList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT HFE_FEE_EXTRA_ID AS idx, hfe_status as status, ") \
_T("   (select hr_name from hms_relative where hr_relative_id=hfe_relative_id)       AS relative,") \
_T("   hfe_smartcard_id      AS smartcard_id,") \
_T("   hfe_cardnumber        AS cardnumber,") \
_T("   to_char(hfe_orderdate,'DD/MM/YYYY HH24:MI')         AS begindate,") \
_T("   to_char(hfe_enddate,'DD/MM/YYYY HH24:MI')           AS enddate,") \
_T(" coalesce(extract(day from  systimestamp-hfe_enddate)*24+extract(hour from  systimestamp-hfe_enddate), 0) as hour, ") \
_T("   hfel_quantity         AS quantity,") \
_T("   hfl_name              AS pkg_name, hfe_batch_id as batch_id, ") \
_T(" hfel_cost as amount ") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_fee_list") \
_T(" WHERE hfe_docno      =%ld") \
_T(" AND hfel_docno       = hfe_docno") \
_T(" AND hfe_fee_extra_id = hfel_fee_extra_id") \
_T(" AND hfel_itemid      = hfl_feeid") \
_T(" AND hfe_type         ='S'") \
_T(" ORDER BY hfel_fee_extraline_id"), m_nCurDoc);

	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	CString szStatus, szStatusDesc;
	long nHour = 0;
	bool bChangeColor = false;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		if(szStatus == _T("O"))
			szStatusDesc = _T("Đang mở");
		if(szStatus == _T("S"))
			szStatusDesc = _T("Đã gửi");
		if(szStatus == _T("I"))
			szStatusDesc = _T("Đang lưu trú");
		if(szStatus == _T("T"))
			szStatusDesc = _T("Đã kết thúc");
		rs.GetValue(_T("hour"), nHour);

		nItem = m_wndPackageList.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("cardnumber")), 
			rs.GetValue(_T("relative")), 
			rs.GetValue(_T("pkg_name")), 
			rs.GetValue(_T("Quantity")),
			rs.GetValue(_T("Amount")),
			rs.GetValue(_T("BeginDate")), 
			rs.GetValue(_T("EndDate")), 
			szStatusDesc,
			rs.GetValue(_T("batch_id")),
			NULL);
		if(szStatus != _T("T"))
		{

			if(nHour >=- 12 && nHour <= 0)
			{
				CGridListItem* pItem = m_wndPackageList.GetInternalData(nItem);
				pItem->GetCell(7)->m_clrBackground = RGB(255, 128,0);
				pItem->GetCell(7)->m_clrText = RGB(255,255, 255);
			}
			else if(nHour > 0)
			{
				CGridListItem* pItem = m_wndPackageList.GetInternalData(nItem);
				
				pItem->GetCell(7)->m_clrBackground = RGB(255,0,0);
				pItem->GetCell(7)->m_clrText = RGB(255,255, 255);
				
			}
		}
		rs.MoveNext();
	}
	m_wndPackageList.EndLoad(); 

	return nCount;
	return 0;
}
int CServicePackageListView::OnAddServicePackageListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CServicePackageListView::OnEditServicePackageListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CServicePackageListView::OnDeleteServicePackageListView(){
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
 		OnCancelServicePackageListView();
 	}
	return 0;
}
int CServicePackageListView::OnSaveServicePackageListView(){
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
 		//OnServicePackageListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CServicePackageListView::OnCancelServicePackageListView(){
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
int CServicePackageListView::OnServicePackageListViewListLoadData(){
	return 0;
}


BOOL CServicePackageListView::PreTranslateMessage(MSG *pMsg)
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

int CServicePackageListView::OnRegisterServicePackage()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	CHMSExtraInfoDialog dlg(this);
	dlg.DoModal();
	return 0;
}

CString CServicePackageListView::GetOrderStatus()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStatus;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hfe_status FROM hms_fee_extra WHERE hfe_docno=%ld and hfe_fee_extra_id=%ld"), m_nCurDoc, m_nOrderId);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfe_status"), szStatus);

	m_szStatus = szStatus;
	return m_szStatus;
}

void CServicePackageListView::OnResizeLayout()
{
	//AddLayoutControl(&m_wndList, WS_RESIZEX, 0, 0, 100, 0);
	//AddLayoutControl(&m_wndPackageList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
}