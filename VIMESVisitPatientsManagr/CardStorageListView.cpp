#include "CardStorageListView.h"
#include "MainFrm.h"
#include "HMSExtraInfoDialog.h"
#include "CustomerVisitRegisterDialog.h"
#include "CustomerVisitRegisterDialogEX.h"

/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCardStorageListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnCardNumberCheckValue();
}
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnDocumentNoCheckValue();
} 

/*static void _OnUIDChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnUIDChange();
} */
/*static void _OnUIDSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnUIDSetfocus();} */ 
/*static void _OnUIDKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnUIDKillfocus();
} */
static int _OnUIDCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnUIDCheckValue();
} 

static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CCardStorageListView*)pWnd)->OnPendingOptionSelect();
}

static void _OnRegistedOptionSelectFnc(CWnd *pWnd){
	  ((CCardStorageListView*)pWnd)->OnRegistedOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CCardStorageListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnTerminateSelect();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCardStorageListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCardStorageListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCardStorageListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListDeleteItem();
} 

static int _OnListRegisterItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListRegisterItem();
} 

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListEditItem();
} 

static int _OnListTerminateItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListTerminateItem();
} 
static int _OnListPrintItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListPrintItem();
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListRollbackItem();
}

static int _OnListRevokeItemFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnListRevokeItem();
} 



static int _OnAddCardStorageListViewFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnAddCardStorageListView();
} 
static int _OnEditCardStorageListViewFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnEditCardStorageListView();
} 
static int _OnDeleteCardStorageListViewFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnDeleteCardStorageListView();
} 
static int _OnSaveCardStorageListViewFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnSaveCardStorageListView();
} 
static int _OnCancelCardStorageListViewFnc(CWnd *pWnd){
	 return ((CCardStorageListView*)pWnd)->OnCancelCardStorageListView();
}

static void _OnloaitheSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCardStorageListView* )pWnd)->OnloaitheSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnloaitheSelendokFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnloaitheSelendok();
}
/*static void _OnloaitheSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnloaitheKillfocus();
}*/
/*static void _OnloaitheKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnloaitheKillfocus();
}*/
static long _OnloaitheLoadDataFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnloaitheLoadData();
}
/*static void _OnloaitheAddNewFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnloaitheAddNew();
}*/
static void _OnKhoaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCardStorageListView* )pWnd)->OnKhoaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKhoaSelendokFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnKhoaSelendok();
}
/*static void _OnKhoaSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnKhoaKillfocus();
}*/
/*static void _OnKhoaKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnKhoaKillfocus();
}*/
static long _OnKhoaLoadDataFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnKhoaLoadData();
}
/*static void _OnKhoaAddNewFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnKhoaAddNew();
}*/
/*static void _OnSotheChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheChange();
} */
/*static void _OnSotheSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheSetfocus();} */ 
/*static void _OnSotheKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheKillfocus();
} */
static int _OnSotheCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnSotheCheckValue();
} 
/*static void _OnSotheMorongChangeFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheMorongChange();
} */
/*static void _OnSotheMorongSetfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheMorongSetfocus();} */ 
/*static void _OnSotheMorongKillfocusFnc(CWnd *pWnd){
	((CCardStorageListView *)pWnd)->OnSotheMorongKillfocus();
} */
static int _OnSotheMorongCheckValueFnc(CWnd *pWnd){
	return ((CCardStorageListView *)pWnd)->OnSotheMorongCheckValue();
} 
static void _OnHoatDongSelectFnc(CWnd *pWnd){
	 ((CCardStorageListView*)pWnd)->OnHoatDongSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCardStorageListView *pVw = (CCardStorageListView *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnAllOptionSelectFnc(CWnd *pWnd){
	  ((CCardStorageListView*)pWnd)->OnAllOptionSelect();
}

CCardStorageListView::CCardStorageListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCardStorageListView::~CCardStorageListView()
{
}
void CCardStorageListView::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 120);
	m_wndCustomerNameLabel.Create(this, _T("Thẻ mở rộng"), 10, 60, 93, 85);
	m_wndCustomerName.Create(this,99, 59, 364, 84); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 556, 60, 641, 85);
	m_wndPhone.Create(this,646, 60, 806, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 93, 55);
	m_wndDepartment.Create(this,99, 30, 364, 55); 
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 556, 30, 641, 55);
	m_wndCardNumber.Create(this,646, 29, 806, 54); 
	m_wndUIDLabel.Create(this, _T("Số phiếu"), 370, 60, 455, 85);
	m_wndUID.Create(this,460, 60, 551, 85); 
	m_wndCardTypeLabel.Create(this, _T("Card Type"), 370, 30, 455, 55);
	m_wndCardType.Create(this,460, 30, 551, 55); 
	m_wndStatus.Create(this, _T("Status"), 9, 90, 93, 115);
	m_wndAllOption.Create(this, _T("All"), 99, 90, 160, 115);
	m_wndPendingOption.Create(this, _T("Hoạt động"), 165, 90, 243, 115);
	m_wndTerminateOption.Create(this, _T("Không hoạt động"), 249, 90, 364, 115);
	m_wndFromDateLabel.Create(this, _T("From Date"), 370, 90, 455, 115);
	m_wndFromDate.Create(this,460, 90, 551, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 556, 90, 641, 115);
	m_wndToDate.Create(this,646, 90, 732, 115); 
	m_wndSearch.Create(this, _T("Search"), 815, 6, 960, 31);
	m_wndClear.Create(this, _T("Clear"), 815, 36, 960, 61);
	m_wndRegister.Create(this, _T("Cấp thẻ"), 815, 65, 960, 90);
	m_wndTerminate.Create(this, _T("Trả thẻ"), 815, 94, 960, 119);	
	m_wndSothe_Label.Create(this, _T("Số thẻ"), 5, 530, 85, 555);
	m_wndSothe.Create(this,90, 530, 260, 555); 
	m_wndSothe_Morong_Label.Create(this, _T("Số thẻ mở rộng"), 265, 530, 364, 555);
	m_wndSotheMorong.Create(this,369, 530, 479, 555);
	m_wndLoaithe_label.Create(this, _T("Loại thẻ"), 484, 530, 564, 555);
	m_wndloaithe.Create(this,570, 530, 700, 555); 
	m_wndKhoa_Label.Create(this, _T("Khoa thiết lập"), 704, 530, 784, 555);
	m_wndKhoa.Create(this,789, 530, 960, 555); 
	m_wndHoatDong.Create(this, _T("Hoạt động"), 5, 560, 260, 585);
	m_wndAdd.Create(this, _T("&Add"), 540, 587, 620, 612);
	m_wndEdit.Create(this, _T("&Edit"), 625, 587, 705, 612);
	m_wndDelete.Create(this, _T("&Delete"), 710, 587, 790, 612);
	m_wndSave.Create(this, _T("&Save"), 795, 587, 875, 612);
	m_wndCancel.Create(this, _T("&Cancel"), 879, 587, 959, 612);	
	m_wndList.Create(this,5, 125, 960, 525); 

}
void CCardStorageListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCustomerName.SetLimitText(35);
	m_wndCustomerName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(false);
	m_wndDepartment.LimitText(35);

	m_wndUID.SetLimitText(16);
	m_wndUID.SetCheckValue(true);

