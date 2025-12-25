#include "PurchaseInvoiceLines.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseInvoiceLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseInvoiceLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPurchaseInvoiceLinesFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnAddPurchaseInvoiceLines();
} 
static int _OnEditPurchaseInvoiceLinesFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnEditPurchaseInvoiceLines();
} 
static int _OnDeletePurchaseInvoiceLinesFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnDeletePurchaseInvoiceLines();
} 
static int _OnSavePurchaseInvoiceLinesFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnSavePurchaseInvoiceLines();
} 
static int _OnCancelPurchaseInvoiceLinesFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceLines*)pWnd)->OnCancelPurchaseInvoiceLines();
} 
CPurchaseInvoiceLines::CPurchaseInvoiceLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 180;
	SetDefaultValues();
}
CPurchaseInvoiceLines::~CPurchaseInvoiceLines(){
}
void CPurchaseInvoiceLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,6, 5, 990, 100); 

}
void CPurchaseInvoiceLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("Product Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(2, _T("UOM"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("On Hand"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("VAT Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("VAT Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Job Code"), CFMT_TEXT, 55);

}
void CPurchaseInvoiceLines::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
/*
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseInvoiceLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseInvoiceLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseInvoiceLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseInvoiceLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseInvoiceLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CPurchaseInvoiceLines::OnDoDataExchange(CDataExchange* pDX){

}
void CPurchaseInvoiceLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseInvoiceLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseInvoiceLines::SetDefaultValues(){


}
int CPurchaseInvoiceLines::SetMode(int nMode){
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
void CPurchaseInvoiceLines::OnListDblClick(){
	
} 
void CPurchaseInvoiceLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

/*
int CPurchaseInvoiceLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}

int CPurchaseInvoiceLines::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
*/
int CPurchaseInvoiceLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseInvoiceLines::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ProductCode")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("UOM")), 
			rs.GetValue(_T("OnHand")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("VATCode")), 
			rs.GetValue(_T("VATAmount")), 
			rs.GetValue(_T("JobCode")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPurchaseInvoiceLines::OnAddPurchaseInvoiceLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseInvoiceLines::OnEditPurchaseInvoiceLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseInvoiceLines::OnDeletePurchaseInvoiceLines(){
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
 		OnCancelPurchaseInvoiceLines();
 	}
	return 0;
}
int CPurchaseInvoiceLines::OnSavePurchaseInvoiceLines(){
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
 		//OnPurchaseInvoiceLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseInvoiceLines::OnCancelPurchaseInvoiceLines(){
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
int CPurchaseInvoiceLines::OnPurchaseInvoiceLinesListLoadData(){
	return 0;
}
