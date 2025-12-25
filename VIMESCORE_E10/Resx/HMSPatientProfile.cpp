#include "HMSPatientProfile.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnYobCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfile *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfile *)pWnd)->OnSexCheckValue();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientProfile*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSPatientProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientProfile*)pWnd)->OnAddHMSPatientProfile();
} 
static int _OnEditHMSPatientProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientProfile*)pWnd)->OnEditHMSPatientProfile();
} 
static int _OnDeleteHMSPatientProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientProfile*)pWnd)->OnDeleteHMSPatientProfile();
} 
static int _OnSaveHMSPatientProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientProfile*)pWnd)->OnSaveHMSPatientProfile();
} 
static int _OnCancelHMSPatientProfileFnc(CWnd *pWnd){
	 return ((CHMSPatientProfile*)pWnd)->OnCancelHMSPatientProfile();
} 
CHMSPatientProfile::CHMSPatientProfile(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSPatientProfile::~CHMSPatientProfile(){
}
void CHMSPatientProfile::OnCreateComponents(){
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 5, 5, 100, 30);
	m_wndPatientNo.Create(this,105, 5, 200, 30); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 205, 5, 300, 30);
	m_wndDocumentNo.Create(this,305, 5, 400, 30); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 405, 5, 500, 30);
	m_wndRecordNo.Create(this,505, 5, 595, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 100, 60);
	m_wndPatientName.Create(this,105, 35, 400, 60); 
	m_wndYobLabel.Create(this, _T("Yob"), 405, 35, 500, 60);
	m_wndYob.Create(this,505, 35, 595, 60); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 5, 65, 100, 90);
	m_wndCardNo.Create(this,105, 65, 400, 90); 
	m_wndSexLabel.Create(this, _T("Sex"), 405, 65, 500, 90);
	m_wndSex.Create(this,505, 65, 595, 90); 
	m_wndTab.Create(this,5, 95, 595, 595); 

}
void CHMSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(35);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetCheckValue(true);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);

}
void CHMSPatientProfile::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientProfileFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_szPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);

}
void CHMSPatientProfile::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_szPatientNo;
	m_jData[_T("DocumentNo")] =  m_szDocumentNo;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("Sex")] =  m_szSex;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_szPatientNo);
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNo);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("Sex")].GetValue(m_szSex);
	}

}
void CHMSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientProfile::SetDefaultValues(){

	m_szPatientNo.Empty();
	m_szDocumentNo.Empty();
	m_szRecordNo.Empty();
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szCardNo.Empty();
	m_szSex.Empty();

}
int CHMSPatientProfile::SetMode(int nMode){
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
/*void CHMSPatientProfile::OnPatientNoChange(){
	
} */
/*void CHMSPatientProfile::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientProfile::OnPatientNoKillfocus(){
	
} */
int CHMSPatientProfile::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnDocumentNoChange(){
	
} */
/*void CHMSPatientProfile::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientProfile::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientProfile::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnRecordNoChange(){
	
} */
/*void CHMSPatientProfile::OnRecordNoSetfocus(){
	
} */
/*void CHMSPatientProfile::OnRecordNoKillfocus(){
	
} */
int CHMSPatientProfile::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnPatientNameChange(){
	
} */
/*void CHMSPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientProfile::OnPatientNameKillfocus(){
	
} */
int CHMSPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnYobChange(){
	
} */
/*void CHMSPatientProfile::OnYobSetfocus(){
	
} */
/*void CHMSPatientProfile::OnYobKillfocus(){
	
} */
int CHMSPatientProfile::OnYobCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnCardNoChange(){
	
} */
/*void CHMSPatientProfile::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientProfile::OnCardNoKillfocus(){
	
} */
int CHMSPatientProfile::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSPatientProfile::OnSexChange(){
	
} */
/*void CHMSPatientProfile::OnSexSetfocus(){
	
} */
/*void CHMSPatientProfile::OnSexKillfocus(){
	
} */
int CHMSPatientProfile::OnSexCheckValue(){
	return 0;
} 
void CHMSPatientProfile::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfile::OnAddHMSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientProfile::OnEditHMSPatientProfile(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientProfile::OnDeleteHMSPatientProfile(){
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
 		OnCancelHMSPatientProfile();
 	}
	return 0;
}
int CHMSPatientProfile::OnSaveHMSPatientProfile(){
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
 		//OnHMSPatientProfileListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientProfile::OnCancelHMSPatientProfile(){
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
int CHMSPatientProfile::OnHMSPatientProfileListLoadData(){
	return 0;
}
