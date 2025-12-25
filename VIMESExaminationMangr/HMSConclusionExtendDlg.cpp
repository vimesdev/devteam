#include "HMSConclusionExtendDlg.h"
#include "HMSMainFrame.h"
/*static void _OnInfoChangeFnc(CWnd *pWnd){
	((CHMSConclusionExtendDlg *)pWnd)->OnInfoChange();
} */
/*static void _OnInfoSetfocusFnc(CWnd *pWnd){
	((CHMSConclusionExtendDlg *)pWnd)->OnInfoSetfocus();} */ 
/*static void _OnInfoKillfocusFnc(CWnd *pWnd){
	((CHMSConclusionExtendDlg *)pWnd)->OnInfoKillfocus();
} */
static int _OnInfoCheckValueFnc(CWnd *pWnd){
	return ((CHMSConclusionExtendDlg *)pWnd)->OnInfoCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSConclusionExtendDlg *pVw = (CHMSConclusionExtendDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddHMSNoteExtendDlgFnc(CWnd *pWnd){
	 return ((CHMSConclusionExtendDlg*)pWnd)->OnAddHMSNoteExtendDlg();
} 
static int _OnEditHMSNoteExtendDlgFnc(CWnd *pWnd){
	 return ((CHMSConclusionExtendDlg*)pWnd)->OnEditHMSNoteExtendDlg();
} 
static int _OnDeleteHMSNoteExtendDlgFnc(CWnd *pWnd){
	 return ((CHMSConclusionExtendDlg*)pWnd)->OnDeleteHMSNoteExtendDlg();
} 
static int _OnSaveHMSNoteExtendDlgFnc(CWnd *pWnd){
	 return ((CHMSConclusionExtendDlg*)pWnd)->OnSaveHMSNoteExtendDlg();
} 
static int _OnCancelHMSNoteExtendDlgFnc(CWnd *pWnd){
	 return ((CHMSConclusionExtendDlg*)pWnd)->OnCancelHMSNoteExtendDlg();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSConclusionExtendDlg *pVw = (CHMSConclusionExtendDlg *)pWnd;
	pVw->OnCloseSelect();
} 
CHMSConclusionExtendDlg::CHMSConclusionExtendDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_pWndParent = pParent;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSConclusionExtendDlg::~CHMSConclusionExtendDlg(){
}
void CHMSConclusionExtendDlg::OnCreateComponents()
{
	m_wndInfo.Create(this,5, 4, 680, 330, 1, 0, 1);
	m_wndSave.Create(this, _T("&Save"), 500, 335, 580, 360);
	m_wndClose.Create(this, _T("&Close"), 595, 335, 675, 360);
}
void CHMSConclusionExtendDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndInfo.SetLimitText(2048);
	m_wndInfo.SetCheckValue(true);
	SetWindowTitle(_T("Information"));

}
void CHMSConclusionExtendDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndInfo.SetEvent(WE_CHANGE, _OnInfoChangeFnc);
	//m_wndInfo.SetEvent(WE_SETFOCUS, _OnInfoSetfocusFnc);
	//m_wndInfo.SetEvent(WE_KILLFOCUS, _OnInfoKillfocusFnc);
	m_wndInfo.SetEvent(WE_CHECKVALUE, _OnInfoCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	//BOOL bEnable = m_pWndParent->IsWindowEnabled();
	//m_wndInfo.EnableWindow(bEnable);
	//m_wndSave.EnableWindow(bEnable);
	if(!pMF->CheckPermission(_T("admin.EM.200.1")))
	{
	m_wndSave.EnableWindow(false);
	m_wndInfo.EnableWindow(false);
	}
	else
	{
	m_wndSave.EnableWindow(true);
	m_wndInfo.EnableWindow(true);
	}
}
void CHMSConclusionExtendDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInfo.GetDlgCtrlID(), m_szInfo);

}
void CHMSConclusionExtendDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Info")] =  m_szInfo;
	}
	else
	{
			
	m_jData[_T("Info")].GetValue(m_szInfo);
	}

}
void CHMSConclusionExtendDlg::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_pParentWnd->GetWindowText(m_szInfo);
	UpdateData(FALSE);
}
void CHMSConclusionExtendDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSConclusionExtendDlg::SetDefaultValues(){

	m_szInfo.Empty();

}
int CHMSConclusionExtendDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 1, 4, -1);
 			SetDefaultValues();
 			break;
 		};
		//if(pMF->CheckPermission(_T("admin.EM.200.1")))
		//{
		//	m_wndSave.EnableWindow(false);
		//	m_wndInfo.SetReadOnly(true);
		//}
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSConclusionExtendDlg::OnInfoChange(){
	
} */
/*void CHMSConclusionExtendDlg::OnInfoSetfocus(){
	
} */
/*void CHMSConclusionExtendDlg::OnInfoKillfocus(){
	
} */
int CHMSConclusionExtendDlg::OnInfoCheckValue(){
	return 0;
} 
void CHMSConclusionExtendDlg::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSNoteExtendDlg();
}
void CHMSConclusionExtendDlg::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSConclusionExtendDlg::OnAddHMSNoteExtendDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSConclusionExtendDlg::OnEditHMSNoteExtendDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSConclusionExtendDlg::OnDeleteHMSNoteExtendDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSNoteExtendDlg();
 	}
	return 0;
}
int CHMSConclusionExtendDlg::OnSaveHMSNoteExtendDlg()
{
 	 if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int ret = 10;
	szSQL.Format(_T("HMS_UPDATE_CONCLUSION_INFOR(%ld, '%s') "), m_nDocno, m_szInfo);
	ret = str2long(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if (ret <=0)
	{
		ShowMessageBox(_T("Không cập nhật được thông tin!"),MB_ICONERROR);
		return 0;
	}
	else
		OnOK();
	return 0;
}
int CHMSConclusionExtendDlg::OnCancelHMSNoteExtendDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSConclusionExtendDlg::OnHMSNoteExtendDlgListLoadData(){
	return 0;
}
