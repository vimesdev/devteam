#include "HMSPatientDocument.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSexCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnStatusCheckValue();
} 
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnICDAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnConclusionCheckValue();
} 
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnSuggestionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSuggestionSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionSelendok();
}
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
}*/
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
}*/
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSuggestionLoadData();
}
/*static void _OnSuggestionAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionAddNew();
}*/
static void _OnInDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnInDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInDeptSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptSelendok();
}
/*static void _OnInDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptKillfocus();
}*/
/*static void _OnInDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptKillfocus();
}*/
static long _OnInDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnInDeptLoadData();
}
/*static void _OnInDeptAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnInDeptAddNew();
}*/
static void _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDocument* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalSelendokFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalSelendok();
}
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalKillfocus();
}*/
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalKillfocus();
}*/
static long _OnHospitalLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnHospitalLoadData();
}
/*static void _OnHospitalAddNewFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnHospitalAddNew();
}*/
static void _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientDocument*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 
static long _OnExamListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnExamListLoadData();
} 
static void _OnExamListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnExamListDblClick();
} 
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDocument*)pWnd)->OnExamListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnExamListDeleteItem();
} 
static int _OnAddHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddHMSPatientDocument();
} 
static int _OnEditHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnEditHMSPatientDocument();
} 
static int _OnDeleteHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeleteHMSPatientDocument();
} 
static int _OnSaveHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnSaveHMSPatientDocument();
} 
static int _OnCancelHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnCancelHMSPatientDocument();
} 
CHMSPatientDocument::CHMSPatientDocument(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSPatientDocument::~CHMSPatientDocument(){
}
void CHMSPatientDocument::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 380, 240);
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 245, 380, 500);
	m_wndExaminationReceipts.Create(this, _T("Examination Recceipts"), 5, 505, 380, 625);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 200, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 205, 30, 280, 55);
	m_wndDocumentNo.Create(this,285, 30, 376, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 375, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 280, 115);
	m_wndSex.Create(this,285, 90, 376, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 120, 110, 145);
	m_wndOccupation.Create(this,115, 120, 375, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 110, 175);
	m_wndAddress.Create(this,115, 150, 375, 175); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 180, 110, 205);
	m_wndWorkplace.Create(this,115, 180, 375, 205); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 210, 110, 235);
	m_wndObject.Create(this,115, 210, 200, 235); 
	m_wndCardNo.Create(this,205, 210, 345, 235); 
	m_wndCardInfoBtn.Create(this, _T("..."), 350, 210, 375, 235);
	m_wndExamDate.Create(this,115, 270, 200, 295); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 10, 270, 110, 295);
	m_wndStatusLabel.Create(this, _T("Status"), 205, 270, 280, 295);
	m_wndStatus.Create(this,285, 270, 376, 295); 
	m_wndICDLabel.Create(this, _T("ICD10"), 10, 300, 110, 325);
	m_wndICD.Create(this,115, 300, 375, 325); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 330, 110, 355);
	m_wndConclusion.Create(this,115, 330, 375, 405); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 410, 110, 435);
	m_wndSuggestion.Create(this,115, 410, 375, 435); 
	m_wndInDeptLabel.Create(this, _T("In Dept"), 10, 440, 110, 465);
	m_wndInDept.Create(this,115, 440, 375, 465); 
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 470, 110, 495);
	m_wndHospital.Create(this,115, 470, 375, 495); 
	m_wndExaminationTab.Create(this,385, 5, 985, 620); 
	m_wndExamList.Create(this,5, 526, 380, 626); 

}
void CHMSPatientDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndOccupation.SetLimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(18);
	m_wndCardNo.SetCheckValue(true);
	m_wndExamDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExamDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(35);
	m_wndConclusion.SetMultiLine(TRUE);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndSuggestion.SetCheckValue(true);
	m_wndSuggestion.LimitText(35);
	m_wndInDept.SetCheckValue(true);
	m_wndInDept.LimitText(35);
	m_wndHospital.SetCheckValue(true);
	m_wndHospital.LimitText(35);






	m_wndInDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndExamList.InsertColumn(0, _T("Room"), CFMT_TEXT, 150);
	m_wndExamList.InsertColumn(1, _T("Exam Date"), CFMT_TEXT, 90);
	m_wndExamList.InsertColumn(2, _T("Status"), CFMT_TEXT, 100);

}
void CHMSPatientDocument::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
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
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardInfoBtn.SetEvent(WE_CLICK, _OnCardInfoBtnSelectFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndSuggestion.SetEvent(WE_SELENDOK, _OnSuggestionSelendokFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_SELCHANGE, _OnSuggestionSelectChangeFnc);
	m_wndSuggestion.SetEvent(WE_LOADDATA, _OnSuggestionLoadDataFnc);
	//m_wndSuggestion.SetEvent(WE_ADDNEW, _OnSuggestionAddNewFnc);
	m_wndInDept.SetEvent(WE_SELENDOK, _OnInDeptSelendokFnc);
	//m_wndInDept.SetEvent(WE_SETFOCUS, _OnInDeptSetfocusFnc);
	//m_wndInDept.SetEvent(WE_KILLFOCUS, _OnInDeptKillfocusFnc);
	m_wndInDept.SetEvent(WE_SELCHANGE, _OnInDeptSelectChangeFnc);
	m_wndInDept.SetEvent(WE_LOADDATA, _OnInDeptLoadDataFnc);
	//m_wndInDept.SetEvent(WE_ADDNEW, _OnInDeptAddNewFnc);
	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
	m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
	m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
	m_wndExamList.AddEvent(1, _T("Delete"), _OnExamListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDocumentFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);
	DDX_TextEx(pDX, m_wndInDept.GetDlgCtrlID(), m_szInDeptKey);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);

}
void CHMSPatientDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDocument::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szExamDate.Empty();
	m_szStatus.Empty();
	m_szICDKey.Empty();
	m_szConclusion.Empty();
	m_szSuggestionKey.Empty();
	m_szInDeptKey.Empty();
	m_szHospitalKey.Empty();

}
int CHMSPatientDocument::SetMode(int nMode){
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
/*void CHMSPatientDocument::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAgeChange(){
	
} */
/*void CHMSPatientDocument::OnAgeSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAgeKillfocus(){
	
} */
int CHMSPatientDocument::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSexChange(){
	
} */
/*void CHMSPatientDocument::OnSexSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSexKillfocus(){
	
} */
int CHMSPatientDocument::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnOccupationChange(){
	
} */
/*void CHMSPatientDocument::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocument::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocument::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAddressChange(){
	
} */
/*void CHMSPatientDocument::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnObjectChange(){
	
} */
/*void CHMSPatientDocument::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocument::OnObjectKillfocus(){
	
} */
int CHMSPatientDocument::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnCardNoChange(){
	
} */
/*void CHMSPatientDocument::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocument::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientDocument::OnExamDateChange(){
	
} */
/*void CHMSPatientDocument::OnExamDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnExamDateKillfocus(){
	
} */
int CHMSPatientDocument::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnStatusChange(){
	
} */
/*void CHMSPatientDocument::OnStatusSetfocus(){
	
} */
/*void CHMSPatientDocument::OnStatusKillfocus(){
	
} */
int CHMSPatientDocument::OnStatusCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnICDSelendok(){
	 
}
/*void CHMSPatientDocument::OnICDSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnICDKillfocus(){
	
}*/
long CHMSPatientDocument::OnICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szICDKey
};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDocument::OnICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDocument::OnConclusionChange(){
	
} */
/*void CHMSPatientDocument::OnConclusionSetfocus(){
	
} */
/*void CHMSPatientDocument::OnConclusionKillfocus(){
	
} */
int CHMSPatientDocument::OnConclusionCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnSuggestionSelendok(){
	 
}
/*void CHMSPatientDocument::OnSuggestionSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnSuggestionKillfocus(){
	
}*/
long CHMSPatientDocument::OnSuggestionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSuggestion.IsSearchKey() && !m_szSuggestionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSuggestionKey
};
	m_wndSuggestion.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSuggestion.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDocument::OnSuggestionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientDocument::OnInDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnInDeptSelendok(){
	 
}
/*void CHMSPatientDocument::OnInDeptSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnInDeptKillfocus(){
	
}*/
long CHMSPatientDocument::OnInDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInDept.IsSearchKey() && !m_szInDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInDeptKey
};
	m_wndInDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDocument::OnInDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientDocument::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnHospitalSelendok(){
	 
}
/*void CHMSPatientDocument::OnHospitalSetfocus(){
	
}*/
/*void CHMSPatientDocument::OnHospitalKillfocus(){
	
}*/
long CHMSPatientDocument::OnHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey() && !m_szHospitalKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHospitalKey
};
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDocument::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientDocument::OnExaminationTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnExamListDblClick(){
	
} 
void CHMSPatientDocument::OnExamListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocument::OnExamListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientDocument::OnExamListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamList.AddItems(
			rs.GetValue(_T("Room")), 
			rs.GetValue(_T("ExamDate")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndExamList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPatientDocument::OnAddHMSPatientDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDocument::OnEditHMSPatientDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDocument::OnDeleteHMSPatientDocument(){
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
 		OnCancelHMSPatientDocument();
 	}
	return 0;
}
int CHMSPatientDocument::OnSaveHMSPatientDocument(){
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
 		//OnHMSPatientDocumentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDocument::OnCancelHMSPatientDocument(){
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
int CHMSPatientDocument::OnHMSPatientDocumentListLoadData(){
	return 0;
}
