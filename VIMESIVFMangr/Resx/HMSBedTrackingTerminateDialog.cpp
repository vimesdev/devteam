#include "HMSBedTrackingTerminateDialog.h"
#include "MainFrm.h"
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingTerminateDialog *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingTerminateDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnTreatNumberChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnTreatNumberChange();
} */
/*static void _OnTreatNumberSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnTreatNumberSetfocus();} */ 
/*static void _OnTreatNumberKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingTerminateDialog *)pWnd)->OnTreatNumberKillfocus();
} */
static int _OnTreatNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingTerminateDialog *)pWnd)->OnTreatNumberCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedTrackingTerminateDialog *pVw = (CHMSBedTrackingTerminateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedTrackingTerminateDialog *pVw = (CHMSBedTrackingTerminateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBedTrackingTerminateDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingTerminateDialog*)pWnd)->OnAddHMSBedTrackingTerminateDialog();
} 
static int _OnEditHMSBedTrackingTerminateDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingTerminateDialog*)pWnd)->OnEditHMSBedTrackingTerminateDialog();
} 
static int _OnDeleteHMSBedTrackingTerminateDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingTerminateDialog*)pWnd)->OnDeleteHMSBedTrackingTerminateDialog();
} 
static int _OnSaveHMSBedTrackingTerminateDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingTerminateDialog*)pWnd)->OnSaveHMSBedTrackingTerminateDialog();
} 
static int _OnCancelHMSBedTrackingTerminateDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingTerminateDialog*)pWnd)->OnCancelHMSBedTrackingTerminateDialog();
} 
CHMSBedTrackingTerminateDialog::CHMSBedTrackingTerminateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 270;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSBedTrackingTerminateDialog::~CHMSBedTrackingTerminateDialog(){
}
void CHMSBedTrackingTerminateDialog::OnCreateComponents(){
	m_wndTerminateInformation.Create(this, _T("Terminate Information"), 5, 5, 260, 120);
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 30, 130, 55);
	m_wndAdmitDate.Create(this,135, 30, 255, 55); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 60, 130, 85);
	m_wndEndDate.Create(this,135, 60, 255, 85); 
	m_wndTreatNumberLabel.Create(this, _T("Treat number"), 10, 90, 130, 115);
	m_wndTreatNumber.Create(this,135, 90, 255, 115); 
	m_wndSave.Create(this, _T("&Save"), 95, 125, 175, 150);
	m_wndClose.Create(this, _T("&Close"), 180, 125, 260, 150);

}
void CHMSBedTrackingTerminateDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndTreatNumber.SetLimitText(16);
	m_wndTreatNumber.SetCheckValue(true);

}
void CHMSBedTrackingTerminateDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndTreatNumber.SetEvent(WE_CHANGE, _OnTreatNumberChangeFnc);
	//m_wndTreatNumber.SetEvent(WE_SETFOCUS, _OnTreatNumberSetfocusFnc);
	//m_wndTreatNumber.SetEvent(WE_KILLFOCUS, _OnTreatNumberKillfocusFnc);
	m_wndTreatNumber.SetEvent(WE_CHECKVALUE, _OnTreatNumberCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSBedTrackingTerminateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndTreatNumber.GetDlgCtrlID(), m_nTreatNumber);

}
void CHMSBedTrackingTerminateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedTrackingTerminateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBedTrackingTerminateDialog::SetDefaultValues(){

	m_szAdmitDate.Empty();
	m_szEndDate.Empty();
	m_nTreatNumber=0;

}
int CHMSBedTrackingTerminateDialog::SetMode(int nMode){
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
/*void CHMSBedTrackingTerminateDialog::OnAdmitDateChange(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSBedTrackingTerminateDialog::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingTerminateDialog::OnEndDateChange(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnEndDateKillfocus(){
	
} */
int CHMSBedTrackingTerminateDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingTerminateDialog::OnTreatNumberChange(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnTreatNumberSetfocus(){
	
} */
/*void CHMSBedTrackingTerminateDialog::OnTreatNumberKillfocus(){
	
} */
int CHMSBedTrackingTerminateDialog::OnTreatNumberCheckValue(){
	return 0;
} 
void CHMSBedTrackingTerminateDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingTerminateDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedTrackingTerminateDialog::OnAddHMSBedTrackingTerminateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedTrackingTerminateDialog::OnEditHMSBedTrackingTerminateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedTrackingTerminateDialog::OnDeleteHMSBedTrackingTerminateDialog(){
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
 		OnCancelHMSBedTrackingTerminateDialog();
 	}
	return 0;
}
int CHMSBedTrackingTerminateDialog::OnSaveHMSBedTrackingTerminateDialog(){
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
 		//OnHMSBedTrackingTerminateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBedTrackingTerminateDialog::OnCancelHMSBedTrackingTerminateDialog(){
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
int CHMSBedTrackingTerminateDialog::OnHMSBedTrackingTerminateDialogListLoadData(){
	return 0;
}