//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndloaithe.SetCheckValue(true);
	m_wndloaithe.LimitText(35);
	m_wndKhoa.SetCheckValue(true);
	m_wndKhoa.LimitText(35);
	m_wndSothe.SetLimitText(35);
	m_wndSothe.SetCheckValue(true);
	m_wndSotheMorong.SetLimitText(35);
	m_wndSotheMorong.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);


	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 70);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER | CFMT_CENTER, 60);//stt
	m_wndList.InsertColumn(1, _T("Số thẻ"), CFMT_TEXT, 200); //extra_id
	m_wndList.InsertColumn(2, _T("Số thẻ mở rộng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Loại thẻ"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(4, _T("Khoa"), CFMT_TEXT | CFMT_CENTER, 140);
	m_wndList.InsertColumn(5, _T("Hoạt động?"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Ghi chú"), CFMT_TEXT | CFMT_CENTER, 200);
	m_wndList.InsertColumn(7, _T("Trạng thái hiện thời của thẻ"), CFMT_TEXT | CFMT_RIGHT, 300);	
	m_wndList.InsertColumn(8, _T("Số hồ sơ"), CFMT_NUMBER | CFMT_CENTER, 100);
	m_wndList.InsertColumn(9, _T("Gói dịch vụ"), CFMT_NUMBER | CFMT_CENTER, 100);

	m_wndloaithe.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndloaithe.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndKhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndKhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	
	m_hms_card_settingTbl.SetTableName(_T("hms_card_setting"));
	m_hms_card_settingTbl.AddField(_T("HCS_CREATEDBY"), dfText, 15); 
	m_hms_card_settingTbl.AddField(_T("HCS_CREATEDDATE"), dfDateTime); 
	m_hms_card_settingTbl.AddField(_T("HCS_UPDATEDBY"), dfText, 15); 
	m_hms_card_settingTbl.AddField(_T("HCS_UPDATEDDATE"), dfDateTime); 
	m_hms_card_settingTbl.AddField(_T("HCS_SMARTCARD_ID_NUMBER"), dfText, 15); 
	m_hms_card_settingTbl.AddField(_T("HCS_SMARTCARD_ID_EX"), dfText, 15); 
	m_hms_card_settingTbl.AddField(_T("HCS_TYPE"), dfText, 2); 
	m_hms_card_settingTbl.AddField(_T("HCS_DEPTID"), dfText, 7); 
	m_hms_card_settingTbl.AddField(_T("HCS_ACTIVE"), dfText, 1); 
	m_hms_card_settingTbl.AddField(_T("HCS_LOCKED"), dfText,1); 
	m_hms_card_settingTbl.AddField(_T("HCS_REGDATE"), dfDate); 
	m_hms_card_settingTbl.AddField(_T("HCS_EXPDATE"), dfDate); 
	m_hms_card_settingTbl.AddField(_T("HCS_DESCRIPTION"), dfText, 254); 	
}
void CCardStorageListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCustomerName.SetEvent(WE_CHANGE, _OnCustomerNameChangeFnc);
	//m_wndCustomerName.SetEvent(WE_SETFOCUS, _OnCustomerNameSetfocusFnc);
	//m_wndCustomerName.SetEvent(WE_KILLFOCUS, _OnCustomerNameKillfocusFnc);
	m_wndCustomerName.SetEvent(WE_CHECKVALUE, _OnCustomerNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndCardNumber.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndCardNumber.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndCardNumber.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndCardNumber.SetEvent(WE_CHECKVALUE, _OnCardNumberCheckValueFnc);

	//m_wndUID.SetEvent(WE_CHANGE, _OnUIDChangeFnc);
	//m_wndUID.SetEvent(WE_SETFOCUS, _OnUIDSetfocusFnc);
	//m_wndUID.SetEvent(WE_KILLFOCUS, _OnUIDKillfocusFnc);
	m_wndUID.SetEvent(WE_CHECKVALUE, _OnUIDCheckValueFnc);

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
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndloaithe.SetEvent(WE_SELENDOK, _OnloaitheSelendokFnc);
	//m_wndloaithe.SetEvent(WE_SETFOCUS, _OnloaitheSetfocusFnc);
	//m_wndloaithe.SetEvent(WE_KILLFOCUS, _OnloaitheKillfocusFnc);
	m_wndloaithe.SetEvent(WE_SELCHANGE, _OnloaitheSelectChangeFnc);
	m_wndloaithe.SetEvent(WE_LOADDATA, _OnloaitheLoadDataFnc);
	//m_wndloaithe.SetEvent(WE_ADDNEW, _OnloaitheAddNewFnc);
	m_wndKhoa.SetEvent(WE_SELENDOK, _OnKhoaSelendokFnc);
	//m_wndKhoa.SetEvent(WE_SETFOCUS, _OnKhoaSetfocusFnc);
	//m_wndKhoa.SetEvent(WE_KILLFOCUS, _OnKhoaKillfocusFnc);
	m_wndKhoa.SetEvent(WE_SELCHANGE, _OnKhoaSelectChangeFnc);
	m_wndKhoa.SetEvent(WE_LOADDATA, _OnKhoaLoadDataFnc);
	//m_wndKhoa.SetEvent(WE_ADDNEW, _OnKhoaAddNewFnc);
	//m_wndSothe.SetEvent(WE_CHANGE, _OnSotheChangeFnc);
	//m_wndSothe.SetEvent(WE_SETFOCUS, _OnSotheSetfocusFnc);
	//m_wndSothe.SetEvent(WE_KILLFOCUS, _OnSotheKillfocusFnc);
	m_wndSothe.SetEvent(WE_CHECKVALUE, _OnSotheCheckValueFnc);
	//m_wndSotheMorong.SetEvent(WE_CHANGE, _OnSotheMorongChangeFnc);
	//m_wndSotheMorong.SetEvent(WE_SETFOCUS, _OnSotheMorongSetfocusFnc);
	//m_wndSotheMorong.SetEvent(WE_KILLFOCUS, _OnSotheMorongKillfocusFnc);
	m_wndSotheMorong.SetEvent(WE_CHECKVALUE, _OnSotheMorongCheckValueFnc);
	m_wndHoatDong.SetEvent(WE_CLICK, _OnHoatDongSelectFnc);
	m_wndAllOption.SetEvent(WE_CLICK, _OnAllOptionSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	if (pMF->CheckPermission(_T("60.1")))
	{
	m_wndList.AddEvent(1, _T("Sửa thông tin thẻ"), _OnEditCardStorageListViewFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Xóa thông tin thẻ"), _OnDeleteCardStorageListViewFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	}
	
	m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	m_szToDate = pMF->GetSysDateTime();
	OnListLoadData();	
	SetMode(VM_NONE);

}
void CCardStorageListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_Text(pDX, m_wndUID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nStatusOption);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nPendingOption);
	DDX_Radio(pDX, m_wndTerminateOption.GetDlgCtrlID(), m_nTerminateOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndloaithe.GetDlgCtrlID(), m_szloaitheKey);
	DDX_TextEx(pDX, m_wndKhoa.GetDlgCtrlID(), m_szKhoaKey);
	DDX_Text(pDX, m_wndSothe.GetDlgCtrlID(), m_szSothe);
	DDX_Text(pDX, m_wndSotheMorong.GetDlgCtrlID(), m_szSotheMorong);
	DDX_Check(pDX, m_wndHoatDong.GetDlgCtrlID(), m_bHoatDong);
	DDX_Radio(pDX, m_wndAllOption.GetDlgCtrlID(), m_nAllOption);

}
void CCardStorageListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CustomerName")] =  m_szCustomerName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CardNumber")] =  m_szCardNumber;
	m_jData[_T("TerminateOption")] =  m_nStatusOption;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("CustomerName")].GetValue(m_szCustomerName);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CardNumber")].GetValue(m_szCardNumber);
	m_jData[_T("TerminateOption")].GetValue(m_nStatusOption);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CCardStorageListView::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM HMS_CARD_SETTING where HCS_SMARTCARD_ID_NUMBER = '%s'"), m_szSothe);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
		if(!rs.IsEOF())
	{
		rs.GetValue(_T("HCS_SMARTCARD_ID_NUMBER"), m_szSothe);
		rs.GetValue(_T("HCS_SMARTCARD_ID_EX"), m_szSotheMorong);
		rs.GetValue(_T("HCS_TYPE"), m_szloaitheKey);
		rs.GetValue(_T("HCS_DEPTID"), m_szKhoaKey);
		rs.GetValue(_T("HCS_ACTIVE"), tmpStr);
		m_bHoatDong = tmpStr==_T("Y")?true:false;		
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CCardStorageListView::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		m_hms_card_settingTbl.SetValue(_T("HCS_CREATEDBY"), pMF->GetCurrentUser());
		m_hms_card_settingTbl.SetValue(_T("HCS_CREATEDDATE"), pMF->GetSysDateTime());		
		rs.ExecSQL(szSQL);		
	}
	m_hms_card_settingTbl.SetValue(_T("HCS_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_card_settingTbl.SetValue(_T("HCS_UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_card_settingTbl.SetValue(_T("HCS_SMARTCARD_ID_NUMBER"), m_szSothe);
	m_hms_card_settingTbl.SetValue(_T("HCS_SMARTCARD_ID_EX"), m_szSotheMorong);
	m_hms_card_settingTbl.SetValue(_T("HCS_TYPE"), m_szloaitheKey);
	m_hms_card_settingTbl.SetValue(_T("HCS_DEPTID"), m_szKhoaKey);	
	m_hms_card_settingTbl.SetValue(_T("HCS_ACTIVE"), m_bHoatDong?_T("Y"):_T("N"));	

}
void CCardStorageListView::SetDefaultValues(){

	m_szCustomerName.Empty();
	m_szPhone.Empty();
	m_szDepartmentKey.Empty();
	m_szCardTypeKey.Empty();
	m_szCardNumber.Empty();
	m_nID = 0;
	//m_nStatusOption=0;
	m_nPendingOption=1;
	m_nTerminateOption=1;
	m_nAllOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szloaitheKey.Empty();
	m_szKhoaKey.Empty();
	m_szSothe.Empty();
	m_szSotheMorong.Empty();
	m_bHoatDong=FALSE;

}
int CCardStorageListView::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 7, 8, -1);
 			SetDefaultValues();
			m_wndSothe.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 7, 8, -1);
			m_wndSothe.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 4, 5, 6, -1);
			m_wndCardNumber.SetFocus();
			m_wndFromDate.EnableWindow(FALSE);
			m_wndToDate.EnableWindow(FALSE);
			m_wndSothe.EnableWindow(FALSE);
			m_wndSotheMorong.EnableWindow(FALSE);
			m_wndloaithe.EnableWindow(FALSE);
			m_wndKhoa.EnableWindow(FALSE);
 			break;
 		case VM_NONE: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 4, -1);
 			SetDefaultValues();
			m_wndAdd.SetFocus();
			m_wndFromDate.EnableWindow(FALSE);
			m_wndToDate.EnableWindow(FALSE);
			m_wndSothe.EnableWindow(FALSE);
			m_wndSotheMorong.EnableWindow(FALSE);
			m_wndloaithe.EnableWindow(FALSE);
			m_wndKhoa.EnableWindow(FALSE);
 			break;
 		};
		//EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 		UpdateData(FALSE);

 		return nOldMode;
}
/*void CCardStorageListView::OnCustomerNameChange(){
	
} */
/*void CCardStorageListView::OnCustomerNameSetfocus(){
	
} */
/*void CCardStorageListView::OnCustomerNameKillfocus(){
	
} */

