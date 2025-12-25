#include "PatientListView.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnPhoneCheckValue();
} 
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPatientListView* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPatientListView* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPatientListView* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVillageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPatientListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnVisitCardIdChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVisitCardIdChange();
} */
/*static void _OnVisitCardIdSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVisitCardIdSetfocus();} */ 
/*static void _OnVisitCardIdKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnVisitCardIdKillfocus();
} */
static int _OnVisitCardIdCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnVisitCardIdCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnBeingTreatedSelectFnc(CWnd *pWnd){
	  ((CPatientListView*)pWnd)->OnBeingTreatedSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CPatientListView*)pWnd)->OnDischargedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPatientListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPatientListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CPatientListView *pVw = (CPatientListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CPatientListView *pVw = (CPatientListView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnDepositSelectFnc(CWnd *pWnd){
	CPatientListView *pVw = (CPatientListView *)pWnd;
	pVw->OnDepositSelect();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CPatientListView *pVw = (CPatientListView *)pWnd;
	pVw->OnRefundSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPatientListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPatientListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnListDeleteItem();
} 
static long _OnVisitListLoadDataFnc(CWnd *pWnd){
	return ((CPatientListView*)pWnd)->OnVisitListLoadData();
} 
static void _OnVisitListDblClickFnc(CWnd *pWnd){
	((CPatientListView*)pWnd)->OnVisitListDblClick();
} 
static void _OnVisitListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPatientListView*)pWnd)->OnVisitListSelectChange(nOldItem, nNewItem);
} 
static int _OnVisitListDeleteItemFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnVisitListDeleteItem();
} 
static int _OnAddPatientListViewFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnAddPatientListView();
} 
static int _OnEditPatientListViewFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnEditPatientListView();
} 
static int _OnDeletePatientListViewFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnDeletePatientListView();
} 
static int _OnSavePatientListViewFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnSavePatientListView();
} 
static int _OnCancelPatientListViewFnc(CWnd *pWnd){
	 return ((CPatientListView*)pWnd)->OnCancelPatientListView();
} 
CPatientListView::CPatientListView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPatientListView::~CPatientListView(){
}
void CPatientListView::OnCreateComponents(){
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
	m_wndBeingTreated.Create(this, _T("Being treated"), 115, 150, 210, 175);
	m_wndDischarged.Create(this, _T("Discharged"), 299, 150, 399, 175);
	m_wndFromDateLabel.Create(this, _T("From Date"), 404, 150, 504, 175);
	m_wndFromDate.Create(this,509, 150, 609, 175); 
	m_wndToDateLabel.Create(this, _T("To Date"), 614, 150, 689, 175);
	m_wndToDate.Create(this,694, 150, 789, 175); 
	m_wndSearch.Create(this, _T("Search"), 800, 20, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 61, 950, 96);
	m_wndDeposit.Create(this, _T("Deposit"), 800, 103, 950, 138);
	m_wndRefund.Create(this, _T("Refund"), 800, 145, 950, 180);
	m_wndList.Create(this,5, 200, 955, 448); 
	m_wndVisitList.Create(this,5, 465, 955, 649); 

}
void CPatientListView::OnInitializeComponents(){
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
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Gender"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("Address"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Phone"), CFMT_TEXT, 120);


	m_wndVisitList.InsertColumn(0, _T("Visit Card Id"), CFMT_TEXT, 100);
	m_wndVisitList.InsertColumn(1, _T("Visit to time"), CFMT_DATETIME, 130);
	m_wndVisitList.InsertColumn(2, _T("Time out"), CFMT_DATETIME, 130);
	m_wndVisitList.InsertColumn(3, _T("Visit Name"), CFMT_TEXT, 150);
	m_wndVisitList.InsertColumn(4, _T("Deposit Amount"), CFMT_NUMBER, 80);
	m_wndVisitList.InsertColumn(5, _T("Refund Amount"), CFMT_NUMBER, 80);
	m_wndVisitList.InsertColumn(6, _T("Consignment Note"), CFMT_TEXT, 200);

}
void CPatientListView::OnSetWindowEvents(){
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
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndVisitList.SetEvent(WE_SELCHANGE, _OnVisitListSelectChangeFnc);
	m_wndVisitList.SetEvent(WE_LOADDATA, _OnVisitListLoadDataFnc);
	m_wndVisitList.SetEvent(WE_DBLCLICK, _OnVisitListDblClickFnc);
	m_wndVisitList.AddEvent(1, _T("Delete"), _OnVisitListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPatientListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPatientListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePatientListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePatientListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPatientListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPatientListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndVisitCardId.GetDlgCtrlID(), m_szVisitCardId);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndBeingTreated.GetDlgCtrlID(), m_nBeingTreated);
	DDX_Radio(pDX, m_wndDischarged.GetDlgCtrlID(), m_nDischarged);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPatientListView::UpdateJson(BOOL bSave){
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
	m_jData[_T("BeingTreated")] =  m_nBeingTreated;
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
	m_jData[_T("BeingTreated")].GetValue(m_nBeingTreated);
	m_jData[_T("Discharged")].GetValue(m_nDischarged);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CPatientListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPatientListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPatientListView::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szPhone.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szVisitCardId.Empty();
	m_nDocumentNo=0;
	m_nBeingTreated=0;
	m_nDischarged=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CPatientListView::SetMode(int nMode){
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
/*void CPatientListView::OnPatientNameChange(){
	
} */
/*void CPatientListView::OnPatientNameSetfocus(){
	
} */
/*void CPatientListView::OnPatientNameKillfocus(){
	
} */
int CPatientListView::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPatientListView::OnPhoneChange(){
	
} */
/*void CPatientListView::OnPhoneSetfocus(){
	
} */
/*void CPatientListView::OnPhoneKillfocus(){
	
} */
int CPatientListView::OnPhoneCheckValue(){
	return 0;
} 
void CPatientListView::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnProvillSelendok(){
	 
}
/*void CPatientListView::OnProvillSetfocus(){
	
}*/
/*void CPatientListView::OnProvillKillfocus(){
	
}*/
long CPatientListView::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPatientListView::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPatientListView::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnDistrictSelendok(){
	 
}
/*void CPatientListView::OnDistrictSetfocus(){
	
}*/
/*void CPatientListView::OnDistrictKillfocus(){
	
}*/
long CPatientListView::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPatientListView::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPatientListView::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnVillageSelendok(){
	 
}
/*void CPatientListView::OnVillageSetfocus(){
	
}*/
/*void CPatientListView::OnVillageKillfocus(){
	
}*/
long CPatientListView::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPatientListView::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPatientListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnDepartmentSelendok(){
	 
}
/*void CPatientListView::OnDepartmentSetfocus(){
	
}*/
/*void CPatientListView::OnDepartmentKillfocus(){
	
}*/
long CPatientListView::OnDepartmentLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPatientListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPatientListView::OnVisitCardIdChange(){
	
} */
/*void CPatientListView::OnVisitCardIdSetfocus(){
	
} */
/*void CPatientListView::OnVisitCardIdKillfocus(){
	
} */
int CPatientListView::OnVisitCardIdCheckValue(){
	return 0;
} 
/*void CPatientListView::OnDocumentNoChange(){
	
} */
/*void CPatientListView::OnDocumentNoSetfocus(){
	
} */
/*void CPatientListView::OnDocumentNoKillfocus(){
	
} */
int CPatientListView::OnDocumentNoCheckValue(){
	return 0;
} 
void CPatientListView::OnBeingTreatedSelect(){
	
}
void CPatientListView::OnDischargedSelect(){
	
}
/*void CPatientListView::OnFromDateChange(){
	
} */
/*void CPatientListView::OnFromDateSetfocus(){
	
} */
/*void CPatientListView::OnFromDateKillfocus(){
	
} */
int CPatientListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CPatientListView::OnToDateChange(){
	
} */
/*void CPatientListView::OnToDateSetfocus(){
	
} */
/*void CPatientListView::OnToDateKillfocus(){
	
} */
int CPatientListView::OnToDateCheckValue(){
	return 0;
} 
void CPatientListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnDepositSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnRefundSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListView::OnListDblClick(){
	
} 
void CPatientListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPatientListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPatientListView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("DocumentNno")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("Gender")), 
			rs.GetValue(_T("Address")), 
			rs.GetValue(_T("Phone")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPatientListView::OnVisitListDblClick(){
	
} 
void CPatientListView::OnVisitListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPatientListView::OnVisitListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPatientListView::OnVisitListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndVisitList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVisitList.AddItems(
			rs.GetValue(_T("VisitCardId")), 
			rs.GetValue(_T("Visittotime")), 
			rs.GetValue(_T("Timeout")), 
			rs.GetValue(_T("VisitName")), 
			rs.GetValue(_T("DepositAmount")), 
			rs.GetValue(_T("RefundAmount")), 
			rs.GetValue(_T("ConsignmentNote")), NULL);
		rs.MoveNext();
	}
	m_wndVisitList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPatientListView::OnAddPatientListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPatientListView::OnEditPatientListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPatientListView::OnDeletePatientListView(){
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
 		OnCancelPatientListView();
 	}
	return 0;
}
int CPatientListView::OnSavePatientListView(){
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
 		//OnPatientListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPatientListView::OnCancelPatientListView(){
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
int CPatientListView::OnPatientListViewListLoadData(){
	return 0;
}
