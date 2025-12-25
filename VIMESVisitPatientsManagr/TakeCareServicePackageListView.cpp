#include "TakeCareServicePackageListView.h"
#include "MainFrm.h"
#include "HMSExtraInfoDialog.h"
#include "HMSRegisterTakeCarePackageDialog_v2.h"

/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CServicePackageListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTakeCareServicePackageListView* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTakeCareServicePackageListView* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTakeCareServicePackageListView* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnVillageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTakeCareServicePackageListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnCardNumberCheckValue();
}
static long _OnServicePackageLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnServicePackageLoadData();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoCheckValue();
} 

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnOrderNoCheckValue();
} 

static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnPendingOptionSelect();
}

static void _OnRegistedOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnRegistedOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnTerminateSelect();
} 


static void _OnRegisterNewSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnRegisterNewSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTakeCareServicePackageListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListDeleteItem();
} 




static int _OnListRegisterItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListRegisterItem();
} 

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListEditItem();
} 




static int _OnListTerminateItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListTerminateItem();
} 
static int _OnListPrintItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListPrintItem();
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListRollbackItem();
}

static int _OnListRevokeItemFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnListRevokeItem();
} 


static int _OnRegisterTakeCareServicePackageFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnRegisterTakeCareServicePackage();
}