void CCardStorageListView::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("60.1")))
	{
		ShowMessageBox(_T("Vui lòng liên hệ admin cấp quyền 60.1"));
		return;
	}
	else	
	OnAddCardStorageListView();
} 
void CCardStorageListView::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("60.1")))
	{
		ShowMessageBox(_T("Vui lòng liên hệ admin cấp quyền 60.1"));
		return;
	}
	else	
	OnEditCardStorageListView();
	
} 
void CCardStorageListView::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("60.1")))
	{
		ShowMessageBox(_T("Vui lòng liên hệ admin cấp quyền 60.1"));
		return;
	}
	else	
	OnDeleteCardStorageListView();
} 
void CCardStorageListView::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCardStorageListView();
} 
void CCardStorageListView::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCardStorageListView();
}
int CCardStorageListView::OnCustomerNameCheckValue(){
	OnListLoadData();
	return 0;
}

/*void CCardStorageListView::OnPhoneChange(){
	
} */
/*void CCardStorageListView::OnPhoneSetfocus(){
	
} */
/*void CCardStorageListView::OnPhoneKillfocus(){
	
} */
int CCardStorageListView::OnPhoneCheckValue(){
	OnListLoadData();
	return 0;
} 
void CCardStorageListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCardStorageListView::OnDepartmentSelendok(){
	 
}
/*void CCardStorageListView::OnDepartmentSetfocus(){
	
}*/
/*void CCardStorageListView::OnDepartmentKillfocus(){
	
}*/
long CCardStorageListView::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_isactive='Y'"));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
	return 0;
}
/*void CCardStorageListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCardStorageListView::OnCardNumberChange(){
	
} */
/*void CCardStorageListView::OnCardNumberSetfocus(){
	
} */
/*void CCardStorageListView::OnCardNumberKillfocus(){
	
} */
int CCardStorageListView::OnCardNumberCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	return 0;
}
long CCardStorageListView::OnCardTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndCardType.IsSearchKey() && !m_szCardTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szCardTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_cardtype_setting' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;


	return 0;
}
/*void CCardStorageListView::OnUIDChange(){
	
} */
/*void CCardStorageListView::OnUIDSetfocus(){
	
} */
/*void CCardStorageListView::UIDKillfocus(){
	
} */
int CCardStorageListView::OnUIDCheckValue(){
	OnListLoadData();
	return 0;
}

