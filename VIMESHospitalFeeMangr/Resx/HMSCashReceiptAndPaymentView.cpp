#include "HMSCashReceiptAndPaymentView.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnAllOrderSelectFnc(CWnd *pWnd){
	  ((CHMSCashReceiptAndPaymentView*)pWnd)->OnAllOrderSelect();
}
static void _OnReceiptNoteSelectFnc(CWnd *pWnd){
	  ((CHMSCashReceiptAndPaymentView*)pWnd)->OnReceiptNoteSelect();
}
static void _OnPaymentOrderSelectFnc(CWnd *pWnd){
	  ((CHMSCashReceiptAndPaymentView*)pWnd)->OnPaymentOrderSelect();
}
static void _OnWaitingSelectFnc(CWnd *pWnd){
	 ((CHMSCashReceiptAndPaymentView*)pWnd)->OnWaitingSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	 ((CHMSCashReceiptAndPaymentView*)pWnd)->OnPostedSelect();
}
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSCashReceiptAndPaymentView *pVw = (CHMSCashReceiptAndPaymentView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSCashReceiptAndPaymentView *pVw = (CHMSCashReceiptAndPaymentView *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSCashReceiptAndPaymentView *pVw = (CHMSCashReceiptAndPaymentView *)pWnd;
	pVw->OnDiscardSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCashReceiptAndPaymentView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashReceiptAndPaymentView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSCashReceiptAndPaymentViewFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnAddHMSCashReceiptAndPaymentView();
} 
static int _OnEditHMSCashReceiptAndPaymentViewFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnEditHMSCashReceiptAndPaymentView();
} 
static int _OnDeleteHMSCashReceiptAndPaymentViewFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnDeleteHMSCashReceiptAndPaymentView();
} 
static int _OnSaveHMSCashReceiptAndPaymentViewFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnSaveHMSCashReceiptAndPaymentView();
} 
static int _OnCancelHMSCashReceiptAndPaymentViewFnc(CWnd *pWnd){
	 return ((CHMSCashReceiptAndPaymentView*)pWnd)->OnCancelHMSCashReceiptAndPaymentView();
} 
CHMSCashReceiptAndPaymentView::CHMSCashReceiptAndPaymentView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CHMSCashReceiptAndPaymentView::~CHMSCashReceiptAndPaymentView(){
}
void CHMSCashReceiptAndPaymentView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 430, 120);
	m_wndInvoiceType.Create(this, _T("Invoice Type"), 435, 5, 615, 120);
	m_wndStatus.Create(this, _T("Status"), 620, 5, 780, 120);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 125, 885, 315);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 29, 425, 54); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 110, 85);
	m_wndDocumentNo.Create(this,115, 60, 215, 85); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 220, 60, 320, 85);
	m_wndInvoiceNo.Create(this,325, 60, 425, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 110, 115);
	m_wndPatientName.Create(this,115, 90, 425, 115); 
	m_wndAllOrder.Create(this, _T("All Order"), 440, 30, 610, 55);
	m_wndReceiptNote.Create(this, _T("Receipt Note"), 440, 60, 610, 85);
	m_wndPaymentOrder.Create(this, _T("Payment Order"), 440, 90, 610, 115);
	m_wndWaiting.Create(this, _T("Waiting"), 625, 30, 775, 55);
	m_wndPosted.Create(this, _T("Posted"), 625, 60, 775, 85);
	m_wndSearch.Create(this, _T("Search"), 785, 5, 885, 40);
	m_wndPost.Create(this, _T("Post Invoice"), 785, 44, 885, 79);
	m_wndDiscard.Create(this, _T("Cancel"), 785, 83, 885, 118);
	m_wndList.Create(this,10, 150, 880, 310); 

}
void CHMSCashReceiptAndPaymentView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Invoice No"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Record No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Department"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("RECEIVABLE_AMOUNT"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(6, _T("PAYABLE_AMOUNT"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(7, _T("Invoice Type"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Staff"), CFMT_TEXT, 90);

}
void CHMSCashReceiptAndPaymentView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndAllOrder.SetEvent(WE_CLICK, _OnAllOrderSelectFnc);
	m_wndReceiptNote.SetEvent(WE_CLICK, _OnReceiptNoteSelectFnc);
	m_wndPaymentOrder.SetEvent(WE_CLICK, _OnPaymentOrderSelectFnc);
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndPosted.SetEvent(WE_CLICK, _OnPostedSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashReceiptAndPaymentViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashReceiptAndPaymentViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashReceiptAndPaymentViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashReceiptAndPaymentViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashReceiptAndPaymentViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSCashReceiptAndPaymentView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Radio(pDX, m_wndAllOrder.GetDlgCtrlID(), m_nAllOrder);
	DDX_Radio(pDX, m_wndReceiptNote.GetDlgCtrlID(), m_nReceiptNote);
	DDX_Radio(pDX, m_wndPaymentOrder.GetDlgCtrlID(), m_nPaymentOrder);
	DDX_Check(pDX, m_wndWaiting.GetDlgCtrlID(), m_bWaiting);
	DDX_Check(pDX, m_wndPosted.GetDlgCtrlID(), m_bPosted);

}
void CHMSCashReceiptAndPaymentView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCashReceiptAndPaymentView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashReceiptAndPaymentView::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_nInvoiceNo=0;
	m_szPatientName.Empty();
	m_nAllOrder=0;
	m_nReceiptNote=0;
	m_nPaymentOrder=0;
	m_bWaiting=FALSE;
	m_bPosted=FALSE;

}
int CHMSCashReceiptAndPaymentView::SetMode(int nMode){
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
/*void CHMSCashReceiptAndPaymentView::OnFromDateChange(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnFromDateSetfocus(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnFromDateKillfocus(){
	
} */
int CHMSCashReceiptAndPaymentView::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSCashReceiptAndPaymentView::OnToDateChange(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnToDateSetfocus(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnToDateKillfocus(){
	
} */
int CHMSCashReceiptAndPaymentView::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSCashReceiptAndPaymentView::OnDocumentNoChange(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnDocumentNoSetfocus(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnDocumentNoKillfocus(){
	
} */
int CHMSCashReceiptAndPaymentView::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSCashReceiptAndPaymentView::OnInvoiceNoChange(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnInvoiceNoKillfocus(){
	
} */
int CHMSCashReceiptAndPaymentView::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSCashReceiptAndPaymentView::OnPatientNameChange(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnPatientNameSetfocus(){
	
} */
/*void CHMSCashReceiptAndPaymentView::OnPatientNameKillfocus(){
	
} */
int CHMSCashReceiptAndPaymentView::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSCashReceiptAndPaymentView::OnAllOrderSelect(){
	
}
void CHMSCashReceiptAndPaymentView::OnReceiptNoteSelect(){
	
}
void CHMSCashReceiptAndPaymentView::OnPaymentOrderSelect(){
	
}
	void CHMSCashReceiptAndPaymentView::OnWaitingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSCashReceiptAndPaymentView::OnPostedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSCashReceiptAndPaymentView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashReceiptAndPaymentView::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashReceiptAndPaymentView::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashReceiptAndPaymentView::OnListDblClick(){
	
} 
void CHMSCashReceiptAndPaymentView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashReceiptAndPaymentView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashReceiptAndPaymentView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("RECEIVABLE_AMOUNT")), 
			rs.GetValue(_T("PAYABLE_AMOUNT")), 
			rs.GetValue(_T("InvoiceType")), 
			rs.GetValue(_T("Staff")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSCashReceiptAndPaymentView::OnAddHMSCashReceiptAndPaymentView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashReceiptAndPaymentView::OnEditHMSCashReceiptAndPaymentView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashReceiptAndPaymentView::OnDeleteHMSCashReceiptAndPaymentView(){
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
 		OnCancelHMSCashReceiptAndPaymentView();
 	}
	return 0;
}
int CHMSCashReceiptAndPaymentView::OnSaveHMSCashReceiptAndPaymentView(){
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
 		//OnHMSCashReceiptAndPaymentViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashReceiptAndPaymentView::OnCancelHMSCashReceiptAndPaymentView(){
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
int CHMSCashReceiptAndPaymentView::OnHMSCashReceiptAndPaymentViewListLoadData(){
	return 0;
}
