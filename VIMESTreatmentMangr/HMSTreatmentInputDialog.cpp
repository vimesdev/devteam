#include "HMSTreatmentInputDialog.h"
#include "MainFrm.h"
/*static void _OnDiseaseTrackingChangeFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDiseaseTrackingChange();
} */
/*static void _OnDiseaseTrackingSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDiseaseTrackingSetfocus();} */ 
/*static void _OnDiseaseTrackingKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDiseaseTrackingKillfocus();
} */
static int _OnDiseaseTrackingCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentInputDialog *)pWnd)->OnDiseaseTrackingCheckValue();
} 
/*static void _OnTreatmentChangeFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnTreatmentChange();
} */
/*static void _OnTreatmentSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnTreatmentSetfocus();} */ 
/*static void _OnTreatmentKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnTreatmentKillfocus();
} */
static int _OnTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentInputDialog *)pWnd)->OnTreatmentCheckValue();
} 
/*static void _OnDietChangeFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDietChange();
} */
/*static void _OnDietSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDietSetfocus();} */ 
/*static void _OnDietKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentInputDialog *)pWnd)->OnDietKillfocus();
} */
static int _OnDietCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentInputDialog *)pWnd)->OnDietCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentInputDialog *pVw = (CHMSTreatmentInputDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentInputDialog *pVw = (CHMSTreatmentInputDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentInputDialog*)pWnd)->OnAddHMSTreatmentInputDialog();
} 
static int _OnEditHMSTreatmentInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentInputDialog*)pWnd)->OnEditHMSTreatmentInputDialog();
} 
static int _OnDeleteHMSTreatmentInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentInputDialog*)pWnd)->OnDeleteHMSTreatmentInputDialog();
} 
static int _OnSaveHMSTreatmentInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentInputDialog*)pWnd)->OnSaveHMSTreatmentInputDialog();
} 
static int _OnCancelHMSTreatmentInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentInputDialog*)pWnd)->OnCancelHMSTreatmentInputDialog();
} 
CHMSTreatmentInputDialog::CHMSTreatmentInputDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentInputDialog::~CHMSTreatmentInputDialog(){
}
void CHMSTreatmentInputDialog::OnCreateComponents(){
	m_wndDiseaseTrackingLabel.Create(this, _T("Disease Tracking"), 5, 5, 109, 30);
	m_wndDiseaseTracking.Create(this,5, 30, 498, 177); 
	m_wndTreatmentLabel.Create(this, _T("Treatment"), 5, 181, 109, 206);
	m_wndTreatment.Create(this,5, 212, 498, 359); 
	m_wndDietLabel.Create(this, _T("Diet"), 5, 365, 109, 390);
	m_wndDiet.Create(this,5, 394, 498, 541); 
	m_wndSave.Create(this, _T("&Save"), 331, 546, 411, 571);
	m_wndClose.Create(this, _T("&Close"), 417, 546, 497, 571);

}
void CHMSTreatmentInputDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiseaseTracking.SetLimitText(35);
	m_wndDiseaseTracking.SetCheckValue(true);
	m_wndTreatment.SetLimitText(35);
	m_wndTreatment.SetCheckValue(true);
	m_wndDiet.SetLimitText(35);
	m_wndDiet.SetCheckValue(true);

}
void CHMSTreatmentInputDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDiseaseTracking.SetEvent(WE_CHANGE, _OnDiseaseTrackingChangeFnc);
	//m_wndDiseaseTracking.SetEvent(WE_SETFOCUS, _OnDiseaseTrackingSetfocusFnc);
	//m_wndDiseaseTracking.SetEvent(WE_KILLFOCUS, _OnDiseaseTrackingKillfocusFnc);
	m_wndDiseaseTracking.SetEvent(WE_CHECKVALUE, _OnDiseaseTrackingCheckValueFnc);
	//m_wndTreatment.SetEvent(WE_CHANGE, _OnTreatmentChangeFnc);
	//m_wndTreatment.SetEvent(WE_SETFOCUS, _OnTreatmentSetfocusFnc);
	//m_wndTreatment.SetEvent(WE_KILLFOCUS, _OnTreatmentKillfocusFnc);
	m_wndTreatment.SetEvent(WE_CHECKVALUE, _OnTreatmentCheckValueFnc);
	//m_wndDiet.SetEvent(WE_CHANGE, _OnDietChangeFnc);
	//m_wndDiet.SetEvent(WE_SETFOCUS, _OnDietSetfocusFnc);
	//m_wndDiet.SetEvent(WE_KILLFOCUS, _OnDietKillfocusFnc);
	m_wndDiet.SetEvent(WE_CHECKVALUE, _OnDietCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentInputDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndTreatment.GetDlgCtrlID(), m_szTreatment);
	DDX_Text(pDX, m_wndDiet.GetDlgCtrlID(), m_szDiet);

}
void CHMSTreatmentInputDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentInputDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentInputDialog::SetDefaultValues(){

	m_szDiseaseTracking.Empty();
	m_szTreatment.Empty();
	m_szDiet.Empty();

}
int CHMSTreatmentInputDialog::SetMode(int nMode){
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
/*void CHMSTreatmentInputDialog::OnDiseaseTrackingChange(){
	
} */
/*void CHMSTreatmentInputDialog::OnDiseaseTrackingSetfocus(){
	
} */
/*void CHMSTreatmentInputDialog::OnDiseaseTrackingKillfocus(){
	
} */
int CHMSTreatmentInputDialog::OnDiseaseTrackingCheckValue(){
	return 0;
} 
/*void CHMSTreatmentInputDialog::OnTreatmentChange(){
	
} */
/*void CHMSTreatmentInputDialog::OnTreatmentSetfocus(){
	
} */
/*void CHMSTreatmentInputDialog::OnTreatmentKillfocus(){
	
} */
int CHMSTreatmentInputDialog::OnTreatmentCheckValue(){
	return 0;
} 
/*void CHMSTreatmentInputDialog::OnDietChange(){
	
} */
/*void CHMSTreatmentInputDialog::OnDietSetfocus(){
	
} */
/*void CHMSTreatmentInputDialog::OnDietKillfocus(){
	
} */
int CHMSTreatmentInputDialog::OnDietCheckValue(){
	return 0;
} 
void CHMSTreatmentInputDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentInputDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentInputDialog::OnAddHMSTreatmentInputDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentInputDialog::OnEditHMSTreatmentInputDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentInputDialog::OnDeleteHMSTreatmentInputDialog(){
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
 		OnCancelHMSTreatmentInputDialog();
 	}
	return 0;
}
int CHMSTreatmentInputDialog::OnSaveHMSTreatmentInputDialog(){
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
 		//OnHMSTreatmentInputDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentInputDialog::OnCancelHMSTreatmentInputDialog(){
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
int CHMSTreatmentInputDialog::OnHMSTreatmentInputDialogListLoadData(){
	return 0;
}
