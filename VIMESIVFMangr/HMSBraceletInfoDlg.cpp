#include "HMSBraceletInfoDlg.h"
#include "MainFrm.h"
/*static void _OnIssueNumberChangeFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnIssueNumberChange();
} */
/*static void _OnIssueNumberSetfocusFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnIssueNumberSetfocus();} */ 
/*static void _OnIssueNumberKillfocusFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnIssueNumberKillfocus();
} */
static int _OnIssueNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSBraceletInfoDlg *)pWnd)->OnIssueNumberCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSBraceletInfoDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSBraceletInfoDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSBraceletInfoDlg *pVw = (CHMSBraceletInfoDlg *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBraceletInfoDlg *pVw = (CHMSBraceletInfoDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBraceletInfoDlg *pVw = (CHMSBraceletInfoDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBraceletInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSBraceletInfoDlg*)pWnd)->OnAddHMSBraceletInfoDlg();
} 
static int _OnEditHMSBraceletInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSBraceletInfoDlg*)pWnd)->OnEditHMSBraceletInfoDlg();
} 
static int _OnDeleteHMSBraceletInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSBraceletInfoDlg*)pWnd)->OnDeleteHMSBraceletInfoDlg();
} 
static int _OnSaveHMSBraceletInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSBraceletInfoDlg*)pWnd)->OnSaveHMSBraceletInfoDlg();
} 
static int _OnCancelHMSBraceletInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSBraceletInfoDlg*)pWnd)->OnCancelHMSBraceletInfoDlg();
} 
CHMSBraceletInfoDlg::CHMSBraceletInfoDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSBraceletInfoDlg::~CHMSBraceletInfoDlg(){
}
void CHMSBraceletInfoDlg::OnCreateComponents(){
	m_wndBraceletInfo.Create(this, _T("Bracelet Info"), 5, 5, 505, 105);
	m_wndIssueNumberLabel.Create(this, _T("Issue Number"), 10, 30, 90, 55);
	m_wndIssueNumber.Create(this,95, 30, 500, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 500, 100); 
	m_wndUpdate.Create(this, _T("Update"), 225, 110, 315, 135);
	m_wndSave.Create(this, _T("Save"), 320, 110, 410, 135);
	m_wndClose.Create(this, _T("Close"), 415, 110, 505, 135);

}
void CHMSBraceletInfoDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndIssueNumber.SetLimitText(16);
	m_wndIssueNumber.SetCheckValue(true);
	m_wndNote.SetLimitText(250);
	m_wndNote.SetCheckValue(true);

}
void CHMSBraceletInfoDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndIssueNumber.SetEvent(WE_CHANGE, _OnIssueNumberChangeFnc);
	//m_wndIssueNumber.SetEvent(WE_SETFOCUS, _OnIssueNumberSetfocusFnc);
	//m_wndIssueNumber.SetEvent(WE_KILLFOCUS, _OnIssueNumberKillfocusFnc);
	m_wndIssueNumber.SetEvent(WE_CHECKVALUE, _OnIssueNumberCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//SetMode(VM_NONE);

	GetDataToScreen();

}
void CHMSBraceletInfoDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndIssueNumber.GetDlgCtrlID(), m_nIssueNumber);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSBraceletInfoDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{	
		m_jData[_T("IssueNumber")] =  m_nIssueNumber;
		m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
		m_jData[_T("IssueNumber")].GetValue(m_nIssueNumber);
		m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSBraceletInfoDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_docno = %ld and htr_idx = %d"), m_nDocNo, m_nRefIDx);
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_brace_no"), m_nIssueNumber);
		rs.GetValue(_T("htr_brace_note"), m_szNote);
	}
	if(m_nIssueNumber > 0)
		SetMode(VM_VIEW);
	else
		SetMode(VM_ADD);

}
void CHMSBraceletInfoDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBraceletInfoDlg::SetDefaultValues(){

	m_nIssueNumber=1;
	m_szNote.Empty();

}
int CHMSBraceletInfoDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
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
/*void CHMSBraceletInfoDlg::OnIssueNumberChange(){
	
} */
/*void CHMSBraceletInfoDlg::OnIssueNumberSetfocus(){
	
} */
/*void CHMSBraceletInfoDlg::OnIssueNumberKillfocus(){
	
} */
int CHMSBraceletInfoDlg::OnIssueNumberCheckValue(){
	return 0;
} 
/*void CHMSBraceletInfoDlg::OnNoteChange(){
	
} */
/*void CHMSBraceletInfoDlg::OnNoteSetfocus(){
	
} */
/*void CHMSBraceletInfoDlg::OnNoteKillfocus(){
	
} */
int CHMSBraceletInfoDlg::OnNoteCheckValue(){
	return 0;
} 
void CHMSBraceletInfoDlg::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSBraceletInfoDlg();
} 
void CHMSBraceletInfoDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSBraceletInfoDlg();
} 
void CHMSBraceletInfoDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSBraceletInfoDlg::OnAddHMSBraceletInfoDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBraceletInfoDlg::OnEditHMSBraceletInfoDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	if(m_nIssueNumber > 0)
		SetMode(VM_EDIT);
	else
		SetMode(VM_ADD);
	return 0;  
}
int CHMSBraceletInfoDlg::OnDeleteHMSBraceletInfoDlg(){
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
 		OnCancelHMSBraceletInfoDlg();
 	}
	return 0;
}
int CHMSBraceletInfoDlg::OnSaveHMSBraceletInfoDlg(){
 	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	UpdateData(TRUE);
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("UPDATE hms_treatment_record SET htr_brace_no = %d, htr_brace_note = '%s', htr_brace_date = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') ") \
			_T(" WHERE htr_docno = %ld AND htr_idx = %ld"),m_nIssueNumber,m_szNote, pMF->GetSysDateTime(), m_nDocNo, m_nRefIDx);
 	}else if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("UPDATE hms_treatment_record SET htr_brace_no = %d, htr_brace_note = '%s', htr_brace_updateddate = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') ") \
			_T(" WHERE htr_docno = %ld AND htr_idx = %ld"),m_nIssueNumber, m_szNote, pMF->GetSysDateTime(), m_nDocNo, m_nRefIDx);
	}
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSBraceletInfoDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBraceletInfoDlg::OnCancelHMSBraceletInfoDlg(){
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
int CHMSBraceletInfoDlg::OnHMSBraceletInfoDlgListLoadData(){
	return 0;
}
