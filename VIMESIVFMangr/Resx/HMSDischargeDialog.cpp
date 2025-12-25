#include "HMSDischargeDialog.h"
#include "MainFrm.h"
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnEndDateCheckValue();
} 
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischargeDialog* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnResultAddNew();
}*/
/*static void _OnTotalDayChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTotalDayChange();
} */
/*static void _OnTotalDaySetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTotalDaySetfocus();} */ 
/*static void _OnTotalDayKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTotalDayKillfocus();
} */
static int _OnTotalDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnTotalDayCheckValue();
} 
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischargeDialog* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnTreatMethodChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTreatMethodChange();
} */
/*static void _OnTreatMethodSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTreatMethodSetfocus();} */ 
/*static void _OnTreatMethodKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnTreatMethodKillfocus();
} */
static int _OnTreatMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnTreatMethodCheckValue();
} 
/*static void _OnAdmissionStatusChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusChange();
} */
/*static void _OnAdmissionStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusSetfocus();} */ 
/*static void _OnAdmissionStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusKillfocus();
} */
static int _OnAdmissionStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnConclusionCheckValue();
} 
/*static void _OnYKienDenGhiChangeFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiChange();
} */
/*static void _OnYKienDenGhiSetfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiSetfocus();} */ 
/*static void _OnYKienDenGhiKillfocusFnc(CWnd *pWnd){
	((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiKillfocus();
} */
static int _OnYKienDenGhiCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSDischargeDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargeDialog*)pWnd)->OnAddHMSDischargeDialog();
} 
static int _OnEditHMSDischargeDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargeDialog*)pWnd)->OnEditHMSDischargeDialog();
} 
static int _OnDeleteHMSDischargeDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargeDialog*)pWnd)->OnDeleteHMSDischargeDialog();
} 
static int _OnSaveHMSDischargeDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargeDialog*)pWnd)->OnSaveHMSDischargeDialog();
} 
static int _OnCancelHMSDischargeDialogFnc(CWnd *pWnd){
	 return ((CHMSDischargeDialog*)pWnd)->OnCancelHMSDischargeDialog();
} 
CHMSDischargeDialog::CHMSDischargeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDischargeDialog::~CHMSDischargeDialog(){
}
void CHMSDischargeDialog::OnCreateComponents(){
	m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 5, 1005, 645);
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 13, 29, 133, 54);
	m_wndAdmitDate.Create(this,138, 29, 238, 54); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 243, 29, 363, 54);
	m_wndEndDate.Create(this,368, 29, 493, 54); 
	m_wndResultLabel.Create(this, _T("Result"), 498, 29, 618, 54);
	m_wndResult.Create(this,623, 29, 798, 54); 
	m_wndTotalDayLabel.Create(this, _T("Total Day"), 803, 29, 928, 54);
	m_wndTotalDay.Create(this,933, 29, 998, 54); 
	m_wndICD10Label.Create(this, _T("ICD10"), 10, 59, 130, 84);
	m_wndICD10.Create(this,135, 59, 1000, 84); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 89, 130, 164);
	m_wndMainDisease.Create(this,135, 89, 1000, 164); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 169, 130, 244);
	m_wndRelationDisease.Create(this,135, 169, 1000, 244); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 249, 130, 349);
	m_wndTreatMethod.Create(this,135, 249, 1000, 349); 
	m_wndAdmissionStatusLabel.Create(this, _T("Admission Status"), 10, 354, 130, 454);
	m_wndAdmissionStatus.Create(this,135, 354, 1000, 454); 
	m_wndConclusionLabel.Create(this, _T("Conclusion /Advice"), 10, 564, 130, 639);
	m_wndConclusion.Create(this,135, 564, 1000, 639); 
	m_wndYKienDenGhiLabel.Create(this, _T("Y kien den ghi"), 10, 459, 130, 559);
	m_wndYKienDenGhi.Create(this,135, 459, 1000, 559); 
	m_wndUpdate.Create(this, _T("&Update"), 585, 650, 685, 675);
	m_wndSave.Create(this, _T("&Save"), 690, 650, 790, 675);
	m_wndCancel.Create(this, _T("&Cancel"), 795, 650, 895, 675);
	m_wndPrint.Create(this, _T("&Print"), 900, 650, 1000, 675);

}
void CHMSDischargeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1024);
	m_wndTotalDay.SetLimitText(1024);
	m_wndTotalDay.SetCheckValue(true);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(1024);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndTreatMethod.SetLimitText(1024);
	m_wndTreatMethod.SetCheckValue(true);
	m_wndAdmissionStatus.SetLimitText(1024);
	m_wndAdmissionStatus.SetCheckValue(true);
	m_wndConclusion.SetLimitText(1024);
	m_wndConclusion.SetCheckValue(true);
	m_wndYKienDenGhi.SetLimitText(1024);
	m_wndYKienDenGhi.SetCheckValue(true);





}
void CHMSDischargeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	//m_wndTotalDay.SetEvent(WE_CHANGE, _OnTotalDayChangeFnc);
	//m_wndTotalDay.SetEvent(WE_SETFOCUS, _OnTotalDaySetfocusFnc);
	//m_wndTotalDay.SetEvent(WE_KILLFOCUS, _OnTotalDayKillfocusFnc);
	m_wndTotalDay.SetEvent(WE_CHECKVALUE, _OnTotalDayCheckValueFnc);
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndTreatMethod.SetEvent(WE_CHANGE, _OnTreatMethodChangeFnc);
	//m_wndTreatMethod.SetEvent(WE_SETFOCUS, _OnTreatMethodSetfocusFnc);
	//m_wndTreatMethod.SetEvent(WE_KILLFOCUS, _OnTreatMethodKillfocusFnc);
	m_wndTreatMethod.SetEvent(WE_CHECKVALUE, _OnTreatMethodCheckValueFnc);
	//m_wndAdmissionStatus.SetEvent(WE_CHANGE, _OnAdmissionStatusChangeFnc);
	//m_wndAdmissionStatus.SetEvent(WE_SETFOCUS, _OnAdmissionStatusSetfocusFnc);
	//m_wndAdmissionStatus.SetEvent(WE_KILLFOCUS, _OnAdmissionStatusKillfocusFnc);
	m_wndAdmissionStatus.SetEvent(WE_CHECKVALUE, _OnAdmissionStatusCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	//m_wndYKienDenGhi.SetEvent(WE_CHANGE, _OnYKienDenGhiChangeFnc);
	//m_wndYKienDenGhi.SetEvent(WE_SETFOCUS, _OnYKienDenGhiSetfocusFnc);
	//m_wndYKienDenGhi.SetEvent(WE_KILLFOCUS, _OnYKienDenGhiKillfocusFnc);
	m_wndYKienDenGhi.SetEvent(WE_CHECKVALUE, _OnYKienDenGhiCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDischargeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_Text(pDX, m_wndTotalDay.GetDlgCtrlID(), m_nTotalDay);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndTreatMethod.GetDlgCtrlID(), m_szTreatMethod);
	DDX_Text(pDX, m_wndAdmissionStatus.GetDlgCtrlID(), m_szAdmissionStatus);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndYKienDenGhi.GetDlgCtrlID(), m_szYKienDenGhi);

}
void CHMSDischargeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDischargeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDischargeDialog::SetDefaultValues(){

	m_szAdmitDate.Empty();
	m_szEndDate.Empty();
	m_szResultKey.Empty();
	m_nTotalDay=0;
	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szTreatMethod.Empty();
	m_szAdmissionStatus.Empty();
	m_szConclusion.Empty();
	m_szYKienDenGhi.Empty();

}
int CHMSDischargeDialog::SetMode(int nMode){
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
/*void CHMSDischargeDialog::OnAdmitDateChange(){
	
} */
/*void CHMSDischargeDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSDischargeDialog::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnEndDateChange(){
	
} */
/*void CHMSDischargeDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnEndDateKillfocus(){
	
} */
int CHMSDischargeDialog::OnEndDateCheckValue(){
	return 0;
} 
void CHMSDischargeDialog::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargeDialog::OnResultSelendok(){
	 
}
/*void CHMSDischargeDialog::OnResultSetfocus(){
	
}*/
/*void CHMSDischargeDialog::OnResultKillfocus(){
	
}*/
long CHMSDischargeDialog::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResultKey
};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischargeDialog::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDischargeDialog::OnTotalDayChange(){
	
} */
/*void CHMSDischargeDialog::OnTotalDaySetfocus(){
	
} */
/*void CHMSDischargeDialog::OnTotalDayKillfocus(){
	
} */
int CHMSDischargeDialog::OnTotalDayCheckValue(){
	return 0;
} 
void CHMSDischargeDialog::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargeDialog::OnICD10Selendok(){
	 
}
/*void CHMSDischargeDialog::OnICD10Setfocus(){
	
}*/
/*void CHMSDischargeDialog::OnICD10Killfocus(){
	
}*/
long CHMSDischargeDialog::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szICD10Key
};
	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischargeDialog::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDischargeDialog::OnMainDiseaseChange(){
	
} */
/*void CHMSDischargeDialog::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnMainDiseaseKillfocus(){
	
} */
int CHMSDischargeDialog::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSDischargeDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSDischargeDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnTreatMethodChange(){
	
} */
/*void CHMSDischargeDialog::OnTreatMethodSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnTreatMethodKillfocus(){
	
} */
int CHMSDischargeDialog::OnTreatMethodCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnAdmissionStatusChange(){
	
} */
/*void CHMSDischargeDialog::OnAdmissionStatusSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnAdmissionStatusKillfocus(){
	
} */
int CHMSDischargeDialog::OnAdmissionStatusCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnConclusionChange(){
	
} */
/*void CHMSDischargeDialog::OnConclusionSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnConclusionKillfocus(){
	
} */
int CHMSDischargeDialog::OnConclusionCheckValue(){
	return 0;
} 
/*void CHMSDischargeDialog::OnYKienDenGhiChange(){
	
} */
/*void CHMSDischargeDialog::OnYKienDenGhiSetfocus(){
	
} */
/*void CHMSDischargeDialog::OnYKienDenGhiKillfocus(){
	
} */
int CHMSDischargeDialog::OnYKienDenGhiCheckValue(){
	return 0;
} 
void CHMSDischargeDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargeDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischargeDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDischargeDialog::OnAddHMSDischargeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDischargeDialog::OnEditHMSDischargeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDischargeDialog::OnDeleteHMSDischargeDialog(){
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
 		OnCancelHMSDischargeDialog();
 	}
	return 0;
}
int CHMSDischargeDialog::OnSaveHMSDischargeDialog(){
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
 		//OnHMSDischargeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDischargeDialog::OnCancelHMSDischargeDialog(){
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
int CHMSDischargeDialog::OnHMSDischargeDialogListLoadData(){
	return 0;
}
