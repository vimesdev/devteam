#include "HMSDepositDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDepositDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSDepositDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSDepositDialog *pVw = (CHMSDepositDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDepositDialog *pVw = (CHMSDepositDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositDialog*)pWnd)->OnAddHMSDepositDialog();
} 
static int _OnEditHMSDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositDialog*)pWnd)->OnEditHMSDepositDialog();
} 
static int _OnDeleteHMSDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositDialog*)pWnd)->OnDeleteHMSDepositDialog();
} 
static int _OnSaveHMSDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositDialog*)pWnd)->OnSaveHMSDepositDialog();
} 
static int _OnCancelHMSDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositDialog*)pWnd)->OnCancelHMSDepositDialog();
} 
CHMSDepositDialog::CHMSDepositDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSDepositDialog::~CHMSDepositDialog(){
}
void CHMSDepositDialog::OnCreateComponents(){
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 455, 120);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 30, 345, 55);
	m_wndReceiptNo.Create(this,350, 30, 450, 55); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 60, 110, 85);
	m_wndReceiptDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndAmount.Create(this,350, 60, 450, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 110, 115);
	m_wndDescription.Create(this,115, 90, 450, 115); 
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 10, 125, 110, 150);
	m_wndOK.Create(this, _T("&OK"), 275, 125, 360, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 365, 125, 450, 150);

}
void CHMSDepositDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(655362);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);
	m_hms_xfeeTbl.SetTableName(_T("hms_xfee"));
	m_hms_xfeeTbl.AddField(_T("haf_deptid"), dfText, 7); 
	m_hms_xfeeTbl.AddField(_T("haf_roomid"), dfLong); 
	m_hms_xfeeTbl.AddField(_T("haf_bedid"), dfLong); 
	m_hms_xfeeTbl.AddField(_T("haf_invoiceno"), dfLong); 
	m_hms_xfeeTbl.AddField(_T("haf_amount"), dfDouble); 
	m_hms_xfeeTbl.AddField(_T("haf_desc"), dfText, 254); 
	m_hms_invfeeTbl.SetTableName(_T("hms_invfee"));
	m_hms_invfeeTbl.AddField(_T("hif_createdby"), dfText, 15); 
	m_hms_invfeeTbl.AddField(_T("hif_createddate"), dfDateTime); 
	m_hms_invfeeTbl.AddField(_T("hif_updatedby"), dfText, 15); 
	m_hms_invfeeTbl.AddField(_T("hif_updateddate"), dfDateTime); 
	m_hms_invfeeTbl.AddField(_T("hif_patientno"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_docno"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_invoiceno"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_type"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hif_class"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hif_category"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hf_object"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hf_cardidx"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_status"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hif_deskno"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_bookno"), dfText, 7); 
	m_hms_invfeeTbl.AddField(_T("hif_serialno"), dfText, 7); 
	m_hms_invfeeTbl.AddField(_T("hif_recvno"), dfLong); 
	m_hms_invfeeTbl.AddField(_T("hif_recvdate"), dfDateTime); 
	m_hms_invfeeTbl.AddField(_T("hif_recveiver"), dfText, 15); 
	m_hms_invfeeTbl.AddField(_T("hif_locked"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hif_lockeddate"), dfDateTime); 
	m_hms_invfeeTbl.AddField(_T("hif_locker"), dfText, 15); 
	m_hms_invfeeTbl.AddField(_T("hif_posted"), dfText, 1); 
	m_hms_invfeeTbl.AddField(_T("hif_posteddate"), dfDateTime); 
	m_hms_invfeeTbl.AddField(_T("hif_poster"), dfText, 15); 
	m_hms_invfeeTbl.AddField(_T("hif_desc"), dfText, 254); 

}
void CHMSDepositDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE)

}
void CHMSDepositDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSDepositDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("haf_invoiceno"), m_nReceiptNo);
	rs.GetValue(_T("haf_amount"), m_nAmount);
	rs.GetValue(_T("haf_desc"), m_szDescription);

}
void CHMSDepositDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_xfeeTbl.SetValue(_T("haf_invoiceno"), m_nReceiptNo);
	m_hms_xfeeTbl.SetValue(_T("haf_amount"), m_nAmount);
	m_hms_xfeeTbl.SetValue(_T("haf_desc"), m_szDescription);
	m_hms_invfeeTbl.SetValue(_T("hif_createdby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_createddate"), pMF->GetSysDateTime());
	m_hms_invfeeTbl.SetValue(_T("hif_updatedby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_updateddate"), pMF->GetSysDateTime());

}
void CHMSDepositDialog::SetDefaultValues(){

	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_bPrintReceipt=FALSE;

}
int CHMSDepositDialog::SetMode(int nMode){
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
/*void CHMSDepositDialog::OnSerialNoChange(){
	
} */
/*void CHMSDepositDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSDepositDialog::OnSerialNoKillfocus(){
	
} */
int CHMSDepositDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSDepositDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDepositDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDepositDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDepositDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSDepositDialog::OnReceiptDateChange(){
	
} */
/*void CHMSDepositDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSDepositDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSDepositDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSDepositDialog::OnAmountChange(){
	
} */
/*void CHMSDepositDialog::OnAmountSetfocus(){
	
} */
/*void CHMSDepositDialog::OnAmountKillfocus(){
	
} */
int CHMSDepositDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSDepositDialog::OnDescriptionChange(){
	
} */
/*void CHMSDepositDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDepositDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDepositDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSDepositDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDepositDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDepositDialog::OnAddHMSDepositDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDepositDialog::OnEditHMSDepositDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDepositDialog::OnDeleteHMSDepositDialog(){
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
 		OnCancelHMSDepositDialog(); 
 	}
	return 0;
}
int CHMSDepositDialog::OnSaveHMSDepositDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_xfeeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_xfeeTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSDepositDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDepositDialog::OnCancelHMSDepositDialog(){
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
int CHMSDepositDialog::OnHMSDepositDialogListLoadData(){
	return 0;
}
