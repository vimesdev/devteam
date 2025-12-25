#include "HMSTreatmentHistory.h"
#include "MainFrm.h"
#include "GuiFont.h"
/*static void _OnLastNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameChange();
} */
/*static void _OnLastNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameSetfocus();} */ 
/*static void _OnLastNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameKillfocus();
} */
static int _OnLastNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnLastNameCheckValue();
} 
/*static void _OnMidNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameChange();
} */
/*static void _OnMidNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameSetfocus();} */ 
/*static void _OnMidNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameKillfocus();
} */
static int _OnMidNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnMidNameCheckValue();
} 
/*static void _OnFirstNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameChange();
} */
/*static void _OnFirstNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameSetfocus();} */ 
/*static void _OnFirstNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameKillfocus();
} */
static int _OnFirstNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnFirstNameCheckValue();
} 


/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnYOBCheckValue();
} 

/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnVillageAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTreatmentHistory *pVw = (CHMSTreatmentHistory *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistory*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistory*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnListPatientDeleteItem();
} 
static long _OnListDocumentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory*)pWnd)->OnListDocumentLoadData();
} 
static void _OnListDocumentDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistory*)pWnd)->OnListDocumentDblClick();
} 
static void _OnListDocumentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistory*)pWnd)->OnListDocumentSelectChange(nOldItem, nNewItem);
} 
static int _OnListDocumentDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnListDocumentDeleteItem();
} 
static int _OnAddHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnAddHMSTreatmentHistory();
} 
static int _OnEditHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnEditHMSTreatmentHistory();
} 
static int _OnDeleteHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnDeleteHMSTreatmentHistory();
} 
static int _OnSaveHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnSaveHMSTreatmentHistory();
} 
static int _OnCancelHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnCancelHMSTreatmentHistory();
} 

static int _OnPatientNoCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSTreatmentHistory *)pWnd)->OnPatientNoCheckValue();
}



