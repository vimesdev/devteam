#include "WeelchairmanagementListView.h"
#include "MainFrm.h"
#include "HMSExtraInfoDialog.h"
#include "CustomerVisitRegisterDialog.h"
#include "WeelChairRegisterDialog.h"

/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CCardTypeListView *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWeelchairmanagementListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnWeelChairNoCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnWeelChairNoCheckValue();
}
static long _OnWeelChairTypeLoadDataFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnWeelChairTypeLoadData();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnDocumentNoCheckValue();
} 

/*static void _OnUIDChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnUIDChange();
} */
/*static void _OnUIDSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnUIDSetfocus();} */ 
/*static void _OnUIDKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnUIDKillfocus();
} */
static int _OnUIDCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnUIDCheckValue();
} 

static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CWeelchairmanagementListView*)pWnd)->OnPendingOptionSelect();
}

static void _OnRegistedOptionSelectFnc(CWnd *pWnd){
	  ((CWeelchairmanagementListView*)pWnd)->OnRegistedOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CWeelchairmanagementListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CWeelchairmanagementListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CWeelchairmanagementListView *pVw = (CWeelchairmanagementListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CWeelchairmanagementListView *pVw = (CWeelchairmanagementListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CWeelchairmanagementListView *pVw = (CWeelchairmanagementListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CWeelchairmanagementListView *pVw = (CWeelchairmanagementListView *)pWnd;
	pVw->OnTerminateSelect();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CWeelchairmanagementListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CWeelchairmanagementListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CWeelchairmanagementListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListDeleteItem();
} 

static int _OnListRegisterItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListRegisterItem();
} 

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListEditItem();
} 

static int _OnListTerminateItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListTerminateItem();
} 
static int _OnListPrintItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListPrintItem();
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListRollbackItem();
}

static int _OnListRevokeItemFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnListRevokeItem();
} 



