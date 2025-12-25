#include "PACSPatientProfile.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnAgeCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnRoomCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectAddNew();
}*/
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CPACSPatientProfile*)pWnd)->OnEmergencySelect();
}
static void _OnPerformRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnPerformRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformRoomSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomSelendok();
}
/*static void _OnPerformRoomSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
/*static void _OnPerformRoomKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
static long _OnPerformRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnPerformRoomLoadData();
}
/*static void _OnPerformRoomAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomAddNew();
}*/
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientProfile*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPACSPatientProfile*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnInputFormSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnInputFormSelect();
} 
static void _OnCaptureSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnCaptureSelect();
} 
static long _OnMaterialListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnMaterialListLoadData();
} 
static void _OnMaterialListDblClickFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnMaterialListDblClick();
} 
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientProfile*)pWnd)->OnMaterialListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnMaterialListDeleteItem();
} 
static void _OnAddMaterialSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnAddMaterialSelect();
} 
static int _OnAddPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnAddPACSPatientProfile();
} 
static int _OnEditPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnEditPACSPatientProfile();
} 
static int _OnDeletePACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnDeletePACSPatientProfile();
} 
static int _OnSavePACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnSavePACSPatientProfile();
} 
static int _OnCancelPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnCancelPACSPatientProfile();
} 
CPACSPatientProfile::CPACSPatientProfile(){

	m_nDlgWidth = 2005;
	m_nDlgHeight = 1029;
	SetDefaultValues();
}
CPACSPatientProfile::~CPACSPatientProfile(){
}
void CPACSPatientProfile::OnCreateComponents(){
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 390, 655);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 200, 55); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 205, 30, 290, 55);
	m_wndBarcode.Create(this,295, 30, 385, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 385, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 290, 115);
	m_wndSex.Create(this,295, 90, 385, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 385, 145); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 150, 110, 175);
	m_wndDiagnostic.Create(this,115, 150, 385, 175); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 180, 110, 205);
	m_wndOrderDate.Create(this,115, 180, 200, 205); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 180, 250, 205);
	m_wndDoctor.Create(this,255, 180, 385, 205); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 210, 110, 235);
	m_wndDepartment.Create(this,115, 210, 200, 235); 
	m_wndRoomLabel.Create(this, _T("Room"), 205, 210, 250, 235);
	m_wndRoom.Create(this,255, 210, 385, 235); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 240, 110, 265);
	m_wndObject.Create(this,115, 240, 385, 265); 
	m_wndEmergency.Create(this, _T("Emergency"), 300, 625, 385, 650);
	m_wndPerformRoomLabel.Create(this, _T("Perform Room"), 9, 270, 109, 295);
	m_wndPerformRoom.Create(this,114, 270, 384, 295); 
	m_wndOrderList.Create(this,10, 300, 385, 500); 
	m_wndTab.Create(this,395, 5, 1010, 620); 
	m_wndUpdate.Create(this, _T("&Update"), 395, 625, 485, 650);
	m_wndSave.Create(this, _T("&Save"), 490, 625, 580, 650);
	m_wndCancel.Create(this, _T("&Cancel"), 585, 625, 675, 650);
	m_wndPrint.Create(this, _T("&Print"), 680, 625, 770, 650);
	m_wndInputForm.Create(this, _T("&Input Form"), 775, 625, 865, 650);
	m_wndCapture.Create(this, _T("&Capture - F5"), 920, 625, 1010, 650);
	m_wndMaterialList.Create(this,10, 505, 385, 620); 
	m_wndAddMaterial.Create(this, _T("Add &Material"), 10, 625, 130, 650);

}
void CPACSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndBarcode.SetLimitText(1024);
	m_wndBarcode.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndDepartment.SetLimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndRoom.SetLimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndPerformRoom.SetCheckValue(true);
	m_wndPerformRoom.LimitText(1024);













}
void CPACSPatientProfile::OnSetWindowEvents(){
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
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndPerformRoom.SetEvent(WE_SELENDOK, _OnPerformRoomSelendokFnc);
	//m_wndPerformRoom.SetEvent(WE_SETFOCUS, _OnPerformRoomSetfocusFnc);
	//m_wndPerformRoom.SetEvent(WE_KILLFOCUS, _OnPerformRoomKillfocusFnc);
	m_wndPerformRoom.SetEvent(WE_SELCHANGE, _OnPerformRoomSelectChangeFnc);
	m_wndPerformRoom.SetEvent(WE_LOADDATA, _OnPerformRoomLoadDataFnc);
	//m_wndPerformRoom.SetEvent(WE_ADDNEW, _OnPerformRoomAddNewFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndInputForm.SetEvent(WE_CLICK, _OnInputFormSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
	m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
	m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
	m_wndMaterialList.AddEvent(1, _T("Delete"), _OnMaterialListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddMaterial.SetEvent(WE_CLICK, _OnAddMaterialSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSPatientProfileFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPACSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoom);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_TextEx(pDX, m_wndPerformRoom.GetDlgCtrlID(), m_szPerformRoomKey);

}
void CPACSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSPatientProfile::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szBarcode.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szAddress.Empty();
	m_szDiagnostic.Empty();
	m_szOrderDate.Empty();
	m_szDoctorKey.Empty();
	m_szDepartment.Empty();
	m_szRoom.Empty();
	m_szObjectKey.Empty();
	m_bEmergency=FALSE;
	m_szPerformRoomKey.Empty();

}
int CPACSPatientProfile::SetMode(int nMode){
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
/*void CPACSPatientProfile::OnDocumentNoChange(){
	
} */
/*void CPACSPatientProfile::OnDocumentNoSetfocus(){
	
} */
/*void CPACSPatientProfile::OnDocumentNoKillfocus(){
	
} */
int CPACSPatientProfile::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnBarcodeChange(){
	
} */
/*void CPACSPatientProfile::OnBarcodeSetfocus(){
	
} */
/*void CPACSPatientProfile::OnBarcodeKillfocus(){
	
} */
int CPACSPatientProfile::OnBarcodeCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnPatientNameChange(){
	
} */
/*void CPACSPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CPACSPatientProfile::OnPatientNameKillfocus(){
	
} */
int CPACSPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnAgeChange(){
	
} */
/*void CPACSPatientProfile::OnAgeSetfocus(){
	
} */
/*void CPACSPatientProfile::OnAgeKillfocus(){
	
} */
int CPACSPatientProfile::OnAgeCheckValue(){
	return 0;
} 
void CPACSPatientProfile::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnSexSelendok(){
	 
}
/*void CPACSPatientProfile::OnSexSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnSexKillfocus(){
	
}*/
long CPACSPatientProfile::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientProfile::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientProfile::OnAddressChange(){
	
} */
/*void CPACSPatientProfile::OnAddressSetfocus(){
	
} */
/*void CPACSPatientProfile::OnAddressKillfocus(){
	
} */
int CPACSPatientProfile::OnAddressCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnDiagnosticChange(){
	
} */
/*void CPACSPatientProfile::OnDiagnosticSetfocus(){
	
} */
/*void CPACSPatientProfile::OnDiagnosticKillfocus(){
	
} */
int CPACSPatientProfile::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnOrderDateChange(){
	
} */
/*void CPACSPatientProfile::OnOrderDateSetfocus(){
	
} */
/*void CPACSPatientProfile::OnOrderDateKillfocus(){
	
} */
int CPACSPatientProfile::OnOrderDateCheckValue(){
	return 0;
} 
void CPACSPatientProfile::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnDoctorSelendok(){
	 
}
/*void CPACSPatientProfile::OnDoctorSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnDoctorKillfocus(){
	
}*/
long CPACSPatientProfile::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientProfile::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientProfile::OnDepartmentChange(){
	
} */
/*void CPACSPatientProfile::OnDepartmentSetfocus(){
	
} */
/*void CPACSPatientProfile::OnDepartmentKillfocus(){
	
} */
int CPACSPatientProfile::OnDepartmentCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnRoomChange(){
	
} */
/*void CPACSPatientProfile::OnRoomSetfocus(){
	
} */
/*void CPACSPatientProfile::OnRoomKillfocus(){
	
} */
int CPACSPatientProfile::OnRoomCheckValue(){
	return 0;
} 
void CPACSPatientProfile::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnObjectSelendok(){
	 
}
/*void CPACSPatientProfile::OnObjectSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnObjectKillfocus(){
	
}*/
long CPACSPatientProfile::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientProfile::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CPACSPatientProfile::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CPACSPatientProfile::OnPerformRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnPerformRoomSelendok(){
	 
}
/*void CPACSPatientProfile::OnPerformRoomSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnPerformRoomKillfocus(){
	
}*/
long CPACSPatientProfile::OnPerformRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformRoom.IsSearchKey() && !m_szPerformRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformRoomKey
};
	m_wndPerformRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientProfile::OnPerformRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSPatientProfile::OnOrderListDblClick(){
	
} 
void CPACSPatientProfile::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSPatientProfile::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSPatientProfile::OnOrderListLoadData(){
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
void CPACSPatientProfile::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnInputFormSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnCaptureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnMaterialListDblClick(){
	
} 
void CPACSPatientProfile::OnMaterialListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSPatientProfile::OnMaterialListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSPatientProfile::OnMaterialListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMaterialList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterialList.AddItems(
		rs.MoveNext();
	}
	m_wndMaterialList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPACSPatientProfile::OnAddMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSPatientProfile::OnAddPACSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSPatientProfile::OnEditPACSPatientProfile(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPatientProfile::OnDeletePACSPatientProfile(){
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
 		OnCancelPACSPatientProfile();
 	}
	return 0;
}
int CPACSPatientProfile::OnSavePACSPatientProfile(){
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
 		//OnPACSPatientProfileListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSPatientProfile::OnCancelPACSPatientProfile(){
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
int CPACSPatientProfile::OnPACSPatientProfileListLoadData(){
	return 0;
}
