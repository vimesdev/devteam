#include "HMSConclusionDialog.h"
#include "MainFrm.h"
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSConclusionDialog* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSConclusionDialog *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSConclusionDialog *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSConclusionDialog *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSConclusionDialog *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSConclusionDialog *)pWnd)->OnConclusionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSConclusionDialog *pVw = (CHMSConclusionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSConclusionDialog *pVw = (CHMSConclusionDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSConclusionDialog*)pWnd)->OnAddHMSConclusionDialog();
} 
static int _OnEditHMSConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSConclusionDialog*)pWnd)->OnEditHMSConclusionDialog();
} 
static int _OnDeleteHMSConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSConclusionDialog*)pWnd)->OnDeleteHMSConclusionDialog();
} 
static int _OnSaveHMSConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSConclusionDialog*)pWnd)->OnSaveHMSConclusionDialog();
} 
static int _OnCancelHMSConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSConclusionDialog*)pWnd)->OnCancelHMSConclusionDialog();
} 
CHMSConclusionDialog::CHMSConclusionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 240;
	SetDefaultValues();
}
CHMSConclusionDialog::~CHMSConclusionDialog(){
}
void CHMSConclusionDialog::OnCreateComponents(){
	m_wndConclusionInformation.Create(this, _T("Conclusion Information"), 5, 6, 600, 201);
	m_wndICD10Label.Create(this, _T("ICD10"), 10, 30, 130, 55);
	m_wndICD10.Create(this,135, 30, 595, 55); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 60, 130, 85);
	m_wndMainDisease.Create(this,135, 60, 595, 85); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 90, 130, 115);
	m_wndRelationDisease.Create(this,135, 90, 595, 115); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 120, 130, 145);
	m_wndConclusion.Create(this,135, 120, 595, 195); 
	m_wndSave.Create(this, _T("&Save"), 445, 206, 520, 231);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 206, 600, 231);

}
void CHMSConclusionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(35);
	m_wndMainDisease.SetLimitText(35);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(35);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSConclusionDialog::OnSetWindowEvents(){
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
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSConclusionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CHMSConclusionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSConclusionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConclusionDialog::SetDefaultValues(){

	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();

}
int CHMSConclusionDialog::SetMode(int nMode){
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
void CHMSConclusionDialog::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConclusionDialog::OnICD10Selendok(){
	 
}
/*void CHMSConclusionDialog::OnICD10Setfocus(){
	
}*/
/*void CHMSConclusionDialog::OnICD10Killfocus(){
	
}*/
long CHMSConclusionDialog::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	};
	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSConclusionDialog::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSConclusionDialog::OnMainDiseaseChange(){
	
} */
/*void CHMSConclusionDialog::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSConclusionDialog::OnMainDiseaseKillfocus(){
	
} */
int CHMSConclusionDialog::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSConclusionDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSConclusionDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSConclusionDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSConclusionDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSConclusionDialog::OnConclusionChange(){
	
} */
/*void CHMSConclusionDialog::OnConclusionSetfocus(){
	
} */
/*void CHMSConclusionDialog::OnConclusionKillfocus(){
	
} */
int CHMSConclusionDialog::OnConclusionCheckValue(){
	return 0;
} 
void CHMSConclusionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConclusionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSConclusionDialog::OnAddHMSConclusionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSConclusionDialog::OnEditHMSConclusionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSConclusionDialog::OnDeleteHMSConclusionDialog(){
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
 		OnCancelHMSConclusionDialog(); 
 	}
	return 0;
}
int CHMSConclusionDialog::OnSaveHMSConclusionDialog(){
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
 		//OnHMSConclusionDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSConclusionDialog::OnCancelHMSConclusionDialog(){
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
int CHMSConclusionDialog::OnHMSConclusionDialogListLoadData(){
	return 0;
}
