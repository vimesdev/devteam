#include "HMSPaymentInvoiceDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentInvoiceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentInvoiceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentInvoiceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentInvoiceDialog*)pWnd)->OnPrintInvoiceSelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog *pVw = (CHMSPaymentInvoiceDialog *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog *pVw = (CHMSPaymentInvoiceDialog *)pWnd;
	pVw->OnRefundSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog *pVw = (CHMSPaymentInvoiceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentInvoiceDialog *pVw = (CHMSPaymentInvoiceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPaymentInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnAddHMSPaymentInvoiceDialog();
} 
static int _OnEditHMSPaymentInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnEditHMSPaymentInvoiceDialog();
} 
static int _OnDeleteHMSPaymentInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnDeleteHMSPaymentInvoiceDialog();
} 
static int _OnSaveHMSPaymentInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnSaveHMSPaymentInvoiceDialog();
} 
static int _OnCancelHMSPaymentInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentInvoiceDialog*)pWnd)->OnCancelHMSPaymentInvoiceDialog();
} 
CHMSPaymentInvoiceDialog::CHMSPaymentInvoiceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 910;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSPaymentInvoiceDialog::~CHMSPaymentInvoiceDialog(){
}
void CHMSPaymentInvoiceDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 905, 570);
	m_wndList.Create(this,9, 30, 899, 564); 
	m_wndPrintInvoice.Create(this, _T("Print Invoice"), 455, 575, 565, 600);
	m_wndPayment.Create(this, _T("&Payment"), 570, 575, 650, 600);
	m_wndRefund.Create(this, _T("&Refund"), 655, 575, 735, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 740, 575, 820, 600);
	m_wndClose.Create(this, _T("&Close"), 825, 575, 905, 600);

}
void CHMSPaymentInvoiceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Discount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Payment"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Unpaid"), CFMT_MONEY, 90);

}
void CHMSPaymentInvoiceDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrintInvoice.SetEvent(WE_CLICK, _OnPrintInvoiceSelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSPaymentInvoiceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndPrintInvoice.GetDlgCtrlID(), m_bPrintInvoice);

}
void CHMSPaymentInvoiceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentInvoiceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentInvoiceDialog::SetDefaultValues(){

	m_bPrintInvoice=FALSE;

}
int CHMSPaymentInvoiceDialog::SetMode(int nMode){
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
void CHMSPaymentInvoiceDialog::OnListDblClick(){
	
} 
void CHMSPaymentInvoiceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentInvoiceDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentInvoiceDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Cost")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("Payment")), 
			rs.GetValue(_T("Unpaid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
	void CHMSPaymentInvoiceDialog::OnPrintInvoiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPaymentInvoiceDialog::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog::OnRefundSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentInvoiceDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentInvoiceDialog::OnAddHMSPaymentInvoiceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPaymentInvoiceDialog::OnEditHMSPaymentInvoiceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentInvoiceDialog::OnDeleteHMSPaymentInvoiceDialog(){
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
 		OnCancelHMSPaymentInvoiceDialog(); 
 	}
	return 0;
}
int CHMSPaymentInvoiceDialog::OnSaveHMSPaymentInvoiceDialog(){
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
 		//OnHMSPaymentInvoiceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPaymentInvoiceDialog::OnCancelHMSPaymentInvoiceDialog(){
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
int CHMSPaymentInvoiceDialog::OnHMSPaymentInvoiceDialogListLoadData(){
	return 0;
}