static int _OnAddCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnAddCustomerVisitListView();
} 
static int _OnEditCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnEditCustomerVisitListView();
} 
static int _OnDeleteCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnDeleteCustomerVisitListView();
} 
static int _OnSaveCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnSaveCustomerVisitListView();
} 
static int _OnCancelCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CWeelchairmanagementListView*)pWnd)->OnCancelCustomerVisitListView();
} 
CWeelchairmanagementListView::CWeelchairmanagementListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CWeelchairmanagementListView::~CWeelchairmanagementListView()
{
}
void CWeelchairmanagementListView::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 120);
	
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 355, 55);

	m_wndWeelChairTypeLabel.Create(this, _T("Loại xe"), 360, 30, 445, 55);	
	m_wndWeelChairType.Create(this,450, 30, 541, 55);
	
	m_wndWeelChairNoLabel.Create(this, _T("Số xe"), 546, 30, 631, 55);
	m_wndWeelChairNo.Create(this,636, 30, 806, 55); 
	
	m_wndCustomerNameLabel.Create(this, _T("Tên khách"), 10, 60, 110, 85);
	m_wndCustomerName.Create(this,115, 60, 355, 85); 
	m_wndUIDLabel.Create(this, _T("Số phiếu"), 360, 60, 445, 85);
	m_wndUID.Create(this,450, 60, 541, 85); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 546, 60, 631, 85);
	m_wndPhone.Create(this,636, 60, 806, 85); 
	
	m_wndStatus.Create(this, _T("Status"), 9, 90, 110, 115);
	m_wndPendingOption.Create(this, _T("Được cấp xe"), 115, 90, 225, 115);
	m_wndTerminateOption.Create(this, _T("Đã trả xe"), 230, 90, 345, 115);
	m_wndFromDateLabel.Create(this, _T("From Date"), 360, 90, 445, 115);
	m_wndFromDate.Create(this,450, 90, 541, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 546, 90, 631, 115);
	m_wndToDate.Create(this,636, 90, 722, 115); 

	m_wndSearch.Create(this, _T("Search"), 815, 6, 960, 31);
	m_wndClear.Create(this, _T("Clear"), 815, 36, 960, 61);
	m_wndRegister.Create(this, _T("Cấp xe"), 815, 65, 960, 90);
	m_wndTerminate.Create(this, _T("Trả xe"), 815, 94, 960, 119);

	m_wndList.Create(this,5, 150, 955, 650); 
	

}
void CWeelchairmanagementListView::OnInitializeComponents(){
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

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);


	m_wndWeelChairType.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 70);
	m_wndWeelChairType.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);//stt
	m_wndList.InsertColumn(1, _T("Số phiếu"), CFMT_NUMBER, 90); //extra_id
	m_wndList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Phòng khám"), CFMT_TEXT, 254);
	m_wndList.InsertColumn(4, _T("Tên khách"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(5, _T("Điện thoại"), CFMT_TEXT, 100);

	m_wndList.InsertColumn(6, _T("Số xe"), CFMT_TEXT, 100);
	
	m_wndList.InsertColumn(7, _T("Đặt cọc"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Ghi chú"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Thời gian vào"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(10, _T("Thời gian ra"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(11, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(12, _T("Người cấp"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(13, _T("Người trả"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(14, _T("Người bảo lãnh"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(15, _T("Diễn giải"), CFMT_TEXT, 200);
	
}
void CWeelchairmanagementListView::OnSetWindowEvents(){
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
	m_wndWeelChairType.SetEvent(WE_LOADDATA, _OnWeelChairTypeLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndWeelChairNo.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndWeelChairNo.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndWeelChairNo.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndWeelChairNo.SetEvent(WE_CHECKVALUE, _OnWeelChairNoCheckValueFnc);

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
	
	m_wndList.AddEvent(1, _T("Cấp phát xe\tF2"), _OnListRegisterItemFnc,  0, 0, VK_F2);		
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Sửa thông tin"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Xóa thông tin xe"), _OnListDeleteItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Trả xe\tF5"), _OnListTerminateItemFnc,0, 0, VK_F5);

	if (pMF->CheckPermission(_T("03")))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(5, _T("In phiếu\tF4"), _OnListPrintItemFnc,0, 0, VK_F4);
	}
	
	

    if (pMF->CheckPermission(_T("05")))
	{
		//m_wndList.AddEvent(0, _T("-"), NULL);
		//m_wndList.AddEvent(7, _T("Khôi phục lại"), _OnListRollbackItemFnc);
	}
	
	m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	m_szToDate = pMF->GetSysDateTime();
	
	SetMode(VM_VIEW);

}
void CWeelchairmanagementListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndWeelChairNo.GetDlgCtrlID(), m_szWeelChairNo);
	DDX_Text(pDX, m_wndUID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndWeelChairType.GetDlgCtrlID(), m_szWeelChairTypeKey);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nStatusOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CWeelchairmanagementListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CustomerName")] =  m_szCustomerName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CardNumber")] =  m_szWeelChairNo;
	m_jData[_T("TerminateOption")] =  m_nStatusOption;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("CustomerName")].GetValue(m_szCustomerName);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CardNumber")].GetValue(m_szWeelChairNo);
	m_jData[_T("TerminateOption")].GetValue(m_nStatusOption);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CWeelchairmanagementListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CWeelchairmanagementListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CWeelchairmanagementListView::SetDefaultValues(){

	m_szCustomerName.Empty();
	m_szPhone.Empty();
	m_szDepartmentKey.Empty();
	m_szWeelChairTypeKey.Empty();
	m_szWeelChairNo.Empty();
	m_nID = 0;
	m_nStatusOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CWeelchairmanagementListView::SetMode(int nMode)
{
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
			m_wndCustomerName.SetFocus();
			m_wndFromDate.EnableWindow(FALSE);
			m_wndToDate.EnableWindow(FALSE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
		m_wndWeelChairType.EnableWindow(false);
 		UpdateData(FALSE);

 		return nOldMode;
}
/*void CWeelchairmanagementListView::OnCustomerNameChange(){
	
} */
/*void CWeelchairmanagementListView::OnCustomerNameSetfocus(){
	
} */
/*void CWeelchairmanagementListView::OnCustomerNameKillfocus(){
	
} */
int CWeelchairmanagementListView::OnCustomerNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CWeelchairmanagementListView::OnPhoneChange(){
	
} */
/*void CWeelchairmanagementListView::OnPhoneSetfocus(){
	
} */
/*void CWeelchairmanagementListView::OnPhoneKillfocus(){
	
} */
int CWeelchairmanagementListView::OnPhoneCheckValue(){
	OnListLoadData();
	return 0;
} 
void CWeelchairmanagementListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CWeelchairmanagementListView::OnDepartmentSelendok(){
	 
}
/*void CWeelchairmanagementListView::OnDepartmentSetfocus(){
	
}*/
/*void CWeelchairmanagementListView::OnDepartmentKillfocus(){
	
}*/
long CWeelchairmanagementListView::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_isactive='Y'"));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
	return 0;
}
/*void CWeelchairmanagementListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CWeelchairmanagementListView::OnCardNumberChange(){
	
} */
/*void CWeelchairmanagementListView::OnCardNumberSetfocus(){
	
} */
/*void CWeelchairmanagementListView::OnCardNumberKillfocus(){
	
} */
int CWeelchairmanagementListView::OnWeelChairNoCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	return 0;
}
long CWeelchairmanagementListView::OnWeelChairTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndWeelChairType, _T("hwc_CARDTYPE"), m_szWeelChairTypeKey);
	return 0;
}
/*void CWeelchairmanagementListView::OnUIDChange(){
	
} */
/*void CWeelchairmanagementListView::OnUIDSetfocus(){
	
} */
/*void CWeelchairmanagementListView::UIDKillfocus(){
	
} */
int CWeelchairmanagementListView::OnUIDCheckValue(){
	OnListLoadData();
	return 0;
}

void CWeelchairmanagementListView::OnPendingOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);
	OnListLoadData();
}

void CWeelchairmanagementListView::OnRegistedOptionSelect(){
	UpdateData(TRUE);
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);
	OnListLoadData();
}
void CWeelchairmanagementListView::OnTerminateOptionSelect(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.EnableWindow(TRUE);
	m_wndToDate.EnableWindow(TRUE);	
	UpdateData(FALSE);
	OnListLoadData();

}
/*void CWeelchairmanagementListView::OnFromDateChange(){
	
} */
/*void CWeelchairmanagementListView::OnFromDateSetfocus(){
	
} */
/*void CWeelchairmanagementListView::OnFromDateKillfocus(){
	
} */
int CWeelchairmanagementListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CWeelchairmanagementListView::OnToDateChange(){
	
} */
/*void CWeelchairmanagementListView::OnToDateSetfocus(){
	
} */
/*void CWeelchairmanagementListView::OnToDateKillfocus(){
	
} */
int CWeelchairmanagementListView::OnToDateCheckValue(){
	return 0;
} 
void CWeelchairmanagementListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CWeelchairmanagementListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
} 


void CWeelchairmanagementListView::OnRegisterSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CWeelChairRegisterDialog dlg(this, VM_ADD);	
	
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		OnListPrintItem(dlg.m_nUID);
	}
} 
void CWeelchairmanagementListView::OnTerminateSelect(){
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
	CWeelChairRegisterDialog dlg(this, VM_TERM);
	dlg.m_nUID = m_nUID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 

void CWeelchairmanagementListView::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CWeelChairRegisterDialog dlg(this, VM_VIEW);
	dlg.m_nUID = m_nUID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		OnListPrintItem();
	}

} 
void CWeelchairmanagementListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nUID = str2long(m_wndList.GetItemText(nNewItem, 1));	
} 


