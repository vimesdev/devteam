#include "HMSExamine3.h"
#include "MainFrm.h"
/*static void _OnPatientChangeFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientChange();
} */
/*static void _OnPatientSetfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientSetfocus();} */ 
/*static void _OnPatientKillfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientKillfocus();
} */
static int _OnPatientCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine3 *)pWnd)->OnPatientCheckValue();
} 
/*static void _OnPatientIdChangeFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientIdChange();
} */
/*static void _OnPatientIdSetfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientIdSetfocus();} */ 
/*static void _OnPatientIdKillfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnPatientIdKillfocus();
} */
static int _OnPatientIdCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine3 *)pWnd)->OnPatientIdCheckValue();
} 
/*static void _OnSurnameChangeFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnSurnameChange();
} */
/*static void _OnSurnameSetfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnSurnameSetfocus();} */ 
/*static void _OnSurnameKillfocusFnc(CWnd *pWnd){
	((CHMSExamine3 *)pWnd)->OnSurnameKillfocus();
} */
static int _OnSurnameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine3 *)pWnd)->OnSurnameCheckValue();
} 
static int _OnAddHMSExamine3Fnc(CWnd *pWnd){
	 return ((CHMSExamine3*)pWnd)->OnAddHMSExamine3();
} 
static int _OnEditHMSExamine3Fnc(CWnd *pWnd){
	 return ((CHMSExamine3*)pWnd)->OnEditHMSExamine3();
} 
static int _OnDeleteHMSExamine3Fnc(CWnd *pWnd){
	 return ((CHMSExamine3*)pWnd)->OnDeleteHMSExamine3();
} 
static int _OnSaveHMSExamine3Fnc(CWnd *pWnd){
	 return ((CHMSExamine3*)pWnd)->OnSaveHMSExamine3();
} 
static int _OnCancelHMSExamine3Fnc(CWnd *pWnd){
	 return ((CHMSExamine3*)pWnd)->OnCancelHMSExamine3();
} 
CHMSExamine3::CHMSExamine3(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExamine3::~CHMSExamine3(){
}
void CHMSExamine3::OnCreateComponents(){
	m_wndPatientLabel.Create(this, _T("patient"), 11, 10, 91, 35);
	m_wndPatient.Create(this,91, 10, 171, 35); 
	m_wndPatientIdLabel.Create(this, _T("patient id"), 11, 36, 91, 61);
	m_wndPatientId.Create(this,91, 36, 171, 61); 
	m_wndSurnameLabel.Create(this, _T("surname"), 11, 62, 91, 87);
	m_wndSurname.Create(this,91, 62, 171, 87); 

}
void CHMSExamine3::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatient.SetLimitText(22);
	m_wndPatient.SetCheckValue(true);
	m_wndPatientId.SetLimitText(15);
	m_wndPatientId.SetCheckValue(true);
	m_wndSurname.SetLimitText(15);
	m_wndSurname.SetCheckValue(true);
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("HP_CREATEDBY"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("HP_CREATEDDATE"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("HP_UPDATEDBY"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("HP_UPDATEDDATE"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("HP_PATIENTNO"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_PATIENTID"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("HP_SURNAME"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("HP_MIDNAME"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("HP_FIRSTNAME"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("HP_BIRTHDATE"), dfDate); 
	m_hms_patientTbl.AddField(_T("HP_SEX"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("HP_ETHNIC"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_RELIGION"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_SIN"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("HP_PROVID"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_DISTID"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_VILLID"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_DTLADDR"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("HP_OCCUPATION"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_WORKPLACEID"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("HP_WORKPLACE"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("HP_RANK"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_POSITION"), dfLong); 
	m_hms_patientTbl.AddField(_T("HP_STATUS"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("HP_TYPE"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("HP_CANCER"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("HP_NATIONALITY"), dfText, 3); 
	m_hms_patientTbl.AddField(_T("HP_DEPARTMENT"), dfText, 7); 
	m_hms_patientTbl.AddField(_T("HP_RECORDNO"), dfText, 15); 

}
void CHMSExamine3::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatient.SetEvent(WE_CHANGE, _OnPatientChangeFnc);
	//m_wndPatient.SetEvent(WE_SETFOCUS, _OnPatientSetfocusFnc);
	//m_wndPatient.SetEvent(WE_KILLFOCUS, _OnPatientKillfocusFnc);
	m_wndPatient.SetEvent(WE_CHECKVALUE, _OnPatientCheckValueFnc);
	//m_wndPatientId.SetEvent(WE_CHANGE, _OnPatientIdChangeFnc);
	//m_wndPatientId.SetEvent(WE_SETFOCUS, _OnPatientIdSetfocusFnc);
	//m_wndPatientId.SetEvent(WE_KILLFOCUS, _OnPatientIdKillfocusFnc);
	m_wndPatientId.SetEvent(WE_CHECKVALUE, _OnPatientIdCheckValueFnc);
	//m_wndSurname.SetEvent(WE_CHANGE, _OnSurnameChangeFnc);
	//m_wndSurname.SetEvent(WE_SETFOCUS, _OnSurnameSetfocusFnc);
	//m_wndSurname.SetEvent(WE_KILLFOCUS, _OnSurnameKillfocusFnc);
	m_wndSurname.SetEvent(WE_CHECKVALUE, _OnSurnameCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExamine3Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExamine3Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExamine3Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExamine3Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExamine3Fnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExamine3::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatient.GetDlgCtrlID(), m_nPatient);
	DDX_Text(pDX, m_wndPatientId.GetDlgCtrlID(), m_szPatientId);
	DDX_Text(pDX, m_wndSurname.GetDlgCtrlID(), m_szSurname);

}
void CHMSExamine3::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Patient")] =  m_nPatient;
	m_jData[_T("PatientId")] =  m_szPatientId;
	m_jData[_T("Surname")] =  m_szSurname;
	}
	else
	{
			
	m_jData[_T("Patient")].GetValue(m_nPatient);
	m_jData[_T("PatientId")].GetValue(m_szPatientId);
	m_jData[_T("Surname")].GetValue(m_szSurname);
	}

}
void CHMSExamine3::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HP_PATIENTNO"), m_nPatient);
	rs.GetValue(_T("HP_PATIENTID"), m_szPatientId);
	rs.GetValue(_T("HP_SURNAME"), m_szSurname);

}
void CHMSExamine3::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("HP_PATIENTNO"), m_nPatient);
	m_hms_patientTbl.SetValue(_T("HP_PATIENTID"), m_szPatientId);
	m_hms_patientTbl.SetValue(_T("HP_SURNAME"), m_szSurname);
	m_hms_patientTbl.SetValue(_T("HP_SURNAME"), m_szSurname);

}
void CHMSExamine3::SetDefaultValues(){

	m_nPatient=0;
	m_szPatientId.Empty();
	m_szSurname.Empty();

}
int CHMSExamine3::SetMode(int nMode){
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
/*void CHMSExamine3::OnPatientChange(){
	
} */
/*void CHMSExamine3::OnPatientSetfocus(){
	
} */
/*void CHMSExamine3::OnPatientKillfocus(){
	
} */
int CHMSExamine3::OnPatientCheckValue(){
	return 0;
} 
/*void CHMSExamine3::OnPatientIdChange(){
	
} */
/*void CHMSExamine3::OnPatientIdSetfocus(){
	
} */
/*void CHMSExamine3::OnPatientIdKillfocus(){
	
} */
int CHMSExamine3::OnPatientIdCheckValue(){
	return 0;
} 
/*void CHMSExamine3::OnSurnameChange(){
	
} */
/*void CHMSExamine3::OnSurnameSetfocus(){
	
} */
/*void CHMSExamine3::OnSurnameKillfocus(){
	
} */
int CHMSExamine3::OnSurnameCheckValue(){
	return 0;
} 
int CHMSExamine3::OnAddHMSExamine3(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExamine3::OnEditHMSExamine3(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExamine3::OnDeleteHMSExamine3(){
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
 		OnCancelHMSExamine3();
 	}
	return 0;
}
int CHMSExamine3::OnSaveHMSExamine3(){
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
 		//OnHMSExamine3ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExamine3::OnCancelHMSExamine3(){
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
int CHMSExamine3::OnHMSExamine3ListLoadData(){
	return 0;
}
