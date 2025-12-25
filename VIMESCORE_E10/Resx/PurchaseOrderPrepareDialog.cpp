#include "PurchaseOrderPrepareDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListLoadData();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnMatListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListLoadData();
} 
static void _OnMatListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListDblClick();
} 
static void _OnMatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListSelectChange(nOldItem, nNewItem);
} 
static int _OnMatListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnMatListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderPrepareDialog *pVw = (CPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnAddPurchaseOrderPrepareDialog();
} 
static int _OnEditPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnEditPurchaseOrderPrepareDialog();
} 
static int _OnDeletePurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnDeletePurchaseOrderPrepareDialog();
} 
static int _OnSavePurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnSavePurchaseOrderPrepareDialog();
} 
static int _OnCancelPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderPrepareDialog*)pWnd)->OnCancelPurchaseOrderPrepareDialog();
} 
CPurchaseOrderPrepareDialog::CPurchaseOrderPrepareDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CPurchaseOrderPrepareDialog::~CPurchaseOrderPrepareDialog(){
}
void CPurchaseOrderPrepareDialog::OnCreateComponents(){
	m_wndMaterialInformation.Create(this, _T("Material Information"), 5, 280, 960, 550);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndPreInvoiceInformation.Create(this, _T("Pre Invoice Information"), 5, 5, 960, 245);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 430, 30, 530, 55);
	m_wndOrderNo.Create(this,535, 30, 870, 55); 
	m_wndSearch.Create(this, _T("&Search"), 875, 30, 955, 55);
	m_wndInvoiceList.Create(this,10, 60, 955, 240); 
	m_wndAdd.Create(this, _T(">>"), 889, 250, 919, 275);
	m_wndRemove.Create(this, _T("&Remove"), 924, 250, 953, 275);
	m_wndMatList.Create(this,10, 305, 955, 545); 
	m_wndApply.Create(this, _T("&Apply"), 775, 555, 865, 580);
	m_wndClose.Create(this, _T("&Close"), 870, 555, 960, 580);

}
void CPurchaseOrderPrepareDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);


	m_wndInvoiceList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndInvoiceList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndInvoiceList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndInvoiceList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndInvoiceList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndInvoiceList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);


	m_wndMatList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndMatList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndMatList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndMatList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);

}
void CPurchaseOrderPrepareDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.AddEvent(1, _T("Delete"), _OnInvoiceListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndMatList.SetEvent(WE_SELCHANGE, _OnMatListSelectChangeFnc);
	m_wndMatList.SetEvent(WE_LOADDATA, _OnMatListLoadDataFnc);
	m_wndMatList.SetEvent(WE_DBLCLICK, _OnMatListDblClickFnc);
	m_wndMatList.AddEvent(1, _T("Delete"), _OnMatListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPurchaseOrderPrepareDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CPurchaseOrderPrepareDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderPrepareDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseOrderPrepareDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CPurchaseOrderPrepareDialog::SetMode(int nMode){
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
/*void CPurchaseOrderPrepareDialog::OnFromDateChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnFromDateSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnFromDateKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderPrepareDialog::OnToDateChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnToDateSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnToDateKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderPrepareDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderPrepareDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderPrepareDialog::OnOrderNoCheckValue(){
	return 0;
} 
void CPurchaseOrderPrepareDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnInvoiceListDblClick(){
	
} 
void CPurchaseOrderPrepareDialog::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderPrepareDialog::OnInvoiceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderPrepareDialog::OnInvoiceListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInvoiceList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchaseOrderPrepareDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnMatListDblClick(){
	
} 
void CPurchaseOrderPrepareDialog::OnMatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderPrepareDialog::OnMatListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderPrepareDialog::OnMatListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMatList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMatList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndMatList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchaseOrderPrepareDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderPrepareDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderPrepareDialog::OnAddPurchaseOrderPrepareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderPrepareDialog::OnEditPurchaseOrderPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderPrepareDialog::OnDeletePurchaseOrderPrepareDialog(){
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
 		OnCancelPurchaseOrderPrepareDialog();
 	}
	return 0;
}
int CPurchaseOrderPrepareDialog::OnSavePurchaseOrderPrepareDialog(){
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
 		//OnPurchaseOrderPrepareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderPrepareDialog::OnCancelPurchaseOrderPrepareDialog(){
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
int CPurchaseOrderPrepareDialog::OnPurchaseOrderPrepareDialogListLoadData(){
	return 0;
}
