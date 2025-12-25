#include "HMSRefundDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRefundDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRefundDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRefundDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSRefundDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSRefundDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSRefundDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSRefundDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSRefundDialog *pVw = (CHMSRefundDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRefundDialog *pVw = (CHMSRefundDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSRefundDialog*)pWnd)->OnAddHMSRefundDialog();
} 
static int _OnEditHMSRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSRefundDialog*)pWnd)->OnEditHMSRefundDialog();
} 
static int _OnDeleteHMSRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSRefundDialog*)pWnd)->OnDeleteHMSRefundDialog();
} 
static int _OnSaveHMSRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSRefundDialog*)pWnd)->OnSaveHMSRefundDialog();
} 
static int _OnCancelHMSRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSRefundDialog*)pWnd)->OnCancelHMSRefundDialog();
} 
CHMSRefundDialog::CHMSRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSRefundDialog::~CHMSRefundDialog(){
}
void CHMSRefundDialog::OnCreateComponents(){
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
void CHMSRefundDialog::OnInitializeComponents(){
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
void CHMSRefundDialog::OnSetWindowEvents(){
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
void CHMSRefundDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_szReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("haf_invoiceno"), m_szReceiptNo);
	rs.GetValue(_T("haf_amount"), m_nAmount);
	rs.GetValue(_T("haf_desc"), m_szDescription);

}
void CHMSRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_xfeeTbl.SetValue(_T("haf_invoiceno"), m_szReceiptNo);
	m_hms_xfeeTbl.SetValue(_T("haf_amount"), m_nAmount);
	m_hms_xfeeTbl.SetValue(_T("haf_desc"), m_szDescription);
	m_hms_invfeeTbl.SetValue(_T("hif_createdby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_createddate"), pMF->GetSysDateTime());
	m_hms_invfeeTbl.SetValue(_T("hif_updatedby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_updateddate"), pMF->GetSysDateTime());

}
void CHMSRefundDialog::SetDefaultValues(){

	m_szSerialNo.Empty();
	m_szReceiptNo.Empty();
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_bPrintReceipt=FALSE;

}
int CHMSRefundDialog::SetMode(int nMode){
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
/*void CHMSRefundDialog::OnSerialNoChange(){
	
} */
/*void CHMSRefundDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSRefundDialog::OnSerialNoKillfocus(){
	
} */
int CHMSRefundDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSRefundDialog::OnReceiptNoChange(){
	
} */
/*void CHMSRefundDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSRefundDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSRefundDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSRefundDialog::OnReceiptDateChange(){
	
} */
/*void CHMSRefundDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSRefundDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSRefundDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSRefundDialog::OnAmountChange(){
	
} */
/*void CHMSRefundDialog::OnAmountSetfocus(){
	
} */
/*void CHMSRefundDialog::OnAmountKillfocus(){
	
} */
int CHMSRefundDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSRefundDialog::OnDescriptionChange(){
	
} */
/*void CHMSRefundDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSRefundDialog::OnDescriptionKillfocus(){
	
} */
int CHMSRefundDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSRefundDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSRefundDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRefundDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRefundDialog::OnAddHMSRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSRefundDialog::OnEditHMSRefundDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRefundDialog::OnDeleteHMSRefundDialog(){
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
 		OnCancelHMSRefundDialog(); 
 	}
	return 0;
}
int CHMSRefundDialog::OnSaveHMSRefundDialog(){
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
 		//OnHMSRefundDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSRefundDialog::OnCancelHMSRefundDialog(){
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
int CHMSRefundDialog::OnHMSRefundDialogListLoadData(){
	return 0;
}
