#include "HMSDiscountDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSDiscountDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSDiscountDialog *pVw = (CHMSDiscountDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDiscountDialog *pVw = (CHMSDiscountDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountDialog*)pWnd)->OnAddHMSDiscountDialog();
} 
static int _OnEditHMSDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountDialog*)pWnd)->OnEditHMSDiscountDialog();
} 
static int _OnDeleteHMSDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountDialog*)pWnd)->OnDeleteHMSDiscountDialog();
} 
static int _OnSaveHMSDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountDialog*)pWnd)->OnSaveHMSDiscountDialog();
} 
static int _OnCancelHMSDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountDialog*)pWnd)->OnCancelHMSDiscountDialog();
} 
CHMSDiscountDialog::CHMSDiscountDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSDiscountDialog::~CHMSDiscountDialog(){
}
void CHMSDiscountDialog::OnCreateComponents(){
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
void CHMSDiscountDialog::OnInitializeComponents(){
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
void CHMSDiscountDialog::OnSetWindowEvents(){
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
void CHMSDiscountDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_szReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSDiscountDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("haf_invoiceno"), m_szReceiptNo);
	rs.GetValue(_T("haf_amount"), m_nAmount);
	rs.GetValue(_T("haf_desc"), m_szDescription);

}
void CHMSDiscountDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_xfeeTbl.SetValue(_T("haf_invoiceno"), m_szReceiptNo);
	m_hms_xfeeTbl.SetValue(_T("haf_amount"), m_nAmount);
	m_hms_xfeeTbl.SetValue(_T("haf_desc"), m_szDescription);
	m_hms_invfeeTbl.SetValue(_T("hif_createdby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_createddate"), pMF->GetSysDateTime());
	m_hms_invfeeTbl.SetValue(_T("hif_updatedby"), pMF->GetCurrentUser());
	m_hms_invfeeTbl.SetValue(_T("hif_updateddate"), pMF->GetSysDateTime());

}
void CHMSDiscountDialog::SetDefaultValues(){

	m_szSerialNo.Empty();
	m_szReceiptNo.Empty();
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_bPrintReceipt=FALSE;

}
int CHMSDiscountDialog::SetMode(int nMode){
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
/*void CHMSDiscountDialog::OnSerialNoChange(){
	
} */
/*void CHMSDiscountDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSDiscountDialog::OnSerialNoKillfocus(){
	
} */
int CHMSDiscountDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSDiscountDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDiscountDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDiscountDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDiscountDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSDiscountDialog::OnReceiptDateChange(){
	
} */
/*void CHMSDiscountDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSDiscountDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSDiscountDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSDiscountDialog::OnAmountChange(){
	
} */
/*void CHMSDiscountDialog::OnAmountSetfocus(){
	
} */
/*void CHMSDiscountDialog::OnAmountKillfocus(){
	
} */
int CHMSDiscountDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSDiscountDialog::OnDescriptionChange(){
	
} */
/*void CHMSDiscountDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDiscountDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDiscountDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSDiscountDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDiscountDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountDialog::OnAddHMSDiscountDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDiscountDialog::OnEditHMSDiscountDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountDialog::OnDeleteHMSDiscountDialog(){
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
 		OnCancelHMSDiscountDialog(); 
 	}
	return 0;
}
int CHMSDiscountDialog::OnSaveHMSDiscountDialog(){
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
 		//OnHMSDiscountDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDiscountDialog::OnCancelHMSDiscountDialog(){
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
int CHMSDiscountDialog::OnHMSDiscountDialogListLoadData(){
	return 0;
}