static int _OnAddTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnAddTakeCareServicePackageListView();
} 
static int _OnEditTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnEditTakeCareServicePackageListView();
} 
static int _OnDeleteTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnDeleteTakeCareServicePackageListView();
} 
static int _OnSaveTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnSaveTakeCareServicePackageListView();
} 
static int _OnCancelTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnCancelTakeCareServicePackageListView();
} 
CTakeCareServicePackageListView::CTakeCareServicePackageListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTakeCareServicePackageListView::~CTakeCareServicePackageListView()
{
}
void CTakeCareServicePackageListView::OnCreateComponents()
{
	/*m_wndSearchInformation.Create(this, _T("Search Information"), 4, 5, 794, 120);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 420, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 425, 30, 525, 55);
	m_wndDepartment.Create(this,531, 31, 791, 56); 
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 10, 60, 110, 85);
	m_wndCardNumber.Create(this,115, 60, 420, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 425, 60, 525, 85);
	m_wndDocumentNo.Create(this,530, 60, 620, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 625, 60, 700, 85);
	m_wndOrderNo.Create(this,705, 60, 791, 85); 
	m_wndStatus.Create(this, _T("Status"), 10, 90, 110, 115);
	m_wndPendingOption.Create(this, _T("Ðang đợi"), 115, 90, 210, 115);
	m_wndRegistedOption.Create(this, _T("Ðang thực hiện"), 215, 90, 325, 115);
	m_wndTerminateOption.Create(this, _T("Ðã kết thúc"), 330, 90, 420, 115);
	m_wndFromDateLabel.Create(this, _T("From Date"), 425, 90, 525, 115);
	m_wndFromDate.Create(this,530, 90, 621, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 626, 90, 701, 115);
	m_wndToDate.Create(this,706, 90, 792, 115); 
	m_wndSearch.Create(this, _T("Search"), 800, 30, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 60, 950, 85);*/
	m_wndSearchInformation.Create(this, _T("Search Information"), 4, 4, 794, 149);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 420, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 425, 30, 525, 55);
	m_wndDepartment.Create(this,531, 31, 791, 56); 
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 10, 60, 110, 85);
	m_wndCardNumber.Create(this,115, 60, 420, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 425, 60, 525, 85);
	m_wndDocumentNo.Create(this,530, 60, 620, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 625, 60, 700, 85);
	m_wndOrderNo.Create(this,705, 60, 791, 85);
	m_wndServicePackageLabel.Create(this, _T("ServicePackage"), 10, 90, 110, 115);
	m_wndServicePackage.SetCheckBox(true);
	m_wndServicePackage.Create(this,115, 89, 791, 114); 
	m_wndStatus.Create(this, _T("Status"), 10, 120, 110, 145);
	m_wndPendingOption.Create(this, _T("Ðang đợi"), 115, 120, 210, 145);
	m_wndRegistedOption.Create(this, _T("Ðang thực hiện"), 215, 120, 325, 145);
	m_wndTerminateOption.Create(this, _T("Ðã kết thúc"), 330, 120, 420, 145);
	m_wndFromDateLabel.Create(this, _T("From Date"), 425, 120, 525, 145);
	m_wndFromDate.Create(this,530, 120, 621, 145); 
	m_wndToDateLabel.Create(this, _T("To Date"), 626, 120, 701, 145);
	m_wndToDate.Create(this,706, 120, 792, 145); 
	m_wndSearch.Create(this, _T("Search"), 800, 30, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 60, 950, 85);

	m_wndList.Create(this,5, 150, 955, 650); 
	
	m_wndPhone.Create(this, 0, 0, 0, 0);
	m_wndPhone.ShowWindow(SW_HIDE);
	m_wndPhone.EnableWindow(FALSE);
	m_wndProvill.Create(this, 0, 0, 0, 0);
	m_wndProvill.ShowWindow(SW_HIDE);
	m_wndProvill.EnableWindow(FALSE);
	m_wndDistrict.Create(this, 0, 0, 0, 0);
	m_wndDistrict.ShowWindow(SW_HIDE);
	m_wndDistrict.EnableWindow(FALSE);
	m_wndVillage.Create(this, 0, 0, 0, 0);
	m_wndVillage.ShowWindow(SW_HIDE);
	m_wndVillage.EnableWindow(FALSE);
}
void CTakeCareServicePackageListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(false);
	m_wndDepartment.LimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);

	m_wndOrderNo.SetLimitText(16);
	m_wndOrderNo.SetCheckValue(true);

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);


	m_wndServicePackage.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 100);
	m_wndServicePackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);//stt
	m_wndList.InsertColumn(1, _T("Số phiếu"), CFMT_NUMBER, 70); //extra_id
	m_wndList.InsertColumn(2, _T(""), CFMT_NUMBER, 0);	//extraline_id
	m_wndList.InsertColumn(3, _T("Department"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(4, _T("Document Nno"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(5, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(6, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("Gender"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Package"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Begin Date"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(10, _T("End Date"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(11, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);

	
}
void CTakeCareServicePackageListView::OnSetWindowEvents(){
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
	m_wndServicePackage.SetEvent(WE_LOADDATA, _OnServicePackageLoadDataFnc);
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
	
	//if (pMF->CheckPermission(_T("01")))
	{
		m_wndList.AddEvent(1, _T("Xác nhận thực hiện\tF2"), _OnListRegisterItemFnc,  0, 0, VK_F2);		
	}	
	
	
	//if (pMF->CheckPermission(_T("02")))
	{
		//m_wndList.AddEvent(0, _T("-"), NULL);
		//m_wndList.AddEvent(4, _T("Kết thúc thực hiện\tF5"), _OnListTerminateItemFnc,0, 0, VK_F5);
	}
	

	if (pMF->CheckPermission(_T("03")))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(5, _T("In phiếu"), _OnListPrintItemFnc);
	}
	
	

    if (pMF->CheckPermission(_T("05")))
	{
		//m_wndList.AddEvent(0, _T("-"), NULL);
		//m_wndList.AddEvent(7, _T("Khôi phục lại"), _OnListRollbackItemFnc);
	}
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);

}
void CTakeCareServicePackageListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	/*
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	*/
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_TextEx(pDX, m_wndServicePackage.GetDlgCtrlID(), m_szServicePackageKey);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nStatusOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTakeCareServicePackageListView::UpdateJson(BOOL bSave){
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
void CTakeCareServicePackageListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTakeCareServicePackageListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTakeCareServicePackageListView::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szPhone.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szServicePackageKey.Empty();
	m_szCardNumber.Empty();
	m_nDocumentNo=0;
	m_nOrderNo = 0;
	m_nStatusOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTakeCareServicePackageListView::SetMode(int nMode){
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
/*void CTakeCareServicePackageListView::OnPatientNameChange(){
	
} */
/*void CTakeCareServicePackageListView::OnPatientNameSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnPatientNameKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CTakeCareServicePackageListView::OnPhoneChange(){
	
} */
/*void CTakeCareServicePackageListView::OnPhoneSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnPhoneKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnPhoneCheckValue(){
	OnListLoadData();
	return 0;
} 
void CTakeCareServicePackageListView::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnProvillSelendok(){
	 
}
/*void CTakeCareServicePackageListView::OnProvillSetfocus(){
	
}*/
/*void CTakeCareServicePackageListView::OnProvillKillfocus(){
	
}*/
long CTakeCareServicePackageListView::OnProvillLoadData(){
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
/*void CTakeCareServicePackageListView::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTakeCareServicePackageListView::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnDistrictSelendok(){
	 
}
/*void CTakeCareServicePackageListView::OnDistrictSetfocus(){
	
}*/
/*void CTakeCareServicePackageListView::OnDistrictKillfocus(){
	
}*/
long CTakeCareServicePackageListView::OnDistrictLoadData(){
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
/*void CTakeCareServicePackageListView::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTakeCareServicePackageListView::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnVillageSelendok(){
	 
}
/*void CTakeCareServicePackageListView::OnVillageSetfocus(){
	
}*/
/*void CTakeCareServicePackageListView::OnVillageKillfocus(){
	
}*/
long CTakeCareServicePackageListView::OnVillageLoadData(){
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
/*void CTakeCareServicePackageListView::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTakeCareServicePackageListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnDepartmentSelendok(){
	 
}
/*void CTakeCareServicePackageListView::OnDepartmentSetfocus(){
	
}*/
/*void CTakeCareServicePackageListView::OnDepartmentKillfocus(){
	
}*/
long CTakeCareServicePackageListView::OnDepartmentLoadData(){
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
/*void CTakeCareServicePackageListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberChange(){
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnCardNumberCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Hsc_Docno FROM Hms_Smartcard WHERE hsc_cardid='%s' and hsc_status='O' "), m_szCardNumber);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("Hsc_Docno"), m_nCurDoc);
	}
	OnListLoadData();
	return 0;
}
long CTakeCareServicePackageListView::OnServicePackageLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndServicePackage.IsSearchKey() && !m_szServicePackageKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szServicePackageKey);
	};
	m_wndServicePackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select hfl_feeid as id, hfl_name as name") \
	_T(" from hms_fee_list") \
	_T(" where NVL(hfl_subitem,'XX')='DD' AND (hfl_servprice+hfl_reqprice) >= 0 AND hfl_active ='Y'"));
	//_T(" and hfl_feeid in(select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' and ss_default IS NOT NULL)"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndServicePackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CTakeCareServicePackageListView::OnDocumentNoChange(){
	
} */
/*void CTakeCareServicePackageListView::OnDocumentNoSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnDocumentNoKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 

/*void CTakeCareServicePackageListView::OnOrderNoChange(){
	
} */
/*void CTakeCareServicePackageListView::OnOrderNoSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OrderNoKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnOrderNoCheckValue(){
	OnListLoadData();
	return 0;
}

void CTakeCareServicePackageListView::OnPendingOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);
	OnListLoadData();
}

void CTakeCareServicePackageListView::OnRegistedOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);
	OnListLoadData();
}
void CTakeCareServicePackageListView::OnTerminateOptionSelect(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);	
	UpdateData(FALSE);
	OnListLoadData();

}
/*void CTakeCareServicePackageListView::OnFromDateChange(){
	
} */
/*void CTakeCareServicePackageListView::OnFromDateSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnFromDateKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CTakeCareServicePackageListView::OnToDateChange(){
	
} */
/*void CTakeCareServicePackageListView::OnToDateSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnToDateKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnToDateCheckValue(){
	return 0;
} 
void CTakeCareServicePackageListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CTakeCareServicePackageListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
} 

#include "HMSRegisterTakeCarePackageDialog.h"

void CTakeCareServicePackageListView::OnRegisterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
/*
	CString szStatus = GetOrderStatus();

	if(szStatus = _T("T"))
	{
		ShowMessageBox(_T("Trạng thái đã kết thúc"));
		return;
	}
*/	
	//CHMSRegisterTakeCarePackageDialog dlg(this, VM_EDIT);
	CHMSRegisterTakeCarePackageDialog_v2 dlg(this, VM_ADD);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_szDept = m_wndList.GetItemText(nSel, 3);
	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 5);
	dlg.m_szYob = m_wndList.GetItemText(nSel, 6);
	dlg.m_szGender = m_wndList.GetItemText(nSel, 7);

	dlg.m_nOrderId = m_nOrderId;
	dlg.m_nOrderLineId = m_nOrderLineId;
	dlg.m_szStatus = GetOrderStatus();
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	//	OnListPrintItem();
	}
} 
void CTakeCareServicePackageListView::OnTerminateSelect(){
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("I"))
	{
		ShowMessageBox(_T("Trạng thái đã kết thúc"));
		return;
	}
	//CHMSRegisterTakeCarePackageDialog dlg(this, VM_TERM);
	CHMSRegisterTakeCarePackageDialog_v2 dlg(this, VM_TERM);

	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nOrderId = m_nOrderId;
	dlg.m_nOrderLineId = m_nOrderLineId;

	dlg.m_szDept = m_wndList.GetItemText(nSel, 3);
	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 5);
	dlg.m_szYob = m_wndList.GetItemText(nSel, 6);
	dlg.m_szGender = m_wndList.GetItemText(nSel, 7);

	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 


#include "HMSExtraPatientPackageDialog.h"

void CTakeCareServicePackageListView::OnRegisterNewSelect(){
	CHMSExtraPatientPackageDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		m_nDocumentNo = dlg.m_nDocumentNo;
		UpdateData(FALSE);
		OnListLoadData();
		OnListSelectChange(0,0);
		OnRegisterTakeCareServicePackage();
	}

}
void CTakeCareServicePackageListView::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CHMSRegisterTakeCarePackageDialog_v2 dlg(this, VM_VIEW);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_szDept = m_wndList.GetItemText(nSel, 3);
	dlg.m_szPatientName = m_wndList.GetItemText(nSel, 5);
	dlg.m_szYob = m_wndList.GetItemText(nSel, 6);
	dlg.m_szGender = m_wndList.GetItemText(nSel, 7);
	dlg.m_nOrderId = m_nOrderId;
	dlg.m_nOrderLineId = m_nOrderLineId;
	dlg.m_szStatus = GetOrderStatus();
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		OnListPrintItem();
	}

} 
void CTakeCareServicePackageListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nCurDoc = str2long(m_wndList.GetItemText(nNewItem, 4));
	m_nOrderId = str2long(m_wndList.GetItemText(nNewItem, 1));	
	m_nOrderLineId = str2long(m_wndList.GetItemText(nNewItem, 2));	
} 


int CTakeCareServicePackageListView::OnListRegisterItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnRegisterSelect();
	 return 0;
} 

int CTakeCareServicePackageListView::OnListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szStatus = m_wndList.GetItemText(nSel, 9);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không cho phép sửa khi trạng thái đã kết thúc"));
		return 0;
	}
    CHMSRegisterTakeCarePackageDialog_v2 dlg(this, VM_EDIT);
	dlg.m_nDocumentNo = m_nCurDoc;
	dlg.m_nOrderId = nOrderId;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}

	 return 0;
} 

int CTakeCareServicePackageListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szStatus = m_wndList.GetItemText(nSel, 9);
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
		OnListLoadData();
	}
	 return 0;
} 

int CTakeCareServicePackageListView::OnListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnTerminateSelect();
	 return 0;
} 

int CTakeCareServicePackageListView::OnListRevokeItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szStatus = m_wndList.GetItemText(nSel, 11);
	if(szStatus != _T("T"))
	{
		ShowMessageBox(_T("Phiếu chưa được kết thúc."));
		return 0;
	}

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn thu hồi thẻ không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_fee_extra SET hfe_status='R' WHERE hfe_fee_extra_id=%ld "), nOrderId);
	int ret = pMF->ExecSQL(szSQL);
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được đề mục"));
	}
	else
	{
		long nSmartCardId = str2long(m_wndList.GetItemText(nSel, 10));
		szSQL.Format(_T("UPDATE hms_smartcard SET hsc_status='R' WHERE hsc_smartcard_id=%ld "), nSmartCardId);
		int ret = pMF->ExecSQL(szSQL);

		OnListLoadData();
	}
	 return 0;
} 
int CTakeCareServicePackageListView::OnListPrintItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
return 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndList.GetItemText(nSel, 0));

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


long CTakeCareServicePackageListView::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;


	szWhere.Empty();

	

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_deptid='%s' "), m_szDepartmentKey);
	}	

	if(!m_szPatientName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "),
			m_szPatientName);
	}
	
	if(m_nStatusOption == 1)
	{
		szWhere.AppendFormat(_T(" and hetc_status='I' "));
		szWhere.AppendFormat(_T(" and trunc(HETC_BEGINDATE) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "),m_szFromDate, m_szToDate);
	}
	else if(m_nStatusOption == 2)
	{
		szWhere.AppendFormat(_T(" and hetc_status='T' "));
		szWhere.AppendFormat(_T(" and trunc(hetc_enddate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "),m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" and NVL(hetc_status, 'O') = 'O' and hfe_status in ('S','I')"));
		szWhere.AppendFormat(_T(" and trunc(hfe_orderdate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "),m_szFromDate, m_szToDate);
	}

	if(m_nDocumentNo > 0 )
	{
		szWhere.Format(_T(" and hfe_docno=%ld "), m_nDocumentNo);
	}


	if(m_nOrderNo > 0 )
	{
		szWhere.Format(_T(" and hfe_fee_extra_id=%ld "), m_nOrderNo);
	}

	/*if(!m_szServicePackageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfl_feeid = '%s' "), m_szServicePackageKey);
	}*/

	CString szPackage;
	for(int i=0; i < m_wndServicePackage.GetCount(); i++)
	{
		if(m_wndServicePackage.GetCheck(i))
		{
			m_wndServicePackage.SetCurSel(i);
			if(!szPackage.IsEmpty())
				szPackage.AppendFormat(_T(","));
			szPackage.AppendFormat(_T("'%s'"),m_wndServicePackage.GetCurrent(0));
		}

	}
	if(!szPackage.IsEmpty())
	{
		szWhere.AppendFormat(_T("and hfel_itemid in  (%s) "),szPackage);
	}	

	szSQL.Format(_T(" SELECT HFE_FEE_EXTRA_ID AS extra_id,hfel_fee_extraline_id as extraline_id, ") \
		_T(" hfe_deptid as deptid, ") \
		_T("   hfe_docno             AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                             AS pname,") \
		_T("   TO_CHAR(hp_birthdate, 'YYYY')               AS yob,") \
		_T(" hms_getsex(hp_sex) as sex, ") \
		_T("   hfe_status                                  AS status,") \
		_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI') AS begindate,") \
		_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')   AS enddate,") \
		_T("   hfl_name                                    AS pkg_name,") \
		_T("   hfe_batch_id                                AS batch_id,") \
		_T("   hfel_cost                                   AS amount") \
		_T(" FROM hms_fee_extra") \
		_T(" LEFT JOIN hms_fee_extraline ON (hfel_docno     = hfe_docno AND hfe_fee_extra_id = hfel_fee_extra_id)") \
		_T(" LEFT JOIN hms_fee_list ON (hfel_itemid      = hfl_feeid)") \
		_T(" LEFT JOIN hms_patient ON (hfe_patientno    = hp_patientno)") \
		_T(" LEFT JOIN hms_extra_takecare ON (hetc_docno = hfe_docno AND hetc_extraline_id = hfel_fee_extraline_id)") \
		_T(" WHERE NVL(hfl_subitem,'XX')='DD' AND hfl_servprice+hfl_reqprice >= 0 AND hfl_active ='Y' %s ") \
		_T(" ORDER BY hfel_fee_extraline_id"), szWhere);

