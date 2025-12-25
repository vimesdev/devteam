#include "HMSInsregDateDialog.h"
#include "MainFrm.h"
/*static void _OnInsregdateChangeFnc(CWnd *pWnd){
	((CHMSInsregDateDialog *)pWnd)->OnInsregdateChange();
} */
/*static void _OnInsregdateSetfocusFnc(CWnd *pWnd){
	((CHMSInsregDateDialog *)pWnd)->OnInsregdateSetfocus();} */ 
/*static void _OnInsregdateKillfocusFnc(CWnd *pWnd){
	((CHMSInsregDateDialog *)pWnd)->OnInsregdateKillfocus();
} */
static int _OnInsregdateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsregDateDialog *)pWnd)->OnInsregdateCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSInsregDateDialog *pVw = (CHMSInsregDateDialog *)pWnd;
	pVw->OnOkSelect();
} 
static int _OnAddHMSInsregDateDialogFnc(CWnd *pWnd){
	 return ((CHMSInsregDateDialog*)pWnd)->OnAddHMSInsregDateDialog();
} 
static int _OnEditHMSInsregDateDialogFnc(CWnd *pWnd){
	 return ((CHMSInsregDateDialog*)pWnd)->OnEditHMSInsregDateDialog();
} 
static int _OnDeleteHMSInsregDateDialogFnc(CWnd *pWnd){
	 return ((CHMSInsregDateDialog*)pWnd)->OnDeleteHMSInsregDateDialog();
} 
static int _OnSaveHMSInsregDateDialogFnc(CWnd *pWnd){
	 return ((CHMSInsregDateDialog*)pWnd)->OnSaveHMSInsregDateDialog();
} 
static int _OnCancelHMSInsregDateDialogFnc(CWnd *pWnd){
	 return ((CHMSInsregDateDialog*)pWnd)->OnCancelHMSInsregDateDialog();
} 
CHMSInsregDateDialog::CHMSInsregDateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSInsregDateDialog::~CHMSInsregDateDialog(){
}
void CHMSInsregDateDialog::OnCreateComponents(){
	m_wndOntheinsurancepayment.Create(this, _T("On the insurance payment"), 5, 5, 361, 87);
	m_wndInsregdateLabel.Create(this, _T("Insreg Date"), 10, 34, 130, 59);
	m_wndInsregdate.Create(this,135, 34, 235, 59); 
	m_wndOk.Create(this, _T("&Ok"), 275, 33, 350, 58);

}
void CHMSInsregDateDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInsregdate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInsregdate.SetCheckValue(true);

}
void CHMSInsregDateDialog::OnSetWindowEvents(){
	//m_wndInsregdate.SetEvent(WE_CHANGE, _OnInsregdateChangeFnc);
	//m_wndInsregdate.SetEvent(WE_SETFOCUS, _OnInsregdateSetfocusFnc);
	//m_wndInsregdate.SetEvent(WE_KILLFOCUS, _OnInsregdateKillfocusFnc);
	m_wndInsregdate.SetEvent(WE_CHECKVALUE, _OnInsregdateCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	SetMode(VM_EDIT);
}
void CHMSInsregDateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInsregdate.GetDlgCtrlID(), m_szInsregdate);

}
void CHMSInsregDateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsregDateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsregDateDialog::SetDefaultValues(){

	m_szInsregdate.Empty();

}
int CHMSInsregDateDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 4, -1); 
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
/*void CHMSInsregDateDialog::OnInsregdateChange(){
	
} */
/*void CHMSInsregDateDialog::OnInsregdateSetfocus(){
	
} */
/*void CHMSInsregDateDialog::OnInsregdateKillfocus(){
	
} */
int CHMSInsregDateDialog::OnInsregdateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDateTime(m_szInsregdate, m_szOldInsregDate) < 0)
		return -1;
	if(CompareDateTime( pMF->GetSysDate(),m_szInsregdate) < 0)
		return -1;
	
	return 0;
} 
void CHMSInsregDateDialog::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSInsregDateDialog();
} 
int CHMSInsregDateDialog::OnAddHMSInsregDateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInsregDateDialog::OnEditHMSInsregDateDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsregDateDialog::OnDeleteHMSInsregDateDialog(){
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
 		OnCancelHMSInsregDateDialog(); 
 	}
	return 0;
}
int CHMSInsregDateDialog::OnSaveHMSInsregDateDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_EDIT){ 
 		szSQL.Format(_T("UPDATE hms_doc SET hd_insregdate=TO_DATE('%s', 'YYYY-MM-DD') where hd_docno=%ld "),m_szInsregdate, pMF->m_nDocumentNo);		
 	} 	
	if(ShowMessageBox(_T("Are you sure you want to change the date of payment without insurance?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
		return -1;

 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
		OnCancel();
 	}  	 
 	return ret; 
 	
}
int CHMSInsregDateDialog::OnCancelHMSInsregDateDialog(){
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
int CHMSInsregDateDialog::OnHMSInsregDateDialogListLoadData(){
	return 0;
}
