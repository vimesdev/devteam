#include "CHMSDiseasePrehistoryDialog.h"
#include "MainFrm.h"
/*static void _OnOwnerChangeFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerSetfocus();} */ 
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerCheckValue();
} 
/*static void _OnFamilyChangeFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyChange();
} */
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnFamilySetfocus();} */ 
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyKillfocus();
} */
static int _OnFamilyCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyCheckValue();
} 
/*static void _OnDrugAllergyChangeFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyChange();
} */
/*static void _OnDrugAllergySetfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergySetfocus();} */ 
/*static void _OnDrugAllergyKillfocusFnc(CWnd *pWnd){
	((CCHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyKillfocus();
} */
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDiseasePrehistoryDialog *)pWnd)->OnDrugAllergyCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CCHMSDiseasePrehistoryDialog *pVw = (CCHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCHMSDiseasePrehistoryDialog *pVw = (CCHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CCHMSDiseasePrehistoryDialog*)pWnd)->OnAddCHMSDiseasePrehistoryDialog();
} 
static int _OnEditCHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CCHMSDiseasePrehistoryDialog*)pWnd)->OnEditCHMSDiseasePrehistoryDialog();
} 
static int _OnDeleteCHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CCHMSDiseasePrehistoryDialog*)pWnd)->OnDeleteCHMSDiseasePrehistoryDialog();
} 
static int _OnSaveCHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CCHMSDiseasePrehistoryDialog*)pWnd)->OnSaveCHMSDiseasePrehistoryDialog();
} 
static int _OnCancelCHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CCHMSDiseasePrehistoryDialog*)pWnd)->OnCancelCHMSDiseasePrehistoryDialog();
} 
CCHMSDiseasePrehistoryDialog::CCHMSDiseasePrehistoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSDiseasePrehistoryDialog::~CCHMSDiseasePrehistoryDialog(){
}
void CCHMSDiseasePrehistoryDialog::OnCreateComponents(){
	m_wndDiseasePrehistory.Create(this, _T("Disease Prehistory"), 5, 5, 600, 405);
	m_wndOwnerLabel.Create(this, _T("Owner"), 9, 30, 109, 55);
	m_wndOwner.Create(this,114, 30, 594, 150); 
	m_wndFamilyLabel.Create(this, _T("Family"), 9, 155, 109, 180);
	m_wndFamily.Create(this,114, 155, 594, 275); 
	m_wndDrugAllergyLabel.Create(this, _T("Drug Allergy"), 9, 280, 109, 305);
	m_wndDrugAllergy.Create(this,114, 280, 594, 400); 
	m_wndUpdate.Create(this, _T("&Save"), 445, 410, 520, 435);
	m_wndCancel.Create(this, _T("&Close"), 525, 410, 600, 435);

}
void CCHMSDiseasePrehistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOwner.SetLimitText(1024);
	m_wndOwner.SetCheckValue(true);
	m_wndFamily.SetLimitText(1024);
	m_wndFamily.SetCheckValue(true);
	m_wndDrugAllergy.SetLimitText(1024);
	m_wndDrugAllergy.SetCheckValue(true);

}
void CCHMSDiseasePrehistoryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	SetMode(VM_NONE);

}
void CCHMSDiseasePrehistoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
	DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
	DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);

}
void CCHMSDiseasePrehistoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSDiseasePrehistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSDiseasePrehistoryDialog::SetDefaultValues(){

	m_szOwner.Empty();
	m_szFamily.Empty();
	m_szDrugAllergy.Empty();

}
int CCHMSDiseasePrehistoryDialog::SetMode(int nMode){
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
/*void CCHMSDiseasePrehistoryDialog::OnOwnerChange(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnOwnerSetfocus(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnOwnerKillfocus(){
	
} */
int CCHMSDiseasePrehistoryDialog::OnOwnerCheckValue(){
	return 0;
} 
/*void CCHMSDiseasePrehistoryDialog::OnFamilyChange(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnFamilySetfocus(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnFamilyKillfocus(){
	
} */
int CCHMSDiseasePrehistoryDialog::OnFamilyCheckValue(){
	return 0;
} 
/*void CCHMSDiseasePrehistoryDialog::OnDrugAllergyChange(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnDrugAllergySetfocus(){
	
} */
/*void CCHMSDiseasePrehistoryDialog::OnDrugAllergyKillfocus(){
	
} */
int CCHMSDiseasePrehistoryDialog::OnDrugAllergyCheckValue(){
	return 0;
} 
void CCHMSDiseasePrehistoryDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDiseasePrehistoryDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDiseasePrehistoryDialog::OnAddCHMSDiseasePrehistoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSDiseasePrehistoryDialog::OnEditCHMSDiseasePrehistoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSDiseasePrehistoryDialog::OnDeleteCHMSDiseasePrehistoryDialog(){
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
 		OnCancelCHMSDiseasePrehistoryDialog();
 	}
	return 0;
}
int CCHMSDiseasePrehistoryDialog::OnSaveCHMSDiseasePrehistoryDialog(){
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
 		//OnCHMSDiseasePrehistoryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSDiseasePrehistoryDialog::OnCancelCHMSDiseasePrehistoryDialog(){
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
int CCHMSDiseasePrehistoryDialog::OnCHMSDiseasePrehistoryDialogListLoadData(){
	return 0;
}