//	_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	int nIndex=0;
	CString szStatus, szStatusDesc;
	CString tmpStr;
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

		tmpStr.Format(_T("%d"), ++nIndex);
		
		nItem = m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("extra_id")),
			rs.GetValue(_T("extraline_id")),
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("pkg_name")), 
			rs.GetValue(_T("begindate")), 
			rs.GetValue(_T("enddate")), 
			szStatus,
			NULL);
		if(szStatus != _T("T"))
		{
			//if(nHour >=- 12 && nHour <= 0)
			//{
			//	CGridListItem* pItem = m_wndList.GetInternalData(nItem);
			//	pItem->GetCell(7)->m_clrBackground = RGB(255, 128,0);
			//	pItem->GetCell(7)->m_clrText = RGB(255,255, 255);
			//}
			//else if(nHour > 0)
			//{
			//	CGridListItem* pItem = m_wndList.GetInternalData(nItem);
			//	
			//	pItem->GetCell(7)->m_clrBackground = RGB(255,0,0);
			//	pItem->GetCell(7)->m_clrText = RGB(255,255, 255);
			//	
			//}
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	return nCount;
	return 0;
}
int CTakeCareServicePackageListView::OnAddTakeCareServicePackageListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTakeCareServicePackageListView::OnEditTakeCareServicePackageListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTakeCareServicePackageListView::OnDeleteTakeCareServicePackageListView(){
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
 		OnCancelTakeCareServicePackageListView();
 	}
	return 0;
}
int CTakeCareServicePackageListView::OnSaveTakeCareServicePackageListView(){
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
 		//OnTakeCareServicePackageListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTakeCareServicePackageListView::OnCancelTakeCareServicePackageListView(){
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
int CTakeCareServicePackageListView::OnTakeCareServicePackageListViewListLoadData(){
	return 0;
}


BOOL CTakeCareServicePackageListView::PreTranslateMessage(MSG *pMsg)
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

int CTakeCareServicePackageListView::OnRegisterTakeCareServicePackage()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	return 0;
}

CString CTakeCareServicePackageListView::GetOrderStatus()
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

void CTakeCareServicePackageListView::OnResizeLayout()
{
	//AddLayoutControl(&m_wndList, WS_RESIZEX, 0, 0, 100, 0);
	AddResize(&m_wndSearchInformation, 100, 100);
	AddResize(&m_wndList, 100, 100);
}

int CTakeCareServicePackageListView::OnListRollbackItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("T"))
	{
		ShowMessageBox(_T("Phiếu chưa được kết thúc"));
		return 0;
	}

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn khôi phục lại đề mục đã chọn không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("HMS_SERVICE_PACKAGE_ROLLBACK('%s',%ld,%ld) "), pMF->GetCurrentUser(), m_nCurDoc, nOrderId);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể khội phục được đề mục"));
	}
	else
	{
		OnListLoadData();
	}
	 return 0;

}