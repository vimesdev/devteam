#include "LIMSPatientProfile_ex.h"
#include "MainFrm.h"
#include "HMSParaclinicalDialog.h"
#include "HMSTestEntryDialog.h"
#include "HMSEditBarcodeDialog.h"
#include "LIMSEditResultDialog.h"
#include "ParaclinicalInformationView.h"
#include "Resource.h"
#include "stdafx.h"
static CWnd*	gParentWnd = NULL;

/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDocumentNoChange();
} */
static void _OnCalamviecSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile_ex* )pWnd)->OnCalamviecSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCalamviecSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnCalamviecSelendok();
}
static long _OnCalamviecLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnCalamviecLoadData();
}
static void _OnChoncuaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile_ex* )pWnd)->OnChoncuaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChoncuaSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnChoncuaSelendok();
}
static long _OnChoncuaLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnChoncuaLoadData();
}

static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDocumentNoSetfocus();} 

/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnBarcodeChange();
} */
static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnBarcodeSetfocus();} 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnRoomCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnPerformByChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformByChange();
} */
/*static void _OnPerformBySetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformBySetfocus();} */ 
/*static void _OnPerformByKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnPerformByKillfocus();
} */
static int _OnPerformByCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnPerformByCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnObjectCheckValue();
} 
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CLIMSPatientProfile_ex*)pWnd)->OnEmergencySelect();
}
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex*)pWnd)->OnOrderListLoadData();
} 
static int _OnOrderListDblClickFnc(CWnd *pWnd)
{
	return ((CLIMSPatientProfile_ex*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientProfile_ex*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile_ex* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnWatingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile_ex*)pWnd)->OnWatingSelect();
}
static void _OnSamplingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile_ex*)pWnd)->OnSamplingSelect();
}
static void _OnReceivingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile_ex*)pWnd)->OnReceivingSelect();
}
static void _OnUploadedSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientProfile_ex*)pWnd)->OnUploadedSelect();
}
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 

static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListDeleteItem();
}

static int _OnTestListSaveItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListSaveItem();
}

static int _OnTestListCancelAndRerunItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListCancelAndRerunItem();
}
static int _OnTestListCancelItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListCancelItem();
}

static int _OnTestListUndoCancelItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)gParentWnd)->OnTestListUndoCancelItem();
}


static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)gParentWnd)->OnResultCheckValue();
}

static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile_ex* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile_ex *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	return;
} 

static int _OnEditBarcodeFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnEditBarcode();
	return 0;
}


static int _OnMergeTestResultFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnMergeResult();
	return 0;
}


static int _OnMenuPrintSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnPrintSelect();
	return 0;
}


static int _OnAddNoteFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnAddNote();
	return 0;
}


static int _OnApprovalFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnApprovalSelect();
	return 0;
}

static int _OnUnapprovalFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnUnapproval();
	return 0;
}


static int _OnMenuAddMaterialFnc(CWnd *pWnd){
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	pVw->OnAddMaterial();
	return 0;
}
static int _OnAddLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnAddLIMSPatientProfile();
} 
static int _OnEditLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnEditLIMSPatientProfile();
} 
static int _OnDeleteLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnDeleteLIMSPatientProfile();
} 
static int _OnSaveLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnSaveLIMSPatientProfile();
} 
static int _OnCancelLIMSPatientProfileFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile_ex*)pWnd)->OnCancelLIMSPatientProfile();
}
static void _OnTimerCheckSelectFnc(CWnd *pWnd)
{
	CLIMSPatientProfile_ex *pVw = (CLIMSPatientProfile_ex *)pWnd;
	return;
}
static int _OnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex*)pWnd)->OnUnCheckAll();
} 
static int _OnUpdateSampleOrderFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile_ex*)pWnd)->OnUpdateSampleOrder();
} 

BEGIN_MESSAGE_MAP(CLIMSPatientProfile_ex, CGuiView)
	ON_WM_TIMER()
END_MESSAGE_MAP()



CLIMSPatientProfile_ex::CLIMSPatientProfile_ex(){

	m_nDlgWidth = 1024;
	m_nDlgHeight = 665;
	
	SetDefaultValues();
	m_nDocumentNo=0;
	m_nBarcode = 0;
	m_bMapBarcode = true;
	gParentWnd = this;
}
CLIMSPatientProfile_ex::~CLIMSPatientProfile_ex(){
}
void CLIMSPatientProfile_ex::OnCreateComponents()
{
	/*m_wndPatientProfile_ex.Create(this, _T("Patient Profile"), 5, 4, 1014, 658);
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
	//m_wndUploaded.Create(this, _T("Uploaded"), 325, 623, 415, 648);
	m_wndUploaded.Create(this, _T("Uploaded"), 0, 0, 0, 0);
	m_wndTestList.Create(this,420, 30, 1010, 295); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 420, 623, 520, 648);
	m_wndTestGroup.Create(this,525, 623, 818, 648); 
	m_wndApproval.Create(this, _T("&LoadData"), 824, 623, 899, 648);
	m_wndPrint.Create(this, _T("&Print"), 904, 623, 976, 648);
	m_wndTimerCheck.Create(this, _T("@"), 981, 623, 1010, 648);
	m_wndTab.Create(this,421, 30, 1011, 295);*/
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
	m_wndOrderList.SetCheckBox(TRUE);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 594, 110, 619);
	m_wndFromDate.Create(this,115, 594, 205, 619); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 594, 310, 619);
	m_wndToDate.Create(this,315, 594, 415, 619); 
	m_wndDeptLabel.Create(this, _T("Department"), 420, 594, 520, 619);
	m_wndDept.Create(this,525, 594, 725, 619); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 730, 594, 830, 619);
	m_wndSearchName.Create(this,835, 594, 1010, 619); 
	m_wndWating.Create(this, _T("Wating"), 10, 623, 110, 648);
	m_wndSampling.Create(this, _T("Lấy mẫu"), 115, 623, 210, 648);
	m_wndReceiving.Create(this, _T("Nhận mẫu"), 215, 623, 320, 648);
	m_wndUploaded.Create(this, _T("Uploaded"), 0, 0, 0, 0);
	m_wndTestList.Create(this,420, 30, 1010, 325); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 420, 623, 520, 648);
	m_wndTestGroup.Create(this,525, 623, 818, 648); 
	m_wndApproval.Create(this, _T("&LoadData"), 824, 623, 899, 648);
	m_wndPrint.Create(this, _T("&Print"), 904, 623, 976, 648);
	m_wndTimerCheck.Create(this, _T("@"), 981, 623, 1010, 648);
	m_wndTab.Create(this,421, 30, 1011, 325); 
}
void CLIMSPatientProfile_ex::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!m_bEmergency)
		{
	m_wndCalamviec.SetCheckValue(true);
	m_wndChoncua.SetCheckValue(true);	
		}
	m_wndDocumentNo.SetCheckValue(true);	
	m_wndBarcode.SetLimitText(35);
	m_wndBarcode.SetCheckValue(true);
	m_wndBarcode.ModifyStyle(0, ES_NUMBER);
	m_wndBarcode.SetNotEmpty(false);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetInitCap(true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	m_wndAge.SetLimitText(15);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1);
	m_wndAddress.SetLimitText(254);
	//m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	//m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(15);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	//m_wndRoom.SetCheckValue(true);
	//m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndPerformDate.SetCheckValue(true);
	m_wndPerformDate.SetReadOnly(true);
	m_wndPerformBy.SetLimitText(15);
	m_wndPerformBy.SetReadOnly(true);
