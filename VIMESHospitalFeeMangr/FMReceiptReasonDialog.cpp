#include "FMReceiptReasonDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptReasonChangeFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnReceiptReasonChange();
} */
/*static void _OnReceiptReasonSetfocusFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnReceiptReasonSetfocus();} */ 
/*static void _OnReceiptReasonKillfocusFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnReceiptReasonKillfocus();
} */
static int _OnReceiptReasonCheckValueFnc(CWnd *pWnd){
	return ((CFMReceiptReasonDialog *)pWnd)->OnReceiptReasonCheckValue();
} 
/*static void _OnRefundReasonChangeFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnRefundReasonChange();
} */
/*static void _OnRefundReasonSetfocusFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnRefundReasonSetfocus();} */ 
/*static void _OnRefundReasonKillfocusFnc(CWnd *pWnd){
	((CFMReceiptReasonDialog *)pWnd)->OnRefundReasonKillfocus();
} */
static int _OnRefundReasonCheckValueFnc(CWnd *pWnd){
	return ((CFMReceiptReasonDialog *)pWnd)->OnRefundReasonCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CFMReceiptReasonDialog *pVw = (CFMReceiptReasonDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFMReceiptReasonDialog *pVw = (CFMReceiptReasonDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFMReceiptReasonDialogFnc(CWnd *pWnd){
	 return ((CFMReceiptReasonDialog*)pWnd)->OnAddFMReceiptReasonDialog();
} 
static int _OnEditFMReceiptReasonDialogFnc(CWnd *pWnd){
	 return ((CFMReceiptReasonDialog*)pWnd)->OnEditFMReceiptReasonDialog();
} 
static int _OnDeleteFMReceiptReasonDialogFnc(CWnd *pWnd){
	 return ((CFMReceiptReasonDialog*)pWnd)->OnDeleteFMReceiptReasonDialog();
} 
static int _OnSaveFMReceiptReasonDialogFnc(CWnd *pWnd){
	 return ((CFMReceiptReasonDialog*)pWnd)->OnSaveFMReceiptReasonDialog();
} 
static int _OnCancelFMReceiptReasonDialogFnc(CWnd *pWnd){
	 return ((CFMReceiptReasonDialog*)pWnd)->OnCancelFMReceiptReasonDialog();
} 
CFMReceiptReasonDialog::CFMReceiptReasonDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 450;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMReceiptReasonDialog::~CFMReceiptReasonDialog(){
}
void CFMReceiptReasonDialog::OnCreateComponents(){
	m_wndReceiptAndRefundReason.Create(this, _T("Receipt && refund reason"), 5, 5, 440, 90);
	m_wndReceiptReasonLabel.Create(this, _T("Receipt Reason"), 10, 30, 131, 55);
	m_wndReceiptReason.Create(this,135, 30, 435, 55); 
	m_wndRefundReasonLabel.Create(this, _T("Refund Reason"), 10, 60, 131, 85);
	m_wndRefundReason.Create(this,135, 60, 435, 85); 
	m_wndOK.Create(this, _T("&OK"), 275, 95, 355, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 360, 95, 440, 120);

}
void CFMReceiptReasonDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiptReason.SetLimitText(128);
	m_wndReceiptReason.SetCheckValue(true);
	m_wndRefundReason.SetLimitText(128);
	m_wndRefundReason.SetCheckValue(true);

}
void CFMReceiptReasonDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReceiptReason.SetEvent(WE_CHANGE, _OnReceiptReasonChangeFnc);
	//m_wndReceiptReason.SetEvent(WE_SETFOCUS, _OnReceiptReasonSetfocusFnc);
	//m_wndReceiptReason.SetEvent(WE_KILLFOCUS, _OnReceiptReasonKillfocusFnc);
	m_wndReceiptReason.SetEvent(WE_CHECKVALUE, _OnReceiptReasonCheckValueFnc);
	//m_wndRefundReason.SetEvent(WE_CHANGE, _OnRefundReasonChangeFnc);
	//m_wndRefundReason.SetEvent(WE_SETFOCUS, _OnRefundReasonSetfocusFnc);
	//m_wndRefundReason.SetEvent(WE_KILLFOCUS, _OnRefundReasonKillfocusFnc);
	m_wndRefundReason.SetEvent(WE_CHECKVALUE, _OnRefundReasonCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CFMReceiptReasonDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndReceiptReason.GetDlgCtrlID(), m_szReceiptReason);
	DDX_Text(pDX, m_wndRefundReason.GetDlgCtrlID(), m_szRefundReason);

}
void CFMReceiptReasonDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvoiceType;
	szSQL.Format(_T("SELECT fac_reason, fac_invoicetype FROM fa_cash WHERE fac_org_id='FM' and fac_user_id='%s' and (fac_locked='N' or fac_locked is null) "), m_szClerkID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
		if(szInvoiceType == _T("R"))
		{
			rs.GetValue(_T("fac_reason"), m_szReceiptReason);
		}
		else
		{
			rs.GetValue(_T("fac_reason"), m_szRefundReason);
		}
		rs.MoveNext();
	}
	if(m_szReceiptReason.IsEmpty())
	{
		m_szReceiptReason = _T("Thu ti\x1EC1n th\x61nh to\xE1n vi\x1EC7n ph\xED");
	}
	if(m_szRefundReason.IsEmpty())
	{
		m_szRefundReason = _T("\x43hi ti\x1EC1n \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n vi\x1EC7n ph\xED");
	}


}
void CFMReceiptReasonDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMReceiptReasonDialog::SetDefaultValues(){

	m_szReceiptReason.Empty();
	m_szRefundReason.Empty();

}
int CFMReceiptReasonDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CFMReceiptReasonDialog::OnReceiptReasonChange(){
	
} */
/*void CFMReceiptReasonDialog::OnReceiptReasonSetfocus(){
	
} */
/*void CFMReceiptReasonDialog::OnReceiptReasonKillfocus(){
	
} */
int CFMReceiptReasonDialog::OnReceiptReasonCheckValue(){
	return 0;
} 
/*void CFMReceiptReasonDialog::OnRefundReasonChange(){
	
} */
/*void CFMReceiptReasonDialog::OnRefundReasonSetfocus(){
	
} */
/*void CFMReceiptReasonDialog::OnRefundReasonKillfocus(){
	
} */
int CFMReceiptReasonDialog::OnRefundReasonCheckValue(){
	return 0;
} 
void CFMReceiptReasonDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CFMReceiptReasonDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFMReceiptReasonDialog::OnAddFMReceiptReasonDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMReceiptReasonDialog::OnEditFMReceiptReasonDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMReceiptReasonDialog::OnDeleteFMReceiptReasonDialog(){
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
 		OnCancelFMReceiptReasonDialog();
 	}
	return 0;
}
int CFMReceiptReasonDialog::OnSaveFMReceiptReasonDialog(){
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
 		//OnFMReceiptReasonDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMReceiptReasonDialog::OnCancelFMReceiptReasonDialog(){
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
int CFMReceiptReasonDialog::OnFMReceiptReasonDialogListLoadData(){
	return 0;
}
