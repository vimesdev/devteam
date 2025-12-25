#include "HMSDiseasePrehistoryDialog.h"
#include "HMSShowHistoryDialog.h"
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
static void _OnShowHistorySelectFnc(CWnd *pWnd)
{
	CHMSDiseasePrehistoryDialog *pVw = (CHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnShowHistorySelect();
}
CHMSDiseasePrehistoryDialog::CHMSDiseasePrehistoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CHMSDiseasePrehistoryDialog::~CHMSDiseasePrehistoryDialog()
{
}
void CHMSDiseasePrehistoryDialog::OnCreateComponents(){
	m_wndDiseasePrehistory.Create(this, _T("Disease Prehistory"), 5, 5, 600, 405);
	m_wndOwnerLabel.Create(this, _T("Owner"), 9, 30, 109, 55);
	m_wndOwner.Create(this,114, 30, 594, 150, true, false, true); 
	m_wndFamilyLabel.Create(this, _T("Family"), 9, 155, 109, 180);
	m_wndFamily.Create(this,114, 155, 594, 275, true, false, true); 
	m_wndDrugAllergyLabel.Create(this, _T("Drug Allergy"), 9, 280, 109, 305);
	m_wndDrugAllergy.Create(this,114, 280, 594, 400, true, false, true); 
	m_wndUpdate.Create(this, _T("&Save"), 445, 410, 520, 435);
	m_wndCancel.Create(this, _T("&Close"), 525, 410, 600, 435);
	m_wndShowHistory.Create(this, _T("Show History"), 4, 410, 112, 435);

}
void CHMSDiseasePrehistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOwner.SetLimitText(1024);
	m_wndFamily.SetLimitText(1024);
	m_wndDrugAllergy.SetLimitText(1024);

	m_hms_disease_histTbl.SetTableName(_T("hms_disease_hist"));
	m_hms_disease_histTbl.AddField(_T("hdh_createdby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_createddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_updatedby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_updateddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_patientno"), dfLong); 
	m_hms_disease_histTbl.AddField(_T("hdh_docno"), dfLong); 
	m_hms_disease_histTbl.AddField(_T("hdh_owner"), dfText, 1024);
	m_hms_disease_histTbl.AddField(_T("hdh_family"), dfText, 1024);
	m_hms_disease_histTbl.AddField(_T("hdh_drugallergy"), dfText, 1024);

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
	m_wndShowHistory.SetEvent(WE_CLICK, _OnShowHistorySelectFnc);
	GetDataToScreen();
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
	szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		long maxDocNo;
		szSQL.Format(_T("SELECT max(hdh_docno) FROM hms_disease_hist WHERE hdh_patientno = %ld "), pMF->m_nPatientNo);
		rs.ExecSQL(szSQL);
		maxDocNo = rs.GetIntValue();
		if(maxDocNo > 0)
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno = %ld "), pMF->m_nPatientNo, maxDocNo);
		else
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld "), pMF->m_nPatientNo);

		rs.ExecSQL(szSQL);
	}
	if(!rs.IsEOF()){
		rs.GetValue(_T("hdh_owner"), m_szOwner);
		rs.GetValue(_T("hdh_family"), m_szFamily);
		rs.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CHMSDiseasePrehistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_disease_histTbl.SetValue(_T("hdh_createdby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_createddate"), pMF->GetSysDateTime());
	m_hms_disease_histTbl.SetValue(_T("hdh_updatedby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_updateddate"), pMF->GetSysDateTime());
	m_hms_disease_histTbl.SetValue(_T("hdh_patientno"), pMF->m_nPatientNo);
	m_hms_disease_histTbl.SetValue(_T("hdh_docno"), pMF->m_nDocumentNo);
	m_hms_disease_histTbl.SetValue(_T("hdh_owner"), m_szOwner);
	m_hms_disease_histTbl.SetValue(_T("hdh_family"), m_szFamily);
	m_hms_disease_histTbl.SetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
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
 			EnableButtons(TRUE, 1, 0, -1); 
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
		m_wndShowHistory.EnableWindow(true);
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

void CHMSDiseasePrehistoryDialog::OnShowHistorySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMShowHistoryDialog dlg(this);
	dlg.DoModal();
	
} 

void CHMSDiseasePrehistoryDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDiseasePrehistoryDialog();
} 
void CHMSDiseasePrehistoryDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
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
 	CString szSQL, szWhere; 
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT count(*) FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld"), pMF->m_nPatientNo, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		szSQL = m_hms_disease_histTbl.GetInsertSQL(); 
	}
	else
	{
		szWhere.Format(_T(" WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
		szSQL = m_hms_disease_histTbl.GetUpdateSQL(_T("hdd_createdby,hdh_createddate,hdh_patientno. hdh_docno"));
		szSQL += szWhere;
	}
_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
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