//	m_wndObject.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(35);
	m_wndEmergency.ModifyStyle(WS_TABSTOP, 0);

	m_wndCalamviec.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCalamviec.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChoncua.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndChoncua.InsertColumn(1, _T("Name"), CFMT_TEXT, 110);
	m_wndChoncua.InsertColumn(2, _T("Dept"), CFMT_TEXT, 40);

	m_wndSearchName.SetNotEmpty(false);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.InsertColumn(0, _T("SID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(2, _T("Age"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(4, _T("Barcode"), CFMT_NUMBER|CFMT_CENTER, 70);
	m_wndOrderList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 40);	
	m_wndOrderList.InsertColumn(6, _T("Group"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(7, _T("DocumentNo"), CFMT_NUMBER, 0);
	m_wndOrderList.InsertColumn(8, _T("Khoa"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(9, _T("Practitioner"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(10, _T("Quét Barcode"), CFMT_DATETIME, 140);
	m_wndOrderList.InsertColumn(11, _T(""), CFMT_TEXT, 0); //groupid
	m_wndOrderList.InsertColumn(12, _T("Lấy mẫu"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndOrderList.InsertColumn(13, _T("T/g lấy mẫu"), CFMT_DATETIME, 140);
	m_wndOrderList.InsertColumn(14, _T("Người lấy mẫu"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndOrderList.InsertColumn(15, _T("Nhận mẫu"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndOrderList.InsertColumn(16, _T("T/g nhận mẫu"), CFMT_DATETIME, 140);
	m_wndOrderList.InsertColumn(17, _T("Người nhận mẫu"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndOrderList.InsertColumn(18, _T("Ca trực"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndOrderList.InsertColumn(19, _T("Cửa số"), CFMT_TEXT|CFMT_CENTER, 40);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndTestList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndTestList.GetHeaderControl()->SetItemHeight(2);
	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 220);
	m_wndTestList.InsertColumn(2, _T("Result"), CFMT_TEXT|CFMT_RIGHT, 70);
	m_wndTestList.InsertColumn(3, _T("Note"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(4, _T("Norm Index"), CFMT_TEXT|CFMT_CENTER, 120);
	m_wndTestList.InsertColumn(5, _T("Unit"), CFMT_TEXT, 65);
	m_wndTestList.InsertColumn(6, _T(""), CFMT_TEXT, 0);
	m_wndTestList.InsertColumn(7, _T("Machine"), CFMT_TEXT, 120);
	m_wndTestList.InsertColumn(8, _T("Status"), CFMT_TEXT, 0);

	//m_wndTestList.SetEditLabel(2, GUI_TEXTCTRL);
	//m_wndTestList.SetEditLabel(3, GUI_TEXTCTRL);
	//m_wndTestList.SetAllowEdit(FALSE);
	m_lims_patientTbl.SetTableName(_T("lims_patient"));
	m_lims_patientTbl.AddField(_T("limsp_createdby"), dfText, 15); 
	m_lims_patientTbl.AddField(_T("limsp_createddate"), dfDateTime); 
	m_lims_patientTbl.AddField(_T("limsp_updatedby"), dfText, 15); 
	m_lims_patientTbl.AddField(_T("limsp_updateddate"), dfDateTime); 
	m_lims_patientTbl.AddField(_T("limsp_docno"), dfLong); 
	m_lims_patientTbl.AddField(_T("limsp_object"), dfInteger); 
	m_lims_patientTbl.AddField(_T("limsp_emergcy"), dfText, 1); 
	m_lims_patientTbl.AddField(_T("limsp_pid"), dfText, 15); 
	m_lims_patientTbl.AddField(_T("limsp_pname"), dfText, 65); 
	m_lims_patientTbl.AddField(_T("limsp_birthdate"), dfDate); 
	m_lims_patientTbl.AddField(_T("limsp_age"), dfText, 15); 
	m_lims_patientTbl.AddField(_T("limsp_sex"), dfText, 1); 
	m_lims_patientTbl.AddField(_T("limsp_address"), dfText, 254); 
	m_lims_patientTbl.AddField(_T("limsp_phone"), dfText, 13); 
	m_lims_patientTbl.AddField(_T("limsp_occupation"), dfInteger); 
	m_lims_patientTbl.AddField(_T("limsp_diagnostic"), dfText, 254); 
	m_lims_patientTbl.AddField(_T("limsp_icd10"), dfText, 13); 
	m_lims_patientTbl.AddField(_T("limsp_doctorid"), dfText, 15); 
	m_lims_patientTbl.AddField(_T("limsp_orderdate"), dfDateTime); 
	m_lims_patientTbl.AddField(_T("limsp_orderdept"), dfText, 7); 
	m_lims_patientTbl.AddField(_T("limsp_orderroom"), dfInteger); 
	m_lims_patientTbl.AddField(_T("limsp_performdate"), dfDateTime); 
	m_lims_patientTbl.AddField(_T("limsp_performdept"), dfText, 7); 
	m_lims_patientTbl.AddField(_T("limsp_performroom"), dfInteger); 
	m_lims_patientTbl.AddField(_T("limsp_performerid"), dfText, 15); 


	m_lims_orderTbl.SetTableName(_T("lims_order"));
	m_lims_orderTbl.AddField(_T("limso_createdby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_createddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_updatedby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_updateddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_instid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_machine"), dfText, 35); 
	//m_lims_orderTbl.AddField(_T("limso_oid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_docno"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_refidx"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_barcode"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_tray"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_cup"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_rack"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_typeid"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_groupid"), dfText, 3); 
	m_lims_orderTbl.AddField(_T("limso_status"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_doctorid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_orderdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_orderdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_orderroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_performdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_performroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performerid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_acceptby"), dfText, 15); 

	
	m_szOrderDate = m_szPerformDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	
}
void CLIMSPatientProfile_ex::OnSetWindowEvents(){
	
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
	
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
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
//	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndWating.SetEvent(WE_CLICK, _OnWatingSelectFnc);
	m_wndSampling.SetEvent(WE_CLICK, _OnSamplingSelectFnc);
	m_wndReceiving.SetEvent(WE_CLICK, _OnReceivingSelectFnc);
	m_wndUploaded.SetEvent(WE_CLICK, _OnUploadedSelectFnc);
	m_wndTimerCheck.SetEvent(WE_CLICK, _OnTimerCheckSelectFnc);
	m_wndOrderList.SetWindowText(_T("Task List"));

//	m_wndOrderList.AddEvent(1, _T("Edit Barcode"), _OnEditBarcodeFnc);
//	m_wndOrderList.AddEvent(0, _T("-"), NULL);

//	m_wndOrderList.AddEvent(2, _T("Synchronize test result"), _OnMergeTestResultFnc);
//	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(3, _T("Print Test Order"), _OnMenuPrintSelectFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(4, _T("Add Note"), _OnAddNoteFnc);

	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(5, _T("Approval\tF12"), _OnApprovalFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(1, _T("Hủy kết quả nhận mẫu"), _OnUnapprovalFnc);
	m_wndOrderList.AddEvent(2, _T("Check All"), _OnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndOrderList.AddEvent(3, _T("UnCheck All"), _OnUnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndOrderList.AddEvent(4, _T("Update Sample Order"), _OnUpdateSampleOrderFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(7, _T("Drug && Material"), _OnMenuAddMaterialFnc);

//	m_wndOrderList.AddEvent(0, _T("-"), NULL);
//	m_wndOrderList.AddEvent(6, _T("Refresh List"), _OnOrderListRefreshFnc, 0, VK_F5);

	m_wndTestList.SetWindowText(_T("Test List"));
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	
	
	//m_wndTestList.AddEvent(1, _T("Hủy kết quả nhận mẫu"), _OnUnapprovalFnc);
//	m_wndTestList.AddEvent(0, _T("-"));
	//m_wndTestList.AddEvent(2, _T("Cancel and rerun"), _OnTestListCancelAndRerunItemFnc);
	//m_wndTestList.AddEvent(3, _T("Cancel Item"), _OnTestListCancelItemFnc);
	//m_wndTestList.AddEvent(0, _T("-"));
	//m_wndTestList.AddEvent(4, _T("Undo Item"), _OnTestListUndoCancelItemFnc);


	m_wndTestGroup.SetEvent(WE_SELENDOK, _OnTestGroupSelendokFnc);
	//m_wndTestGroup.SetEvent(WE_SETFOCUS, _OnTestGroupSetfocusFnc);
	//m_wndTestGroup.SetEvent(WE_KILLFOCUS, _OnTestGroupKillfocusFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	//m_wndTestGroup.SetEvent(WE_ADDNEW, _OnTestGroupAddNewFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
//	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSPatientProfileFnc, 0, 'T', VK_CONTROL);
*/
	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndBarcode, GetFaceName(), GetFaceSize()+2, true);
	m_wndBarcode.SetTextColor(RGB(0, 128, 192));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));	
	if (!m_bEmergency)
	{
	ShowMessageBox(_T("Bạn nhớ chọn ca làm việc và cửa làm việc"));
	}
	SetWindowFont(&m_wndDiagnostic, GetFaceName(), GetFaceSize()+2, TRUE);

	SetMode(VM_VIEW);
	m_wndDocumentNo.SetFocus();

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T("''|''");
		m_szPermGroupID.AppendFormat(_T("%s"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	//_msg(_T("%s"),szSQL);
	//_msg(_T("%s"),m_szPermGroupID);
	UpdateData(false);

	m_pResult = (CGuiTextCtrl*) m_wndTestList.GetEditControl(2);
	if(m_pResult)
	{
		m_pResult->SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	}

	m_wndParaclinicalOrder.Create(&m_wndTab);
	m_wndTab.Add(_T("Result"), &m_wndTestList);
	m_wndTab.Add(_T("Paraclinical"), &m_wndParaclinicalOrder);
	m_wndTab.SetCurSel(0);

	
	/*m_wndTaskbarNotifier.Create(this);
	m_wndTaskbarNotifier.SetSkin(IDB_NOTIFICATION);
	m_wndTaskbarNotifier.SetTextFont(L"Arial",90,TN_TEXT_NORMAL,TN_TEXT_UNDERLINE);
	m_wndTaskbarNotifier.SetTextColor(RGB(0, 64, 192),RGB(0,0,200));
	m_wndTaskbarNotifier.SetTextRect(CRect(80,20, 240, 300));
	SetTimer(1, 5000, NULL);*/

}
void CLIMSPatientProfile_ex::OnDoDataExchange(CDataExchange* pDX)
{
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
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	//DDX_Radio(pDX, m_wndWating.GetDlgCtrlID(), m_nState);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);
	DDX_Radio(pDX, m_wndWating.GetDlgCtrlID(), m_nWating);
	DDX_Radio(pDX, m_wndSampling.GetDlgCtrlID(), m_nSampling);
	DDX_Radio(pDX, m_wndReceiving.GetDlgCtrlID(), m_nReceiving);

}
void CLIMSPatientProfile_ex::GetDataToScreen()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr, szWhere;

	
	if(m_nSearchFlag == SEARCH_BARCODE || m_nSearchFlag == SEARCH_DOCUMENTNO || m_nSearchFlag == SEARCH_DATE)
		m_nOrderID = 0;

	if(m_nOrderID > 0 && m_nSearchFlag == SEARCH_ORDER)
	{
		szWhere.AppendFormat(_T(" and hpc_orderid=%ld "), m_nOrderID);
	}
	
	if(m_nBarcode > 0 && m_nSearchFlag == SEARCH_BARCODE){
		szWhere.AppendFormat(_T(" and hpc_docno=%ld "), m_nDocumentNo);
		szWhere.AppendFormat(_T(" and hpc_sid=%ld "), m_nBarcode);
	}
	if(m_nDocumentNo > 0 && m_nSearchFlag == SEARCH_DOCUMENTNO){
		szWhere.AppendFormat(_T(" and hpc_docno=%ld "), m_nDocumentNo);
		if(m_nBarcode > 0){
			szWhere.AppendFormat(_T(" and hpc_sid=%ld "), m_nBarcode);
		}
	}

	szSQL.Format(_T(" SELECT distinct(hpc_orderid) as orderid,") \
		_T(" 	hd_patientno as patientno,") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	HMS_GETSEX(hp_sex) as sex,") \
		_T("	hp_sex as sex_id, ") \
		_T(" 	hd_object as objectid,") \
		_T(" 	HMS_GetObjectName(hd_object) as objectname,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	(select distinct HE_PREDIAGNOSTIC from hms_exam where he_docno=hd_docno and he_deptid=hpc_deptid and he_roomid=hpc_roomid) as diagnostic,") \
		_T(" 	trunc(hpc_orderdate) as orderdate,") \
		_T(" 	GET_USERNAME(hpc_doctor) as doctor,") \
		_T(" 	hpc_deptid as deptid,") \
		_T(" 	hpc_roomid as roomid,") \
		_T(" 	hms_getroomname(hpc_deptid, hpc_roomid) as roomname,") \
		_T(" 	trunc(hpc_performdate) as performdate,") \
		_T(" 	hpc_practitioner as perfromby, ") \
		_T(" 	hpc_instid as instid, ") \
		_T(" 	hpc_groupid as groupid, ") \
		_T(" 	hpc_status as status, ") \
		_T(" 	LIMSOE_DUTY as duty,") \
		_T(" 	LIMSOE_GATE as gate ,") \
		_T(" 	hpc_sid as sid, HPC_EMERGENCY") \
		//_T(" 	hpc_sid as sid, HPC_EMERGENCY") \//
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_testorder ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN Lims_Order_Extra ON(hpc_docno=LIMSOE_DOCNO AND hpc_orderid = LIMSOE_ORDERID)") \
		_T(" WHERE hpc_status <>'O' AND hpc_sid>0 %s "), szWhere);

	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("duty"), m_szCalamviecKey);
		rs.GetValue(_T("gate"), m_szChoncuaKey);
		pMF->m_nDocumentNo = m_nDocumentNo;
		rs.GetValue(_T("patientno"), pMF->m_nPatientNo);
		pMF->m_nRefIndex= m_nOrderID;
		//rs.GetValue(_T("groupid"), m_szTestGroupKey);
		rs.GetValue(_T("objectname"), m_szObject);
		rs.GetValue(_T("pname"), tmpStr);
		StringUpper(tmpStr, m_szPatientName);
		rs.GetValue(_T("age"), m_szAge);
		rs.GetValue(_T("sex"), m_szSex);
		rs.GetValue(_T("sex_id"), m_szSexID);

		rs.GetValue(_T("address"), m_szAddress);
		rs.GetValue(_T("diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("doctor"), m_szDoctor);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		rs.GetValue(_T("deptid"), m_szDepartment);
		rs.GetValue(_T("roomname"), m_szRoom);		
		rs.GetValue(_T("performdate"), m_szPerformDate);
		rs.GetValue(_T("performby"), m_szPerformBy);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("sid"), m_nBarcode);
		
	//	rs.GetValue(_T("HPC_EMERGENCY"), tmpStr);
	//	if(tmpStr == _T("Y"))
	//		m_bEmergency = true;
	//	else
	//		m_bEmergency = false;

		CString szObjectId;
		rs.GetValue(_T("objectid"), szObjectId);
		szSQL.Format(_T("SELECT ho_type FROM hms_object WHERE ho_id='%s' "), szObjectId);
		CRecord rso(&pMF->m_db);
		rso.ExecSQL(szSQL);
		rso.GetValue(_T("ho_type"), m_szObjectType);
		pMF->m_szObject = szObjectId;



		m_bFound = true;

		m_wndParaclinicalOrder.RefreshData();

		m_wndTab.SetCurSel(0);
		
	}
	else
	{
		SetDefaultValues();
		m_bFound = false;
	}
	UpdateData(false);

//	m_wndDocumentNo.SetFocus();
//	m_wndBarcode.SetSel(0, m_wndBarcode.GetWindowTextLength());
}
void CLIMSPatientProfile_ex::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_lims_orderTbl.SetValue(_T("limso_createdby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_createddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_oid"), m_nDocumentNo);
	m_lims_orderTbl.SetValue(_T("limso_object"), m_szObject);
	m_lims_orderTbl.SetValue(_T("limso_emergcy"), _T("N"));
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
void CLIMSPatientProfile_ex::SetDefaultValues()
{
	//m_szCalamviecKey.Empty();
	//m_szChoncuaKey.Empty();	
	m_bMapBarcode = false;

	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szDiagnostic.Empty();
//	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szDepartment.Empty();
	m_szRoom.Empty();
//	m_szPerformDate.Empty();
	m_szPerformBy.Empty();
	m_szObject.Empty();

	m_bFound = false;
	/*m_szFromDate.Empty();
	m_szToDate.Empty();*/
	m_szDeptKey.Empty();
	m_szSearchName.Empty();
	//m_nState = 0;
	m_szObjectType = _T("S");
	m_nWating = 0;	
	//m_szTestGroupKey.Empty();

}
int CLIMSPatientProfile_ex::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDocumentNo.EnableWindow(false);
			m_wndBarcode.EnableWindow(false);
			m_wndPatientName.SetFocus();
			SetDefaultValues(); 
		//	szSQL.Format(_T("SELECT max(limsp_docno)+1 FROM lims_patient"));
		//	rs.ExecSQL(szSQL);
		//	m_nDocumentNo = rs.GetIntValue();
		//	if(m_nDocumentNo <= 0) 
		//		m_nDocumentNo = 1;
 			
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDocumentNo.EnableWindow(false);
			m_wndBarcode.EnableWindow(false);
			m_wndPatientName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
			m_wndDocumentNo.EnableWindow(true);
			m_wndBarcode.EnableWindow(true);
			m_wndBarcode.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1);
			m_wndDocumentNo.EnableWindow(true);
			m_wndBarcode.EnableWindow(true);
			m_wndOrderList.DeleteAllItems();
			m_wndTestList.DeleteAllItems();
 			SetDefaultValues(); 
			
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndDept.EnableWindow(TRUE);
		m_wndSearchName.EnableWindow(TRUE);
		m_wndCalamviec.EnableWindow(TRUE);
		m_wndChoncua.EnableWindow(TRUE);
		m_wndTestGroup.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CLIMSPatientProfile_ex::OnDocumentNoChange(){
	
} */
void CLIMSPatientProfile_ex::OnCalamviecSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
void CLIMSPatientProfile_ex::OnCalamviecSelendok()
{
	 
}

long CLIMSPatientProfile_ex::OnCalamviecLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCalamviec.IsSearchKey() && !m_szCalamviecKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCalamviecKey);
	}
	m_wndCalamviec.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_duty' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCalamviec.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CLIMSPatientProfile_ex::OnChoncuaSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile_ex::OnChoncuaSelendok()
{
	 
}
long CLIMSPatientProfile_ex::OnChoncuaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChoncua.IsSearchKey() && !m_szChoncuaKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szChoncuaKey);
	}
	m_wndChoncua.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_vndesc as dept FROM sys_sel WHERE ss_id='hms_sample_gate' ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndChoncua.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("dept")), NULL);
		rs.MoveNext();
	}	
	return nCount;
	return 0;
}
void CLIMSPatientProfile_ex::OnDocumentNoSetfocus()
{
//	m_wndDocumentNo.SetSel(0, m_wndDocumentNo.GetWindowTextLength());
} 
/*void CLIMSPatientProfile_ex::OnDocumentNoKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnDocumentNoCheckValue()
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szInpatient, szSQL, szSQL1, szSQL2, szDept, tmpStr, tmpStr1;

	szSQL1.Format(_T("SELECT LIMSO_ORDERDEPT as orderdept " )\
		_T(" FROM lims_order ") \
		_T("WHERE limso_docno=%ld and LIMSO_ORDERDEPT in ('C1.2','C1.3')"),m_nDocumentNo);
	rs.ExecSQL(szSQL1);	
	rs.GetValue(_T("orderdept"), tmpStr);
	
	szSQL2.Format(_T("SELECT ss_vndesc as dept FROM sys_sel WHERE ss_id='hms_sample_gate' AND ss_code='%s'"), m_szChoncuaKey);
	rs.ExecSQL(szSQL2);	
	rs.GetValue(_T("dept"), tmpStr1);

	if (tmpStr == _T("C1.3"))
	{	
		szDept=tmpStr;		
	}
	else if (tmpStr == _T("C1.2"))
	{
		szDept=tmpStr;
	}
	else
		//szDept=pMF->m_szDept;	
		szDept=	tmpStr1;
	//_msg(_T("%s"),m_szCalamviecKey);
	//_msg(_T("%s"),m_szChoncuaKey);
	if (m_bEmergency)
	{
		szInpatient=_T("I");
	}
	else
	{
		szInpatient=_T("E");
	}    	
	m_nOrderID = 0;
	m_nSearchFlag = SEARCH_DOCUMENTNO;
	
	if(m_nDocumentNo > 0 && szInpatient == _T("I"))
	{		
		m_nBarcode = 0;
		GetDataToScreen();
		if(!m_bFound)
		{
			m_wndDocumentNo.SetToolTipMessage(_T("Không tìm thấy bệnh nhân"));
			return 1;
		}
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(0);
		m_bFound = false;
	}
	else if(m_nDocumentNo > 0 && szInpatient == _T("E") && m_szCalamviecKey != _T("") && m_szChoncuaKey != _T("") ) 
	{	
		szSQL.Format(_T("LIMS_ORDER_UPDATE_RECDATE_DOCE(%ld,'%s','%s','%s','%s','%s','%s','%s') "), m_nDocumentNo, pMF->GetCurrentUser(),m_szPermGroupID,szInpatient,m_szCalamviecKey,m_szChoncuaKey,szDept,_T("Y"));
		int ret = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%s"),szSQL);
		//m_nSearchFlag = SEARCH_DOCUMENTNO;
		m_wndDocumentNo.SetFocus();
		m_wndDocumentNo.SetSel(0, -1);
		m_nBarcode = 0;

		GetDataToScreen();
		
		if(!m_bFound)
		{
			m_wndDocumentNo.SetToolTipMessage(_T("Không tìm thấy bệnh nhân"));
			return 1;
		}
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(0);
		m_bFound = false;
	}	
	else
	{
		m_wndDocumentNo.SetToolTipMessage(_T("Không tìm thấy bệnh nhân"));
		ShowMessageBox(_T("Bạn phải chọn ca làm việc và cửa làm việc"));
		//SetDefaultValues();
		m_nBarcode = 0;
		m_wndOrderList.DeleteAllItems();
		m_wndTestList.DeleteAllItems();
		UpdateData(FALSE);
	}
	return 1;
} 
/*void CLIMSPatientProfile_ex::OnBarcodeChange(){
	
} */
void CLIMSPatientProfile_ex::OnBarcodeSetfocus()
{
	
//	m_wndBarcode.SetSel(0, 15);	
	
} 
/*void CLIMSPatientProfile_ex::OnBarcodeKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnBarcodeCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szInpatient, szSQL, szSQL1, szSQL2, szDept, tmpStr, tmpStr1;

	szSQL1.Format(_T("SELECT LIMSO_ORDERDEPT as orderdept " )\
		_T(" FROM lims_order ") \
		_T("WHERE limso_docno=%ld and LIMSO_ORDERDEPT in ('C1.2','C1.3')"),m_nDocumentNo);
	rs.ExecSQL(szSQL1);	
	rs.GetValue(_T("orderdept"), tmpStr);	

	if (tmpStr == _T("C1.3"))
	{	
		szDept=tmpStr;		
	}
	else if (tmpStr == _T("C1.2"))
	{
		szDept=tmpStr;
	}
	else
		szDept=pMF->m_szDept;		
	
	if (m_bEmergency)
	{
		szInpatient=_T("I");
	}
	else
	{
		szInpatient=_T("E");
	}
	
	long ret;
    //UpdateData(true);
	//neu ma barcode rong thi bat buoc phai nhap ma barcode
	if(m_nBarcode <=0 )
		return -1;	
	
	m_nOrderID = 0;
	m_bFound = true;
	m_nSearchFlag = SEARCH_BARCODE;

	szSQL.Format(_T("SELECT max(limso_docno) as docno " )\
		_T(" FROM lims_order ") \
		_T("WHERE limso_barcode=TO_CHAR(%ld) and (limso_orderdate) BETWEEN TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "),
			m_nBarcode, m_szFromDate, m_szToDate);
	
	rs.ExecSQL(szSQL);
	if (m_bEmergency)
	{
		if(rs.GetIntValue() > 0)
		{
			//m_nDocumentNo = rs.GetIntValue();
			//szSQL.Format(_T("LIMS_ORDER_UPDATE_RECDATE_I(%ld, %ld,'%s','%s','%s','%s') "), m_nDocumentNo, m_nBarcode, pMF->GetCurrentUser(),m_szPermGroupID,szInpatient,_T("Y"));
			//int ret = str2int(pMF->ExecDML(szSQL));	
		
			GetDataToScreen();			
			OnOrderListLoadData();
			m_wndOrderList.SetCurSel(0);
			m_nOrderID = str2long(m_wndOrderList.GetItemText(0, 0));
			OnTestListLoadData();
			m_wndBarcode.SetFocus();
	        m_wndBarcode.SetSel(0, -1);
			m_bFound = false;			
		}	
		else
		{
			m_wndBarcode.SetToolTipMessage(_T("Không tìm thấy bệnh nhân"));
			return -1;
		}
	}
	else 
	{
		if(rs.GetIntValue() > 0 && m_szCalamviecKey != _T("") && m_szChoncuaKey != _T(""))
		{
			m_nDocumentNo = rs.GetIntValue();
			szSQL.Format(_T("LIMS_ORDER_UPDATE_RECDATE_E(%ld, %ld,'%s','%s','%s','%s','%s','%s','%s') "), m_nDocumentNo, m_nBarcode, pMF->GetCurrentUser(),m_szPermGroupID,szInpatient,m_szCalamviecKey,m_szChoncuaKey, szDept,_T("Y"));
			int ret = str2int(pMF->ExecDML(szSQL));		
			GetDataToScreen();			
			OnOrderListLoadData();
			m_wndOrderList.SetCurSel(0);
			m_nOrderID = str2long(m_wndOrderList.GetItemText(0, 0));
			OnTestListLoadData();			
			m_bFound = false;			
		}	
		else
		{
			m_wndBarcode.SetToolTipMessage(_T("Không tìm thấy bệnh nhân"));
			ShowMessageBox(_T("Bạn phải chọn ca làm việc và cửa làm việc"));
			return -1;
		}
	}	
	return 1;
} 
/*void CLIMSPatientProfile_ex::OnPatientNameChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnPatientNameSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnPatientNameKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnPatientNameCheckValue()
{	
	return 1;
} 
/*void CLIMSPatientProfile_ex::OnAgeChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnAgeSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnAgeKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnAgeCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnSexChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnSexSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnSexKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnSexCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnAddressChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnAddressSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnAddressKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnAddressCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnDiagnosticChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnDiagnosticSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnDiagnosticKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnOrderDateChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnOrderDateSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnOrderDateKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnOrderDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnDoctorChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnDoctorSetfocus(){
	
}*/
/*void CLIMSPatientProfile_ex::OnDoctorKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnDoctorCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnDepartmentChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnDepartmentSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnDepartmentKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnDepartmentCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnRoomChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnRoomSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnRoomKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnRoomCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnPerformDateChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnPerformDateSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnPerformDateKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnPerformDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnPerformByChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnPerformBySetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnPerformByKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnPerformByCheckValue(){
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnObjectChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnObjectSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnObjectKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnObjectCheckValue(){
	return 0;
} 
void CLIMSPatientProfile_ex::OnEmergencySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
}

void CLIMSPatientProfile_ex::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	long nDocumentNo;
	m_nDocumentNo = str2long(m_wndOrderList.GetItemText(nNewItem, 7));

	m_nOrderID = str2long(m_wndOrderList.GetItemText(nNewItem, 0));
	m_nBarcode = str2long(m_wndOrderList.GetItemText(nNewItem, 4));
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 5);
	m_szTestGroup = m_wndOrderList.GetItemText(nNewItem, 6);
	m_szOrderDept = m_wndOrderList.GetItemText(nNewItem, 8);
	m_nSearchFlag = SEARCH_ORDER;
	m_szGroupId = m_wndOrderList.GetItemText(nNewItem, 11);

	GetDataToScreen();	
	OnTestListLoadData();

	
}

int CLIMSPatientProfile_ex::OnOrderListDblClick()
{
	
	if ((m_nReceiving=0) || (!m_bEmergency))
		return 0 ;
	if(!m_bEmergency)
	{
		m_wndCalamviec.SetCheckValue(true);
		m_wndChoncua.SetCheckValue(true);
	}
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szMsg;	
	int ret = 0;	
	
	CString szItemID, szNote;
	CString szSQL;
	CString szDateTime=CDateTime::Convert(pMF->GetSysDateTime(), yyyymmdd | hhmmss, ddmmyyyy | hhmmss);
		
	for (int i =0; i < m_wndOrderList.GetItemCount(); i++) 
	{
		if(m_wndOrderList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)	
		{

			szSQL.Format(_T("LIMS_ORDER_UPDATE_REC_ORDER(%ld, %ld,'%s') "), m_nOrderID, m_nBarcode, pMF->GetCurrentUser());
			int ret = str2int(pMF->ExecDML(szSQL));			
		}
	}	
	m_nSearchFlag = SEARCH_BARCODE;
	OnOrderListLoadData();
	m_wndBarcode.SetFocus();
	m_wndBarcode.SetSel(0, -1);
	return ret;	
	
} 
int CLIMSPatientProfile_ex::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientProfile_ex::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere1, szOrderBy;
	UpdateData(true);

	m_wndOrderList.BeginLoad(); 
	int nCount = 0;	
	
	if(m_nSearchFlag != SEARCH_DOCUMENTNO && m_nSearchFlag != SEARCH_BARCODE)
	{
		if(m_nWating == 0)
		{
			szWhere.AppendFormat(_T(" AND hpc_status IN('S') AND LIMSOE_SAMPLE not in ('Y') AND LIMSOE_RECEIVE not in ('Y') AND (hpc_orderdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')  "),m_szFromDate, m_szToDate);
			if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P') "));
			szOrderBy.AppendFormat(_T(" pname "));
		}
		if(m_nSampling == 0)
		{
			szWhere.AppendFormat(_T(" AND LIMSOE_SAMPLE in('Y') AND (LIMSOE_SAMPLE_DATE) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
			if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
			szOrderBy.AppendFormat(_T(" hpc_sid "));
		}
		if(m_nReceiving == 0)
		{
			szWhere.AppendFormat(_T(" AND LIMSOE_RECEIVE in('Y') AND (LIMSOE_RECEIVE_DATE) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
			if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P', 'T') "));
			szOrderBy.AppendFormat(_T(" hpc_sid "));
		}
		if(m_nState == 3)
		{
			szWhere.AppendFormat(_T(" AND hpc_status in('T','U') AND (hpc_performdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
			if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
			szOrderBy.AppendFormat(_T(" hpc_sid "));
		}

	}
	else
	{
		if(m_nDocumentNo > 0 && m_nSearchFlag == SEARCH_DOCUMENTNO)
			szWhere.AppendFormat(_T(" and hpc_docno=%ld "), m_nDocumentNo);
		
		if(m_nBarcode > 0 && m_nSearchFlag == SEARCH_BARCODE)
		{
			szWhere.AppendFormat(_T(" and hpc_sid=%ld "), m_nBarcode);
			szWhere.AppendFormat(_T(" and HPC_ORDERDATE between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
			if(pMF->m_szInPatient != _T("I") && pMF->m_szInPatient != _T("A"))
			szWhere.AppendFormat(_T(" and hd_status IN('O','P','T') "));
		
		}

		szOrderBy.AppendFormat(_T(" hpc_orderid "));

	}	

	if(!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_deptid ='%s' "), m_szDeptKey);
	}

	//if(!m_szSearchName.IsEmpty()){
	//	szWhere.AppendFormat(_T(" and lower(hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), m_szSearchName);
	//}
	//Khoa dieu tri nhin thay tat ca cac yeu cau chi dinh cua khoa minh, Khoa Can lam sang chi nhin thay nhom duoc phan quyen
	szWhere.AppendFormat(_T(" and hpc_groupid in(%s) "), pMF->m_szTestGroup);

	if(!m_szTestGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_groupid ='%s' "), m_szTestGroupKey);
	}

	if(pMF->m_szInPatient == _T("A"))
	{

	}
	else
	{
		if(pMF->m_szInPatient != _T("I"))
		{
			szWhere.AppendFormat(_T(" and hpc_class='E' ") );
			szWhere.AppendFormat(_T(" and (ho_type<>'S' or (ho_type='S' and hpc_payment='P') ) "));
			
		}
		else
		{
			szWhere.AppendFormat(_T(" and hpc_class='I' ") );
		}
	}
//Dung bien nay de loc benh nhan noi tru hay ngoai tru
	if (m_bEmergency)
	{
		szWhere.AppendFormat(_T(" and hpc_deptid not in('C1.1','C1.2','C1.3','TYC','AB') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hpc_deptid in('C1.1','C1.2','C1.3','TYC','AB') "));
	}

	szWhere1.AppendFormat(_T("  GROUP BY hd_docno,  hpc_orderid,  hpc_sid, hp_surname,  hp_midname,hp_firstname,  hd_object,  hd_admitdate, hp_birthdate,  hp_sex,") \
	_T("   hpc_groupid,hpc_groupid,  hpc_doctor,  hpc_deptid,  hpc_roomid,  hpc_status,") \
	_T("   LIMSOE_SAMPLE,  LIMSOE_SAMPLE_DATE,  hpc_orderid,hpc_class,LIMSOE_SAMPLE_BY,") \
	_T("   LIMSOE_RECEIVE, LIMSOE_RECEIVE_DATE, LIMSOE_RECEIVE_BY,LIMSOE_DUTY,LIMSOE_GATE"));


	szSQL.Format(_T(" SELECT DISTINCT hd_docno as docno, hpc_orderid as orderid, hpc_sid as barcode, ") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	HMS_GetSex(hp_sex) as sex,") \
		_T("    hpc_groupid as groupid, ") \
		_T(" 	hms_getfeegroupname(hpc_groupid) as groupname,") \
		_T(" 	hpc_doctor as doctor,") \
		_T(" 	hpc_deptid as deptid,") \
		_T(" 	hpc_roomid as roomid,") \
		_T(" 	hpc_status as status,") \
		_T(" 	max(LIMSOE_MAP_DATE) as map_date, ") \
		_T(" 	LIMSOE_SAMPLE as sample_status, ") \
		_T(" 	LIMSOE_SAMPLE_DATE as sample_date, ") \
		_T(" 	case when hpc_class='E' then GET_USERNAME_FROM_GATE(hpc_orderid) else LIMSOE_SAMPLE_BY end as sample_by, ") \
		_T(" 	LIMSOE_RECEIVE as receive_status, ") \
		_T(" 	LIMSOE_RECEIVE_DATE as receive_date, ") \
		_T(" 	LIMSOE_RECEIVE_BY as receive_by, ") \
		_T(" 	LIMSOE_DUTY as duty, ") \
		_T(" 	LIMSOE_GATE as gate ") \
		//_T(" 	case when LIMSOE_DUTY is null THEN CAST(('Chưa chọn ca') AS NVARCHAR2(15)) else LIMSOE_DUTY end as duty,") \//
		//_T(" 	case when LIMSOE_GATE is null THEN  CAST(('Chưa chọn ca') AS NVARCHAR2(15)) else LIMSOE_GATE end as gate") \//
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T(" LEFT JOIN hms_testorder ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN Lims_Order_Extra ON(hpc_docno=LIMSOE_DOCNO AND hpc_orderid=LIMSOE_ORDERID)") \
		_T(" WHERE 	hpc_orderid > 0 and hpc_sid>0  ") \
		_T(" 	%s %s "),  szWhere, szWhere1);

_tprintf(_T("\r\n%s"), szSQL);
//_msg(_T("%s"),szSQL);
	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szStatus,szSample_status,szReceive_status, szGroupName;
	if(!m_szSearchName.IsEmpty())
	{
		StringLower(m_szSearchName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szSearchName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szSearchName)
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
		
		long nBarcode;

		int nItem = m_wndOrderList.AddItems(
			
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("status")),
			rs.GetValue(_T("groupname")),
			rs.GetValue(_T("Docno")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("practitioner")),
			rs.GetValue(_T("map_date")),
			rs.GetValue(_T("groupid")),
			rs.GetValue(_T("sample_status")),
			rs.GetValue(_T("sample_date")),
			rs.GetValue(_T("sample_by")),
			rs.GetValue(_T("receive_status")),
			rs.GetValue(_T("receive_date")),
			rs.GetValue(_T("receive_by")),
			rs.GetValue(_T("duty")),
			rs.GetValue(_T("gate")),
			NULL);

			rs.GetValue(_T("barcode"), nBarcode);
			rs.GetValue(_T("status"), szStatus);
			rs.GetValue(_T("sample_status"), szSample_status);
			rs.GetValue(_T("receive_status"), szReceive_status);			
			
			if (szStatus == _T("S") && szSample_status == _T("N") && szReceive_status == _T("N") && nBarcode > 0)
			{
				m_wndOrderList.SetSubItemBkColor(nItem, 4, RGB(64, 128, 128), FALSE);
				m_wndOrderList.SetSubItemTextColor(nItem, 4, RGB(255, 255, 255), FALSE);
			}		
			else if(szReceive_status == _T("Y") && szSample_status == _T("Y") && nBarcode > 0)
			{
				m_wndOrderList.SetSubItemBkColor(nItem, 4, RGB(0, 128, 192), FALSE);
				m_wndOrderList.SetSubItemTextColor(nItem, 4, RGB(255, 255, 255), FALSE);
			}
			
		    else if(szSample_status == _T("Y") && szReceive_status == _T("N") && nBarcode > 0)
			{
				m_wndOrderList.SetSubItemBkColor(nItem, 4, RGB(0, 128, 0), FALSE);
				m_wndOrderList.SetSubItemTextColor(nItem, 4, RGB(255, 255, 255), FALSE);
			}			

		rs.MoveNext();
	}
	m_wndOrderList.EndLoad();
		
	UpdateData(false);
	return nCount;
}
void CLIMSPatientProfile_ex::OnTestListDblClick(){
	OnEditResult();	
} 
void CLIMSPatientProfile_ex::OnTestListSelectChange(int nOldItem, int nNewItem)
{	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nRow = nNewItem;
} 
int CLIMSPatientProfile_ex::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CLIMSPatientProfile_ex::OnTestListSaveItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	CString szEdited;
	long nOrderLine;
	for (int i = 0; i < m_wndTestList.GetItemCount(); i++){
		szEdited = m_wndTestList.GetItemText(i, 7);
		if(szEdited == _T("Y"))
		{
			CString szSQL, szResult, szNote, szItemID;
			szItemID = m_wndTestList.GetItemText(i, 6);
			szResult = m_wndTestList.GetItemText(i, 2);
			szNote = m_wndTestList.GetItemText(i, 3);
			szResult.Trim();
			if(!szResult.IsEmpty())
			{
				szSQL.Format(_T("UPDATE hms_testorderline ") \
					_T("SET hpcl_result='%s', hpcl_note='%s', hpcl_status='P' ") \
					_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
						szResult, szNote, m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);

				szSQL.Format(_T("UPDATE lims_order_line ") \
					_T("SET limsol_result='%s', limsol_note='%s', limsol_status='P' ") \
					_T("WHERE limsol_orderid=%ld and limsol_itemid='%s' "), 
						szResult, szNote, m_nOrderID, szItemID);
				_tprintf(_T("\r\n%s"), szSQL);
				pMF->ExecSQL(szSQL);
			}
			m_wndTestList.SetItemText(i, 7, _T("N"));
		}
	}
	m_wndTestList.SetFocus();
	m_wndTestList.CancelEditLabel();
	 return 0;
}

long CLIMSPatientProfile_ex::OnTestListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, normindex;
	CString szWhere;

	int nItem = 0;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;

	UpdateData(true);
	
	nItem = m_wndTestList.AddItems(_T("*"), 
			m_szTestGroup, 
			_T(""), 
			_T(""),
			_T(""), 
			_T(""), 
			_T(""), 
			NULL);
		m_wndTestList.SetItemBkColor(nItem, RGB(0, 125, 135), FALSE);
		m_wndTestList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndTestList.MergeCell(nItem, 1, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);


		szSQL.Format(_T(" SELECT hpcl_itemid  AS itemid,") \
		_T("   trim(hfl_name2)   AS name,") \
		_T("   trim(hfl_unit)    AS unit,") \
		_T("   trim(hpcl_result) AS result,") \
		_T("   trim(hpcl_note)   AS note,") \
		_T("   hpcl_status       AS status,") \
		_T("   CASE") \
		_T("     WHEN LENGTH(hpcl_index1) > 0") \
		_T("     THEN trim(hpcl_index1)") \
		_T("     ELSE trim(hfl_index1)") \
		_T("   END AS mnorm,") \
		_T("   CASE") \
		_T("     WHEN LENGTH(hpcl_index2) > 0") \
		_T("     THEN trim(hpcl_index2)") \
		_T("     ELSE trim(hfl_index2)") \
		_T("   END        AS fnorm,") \
		_T("   limsi_name AS machine") \
		_T(" FROM hms_testorderline") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid=hpcl_itemid)") \
		_T(" LEFT JOIN lims_instrument") \
		_T(" ON(limsi_id             =hpcl_instid)") \
		_T(" WHERE hpcl_orderid      =%ld") \
		_T(" AND LENGTH(hpcl_itemid) > 0") \
		_T(" ORDER BY hpcl_orderlineid "), m_nOrderID);

		
		rsl.ExecSQL(szSQL);

		CString szNote;
		CString szSex;
		int nIndex = 1;
	
		while(!rsl.IsEOF())
		{
			if(m_szSexID == _T("M"))
			{
				rsl.GetValue(_T("mnorm"), normindex);
			}
			else
				rsl.GetValue(_T("fnorm"), normindex);

			tmpStr.Format(_T("%d"), nIndex++);


			rsl.GetValue(_T("note"), szNote);
			nItem = m_wndTestList.AddItems(tmpStr, 
					rsl.GetValue(_T("name")), 
					rsl.GetValue(_T("result")), 
					szNote, 
					normindex,
					rsl.GetValue(_T("unit")), 
					rsl.GetValue(_T("itemid")),
					rsl.GetValue(_T("machine")),
					rsl.GetValue(_T("status")),
					NULL);


			if(szNote.Find(_T("H")) != -1){
				m_wndTestList.SetSubItemBkColor(nItem, 2, RGB(192, 64, 0), FALSE);
				m_wndTestList.SetSubItemTextColor(nItem, 2, COLOR_WHITE, FALSE);
			}
			if(szNote.Find(_T("L")) != -1){
				m_wndTestList.SetSubItemBkColor(nItem, 2, RGB(0, 0, 255), FALSE);
				m_wndTestList.SetSubItemTextColor(nItem, 2, COLOR_WHITE, FALSE);
			}


			rsl.MoveNext();
		}

	m_wndTestList.EndLoad(); 
	return nCount;

}

int CLIMSPatientProfile_ex::OnTestListCancelAndRerunItem()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	int ret = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 \x63h\x1EAFn mu\x1ED1n h\x1EE7y k\x1EBFt qu\x1EA3 \x111\x1EC3 \x63h\x1EA1y l\x1EA1i kh\xF4ng?(Y/N)"), MB_YESNO);
	if(ret == IDNO)
		return 0;

	/*if(m_szStatus == _T("T"))
	{

		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}*/

	int row = m_wndTestList.GetCurSel();
	if(row < 0) return -1;

	CString szItemID, szNote;
	CString szSQL;

	szNote = _T("H\x1EE7y kh\xF4ng th\x1EF1\x63 hi\x1EC7n");

	for (int i =0; i < m_wndTestList.GetItemCount(); i++) 
	{
		if(m_wndTestList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{

			szItemID = m_wndTestList.GetItemText(i, 6);

			szSQL.Format(_T("UPDATE hms_testorderline ") \
				_T("SET hpcl_result='', hpcl_note='%s', hpcl_status='C' ") \
				_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), szNote, m_nOrderID, szItemID);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("UPDATE lims_order_line ") \
				_T("SET limsol_result='', limsol_note='%s', limsol_status='C' ") \
				_T("WHERE limsol_orderid=%ld and limsol_itemid='%s' "), szNote, m_nOrderID, szItemID);
			_tprintf(_T("\r\n%s"), szSQL);
			pMF->ExecSQL(szSQL);		
			
		}
	}
	OnTestListLoadData();
	return 0;
}

int CLIMSPatientProfile_ex::OnTestListCancelItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	CString tmpStr, szMsg;	
	
	int retMsg = ShowMessageBox(_T("Do you want to cancel item?(Y/N)"), MB_YESNO|MB_ICONWARNING|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return 0;
	int ret = 0;	
	
	CString szItemID, szNote;
	CString szSQL;

	szNote = _T("H\x1EE7y kh\xF4ng th\x1EF1\x63 hi\x1EC7n");

	for (int i =0; i < m_wndTestList.GetItemCount(); i++) 
	{
		if(m_wndTestList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{

			szItemID = m_wndTestList.GetItemText(i, 6);

			szSQL.Format(_T("UPDATE hms_testorderline ") \
				_T("SET hpcl_note='%s', hpcl_status='C' ") \
				_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), szNote, m_nOrderID, szItemID);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("UPDATE lims_order_line ") \
				_T("SET limsol_note='%s', limsol_status='C' ") \
				_T("WHERE limsol_orderid=%ld and limsol_itemid='%s' "), szNote, m_nOrderID, szItemID);
			_tprintf(_T("\r\n%s"), szSQL);
			pMF->ExecSQL(szSQL);		
			

			CString szEvent, szDesc;
			szEvent.Format(_T("Cancel Item"));
			szDesc.Format(_T("[%ld]; %s"), m_nOrderID, szItemID);		
			pMF->SystemLog(szEvent, szDesc);
		}
	}

	OnTestListLoadData();
	return ret;
}


int CLIMSPatientProfile_ex::OnTestListUndoCancelItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
	CString szSQL;	
	CString tmpStr, szMsg;	

	int retMsg = ShowMessageBox(_T("Do you want to cancel item?(Y/N)"), MB_YESNO|MB_ICONWARNING|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return 0;
	int ret = 0;
	CString szStatus;
	CString szItemID, szNote;
	

	int row = m_wndTestList.GetCurSel();
	if(row < 0) return -1;


	szNote = _T("H\x1EE7y kh\xF4ng th\x1EF1\x63 hi\x1EC7n");

	for (int i =0; i < m_wndTestList.GetItemCount(); i++) 
	{
		if(m_wndTestList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			szItemID = m_wndTestList.GetItemText(i, 6);
			szStatus = m_wndTestList.GetItemText(i, 8);
			if(szStatus == _T("C"))
			{
				szSQL.Format(_T("UPDATE hms_testorderline ") \
					_T("SET hpcl_note='', hpcl_status='%s' ") \
					_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s' AND hpcl_status='C'"), m_szStatus, m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);

				szSQL.Format(_T("UPDATE lims_order_line ") \
					_T("SET limsol_note='', limsol_status='%s' ") \
					_T("WHERE limsol_orderid=%ld and limsol_itemid='%s' AND limsol_status='C'"), m_szStatus, m_nOrderID, szItemID);
				_tprintf(_T("\r\n%s"), szSQL);
				pMF->ExecSQL(szSQL);

				CString szEvent, szDesc;
				szEvent.Format(_T("Undo Cancel Item"));
				szDesc.Format(_T("[%ld]; %s"), m_nOrderID, szItemID);		
				pMF->SystemLog(szEvent, szDesc);
			}
			
		}
			
	}
	
	//OnTestListLoadData();

	return ret;
}


int CLIMSPatientProfile_ex::OnResultCheckValue()
{
	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0 && m_szStatus == _T("T"))
		return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndTestList.SetItemText(nSel, 7, _T("Y"));

	
	return 0;
}

/*void CLIMSPatientProfile_ex::OnFromDateChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnFromDateSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnFromDateKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnFromDateCheckValue(){
	m_bFound = false;
	OnOrderListLoadData();
	return 0;
} 
/*void CLIMSPatientProfile_ex::OnToDateChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnToDateSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnToDateKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnToDateCheckValue(){
	m_bFound = false;
	OnOrderListLoadData();
	return 0;
} 
void CLIMSPatientProfile_ex::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CLIMSPatientProfile_ex::OnDeptSelendok(){
	 
}
/*void CLIMSPatientProfile_ex::OnDeptSetfocus(){
	
}*/
/*void CLIMSPatientProfile_ex::OnDeptKillfocus(){
	
}*/
long CLIMSPatientProfile_ex::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		_T("WHERE sd_type = 'DT' %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CLIMSPatientProfile_ex::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSPatientProfile_ex::OnSearchNameChange(){
	
} */
/*void CLIMSPatientProfile_ex::OnSearchNameSetfocus(){
	
} */
/*void CLIMSPatientProfile_ex::OnSearchNameKillfocus(){
	
} */
int CLIMSPatientProfile_ex::OnSearchNameCheckValue(){

	m_bFound = false;
	OnOrderListLoadData();
	return 1;
} 
void CLIMSPatientProfile_ex::OnWatingSelect()
{
	m_bFound = false;
	m_nSearchFlag = SEARCH_DATE;
	OnOrderListLoadData();
}
void CLIMSPatientProfile_ex::OnSamplingSelect()
{	
	m_bFound = false;
	m_nSearchFlag = SEARCH_DATE;
	OnOrderListLoadData();
}
void CLIMSPatientProfile_ex::OnReceivingSelect(){
	m_bFound = false;
	m_nSearchFlag = SEARCH_DATE;
	OnOrderListLoadData();	
}
void CLIMSPatientProfile_ex::OnUploadedSelect()
{
	return;
	m_bFound = false;
	m_nSearchFlag = SEARCH_DATE;
	OnOrderListLoadData();
}

void CLIMSPatientProfile_ex::OnUpdateResult()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return;
	CString szSQL, szObjectType, szPayment, tmpStr;
	CRecord rs(&pMF->m_db);
	double nTotalAmount=0;


	if(!pMF->CheckPermission(_T("01"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	pMF->m_szDeptPatient = m_szDepartment;
	pMF->m_nRoomID = ToInt(m_szRoom);
	pMF->m_nDocumentNo = m_nDocumentNo;

	if(pMF->m_szConfirmResult == _T("Y") && m_szStatus == _T("T"))
	{
		ShowMessageBox(_T("Ket qua da duoc xac nhan. Khong cho phep cap nhat lai"), MB_OK);
		return;
	}
	if(m_szStatus != _T("S") && m_szStatus != _T("P") && m_szStatus != _T("T"))
	{
		ShowMessageBox(_T("Can not manipulate the current status."), MB_OK);
		return;
	}
	
	szSQL.Format(_T("hms_fee_create(%ld, '%s', '%s') "), m_nDocumentNo, _T("T"), pMF->GetModuleID());
	pMF->ExecDML(szSQL);
	
		
	szSQL.Format(_T("SELECT ho_type as objecttype from hms_doc left join hms_object on(ho_id=hd_object) where hd_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("objecttype"), szObjectType);

	
	//Kiem tra neu la benh nhan dich vu thi phai thu phi truoc
	
	if(pMF->m_szFreePaymentCostExam ==_T("Y"))
	{
		if(szObjectType == _T("S") || szObjectType == _T("X"))
		{
			szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_docno=%ld and he_emergency='Y' "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() <= 0)
			{
				szSQL.Format(_T("SELECT hpc_payment as payment FROM hms_testorder WHERE hpc_docno=%ld AND hpc_orderid=%ld"), m_nDocumentNo,  m_nOrderID);
				rs.ExecSQL(szSQL);
				if(rs.IsEOF())
					return;
				rs.GetValue(_T("payment"), szPayment);
				if(szPayment != _T("P"))
				{
					ShowMessageBox(_T("This patients unpaid fee. Can not update result"), MB_OK);
					return;
				}
			}
		}
	}

	//Kiem tra neu la doi tuoc I,C ma co phan phi yc ko cho nhap kq
	if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
	{
		szSQL.Format(_T("SELECT sum(hfe_patdebt-hfe_patpaid) as Amount FROM hmsv_fee ") \
			         _T(" WHERE hfe_docno = %ld and (hfe_diffcost > 0 and hfe_insprice =0 and hfe_class ='E') and  hfe_group ='%s' "), m_nDocumentNo,m_szTestGroup);
		rs.ExecSQL(szSQL);	
		if(!rs.IsEOF())
		{		
			rs.GetValue(_T("Amount"), nTotalAmount);
		}
		
		szSQL.Format(_T("SELECT hpcl_itemid FROM hms_testorder ")\
				         _T("LEFT JOIN hms_testorderline ON(hpcl_orderid=hpc_orderid) ")\
						 _T("WHERE hpcl_orderid=%ld and hpc_groupid='%s'"), m_nOrderID, m_szTestGroup);
		

		rs.ExecSQL(szSQL);		
		
		if(!rs.IsEOF() && nTotalAmount > 0 && pMF->m_szFreePaymentCostExam == _T("Y"))			
		{
			ShowMessageBox(_T("This patients unpaid fee. Can not update result"), MB_OK);
			return;
		}
	}
	
} 
int CLIMSPatientProfile_ex::OnPrintLIMSPatientProfile()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("02"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	if(m_nOrderID <= 0) return 0;
	pMF->SetModuleID(_T("EM"));
	pMF->PrintTestResultX(m_nOrderID, false);
	pMF->SetModuleID(_T("LIMS"));
	return 0; 
}


void CLIMSPatientProfile_ex::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile_ex::OnTestGroupSelendok(){
	 
}
/*void CLIMSPatientProfile_ex::OnTestGroupSetfocus(){
	
}*/
/*void CLIMSPatientProfile_ex::OnTestGroupKillfocus(){
	
}*/
long CLIMSPatientProfile_ex::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadTestGroup(&m_wndTestGroup, m_szTestGroupKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and hfl_id='%s' "), m_szTestGroupKey);
	};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group ") \
		_T("WHERE  substr(hfg_id, 1, 2)='B1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CLIMSPatientProfile_ex::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientProfile_ex::OnApprovalSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	OnOrderListLoadData();
	
	/*if(pMF->m_szConfirmResult != _T("Y"))
		return;
	
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;

	if(!pMF->CheckPermission(_T("02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	CString szSQL, szStatus;

	CRecord rs(&pMF->m_db);
	CString szMsg;
	
	
	szMsg.Format(_T("Do you want to confirm and approval test result[%ld]?(Y/N)"), m_nBarcode);
	int nRet = ShowMessageBox(szMsg, MB_YESNO);
	if(nRet == IDNO)
		return;
	
	long nDocumentNo;
	m_nDocumentNo = str2long(m_wndOrderList.GetItemText(nSel, 7));
	nDocumentNo = m_nDocumentNo;
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
	m_nBarcode = str2long(m_wndOrderList.GetItemText(nSel, 4));
	m_szStatus = m_wndOrderList.GetItemText(nSel, 5);
	m_szTestGroup = m_wndOrderList.GetItemText(nSel, 6);

	nDocumentNo = m_nDocumentNo;
	szSQL.Format(_T("LIMS_APPROVAL(%ld, %ld, %ld, '%s') "), m_nDocumentNo,m_nOrderID, m_nBarcode, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{

		_tprintf(_T("\r\n%d: %s"), pMF->m_bAutoPrint, m_szObjectType);

		szSQL.Format(_T("SELECT ho_type FROM hms_doc left join hms_object on(ho_id=hd_object) ") \
			_T("WHERE hd_docno = %ld"), nDocumentNo);
		rs.ExecSQL(szSQL);
		
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("ho_type"), m_szObjectType);
		}

		if(pMF->m_bAutoPrint && (m_szObjectType == _T("I") || m_szObjectType == _T("C")))
		{
			OnPrintSelect();
		}

		//Duyet ket qua cu
		//if(pMF->m_szInPatient == _T("A") || pMF->m_szInPatient != _T("A"))
		//{
		//	m_wndOrderList.DeleteItem(nSel);
		//}
		//else
		{
			m_nState = 2;
			m_bFound = false;
			OnOrderListLoadData();
			m_wndOrderList.SetFocus();
			m_wndOrderList.SetCurSel(nSel);
			m_wndBarcode.SetFocus();
			m_wndBarcode.SetSel(0, m_wndBarcode.GetWindowTextLength());
			m_wndOrderList.SetItemBkColor(nSel, RGB(0, 128, 192));
			m_wndOrderList.SetItemTextColor(nSel, RGB(255, 255, 255));
		
		}
		
		if(m_szOrderDept == _T("C1.1") || m_szOrderDept == _T("C1.2") || m_szOrderDept == _T("C1.3"))
		{
		}
		else
		{
		//	OnPrintSelect();
		}
	}

	return;*/

} 
void CLIMSPatientProfile_ex::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrintLIMSPatientProfile();
}
void CLIMSPatientProfile_ex::OnTimerCheckSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CParaclinicalInformationView dlg(pMF);
	dlg.DoModal();
}

int CLIMSPatientProfile_ex::OnAddLIMSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSPatientProfile_ex::OnEditLIMSPatientProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSPatientProfile_ex::OnDeleteLIMSPatientProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  lims_patient WHERE limsp_docno=%ld"), m_nDocumentNo); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		//viet ham delete cac order cua benh nhan tai day. Xoa tat cac cac record trong lims_order va lims_order_line;

 		SetMode(VM_NONE); 
 		OnCancelLIMSPatientProfile();
		OnOrderListLoadData();
 	}
	return 0;
}
int CLIMSPatientProfile_ex::OnSaveLIMSPatientProfile(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_lims_patientTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE limsp_docno=%ld"), m_nDocumentNo); 
 		szSQL = m_lims_patientTbl.GetUpdateSQL(_T("limsp_docno,limsp_createdby,limsp_createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnOrderListLoadData();
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSPatientProfile_ex::OnCancelLIMSPatientProfile(){
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
int CLIMSPatientProfile_ex::OnLIMSPatientProfileListLoadData(){
	return 0;
}

/*
int CLIMSPatientProfile_ex::OnConfirmResultAll()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(pMF->m_szConfirmResult != _T("Y"))
		return 0;

	if(!pMF->CheckPermission(_T("05"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return -1;
	}
	
	int nRet = ShowMessageBox(_T("Do you want to confirm test order?(Y/N)"), MB_YESNO);
	if(nRet == IDNO)
		return 0;
	
	pMF->BeginWaitCursor();

	CString szSQL;

	if (m_szDepartmentType == _T("E"))
		szSQL.Format(_T("UPDATE hms_testorder SET hpc_status='T', hpc_practitioner='%s' WHERE hpc_status='P' "), pMF->GetCurrentUser(), m_nOrderID, m_nDocumentNo);
	else
		szSQL.Format(_T("UPDATE hms_test SET hpc_status='T', hpc_practitioner='%s' WHERE hpc_status='P' "), pMF->GetCurrentUser(), m_nOrderID, m_nDocumentNo);

	pMF->ExecSQL(szSQL);
	
	pMF->EndWaitCursor();
	return 0;
}

*/
#include "LIMSMergeResultDialog.h"

int CLIMSPatientProfile_ex::OnMergeResult()
{
	if(m_nOrderID <= 0)
		return 0;
	
	CLIMSMergeResultDialog dlg(this);
	dlg.m_nOrderID = m_nOrderID;

	dlg.m_szTestGroup = m_szTestGroup;
	if(dlg.DoModal() == IDOK)
	{
		int nSel = m_wndOrderList.GetCurSel();
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(nSel);
	}
	return 0;
}
#include "HMSOperationMaterialDialog.h"
#include ".\limspatientprofile.h"

int CLIMSPatientProfile_ex::OnAddMaterial()
{	
	return 0;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDate;
	if(m_nOrderID <=0 )
		return 0;
	CHMSOperationMaterialDialog dlg(this);

	szSQL.Format(_T("SELECT hpc_orderid as oid, hfg_name as name, hpc_instid as instid ")
				_T("FROM hms_testorder ") \
				_T("LEFT JOIN hms_fee_group ON(hpc_groupid=hfg_id) ")
				_T("WHERE hpc_orderid=%ld "), m_nOrderID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		dlg.m_szOperationName = rs.GetValue(_T("name"));

	if(CompareDateTime(m_szPerformDate, pMF->GetSysDateTime()) > 0)
		szDate = m_szPerformDate;
	else
		szDate = pMF->GetSysDateTime();

	dlg.m_szOrderDate = szDate;
	dlg.m_szFeeID = long2str(m_nOrderID);
	dlg.m_nRefIndex = m_nOrderID;
	dlg.m_szCreatedBy = pMF->GetCurrentUser();
	dlg.m_szOrderDept = pMF->m_szDept;	
	dlg.m_szType = _T("P");
	dlg.SetMode(VM_NONE);
	if(dlg.DoModal() == IDOK)
	{

	}
	return 0;
}
BOOL CLIMSPatientProfile_ex::PreTranslateMessage(MSG* pMsg)
{
	return CGuiView::PreTranslateMessage(pMsg);
	if(pMsg->message == WM_KEYDOWN ){
		if(pMsg->wParam == VK_F12)
		{
			OnApprovalSelect();
			return FALSE;
		}
		
		if(pMsg->wParam == VK_F2)
		{
			int nSel = m_wndTestList.GetCurSel();

			if(nSel >= 0 && (m_szStatus  == _T("T") ))
			{
				
				return true;
			}
			if(nSel > 0 && m_szGroupId.Left(3) == _T("B1G"))
			{
				CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
				CRecord rs(&pMF->m_db);
				CString szSQL, szItemId;
				
				szItemId = m_wndTestList.GetItemText(nSel, 6);
				szSQL.Format(_T("select count(*) from sys_sel where ss_id='blood_items' and ss_desc='%s' "),
					szItemId);
				rs.ExecSQL(szSQL);
				if(rs.GetIntValue() > 0)
				{
					m_wndTestList.CancelEditLabel();
				}
				return true;
			}
			
			
		}

		if(pMsg->wParam == VK_F3)
		{
			int nSel = m_wndTestList.GetCurSel();
			if(nSel >= 0 && m_szStatus  == _T("T"))
			{
				OnPrintSelect();
				return true;
			}
		}
		if(pMsg->wParam == VK_F5)
		{
			OnTestListSaveItem();
		}
		if(pMsg->wParam == _T('S'))
		{
			if(GetKeyState(VK_CONTROL)&0x8000)
			{
				OnTestListSaveItem();
			}

		}



	//	return TRUE;
	}
	return CGuiView::PreTranslateMessage(pMsg);
}



void CLIMSPatientProfile_ex::SyncOrderStatus(){
	return;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;
	long nOrderID;
	szSQL.Format(_T("SELECT limso_refidx as orderid,limso_status as status FROM lims_order WHERE limso_docno=%ld "), m_nDocumentNo);
//_debug(_T("\r\n%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("orderid"), nOrderID);
		rs.GetValue(_T("status"), szStatus);
		szSQL.Format(_T("UPDATE hms_testorder SET hpc_status='%s' WHERE hpc_orderid=%ld"), szStatus, nOrderID);

		pMF->ExecSQL(szSQL);
		rs.MoveNext();
	}
}

void CLIMSPatientProfile_ex::OnEditBarcode(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return;
	m_szStatus = GetCurrentStatus();

	if(m_szStatus == _T("R") || m_szStatus == _T("P") || m_szStatus == _T("T"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}
	CHMSEditBarcodeDialog dlg(this);
	dlg.m_nDocumentNo =m_nDocumentNo;
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nCurrentBarcode = m_nBarcode;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK){
		int nSel = m_wndOrderList.GetCurSel();
		CString tmpStr;
		tmpStr.Format(_T("%ld"), dlg.m_nNewBarcode);
		m_wndOrderList.SetItemText(nSel, 2, tmpStr);
	}
}


void CLIMSPatientProfile_ex::OnEditResult()
{
	return;
	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0 || m_szStatus == _T("T"))
		return;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
				CRecord rs(&pMF->m_db);
				CString szSQL, szItemId;
				
				szItemId = m_wndTestList.GetItemText(nSel, 6);
				szSQL.Format(_T("select count(*) from sys_sel where ss_id='blood_items' and ss_desc='%s' "),
					szItemId);
				rs.ExecSQL(szSQL);
				

	CLIMSEditResultDialog dlg(this);

	if(rs.GetIntValue() > 0)
	{
		dlg.m_bIsBloodGroup = true;
	}
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_szResult = m_wndTestList.GetItemText(nSel, 2);
	dlg.m_szNote = m_wndTestList.GetItemText(nSel, 3);
	dlg.m_szItemID = m_wndTestList.GetItemText(nSel, 6);
	
	if(dlg.DoModal() == IDOK){
		m_wndTestList.SetItemText(nSel, 2, dlg.m_szResult);
		m_wndTestList.SetItemText(nSel, 3, dlg.m_szNote);
	}
}
#include "GuiInputDataDialog.h"
void CLIMSPatientProfile_ex::OnAddNote(){
	CGuiInputDataDialog dlg(this, false);
	if(dlg.DoModal() == IDOK){
	}
}


void CLIMSPatientProfile_ex::OnUnapproval()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	int retMsg = ShowMessageBox(_T("Bạn có muốn hủy trạng thái nhận mẫu không?(Y/N)"), MB_YESNO|MB_ICONWARNING|MB_DEFBUTTON2);
	if(retMsg == IDNO)
	return;	
	szSQL.Format(_T("LIMS_ORDER_UNAPPROVAL_RECEIV(%ld, %ld, '%s') "), m_nOrderID, m_nBarcode, pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));
	
	//_msg(_T("%s"), szSQL);
	if(res <= 0)
	{
		ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời"));
	}
	else
	{
		OnOrderListLoadData();
		ShowMessageBox(_T("Hủy trạng thái nhận mẫu thành công"));
	}
	
}
CString CLIMSPatientProfile_ex::GetCurrentStatus()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hpc_status FROM hms_testorder WHERE hpc_docno=%ld and hpc_orderid=%ld"),
		m_nDocumentNo, m_nOrderID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpc_status"), szStatus);
	return szStatus;
}

void CLIMSPatientProfile_ex::Refresh(long nDocumentNo)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nDocumentNo = nDocumentNo;
	m_nOrderID = 0;
	m_nBarcode = 0;
	m_nSearchFlag = SEARCH_DOCUMENTNO;
	GetDataToScreen();
	m_bFound = true;
	OnOrderListLoadData();
	m_wndOrderList.SetCurSel(0);
	pMF->SetActivePane(1);
}

typedef struct sPatientInfo_ex
{
	CString szBarcode;
	CString szPName;
} PatientInfo_ex;

CArray<PatientInfo_ex, PatientInfo_ex> patientList;
int pos_ex = 0;
void CLIMSPatientProfile_ex::OnTimer(UINT_PTR nIDEvent)

{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*if(nIDEvent == 1)
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		bool found = false;
		CString szSQL;
		szSQL.Format(_T(" SELECT limso_barcode as barcode,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname) AS pname") \
		_T(" FROM") \
		_T("   (SELECT limso_docno,") \
		_T("     limso_barcode,") \
		_T("     extract(MINUTE FROM systimestamp-limso_orderdate) AS order_time") \
		_T("   FROM lims_order") \
		_T("   WHERE limso_orderdept     IN('TYC','PTTYC')") \
		_T("   AND limso_status          IN('O','S')") \
		_T("   AND trunc(limso_orderdate) = trunc(sysdate)") \
		_T("   ) tbl,") \
		_T("   hms_doc,") \
		_T("   hms_patient") \
		_T(" WHERE order_time >= 360") \
		_T(" AND hd_docno      = limso_docno") \
		_T(" AND hd_patientno  = hp_patientno"));

		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if(!rs.IsEOF())
		{
			KillTimer(1);
		}
		patientList.RemoveAll();
		while(!rs.IsEOF())
		{
			CString szBarcode;
			CString szName;
			CString szNotification;
			rs.GetValue(_T("barcode"), szBarcode);
			rs.GetValue(_T("pname"), szName);
			PatientInfo p;
			p.szBarcode = szBarcode;
			p.szPName = szName;
			patientList.Add(p);
			rs.MoveNext();
		}
		if(patientList.GetCount() > 0)
		{
			//Setup thoi gian hien thi giua cac benh nhan
			SetTimer(2, 5500, NULL);
		}
	
	}
	if(nIDEvent == 2)
	{
		CString szNotification;
		if(pos < patientList.GetCount())
		{
			PatientInfo p = patientList[pos];
			szNotification.Format(_T("Bệnh nhân [%s] số barcode [%s] quá thời gian"),
				p.szPName, p.szBarcode);
			m_wndTaskbarNotifier.Show(szNotification);
			pos++;
		}
		if (pos >= patientList.GetCount())
		{
			pos = 0;
			patientList.RemoveAll();
			KillTimer(2);
			//Setup thoi gian loc danh sach benh nhan > 1 tieng
			SetTimer(1, 1000*60*5, NULL);
		}
			
	}*/
}
int CLIMSPatientProfile_ex::OnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndOrderList.GetItemCount(); i++){
		m_wndOrderList.SetCheck(i, true);
	}
	return 0;
} 
int CLIMSPatientProfile_ex::OnUnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndOrderList.GetItemCount(); i++){
		m_wndOrderList.SetCheck(i, false);
	}
	return 0;
} 

int CLIMSPatientProfile_ex::OnUpdateSampleOrder(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	for (int i=0; i< m_wndOrderList.GetItemCount(); i++){
		if(m_wndOrderList.GetCheck(i))
		{
			m_nOrderID = str2long(m_wndOrderList.GetItemText(i, 0));
			m_nBarcode = str2long(m_wndOrderList.GetItemText(i, 4));
			szSQL.Format(_T("LIMS_ORDER_UPDATE_REC_ORDER(%ld, %ld,'%s') "), m_nOrderID, m_nBarcode, pMF->GetCurrentUser());
			//_msg(_T("%s"), szSQL);
			int ret = str2int(pMF->ExecDML(szSQL));

		}
	}

	OnOrderListLoadData();
	return 0;
} 