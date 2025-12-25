#include "ExamSpecialistEye.h"
#include "MainFrm.h"
/*static void _OnRightEyeChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEyeChange();
} */
/*static void _OnRightEyeSetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEyeSetfocus();} */ 
/*static void _OnRightEyeKillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEyeKillfocus();
} */
static int _OnRightEyeCheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnRightEyeCheckValue();
} 
/*static void _OnLeftEyeChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEyeChange();
} */
/*static void _OnLeftEyeSetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEyeSetfocus();} */ 
/*static void _OnLeftEyeKillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEyeKillfocus();
} */
static int _OnLeftEyeCheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnLeftEyeCheckValue();
} 
/*static void _OnRightEye1ChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye1Change();
} */
/*static void _OnRightEye1SetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye1Setfocus();} */ 
/*static void _OnRightEye1KillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye1Killfocus();
} */
static int _OnRightEye1CheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnRightEye1CheckValue();
} 
/*static void _OnLeftEye1ChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye1Change();
} */
/*static void _OnLeftEye1SetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye1Setfocus();} */ 
/*static void _OnLeftEye1KillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye1Killfocus();
} */
static int _OnLeftEye1CheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnLeftEye1CheckValue();
} 
/*static void _OnRightEye2ChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye2Change();
} */
/*static void _OnRightEye2SetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye2Setfocus();} */ 
/*static void _OnRightEye2KillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnRightEye2Killfocus();
} */
static int _OnRightEye2CheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnRightEye2CheckValue();
} 
/*static void _OnLeftEye2ChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye2Change();
} */
/*static void _OnLeftEye2SetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye2Setfocus();} */ 
/*static void _OnLeftEye2KillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnLeftEye2Killfocus();
} */
static int _OnLeftEye2CheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnLeftEye2CheckValue();
} 
/*static void _OnExplorFunctionChangeFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnExplorFunctionChange();
} */
/*static void _OnExplorFunctionSetfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnExplorFunctionSetfocus();} */ 
/*static void _OnExplorFunctionKillfocusFnc(CWnd *pWnd){
	((CExamSpecialistEye *)pWnd)->OnExplorFunctionKillfocus();
} */
static int _OnExplorFunctionCheckValueFnc(CWnd *pWnd){
	return ((CExamSpecialistEye *)pWnd)->OnExplorFunctionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CExamSpecialistEye *pVw = (CExamSpecialistEye *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CExamSpecialistEye *pVw = (CExamSpecialistEye *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddExamSpecialistEyeFnc(CWnd *pWnd){
	 return ((CExamSpecialistEye*)pWnd)->OnAddExamSpecialistEye();
} 
static int _OnEditExamSpecialistEyeFnc(CWnd *pWnd){
	 return ((CExamSpecialistEye*)pWnd)->OnEditExamSpecialistEye();
} 
static int _OnDeleteExamSpecialistEyeFnc(CWnd *pWnd){
	 return ((CExamSpecialistEye*)pWnd)->OnDeleteExamSpecialistEye();
} 
static int _OnSaveExamSpecialistEyeFnc(CWnd *pWnd){
	 return ((CExamSpecialistEye*)pWnd)->OnSaveExamSpecialistEye();
} 
static int _OnCancelExamSpecialistEyeFnc(CWnd *pWnd){
	 return ((CExamSpecialistEye*)pWnd)->OnCancelExamSpecialistEye();
} 
CExamSpecialistEye::CExamSpecialistEye(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 415;
	m_nDlgHeight = 255;
	m_szTitle = _T("Kh\xE1m \x63huy\xEAn kho\x61 m\x1EAFt");
	SetDefaultValues();
}
CExamSpecialistEye::~CExamSpecialistEye(){
}
void CExamSpecialistEye::OnCreateComponents(){
	m_wndRightEyeLabel.Create(this, _T("Right Eye"), 15, 35, 135, 60);
	m_wndRightEye.Create(this,140, 35, 200, 60); 
	m_wndcontrol_19.Create(this, _T(""), 5, 5, 405, 218);
	m_wndEyeNoGlass.Create(this, _T("Eye No Glass"), 10, 10, 400, 65);
	m_wndEyeHasGlass.Create(this, _T("Eye Has Glass"), 10, 70, 400, 125);
	m_wndLeftEyeLabel.Create(this, _T("Left Eye"), 210, 35, 330, 60);
	m_wndGlaucoma.Create(this, _T("Glaucoma"), 10, 130, 400, 185);
	m_wndLeftEye.Create(this,335, 35, 395, 60); 
	m_wndRightEye1Label.Create(this, _T("Right Eye"), 15, 95, 135, 120);
	m_wndRightEye1.Create(this,140, 95, 200, 120); 
	m_wndLeftEye1Label.Create(this, _T("Left Eye"), 210, 95, 330, 120);
	m_wndLeftEye1.Create(this,335, 95, 395, 120); 
	m_wndRightEye2Label.Create(this, _T("Right Eye"), 15, 155, 135, 180);
	m_wndRightEye2.Create(this,140, 155, 200, 180); 
	m_wndLeftEye2Label.Create(this, _T("Left Eye"), 210, 155, 330, 180);
	m_wndLeftEye2.Create(this,335, 155, 395, 180); 
	m_wndExplorFunctionLabel.Create(this, _T("Explor function"), 15, 190, 135, 215);
	m_wndExplorFunction.Create(this,140, 190, 395, 215); 
	m_wndSave.Create(this, _T("&Save"), 240, 224, 320, 249);
	m_wndClose.Create(this, _T("&Close"), 323, 224, 403, 249);

}
void CExamSpecialistEye::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRightEye.SetLimitText(5);
	m_wndRightEye.SetCheckValue(false);
	m_wndLeftEye.SetLimitText(5);
	m_wndLeftEye.SetCheckValue(false);
	m_wndRightEye1.SetLimitText(5);
	m_wndRightEye1.SetCheckValue(false);
	m_wndLeftEye1.SetLimitText(5);
	m_wndLeftEye1.SetCheckValue(false);
	m_wndRightEye2.SetLimitText(5);
	m_wndRightEye2.SetCheckValue(false);
	m_wndLeftEye2.SetLimitText(5);
	m_wndLeftEye2.SetCheckValue(false);
	m_wndExplorFunction.SetLimitText(35);
	m_wndExplorFunction.SetCheckValue(false);
	m_hms_advancedexmeyeTbl.SetTableName(_T("hms_advancedexmeye"));	
	m_hms_advancedexmeyeTbl.AddField(_T("haee_docno"), dfLong); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_deptid"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_receptid"), dfLong); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_roomid"), dfLong); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_bedid"), dfLong); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_idx"), dfLong); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_entrydte"), dfDateTime); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_unglassleft"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_unglassright"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_glassleft"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_glassright"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_eyeballleft"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_eyeballright"), dfText, 7); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_explorefunc"), dfText, 254); 
	m_hms_advancedexmeyeTbl.AddField(_T("haee_depttype"), dfText, 1); 
	
}
void CExamSpecialistEye::OnSetWindowEvents(){
	//m_wndRightEye.SetEvent(WE_CHANGE, _OnRightEyeChangeFnc);
	//m_wndRightEye.SetEvent(WE_SETFOCUS, _OnRightEyeSetfocusFnc);
	//m_wndRightEye.SetEvent(WE_KILLFOCUS, _OnRightEyeKillfocusFnc);
	m_wndRightEye.SetEvent(WE_CHECKVALUE, _OnRightEyeCheckValueFnc);
	//m_wndLeftEye.SetEvent(WE_CHANGE, _OnLeftEyeChangeFnc);
	//m_wndLeftEye.SetEvent(WE_SETFOCUS, _OnLeftEyeSetfocusFnc);
	//m_wndLeftEye.SetEvent(WE_KILLFOCUS, _OnLeftEyeKillfocusFnc);
	m_wndLeftEye.SetEvent(WE_CHECKVALUE, _OnLeftEyeCheckValueFnc);
	//m_wndRightEye1.SetEvent(WE_CHANGE, _OnRightEye1ChangeFnc);
	//m_wndRightEye1.SetEvent(WE_SETFOCUS, _OnRightEye1SetfocusFnc);
	//m_wndRightEye1.SetEvent(WE_KILLFOCUS, _OnRightEye1KillfocusFnc);
	m_wndRightEye1.SetEvent(WE_CHECKVALUE, _OnRightEye1CheckValueFnc);
	//m_wndLeftEye1.SetEvent(WE_CHANGE, _OnLeftEye1ChangeFnc);
	//m_wndLeftEye1.SetEvent(WE_SETFOCUS, _OnLeftEye1SetfocusFnc);
	//m_wndLeftEye1.SetEvent(WE_KILLFOCUS, _OnLeftEye1KillfocusFnc);
	m_wndLeftEye1.SetEvent(WE_CHECKVALUE, _OnLeftEye1CheckValueFnc);
	//m_wndRightEye2.SetEvent(WE_CHANGE, _OnRightEye2ChangeFnc);
	//m_wndRightEye2.SetEvent(WE_SETFOCUS, _OnRightEye2SetfocusFnc);
	//m_wndRightEye2.SetEvent(WE_KILLFOCUS, _OnRightEye2KillfocusFnc);
	m_wndRightEye2.SetEvent(WE_CHECKVALUE, _OnRightEye2CheckValueFnc);
	//m_wndLeftEye2.SetEvent(WE_CHANGE, _OnLeftEye2ChangeFnc);
	//m_wndLeftEye2.SetEvent(WE_SETFOCUS, _OnLeftEye2SetfocusFnc);
	//m_wndLeftEye2.SetEvent(WE_KILLFOCUS, _OnLeftEye2KillfocusFnc);
	m_wndLeftEye2.SetEvent(WE_CHECKVALUE, _OnLeftEye2CheckValueFnc);
	//m_wndExplorFunction.SetEvent(WE_CHANGE, _OnExplorFunctionChangeFnc);
	//m_wndExplorFunction.SetEvent(WE_SETFOCUS, _OnExplorFunctionSetfocusFnc);
	//m_wndExplorFunction.SetEvent(WE_KILLFOCUS, _OnExplorFunctionKillfocusFnc);
	m_wndExplorFunction.SetEvent(WE_CHECKVALUE, _OnExplorFunctionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	// lay ma ho so: hd_docno = 10000037
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_nDocNo = pMF->m_nDocumentNo;
	szSQL.Format(_T("Select count(*) from hms_advancedexmeye where haee_docno = %ld and haee_depttype ='I' "), m_nDocNo);
	
	int ret = rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		SetMode(VM_EDIT);
		GetDataToScreen();
	}
	else
	{
		SetMode(VM_ADD);
	}
	UpdateData(FALSE);


}
void CExamSpecialistEye::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRightEye.GetDlgCtrlID(), m_szRightEye);
	DDX_Text(pDX, m_wndLeftEye.GetDlgCtrlID(), m_szLeftEye);
	DDX_Text(pDX, m_wndRightEye1.GetDlgCtrlID(), m_szRightEye1);
	DDX_Text(pDX, m_wndLeftEye1.GetDlgCtrlID(), m_szLeftEye1);
	DDX_Text(pDX, m_wndRightEye2.GetDlgCtrlID(), m_szRightEye2);
	DDX_Text(pDX, m_wndLeftEye2.GetDlgCtrlID(), m_szLeftEye2);
	DDX_Text(pDX, m_wndExplorFunction.GetDlgCtrlID(), m_szExplorFunction);
}
void CExamSpecialistEye::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("Select * from hms_advancedexmeye where haee_docno = %ld and haee_depttype ='I' "), m_nDocNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("haee_docno"), m_nDocNo);		
		rs.GetValue(_T("haee_unglassleft"), m_szLeftEye);
		rs.GetValue(_T("haee_unglassright"), m_szRightEye);
		rs.GetValue(_T("haee_glassleft"), m_szLeftEye1);
		rs.GetValue(_T("haee_glassright"), m_szRightEye1);
		rs.GetValue(_T("haee_eyeballleft"), m_szLeftEye2);
		rs.GetValue(_T("haee_eyeballright"),m_szRightEye2);
		rs.GetValue(_T("haee_explorefunc"),m_szExplorFunction);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CExamSpecialistEye::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(haee_idx), 0)+1 FROM hms_advancedexmeye WHERE haee_docno= %ld"), m_nDocNo);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_advancedexmeyeTbl.SetTableName(_T("hms_advancedexmeye"));	
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_docno"), m_nDocNo); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_idx"), m_nID); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_entrydte"), pMF->GetSysDateTime()); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_deptid"),pMF->m_szDept); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_unglassleft"),m_szLeftEye); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_unglassright"), m_szRightEye); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_glassleft"), m_szLeftEye1); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_glassright"), m_szRightEye1); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_eyeballleft"), m_szLeftEye2); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_eyeballright"), m_szRightEye2); 
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_explorefunc"), m_szExplorFunction);
	m_hms_advancedexmeyeTbl.SetValue(_T("haee_depttype"), _T("I"));

}
void CExamSpecialistEye::SetDefaultValues(){

	m_szRightEye.Empty();
	m_szLeftEye.Empty();
	m_szRightEye1.Empty();
	m_szLeftEye1.Empty();
	m_szRightEye2.Empty();
	m_szLeftEye2.Empty();
	m_szExplorFunction.Empty();

}
int CExamSpecialistEye::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
/*void CExamSpecialistEye::OnRightEyeChange(){
	
} */
/*void CExamSpecialistEye::OnRightEyeSetfocus(){
	
} */
/*void CExamSpecialistEye::OnRightEyeKillfocus(){
	
} */
int CExamSpecialistEye::OnRightEyeCheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnLeftEyeChange(){
	
} */
/*void CExamSpecialistEye::OnLeftEyeSetfocus(){
	
} */
/*void CExamSpecialistEye::OnLeftEyeKillfocus(){
	
} */
int CExamSpecialistEye::OnLeftEyeCheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnRightEye1Change(){
	
} */
/*void CExamSpecialistEye::OnRightEye1Setfocus(){
	
} */
/*void CExamSpecialistEye::OnRightEye1Killfocus(){
	
} */
int CExamSpecialistEye::OnRightEye1CheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnLeftEye1Change(){
	
} */
/*void CExamSpecialistEye::OnLeftEye1Setfocus(){
	
} */
/*void CExamSpecialistEye::OnLeftEye1Killfocus(){
	
} */
int CExamSpecialistEye::OnLeftEye1CheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnRightEye2Change(){
	
} */
/*void CExamSpecialistEye::OnRightEye2Setfocus(){
	
} */
/*void CExamSpecialistEye::OnRightEye2Killfocus(){
	
} */
int CExamSpecialistEye::OnRightEye2CheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnLeftEye2Change(){
	
} */
/*void CExamSpecialistEye::OnLeftEye2Setfocus(){
	
} */
/*void CExamSpecialistEye::OnLeftEye2Killfocus(){
	
} */
int CExamSpecialistEye::OnLeftEye2CheckValue(){
	return 0;
} 
/*void CExamSpecialistEye::OnExplorFunctionChange(){
	
} */
/*void CExamSpecialistEye::OnExplorFunctionSetfocus(){
	
} */
/*void CExamSpecialistEye::OnExplorFunctionKillfocus(){
	
} */
int CExamSpecialistEye::OnExplorFunctionCheckValue(){
	return 0;
} 
void CExamSpecialistEye::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveExamSpecialistEye();
	
} 
void CExamSpecialistEye::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CExamSpecialistEye::OnAddExamSpecialistEye(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CExamSpecialistEye::OnEditExamSpecialistEye(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CExamSpecialistEye::OnDeleteExamSpecialistEye(){
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
 		OnCancelExamSpecialistEye(); 
 	}
	return 0;
}
int CExamSpecialistEye::OnSaveExamSpecialistEye(){
	 CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CString szSQL, msg; 
	/*
	msg = _T("S\x1ED1 h\x1ED3 s\x1A1 \x111\xE3 t\x1ED3n t\x1EA1i, kh\xF4ng \x111\x1B0\x1EE3\x63 ph\xE9p l\x1B0u!");
		if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_advancedexmeye WHERE haee_docno = %ld"), m_nDocNo);
		rs.ExecSQL(szSQL);
		int ret = rs.GetIntValue();
		if(ret > 0)
		{
			ShowMessageBox(msg, MB_OK|MB_ICONWARNING);
			return -1;
		}
	}*/
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_advancedexmeyeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE haee_docno = %ld and haee_depttype ='I' "), m_nDocNo); 
 		szSQL = m_hms_advancedexmeyeTbl.GetUpdateSQL(_T("haee_docno, haee_depttype,haee_idx")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 

 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW);
		//OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 

 //	return 0; 
}
int CExamSpecialistEye::OnCancelExamSpecialistEye(){
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
int CExamSpecialistEye::OnExamSpecialistEyeListLoadData(){
	return 0;
}