void CCardStorageListView::OnAllOptionSelect()
{
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	m_nAllOption = 0;
	m_nPendingOption = 1;
	m_nTerminateOption = 1;	
	OnListLoadData();
	UpdateData(FALSE);
}

void CCardStorageListView::OnPendingOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	m_nPendingOption = 0;
	m_nTerminateOption = 1;
	m_nAllOption = 1;
	OnListLoadData();
	UpdateData(FALSE);
}

void CCardStorageListView::OnRegistedOptionSelect()
{
	
}
void CCardStorageListView::OnTerminateOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDate.EnableWindow(FALSE);
	m_nPendingOption = 1;
	m_nTerminateOption = 0;
	m_nAllOption = 1;
	OnListLoadData();
	UpdateData(FALSE);

}
/*void CCardStorageListView::OnFromDateChange(){
	
} */
/*void CCardStorageListView::OnFromDateSetfocus(){
	
} */
/*void CCardStorageListView::OnFromDateKillfocus(){
	
} */
int CCardStorageListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CCardStorageListView::OnToDateChange(){
	
} */
/*void CCardStorageListView::OnToDateSetfocus(){
	
} */
/*void CCardStorageListView::OnToDateKillfocus(){
	
} */
int CCardStorageListView::OnToDateCheckValue(){
	return 0;
} 
void CCardStorageListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CCardStorageListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
} 


void CCardStorageListView::OnRegisterSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CCustomerVisitRegisterDialog dlg(this, VM_ADD);	
	
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		OnListPrintItem(dlg.m_nUID);
	}
} 
void CCardStorageListView::OnTerminateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Trạng thái đã kết thúc"));
		return;
	}
	CCustomerVisitRegisterDialog dlg(this, VM_TERM);
	dlg.m_nUID = m_nUID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 

