#include "CustomerVisitListView.h"
#include "MainFrm.h"
static void _OnSearchSelectFnc(CWnd *pWnd){
	CCustomerVisitListView *pVw = (CCustomerVisitListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCustomerVisitListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCustomerVisitListView* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCardTypeSelendokFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardTypeSelendok();
}
/*static void _OnCardTypeSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardTypeKillfocus();
}*/
/*static void _OnCardTypeKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardTypeKillfocus();
}*/
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnCardTypeAddNewFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardTypeAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnCardNumberCheckValue();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CCustomerVisitListView *pVw = (CCustomerVisitListView *)pWnd;
	pVw->OnClearSelect();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnUIDChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnUIDChange();
} */
/*static void _OnUIDSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnUIDSetfocus();} */ 
/*static void _OnUIDKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnUIDKillfocus();
} */
static int _OnUIDCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnUIDCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnRegisterSelectFnc(CWnd *pWnd){
	CCustomerVisitListView *pVw = (CCustomerVisitListView *)pWnd;
	pVw->OnRegisterSelect();
} 
static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CCustomerVisitListView*)pWnd)->OnPendingOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CCustomerVisitListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CCustomerVisitListView *pVw = (CCustomerVisitListView *)pWnd;
	pVw->OnTerminateSelect();
} 
static int _OnAddCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CCustomerVisitListView*)pWnd)->OnAddCustomerVisitListView();
} 
static int _OnEditCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CCustomerVisitListView*)pWnd)->OnEditCustomerVisitListView();
} 
static int _OnDeleteCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CCustomerVisitListView*)pWnd)->OnDeleteCustomerVisitListView();
} 
static int _OnSaveCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CCustomerVisitListView*)pWnd)->OnSaveCustomerVisitListView();
} 
static int _OnCancelCustomerVisitListViewFnc(CWnd *pWnd){
	 return ((CCustomerVisitListView*)pWnd)->OnCancelCustomerVisitListView();
} 
CCustomerVisitListView::CCustomerVisitListView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CCustomerVisitListView::~CCustomerVisitListView(){
}
void CCustomerVisitListView::OnCreateComponents(){
	m_wndSearch.Create(this, _T("Search"), 815, 6, 960, 31);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 355, 55); 
	m_wndCardTypeLabel.Create(this, _T("CardType"), 360, 30, 445, 55);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 120);
	m_wndCardType.Create(this,450, 30, 541, 55); 
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 546, 30, 631, 55);
	m_wndCardNumber.Create(this,636, 30, 806, 55); 
	m_wndClear.Create(this, _T("Clear"), 815, 36, 960, 61);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 355, 85); 
	m_wndUIDLabel.Create(this, _T("Order#"), 360, 60, 445, 85);
	m_wndUID.Create(this,450, 60, 541, 85); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 546, 60, 631, 85);
	m_wndPhone.Create(this,636, 60, 806, 85); 
	m_wndRegister.Create(this, _T("Register"), 815, 65, 960, 90);
	m_wndStatus.Create(this, _T("Status"), 9, 90, 110, 115);
	m_wndPendingOption.Create(this, _T("Ðang d?i"), 115, 90, 225, 115);
	m_wndTerminateOption.Create(this, _T("Ðã k?t thúc"), 230, 90, 345, 115);
	m_wndFromDateLabel.Create(this, _T("From Date"), 360, 90, 445, 115);
	m_wndFromDate.Create(this,450, 90, 541, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 546, 90, 631, 115);
	m_wndToDate.Create(this,636, 90, 722, 115); 
	m_wndTerminate.Create(this, _T("Terminate"), 815, 94, 960, 119);

}
void CCustomerVisitListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndCardType.SetCheckValue(true);
	m_wndCardType.LimitText(35);
	m_wndCardNumber.SetLimitText(1024);
	m_wndCardNumber.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndUID.SetLimitText(1024);
	m_wndUID.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);




	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CCustomerVisitListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndCardType.SetEvent(WE_SELENDOK, _OnCardTypeSelendokFnc);
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	m_wndCardType.SetEvent(WE_SELCHANGE, _OnCardTypeSelectChangeFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	//m_wndCardType.SetEvent(WE_ADDNEW, _OnCardTypeAddNewFnc);
	//m_wndCardNumber.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndCardNumber.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndCardNumber.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndCardNumber.SetEvent(WE_CHECKVALUE, _OnCardNumberCheckValueFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndUID.SetEvent(WE_CHANGE, _OnUIDChangeFnc);
	//m_wndUID.SetEvent(WE_SETFOCUS, _OnUIDSetfocusFnc);
	//m_wndUID.SetEvent(WE_KILLFOCUS, _OnUIDKillfocusFnc);
	m_wndUID.SetEvent(WE_CHECKVALUE, _OnUIDCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndRegister.SetEvent(WE_CLICK, _OnRegisterSelectFnc);
	m_wndPendingOption.SetEvent(WE_CLICK, _OnPendingOptionSelectFnc);
	m_wndTerminateOption.SetEvent(WE_CLICK, _OnTerminateOptionSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCustomerVisitListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCustomerVisitListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCustomerVisitListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCustomerVisitListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCustomerVisitListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCustomerVisitListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndUID.GetDlgCtrlID(), m_nUID);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nPendingOption);
	DDX_Radio(pDX, m_wndTerminateOption.GetDlgCtrlID(), m_nTerminateOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CCustomerVisitListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CardType")] =  m_szCardTypeKey;
	m_jData[_T("CardNumber")] =  m_szCardNumber;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("UID")] =  m_nUID;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("PendingOption")] =  m_nPendingOption;
	m_jData[_T("TerminateOption")] =  m_nTerminateOption;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CardType")].GetValue(m_szCardTypeKey);
	m_jData[_T("CardNumber")].GetValue(m_szCardNumber);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("UID")].GetValue(m_nUID);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("PendingOption")].GetValue(m_nPendingOption);
	m_jData[_T("TerminateOption")].GetValue(m_nTerminateOption);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CCustomerVisitListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCustomerVisitListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCustomerVisitListView::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szCardTypeKey.Empty();
	m_szCardNumber.Empty();
	m_szPatientName.Empty();
	m_nUID=0;
	m_szPhone.Empty();
	m_nPendingOption=0;
	m_nTerminateOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CCustomerVisitListView::SetMode(int nMode){
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
void CCustomerVisitListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitListView::OnDepartmentSelendok(){
	 
}
/*void CCustomerVisitListView::OnDepartmentSetfocus(){
	
}*/
/*void CCustomerVisitListView::OnDepartmentKillfocus(){
	
}*/
long CCustomerVisitListView::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCustomerVisitListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCustomerVisitListView::OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitListView::OnCardTypeSelendok(){
	 
}
/*void CCustomerVisitListView::OnCardTypeSetfocus(){
	
}*/
/*void CCustomerVisitListView::OnCardTypeKillfocus(){
	
}*/
long CCustomerVisitListView::OnCardTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCardType.IsSearchKey() && !m_szCardTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCardTypeKey
};
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCustomerVisitListView::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCustomerVisitListView::OnCardNumberChange(){
	
} */
/*void CCustomerVisitListView::OnCardNumberSetfocus(){
	
} */
/*void CCustomerVisitListView::OnCardNumberKillfocus(){
	
} */
int CCustomerVisitListView::OnCardNumberCheckValue(){
	return 0;
} 
void CCustomerVisitListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CCustomerVisitListView::OnPatientNameChange(){
	
} */
/*void CCustomerVisitListView::OnPatientNameSetfocus(){
	
} */
/*void CCustomerVisitListView::OnPatientNameKillfocus(){
	
} */
int CCustomerVisitListView::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCustomerVisitListView::OnUIDChange(){
	
} */
/*void CCustomerVisitListView::OnUIDSetfocus(){
	
} */
/*void CCustomerVisitListView::OnUIDKillfocus(){
	
} */
int CCustomerVisitListView::OnUIDCheckValue(){
	return 0;
} 
/*void CCustomerVisitListView::OnPhoneChange(){
	
} */
/*void CCustomerVisitListView::OnPhoneSetfocus(){
	
} */
/*void CCustomerVisitListView::OnPhoneKillfocus(){
	
} */
int CCustomerVisitListView::OnPhoneCheckValue(){
	return 0;
} 
void CCustomerVisitListView::OnRegisterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitListView::OnPendingOptionSelect(){
	
}
void CCustomerVisitListView::OnTerminateOptionSelect(){
	
}
/*void CCustomerVisitListView::OnFromDateChange(){
	
} */
/*void CCustomerVisitListView::OnFromDateSetfocus(){
	
} */
/*void CCustomerVisitListView::OnFromDateKillfocus(){
	
} */
int CCustomerVisitListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CCustomerVisitListView::OnToDateChange(){
	
} */
/*void CCustomerVisitListView::OnToDateSetfocus(){
	
} */
/*void CCustomerVisitListView::OnToDateKillfocus(){
	
} */
int CCustomerVisitListView::OnToDateCheckValue(){
	return 0;
} 
void CCustomerVisitListView::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCustomerVisitListView::OnAddCustomerVisitListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCustomerVisitListView::OnEditCustomerVisitListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCustomerVisitListView::OnDeleteCustomerVisitListView(){
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
int CCustomerVisitListView::OnSaveCustomerVisitListView(){
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
int CCustomerVisitListView::OnCancelCustomerVisitListView(){
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
int CCustomerVisitListView::OnCustomerVisitListViewListLoadData(){
	return 0;
}
