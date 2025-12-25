#include "HMSPatientDocumentEx.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnYobCheckValue();
} 
/*static void _OnGenderChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnGenderChange();
} */
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnGenderSetfocus();} */ 
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnGenderKillfocus();
} */
static int _OnGenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnGenderCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocumentEx *pVw = (CHMSPatientDocumentEx *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDocumentEx*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocumentEx *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocumentEx *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientDocumentEx *pVw = (CHMSPatientDocumentEx *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnWatiingSelectFnc(CWnd *pWnd){
	  ((CHMSPatientDocumentEx*)pWnd)->OnWatiingSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CHMSPatientDocumentEx*)pWnd)->OnPerformedSelect();
}
static void _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientDocumentEx*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSPatientDocumentExFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnAddHMSPatientDocumentEx();
} 
static int _OnEditHMSPatientDocumentExFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnEditHMSPatientDocumentEx();
} 
static int _OnDeleteHMSPatientDocumentExFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnDeleteHMSPatientDocumentEx();
} 
static int _OnSaveHMSPatientDocumentExFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnSaveHMSPatientDocumentEx();
} 
static int _OnCancelHMSPatientDocumentExFnc(CWnd *pWnd){
	 return ((CHMSPatientDocumentEx*)pWnd)->OnCancelHMSPatientDocumentEx();
} 
CHMSPatientDocumentEx::CHMSPatientDocumentEx(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSPatientDocumentEx::~CHMSPatientDocumentEx(){
}
void CHMSPatientDocumentEx::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 380, 265);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 270, 380, 620);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 195, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 200, 30, 290, 55);
	m_wndDocumentNo.Create(this,295, 30, 375, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 375, 85); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 90, 110, 115);
	m_wndYob.Create(this,115, 90, 195, 115); 
	m_wndGenderLabel.Create(this, _T("Gender"), 200, 90, 290, 115);
	m_wndGender.Create(this,295, 90, 375, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 120, 110, 145);
	m_wndOccupation.Create(this,115, 120, 375, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 110, 175);
	m_wndAddress.Create(this,115, 150, 375, 200); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 205, 110, 230);
	m_wndWorkplace.Create(this,115, 205, 375, 230); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 235, 110, 260);
	m_wndObject.Create(this,115, 235, 190, 260); 
	m_wndCardNo.Create(this,195, 235, 345, 260); 
	m_wndCardInfoBtn.Create(this, _T("..."), 350, 235, 375, 260);
	m_wndList.Create(this,10, 295, 375, 555); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 560, 90, 585);
	m_wndFromDate.Create(this,95, 560, 175, 585); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 560, 260, 585);
	m_wndToDate.Create(this,265, 560, 345, 585); 
	m_wndSearch.Create(this, _T("@"), 350, 560, 375, 585);
	m_wndStatus.Create(this, _T("Status"), 10, 590, 90, 615);
	m_wndWatiing.Create(this, _T("Watiing"), 95, 590, 260, 615);
	m_wndPerformed.Create(this, _T("Performed"), 265, 590, 362, 615);
	m_wndExaminationTab.Create(this,385, 5, 985, 620); 

}
void CHMSPatientDocumentEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(1024);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetLimitText(1024);
	m_wndGender.SetCheckValue(true);
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
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Patient No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(5, _T("Gender"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(6, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Dept"), CFMT_TEXT, 40);

}
void CHMSPatientDocumentEx::OnSetWindowEvents(){
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
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndGender.SetEvent(WE_CHANGE, _OnGenderChangeFnc);
	//m_wndGender.SetEvent(WE_SETFOCUS, _OnGenderSetfocusFnc);
	//m_wndGender.SetEvent(WE_KILLFOCUS, _OnGenderKillfocusFnc);
	m_wndGender.SetEvent(WE_CHECKVALUE, _OnGenderCheckValueFnc);
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndWatiing.SetEvent(WE_CLICK, _OnWatiingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDocumentExFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDocumentExFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDocumentExFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDocumentExFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDocumentExFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDocumentEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndGender.GetDlgCtrlID(), m_szGender);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndWatiing.GetDlgCtrlID(), m_nWatiing);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);

}
void CHMSPatientDocumentEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDocumentEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDocumentEx::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nWatiing=0;
	m_nPerformed=0;

}
int CHMSPatientDocumentEx::SetMode(int nMode){
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
/*void CHMSPatientDocumentEx::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocumentEx::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocumentEx::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocumentEx::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnYobChange(){
	
} */
/*void CHMSPatientDocumentEx::OnYobSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnYobKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnYobCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnGenderChange(){
	
} */
/*void CHMSPatientDocumentEx::OnGenderSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnGenderKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnGenderCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnOccupationChange(){
	
} */
/*void CHMSPatientDocumentEx::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnAddressChange(){
	
} */
/*void CHMSPatientDocumentEx::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnAddressKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocumentEx::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnObjectChange(){
	
} */
/*void CHMSPatientDocumentEx::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnObjectKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnCardNoChange(){
	
} */
/*void CHMSPatientDocumentEx::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocumentEx::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocumentEx::OnListDblClick(){
	
} 
void CHMSPatientDocumentEx::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocumentEx::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientDocumentEx::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("PatientNo")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("Gender")), 
			rs.GetValue(_T("Object")), 
			rs.GetValue(_T("Dept")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDocumentEx::OnFromDateChange(){
	
} */
/*void CHMSPatientDocumentEx::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnFromDateKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocumentEx::OnToDateChange(){
	
} */
/*void CHMSPatientDocumentEx::OnToDateSetfocus(){
	
} */
/*void CHMSPatientDocumentEx::OnToDateKillfocus(){
	
} */
int CHMSPatientDocumentEx::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientDocumentEx::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocumentEx::OnWatiingSelect(){
	
}
void CHMSPatientDocumentEx::OnPerformedSelect(){
	
}
void CHMSPatientDocumentEx::OnExaminationTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocumentEx::OnAddHMSPatientDocumentEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDocumentEx::OnEditHMSPatientDocumentEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDocumentEx::OnDeleteHMSPatientDocumentEx(){
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
 		OnCancelHMSPatientDocumentEx();
 	}
	return 0;
}
int CHMSPatientDocumentEx::OnSaveHMSPatientDocumentEx(){
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
 		//OnHMSPatientDocumentExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDocumentEx::OnCancelHMSPatientDocumentEx(){
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
int CHMSPatientDocumentEx::OnHMSPatientDocumentExListLoadData(){
	return 0;
}
