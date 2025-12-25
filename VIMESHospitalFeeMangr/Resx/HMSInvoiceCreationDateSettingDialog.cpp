#include "HMSInvoiceCreationDateSettingDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSInvoiceCreationDateSettingDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceCreationDateSettingDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceCreationDateSettingDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInvoiceCreationDateSettingDialog *)pWnd)->OnReceiptDateCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSInvoiceCreationDateSettingDialog *pVw = (CHMSInvoiceCreationDateSettingDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInvoiceCreationDateSettingDialog *pVw = (CHMSInvoiceCreationDateSettingDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSInvoiceCreationDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceCreationDateSettingDialog*)pWnd)->OnAddHMSInvoiceCreationDateSettingDialog();
} 
static int _OnEditHMSInvoiceCreationDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceCreationDateSettingDialog*)pWnd)->OnEditHMSInvoiceCreationDateSettingDialog();
} 
static int _OnDeleteHMSInvoiceCreationDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceCreationDateSettingDialog*)pWnd)->OnDeleteHMSInvoiceCreationDateSettingDialog();
} 
static int _OnSaveHMSInvoiceCreationDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceCreationDateSettingDialog*)pWnd)->OnSaveHMSInvoiceCreationDateSettingDialog();
} 
static int _OnCancelHMSInvoiceCreationDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceCreationDateSettingDialog*)pWnd)->OnCancelHMSInvoiceCreationDateSettingDialog();
} 
CHMSInvoiceCreationDateSettingDialog::CHMSInvoiceCreationDateSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 245;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSInvoiceCreationDateSettingDialog::~CHMSInvoiceCreationDateSettingDialog(){
}
void CHMSInvoiceCreationDateSettingDialog::OnCreateComponents(){
	m_wndReceiptDateSettings.Create(this, _T("Receipt Date Settings"), 5, 5, 235, 60);
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 30, 100, 55);
	m_wndReceiptDate.Create(this,105, 30, 230, 55); 
	m_wndOK.Create(this, _T("&OK"), 70, 65, 150, 90);
	m_wndCancel.Create(this, _T("&Cancel"), 155, 65, 235, 90);

}
void CHMSInvoiceCreationDateSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptDate.SetCheckValue(true);

}
void CHMSInvoiceCreationDateSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInvoiceCreationDateSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);

}
void CHMSInvoiceCreationDateSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInvoiceCreationDateSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInvoiceCreationDateSettingDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();

}
int CHMSInvoiceCreationDateSettingDialog::SetMode(int nMode){
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
/*void CHMSInvoiceCreationDateSettingDialog::OnReceiptDateChange(){
	
} */
/*void CHMSInvoiceCreationDateSettingDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSInvoiceCreationDateSettingDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSInvoiceCreationDateSettingDialog::OnReceiptDateCheckValue(){
	return 0;
} 
void CHMSInvoiceCreationDateSettingDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInvoiceCreationDateSettingDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInvoiceCreationDateSettingDialog::OnAddHMSInvoiceCreationDateSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInvoiceCreationDateSettingDialog::OnEditHMSInvoiceCreationDateSettingDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInvoiceCreationDateSettingDialog::OnDeleteHMSInvoiceCreationDateSettingDialog(){
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
 		OnCancelHMSInvoiceCreationDateSettingDialog(); 
 	}
	return 0;
}
int CHMSInvoiceCreationDateSettingDialog::OnSaveHMSInvoiceCreationDateSettingDialog(){
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
 		//OnHMSInvoiceCreationDateSettingDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInvoiceCreationDateSettingDialog::OnCancelHMSInvoiceCreationDateSettingDialog(){
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
int CHMSInvoiceCreationDateSettingDialog::OnHMSInvoiceCreationDateSettingDialogListLoadData(){
	return 0;
}
