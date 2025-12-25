#include "LIMSPatientProfile.h"
#include "MainFrm.h"
/*static void _OnSIDChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSIDChange();
} */
/*static void _OnSIDSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSIDSetfocus();} */ 
/*static void _OnSIDKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSIDKillfocus();
} */
static int _OnSIDCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnSIDCheckValue();
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
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnSexAddNew();
}*/
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
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDoctorAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnRoomAddNew();
}*/
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
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientProfile* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnObjectAddNew();
}*/
static void _OnEmergecySelectFnc(CWnd *pWnd){
	 ((CLIMSPatientProfile*)pWnd)->OnEmergecySelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddEntrySelectFnc(CWnd *pWnd){
	CLIMSPatientProfile *pVw = (CLIMSPatientProfile *)pWnd;
	pVw->OnAddEntrySelect();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientProfile *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile *)pWnd)->OnDateCheckValue();
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
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientProfile*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientProfile*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientProfile*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientProfile*)pWnd)->OnPatientListDeleteItem();
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
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLIMSPatientProfile::~CLIMSPatientProfile(){
}
void CLIMSPatientProfile::OnCreateComponents(){
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 1024, 720);
	m_wndSearchInformation.Create(this, _T("Search Information"), 10, 660, 415, 715);
	m_wndSIDLabel.Create(this, _T("SID"), 10, 30, 110, 55);
	m_wndSID.Create(this,115, 30, 200, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 415, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 290, 115);
	m_wndSex.Create(this,295, 90, 416, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 416, 145); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 150, 110, 175);
	m_wndDiagnostic.Create(this,115, 150, 416, 175); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 180, 110, 205);
	m_wndOrderDate.Create(this,115, 180, 200, 205); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 180, 290, 205);
	m_wndDoctor.Create(this,295, 180, 416, 205); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 210, 110, 235);
	m_wndDepartment.Create(this,115, 210, 416, 235); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 240, 110, 265);
	m_wndRoom.Create(this,115, 240, 416, 265); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 10, 270, 110, 295);
	m_wndPerformDate.Create(this,115, 270, 200, 295); 
	m_wndPerformByLabel.Create(this, _T("Perform By"), 205, 270, 290, 295);
	m_wndPerformBy.Create(this,295, 270, 416, 295); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 300, 110, 325);
	m_wndObject.Create(this,115, 300, 200, 325); 
	m_wndEmergecy.Create(this, _T("Emergecy"), 205, 300, 290, 325);
	m_wndAdd.Create(this, _T("&Add"), 20, 330, 95, 355);
	m_wndEdit.Create(this, _T("&Edit"), 100, 330, 175, 355);
	m_wndDelete.Create(this, _T("&Delete"), 180, 330, 255, 355);
	m_wndSave.Create(this, _T("&Save"), 260, 330, 335, 355);
	m_wndCancel.Create(this, _T("&Cancel"), 340, 330, 415, 355);
	m_wndAddEntry.Create(this, _T("&Add Entry"), 295, 300, 416, 325);
	m_wndDateLabel.Create(this, _T("Date"), 15, 685, 95, 710);
	m_wndDate.Create(this,100, 685, 185, 710); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 190, 685, 280, 710);
	m_wndSearchName.Create(this,285, 685, 412, 710); 
	m_wndPatientList.Create(this,10, 360, 415, 655); 
	m_wndTestList.Create(this,420, 30, 1020, 715); 

}
void CLIMSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(15);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(15);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndRoom.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndPerformBy.SetLimitText(15);
	m_wndPerformBy.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPatientList.InsertColumn(0, _T("SID"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Age"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);


	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 200);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 65);
	m_wndTestList.InsertColumn(3, _T("Norm Index"), CFMT_TEXT, 120);
	m_wndTestList.InsertColumn(4, _T("Result"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 70);
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
	//m_wndSID.SetEvent(WE_CHANGE, _OnSIDChangeFnc);
	//m_wndSID.SetEvent(WE_SETFOCUS, _OnSIDSetfocusFnc);
	//m_wndSID.SetEvent(WE_KILLFOCUS, _OnSIDKillfocusFnc);
	m_wndSID.SetEvent(WE_CHECKVALUE, _OnSIDCheckValueFnc);
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	//m_wndPerformBy.SetEvent(WE_CHANGE, _OnPerformByChangeFnc);
	//m_wndPerformBy.SetEvent(WE_SETFOCUS, _OnPerformBySetfocusFnc);
	//m_wndPerformBy.SetEvent(WE_KILLFOCUS, _OnPerformByKillfocusFnc);
	m_wndPerformBy.SetEvent(WE_CHECKVALUE, _OnPerformByCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndEmergecy.SetEvent(WE_CLICK, _OnEmergecySelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddEntry.SetEvent(WE_CLICK, _OnAddEntrySelectFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSPatientProfileFnc, 0, 'T', VK_CONTROL);

}
void CLIMSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSID.GetDlgCtrlID(), m_nSID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndPerformBy.GetDlgCtrlID(), m_szPerformBy);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndEmergecy.GetDlgCtrlID(), m_bEmergecy);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CLIMSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("limso_oid"), m_nSID);
	rs.GetValue(_T("limso_object"), m_szObjectKey);
	rs.GetValue(_T("limso_emergcy"), m_bEmergecy);
	rs.GetValue(_T("limso_pname"), m_szPatientName);
	rs.GetValue(_T("limso_age"), m_szAge);
	rs.GetValue(_T("limso_sex"), m_szSexKey);
	rs.GetValue(_T("limso_address"), m_szAddress);
	rs.GetValue(_T("limso_diagnostic"), m_szDiagnostic);
	rs.GetValue(_T("limso_doctorid"), m_szDoctorKey);
	rs.GetValue(_T("limso_orderdate"), m_szOrderDate);
	rs.GetValue(_T("limso_orderdept"), m_szDepartmentKey);
	rs.GetValue(_T("limso_orderroom"), m_szRoomKey);
	rs.GetValue(_T("limso_performdate"), m_szPerformDate);
	rs.GetValue(_T("limso_performerid"), m_szPerformBy);

}
void CLIMSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_lims_orderTbl.SetValue(_T("limso_createdby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_createddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_oid"), m_nSID);
	m_lims_orderTbl.SetValue(_T("limso_object"), m_szObjectKey);
	m_lims_orderTbl.SetValue(_T("limso_emergcy"), m_bEmergecy);
	m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
	m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
	m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSexKey);
	m_lims_orderTbl.SetValue(_T("limso_address"), m_szAddress);
	m_lims_orderTbl.SetValue(_T("limso_diagnostic"), m_szDiagnostic);
	m_lims_orderTbl.SetValue(_T("limso_doctorid"), m_szDoctorKey);
	m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
	m_lims_orderTbl.SetValue(_T("limso_orderdept"), m_szDepartmentKey);
	m_lims_orderTbl.SetValue(_T("limso_orderroom"), m_szRoomKey);
	m_lims_orderTbl.SetValue(_T("limso_performdate"), m_szPerformDate);
	m_lims_orderTbl.SetValue(_T("limso_performerid"), m_szPerformBy);

}
void CLIMSPatientProfile::SetDefaultValues(){

	m_nSID=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szAddress.Empty();
	m_szDiagnostic.Empty();
	m_szOrderDate.Empty();
	m_szDoctorKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szPerformDate.Empty();
	m_szPerformBy.Empty();
	m_szObjectKey.Empty();
	m_bEmergecy=FALSE;
	m_szDate.Empty();
	m_szSearchName.Empty();

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
/*void CLIMSPatientProfile::OnSIDChange(){
	
} */
/*void CLIMSPatientProfile::OnSIDSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnSIDKillfocus(){
	
} */
int CLIMSPatientProfile::OnSIDCheckValue(){
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
void CLIMSPatientProfile::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnSexSelendok(){
	 
}
/*void CLIMSPatientProfile::OnSexSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnSexKillfocus(){
	
}*/
long CLIMSPatientProfile::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
void CLIMSPatientProfile::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnDoctorSelendok(){
	 
}
/*void CLIMSPatientProfile::OnDoctorSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnDoctorKillfocus(){
	
}*/
long CLIMSPatientProfile::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientProfile::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnDepartmentSelendok(){
	 
}
/*void CLIMSPatientProfile::OnDepartmentSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnDepartmentKillfocus(){
	
}*/
long CLIMSPatientProfile::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientProfile::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnRoomSelendok(){
	 
}
/*void CLIMSPatientProfile::OnRoomSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnRoomKillfocus(){
	
}*/
long CLIMSPatientProfile::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
void CLIMSPatientProfile::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnObjectSelendok(){
	 
}
/*void CLIMSPatientProfile::OnObjectSetfocus(){
	
}*/
/*void CLIMSPatientProfile::OnObjectKillfocus(){
	
}*/
long CLIMSPatientProfile::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientProfile::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CLIMSPatientProfile::OnEmergecySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CLIMSPatientProfile::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientProfile::OnAddEntrySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CLIMSPatientProfile::OnDateChange(){
	
} */
/*void CLIMSPatientProfile::OnDateSetfocus(){
	
} */
/*void CLIMSPatientProfile::OnDateKillfocus(){
	
} */
int CLIMSPatientProfile::OnDateCheckValue(){
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
void CLIMSPatientProfile::OnPatientListDblClick(){
	
} 
void CLIMSPatientProfile::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientProfile::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientProfile::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("SID")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
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
	m_wndTestList.DeleteAllItems(); 
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