void CCardStorageListView::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	m_szSothe = m_wndList.GetItemText(nSel, 1);
	long m_nOrderid = str2long(m_wndList.GetItemText(nSel, 9));
	long m_ndocno = str2long(m_wndList.GetItemText(nSel, 8));

	if (m_nOrderid <= 0)
	{
		ShowMessageBox(_T("Thẻ chưa được sử dụng lần nào!"));
		return;
	}

	CCustomerVisitRegisterDialogEX dlg(this, VM_VIEW);
	dlg.m_szCardNo = m_szSothe;
	dlg.m_nDocno = m_ndocno;
	dlg.m_nOrderid = m_nOrderid;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();	
	}

} 
void CCardStorageListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szSothe = m_wndList.GetItemText(nNewItem, 1);
	GetDataToScreen();	
} 


int CCardStorageListView::OnListRegisterItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnRegisterSelect();
	 return 0;
} 

int CCardStorageListView::OnListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không cho phép sửa khi trạng thái đã kết thúc"));
		return 0;
	}
	CCustomerVisitRegisterDialog dlg(this, VM_EDIT);
	dlg.m_nUID = m_nUID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}

	 return 0;
} 

int CCardStorageListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	CString szStatus = GetOrderStatus();
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã được kết thúc"));
		return 0;
	}

	int nMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy đề mục đã chọn không?"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("HMS_CUSTOMER_VISIT_DELETE(%ld, '%s') "), m_nUID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể xóa được đề mục"));
	}
	else
	{
		OnListLoadData();
	}
	 return 0;
} 

int CCardStorageListView::OnListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnTerminateSelect();
	 return 0;
} 

int CCardStorageListView::OnListRevokeItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long m_nUID = str2long(m_wndList.GetItemText(nSel, 0));
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
	szSQL.Format(_T("UPDATE hms_customer_visit SET hcv_status='R' WHERE hcv_uid=%ld "), m_nUID);
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
int CCardStorageListView::OnListPrintItem(long nId)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Phan in can lam lai
	long m_nUID = 0;
	if (nId > 0)
	{
		m_nUID = nId;
	}
	else
	{
		int nSel = m_wndList.GetCurSel();
		if(nSel < 0)
			return -1;
		m_nUID = str2long(m_wndList.GetItemText(nSel, 1));
	}
	 

	CReport rpt;
	CString szSQL, tmpStr, szSysDate = pMF->GetSysDateTime();
	CRecord rs(&pMF->m_db);
	CReportSection *rptDetail = NULL;
	tmpStr.Format(_T("Reports\\HMS\\PHIEUTHAM_DANHCHOKHACH.RPT"));
	if(!rpt.Init(tmpStr))
		return 0;	
	
	rptDetail = rpt.AddDetail();
	
	rptDetail->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);

	szSQL.Format(_T(" SELECT") \
				_T("     hcv_uid,") \
				_T("     hcv_name as VISITTOR,") \
				_T("     hcv_phone as MobileNumBer,") \
				_T("     hcv_reason,") \
				_T("     hcv_guardian as Guadian,") \
				_T("     hcv_card_type,") \
				_T("     ss_desc as CardType,") \
				_T("     hcv_card_no as CardNo, ") \
				_T("     HCV_CARD_NO_EX as CardNoEx, ") \
				_T("     hcv_amount amount,") \
				_T("     hcv_time_in,") \
				_T("     hcv_time_out,") \
				_T("     HCV_CREATEDBY,") \
				_T("     hcv_termby,") \
				_T("     hcv_termdate,") \
				_T("     hcv_status,") \
				_T("     hcv_deptid as Department,") \
				_T("     hcv_note as Note") \
				_T(" FROM") \
				_T("     hms_customer_visit LEFT JOIN sys_sel ON (ss_code=hcv_card_type and ss_id='HCV_CARDTYPE') ") \
				_T(" WHERE") \
				_T("     hcv_uid = '%ld'") \
				_T(" ORDER BY") \
				_T("     hcv_name"), m_nUID);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	

	rs.GetValue(_T("CardNo"), tmpStr);
	rptDetail->SetValue(_T("CardNo"), tmpStr);

	rs.GetValue(_T("CardNoEx"), tmpStr);
	rptDetail->SetValue(_T("CardNoEx"), tmpStr);

	rs.GetValue(_T("VISITTOR"), tmpStr);
	rptDetail->SetValue(_T("VISITTOR"), tmpStr);

	rs.GetValue(_T("Department"), tmpStr);
	rptDetail->SetValue(_T("Department"), tmpStr);

	rs.GetValue(_T("MobileNumBer"), tmpStr);
	rptDetail->SetValue(_T("MobileNumBer"), tmpStr);

	rs.GetValue(_T("Guadian"), tmpStr);
	rptDetail->SetValue(_T("Guadian"), tmpStr);

	rs.GetValue(_T("CardType"), tmpStr);
	rptDetail->SetValue(_T("CardType"), tmpStr);
	
	rs.GetValue(_T("amount"), tmpStr);
	rptDetail->SetValue(_T("amount"), tmpStr);

	rs.GetValue(_T("Note"), tmpStr);
	rptDetail->SetValue(_T("Note"), tmpStr);

	rs.GetValue(_T("Department"), tmpStr);
	rptDetail->SetValue(_T("Department"), tmpStr);	


	CString dte,tm;
	
	tm = szSysDate.Mid(11);
	szSysDate = szSysDate.Left(10);
	tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), tm, szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rptDetail->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	return 0;
}