CHMSTreatmentHistory::CHMSTreatmentHistory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentHistory::~CHMSTreatmentHistory(){
}
void CHMSTreatmentHistory::OnCreateComponents()
{
	/*m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 800, 150);
	m_wndGroupPatient.Create(this, _T("Patient List"), 5, 155, 800, 405);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 410, 800, 590);

	m_wndPatientNoLabel.Create(this, _T("Mã BN"), 10, 31, 100, 56);
	m_wndPatientNo.Create(this,105, 31, 360, 56); 
	m_wndDocumentNoLabel.Create(this, _T("S? h? so"), 365, 31, 455, 56);
	m_wndDocumentNo.Create(this,460, 31, 720, 56);

	m_wndLastNameLabel.Create(this, _T("First Name"), 10, 30, 100, 55);
	m_wndLastName.Create(this,105, 30, 185, 55); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 190, 30, 275, 55);
	m_wndMidName.Create(this,280, 30, 360, 55); 
	m_wndFirstNameLabel.Create(this, _T("Last Name"), 365, 30, 455, 55);
	m_wndFirstName.Create(this,460, 30, 540, 55); 
	m_wndYOBLabel.Create(this, _T("YOB"), 545, 30, 625, 55);
	m_wndYOB.Create(this,630, 30, 720, 55); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 60, 100, 85);
	m_wndProvince.Create(this,105, 60, 360, 85); 
	m_wndDistrictLabel.Create(this, _T("District"), 365, 60, 455, 85);
	m_wndDistrict.Create(this,460, 60, 720, 85); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 90, 100, 115);
	m_wndVillage.Create(this,105, 90, 360, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 365, 90, 455, 115);
	m_wndDoctor.Create(this,460, 90, 720, 115); 
	m_wndExamineLabel.Create(this, _T("Examine"), 10, 120, 100, 145);
	m_wndExamine.Create(this,105, 120, 360, 145); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 365, 120, 455, 145);
	m_wndDiagnostic.Create(this,460, 120, 720, 145); 
	m_wndSearch.Create(this, _T("Search"), 725, 120, 795, 145);
	m_wndListPatient.Create(this,10, 180, 795, 400); 
	m_wndListDocument.Create(this,10, 435, 795, 585); 

	m_wndDocumentNoLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDocumentNoLabel.ShowWindow(SW_HIDE);
	m_wndDocumentNoLabel.EnableWindow(FALSE);
	m_wndDocumentNo.Create(this, 0, 0, 0, 0);
	m_wndDocumentNo.ShowWindow(SW_HIDE);
	m_wndDocumentNo.EnableWindow(FALSE);*/

	m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 800, 181);
	m_wndGroupPatient.Create(this, _T("Patient List"), 5, 188, 800, 406);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 406, 800, 586);
	//m_wndDocumentNo.Create(this,0, 37, 0, 37); 
	//m_wndDocumentNoLabel.Create(this, _T("_T("")"), 0, 37, 0, 37);
	m_wndPatientNoLabel.Create(this, _T("Mã BN"), 10, 31, 100, 56);
	m_wndPatientNo.Create(this,105, 31, 360, 56); 

	m_wndDocumentNoLabel.Create(this, _T("Số hồ sơ"), 365, 31, 455, 56);
	m_wndDocumentNo.Create(this,460, 31, 720, 56); 

	m_wndLastNameLabel.Create(this, _T("First Name"), 10, 61, 100, 86);
	m_wndLastName.Create(this,105, 61, 185, 86); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 190, 61, 275, 86);
	m_wndMidName.Create(this,280, 61, 360, 86); 
	m_wndFirstNameLabel.Create(this, _T("Last Name"), 365, 61, 455, 86);
	m_wndFirstName.Create(this,460, 61, 540, 86); 
	m_wndYOBLabel.Create(this, _T("YOB"), 545, 61, 625, 86);
	m_wndYOB.Create(this,630, 61, 720, 86); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 91, 100, 116);
	m_wndProvince.Create(this,105, 91, 360, 116); 
	m_wndDistrictLabel.Create(this, _T("District"), 365, 91, 455, 116);
	m_wndDistrict.Create(this,460, 91, 720, 116); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 121, 100, 146);
	m_wndVillage.Create(this,105, 121, 360, 146); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 365, 121, 455, 146);
	m_wndDoctor.Create(this,460, 121, 720, 146); 
	m_wndSearch.Create(this, _T("Search"), 725, 31, 795, 175);
	m_wndExamineLabel.Create(this, _T("Examine"), 10, 151, 100, 176);
	m_wndExamine.Create(this,105, 151, 360, 176); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 365, 151, 455, 176);
	m_wndDiagnostic.Create(this,460, 151, 720, 176); 
	m_wndListPatient.Create(this,10, 213, 795, 401); 
	m_wndListDocument.Create(this,10, 431, 795, 581);

}
void CHMSTreatmentHistory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndLastName.SetLimitText(15);
	m_wndLastName.SetInitCap(true);
	//m_wndLastName.SetCheckValue(true);	
	m_wndMidName.SetLimitText(15);
	//m_wndMidName.SetCheckValue(true);
	m_wndMidName.SetInitCap(true);
	m_wndFirstName.SetLimitText(15);
	//m_wndFirstName.SetCheckValue(true);
	m_wndFirstName.SetInitCap(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	//m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(35);
	m_wndExamine.SetLimitText(254);
	m_wndExamine.SetCheckValue(false);
	m_wndDiagnostic.SetLimitText(254);
	m_wndDiagnostic.SetCheckValue(false);



	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndProvince.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);



	
