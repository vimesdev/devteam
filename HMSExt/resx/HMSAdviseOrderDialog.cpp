#include "HMSAdviseOrderDialog.h"
#include "MainFrm.h"
static void _OnExchangeMessageSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnExchangeMessageSelect();
} 
static void _OnShowPrescriptionSelectFnc(CWnd *pWnd){
	 ((CHMSAdviseOrderDialog*)pWnd)->OnShowPrescriptionSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnDisconfirmSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnDisconfirmSelect();
} 
static void _OnAdviseSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnAdviseSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnAddHMSAdviseOrderDialog();
} 
static int _OnEditHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnEditHMSAdviseOrderDialog();
} 
static int _OnDeleteHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnDeleteHMSAdviseOrderDialog();
} 
static int _OnSaveHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnSaveHMSAdviseOrderDialog();
} 
static int _OnCancelHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnCancelHMSAdviseOrderDialog();
} 
CHMSAdviseOrderDialog::CHMSAdviseOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 725;
	SetDefaultValues();
}
CHMSAdviseOrderDialog::~CHMSAdviseOrderDialog(){
}
void CHMSAdviseOrderDialog::OnCreateComponents(){
	m_wndForm.Create(this, _T("Form"), 5, 5, 960, 645);
	m_wndExchangeMessage.Create(this, _T("Exchange Message"), 5, 650, 140, 675);
	m_wndShowPrescription.Create(this, _T("Show Prescription"), 145, 650, 277, 675);
	m_wndUpdate.Create(this, _T("&Update"), 282, 650, 362, 675);
	m_wndSave.Create(this, _T("&Save"), 367, 650, 447, 675);
	m_wndCancel.Create(this, _T("&Cancel"), 452, 650, 532, 675);
	m_wndPrint.Create(this, _T("&Print"), 537, 650, 617, 675);
	m_wndConfirm.Create(this, _T("&Confirm"), 622, 650, 702, 675);
	m_wndDisconfirm.Create(this, _T("&Disconfirm"), 707, 650, 787, 675);
	m_wndAdvise.Create(this, _T("&Advise"), 792, 650, 872, 675);
	m_wndClose.Create(this, _T("&Close"), 877, 650, 957, 675);

}
void CHMSAdviseOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExchangeMessage.SetEvent(WE_CLICK, _OnExchangeMessageSelectFnc);
	m_wndShowPrescription.SetEvent(WE_CLICK, _OnShowPrescriptionSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndDisconfirm.SetEvent(WE_CLICK, _OnDisconfirmSelectFnc);
	m_wndAdvise.SetEvent(WE_CLICK, _OnAdviseSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdviseOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndShowPrescription.GetDlgCtrlID(), m_bShowPrescription);

}
void CHMSAdviseOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ShowPrescription")] =  m_bShowPrescription;
	}
	else
	{
			
	m_jData[_T("ShowPrescription")].GetValue(m_bShowPrescription);
	}

}
void CHMSAdviseOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdviseOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseOrderDialog::SetDefaultValues(){

	m_bShowPrescription=FALSE;

}
int CHMSAdviseOrderDialog::SetMode(int nMode){
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
void CHMSAdviseOrderDialog::OnExchangeMessageSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CHMSAdviseOrderDialog::OnShowPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdviseOrderDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnDisconfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnAdviseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdviseOrderDialog::OnAddHMSAdviseOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdviseOrderDialog::OnEditHMSAdviseOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdviseOrderDialog::OnDeleteHMSAdviseOrderDialog(){
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
 		OnCancelHMSAdviseOrderDialog();
 	}
	return 0;
}
int CHMSAdviseOrderDialog::OnSaveHMSAdviseOrderDialog(){
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
 		//OnHMSAdviseOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdviseOrderDialog::OnCancelHMSAdviseOrderDialog(){
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
int CHMSAdviseOrderDialog::OnHMSAdviseOrderDialogListLoadData(){
	return 0;
}