long CCardStorageListView::OnListLoadData()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere1;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.Empty();

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and tbl2.khoa='%s' "), m_szDepartmentKey);
		szWhere1.AppendFormat(_T(" and HCS_DEPTID='%s' "), m_szDepartmentKey);
	}

	if(!m_szCardTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and tbl2.phanloai = '%s' "), m_szCardTypeKey);
		szWhere1.AppendFormat(_T(" and ss_desc = '%s' "), m_szCardTypeKey);
	}

	if(!m_szCardNumber.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and tbl2.sothe = '%s' "), m_szCardNumber);
		szWhere1.AppendFormat(_T(" and HCS_SMARTCARD_ID_NUMBER = '%s' "), m_szCardNumber);
	}
	if(!m_szCustomerName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(tbl2.themorong) like(chr(37)||lower('%s')||chr(37)) "), m_szCustomerName);
		szWhere1.AppendFormat(_T(" and lower(HCS_SMARTCARD_ID_EX) like(chr(37)||lower('%s')||chr(37)) "), m_szCustomerName);
	}
	
	if(m_nPendingOption == 0 )
	{
		szWhere.AppendFormat(_T(" and tbl2.hoatdong = 'Y' "));
		szWhere1.AppendFormat(_T(" and HCS_ACTIVE = 'Y' "));
		//szWhere.AppendFormat(_T(" and trunc(hcv_time_in) between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}

	else if (m_nTerminateOption == 0 )
	{
		szWhere.AppendFormat(_T(" and tbl2.hoatdong <> 'Y' "));
		szWhere1.AppendFormat(_T(" and HCS_ACTIVE <> 'Y' "));
		//szWhere.AppendFormat(_T(" and trunc(hcv_time_out) between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" and 1=1 "));
		szWhere1.AppendFormat(_T(" and 1=1 "));	
	}
	/*if(m_nID > 0 )
	{
		szWhere.Format(_T(" and hcv_uid=%ld "), m_nID);
	}

	if(!m_szPhone.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hcv_phone = '%s' "), m_szPhone);
	}*/

	/*szSQL.Format(_T(" SELECT") \
				_T("     HCS_SMARTCARD_ID_NUMBER as sothe,") \
				_T("     HCS_SMARTCARD_ID_EX as themorong,") \
				_T("     ss_desc as phanloai,") \
				_T("     HCS_DEPTID as khoa,") \
				_T("     HCS_ACTIVE hoatdong,") \
				_T("     HCS_DESCRIPTION as ghichu ") \
				_T(" FROM") \
				_T("     HMS_CARD_SETTING left join sys_sel ON (HCS_TYPE=ss_code and ss_id='hms_cardtype_setting')") \
				_T(" WHERE") \
				_T("     1=1 %s ") \
				_T(" ORDER BY") \
				_T("     HCS_DEPTID, HCS_TYPE"), szWhere);*/

	szSQL.Format(_T(" WITH tbl1 AS") \
				_T("   (SELECT hfe_docno,") \
				_T("     hfe_fee_extra_id,") \
				_T("     hfe_cardnumberex,") \
				_T("     hfe_status") \
				_T("   FROM") \
				_T("     ( SELECT DISTINCT FIRST_VALUE( hfe_docno ) OVER(PARTITION BY hfe_cardnumberex ORDER BY hfe_fee_extra_id DESC ) AS hfe_docno,") \
				_T("       FIRST_VALUE( hfe_fee_extra_id ) OVER(PARTITION BY hfe_cardnumberex ORDER BY hfe_fee_extra_id DESC )          AS hfe_fee_extra_id,") \
				_T("       hfe_cardnumberex,") \
				_T("       FIRST_VALUE( hfe_status ) OVER(PARTITION BY hfe_cardnumberex ORDER BY hfe_fee_extra_id DESC ) AS hfe_status") \
				_T("     FROM hms_fee_extra") \
				_T("     ORDER BY hfe_fee_extra_id DESC") \
				_T("     )") \
				_T("   WHERE 1 = 1") \
				_T("   ),") \
				_T("   tbl2 AS") \
				_T("   (SELECT hcs_smartcard_id_number AS sothe,") \
				_T("     hcs_smartcard_id_ex           AS themorong,") \
				_T("     ss_desc                       AS phanloai,") \
				_T("     hcs_deptid                    AS khoa,") \
				_T("     hcs_active hoatdong,") \
				_T("     hcs_description AS ghichu") \
				_T("   FROM hms_card_setting") \
				_T("   LEFT JOIN sys_sel") \
				_T("   ON ( hcs_type = ss_code") \
				_T("   AND ss_id     = 'hms_cardtype_setting' )") \
				_T("   )") \
				_T(" SELECT tbl2.sothe       AS sothe,") \
				_T("   tbl2.themorong        AS themorong,") \
				_T("   tbl2.phanloai         AS phanloai,") \
				_T("   tbl2.khoa             AS khoa,") \
				_T("   tbl2.hoatdong         AS hoatdong,") \
				_T("   tbl2.ghichu           AS ghichu,") \
				_T("   tbl1.hfe_status       AS tthienthoi,") \
				_T("   tbl1.hfe_docno        AS sohoso,") \
				_T("   tbl1.hfe_fee_extra_id AS goidichvu") \
				_T(" FROM tbl1,") \
				_T("   tbl2") \
				_T(" WHERE tbl1.hfe_cardnumberex = tbl2.themorong %s") \
				_T(" UNION ALL") \
				_T(" SELECT HCS_SMARTCARD_ID_NUMBER AS sothe,") \
				_T("   HCS_SMARTCARD_ID_EX          AS themorong,") \
				_T("   ss_desc                      AS phanloai,") \
				_T("   HCS_DEPTID                   AS khoa,") \
				_T("   HCS_ACTIVE hoatdong,") \
				_T("   HCS_DESCRIPTION AS ghichu,") \
				_T("   NULL as tthienthoi,") \
				_T("   0 as sohoso,  ") \
				_T("   0 as goidichvu") \
				_T("   FROM HMS_CARD_SETTING") \
				_T("   LEFT join hms_fee_extra ON (HCS_SMARTCARD_ID_EX=HFE_CARDNUMBEREX)") \
				_T("   LEFT JOIN sys_sel") \
				_T("   ON (HCS_TYPE   =ss_code") \
				_T("   AND ss_id      ='hms_cardtype_setting')") \
				_T("   where 1=1") \
				_T("   and NVL(hfe_docno, 0)=0 %s"), szWhere, szWhere1);

	_tprintf(_T("\r\n%s"), szSQL);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=0;
	CString szStatus, szStatusDesc, szHoatdong, szTThienthoi, szTThienthoiDesc;
	long nGoidichvu;
	CString tmpStr;
	bool bChangeColor = false;
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("hoatdong"), szStatus);
		if(szStatus == _T("Y"))
			szStatusDesc = _T("Đã Active");
		if(szStatus == _T("N"))
			szStatusDesc = _T("Chưa Active");
		rs.GetValue(_T("tthienthoi"), szTThienthoi);
		//_msg(_T("%s"), szTThienthoi);

		if (szTThienthoi == _T("I"))
			szTThienthoiDesc = _T("Đang sử dụng");
		
		else if (szTThienthoi == _T("T"))
			szTThienthoiDesc = _T("Kết thúc, chưa trả thẻ");

		else if (szTThienthoi == _T("M"))
			szTThienthoiDesc = _T("Thẻ bị mất");

		else if (szTThienthoi == _T("R"))
			szTThienthoiDesc = _T("Đã trả thẻ");
		else 
			szTThienthoiDesc = _T("Chưa sử dụng");		
		tmpStr.Format(_T("%d"), ++nIndex);
		
		int nItem = m_wndList.AddItems
			(
			tmpStr,
			rs.GetValue(_T("sothe")),
			rs.GetValue(_T("themorong")), 
			rs.GetValue(_T("phanloai")),
			rs.GetValue(_T("khoa")),			
			szStatusDesc,
			rs.GetValue(_T("ghichu")),
			//rs.GetValue(_T("tthienthoi")),
			szTThienthoiDesc,
			rs.GetValue(_T("sohoso")),
			rs.GetValue(_T("goidichvu")),
			NULL);
		//_msg(_T("%s"), szTThienthoiDesc);
		rs.GetValue(_T("hoatdong"), szHoatdong);		
		rs.GetValue(_T("goidichvu"), nGoidichvu);

		

		if (szHoatdong == _T("N") && nGoidichvu == 0)
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(255, 255, 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

		m_wndList.SetSubItemBkColor(nItem, 2, RGB(255, 255, 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);		
		}
		if (szHoatdong == _T("Y") && szTThienthoi ==_T("I") && nGoidichvu > 0)
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(202, 255, 112), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

		m_wndList.SetSubItemBkColor(nItem, 2, RGB(202, 255, 112), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);	
		}

		if (szHoatdong == _T("Y") && szTThienthoi ==_T("T"))
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(255, 255, 0), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

		m_wndList.SetSubItemBkColor(nItem, 2, RGB(255, 255, 0), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);	
		}

		if ((szHoatdong == _T("Y") && nGoidichvu == 0) || (szTThienthoi == _T("R")))
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(175, 238, 238), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);	

		m_wndList.SetSubItemBkColor(nItem, 2, RGB(175, 238, 238), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);		
		}

		if (szTThienthoi == _T("M"))
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(232, 232, 232), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);	

			m_wndList.SetSubItemBkColor(nItem, 2, RGB(232, 232, 232), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);		
		}
		
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
int CCardStorageListView::OnAddCardStorageListView()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
	//_msg(_T("Hi"));
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	EnableControls(FALSE);
	m_wndSothe.EnableWindow(TRUE);
	m_wndSotheMorong.EnableWindow(TRUE);
	m_wndloaithe.EnableWindow(TRUE);
	m_wndKhoa.EnableWindow(TRUE);
	m_wndSothe.SetFocus();

	return 0;
}
int CCardStorageListView::OnEditCardStorageListView()
{
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;

		
	m_szSothe = m_wndList.GetItemText(nSel, 1);
    CString szTrangThaiHienThoi = m_wndList.GetItemText(nSel, 7);	
	if (szTrangThaiHienThoi == _T("Thẻ bị mất") && pMF->m_UserInfo.su_groupid != _T("A"))
	{
		ShowMessageBox(_T("Thẻ đã được ban CTXH báo mất, không được phép thực hiện tác vụ!"));
		return -1;
	}
 	
 	SetMode(VM_EDIT);
	EnableControls(FALSE);
	m_wndSothe.EnableWindow(FALSE);
	m_wndSotheMorong.EnableWindow(TRUE);
	m_wndloaithe.EnableWindow(TRUE);
	m_wndKhoa.EnableWindow(TRUE);
	m_wndSothe.SetFocus();
	return 0;  
}
int CCardStorageListView::OnDeleteCardStorageListView()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szDesc, CardNo; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_szSothe = m_wndList.GetItemText(nSel, 1);
	szSQL.Format(_T("select count(*) from HMS_FEE_EXTRA where HFE_CARDNUMBER = '%s' "), m_szSothe);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Thẻ đã được sử dụng, không được phép xóa, chỉ có thể bỏ hoạt động"));
		return -1;

	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("delete from HMS_CARD_SETTING where HCS_SMARTCARD_ID_NUMBER='%s' "), m_szSothe ); 
 	int ret = pMF->ExecSQL(szSQL);
	CardNo = m_szSothe;
 	if(ret >= 0)
	{ 
 		SetMode(VM_NONE); 
 		OnCancelCardStorageListView();
		m_wndList.DeleteItem(nSel);

		szDesc.Format(_T("User [%s] xóa số thẻ [%s] "), pMF->GetCurrentUser(), CardNo);
		//_msg(_T("%s"), CardNo);
		//_msg(_T("%s"), szDesc);
		pMF->SystemLog(_T("Xóa thiết lập thẻ"),szDesc);
 	}
	return 0;
}
int CCardStorageListView::OnSaveCardStorageListView()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1;

 	if(!IsValidateData()) 
 		return -1;
	

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_hms_card_settingTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE HCS_SMARTCARD_ID_NUMBER = '%s' "), m_szSothe); 
 		szSQL = m_hms_card_settingTbl.GetUpdateSQL(_T("HCS_CREATEDBY, HCS_CREATEDDATE")); 
 		szSQL += szWhere; 
 	} 

 	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
 	if(ret > 0) 
 	{ 
		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
		OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCardStorageListView::OnCancelCardStorageListView(){
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
int CCardStorageListView::OnCardStorageListViewListLoadData(){
	return 0;
}


BOOL CCardStorageListView::PreTranslateMessage(MSG *pMsg)
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

		if(pMsg->wParam == VK_F4)
		{
			OnListPrintItem();
			return TRUE;
		}

	}
	return CGuiView::PreTranslateMessage(pMsg);
}


