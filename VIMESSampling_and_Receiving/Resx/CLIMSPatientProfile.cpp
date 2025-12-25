#include "CLIMSPatientProfile.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnRoomCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnPerformByChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformByChange();
} */
/*static void _OnPerformBySetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformBySetfocus();} */ 
/*static void _OnPerformByKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnPerformByKillfocus();
} */
static int _OnPerformByCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnPerformByCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnObjectCheckValue();
} 
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CCLIMSPatientProfile*)pWnd)->OnEmergencySelect();
}
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CCLIMSPatientProfile*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCLIMSPatientProfile*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnWatingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile*)pWnd)->OnWatingSelect();
}
static void _OnSamplingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile*)pWnd)->OnSamplingSelect();
}
static void _OnReceivingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile*)pWnd)->OnReceivingSelect();
}
static void _OnUploadedSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile*)pWnd)->OnUploadedSelect();
}
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CCLIMSPatientProfile*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCLIMSPatientProfile*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnTestListDeleteItem();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientProfile* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientProfile *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile *pVw = (CCLIMSPatientProfile *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile *pVw = (CCLIMSPatientProfile *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnTimerCheckSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile *pVw = (CCLIMSPatientProfile *)pWnd;
	pVw->OnTimerCheckSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCLIMSPatientProfile*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnAddCLIMSPatientProfile();
} 
static int _OnEditCLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnEditCLIMSPatientProfile();
} 
static int _OnDeleteCLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnDeleteCLIMSPatientProfile();
} 
static int _OnSaveCLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnSaveCLIMSPatientProfile();
} 
static int _OnCancelCLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile*)pWnd)->OnCancelCLIMSPatientProfile();
} 
CCLIMSPatientProfile::CCLIMSPatientProfile(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 670;
	SetDefaultValues();
}
CCLIMSPatientProfile::~CCLIMSPatientProfile(){
}
void CCLIMSPatientProfile::OnCreateComponents(){
	m_wndPatientProfile_ex.Create(this, _T("Patient Profile"), 5, 4, 1014, 658);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 566, 1010, 653);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 225, 55); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 230, 30, 295, 55);
	m_wndBarcode.Create(this,300, 30, 415, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 415, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 295, 115);
	m_wndSex.Create(this,300, 90, 415, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 415, 145); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 150, 110, 175);
	m_wndDiagnostic.Create(this,115, 150, 415, 175); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 180, 110, 205);
	m_wndOrderDate.Create(this,115, 180, 200, 205); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 180, 295, 205);
	m_wndDoctor.Create(this,300, 180, 415, 205); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 210, 110, 235);
	m_wndDepartment.Create(this,115, 210, 200, 235); 
	m_wndRoomLabel.Create(this, _T("Room"), 205, 210, 295, 235);
	m_wndRoom.Create(this,300, 210, 415, 235); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 10, 240, 110, 265);
	m_wndPerformDate.Create(this,115, 240, 200, 265); 
	m_wndPerformByLabel.Create(this, _T("Perform By"), 205, 240, 295, 265);
	m_wndPerformBy.Create(this,300, 240, 415, 265); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 270, 110, 295);
	m_wndObject.Create(this,115, 270, 295, 295); 
	m_wndEmergency.Create(this, _T("Inpatient"), 300, 270, 415, 295);
	m_wndOrderList.Create(this,10, 300, 1010, 562); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 594, 110, 619);
	m_wndFromDate.Create(this,115, 594, 205, 619); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 594, 310, 619);
	m_wndToDate.Create(this,315, 594, 415, 619); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 420, 594, 520, 619);
	m_wndSearchName.Create(this,525, 594, 1010, 619); 
	m_wndWating.Create(this, _T("Wating"), 10, 623, 110, 648);
	m_wndSampling.Create(this, _T("Sampling"), 115, 623, 210, 648);
	m_wndReceiving.Create(this, _T("Receiving"), 215, 623, 320, 648);
	m_wndUploaded.Create(this, _T("Uploaded"), 325, 623, 415, 648);
	m_wndTestList.Create(this,420, 30, 1010, 295); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 420, 623, 520, 648);
	m_wndTestGroup.Create(this,525, 623, 818, 648); 
	m_wndApproval.Create(this, _T("&Approval"), 824, 623, 899, 648);
	m_wndPrint.Create(this, _T("&Print"), 904, 623, 976, 648);
	m_wndTimerCheck.Create(this, _T("@"), 981, 623, 1010, 648);
	m_wndTab.Create(this,421, 30, 1011, 295); 

}
void CCLIMSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndBarcode.SetLimitText(1024);
	m_wndBarcode.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetLimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndDepartment.SetLimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndRoom.SetLimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndPerformBy.SetLimitText(1024);
	m_wndPerformBy.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(1024);







}
void CCLIMSPatientProfile::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	//m_wndPerformBy.SetEvent(WE_CHANGE, _OnPerformByChangeFnc);
	//m_wndPerformBy.SetEvent(WE_SETFOCUS, _OnPerformBySetfocusFnc);
	//m_wndPerformBy.SetEvent(WE_KILLFOCUS, _OnPerformByKillfocusFnc);
	m_wndPerformBy.SetEvent(WE_CHECKVALUE, _OnPerformByCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndWating.SetEvent(WE_CLICK, _OnWatingSelectFnc);
	m_wndSampling.SetEvent(WE_CLICK, _OnSamplingSelectFnc);
	m_wndReceiving.SetEvent(WE_CLICK, _OnReceivingSelectFnc);
	m_wndUploaded.SetEvent(WE_CLICK, _OnUploadedSelectFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTestGroup.SetEvent(WE_SELENDOK, _OnTestGroupSelendokFnc);
	//m_wndTestGroup.SetEvent(WE_SETFOCUS, _OnTestGroupSetfocusFnc);
	//m_wndTestGroup.SetEvent(WE_KILLFOCUS, _OnTestGroupKillfocusFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	//m_wndTestGroup.SetEvent(WE_ADDNEW, _OnTestGroupAddNewFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndTimerCheck.SetEvent(WE_CLICK, _OnTimerCheckSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCLIMSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCLIMSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCLIMSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCLIMSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCLIMSPatientProfileFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCLIMSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_nBarcode);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoom);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndPerformBy.GetDlgCtrlID(), m_szPerformBy);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Radio(pDX, m_wndWating.GetDlgCtrlID(), m_nWating);
	DDX_Radio(pDX, m_wndSampling.GetDlgCtrlID(), m_nSampling);
	DDX_Radio(pDX, m_wndReceiving.GetDlgCtrlID(), m_nReceiving);
	DDX_Radio(pDX, m_wndUploaded.GetDlgCtrlID(), m_nUploaded);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);

}
void CCLIMSPatientProfile::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("Barcode")] =  m_nBarcode;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Age")] =  m_szAge;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("Doctor")] =  m_szDoctor;
	m_jData[_T("Department")] =  m_szDepartment;
	m_jData[_T("Room")] =  m_szRoom;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	m_jData[_T("PerformBy")] =  m_szPerformBy;
	m_jData[_T("Object")] =  m_szObject;
	m_jData[_T("Emergency")] =  m_bEmergency;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("Wating")] =  m_nWating;
	m_jData[_T("Sampling")] =  m_nSampling;
	m_jData[_T("Receiving")] =  m_nReceiving;
	m_jData[_T("Uploaded")] =  m_nUploaded;
	m_jData[_T("TestGroup")] =  m_szTestGroupKey;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("Barcode")].GetValue(m_nBarcode);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Age")].GetValue(m_szAge);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("Doctor")].GetValue(m_szDoctor);
	m_jData[_T("Department")].GetValue(m_szDepartment);
	m_jData[_T("Room")].GetValue(m_szRoom);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	m_jData[_T("PerformBy")].GetValue(m_szPerformBy);
	m_jData[_T("Object")].GetValue(m_szObject);
	m_jData[_T("Emergency")].GetValue(m_bEmergency);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("Wating")].GetValue(m_nWating);
	m_jData[_T("Sampling")].GetValue(m_nSampling);
	m_jData[_T("Receiving")].GetValue(m_nReceiving);
	m_jData[_T("Uploaded")].GetValue(m_nUploaded);
	m_jData[_T("TestGroup")].GetValue(m_szTestGroupKey);
	}

}
void CCLIMSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCLIMSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCLIMSPatientProfile::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nBarcode=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szDiagnostic.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szDepartment.Empty();
	m_szRoom.Empty();
	m_szPerformDate.Empty();
	m_szPerformBy.Empty();
	m_szObject.Empty();
	m_bEmergency=FALSE;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearchName.Empty();
	m_nWating=0;
	m_nSampling=0;
	m_nReceiving=0;
	m_nUploaded=0;
	m_szTestGroupKey.Empty();

}
int CCLIMSPatientProfile::SetMode(int nMode){
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
/*void CCLIMSPatientProfile::OnDocumentNoChange(){
	
} */
/*void CCLIMSPatientProfile::OnDocumentNoSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnDocumentNoKillfocus(){
	
} */
int CCLIMSPatientProfile::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnBarcodeChange(){
	
} */
/*void CCLIMSPatientProfile::OnBarcodeSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnBarcodeKillfocus(){
	
} */
int CCLIMSPatientProfile::OnBarcodeCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnPatientNameChange(){
	
} */
/*void CCLIMSPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnPatientNameKillfocus(){
	
} */
int CCLIMSPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnAgeChange(){
	
} */
/*void CCLIMSPatientProfile::OnAgeSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnAgeKillfocus(){
	
} */
int CCLIMSPatientProfile::OnAgeCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnSexChange(){
	
} */
/*void CCLIMSPatientProfile::OnSexSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnSexKillfocus(){
	
} */
int CCLIMSPatientProfile::OnSexCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnAddressChange(){
	
} */
/*void CCLIMSPatientProfile::OnAddressSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnAddressKillfocus(){
	
} */
int CCLIMSPatientProfile::OnAddressCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnDiagnosticChange(){
	
} */
/*void CCLIMSPatientProfile::OnDiagnosticSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnDiagnosticKillfocus(){
	
} */
int CCLIMSPatientProfile::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnOrderDateChange(){
	
} */
/*void CCLIMSPatientProfile::OnOrderDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnOrderDateKillfocus(){
	
} */
int CCLIMSPatientProfile::OnOrderDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnDoctorChange(){
	
} */
/*void CCLIMSPatientProfile::OnDoctorSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnDoctorKillfocus(){
	
} */
int CCLIMSPatientProfile::OnDoctorCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnDepartmentChange(){
	
} */
/*void CCLIMSPatientProfile::OnDepartmentSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnDepartmentKillfocus(){
	
} */
int CCLIMSPatientProfile::OnDepartmentCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnRoomChange(){
	
} */
/*void CCLIMSPatientProfile::OnRoomSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnRoomKillfocus(){
	
} */
int CCLIMSPatientProfile::OnRoomCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnPerformDateChange(){
	
} */
/*void CCLIMSPatientProfile::OnPerformDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnPerformDateKillfocus(){
	
} */
int CCLIMSPatientProfile::OnPerformDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnPerformByChange(){
	
} */
/*void CCLIMSPatientProfile::OnPerformBySetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnPerformByKillfocus(){
	
} */
int CCLIMSPatientProfile::OnPerformByCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnObjectChange(){
	
} */
/*void CCLIMSPatientProfile::OnObjectSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnObjectKillfocus(){
	
} */
int CCLIMSPatientProfile::OnObjectCheckValue(){
	return 0;
} 
	void CCLIMSPatientProfile::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCLIMSPatientProfile::OnOrderListDblClick(){
	
} 
void CCLIMSPatientProfile::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCLIMSPatientProfile::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CCLIMSPatientProfile::OnFromDateChange(){
	
} */
/*void CCLIMSPatientProfile::OnFromDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnFromDateKillfocus(){
	
} */
int CCLIMSPatientProfile::OnFromDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnToDateChange(){
	
} */
/*void CCLIMSPatientProfile::OnToDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnToDateKillfocus(){
	
} */
int CCLIMSPatientProfile::OnToDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile::OnSearchNameChange(){
	
} */
/*void CCLIMSPatientProfile::OnSearchNameSetfocus(){
	
} */
/*void CCLIMSPatientProfile::OnSearchNameKillfocus(){
	
} */
int CCLIMSPatientProfile::OnSearchNameCheckValue(){
	return 0;
} 
void CCLIMSPatientProfile::OnWatingSelect(){
	
}
void CCLIMSPatientProfile::OnSamplingSelect(){
	
}
void CCLIMSPatientProfile::OnReceivingSelect(){
	
}
void CCLIMSPatientProfile::OnUploadedSelect(){
	
}
void CCLIMSPatientProfile::OnTestListDblClick(){
	
} 
void CCLIMSPatientProfile::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCLIMSPatientProfile::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCLIMSPatientProfile::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile::OnTestGroupSelendok(){
	 
}
/*void CCLIMSPatientProfile::OnTestGroupSetfocus(){
	
}*/
/*void CCLIMSPatientProfile::OnTestGroupKillfocus(){
	
}*/
long CCLIMSPatientProfile::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTestGroupKey
};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCLIMSPatientProfile::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCLIMSPatientProfile::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile::OnTimerCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile::OnAddCLIMSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCLIMSPatientProfile::OnEditCLIMSPatientProfile(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCLIMSPatientProfile::OnDeleteCLIMSPatientProfile(){
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
 		OnCancelCLIMSPatientProfile();
 	}
	return 0;
}
int CCLIMSPatientProfile::OnSaveCLIMSPatientProfile(){
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
 		//OnCLIMSPatientProfileListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCLIMSPatientProfile::OnCancelCLIMSPatientProfile(){
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
int CCLIMSPatientProfile::OnCLIMSPatientProfileListLoadData(){
	return 0;
}
