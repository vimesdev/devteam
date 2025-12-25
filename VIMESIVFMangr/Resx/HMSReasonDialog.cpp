#include "HMSReasonDialog.h"
#include "MainFrm.h"
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSReasonDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSReasonDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSReasonDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSReasonDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSReasonDialog *pVw = (CHMSReasonDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReasonDialog *pVw = (CHMSReasonDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSReasonDialog*)pWnd)->OnAddHMSReasonDialog();
} 
static int _OnEditHMSReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSReasonDialog*)pWnd)->OnEditHMSReasonDialog();
} 
static int _OnDeleteHMSReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSReasonDialog*)pWnd)->OnDeleteHMSReasonDialog();
} 
static int _OnSaveHMSReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSReasonDialog*)pWnd)->OnSaveHMSReasonDialog();
} 
static int _OnCancelHMSReasonDialogFnc(CWnd *pWnd){
	 return ((CHMSReasonDialog*)pWnd)->OnCancelHMSReasonDialog();
} 
CHMSReasonDialog::CHMSReasonDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CHMSReasonDialog::~CHMSReasonDialog(){
}
void CHMSReasonDialog::OnCreateComponents(){
	m_wndReasonGroup.Create(this, _T("Reason"), 5, 5, 360, 130);
	m_wndReason.Create(this,10, 30, 355, 125); 
	m_wndOK.Create(this, _T("&OK"), 195, 135, 275, 160);
	m_wndCancel.Create(this, _T("&Cancel"), 280, 135, 360, 160);

}
void CHMSReasonDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReason.SetMultiLine(TRUE);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);

}
void CHMSReasonDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSReasonDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CHMSReasonDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReasonDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReasonDialog::SetDefaultValues(){

	m_szReason.Empty();

}
int CHMSReasonDialog::SetMode(int nMode){
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
/*void CHMSReasonDialog::OnReasonChange(){
	
} */
/*void CHMSReasonDialog::OnReasonSetfocus(){
	
} */
/*void CHMSReasonDialog::OnReasonKillfocus(){
	
} */
int CHMSReasonDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSReasonDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReasonDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSReasonDialog::OnAddHMSReasonDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSReasonDialog::OnEditHMSReasonDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReasonDialog::OnDeleteHMSReasonDialog(){
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
 		OnCancelHMSReasonDialog();
 	}
	return 0;
}
int CHMSReasonDialog::OnSaveHMSReasonDialog(){
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
 		//OnHMSReasonDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSReasonDialog::OnCancelHMSReasonDialog(){
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
int CHMSReasonDialog::OnHMSReasonDialogListLoadData(){
	return 0;
}
