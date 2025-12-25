#include "HMSCancerTreatDiagCategory.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagCategory *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagCategory *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagCategory *)pWnd)->OnDescCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagCategory *pVw = (CHMSCancerTreatDiagCategory *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagCategory *pVw = (CHMSCancerTreatDiagCategory *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCancerTreatDiagCategoryFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagCategory*)pWnd)->OnAddHMSCancerTreatDiagCategory();
} 
static int _OnEditHMSCancerTreatDiagCategoryFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagCategory*)pWnd)->OnEditHMSCancerTreatDiagCategory();
} 
static int _OnDeleteHMSCancerTreatDiagCategoryFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagCategory*)pWnd)->OnDeleteHMSCancerTreatDiagCategory();
} 
static int _OnSaveHMSCancerTreatDiagCategoryFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagCategory*)pWnd)->OnSaveHMSCancerTreatDiagCategory();
} 
static int _OnCancelHMSCancerTreatDiagCategoryFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagCategory*)pWnd)->OnCancelHMSCancerTreatDiagCategory();
} 
CHMSCancerTreatDiagCategory::CHMSCancerTreatDiagCategory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiagCategory::~CHMSCancerTreatDiagCategory(){
}
void CHMSCancerTreatDiagCategory::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 505, 95);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 160, 55);
	m_wndID.Create(this,165, 29, 500, 54); 
	m_wndDescLabel.Create(this, _T("Desc"), 10, 60, 160, 85);
	m_wndDesc.Create(this,165, 60, 500, 85); 
	m_wndSave.Create(this, _T("&Save"), 335, 100, 415, 125);
	m_wndCancel.Create(this, _T("&Cancel"), 420, 100, 500, 125);

}
void CHMSCancerTreatDiagCategory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	m_wndID.SetLimitText(35);
 	m_wndID.SetCheckValue(true);
 	m_wndDesc.SetLimitText(254);
 	m_wndDesc.SetCheckValue(true);

	hms_cancer_treatdiag.SetTableName(_T("hms_cancer_treatdiag"));
	hms_cancer_treatdiag.AddField(_T("hct_cancer_treatdiag_id"), dfText);
	hms_cancer_treatdiag.AddField(_T("hct_desc"), dfText);

}
void CHMSCancerTreatDiagCategory::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();

}
void CHMSCancerTreatDiagCategory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);

}
void CHMSCancerTreatDiagCategory::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Desc")] =  m_szDesc;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Desc")].GetValue(m_szDesc);
	}

}
void CHMSCancerTreatDiagCategory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("   SELECT ") \
		_T("   hct_cancer_treatdiag_id,") \
		_T("   hct_desc") \
		_T("   FROM hms_cancer_treatdiag") \
		_T("   WHERE hct_cancer_treatdiag_id = '%s'") \
		_T("   ORDER BY hct_cancer_treatdiag_id"), m_szID);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hct_desc"), m_szDesc);

		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CHMSCancerTreatDiagCategory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	hms_cancer_treatdiag.SetValue(_T("hct_cancer_treatdiag_id"), m_szID);
	hms_cancer_treatdiag.SetValue(_T("hct_desc"), m_szDesc);
}
void CHMSCancerTreatDiagCategory::SetDefaultValues(){

	m_szID.Empty();
	m_szDesc.Empty();

}
int CHMSCancerTreatDiagCategory::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			m_wndID.EnableWindow(FALSE);
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
/*void CHMSCancerTreatDiagCategory::OnIDChange(){
	
} */
/*void CHMSCancerTreatDiagCategory::OnIDSetfocus(){
	
} */
/*void CHMSCancerTreatDiagCategory::OnIDKillfocus(){
	
} */
int CHMSCancerTreatDiagCategory::OnIDCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagCategory::OnDescChange(){
	
} */
/*void CHMSCancerTreatDiagCategory::OnDescSetfocus(){
	
} */
/*void CHMSCancerTreatDiagCategory::OnDescKillfocus(){
	
} */
int CHMSCancerTreatDiagCategory::OnDescCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagCategory::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCancerTreatDiagCategory();
} 
void CHMSCancerTreatDiagCategory::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCancerTreatDiagCategory::OnAddHMSCancerTreatDiagCategory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagCategory::OnEditHMSCancerTreatDiagCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagCategory::OnDeleteHMSCancerTreatDiagCategory(){
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
 		OnCancelHMSCancerTreatDiagCategory();
 	}
	return 0;
}
int CHMSCancerTreatDiagCategory::OnSaveHMSCancerTreatDiagCategory(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = hms_cancer_treatdiag.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hct_cancer_treatdiag_id = '%s'"), m_szID);
		szSQL = hms_cancer_treatdiag.GetUpdateSQL(_T("hct_cancer_treatdiag_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSCancerTreatDiagCategoryListLoadData();
 		SetMode(VM_VIEW);
		OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiagCategory::OnCancelHMSCancerTreatDiagCategory(){
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
int CHMSCancerTreatDiagCategory::OnHMSCancerTreatDiagCategoryListLoadData(){
	return 0;
}
