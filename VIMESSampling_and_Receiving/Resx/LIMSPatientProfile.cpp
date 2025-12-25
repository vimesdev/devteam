#include "LIMSPatientProfile.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnRoomCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnPerformByChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformByChange();
} */
/*static void _OnPerformBySetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformBySetfocus();} */ 
/*static void _OnPerformByKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnPerformByKillfocus();
} */
static int _OnPerformByCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnPerformByCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnObjectCheckValue();
} 
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CLIMSPatientProfile*)pWnd)->OnEmergencySelect();
}
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientProfile*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientProfile*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnWatingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile*)pWnd)->OnWatingSelect();
}
static void _OnRunningSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile*)pWnd)->OnRunningSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile*)pWnd)->OnPerformedSelect();
}
static void _OnUploadedSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile*)pWnd)->OnUploadedSelect();
}
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientProfile*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientProfile*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnTestListDeleteItem();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnAddLIMSPatientProfile();
} 
static int _OnEditLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnEditLIMSPatientProfile();
} 
static int _OnDeleteLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnDeleteLIMSPatientProfile();
} 
static int _OnSaveLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnSaveLIMSPatientProfile();
} 
static int _OnCancelLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnCancelLIMSPatientProfile();
} 
CLIMSPatientProfile::CLIMSPatientProfile(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 665;
	SetDefaultValues();
}
CLIMSPatientProfile::~CLIMSPatientProfile(){
}
void CLIMSPatientProfile::OnCreateComponents(){
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 1014, 659);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 510, 419, 627);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 200, 55); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 205, 30, 295, 55);
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
	m_wndEmergency.Create(this, _T("Emergency"), 300, 270, 415, 295);
	m_wndOrderList.Create(this,10, 300, 415, 505); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 535, 110, 560);
	m_wndFromDate.Create(this,115, 535, 205, 560); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 535, 310, 560);
	m_wndToDate.Create(this,315, 535, 415, 560); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 565, 110, 590);
	m_wndSearchName.Create(this,115, 565, 415, 590); 
	m_wndWating.Create(this, _T("Wating"), 10, 595, 110, 620);
	m_wndRunning.Create(this, _T("Running"), 115, 595, 210, 620);
	m_wndPerformed.Create(this, _T("Performed"), 215, 595, 320, 620);
	m_wndUploaded.Create(this, _T("Uploaded"), 325, 595, 415, 620);
	m_wndTestList.Create(this,420, 30, 1010, 655); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 10, 632, 110, 657);
	m_wndTestGroup.Create(this,115, 632, 249, 657); 
	m_wndApproval.Create(this, _T("&Approval"), 254, 632, 334, 657);
	m_wndPrint.Create(this, _T("&Print"), 339, 632, 416, 657);

}
void CLIMSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetCheckValue(true);
	m_wndBarcode.SetLimitText(35);
	m_wndBarcode.SetCheckValue(true);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(15);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1);
	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetLimitText(15);
	m_wndDoctor.SetCheckValue(true);
	m_wndDepartment.SetLimitText(7);
	m_wndDepartment.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndPerformBy.SetLimitText(15);
	m_wndPerformBy.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(35);


	m_wndOrderList.InsertColumn(0, _T("SID"), CFMT_TEXT, 70);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(2, _T("Age"), CFMT_TEXT, 70);
	m_wndOrderList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);


	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 200);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 65);
	m_wndTestList.InsertColumn(3, _T("Norm Index"), CFMT_TEXT, 120);
	m_wndTestList.InsertColumn(4, _T("Result"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 70);


	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTestGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_lims_orderTbl.SetTableName(_T("lims_order"));
	m_lims_orderTbl.AddField(_T("limso_createdby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_createddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_updatedby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_updateddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_instid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_machine"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_oid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_docno"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_refid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_object"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_emergcy"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_barcode"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_tray"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_cup"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_rack"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_typeid"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_groupid"), dfText, 3); 
	m_lims_orderTbl.AddField(_T("limso_status"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_pid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_pname"), dfText, 65); 
	m_lims_orderTbl.AddField(_T("limso_birthdate"), dfDate); 
	m_lims_orderTbl.AddField(_T("limso_age"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_sex"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_address"), dfText, 254); 
	m_lims_orderTbl.AddField(_T("limso_phone"), dfText, 13); 
	m_lims_orderTbl.AddField(_T("limso_occupation"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_diagnostic"), dfText, 254); 
	m_lims_orderTbl.AddField(_T("limso_icd10"), dfText, 13); 
	m_lims_orderTbl.AddField(_T("limso_doctorid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_orderdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_orderdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_orderroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_performdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_performroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performerid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_acceptby"), dfText, 15); 

}
void CLIMSPatientProfile::OnSetWindowEvents(){
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
	m_wndRunning.SetEvent(WE_CLICK, _OnRunningSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSPatientProfileFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CLIMSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Radio(pDX, m_wndRunning.GetDlgCtrlID(), m_nRunning);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);
	DDX_Radio(pDX, m_wndUploaded.GetDlgCtrlID(), m_nUploaded);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);

}
void CLIMSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("limso_oid"), m_nDocumentNo);
	rs.GetValue(_T("limso_object"), m_szObject);
	rs.GetValue(_T("limso_pname"), m_szPatientName);
	rs.GetValue(_T("limso_age"), m_szAge);
	rs.GetValue(_T("limso_sex"), m_szSex);
	rs.GetValue(_T("limso_address"), m_szAddress);
	rs.GetValue(_T("limso_diagnostic"), m_szDiagnostic);
	rs.GetValue(_T("limso_doctorid"), m_szDoctor);
	rs.GetValue(_T("limso_orderdate"), m_szOrderDate);
	rs.GetValue(_T("limso_orderdept"), m_szDepartment);
	rs.GetValue(_T("limso_orderroom"), m_szRoom);
	rs.GetValue(_T("limso_performdate"), m_szPerformDate);
	rs.GetValue(_T("limso_performerid"), m_szPerformBy);

}
void CLIMSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_lims_orderTbl.SetValue(_T("limso_createdby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_createddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_oid"), m_nDocumentNo);
	m_lims_orderTbl.SetValue(_T("limso_object"), m_szObject);
	m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
	m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
	m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSex);
	m_lims_orderTbl.SetValue(_T("limso_address"), m_szAddress);
	m_lims_orderTbl.SetValue(_T("limso_diagnostic"), m_szDiagnostic);
	m_lims_orderTbl.SetValue(_T("limso_doctorid"), m_szDoctor);
	m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
	m_lims_orderTbl.SetValue(_T("limso_orderdept"), m_szDepartment);
	m_lims_orderTbl.SetValue(_T("limso_orderroom"), m_szRoom);
	m_lims_orderTbl.SetValue(_T("limso_performdate"), m_szPerformDate);
	m_lims_orderTbl.SetValue(_T("limso_performerid"), m_szPerformBy);

}
void CLIMSPatientProfile::SetDefaultValues(){

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
	m_nRunning=0;
	m_nPerformed=0;
	m_nUploaded=0;
	m_szTestGroupKey.Empty();

}
int CLIMSPatientProfile::SetMode(int nMode){
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
/*void CLIMSPatientProfile::OnDocumentNoChange(){
	
} */
/*void CLIMSPatientProfile::OnDocumentNoSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnDocumentNoKillfocus(){
	
} */
int CLIMSPatientProfile::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnBarcodeChange(){
	
} */
/*void CLIMSPatientProfile::OnBarcodeSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnBarcodeKillfocus(){
	
} */
int CLIMSPatientProfile::OnBarcodeCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnPatientNameChange(){
	
} */
/*void CLIMSPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnPatientNameKillfocus(){
	
} */
int CLIMSPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnAgeChange(){
	
} */
/*void CLIMSPatientProfile::OnAgeSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnAgeKillfocus(){
	
} */
int CLIMSPatientProfile::OnAgeCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnSexChange(){
	
} */
/*void CLIMSPatientProfile::OnSexSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnSexKillfocus(){
	
} */
int CLIMSPatientProfile::OnSexCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnAddressChange(){
	
} */
/*void CLIMSPatientProfile::OnAddressSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnAddressKillfocus(){
	
} */
int CLIMSPatientProfile::OnAddressCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnDiagnosticChange(){
	
} */
/*void CLIMSPatientProfile::OnDiagnosticSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnDiagnosticKillfocus(){
	
} */
int CLIMSPatientProfile::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnOrderDateChange(){
	
} */
/*void CLIMSPatientProfile::OnOrderDateSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnOrderDateKillfocus(){
	
} */
int CLIMSPatientProfile::OnOrderDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnDoctorChange(){
	
} */
/*void CLIMSPatientProfile::OnDoctorSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnDoctorKillfocus(){
	
} */
int CLIMSPatientProfile::OnDoctorCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnDepartmentChange(){
	
} */
/*void CLIMSPatientProfile::OnDepartmentSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnDepartmentKillfocus(){
	
} */
int CLIMSPatientProfile::OnDepartmentCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnRoomChange(){
	
} */
/*void CLIMSPatientProfile::OnRoomSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnRoomKillfocus(){
	
} */
int CLIMSPatientProfile::OnRoomCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnPerformDateChange(){
	
} */
/*void CLIMSPatientProfile::OnPerformDateSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnPerformDateKillfocus(){
	
} */
int CLIMSPatientProfile::OnPerformDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnPerformByChange(){
	
} */
/*void CLIMSPatientProfile::OnPerformBySetfocus(){
	
} */
/*void CLIMSPatientProfile::OnPerformByKillfocus(){
	
} */
int CLIMSPatientProfile::OnPerformByCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnObjectChange(){
	
} */
/*void CLIMSPatientProfile::OnObjectSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnObjectKillfocus(){
	
} */
int CLIMSPatientProfile::OnObjectCheckValue(){
	return 0;
} 
	void CLIMSPatientProfile::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CLIMSPatientProfile::OnOrderListDblClick(){
	
} 
void CLIMSPatientProfile::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientProfile::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientProfile::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("SID")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnFromDateChange(){
	
} */
/*void CLIMSPatientProfile::OnFromDateSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnFromDateKillfocus(){
	
} */
int CLIMSPatientProfile::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnToDateChange(){
	
} */
/*void CLIMSPatientProfile::OnToDateSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnToDateKillfocus(){
	
} */
int CLIMSPatientProfile::OnToDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile::OnSearchNameChange(){
	
} */
/*void CLIMSPatientProfile::OnSearchNameSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnSearchNameKillfocus(){
	
} */
int CLIMSPatientProfile::OnSearchNameCheckValue(){
	return 0;
} 
void CLIMSPatientProfile::OnWatingSelect(){
	
}
void CLIMSPatientProfile::OnRunningSelect(){
	
}
void CLIMSPatientProfile::OnPerformedSelect(){
	
}
void CLIMSPatientProfile::OnUploadedSelect(){
	
}
void CLIMSPatientProfile::OnTestListDblClick(){
	
} 
void CLIMSPatientProfile::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientProfile::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientProfile::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("TestName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("NormIndex")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CLIMSPatientProfile::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnTestGroupSelendok(){
	 
}
/*void CLIMSPatientProfile::OnTestGroupSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnTestGroupKillfocus(){
	
}*/
long CLIMSPatientProfile::OnTestGroupLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientProfile::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientProfile::OnAddLIMSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSPatientProfile::OnEditLIMSPatientProfile(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSPatientProfile::OnDeleteLIMSPatientProfile(){
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
 		OnCancelLIMSPatientProfile();
 	}
	return 0;
}
int CLIMSPatientProfile::OnSaveLIMSPatientProfile(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_lims_orderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_lims_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnLIMSPatientProfileListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSPatientProfile::OnCancelLIMSPatientProfile(){
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
int CLIMSPatientProfile::OnLIMSPatientProfileListLoadData(){
	return 0;
}
