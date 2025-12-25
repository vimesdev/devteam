#include "HMSInsuranceApproveDocDialog.h"
#include "MainFrm.h"
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedDateCheckValue();
} 
/*static void _OnApprovedByChangeFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedByChange();
} */
/*static void _OnApprovedBySetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedBySetfocus();} */ 
/*static void _OnApprovedByKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedByKillfocus();
} */
static int _OnApprovedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceApproveDocDialog *)pWnd)->OnApprovedByCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSInsuranceApproveDocDialog *pVw = (CHMSInsuranceApproveDocDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceApproveDocDialog *pVw = (CHMSInsuranceApproveDocDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceApproveDocDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApproveDocDialog*)pWnd)->OnAddHMSInsuranceApproveDocDialog();
} 
static int _OnEditHMSInsuranceApproveDocDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApproveDocDialog*)pWnd)->OnEditHMSInsuranceApproveDocDialog();
} 
static int _OnDeleteHMSInsuranceApproveDocDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApproveDocDialog*)pWnd)->OnDeleteHMSInsuranceApproveDocDialog();
} 
static int _OnSaveHMSInsuranceApproveDocDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApproveDocDialog*)pWnd)->OnSaveHMSInsuranceApproveDocDialog();
} 
static int _OnCancelHMSInsuranceApproveDocDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceApproveDocDialog*)pWnd)->OnCancelHMSInsuranceApproveDocDialog();
} 
CHMSInsuranceApproveDocDialog::CHMSInsuranceApproveDocDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSInsuranceApproveDocDialog::~CHMSInsuranceApproveDocDialog(){
}
void CHMSInsuranceApproveDocDialog::OnCreateComponents(){
	m_wndInsuranceApproveInformation.Create(this, _T("Insurance Approve Information"), 5, 5, 290, 90);
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 10, 30, 110, 55);
	m_wndApprovedDate.Create(this,115, 30, 215, 55); 
	m_wndApprovedByLabel.Create(this, _T("Approved by"), 10, 60, 110, 85);
	m_wndApprovedBy.Create(this,115, 60, 285, 85); 
	m_wndOK.Create(this, _T("&OK"), 125, 95, 205, 120);
	m_wndClose.Create(this, _T("&Close"), 210, 95, 290, 120);

}
void CHMSInsuranceApproveDocDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApprovedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApprovedDate.SetCheckValue(true);
	m_wndApprovedBy.SetLimitText(35);
	m_wndApprovedBy.SetCheckValue(true);

}
void CHMSInsuranceApproveDocDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	//m_wndApprovedBy.SetEvent(WE_CHANGE, _OnApprovedByChangeFnc);
	//m_wndApprovedBy.SetEvent(WE_SETFOCUS, _OnApprovedBySetfocusFnc);
	//m_wndApprovedBy.SetEvent(WE_KILLFOCUS, _OnApprovedByKillfocusFnc);
	m_wndApprovedBy.SetEvent(WE_CHECKVALUE, _OnApprovedByCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInsuranceApproveDocDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Text(pDX, m_wndApprovedBy.GetDlgCtrlID(), m_szApprovedBy);

}
void CHMSInsuranceApproveDocDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuranceApproveDocDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuranceApproveDocDialog::SetDefaultValues(){

	m_szApprovedDate.Empty();
	m_szApprovedBy.Empty();

}
int CHMSInsuranceApproveDocDialog::SetMode(int nMode){
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
/*void CHMSInsuranceApproveDocDialog::OnApprovedDateChange(){
	
} */
/*void CHMSInsuranceApproveDocDialog::OnApprovedDateSetfocus(){
	
} */
/*void CHMSInsuranceApproveDocDialog::OnApprovedDateKillfocus(){
	
} */
int CHMSInsuranceApproveDocDialog::OnApprovedDateCheckValue(){
	return 0;
} 
/*void CHMSInsuranceApproveDocDialog::OnApprovedByChange(){
	
} */
/*void CHMSInsuranceApproveDocDialog::OnApprovedBySetfocus(){
	
} */
/*void CHMSInsuranceApproveDocDialog::OnApprovedByKillfocus(){
	
} */
int CHMSInsuranceApproveDocDialog::OnApprovedByCheckValue(){
	return 0;
} 
void CHMSInsuranceApproveDocDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceApproveDocDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceApproveDocDialog::OnAddHMSInsuranceApproveDocDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuranceApproveDocDialog::OnEditHMSInsuranceApproveDocDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceApproveDocDialog::OnDeleteHMSInsuranceApproveDocDialog(){
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
 		OnCancelHMSInsuranceApproveDocDialog();
 	}
	return 0;
}
int CHMSInsuranceApproveDocDialog::OnSaveHMSInsuranceApproveDocDialog(){
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
 		//OnHMSInsuranceApproveDocDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuranceApproveDocDialog::OnCancelHMSInsuranceApproveDocDialog(){
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
int CHMSInsuranceApproveDocDialog::OnHMSInsuranceApproveDocDialogListLoadData(){
	return 0;
}
