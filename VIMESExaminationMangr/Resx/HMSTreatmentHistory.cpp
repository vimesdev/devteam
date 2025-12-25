#include "HMSTreatmentHistory.h"
#include "MainFrm.h"
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
static void _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAddressSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressSelendok();
}
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressKillfocus();
}*/
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressKillfocus();
}*/
static long _OnAddressLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnAddressLoadData();
}
/*static void _OnAddressAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressAddNew();
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
CHMSTreatmentHistory::CHMSTreatmentHistory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentHistory::~CHMSTreatmentHistory(){
}
void CHMSTreatmentHistory::OnCreateComponents(){
	m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 800, 150);
	m_wndGroupPatient.Create(this, _T("Patient List"), 5, 155, 800, 405);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 410, 800, 590);
	m_wndLastNameLabel.Create(this, _T("First Name"), 10, 30, 100, 55);
	m_wndLastName.Create(this,105, 30, 185, 55); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 190, 30, 275, 55);
	m_wndMidName.Create(this,280, 30, 360, 55); 
	m_wndFirstNameLabel.Create(this, _T("Last Name"), 365, 30, 455, 55);
	m_wndFirstName.Create(this,460, 30, 540, 55); 
	m_wndYOBLabel.Create(this, _T("YOB"), 545, 30, 625, 55);
	m_wndYOB.Create(this,630, 30, 720, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 60, 100, 85);
	m_wndAddress.Create(this,105, 60, 360, 85); 
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

}
void CHMSTreatmentHistory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLastName.SetLimitText(1024);
	m_wndLastName.SetCheckValue(true);
	m_wndMidName.SetLimitText(1024);
	m_wndMidName.SetCheckValue(true);
	m_wndFirstName.SetLimitText(1024);
	m_wndFirstName.SetCheckValue(true);
	m_wndYOB.SetLimitText(1024);
	m_wndYOB.SetCheckValue(true);
	m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(1024);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndExamine.SetLimitText(1024);
	m_wndExamine.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);




	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);





}
void CHMSTreatmentHistory::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
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
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListDocument.SetEvent(WE_SELCHANGE, _OnListDocumentSelectChangeFnc);
	m_wndListDocument.SetEvent(WE_LOADDATA, _OnListDocumentLoadDataFnc);
	m_wndListDocument.SetEvent(WE_DBLCLICK, _OnListDocumentDblClickFnc);
	m_wndListDocument.AddEvent(1, _T("Delete"), _OnListDocumentDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSTreatmentHistory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLastName.GetDlgCtrlID(), m_szLastName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
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
	m_nYOB=0;
	m_szAddressKey.Empty();
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
void CHMSTreatmentHistory::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnAddressSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnAddressSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnAddressKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnAddressLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAddress.IsSearchKey() && !m_szAddressKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAddressKey
};
	m_wndAddress.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAddress.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentHistory::OnAddressAddNew(){
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
	
} 
void CHMSTreatmentHistory::OnListPatientDblClick(){
	
} 
void CHMSTreatmentHistory::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistory::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistory::OnListPatientLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListPatient.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListPatient.AddItems(
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentHistory::OnListDocumentDblClick(){
	
} 
void CHMSTreatmentHistory::OnListDocumentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistory::OnListDocumentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistory::OnListDocumentLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDocument.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDocument.AddItems(
		rs.MoveNext();
	}
	m_wndListDocument.EndLoad(); 
	return nCount;
*/
	return 0;
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
