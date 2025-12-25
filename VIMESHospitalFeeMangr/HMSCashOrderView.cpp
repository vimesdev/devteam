#include "HMSCashOrderView.h"
#include "MainFrm.h"
#include "HMSCashPostDialog.h"

/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashOrderView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashOrderView *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashOrderView *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashOrderView *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashOrderView *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashOrderView *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnAllOrderSelectFnc(CWnd *pWnd){
	  ((CHMSCashOrderView*)pWnd)->OnAllOrderSelect();
}
static void _OnReceiptNoteSelectFnc(CWnd *pWnd){
	  ((CHMSCashOrderView*)pWnd)->OnReceiptNoteSelect();
}
static void _OnPaymentOrderSelectFnc(CWnd *pWnd){
	  ((CHMSCashOrderView*)pWnd)->OnPaymentOrderSelect();
}
static void _OnWaitingSelectFnc(CWnd *pWnd){
	 ((CHMSCashOrderView*)pWnd)->OnWaitingSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	 ((CHMSCashOrderView*)pWnd)->OnPostedSelect();
}
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSCashOrderView *pVw = (CHMSCashOrderView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSCashOrderView *pVw = (CHMSCashOrderView *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSCashOrderView *pVw = (CHMSCashOrderView *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddHMSCashOrderViewFnc(CWnd *pWnd){
	 return ((CHMSCashOrderView*)pWnd)->OnAddHMSCashOrderView();
} 
static int _OnEditHMSCashOrderViewFnc(CWnd *pWnd){
	 return ((CHMSCashOrderView*)pWnd)->OnEditHMSCashOrderView();
} 
static int _OnDeleteHMSCashOrderViewFnc(CWnd *pWnd){
	 return ((CHMSCashOrderView*)pWnd)->OnDeleteHMSCashOrderView();
} 
static int _OnSaveHMSCashOrderViewFnc(CWnd *pWnd){
	 return ((CHMSCashOrderView*)pWnd)->OnSaveHMSCashOrderView();
} 
static int _OnCancelHMSCashOrderViewFnc(CWnd *pWnd){
	 return ((CHMSCashOrderView*)pWnd)->OnCancelHMSCashOrderView();
} 
CHMSCashOrderView::CHMSCashOrderView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CHMSCashOrderView::~CHMSCashOrderView(){
}
void CHMSCashOrderView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 430, 120);
	m_wndInvoiceType.Create(this, _T("Invoice Type"), 435, 5, 615, 120);
	m_wndStatus.Create(this, _T("Status"), 620, 5, 780, 120);
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 10, 30, 110, 55);
	m_wndInvoiceNo.Create(this,115, 30, 215, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 220, 30, 320, 55);
	m_wndDocumentNo.Create(this,325, 30, 425, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 425, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 110, 115);
	m_wndDepartment.Create(this,115, 90, 215, 115); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 220, 90, 320, 115);
	m_wndApprovedDate.Create(this,325, 90, 425, 115); 
	
	m_wndAllOrder.Create(this, _T("All Order"), 440, 30, 610, 55);
	m_wndAllOrder.ModifyStyle(0, WS_GROUP);
	m_wndReceiptNote.Create(this, _T("Receipt Note"), 440, 60, 610, 85);
	m_wndPaymentOrder.Create(this, _T("Payment Order"), 440, 90, 610, 115);
	
	m_wndWaiting.Create(this, _T("Waiting"), 625, 30, 775, 55);
	m_wndWaiting.ModifyStyle(0, WS_GROUP);
	m_wndPosted.Create(this, _T("Posted"), 625, 60, 775, 85);
	
	m_wndSearch.Create(this, _T("Search"), 785, 5, 885, 40);
	m_wndPost.Create(this, _T("Post_RP_Invoice"), 785, 45, 885, 80);
	m_wndDiscard.Create(this, _T("Cancel"), 785, 85, 885, 120);

	
}
void CHMSCashOrderView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndPatientName.SetLimitText(35);
	m_wndDepartment.SetLimitText(35);
	m_wndApprovedDate.SetReadOnly(TRUE);

	m_wndPatientName.SetReadOnly(true);
	m_wndDocumentNo.SetReadOnly(true);
	m_wndDepartment.SetReadOnly(true);

	m_wndInvoiceNo.SetNotEmpty(false);

}
void CHMSCashOrderView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	m_wndAllOrder.SetEvent(WE_CLICK, _OnAllOrderSelectFnc);
	m_wndReceiptNote.SetEvent(WE_CLICK, _OnReceiptNoteSelectFnc);
	m_wndPaymentOrder.SetEvent(WE_CLICK, _OnPaymentOrderSelectFnc);
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndPosted.SetEvent(WE_CLICK, _OnPostedSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashOrderViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashOrderViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashOrderViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashOrderViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashOrderViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
}
void CHMSCashOrderView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Radio(pDX, m_wndAllOrder.GetDlgCtrlID(), m_nOrderStatus);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);

}
void CHMSCashOrderView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	szSQL.Format(_T("SELECT * FROM hms_fee_invoice_view2 WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		
	}
	UpdateData(TRUE);
}
void CHMSCashOrderView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashOrderView::SetDefaultValues(){

	m_nInvoiceNo=0;
	m_nDocumentNo=0;
	m_nInvoiceNo=0;
	m_szPatientName.Empty();
	m_szDepartment.Empty();
	m_szApprovedDate.Empty();
	m_nOrderStatus = 0;
	m_nWaiting=0;
	

}
int CHMSCashOrderView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CHMSCashOrderView::OnInvoiceNoChange(){
	
} */
/*void CHMSCashOrderView::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSCashOrderView::OnInvoiceNoKillfocus(){
	
} */
int CHMSCashOrderView::OnInvoiceNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nInvoiceNo <= 0)
	{
		return -1;
	}
	int nLength = m_wndInvoiceNo.GetWindowTextLength();

	szSQL.Format(_T("SELECT hfe_posted FROM hms_fee_invoice_view2 WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);


	if(rs.IsEOF())
	{
		m_wndInvoiceNo.SetToolTipMessage(_T("Không tìm thấy hóa đơn"));
		return -1;
	}

	CString szPosted;
	rs.GetValue(_T("hfe_posted"), szPosted);
	if(szPosted == _T("Y"))
	{
		
//		m_wndInvoiceNo.SetSel(0, nLength);
//		m_wndInvoiceNo.SetToolTipMessage(_T("INVOICENO_HAS_BEEN_POSTED"));
//		return -1;
	}
	

	
	CHMSCashPostDialog dlg(this, m_nInvoiceNo);
	if(dlg.DoModal() == IDOK)
	{

		OnSearchSelect();

	}
	m_wndInvoiceNo.SetFocus();
	m_wndInvoiceNo.SetSel(0, nLength);
	return 1;
} 
/*void CHMSCashOrderView::OnDocumentNoChange(){
	
} */
/*void CHMSCashOrderView::OnDocumentNoSetfocus(){
	
} */
/*void CHMSCashOrderView::OnDocumentNoKillfocus(){
	
} */
int CHMSCashOrderView::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSCashOrderView::OnPatientNameChange(){
	
} */
/*void CHMSCashOrderView::OnPatientNameSetfocus(){
	
} */
/*void CHMSCashOrderView::OnPatientNameKillfocus(){
	
} */
int CHMSCashOrderView::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSCashOrderView::OnDepartmentChange(){
	
} */
/*void CHMSCashOrderView::OnDepartmentSetfocus(){
	
} */
/*void CHMSCashOrderView::OnDepartmentKillfocus(){
	
} */
int CHMSCashOrderView::OnDepartmentCheckValue(){
	return 0;
} 
/*void CHMSCashOrderView::OnApprovedDateChange(){
	
} */
/*void CHMSCashOrderView::OnApprovedDateSetfocus(){
	
} */
/*void CHMSCashOrderView::OnApprovedDateKillfocus(){
	
} */
int CHMSCashOrderView::OnApprovedDateCheckValue(){
	return 0;
} 
void CHMSCashOrderView::OnAllOrderSelect(){
	
}
void CHMSCashOrderView::OnReceiptNoteSelect(){
	
}
void CHMSCashOrderView::OnPaymentOrderSelect(){
	
}
	void CHMSCashOrderView::OnWaitingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSCashOrderView::OnPostedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSCashOrderView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSCashManagerView *pManager = (CHMSCashManagerView*) m_wndCashManager;
	if(pManager == NULL)
		return;
	UpdateData(TRUE);

	pManager->m_szFromDate = m_szFromDate;
	pManager->m_szToDate = m_szToDate;
	pManager->m_nCashID = 0;
	
	pManager->m_szPosted.Empty();

	if(m_nWaiting == 0)
		pManager->m_szPosted = _T("N");
	else
		pManager->m_szPosted = _T("Y");

	pManager->m_nDocumentNo = m_nDocumentNo;
	pManager->m_szPatientName = m_szPatientName;
	pManager->m_nInvoiceNo = m_nInvoiceNo;

	if(m_nOrderStatus == 1)
		pManager->m_szInvoiceType = _T("R");
	else if(m_nOrderStatus == 2)
		pManager->m_szInvoiceType = _T("P");
	else
		pManager->m_szInvoiceType = _T("A");



	pManager->OnListLoadData();

} 
void CHMSCashOrderView::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSCashManagerView *pManager = (CHMSCashManagerView*) m_wndCashManager;
	if(pManager == NULL)
		return;
	pManager->OnListDblClick();
} 
void CHMSCashOrderView::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashOrderView::OnAddHMSCashOrderView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashOrderView::OnEditHMSCashOrderView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashOrderView::OnDeleteHMSCashOrderView(){
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
 		OnCancelHMSCashOrderView();
 	}
	return 0;
}
int CHMSCashOrderView::OnSaveHMSCashOrderView(){
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
 		//OnHMSCashOrderViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashOrderView::OnCancelHMSCashOrderView(){
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
int CHMSCashOrderView::OnHMSCashOrderViewListLoadData(){
	return 0;
}