int CWeelchairmanagementListView::OnListRegisterItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnRegisterSelect();
	 return 0;
} 

int CWeelchairmanagementListView::OnListEditItem(){
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
	CWeelChairRegisterDialog dlg(this, VM_EDIT);
	dlg.m_nUID = m_nUID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}

	 return 0;
} 

int CWeelchairmanagementListView::OnListDeleteItem(){
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
	szSQL.Format(_T("HMS_WEELCHAIR_MANAGE_DELETE(%ld, '%s') "), m_nUID, pMF->GetCurrentUser());
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

int CWeelchairmanagementListView::OnListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnTerminateSelect();
	 return 0;
} 

int CWeelchairmanagementListView::OnListRevokeItem(){
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
	szSQL.Format(_T("UPDATE HMS_WEELCHAIR_MANAGE SET hwc_status='R' WHERE hwc_uid=%ld "), m_nUID);
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
int CWeelchairmanagementListView::OnListPrintItem(long nId)
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
	tmpStr.Format(_T("Reports\\HMS\\PHIEUMUONXE_DANHCHOKHACH.RPT"));
	if(!rpt.Init(tmpStr))
		return 0;	
	
	rptDetail = rpt.AddDetail();
	
	rptDetail->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);

	szSQL.Format(_T(" SELECT") \
				_T("     hwc_uid,") \
				_T("     hwc_name as VISITTOR,") \
				_T("     hwc_phone as MobileNumBer,") \
				_T("     hwc_reason,") \
				_T("     hwc_guardian as Guadian,") \
				_T("     HWC_WEELCHAIR_NO,") \
				_T("     hwc_amount amount,") \
				_T("     hwc_time_in,") \
				_T("     hwc_time_out,") \
				_T("     hwc_CREATEDBY,") \
				_T("     hwc_termby,") \
				_T("     hwc_termdate,") \
				_T("     hwc_status,") \
				_T("     hwc_deptid as Department,") \
				_T("     HWC_ROOMNAME,") \
				_T("     hwc_note as Note") \
				_T(" FROM") \
				_T("     HMS_WEELCHAIR_MANAGE ") \
				_T(" WHERE") \
				_T("     hwc_uid = '%ld'") \
				_T(" ORDER BY") \
				_T("     hwc_name"), m_nUID);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	

	rs.GetValue(_T("HWC_WEELCHAIR_NO"), tmpStr);
	rptDetail->SetValue(_T("HWC_WEELCHAIR_NO"), tmpStr);

	rs.GetValue(_T("VISITTOR"), tmpStr);
	rptDetail->SetValue(_T("VISITTOR"), tmpStr);

	rs.GetValue(_T("Department"), tmpStr);
	rptDetail->SetValue(_T("Department"), tmpStr);

	rs.GetValue(_T("HWC_ROOMNAME"), tmpStr);
	rptDetail->SetValue(_T("HWC_ROOMNAME"), tmpStr);

	rs.GetValue(_T("MobileNumBer"), tmpStr);
	rptDetail->SetValue(_T("MobileNumBer"), tmpStr);

	rs.GetValue(_T("Guadian"), tmpStr);
	rptDetail->SetValue(_T("Guadian"), tmpStr);
	
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