CString CCardStorageListView::GetOrderStatus()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStatus;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hcv_status FROM hms_customer_visit WHERE hcv_uid=%ld"),m_nUID);

	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcv_status"), szStatus);

	m_szStatus = szStatus;
	return m_szStatus;
}

void CCardStorageListView::OnResizeLayout()
{
	//AddLayoutControl(&m_wndList, WS_RESIZEX, 0, 0, 100, 0);
	AddResize(&m_wndSearchInformation, 100, 100);
	AddResize(&m_wndList, 100, 100);

	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
	AddBottom(&m_wndSave);
	AddBottom(&m_wndCancel);

}

int CCardStorageListView::OnListRollbackItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	long m_nUID = str2long(m_wndList.GetItemText(nSel, 0));
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
	szSQL.Format(_T("HMS_CUSTOMER_VISIT_ROLLBACK('%s',%ld) "), pMF->GetCurrentUser(), m_nUID);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể khôi phục được đề mục"));
	}
	else
	{
		OnListLoadData();
	}
	 return 0;
}
void CCardStorageListView::OnloaitheSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCardStorageListView::OnloaitheSelendok(){
	 
}
/*void CCardStorageListView::OnloaitheSetfocus(){
	
}*/
/*void CCardStorageListView::OnloaitheKillfocus(){
	
}*/
long CCardStorageListView::OnloaitheLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndloaithe.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndloaithe.IsSearchKey() && !m_szloaitheKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szloaitheKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_cardtype_setting' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndloaithe.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;


	return 0;
}
/*void CCardStorageListView::OnloaitheAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCardStorageListView::OnKhoaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCardStorageListView::OnKhoaSelendok(){
	 
}
/*void CCardStorageListView::OnKhoaSetfocus(){
	
}*/
/*void CCardStorageListView::OnKhoaKillfocus(){
	
}*/
long CCardStorageListView::OnKhoaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_isactive='Y'"));
	return pMF->LoadDepartment(&m_wndKhoa, m_szKhoaKey, szFilter);
	return 0;
}
/*void CCardStorageListView::OnKhoaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCardStorageListView::OnSotheChange(){
	
} */
/*void CCardStorageListView::OnSotheSetfocus(){
	
} */
/*void CCardStorageListView::OnSotheKillfocus(){
	
} */
int CCardStorageListView::OnSotheCheckValue()
{
	UpdateData(true);
	if(m_szSothe.IsEmpty())
	{
		return -1;
	}
	else
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		if(GetMode() == VM_ADD)
			szSQL.Format(_T("SELECT count(*) FROM HMS_CARD_SETTING WHERE lower(HCS_SMARTCARD_ID_NUMBER)=lower('%s') "), m_szSothe);
		else
			szSQL.Format(_T("SELECT count(*) FROM HMS_CARD_SETTING WHERE lower(HCS_SMARTCARD_ID_NUMBER)=lower('%s') AND lower(HCS_SMARTCARD_ID_NUMBER) <> lower('%s') "), m_szSothe, m_szSothe_Old);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndSothe.SetToolTipMessage(_T("Đã tồn tại thẻ này trong dữ liệu thiết lập của bệnh viện"));
			return -1;
		}
	}
	return 0;
} 
/*void CCardStorageListView::OnSotheMorongChange(){
	
} */
/*void CCardStorageListView::OnSotheMorongSetfocus(){
	
} */
/*void CCardStorageListView::OnSotheMorongKillfocus(){
	
} */
int CCardStorageListView::OnSotheMorongCheckValue()
{
	UpdateData(true);
	if(m_szSotheMorong.IsEmpty())
	{
		return -1;
	}
	else
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		if(GetMode() == VM_ADD)
			szSQL.Format(_T("SELECT count(*) FROM HMS_CARD_SETTING WHERE lower(HCS_SMARTCARD_ID_EX)=lower('%s') "), m_szSotheMorong);
		else
			szSQL.Format(_T("SELECT count(*) FROM HMS_CARD_SETTING WHERE lower(HCS_SMARTCARD_ID_EX)=lower('%s') AND lower(HCS_SMARTCARD_ID_EX) <> lower('%s') "), m_szSotheMorong, m_szSotheMorong_Old);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndSotheMorong.SetToolTipMessage(_T("Đã tồn tại thẻ này trong dữ liệu thiết lập của bệnh viện"));
			return -1;
		}
	}
	return 0;
} 
	void CCardStorageListView::OnHoatDongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}