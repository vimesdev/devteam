#include "HMSDiseasePrehistoryDialog.h"
#include "MainFrm.h"
/*static void _OnOwnerChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerSetfocus();} */ 
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerCheckValue();
} 
/*static void _OnFamilyChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyChange();
} */
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilySetfocus();} */ 
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyKillfocus();
} */
static int _OnFamilyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyCheckValue();
} 
/*static void _OnDrugAllergyChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyChange();
} */
/*static void _OnDrugAllergySetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergySetfocus();} */ 
/*static void _OnDrugAllergyKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyKillfocus();
} */
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSDiseasePrehistoryDialog *pVw = (CHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDiseasePrehistoryDialog *pVw = (CHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnAddHMSDiseasePrehistoryDialog();
} 
static int _OnEditHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnEditHMSDiseasePrehistoryDialog();
} 
static int _OnDeleteHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnDeleteHMSDiseasePrehistoryDialog();
} 
static int _OnSaveHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnSaveHMSDiseasePrehistoryDialog();
} 
static int _OnCancelHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnCancelHMSDiseasePrehistoryDialog();
} 
CHMSDiseasePrehistoryDialog::CHMSDiseasePrehistoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CHMSDiseasePrehistoryDialog::~CHMSDiseasePrehistoryDialog(){
}
void CHMSDiseasePrehistoryDialog::OnCreateComponents(){
	m_wndDiseasePrehistory.Create(this, _T("Disease Prehistory"), 5, 5, 480, 270);
	m_wndOwnerLabel.Create(this, _T("Owner"), 9, 30, 109, 55);
	m_wndOwner.Create(this,114, 30, 474, 105); 
	m_wndFamilyLabel.Create(this, _T("Family"), 9, 110, 109, 135);
	m_wndFamily.Create(this,114, 110, 474, 185); 
	m_wndDrugAllergyLabel.Create(this, _T("Drug Allergy"), 9, 190, 109, 215);
	m_wndDrugAllergy.Create(this,114, 190, 474, 265); 
	m_wndUpdate.Create(this, _T("Update"), 325, 275, 400, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 405, 275, 480, 300);

}
void CHMSDiseasePrehistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOwner.SetMultiLine(TRUE);
	m_wndOwner.SetLimitText(512);
	m_wndOwner.SetCheckValue(true);
	m_wndFamily.SetMultiLine(TRUE);
	m_wndFamily.SetLimitText(512);
	m_wndFamily.SetCheckValue(true);
	m_wndDrugAllergy.SetMultiLine(TRUE);
	m_wndDrugAllergy.SetLimitText(254);
	m_wndDrugAllergy.SetCheckValue(true);
	m_hms_disease_histTbl.SetTableName(_T("hms_disease_hist"));
	m_hms_disease_histTbl.AddField(_T("hdh_createdby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_createddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_updatedby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_updateddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_patientno"), dfLong); 
	m_hms_disease_histTbl.AddField(_T("hdh_owner"), dfText, 254); 
	m_hms_disease_histTbl.AddField(_T("hdh_family"), dfText, 254); 
	m_hms_disease_histTbl.AddField(_T("hdh_drugallergy"), dfText, 254); 

}
void CHMSDiseasePrehistoryDialog::OnSetWindowEvents(){
	//m_wndOwner.SetEvent(WE_CHANGE, _OnOwnerChangeFnc);
	//m_wndOwner.SetEvent(WE_SETFOCUS, _OnOwnerSetfocusFnc);
	//m_wndOwner.SetEvent(WE_KILLFOCUS, _OnOwnerKillfocusFnc);
	m_wndOwner.SetEvent(WE_CHECKVALUE, _OnOwnerCheckValueFnc);
	//m_wndFamily.SetEvent(WE_CHANGE, _OnFamilyChangeFnc);
	//m_wndFamily.SetEvent(WE_SETFOCUS, _OnFamilySetfocusFnc);
	//m_wndFamily.SetEvent(WE_KILLFOCUS, _OnFamilyKillfocusFnc);
	m_wndFamily.SetEvent(WE_CHECKVALUE, _OnFamilyCheckValueFnc);
	//m_wndDrugAllergy.SetEvent(WE_CHANGE, _OnDrugAllergyChangeFnc);
	//m_wndDrugAllergy.SetEvent(WE_SETFOCUS, _OnDrugAllergySetfocusFnc);
	//m_wndDrugAllergy.SetEvent(WE_KILLFOCUS, _OnDrugAllergyKillfocusFnc);
	m_wndDrugAllergy.SetEvent(WE_CHECKVALUE, _OnDrugAllergyCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSDiseasePrehistoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
	DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
	DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);

}
void CHMSDiseasePrehistoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiseasePrehistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_disease_histTbl.SetValue(_T("hdh_createdby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_createddate"), pMF->GetSysDateTime());
	m_hms_disease_histTbl.SetValue(_T("hdh_updatedby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_updateddate"), pMF->GetSysDateTime());

}
void CHMSDiseasePrehistoryDialog::SetDefaultValues(){

	m_szOwner.Empty();
	m_szFamily.Empty();
	m_szDrugAllergy.Empty();

}
int CHMSDiseasePrehistoryDialog::SetMode(int nMode){
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
/*void CHMSDiseasePrehistoryDialog::OnOwnerChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnOwnerSetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnOwnerKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnOwnerCheckValue(){
	return 0;
} 
/*void CHMSDiseasePrehistoryDialog::OnFamilyChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnFamilySetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnFamilyKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnFamilyCheckValue(){
	return 0;
} 
/*void CHMSDiseasePrehistoryDialog::OnDrugAllergyChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnDrugAllergySetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnDrugAllergyKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnDrugAllergyCheckValue(){
	return 0;
} 
void CHMSDiseasePrehistoryDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseasePrehistoryDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiseasePrehistoryDialog::OnAddHMSDiseasePrehistoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDiseasePrehistoryDialog::OnEditHMSDiseasePrehistoryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiseasePrehistoryDialog::OnDeleteHMSDiseasePrehistoryDialog(){
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
 		OnCancelHMSDiseasePrehistoryDialog(); 
 	}
	return 0;
}
int CHMSDiseasePrehistoryDialog::OnSaveHMSDiseasePrehistoryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_disease_histTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_disease_histTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSDiseasePrehistoryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDiseasePrehistoryDialog::OnCancelHMSDiseasePrehistoryDialog(){
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
int CHMSDiseasePrehistoryDialog::OnHMSDiseasePrehistoryDialogListLoadData(){
	return 0;
}