//	m_wndProvince.InsertColumn(2, _T("Code"), CFMT_TEXT, 100);

	m_wndListPatient.InsertColumn(0, _T("PatientNo"), CFMT_NUMBER, 80);
	m_wndListPatient.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndListPatient.InsertColumn(2, _T("Nam sinh"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(4, _T("Ethnic"), CFMT_TEXT, 70);
	m_wndListPatient.InsertColumn(5, _T("Province"), CFMT_TEXT, 350);


	m_wndListDocument.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 30);
	m_wndListDocument.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndListDocument.InsertColumn(2, _T("Dept"), CFMT_TEXT, 150);
	m_wndListDocument.InsertColumn(3, _T("Admit Date"), CFMT_DATE, 80);
	m_wndListDocument.InsertColumn(4, _T("End Date"), CFMT_DATE, 80);
	m_wndListDocument.InsertColumn(5, _T("Diagnostic"), CFMT_TEXT, 200);
	m_wndListDocument.InsertColumn(6, _T("Patient"), CFMT_TEXT, 0);
	m_wndListDocument.InsertColumn(7, _T("RoomID"), CFMT_TEXT, 0);
	m_wndListDocument.InsertColumn(8, _T("RefIndex"), CFMT_TEXT, 0);
	m_wndListDocument.InsertColumn(9, _T("Doctor"), CFMT_TEXT, 80);
	SetMode(VM_EDIT);

}
void CHMSTreatmentHistory::OnSetWindowEvents(){
	//m_wndLastName.SetEvent(WE_CHANGE, _OnLastNameChangeFnc);
	//m_wndLastName.SetEvent(WE_SETFOCUS, _OnLastNameSetfocusFnc);
	//m_wndLastName.SetEvent(WE_KILLFOCUS, _OnLastNameKillfocusFnc);
	m_wndLastName.SetEvent(WE_CHECKVALUE, _OnLastNameCheckValueFnc);
	//m_wndMidName.SetEvent(WE_CHANGE, _OnMidNameChangeFnc);
	//m_wndMidName.SetEvent(WE_SETFOCUS, _OnMidNameSetfocusFnc);
	//m_wndMidName.SetEvent(WE_KILLFOCUS, _OnMidNameKillfocusFnc);
	m_wndMidName.SetEvent(WE_CHECKVALUE, _OnMidNameCheckValueFnc);
	//m_wndFirstName.SetEvent(WE_CHANGE, _OnFirstNameChangeFnc);
	//m_wndFirstName.SetEvent(WE_SETFOCUS, _OnFirstNameSetfocusFnc);
	//m_wndFirstName.SetEvent(WE_KILLFOCUS, _OnFirstNameKillfocusFnc);
	m_wndFirstName.SetEvent(WE_CHECKVALUE, _OnFirstNameCheckValueFnc);
//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);

//m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
	//m_wndExamine.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
	//m_wndExamine.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
	m_wndExamine.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);

	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListDocument.SetEvent(WE_SELCHANGE, _OnListDocumentSelectChangeFnc);
	m_wndListDocument.SetEvent(WE_LOADDATA, _OnListDocumentLoadDataFnc);
	m_wndListDocument.SetEvent(WE_DBLCLICK, _OnListDocumentDblClickFnc);
	m_wndListDocument.AddEvent(1, _T("Show patient document"), _OnListDocumentDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);	
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);

	CGuiFont font;
	m_wndPatientNo.SetFont(&font);

	SetWindowFont(&m_wndPatientNo, GetFaceName(), GetFaceSize()+2, true);
	m_wndPatientNo.SetTextColor(RGB(255, 0, 0));

	m_wndDocumentNo.SetFont(&font);

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

}
void CHMSTreatmentHistory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLastName.GetDlgCtrlID(), m_szLastName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndExamine.GetDlgCtrlID(), m_szExamine);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);

}
void CHMSTreatmentHistory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentHistory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentHistory::SetDefaultValues(){

	m_szLastName.Empty();
	m_szMidName.Empty();
	m_szFirstName.Empty();
	m_nDocumentNo=0;
	m_nPatientNo=0;
	m_szProvinceKey.Empty();
	m_nYOB=0;
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDoctorKey.Empty();
	m_szExamine.Empty();
	m_szDiagnostic.Empty();

}
int CHMSTreatmentHistory::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CHMSTreatmentHistory::OnLastNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnLastNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnLastNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnLastNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnMidNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnMidNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnMidNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnMidNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnFirstNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnFirstNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnFirstNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnFirstNameCheckValue(){
	return 0;
} 

/*void CHMSTreatmentHistory::OnYOBChange(){
	
} */
/*void CHMSTreatmentHistory::OnYOBSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnYOBKillfocus(){
	
} */
int CHMSTreatmentHistory::OnYOBCheckValue(){
	return 0;
} 

