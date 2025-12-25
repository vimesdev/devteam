#include "PurchaseOrderVATTotals.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderVATTotals*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderVATTotals*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderVATTotals*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPurchaseOrderVATTotalsFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnAddPurchaseOrderVATTotals();
} 
static int _OnEditPurchaseOrderVATTotalsFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnEditPurchaseOrderVATTotals();
} 
static int _OnDeletePurchaseOrderVATTotalsFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnDeletePurchaseOrderVATTotals();
} 
static int _OnSavePurchaseOrderVATTotalsFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnSavePurchaseOrderVATTotals();
} 
static int _OnCancelPurchaseOrderVATTotalsFnc(CWnd *pWnd){
	 return ((CPurchaseOrderVATTotals*)pWnd)->OnCancelPurchaseOrderVATTotals();
} 
CPurchaseOrderVATTotals::CPurchaseOrderVATTotals(){

	m_nDlgWidth = 715;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPurchaseOrderVATTotals::~CPurchaseOrderVATTotals(){
}
void CPurchaseOrderVATTotals::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 705, 120); 

}
void CPurchaseOrderVATTotals::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Tax Acct"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("VAT Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(3, _T("Voucher No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Invoice Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(5, _T("Description"), CFMT_TEXT, 180);

}
void CPurchaseOrderVATTotals::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderVATTotalsFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderVATTotalsFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderVATTotalsFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderVATTotalsFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderVATTotalsFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseOrderVATTotals::OnDoDataExchange(CDataExchange* pDX){

}
void CPurchaseOrderVATTotals::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderVATTotals::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderVATTotals::SetDefaultValues(){


}
int CPurchaseOrderVATTotals::SetMode(int nMode){
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
void CPurchaseOrderVATTotals::OnListDblClick(){
	
} 
void CPurchaseOrderVATTotals::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderVATTotals::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderVATTotals::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Account")), 
			rs.GetValue(_T("VATCode")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("InvoiceDescription")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPurchaseOrderVATTotals::OnAddPurchaseOrderVATTotals(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderVATTotals::OnEditPurchaseOrderVATTotals(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderVATTotals::OnDeletePurchaseOrderVATTotals(){
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
 		OnCancelPurchaseOrderVATTotals();
 	}
	return 0;
}
int CPurchaseOrderVATTotals::OnSavePurchaseOrderVATTotals(){
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
 		//OnPurchaseOrderVATTotalsListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderVATTotals::OnCancelPurchaseOrderVATTotals(){
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
int CPurchaseOrderVATTotals::OnPurchaseOrderVATTotalsListLoadData(){
	return 0;
}
