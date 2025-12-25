#include "Patientinfo.h"
#include "MainFrm.h"
/*static void _OnPatientNOChangeFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNOChange();
} */
/*static void _OnPatientNOSetfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNOSetfocus();} */ 
/*static void _OnPatientNOKillfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNOKillfocus();
} */
static int _OnPatientNOCheckValueFnc(CWnd *pWnd){
	return ((CPatientinfo *)pWnd)->OnPatientNOCheckValue();
} 
/*static void _OnPatientNamChangeFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNamChange();
} */
/*static void _OnPatientNamSetfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNamSetfocus();} */ 
/*static void _OnPatientNamKillfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnPatientNamKillfocus();
} */
static int _OnPatientNamCheckValueFnc(CWnd *pWnd){
	return ((CPatientinfo *)pWnd)->OnPatientNamCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CPatientinfo *)pWnd)->OnBirthDateCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CPatientinfo *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CPatientinfo *)pWnd)->OnSexCheckValue();
} 
static int _OnAddPatientinfoFnc(CWnd *pWnd){
	 return ((CPatientinfo*)pWnd)->OnAddPatientinfo();
} 
static int _OnEditPatientinfoFnc(CWnd *pWnd){
	 return ((CPatientinfo*)pWnd)->OnEditPatientinfo();
} 
static int _OnDeletePatientinfoFnc(CWnd *pWnd){
	 return ((CPatientinfo*)pWnd)->OnDeletePatientinfo();
} 
static int _OnSavePatientinfoFnc(CWnd *pWnd){
	 return ((CPatientinfo*)pWnd)->OnSavePatientinfo();
} 
static int _OnCancelPatientinfoFnc(CWnd *pWnd){
	 return ((CPatientinfo*)pWnd)->OnCancelPatientinfo();
} 
CPatientinfo::CPatientinfo(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CPatientinfo::~CPatientinfo(){
}
void CPatientinfo::OnCreateComponents(){
	m_wndPatientNOLabel.Create(this, _T("Patient nO"), 5, 5, 85, 30);
	m_wndPatientNO.Create(this,85, 5, 165, 30); 
	m_wndPatientNamLabel.Create(this, _T("Patient Nam"), 5, 38, 85, 63);
	m_wndPatientNam.Create(this,85, 38, 165, 63); 
	m_wndBirthDateLabel.Create(this, _T("Birth date"), 5, 64, 85, 89);
	m_wndBirthDate.Create(this,85, 64, 165, 89); 
	m_wndSexLabel.Create(this, _T("Sex"), 5, 90, 85, 115);
	m_wndSex.Create(this,85, 90, 165, 115); 

}
void CPatientinfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNO.SetCheckValue(true);
	m_wndPatientNam.SetLimitText(15);
	m_wndPatientNam.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetLimitText(1);
	m_wndSex.SetCheckValue(true);
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_updateddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_ethnic"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_religion"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_provid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_distid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_villid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_occupation"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_rank"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_position"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_type"), dfText, 1); 

}
void CPatientinfo::OnSetWindowEvents(){
	//m_wndPatientNO.SetEvent(WE_CHANGE, _OnPatientNOChangeFnc);
	//m_wndPatientNO.SetEvent(WE_SETFOCUS, _OnPatientNOSetfocusFnc);
	//m_wndPatientNO.SetEvent(WE_KILLFOCUS, _OnPatientNOKillfocusFnc);
	m_wndPatientNO.SetEvent(WE_CHECKVALUE, _OnPatientNOCheckValueFnc);
	//m_wndPatientNam.SetEvent(WE_CHANGE, _OnPatientNamChangeFnc);
	//m_wndPatientNam.SetEvent(WE_SETFOCUS, _OnPatientNamSetfocusFnc);
	//m_wndPatientNam.SetEvent(WE_KILLFOCUS, _OnPatientNamKillfocusFnc);
	m_wndPatientNam.SetEvent(WE_CHECKVALUE, _OnPatientNamCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPatientinfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPatientinfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePatientinfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePatientinfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPatientinfoFnc, 0, 'T', VK_CONTROL);

}
void CPatientinfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNO.GetDlgCtrlID(), m_nPatientNO);
	DDX_Text(pDX, m_wndPatientNam.GetDlgCtrlID(), m_szPatientNam);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);

}
void CPatientinfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hp_patientno"), m_nPatientNO);
	rs.GetValue(_T("hp_surname"), m_szPatientNam);
	rs.GetValue(_T("hp_birthdate"), m_szBirthDate);
	rs.GetValue(_T("hp_sex"), m_szSex);

}
void CPatientinfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNO);
	m_hms_patientTbl.SetValue(_T("hp_surname"), m_szPatientNam);
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSex);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSex);

}
void CPatientinfo::SetDefaultValues(){

	m_nPatientNO=0;
	m_szPatientNam.Empty();
	m_szBirthDate.Empty();
	m_szSex.Empty();

}
int CPatientinfo::SetMode(int nMode){
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
/*void CPatientinfo::OnPatientNOChange(){
	
} */
/*void CPatientinfo::OnPatientNOSetfocus(){
	
} */
/*void CPatientinfo::OnPatientNOKillfocus(){
	
} */
int CPatientinfo::OnPatientNOCheckValue(){
	return 0;
} 
/*void CPatientinfo::OnPatientNamChange(){
	
} */
/*void CPatientinfo::OnPatientNamSetfocus(){
	
} */
/*void CPatientinfo::OnPatientNamKillfocus(){
	
} */
int CPatientinfo::OnPatientNamCheckValue(){
	return 0;
} 
/*void CPatientinfo::OnBirthDateChange(){
	
} */
/*void CPatientinfo::OnBirthDateSetfocus(){
	
} */
/*void CPatientinfo::OnBirthDateKillfocus(){
	
} */
int CPatientinfo::OnBirthDateCheckValue(){
	return 0;
} 
/*void CPatientinfo::OnSexChange(){
	
} */
/*void CPatientinfo::OnSexSetfocus(){
	
} */
/*void CPatientinfo::OnSexKillfocus(){
	
} */
int CPatientinfo::OnSexCheckValue(){
	return 0;
} 
int CPatientinfo::OnAddPatientinfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPatientinfo::OnEditPatientinfo(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPatientinfo::OnDeletePatientinfo(){
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
 		OnCancelPatientinfo(); 
 	}
	return 0;
}
int CPatientinfo::OnSavePatientinfo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_patientTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patientTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPatientinfoListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPatientinfo::OnCancelPatientinfo(){
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
int CPatientinfo::OnPatientinfoListLoadData(){
	return 0;
}
