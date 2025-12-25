#include "PurchaseDesktop.h"
#include "MainFrame_E10.h"
static void _OnNewPurchaseOrderSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewPurchaseOrderSelect();
} 
static void _OnNewCreditNoteSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewCreditNoteSelect();
} 
static void _OnNewCashPurchaseSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewCashPurchaseSelect();
} 
static void _OnPayPurchaseInvoiceSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnPayPurchaseInvoiceSelect();
} 
static void _OnIssuePaymentSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnIssuePaymentSelect();
} 
static long _Oncontrol_10LoadDataFnc(CWnd *pWnd){
	return ((CPurchaseDesktop*)pWnd)->Oncontrol_10LoadData();
} 
static void _Oncontrol_10DblClickFnc(CWnd *pWnd){
	((CPurchaseDesktop*)pWnd)->Oncontrol_10DblClick();
} 
static void _Oncontrol_10SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseDesktop*)pWnd)->Oncontrol_10SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_10DeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->Oncontrol_10DeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseDesktop *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseDesktop *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseDesktop *)pWnd)->OnToDateCheckValue();
} 
static void _OnDisplaySelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnDisplaySelect();
} 
static void _OnNewPurchaseReturnOrderSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewPurchaseReturnOrderSelect();
} 
static void _OnNewDebitNoteSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewDebitNoteSelect();
} 
static void _OnNewCashPurchaseReturnSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewCashPurchaseReturnSelect();
} 
static void _OnNewPurchaseQuoteSelectFnc(CWnd *pWnd){
	CPurchaseDesktop *pVw = (CPurchaseDesktop *)pWnd;
	pVw->OnNewPurchaseQuoteSelect();
} 
static int _OnAddPurchaseDesktopFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->OnAddPurchaseDesktop();
} 
static int _OnEditPurchaseDesktopFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->OnEditPurchaseDesktop();
} 
static int _OnDeletePurchaseDesktopFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->OnDeletePurchaseDesktop();
} 
static int _OnSavePurchaseDesktopFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->OnSavePurchaseDesktop();
} 
static int _OnCancelPurchaseDesktopFnc(CWnd *pWnd){
	 return ((CPurchaseDesktop*)pWnd)->OnCancelPurchaseDesktop();
} 
CPurchaseDesktop::CPurchaseDesktop(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPurchaseDesktop::~CPurchaseDesktop(){
}
void CPurchaseDesktop::OnCreateComponents(){
	m_wndReports.Create(this, _T("REPORTS"), 380, 5, 799, 27);
	m_wndNewPurchaseOrder.Create(this, _T("New Purchase Order"), 5, 91, 180, 126);
	m_wndNewCreditNote.Create(this, _T("New Credit Note"), 6, 181, 181, 216);
	m_wndNewCashPurchase.Create(this, _T("New Cash Purchase"), 5, 266, 180, 301);
	m_wndPayPurchaseInvoice.Create(this, _T("Pay Purchase Invoice"), 90, 352, 265, 387);
	m_wndIssuePayment.Create(this, _T("Issue Payment"), 90, 436, 265, 471);
	m_wndMoreTasks.Create(this, _T("MORE TASKS"), 5, 513, 375, 535);
	m_wndNewSupplier.Create(this, _T("New Supplier"), 28, 540, 356, 565);
	m_wndNewSupplier.SetHyperlink(true);
	m_wndNewProductOrService.Create(this, _T("New Product or Service"), 27, 575, 355, 600);
	m_wndcontrol_10.Create(this,380, 32, 799, 570); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 380, 575, 460, 600);
	m_wndFromDate.Create(this,465, 575, 545, 600); 
	m_wndToDateLabel.Create(this, _T("To Date"), 550, 575, 630, 600);
	m_wndToDate.Create(this,635, 575, 715, 600); 
	m_wndDisplay.Create(this, _T("Display"), 720, 575, 800, 600);
	m_wndNewPurchaseReturnOrder.Create(this, _T("New Purchase Return Order"), 185, 91, 360, 126);
	m_wndNewDebitNote.Create(this, _T("New Debit Note"), 186, 181, 361, 216);
	m_wndNewCashPurchaseReturn.Create(this, _T("New Cash Purchase Return"), 185, 266, 360, 301);
	m_wndNewPurchaseQuote.Create(this, _T("New Purchase Quete"), 5, 9, 180, 44);

}
void CPurchaseDesktop::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);



}
void CPurchaseDesktop::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndNewPurchaseOrder.SetEvent(WE_CLICK, _OnNewPurchaseOrderSelectFnc);
	m_wndNewCreditNote.SetEvent(WE_CLICK, _OnNewCreditNoteSelectFnc);
	m_wndNewCashPurchase.SetEvent(WE_CLICK, _OnNewCashPurchaseSelectFnc);
	m_wndPayPurchaseInvoice.SetEvent(WE_CLICK, _OnPayPurchaseInvoiceSelectFnc);
	m_wndIssuePayment.SetEvent(WE_CLICK, _OnIssuePaymentSelectFnc);
	m_wndcontrol_10.SetEvent(WE_SELCHANGE, _Oncontrol_10SelectChangeFnc);
	m_wndcontrol_10.SetEvent(WE_LOADDATA, _Oncontrol_10LoadDataFnc);
	m_wndcontrol_10.SetEvent(WE_DBLCLICK, _Oncontrol_10DblClickFnc);
	m_wndcontrol_10.AddEvent(1, _T("Delete"), _Oncontrol_10DeleteItemFnc, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDisplay.SetEvent(WE_CLICK, _OnDisplaySelectFnc);
	m_wndNewPurchaseReturnOrder.SetEvent(WE_CLICK, _OnNewPurchaseReturnOrderSelectFnc);
	m_wndNewDebitNote.SetEvent(WE_CLICK, _OnNewDebitNoteSelectFnc);
	m_wndNewCashPurchaseReturn.SetEvent(WE_CLICK, _OnNewCashPurchaseReturnSelectFnc);
	m_wndNewPurchaseQuote.SetEvent(WE_CLICK, _OnNewPurchaseQuoteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseDesktopFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseDesktopFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseDesktopFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseDesktopFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseDesktopFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseDesktop::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPurchaseDesktop::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseDesktop::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseDesktop::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CPurchaseDesktop::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPurchaseDesktop::OnNewPurchaseOrderSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewCreditNoteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewCashPurchaseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnPayPurchaseInvoiceSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnIssuePaymentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::Oncontrol_10DblClick(){
	
} 
void CPurchaseDesktop::Oncontrol_10SelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseDesktop::Oncontrol_10DeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseDesktop::Oncontrol_10LoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndcontrol_10.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_10.AddItems(
		rs.MoveNext();
	}
	m_wndcontrol_10.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CPurchaseDesktop::OnFromDateChange(){
	
} */
/*void CPurchaseDesktop::OnFromDateSetfocus(){
	
} */
/*void CPurchaseDesktop::OnFromDateKillfocus(){
	
} */
int CPurchaseDesktop::OnFromDateCheckValue(){
	return 0;
} 
/*void CPurchaseDesktop::OnToDateChange(){
	
} */
/*void CPurchaseDesktop::OnToDateSetfocus(){
	
} */
/*void CPurchaseDesktop::OnToDateKillfocus(){
	
} */
int CPurchaseDesktop::OnToDateCheckValue(){
	return 0;
} 
void CPurchaseDesktop::OnDisplaySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewPurchaseReturnOrderSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewDebitNoteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewCashPurchaseReturnSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseDesktop::OnNewPurchaseQuoteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseDesktop::OnAddPurchaseDesktop(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseDesktop::OnEditPurchaseDesktop(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseDesktop::OnDeletePurchaseDesktop(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPurchaseDesktop();
 	}
	return 0;
}
int CPurchaseDesktop::OnSavePurchaseDesktop(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseDesktopListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseDesktop::OnCancelPurchaseDesktop(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPurchaseDesktop::OnPurchaseDesktopListLoadData(){
	return 0;
}
