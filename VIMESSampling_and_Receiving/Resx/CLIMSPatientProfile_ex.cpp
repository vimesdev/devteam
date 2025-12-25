#include "CLIMSPatientProfile_ex.h"
#include "MainFrm.h"
static void _OnCalamviecSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientProfile_ex* )pWnd)->OnCalamviecSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCalamviecSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnCalamviecSelendok();
}
/*static void _OnCalamviecSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnCalamviecKillfocus();
}*/
/*static void _OnCalamviecKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnCalamviecKillfocus();
}*/
static long _OnCalamviecLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnCalamviecLoadData();
}
/*static void _OnCalamviecAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnCalamviecAddNew();
}*/
static void _OnChoncuaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientProfile_ex* )pWnd)->OnChoncuaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChoncuaSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnChoncuaSelendok();
}
/*static void _OnChoncuaSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnChoncuaKillfocus();
}*/
/*static void _OnChoncuaKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnChoncuaKillfocus();
}*/
static long _OnChoncuaLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnChoncuaLoadData();
}
/*static void _OnChoncuaAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnChoncuaAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnRoomCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnPerformByChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformByChange();
} */
/*static void _OnPerformBySetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformBySetfocus();} */ 
/*static void _OnPerformByKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnPerformByKillfocus();
} */
static int _OnPerformByCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnPerformByCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnObjectCheckValue();
} 
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CCLIMSPatientProfile_ex*)pWnd)->OnEmergencySelect();
}
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCLIMSPatientProfile_ex*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnWatingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile_ex*)pWnd)->OnWatingSelect();
}
static void _OnSamplingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile_ex*)pWnd)->OnSamplingSelect();
}
static void _OnReceivingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile_ex*)pWnd)->OnReceivingSelect();
}
static void _OnUploadedSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientProfile_ex*)pWnd)->OnUploadedSelect();
}
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCLIMSPatientProfile_ex*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnTestListDeleteItem();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientProfile_ex* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientProfile_ex *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientProfile_ex *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile_ex *pVw = (CCLIMSPatientProfile_ex *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile_ex *pVw = (CCLIMSPatientProfile_ex *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnTimerCheckSelectFnc(CWnd *pWnd){
	CCLIMSPatientProfile_ex *pVw = (CCLIMSPatientProfile_ex *)pWnd;
	pVw->OnTimerCheckSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCLIMSPatientProfile_ex*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddCLIMSPatientProfile_exFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnAddCLIMSPatientProfile_ex();
} 
static int _OnEditCLIMSPatientProfile_exFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnEditCLIMSPatientProfile_ex();
} 
static int _OnDeleteCLIMSPatientProfile_exFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnDeleteCLIMSPatientProfile_ex();
} 
static int _OnSaveCLIMSPatientProfile_exFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnSaveCLIMSPatientProfile_ex();
} 
static int _OnCancelCLIMSPatientProfile_exFnc(CWnd *pWnd){
	 return ((CCLIMSPatientProfile_ex*)pWnd)->OnCancelCLIMSPatientProfile_ex();
} 
CCLIMSPatientProfile_ex::CCLIMSPatientProfile_ex(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 670;
	SetDefaultValues();
}
CCLIMSPatientProfile_ex::~CCLIMSPatientProfile_ex(){
}
void CCLIMSPatientProfile_ex::OnCreateComponents(){
	m_wndPatientProfile_ex.Create(this, _T("Patient Profile"), 5, 3, 1014, 658);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 566, 1010, 653);
	m_wndCalamvieclabel.Create(this, _T("Calamviec"), 10, 28, 110, 53);
	m_wndCalamviec.Create(this,115, 28, 225, 53); 
	m_wndChoncuaLabel.Create(this, _T("Choncua"), 230, 27, 295, 52);
	m_wndChoncua.Create(this,300, 27, 415, 52); 
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 59, 110, 84);
	m_wndDocumentNo.Create(this,115, 59, 225, 84); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 230, 59, 295, 84);
	m_wndBarcode.Create(this,300, 59, 415, 84); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 89, 110, 114);
	m_wndPatientName.Create(this,115, 89, 415, 114); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 119, 110, 144);
	m_wndAge.Create(this,115, 119, 200, 144); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 119, 295, 144);
	m_wndSex.Create(this,300, 119, 415, 144); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 149, 110, 174);
	m_wndAddress.Create(this,115, 149, 415, 174); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 179, 110, 204);
	m_wndDiagnostic.Create(this,115, 179, 415, 204); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 209, 110, 234);
	m_wndOrderDate.Create(this,115, 209, 200, 234); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 209, 295, 234);
	m_wndDoctor.Create(this,300, 209, 415, 234); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 239, 110, 264);
	m_wndDepartment.Create(this,115, 239, 200, 264); 
	m_wndRoomLabel.Create(this, _T("Room"), 205, 239, 295, 264);
	m_wndRoom.Create(this,300, 239, 415, 264); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 10, 269, 110, 294);
	m_wndPerformDate.Create(this,115, 269, 200, 294); 
	m_wndPerformByLabel.Create(this, _T("Perform By"), 205, 269, 295, 294);
	m_wndPerformBy.Create(this,300, 269, 415, 294); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 299, 110, 324);
	m_wndObject.Create(this,115, 299, 295, 324); 
	m_wndEmergency.Create(this, _T("Inpatient"), 300, 299, 415, 324);
	m_wndOrderList.Create(this,10, 330, 1010, 561); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 594, 110, 619);
	m_wndFromDate.Create(this,115, 594, 205, 619); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 594, 310, 619);
	m_wndToDate.Create(this,315, 594, 415, 619); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 420, 594, 520, 619);
	m_wndSearchName.Create(this,525, 594, 1010, 619); 
	m_wndWating.Create(this, _T("Wating"), 10, 623, 110, 648);
	m_wndSampling.Create(this, _T("Sampling"), 115, 623, 210, 648);
	m_wndReceiving.Create(this, _T("Receiving"), 215, 623, 320, 648);
	m_wndUploaded.Create(this, _T("Uploaded"), 0, 0, 0, 30);
	m_wndTestList.Create(this,420, 30, 1010, 325); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 420, 623, 520, 648);
	m_wndTestGroup.Create(this,525, 623, 818, 648); 
	m_wndApproval.Create(this, _T("&LoadData"), 824, 623, 899, 648);
	m_wndPrint.Create(this, _T("&Print"), 904, 623, 976, 648);
	m_wndTimerCheck.Create(this, _T("@"), 981, 623, 1010, 648);
	m_wndTab.Create(this,421, 30, 1011, 325); 

}
void CCLIMSPatientProfile_ex::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCalamviec.SetCheckValue(true);
	m_wndCalamviec.LimitText(35);
	m_wndChoncua.SetCheckValue(true);
	m_wndChoncua.LimitText(35);
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


	m_wndCalamviec.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCalamviec.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChoncua.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChoncua.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);







}
void CCLIMSPatientProfile_ex::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCalamviec.SetEvent(WE_SELENDOK, _OnCalamviecSelendokFnc);
	//m_wndCalamviec.SetEvent(WE_SETFOCUS, _OnCalamviecSetfocusFnc);
	//m_wndCalamviec.SetEvent(WE_KILLFOCUS, _OnCalamviecKillfocusFnc);
	m_wndCalamviec.SetEvent(WE_SELCHANGE, _OnCalamviecSelectChangeFnc);
	m_wndCalamviec.SetEvent(WE_LOADDATA, _OnCalamviecLoadDataFnc);
	//m_wndCalamviec.SetEvent(WE_ADDNEW, _OnCalamviecAddNewFnc);
	m_wndChoncua.SetEvent(WE_SELENDOK, _OnChoncuaSelendokFnc);
	//m_wndChoncua.SetEvent(WE_SETFOCUS, _OnChoncuaSetfocusFnc);
	//m_wndChoncua.SetEvent(WE_KILLFOCUS, _OnChoncuaKillfocusFnc);
	m_wndChoncua.SetEvent(WE_SELCHANGE, _OnChoncuaSelectChangeFnc);
	m_wndChoncua.SetEvent(WE_LOADDATA, _OnChoncuaLoadDataFnc);
	//m_wndChoncua.SetEvent(WE_ADDNEW, _OnChoncuaAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCLIMSPatientProfile_exFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCLIMSPatientProfile_exFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCLIMSPatientProfile_exFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCLIMSPatientProfile_exFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCLIMSPatientProfile_exFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCLIMSPatientProfile_ex::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCalamviec.GetDlgCtrlID(), m_szCalamviecKey);
	DDX_TextEx(pDX, m_wndChoncua.GetDlgCtrlID(), m_szChoncuaKey);
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
void CCLIMSPatientProfile_ex::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Calamviec")] =  m_szCalamviecKey;
	m_jData[_T("Choncua")] =  m_szChoncuaKey;
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
			
	m_jData[_T("Calamviec")].GetValue(m_szCalamviecKey);
	m_jData[_T("Choncua")].GetValue(m_szChoncuaKey);
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
void CCLIMSPatientProfile_ex::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCLIMSPatientProfile_ex::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCLIMSPatientProfile_ex::SetDefaultValues(){

	m_szCalamviecKey.Empty();
	m_szChoncuaKey.Empty();
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
int CCLIMSPatientProfile_ex::SetMode(int nMode){
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
void CCLIMSPatientProfile_ex::OnCalamviecSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnCalamviecSelendok(){
	 
}
/*void CCLIMSPatientProfile_ex::OnCalamviecSetfocus(){
	
}*/
/*void CCLIMSPatientProfile_ex::OnCalamviecKillfocus(){
	
}*/
long CCLIMSPatientProfile_ex::OnCalamviecLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCalamviec.IsSearchKey() && !m_szCalamviecKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCalamviecKey
};
	m_wndCalamviec.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCalamviec.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCLIMSPatientProfile_ex::OnCalamviecAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCLIMSPatientProfile_ex::OnChoncuaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnChoncuaSelendok(){
	 
}
/*void CCLIMSPatientProfile_ex::OnChoncuaSetfocus(){
	
}*/
/*void CCLIMSPatientProfile_ex::OnChoncuaKillfocus(){
	
}*/
long CCLIMSPatientProfile_ex::OnChoncuaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChoncua.IsSearchKey() && !m_szChoncuaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChoncuaKey
};
	m_wndChoncua.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChoncua.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCLIMSPatientProfile_ex::OnChoncuaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCLIMSPatientProfile_ex::OnDocumentNoChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDocumentNoSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDocumentNoKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnBarcodeChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnBarcodeSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnBarcodeKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnBarcodeCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnPatientNameChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPatientNameSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPatientNameKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnAgeChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnAgeSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnAgeKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnAgeCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnSexChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnSexSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnSexKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnSexCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnAddressChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnAddressSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnAddressKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnAddressCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnDiagnosticChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDiagnosticSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDiagnosticKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnOrderDateChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnOrderDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnOrderDateKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnOrderDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnDoctorChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDoctorSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDoctorKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnDoctorCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnDepartmentChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDepartmentSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnDepartmentKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnDepartmentCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnRoomChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnRoomSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnRoomKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnRoomCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnPerformDateChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPerformDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPerformDateKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnPerformDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnPerformByChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPerformBySetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnPerformByKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnPerformByCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnObjectChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnObjectSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnObjectKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnObjectCheckValue(){
	return 0;
} 
	void CCLIMSPatientProfile_ex::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCLIMSPatientProfile_ex::OnOrderListDblClick(){
	
} 
void CCLIMSPatientProfile_ex::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile_ex::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCLIMSPatientProfile_ex::OnOrderListLoadData(){
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
/*void CCLIMSPatientProfile_ex::OnFromDateChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnFromDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnFromDateKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnFromDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnToDateChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnToDateSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnToDateKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnToDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientProfile_ex::OnSearchNameChange(){
	
} */
/*void CCLIMSPatientProfile_ex::OnSearchNameSetfocus(){
	
} */
/*void CCLIMSPatientProfile_ex::OnSearchNameKillfocus(){
	
} */
int CCLIMSPatientProfile_ex::OnSearchNameCheckValue(){
	return 0;
} 
void CCLIMSPatientProfile_ex::OnWatingSelect(){
	
}
void CCLIMSPatientProfile_ex::OnSamplingSelect(){
	
}
void CCLIMSPatientProfile_ex::OnReceivingSelect(){
	
}
void CCLIMSPatientProfile_ex::OnUploadedSelect(){
	
}
void CCLIMSPatientProfile_ex::OnTestListDblClick(){
	
} 
void CCLIMSPatientProfile_ex::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile_ex::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCLIMSPatientProfile_ex::OnTestListLoadData(){
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
void CCLIMSPatientProfile_ex::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnTestGroupSelendok(){
	 
}
/*void CCLIMSPatientProfile_ex::OnTestGroupSetfocus(){
	
}*/
/*void CCLIMSPatientProfile_ex::OnTestGroupKillfocus(){
	
}*/
long CCLIMSPatientProfile_ex::OnTestGroupLoadData(){
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
/*void CCLIMSPatientProfile_ex::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCLIMSPatientProfile_ex::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnTimerCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientProfile_ex::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientProfile_ex::OnAddCLIMSPatientProfile_ex(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCLIMSPatientProfile_ex::OnEditCLIMSPatientProfile_ex(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCLIMSPatientProfile_ex::OnDeleteCLIMSPatientProfile_ex(){
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
 		OnCancelCLIMSPatientProfile_ex();
 	}
	return 0;
}
int CCLIMSPatientProfile_ex::OnSaveCLIMSPatientProfile_ex(){
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
 		//OnCLIMSPatientProfile_exListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCLIMSPatientProfile_ex::OnCancelCLIMSPatientProfile_ex(){
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
int CCLIMSPatientProfile_ex::OnCLIMSPatientProfile_exListLoadData(){
	return 0;
}