/*void CHMSTreatmentHistory::OnDocumentNoChange(){
	
} */
/*void CHMSTreatmentHistory::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnDocumentNoKillfocus(){
	
} */
int CHMSTreatmentHistory::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSTreatmentHistory::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnProvinceSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnProvinceSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnProvinceKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnProvinceLoadData(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	return pMF->LoadProvillList(&m_wndProvince, m_szProvinceKey);

	m_wndProvince.DeleteAllItems(); 
//	m_wndProvince.SetSearcToHext(TRUE);
	int nCount = 0;
	if(m_wndProvince.IsSearchKey() && !m_szProvinceKey.IsEmpty()){
		CString szSQL;
		szSQL.Format(_T("select sv_id as id, sv_name||' - '||sd_name||' - '||sp_name as name, \
					sv_wrd||sd_wrd||sp_wrd as srch \
					from sys_prov left join sys_dist on(sd_provid=sp_id) \
					left join sys_vill on(sv_provid=sd_provid and sv_distid=sd_id) \
					where sv_id=%ld \
					order by sp_name, sd_name, sv_name "), ToLong(m_szProvinceKey));
	//	_msg(_T("%s: %s"), szSQL, m_szProvinceKey);
		CRecord rs(&pMF->m_db);
		nCount = rs.ExecSQL(szSQL);
		if(nCount > 0)
		{
			m_wndProvince.AddItems(
				rs.GetValue(_T("srch")), 
				rs.GetValue(_T("name")), 
				rs.GetValue(_T("id")), 
				NULL);
		}		
	}	
	return nCount;
}
/*void CHMSTreatmentHistory::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentHistory::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnDistrictSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnDistrictSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnDistrictKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDistrictList(&m_wndDistrict, m_szProvinceKey, m_szDistrictKey);

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
/*void CHMSTreatmentHistory::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentHistory::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnVillageSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnVillageSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnVillageKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadVillageList(&m_wndVillage, m_szProvinceKey, m_szDistrictKey, m_szVillageKey);

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
/*void CHMSTreatmentHistory::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentHistory::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnDoctorSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnDoctorSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnDoctorKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey, pMF->m_szDept);
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentHistory::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentHistory::OnExamineChange(){
	
} */
/*void CHMSTreatmentHistory::OnExamineSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnExamineKillfocus(){
	
} */
int CHMSTreatmentHistory::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnDiagnosticChange(){
	
} */
/*void CHMSTreatmentHistory::OnDiagnosticSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnDiagnosticKillfocus(){
	
} */
int CHMSTreatmentHistory::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSTreatmentHistory::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListPatientLoadData();
} 
void CHMSTreatmentHistory::OnListPatientDblClick(){
	
} 
void CHMSTreatmentHistory::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndListPatient.GetCurSel();
	if (nSel < 0) return ;

	m_nPatientNo =ToLong(m_wndListPatient.GetItemText(nSel, 0));
	OnListDocumentLoadData();
	
} 
int CHMSTreatmentHistory::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistory::OnListPatientLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	m_wndListPatient.BeginLoad(); 
	m_wndListPatient.DeleteAllItems(); 
	int nCount = 0;
	tmpStr.Empty();
	

	if (m_nPatientNo > 0)
	{
		szWhere.Format(_T(" and hp_patientno =%ld "), m_nPatientNo);
	}

	if (m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" and hd_docno =%ld "), m_nDocumentNo);
	}

	else
	{	
		if(!m_szLastName.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and trim(hp_surname) =trim('%s') "), m_szLastName);		
		}		
		if (!m_szMidName.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and trim(hp_midname) =trim('%s') "), m_szMidName);
				
		}		

		if (!m_szFirstName.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and  trim(hp_firstname) =trim('%s') "), m_szFirstName);
		}
		
		if (!m_szProvinceKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and  hp_provid=%ld "), str2long(m_szProvinceKey));
		}

		if (!m_szDistrictKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and  hp_distid=%ld "), str2long(m_szDistrictKey));
		}
			
		if (!m_szVillageKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and  hp_villid=%ld "), str2long(m_szVillageKey));
		}


		


	}

	if(m_nYOB > 0)
	{
		szWhere.AppendFormat(_T(" and extract(year from hp_birthdate) = %ld "), m_nYOB);
	}
	if(!m_szDiagnostic.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hd_maindisease) like(chr(37)||lower('%s')||chr(37)) "), m_szDiagnostic);
	}

	if (!m_szDoctorKey.IsEmpty())
	{
			szWhere.AppendFormat(_T(" and  hd_doctor='%s' "), m_szDoctorKey);
	}
	
	szWhere.AppendFormat(_T(" and NVL(hd_rank, 0) NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 58) "));
	
	szSQL.Format(_T(" select distinct hp_patientno as patientno, ") \
	_T(" trim(trim(hp_surname) || ' ' || trim(hp_midname) || ' '|| trim(hp_firstname))as pname, ") \
	//_T(" hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,	") \//
	_T(" to_char(hp_birthdate, 'DD/MM/YYYY') as age,	") \
	_T(" (select ss_desc from sys_sel where ss_id ='sys_sex' and ss_code = hp_sex) as sex, ") \
	_T(" (select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as nvarchar2(15)) ) as ethnic, ") \
	_T(" hms_getaddress(hp_provid,hp_distid,hp_villid) as address 	") \
	_T(" from hms_patient ") \
	_T(" left join hms_doc on(hp_patientno=hd_patientno) ") \
	_T(" where hd_status ='T' %s ") \
	_T(" order by patientno") , szWhere );

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	if(nCount <= 0)
	{
		ShowMessageBox(_T("Kh\xF4ng t\xECm th\x1EA5y \x62\x1EC7nh nh\xE2n"));
		return 0;

	}

	while(!rs.IsEOF()){ 
		m_wndListPatient.AddItems(
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("ethnic")), 
			rs.GetValue(_T("address")), NULL);
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 	
	return nCount;

}
void CHMSTreatmentHistory::OnListDocumentDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndListDocument.GetCurSel();

	if (nSel < 0 ) return;


	long nPatientNo = ToLong(m_wndListDocument.GetItemText(nSel, 6));
	int nRoomID = ToLong(m_wndListDocument.GetItemText(nSel, 7));
	int nReceptIdx = ToLong(m_wndListDocument.GetItemText(nSel, 8));
	long nDocNo = ToLong(m_wndListDocument.GetItemText(nSel, 1));
	pMF->m_nRefIndex = nReceptIdx;
	pMF->m_wndPatientDocument.LoadData(nPatientNo, nDocNo, nRoomID, nReceptIdx);
	pMF->SetActivePane(1);

	OnCancel();
	
} 
void CHMSTreatmentHistory::OnListDocumentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistory::OnListDocumentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListDocumentDblClick();
	 return 0;
} 
long CHMSTreatmentHistory::OnListDocumentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	m_wndListDocument.BeginLoad(); 
	m_wndListDocument.DeleteAllItems(); 
	int nIdx=1,nCount = 0;

	if (m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" and hd_docno =%ld "), m_nDocumentNo);
	}

	szWhere.AppendFormat(_T(" and hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 58) "));

	szSQL.Format(_T(" SELECT he_receptidx as id,he_roomid as roomid,he_docno as DocumentNo,he_patientNo as PatientNo, ") \
				_T(" (select hrl_name from hms_roomlist left join sys_dept on(hrl_deptid=sd_id) where sd_type ='KB' and hrl_id=he_roomid and rownum < 2) as deptname, ") \
				_T(" hd_admitdate as indate, hd_endDate as enddate, ") \
				_T(" hd_diagnostic ||' ['|| hd_icd ||']' as diagnostic, hd_doctor ") \
				_T(" FROM hms_doc LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
				_T(" WHERE hd_patientno= %ld %s and he_status ='T'") \
				_T(" ORDER BY DocumentNo,id") , m_nPatientNo, szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){		
		tmpStr.Format(_T("%d"), nIdx++);
		m_wndListDocument.AddItems(
			tmpStr, 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("DeptName")), 
			CDate::Convert(rs.GetValue(_T("indate")),yyyymmdd,ddmmyyyy), 
			CDate::Convert(rs.GetValue(_T("EndDate")),yyyymmdd,ddmmyyyy), 
			rs.GetValue(_T("Diagnostic")),
			rs.GetValue(_T("PatientNo")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("hd_doctor")),
			NULL);
		rs.MoveNext();
	}
	m_wndListDocument.EndLoad(); 
	return nCount;
}
int CHMSTreatmentHistory::OnAddHMSTreatmentHistory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTreatmentHistory::OnEditHMSTreatmentHistory(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentHistory::OnDeleteHMSTreatmentHistory(){
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
 		OnCancelHMSTreatmentHistory(); 
 	}
	return 0;
}
int CHMSTreatmentHistory::OnSaveHMSTreatmentHistory(){
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
 		//OnHMSTreatmentHistoryListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTreatmentHistory::OnCancelHMSTreatmentHistory(){
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
int CHMSTreatmentHistory::OnHMSTreatmentHistoryListLoadData(){
	return 0;
}

int CHMSTreatmentHistory::OnPatientNoCheckValue()
{
	return 0;
}