long CWeelchairmanagementListView::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;


	szWhere.Empty();

	/*if(!m_szWeelChairTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hwc_card_type = '%s' "), m_szWeelChairTypeKey);
	}*/
	
	if(!m_szWeelChairNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HWC_WEELCHAIR_NO = '%s' "), m_szWeelChairNo);
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hwc_deptid='%s' "), m_szDepartmentKey);
	}	

	if(!m_szCustomerName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hwc_name) like(chr(37)||lower('%s')||chr(37)) "),
			m_szCustomerName);
	}


	
	if(m_nStatusOption == 0)
	{
		szWhere.AppendFormat(_T(" and hwc_status='O' "));
		//szWhere.AppendFormat(_T(" and trunc(hwc_time_in) between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" and hwc_status<>'O' "));
		szWhere.AppendFormat(_T(" and trunc(hwc_time_out) between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	if(m_nID > 0 )
	{
		szWhere.Format(_T(" and hwc_uid=%ld "), m_nID);
	}

	if(!m_szPhone.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hwc_phone = '%s' "), m_szPhone);
	}

	szSQL.Format(_T(" SELECT") \
				_T("     hwc_uid,") \
				_T("     hwc_deptid,") \
				_T("     hwc_roomname,") \
				_T("     hwc_name as hwc_name,") \
				_T("     hwc_phone,") \
				_T("     HWC_WEELCHAIR_NO,") \
				_T("     hwc_amount,") \
				_T("     hwc_reason,") \
				_T("     hwc_guardian,") \
				_T("     hwc_time_in,") \
				_T("     hwc_time_out,") \
				_T("     hwc_CREATEDBY,") \
				_T("     hwc_termby,") \
				_T("     hwc_termdate,") \
				_T("     hwc_status,") \
				_T("     hwc_note") \
				_T(" FROM") \
				_T("     HMS_WEELCHAIR_MANAGE ") \
				_T(" WHERE") \
				_T("     hwc_isactive = 'Y' %s ") \
				_T(" ORDER BY") \
				_T("     hwc_time_in"), szWhere);

	_tprintf(_T("\r\n%s"), szSQL);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=0;
	CString szStatus, szStatusDesc;
	CString tmpStr;
	bool bChangeColor = false;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		if(szStatus == _T("O"))
			szStatusDesc = _T("Đã cấp xe");
		if(szStatus == _T("T"))
			szStatusDesc = _T("Đã trả xe");

		tmpStr.Format(_T("%d"), ++nIndex);
		
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("hwc_uid")),
			rs.GetValue(_T("hwc_deptid")),
			rs.GetValue(_T("hwc_roomname")), 
			rs.GetValue(_T("hwc_name")),
			rs.GetValue(_T("hwc_phone")),
			rs.GetValue(_T("HWC_WEELCHAIR_NO")),			
			rs.GetValue(_T("hwc_amount")),
			rs.GetValue(_T("hwc_note")), 
			rs.GetValue(_T("hwc_time_in")), 
			rs.GetValue(_T("hwc_time_out")), 
			rs.GetValue(_T("hwc_status")),
			rs.GetValue(_T("hwc_CREATEDBY")),
			rs.GetValue(_T("hwc_termby")),
			rs.GetValue(_T("hwc_guardian")), 
			rs.GetValue(_T("hwc_reason")), 			
			NULL);
		
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
int CWeelchairmanagementListView::OnAddCustomerVisitListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CWeelchairmanagementListView::OnEditCustomerVisitListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CWeelchairmanagementListView::OnDeleteCustomerVisitListView(){
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
 		OnCancelCustomerVisitListView();
 	}
	return 0;
}
int CWeelchairmanagementListView::OnSaveCustomerVisitListView(){
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
 		//OnCustomerVisitListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CWeelchairmanagementListView::OnCancelCustomerVisitListView(){
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
int CWeelchairmanagementListView::OnCustomerVisitListViewListLoadData(){
	return 0;
}


BOOL CWeelchairmanagementListView::PreTranslateMessage(MSG *pMsg)
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


CString CWeelchairmanagementListView::GetOrderStatus()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStatus;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hwc_status FROM HMS_WEELCHAIR_MANAGE WHERE hwc_uid=%ld"),m_nUID);

	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hwc_status"), szStatus);

	m_szStatus = szStatus;
	return m_szStatus;
}

void CWeelchairmanagementListView::OnResizeLayout()
{
	//AddLayoutControl(&m_wndList, WS_RESIZEX, 0, 0, 100, 0);
}

int CWeelchairmanagementListView::OnListRollbackItem()
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
	szSQL.Format(_T("HMS_WEELCHAIR_MANAGE_ROLLBACK('%s',%ld) "), pMF->GetCurrentUser(), m_nUID);
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

