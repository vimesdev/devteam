#include "FMCloseoutDialog.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnReceiptReasonChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptReasonChange();
} */
/*static void _OnReceiptReasonSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptReasonSetfocus();} */ 
/*static void _OnReceiptReasonKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnReceiptReasonKillfocus();
} */
static int _OnReceiptReasonCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnReceiptReasonCheckValue();
} 
/*static void _OnPaymentNoChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentNoChange();
} */
/*static void _OnPaymentNoSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentNoSetfocus();} */ 
/*static void _OnPaymentNoKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentNoKillfocus();
} */
static int _OnPaymentNoCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnPaymentNoCheckValue();
} 
/*static void _OnRefundAmountChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnRefundAmountChange();
} */
/*static void _OnRefundAmountSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnRefundAmountSetfocus();} */ 
/*static void _OnRefundAmountKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnRefundAmountKillfocus();
} */
static int _OnRefundAmountCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnRefundAmountCheckValue();
} 
/*static void _OnPaymentReasonChangeFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentReasonChange();
} */
/*static void _OnPaymentReasonSetfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentReasonSetfocus();} */ 
/*static void _OnPaymentReasonKillfocusFnc(CWnd *pWnd){
	((CFMCloseoutDialog *)pWnd)->OnPaymentReasonKillfocus();
} */
static int _OnPaymentReasonCheckValueFnc(CWnd *pWnd){
	return ((CFMCloseoutDialog *)pWnd)->OnPaymentReasonCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CFMCloseoutDialog *pVw = (CFMCloseoutDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFMCloseoutDialog *pVw = (CFMCloseoutDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFMCloseoutDialogFnc(CWnd *pWnd){
	 return ((CFMCloseoutDialog*)pWnd)->OnAddFMCloseoutDialog();
} 
static int _OnEditFMCloseoutDialogFnc(CWnd *pWnd){
	 return ((CFMCloseoutDialog*)pWnd)->OnEditFMCloseoutDialog();
} 
static int _OnDeleteFMCloseoutDialogFnc(CWnd *pWnd){
	 return ((CFMCloseoutDialog*)pWnd)->OnDeleteFMCloseoutDialog();
} 
static int _OnSaveFMCloseoutDialogFnc(CWnd *pWnd){
	 return ((CFMCloseoutDialog*)pWnd)->OnSaveFMCloseoutDialog();
} 
static int _OnCancelFMCloseoutDialogFnc(CWnd *pWnd){
	 return ((CFMCloseoutDialog*)pWnd)->OnCancelFMCloseoutDialog();
} 
CFMCloseoutDialog::CFMCloseoutDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 285;
	SetDefaultValues();
}
CFMCloseoutDialog::~CFMCloseoutDialog(){
}
void CFMCloseoutDialog::OnCreateComponents(){
	m_wndDateLabel.Create(this, _T("Date"), 10, 5, 150, 30);
	m_wndReceiptInformation.Create(this, _T("Receipt information"), 5, 65, 455, 150);
	m_wndDate.Create(this,155, 5, 255, 30); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 35, 150, 60);
	m_wndRefundInformation.Create(this, _T("Refund information"), 5, 155, 455, 240);
	m_wndStaff.Create(this,155, 35, 448, 60); 
	m_wndReceiptNoLabel.Create(this, _T("ORDERNO"), 10, 89, 150, 114);
	m_wndReceiptNo.Create(this,155, 89, 255, 114); 
	m_wndReceiptAmountLabel.Create(this, _T("Amount"), 260, 89, 345, 114);
	m_wndAmount.Create(this,350, 89, 450, 114); 
	m_wndReceiptReasonLabel.Create(this, _T("Reason"), 10, 119, 150, 144);
	m_wndReceiptReason.Create(this,155, 119, 448, 144); 
	m_wndRefundNoLabel.Create(this, _T("ORDERNO"), 10, 182, 150, 207);
	m_wndPaymentNo.Create(this,155, 182, 255, 207); 
	m_wndPaymentAmountLabel.Create(this, _T("Amount"), 260, 182, 345, 207);
	m_wndRefundAmount.Create(this,350, 182, 450, 207); 
	m_wndRefundReasonLabel.Create(this, _T("Reason"), 10, 212, 150, 237);
	m_wndPaymentReason.Create(this,155, 212, 450, 237); 
	m_wndOK.Create(this, _T("&OK"), 290, 242, 370, 267);
	m_wndClose.Create(this, _T("&Close"), 375, 242, 455, 267);

}
void CFMCloseoutDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(35);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndReceiptReason.SetLimitText(35);
	m_wndReceiptReason.SetCheckValue(true);
	m_wndPaymentNo.SetLimitText(35);
	m_wndPaymentNo.SetCheckValue(true);
	m_wndRefundAmount.SetLimitText(16);
	m_wndRefundAmount.SetCheckValue(true);
	m_wndPaymentReason.SetLimitText(35);
	m_wndPaymentReason.SetCheckValue(true);

}
void CFMCloseoutDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndReceiptReason.SetEvent(WE_CHANGE, _OnReceiptReasonChangeFnc);
	//m_wndReceiptReason.SetEvent(WE_SETFOCUS, _OnReceiptReasonSetfocusFnc);
	//m_wndReceiptReason.SetEvent(WE_KILLFOCUS, _OnReceiptReasonKillfocusFnc);
	m_wndReceiptReason.SetEvent(WE_CHECKVALUE, _OnReceiptReasonCheckValueFnc);
	//m_wndPaymentNo.SetEvent(WE_CHANGE, _OnPaymentNoChangeFnc);
	//m_wndPaymentNo.SetEvent(WE_SETFOCUS, _OnPaymentNoSetfocusFnc);
	//m_wndPaymentNo.SetEvent(WE_KILLFOCUS, _OnPaymentNoKillfocusFnc);
	m_wndPaymentNo.SetEvent(WE_CHECKVALUE, _OnPaymentNoCheckValueFnc);
	//m_wndRefundAmount.SetEvent(WE_CHANGE, _OnRefundAmountChangeFnc);
	//m_wndRefundAmount.SetEvent(WE_SETFOCUS, _OnRefundAmountSetfocusFnc);
	//m_wndRefundAmount.SetEvent(WE_KILLFOCUS, _OnRefundAmountKillfocusFnc);
	m_wndRefundAmount.SetEvent(WE_CHECKVALUE, _OnRefundAmountCheckValueFnc);
	//m_wndPaymentReason.SetEvent(WE_CHANGE, _OnPaymentReasonChangeFnc);
	//m_wndPaymentReason.SetEvent(WE_SETFOCUS, _OnPaymentReasonSetfocusFnc);
	//m_wndPaymentReason.SetEvent(WE_KILLFOCUS, _OnPaymentReasonKillfocusFnc);
	m_wndPaymentReason.SetEvent(WE_CHECKVALUE, _OnPaymentReasonCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CFMCloseoutDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_szReceiptNo);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndReceiptReason.GetDlgCtrlID(), m_szReceiptReason);
	DDX_Text(pDX, m_wndPaymentNo.GetDlgCtrlID(), m_szPaymentNo);
	DDX_Text(pDX, m_wndRefundAmount.GetDlgCtrlID(), m_nRefundAmount);
	DDX_Text(pDX, m_wndPaymentReason.GetDlgCtrlID(), m_szPaymentReason);

}
void CFMCloseoutDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMCloseoutDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMCloseoutDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szStaff.Empty();
	m_szReceiptNo.Empty();
	m_nAmount=0;
	m_szReceiptReason.Empty();
	m_szPaymentNo.Empty();
	m_nRefundAmount=0;
	m_szPaymentReason.Empty();

}
int CFMCloseoutDialog::SetMode(int nMode){
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
/*void CFMCloseoutDialog::OnDateChange(){
	
} */
/*void CFMCloseoutDialog::OnDateSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnDateKillfocus(){
	
} */
int CFMCloseoutDialog::OnDateCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnStaffChange(){
	
} */
/*void CFMCloseoutDialog::OnStaffSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnStaffKillfocus(){
	
} */
int CFMCloseoutDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnReceiptNoChange(){
	
} */
/*void CFMCloseoutDialog::OnReceiptNoSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnReceiptNoKillfocus(){
	
} */
int CFMCloseoutDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnAmountChange(){
	
} */
/*void CFMCloseoutDialog::OnAmountSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnAmountKillfocus(){
	
} */
int CFMCloseoutDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnReceiptReasonChange(){
	
} */
/*void CFMCloseoutDialog::OnReceiptReasonSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnReceiptReasonKillfocus(){
	
} */
int CFMCloseoutDialog::OnReceiptReasonCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnPaymentNoChange(){
	
} */
/*void CFMCloseoutDialog::OnPaymentNoSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnPaymentNoKillfocus(){
	
} */
int CFMCloseoutDialog::OnPaymentNoCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnRefundAmountChange(){
	
} */
/*void CFMCloseoutDialog::OnRefundAmountSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnRefundAmountKillfocus(){
	
} */
int CFMCloseoutDialog::OnRefundAmountCheckValue(){
	return 0;
} 
/*void CFMCloseoutDialog::OnPaymentReasonChange(){
	
} */
/*void CFMCloseoutDialog::OnPaymentReasonSetfocus(){
	
} */
/*void CFMCloseoutDialog::OnPaymentReasonKillfocus(){
	
} */
int CFMCloseoutDialog::OnPaymentReasonCheckValue(){
	return 0;
} 
void CFMCloseoutDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMCloseoutDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMCloseoutDialog::OnAddFMCloseoutDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMCloseoutDialog::OnEditFMCloseoutDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMCloseoutDialog::OnDeleteFMCloseoutDialog(){
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
 		OnCancelFMCloseoutDialog();
 	}
	return 0;
}
int CFMCloseoutDialog::OnSaveFMCloseoutDialog(){
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
 		//OnFMCloseoutDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMCloseoutDialog::OnCancelFMCloseoutDialog(){
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
int CFMCloseoutDialog::OnFMCloseoutDialogListLoadData(){
	return 0;
}
