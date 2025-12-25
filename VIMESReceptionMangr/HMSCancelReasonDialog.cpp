#include "HMSCancelReasonDialog.h"
#include "MainFrm.h"
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSCancelReasonDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSCancelReasonDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSCancelReasonDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancelReasonDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSCancelReasonDialog *pVw = (CHMSCancelReasonDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancelReasonDialog *pVw = (CHMSCancelReasonDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancelReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSCancelReasonDialog*)pWnd)->OnAddHMSCancelReasonDialog();
} 
static int _OnEditHMSCancelReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSCancelReasonDialog*)pWnd)->OnEditHMSCancelReasonDialog();
} 
static int _OnDeleteHMSCancelReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSCancelReasonDialog*)pWnd)->OnDeleteHMSCancelReasonDialog();
} 
static int _OnSaveHMSCancelReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSCancelReasonDialog*)pWnd)->OnSaveHMSCancelReasonDialog();
} 
static int _OnCancelHMSCancelReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSCancelReasonDialog*)pWnd)->OnCancelHMSCancelReasonDialog();
} 
CHMSCancelReasonDialog::CHMSCancelReasonDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 355;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CHMSCancelReasonDialog::~CHMSCancelReasonDialog(){
}
void CHMSCancelReasonDialog::OnCreateComponents(){
	m_wndCancelInformation.Create(this, _T("Cancel Information"), 5, 5, 350, 105);
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 30, 90, 55);
	m_wndReason.Create(this,96, 30, 346, 100, TRUE, FALSE, TRUE); 
	m_wndOK.Create(this, _T("&OK"), 185, 110, 265, 135);
	m_wndClose.Create(this, _T("&Close"), 270, 110, 350, 135);

}
void CHMSCancelReasonDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReason.SetMultiLine(TRUE);
	m_wndReason.SetLimitText(254);
	m_wndReason.SetCheckValue(true);

}
void CHMSCancelReasonDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CHMSCancelReasonDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CHMSCancelReasonDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancelReasonDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancelReasonDialog::SetDefaultValues(){

	m_szReason.Empty();

}
int CHMSCancelReasonDialog::SetMode(int nMode){
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
/*void CHMSCancelReasonDialog::OnReasonChange(){
	
} */
/*void CHMSCancelReasonDialog::OnReasonSetfocus(){
	
} */
/*void CHMSCancelReasonDialog::OnReasonKillfocus(){
	
} */
int CHMSCancelReasonDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSCancelReasonDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsValidateData())
 		return;

	CGuiDialog::OnOK();
} 
void CHMSCancelReasonDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCancelReasonDialog::OnAddHMSCancelReasonDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancelReasonDialog::OnEditHMSCancelReasonDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancelReasonDialog::OnDeleteHMSCancelReasonDialog(){
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
 		OnCancelHMSCancelReasonDialog();
 	}
	return 0;
}
int CHMSCancelReasonDialog::OnSaveHMSCancelReasonDialog(){
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
 		//OnHMSCancelReasonDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancelReasonDialog::OnCancelHMSCancelReasonDialog(){
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
int CHMSCancelReasonDialog::OnHMSCancelReasonDialogListLoadData(){
	return 0;
}
