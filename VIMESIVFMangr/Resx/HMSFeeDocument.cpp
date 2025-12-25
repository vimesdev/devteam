#include "HMSFeeDocument.h"
#include "MainFrm.h"
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeDocument*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSFeeDocument*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeDocument*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnFeeListDeleteItem();
} 
/*static void _OnCostChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnCostChange();
} */
/*static void _OnCostSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnCostSetfocus();} */ 
/*static void _OnCostKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnCostKillfocus();
} */
static int _OnCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnCostCheckValue();
} 
/*static void _OnInsPaymentChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnInsPaymentChange();
} */
/*static void _OnInsPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnInsPaymentSetfocus();} */ 
/*static void _OnInsPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnInsPaymentKillfocus();
} */
static int _OnInsPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnInsPaymentCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnAdvanceChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnAdvanceChange();
} */
/*static void _OnAdvanceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnAdvanceSetfocus();} */ 
/*static void _OnAdvanceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnAdvanceKillfocus();
} */
static int _OnAdvanceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnAdvanceCheckValue();
} 
/*static void _OnPaymentChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnPaymentChange();
} */
/*static void _OnPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnPaymentSetfocus();} */ 
/*static void _OnPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnPaymentKillfocus();
} */
static int _OnPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnPaymentCheckValue();
} 
/*static void _OnUnpaidChangeFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnUnpaidChange();
} */
/*static void _OnUnpaidSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnUnpaidSetfocus();} */ 
/*static void _OnUnpaidKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDocument *)pWnd)->OnUnpaidKillfocus();
} */
static int _OnUnpaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnUnpaidCheckValue();
} 
static int _OnAddHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnAddHMSFeeDocument();
} 
static int _OnEditHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnEditHMSFeeDocument();
} 
static int _OnDeleteHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnDeleteHMSFeeDocument();
} 
static int _OnSaveHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnSaveHMSFeeDocument();
} 
static int _OnCancelHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnCancelHMSFeeDocument();
} 
CHMSFeeDocument::CHMSFeeDocument(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSFeeDocument::~CHMSFeeDocument(){
}
void CHMSFeeDocument::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 600, 580);
	m_wndFeeList.Create(this,10, 30, 595, 515); 
	m_wndCostLabel.Create(this, _T("Cost"), 10, 520, 105, 545);
	m_wndCost.Create(this,110, 520, 205, 545); 
	m_wndInsPaymentLabel.Create(this, _T("Ins Payment"), 210, 520, 300, 545);
	m_wndInsPayment.Create(this,305, 520, 400, 545); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 405, 520, 495, 545);
	m_wndDiscount.Create(this,500, 520, 595, 545); 
	m_wndTotalAdvanceLabel.Create(this, _T("Total Advance"), 10, 550, 105, 575);
	m_wndAdvance.Create(this,110, 550, 205, 575); 
	m_wndPaymentLabel.Create(this, _T("Payment"), 210, 550, 300, 575);
	m_wndPayment.Create(this,305, 550, 400, 575); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 405, 550, 495, 575);
	m_wndUnpaid.Create(this,500, 550, 595, 575); 

}
void CHMSFeeDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCost.SetLimitText(1024);
	m_wndInsPayment.SetLimitText(16);
	m_wndDiscount.SetLimitText(1024);
	m_wndAdvance.SetLimitText(16);
	m_wndPayment.SetLimitText(1024);
	m_wndUnpaid.SetLimitText(1024);


	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 160);
	m_wndFeeList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 50);
	m_wndFeeList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 50);
	m_wndFeeList.InsertColumn(4, _T("Cost"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(5, _T("Discount"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(6, _T("Payment"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(7, _T("Remain"), CFMT_NUMBER, 60);

}
void CHMSFeeDocument::OnSetWindowEvents(){
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCost.SetEvent(WE_CHANGE, _OnCostChangeFnc);
	//m_wndCost.SetEvent(WE_SETFOCUS, _OnCostSetfocusFnc);
	//m_wndCost.SetEvent(WE_KILLFOCUS, _OnCostKillfocusFnc);
	m_wndCost.SetEvent(WE_CHECKVALUE, _OnCostCheckValueFnc);
	//m_wndInsPayment.SetEvent(WE_CHANGE, _OnInsPaymentChangeFnc);
	//m_wndInsPayment.SetEvent(WE_SETFOCUS, _OnInsPaymentSetfocusFnc);
	//m_wndInsPayment.SetEvent(WE_KILLFOCUS, _OnInsPaymentKillfocusFnc);
	m_wndInsPayment.SetEvent(WE_CHECKVALUE, _OnInsPaymentCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndAdvance.SetEvent(WE_CHANGE, _OnAdvanceChangeFnc);
	//m_wndAdvance.SetEvent(WE_SETFOCUS, _OnAdvanceSetfocusFnc);
	//m_wndAdvance.SetEvent(WE_KILLFOCUS, _OnAdvanceKillfocusFnc);
	m_wndAdvance.SetEvent(WE_CHECKVALUE, _OnAdvanceCheckValueFnc);
	//m_wndPayment.SetEvent(WE_CHANGE, _OnPaymentChangeFnc);
	//m_wndPayment.SetEvent(WE_SETFOCUS, _OnPaymentSetfocusFnc);
	//m_wndPayment.SetEvent(WE_KILLFOCUS, _OnPaymentKillfocusFnc);
	m_wndPayment.SetEvent(WE_CHECKVALUE, _OnPaymentCheckValueFnc);
	//m_wndUnpaid.SetEvent(WE_CHANGE, _OnUnpaidChangeFnc);
	//m_wndUnpaid.SetEvent(WE_SETFOCUS, _OnUnpaidSetfocusFnc);
	//m_wndUnpaid.SetEvent(WE_KILLFOCUS, _OnUnpaidKillfocusFnc);
	m_wndUnpaid.SetEvent(WE_CHECKVALUE, _OnUnpaidCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFeeDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFeeDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFeeDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFeeDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFeeDocumentFnc, 0, 'T', VK_CONTROL);

}
void CHMSFeeDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCost.GetDlgCtrlID(), m_nCost);
	DDX_Text(pDX, m_wndInsPayment.GetDlgCtrlID(), m_nInsPayment);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndAdvance.GetDlgCtrlID(), m_nAdvance);
	DDX_Text(pDX, m_wndPayment.GetDlgCtrlID(), m_nPayment);
	DDX_Text(pDX, m_wndUnpaid.GetDlgCtrlID(), m_nUnpaid);

}
void CHMSFeeDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeeDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeDocument::SetDefaultValues(){

	m_nCost=0;
	m_nInsPayment=0;
	m_nDiscount=0;
	m_nAdvance=0;
	m_nPayment=0;
	m_nUnpaid=0;

}
int CHMSFeeDocument::SetMode(int nMode){
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
void CHMSFeeDocument::OnFeeListDblClick(){
	
} 
void CHMSFeeDocument::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeDocument::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeDocument::OnFeeListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFeeList.BeginLoad(); 
	m_wndFeeList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Cost")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("Payment")), 
			rs.GetValue(_T("Remain")), NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSFeeDocument::OnCostChange(){
	
} */
/*void CHMSFeeDocument::OnCostSetfocus(){
	
} */
/*void CHMSFeeDocument::OnCostKillfocus(){
	
} */
int CHMSFeeDocument::OnCostCheckValue(){
	return 0;
} 
/*void CHMSFeeDocument::OnInsPaymentChange(){
	
} */
/*void CHMSFeeDocument::OnInsPaymentSetfocus(){
	
} */
/*void CHMSFeeDocument::OnInsPaymentKillfocus(){
	
} */
int CHMSFeeDocument::OnInsPaymentCheckValue(){
	return 0;
} 
/*void CHMSFeeDocument::OnDiscountChange(){
	
} */
/*void CHMSFeeDocument::OnDiscountSetfocus(){
	
} */
/*void CHMSFeeDocument::OnDiscountKillfocus(){
	
} */
int CHMSFeeDocument::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSFeeDocument::OnAdvanceChange(){
	
} */
/*void CHMSFeeDocument::OnAdvanceSetfocus(){
	
} */
/*void CHMSFeeDocument::OnAdvanceKillfocus(){
	
} */
int CHMSFeeDocument::OnAdvanceCheckValue(){
	return 0;
} 
/*void CHMSFeeDocument::OnPaymentChange(){
	
} */
/*void CHMSFeeDocument::OnPaymentSetfocus(){
	
} */
/*void CHMSFeeDocument::OnPaymentKillfocus(){
	
} */
int CHMSFeeDocument::OnPaymentCheckValue(){
	return 0;
} 
/*void CHMSFeeDocument::OnUnpaidChange(){
	
} */
/*void CHMSFeeDocument::OnUnpaidSetfocus(){
	
} */
/*void CHMSFeeDocument::OnUnpaidKillfocus(){
	
} */
int CHMSFeeDocument::OnUnpaidCheckValue(){
	return 0;
} 
int CHMSFeeDocument::OnAddHMSFeeDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeDocument::OnEditHMSFeeDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeDocument::OnDeleteHMSFeeDocument(){
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
 		OnCancelHMSFeeDocument(); 
 	}
	return 0;
}
int CHMSFeeDocument::OnSaveHMSFeeDocument(){
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
 		//OnHMSFeeDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFeeDocument::OnCancelHMSFeeDocument(){
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
int CHMSFeeDocument::OnHMSFeeDocumentListLoadData(){
	return 0;
}
