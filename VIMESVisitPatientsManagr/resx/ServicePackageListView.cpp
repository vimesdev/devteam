#include "ServicePackageListView.h"
#include "MainFrm.h"
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
static void _OnRegisterNewSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnRegisterNewSelect();
} 
static void _OnBedDiagramSelectFnc(CWnd *pWnd){
	CServicePackageListView *pVw = (CServicePackageListView *)pWnd;
	pVw->OnBedDiagramSelect();
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
	m_wndPendingOption.Create(this, _T("Ðang d?i"), 115, 150, 210, 175);
	m_wndRegistedOption.Create(this, _T("Ðang luu trú"), 215, 150, 310, 175);
	m_wndTerminateOption.Create(this, _T("Ðã k?t thúc"), 315, 150, 399, 175);
	m_wndFromDateLabel.Create(this, _T("From Date"), 404, 150, 504, 175);
	m_wndFromDate.Create(this,509, 150, 609, 175); 
	m_wndToDateLabel.Create(this, _T("To Date"), 614, 150, 689, 175);
	m_wndToDate.Create(this,694, 150, 789, 175); 
	m_wndSearch.Create(this, _T("Search"), 800, 5, 950, 35);
	m_wndClear.Create(this, _T("Clear"), 800, 40, 950, 70);
	m_wndRegister.Create(this, _T("Ðang ký"), 800, 75, 950, 105);
	m_wndRegisterNew.Create(this, _T("Ðang ký ngoài"), 800, 110, 950, 140);
	m_wndBedDiagram.Create(this, _T("Bed Diagram"), 800, 144, 950, 174);

}
void CServicePackageListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(1024);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(1024);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndCardNumber.SetLimitText(1024);
	m_wndCardNumber.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);









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
	m_wndBedDiagram.SetEvent(WE_CLICK, _OnBedDiagramSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddServicePackageListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditServicePackageListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteServicePackageListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveServicePackageListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelServicePackageListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

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
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nPendingOption);
	DDX_Radio(pDX, m_wndRegistedOption.GetDlgCtrlID(), m_nRegistedOption);
	DDX_Radio(pDX, m_wndTerminateOption.GetDlgCtrlID(), m_nTerminateOption);
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
	m_jData[_T("OrderNo")] =  m_nOrderNo;
	m_jData[_T("PendingOption")] =  m_nPendingOption;
	m_jData[_T("RegistedOption")] =  m_nRegistedOption;
	m_jData[_T("TerminateOption")] =  m_nTerminateOption;
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
	m_jData[_T("OrderNo")].GetValue(m_nOrderNo);
	m_jData[_T("PendingOption")].GetValue(m_nPendingOption);
	m_jData[_T("RegistedOption")].GetValue(m_nRegistedOption);
	m_jData[_T("TerminateOption")].GetValue(m_nTerminateOption);
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
	m_nOrderNo=0;
	m_nPendingOption=0;
	m_nRegistedOption=0;
	m_nTerminateOption=0;
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
/*void CServicePackageListView::OnPatientNameChange(){
	
} */
/*void CServicePackageListView::OnPatientNameSetfocus(){
	
} */
/*void CServicePackageListView::OnPatientNameKillfocus(){
	
} */
int CServicePackageListView::OnPatientNameCheckValue(){
	return 0;
} 
/*void CServicePackageListView::OnPhoneChange(){
	
} */
/*void CServicePackageListView::OnPhoneSetfocus(){
	
} */
/*void CServicePackageListView::OnPhoneKillfocus(){
	
} */
int CServicePackageListView::OnPhoneCheckValue(){
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
	return 0;
} 
/*void CServicePackageListView::OnDocumentNoChange(){
	
} */
/*void CServicePackageListView::OnDocumentNoSetfocus(){
	
} */
/*void CServicePackageListView::OnDocumentNoKillfocus(){
	
} */
int CServicePackageListView::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CServicePackageListView::OnOrderNoChange(){
	
} */
/*void CServicePackageListView::OnOrderNoSetfocus(){
	
} */
/*void CServicePackageListView::OnOrderNoKillfocus(){
	
} */
int CServicePackageListView::OnOrderNoCheckValue(){
	return 0;
} 
void CServicePackageListView::OnPendingOptionSelect(){
	
}
void CServicePackageListView::OnRegistedOptionSelect(){
	
}
void CServicePackageListView::OnTerminateOptionSelect(){
	
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
	
} 
void CServicePackageListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnRegisterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnRegisterNewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CServicePackageListView::OnBedDiagramSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
