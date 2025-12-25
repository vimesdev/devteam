#include "HMSDocApproveEntryDialog.h"
#include "MainFrame_E10.h"
/*static void _OnApproveDateChangeFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnApproveDateChange();
} */
/*static void _OnApproveDateSetfocusFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnApproveDateSetfocus();} */ 
/*static void _OnApproveDateKillfocusFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnApproveDateKillfocus();
} */
static int _OnApproveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApproveEntryDialog *)pWnd)->OnApproveDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDocApproveEntryDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApproveEntryDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSDocApproveEntryDialog *pVw = (CHMSDocApproveEntryDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDocApproveEntryDialog *pVw = (CHMSDocApproveEntryDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDocApproveEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDocApproveEntryDialog*)pWnd)->OnAddHMSDocApproveEntryDialog();
} 
static int _OnEditHMSDocApproveEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDocApproveEntryDialog*)pWnd)->OnEditHMSDocApproveEntryDialog();
} 
static int _OnDeleteHMSDocApproveEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDocApproveEntryDialog*)pWnd)->OnDeleteHMSDocApproveEntryDialog();
} 
static int _OnSaveHMSDocApproveEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDocApproveEntryDialog*)pWnd)->OnSaveHMSDocApproveEntryDialog();
} 
static int _OnCancelHMSDocApproveEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDocApproveEntryDialog*)pWnd)->OnCancelHMSDocApproveEntryDialog();
} 
CHMSDocApproveEntryDialog::CHMSDocApproveEntryDialog(CWnd *pParent, bool bFlag):
	CGuiDialog(pParent){
	m_bFlag = bFlag;
	m_nDlgWidth = 425;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSDocApproveEntryDialog::~CHMSDocApproveEntryDialog(){
}
void CHMSDocApproveEntryDialog::OnCreateComponents(){
	if(m_bFlag)
	{
		m_wndApproveInformation.Create(this, _T("Approve Information"), 6, 5, 421, 90);
		m_wndApproveDateLabel.Create(this, _T("Approve Date"), 10, 30, 110, 55);
		m_wndApproveDate.Create(this,115, 30, 245, 55); 
		m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 110, 85);
		m_wndNote.Create(this,115, 60, 415, 85); 
		m_wndOK.Create(this, _T("&OK"), 246, 95, 331, 120);
		m_wndCancel.Create(this, _T("&Cancel"), 336, 95, 421, 120);
		
	}
	else
	{
		m_wndApproveInformation.Create(this, _T("Cancel Information"), 6, 5, 421, 90);
		m_wndApproveDateLabel.Create(this, _T("Cancel Date"), 10, 30, 110, 55);
		m_wndApproveDate.Create(this,115, 30, 215, 55); 
		m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 110, 85);
		m_wndNote.Create(this,115, 60, 415, 85); 
		m_wndOK.Create(this, _T("&OK"), 246, 95, 331, 120);
		m_wndCancel.Create(this, _T("&Cancel"), 336, 95, 421, 120);
		
	}
}
void CHMSDocApproveEntryDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndApproveDate.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);
	m_szApproveDate = pMF->GetSysDateTime();
	if(!m_bFlag)
	{
		m_wndApproveDate.SetReadOnly(TRUE);
		m_wndApproveDate.SetCheckValue(false);
		m_wndNote.SetCheckValue(true);
	}
}
void CHMSDocApproveEntryDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndApproveDate.SetEvent(WE_CHANGE, _OnApproveDateChangeFnc);
	//m_wndApproveDate.SetEvent(WE_SETFOCUS, _OnApproveDateSetfocusFnc);
	//m_wndApproveDate.SetEvent(WE_KILLFOCUS, _OnApproveDateKillfocusFnc);
	m_wndApproveDate.SetEvent(WE_CHECKVALUE, _OnApproveDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);

}
void CHMSDocApproveEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApproveDate.GetDlgCtrlID(), m_szApproveDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSDocApproveEntryDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDocApproveEntryDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSDocApproveEntryDialog::SetDefaultValues(){

	m_szApproveDate.Empty();
	m_szNote.Empty();

}
int CHMSDocApproveEntryDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CHMSDocApproveEntryDialog::OnApproveDateChange(){
	
} */
/*void CHMSDocApproveEntryDialog::OnApproveDateSetfocus(){
	
} */
/*void CHMSDocApproveEntryDialog::OnApproveDateKillfocus(){
	
} */
int CHMSDocApproveEntryDialog::OnApproveDateCheckValue(){
	if(m_bFlag)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		int n = CompareDate(m_szApproveDate, pMF->GetSysDate());
		if(n > 5 || n < -5)
			return -1;
	}
	return 0;
} 
/*void CHMSDocApproveEntryDialog::OnNoteChange(){
	
} */
/*void CHMSDocApproveEntryDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDocApproveEntryDialog::OnNoteKillfocus(){
	
} */
int CHMSDocApproveEntryDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDocApproveEntryDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CHMSDocApproveEntryDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDocApproveEntryDialog::OnAddHMSDocApproveEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDocApproveEntryDialog::OnEditHMSDocApproveEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDocApproveEntryDialog::OnDeleteHMSDocApproveEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSDocApproveEntryDialog();
 	}
	return 0;
}
int CHMSDocApproveEntryDialog::OnSaveHMSDocApproveEntryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnHMSDocApproveEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDocApproveEntryDialog::OnCancelHMSDocApproveEntryDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CHMSDocApproveEntryDialog::OnHMSDocApproveEntryDialogListLoadData(){
	return 0;
}
