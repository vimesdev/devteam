#include "CPurchaseOrderPrepareDialog.h"
#include "MainFrm.h"
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCPurchaseOrderPrepareDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CCPurchaseOrderPrepareDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCPurchaseOrderPrepareDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCPurchaseOrderPrepareDialog *)pWnd)->OnToDateCheckValue();
} 
static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListLoadData();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnInvoiceListDeleteItem();
} 
static long _OnMatListLoadDataFnc(CWnd *pWnd){
	return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnMatListLoadData();
} 
static void _OnMatListDblClickFnc(CWnd *pWnd){
	((CCPurchaseOrderPrepareDialog*)pWnd)->OnMatListDblClick();
} 
static void _OnMatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCPurchaseOrderPrepareDialog*)pWnd)->OnMatListSelectChange(nOldItem, nNewItem);
} 
static int _OnMatListDeleteItemFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnMatListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CCPurchaseOrderPrepareDialog *pVw = (CCPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCPurchaseOrderPrepareDialog *pVw = (CCPurchaseOrderPrepareDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnAddCPurchaseOrderPrepareDialog();
} 
static int _OnEditCPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnEditCPurchaseOrderPrepareDialog();
} 
static int _OnDeleteCPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnDeleteCPurchaseOrderPrepareDialog();
} 
static int _OnSaveCPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnSaveCPurchaseOrderPrepareDialog();
} 
static int _OnCancelCPurchaseOrderPrepareDialogFnc(CWnd *pWnd){
	 return ((CCPurchaseOrderPrepareDialog*)pWnd)->OnCancelCPurchaseOrderPrepareDialog();
} 
CCPurchaseOrderPrepareDialog::CCPurchaseOrderPrepareDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CCPurchaseOrderPrepareDialog::~CCPurchaseOrderPrepareDialog(){
}
void CCPurchaseOrderPrepareDialog::OnCreateComponents(){
	m_wndPreInvoiceInformation.Create(this, _T("Pre Invoice Information"), 5, 5, 390, 570);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 30, 100, 55);
	m_wndSupplier.Create(this,105, 30, 385, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndMaterialInformation.Create(this, _T("Material Information"), 395, 5, 960, 570);
	m_wndFromDate.Create(this,105, 60, 195, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 60, 290, 85);
	m_wndToDate.Create(this,295, 60, 385, 85); 
	m_wndInvoiceList.Create(this,5, 90, 385, 565); 
	m_wndMatList.Create(this,400, 30, 955, 565); 
	m_wndApply.Create(this, _T("&Apply"), 775, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 960, 600);

}
void CCPurchaseOrderPrepareDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndInvoiceList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 100);
	m_wndInvoiceList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 100);
	m_wndInvoiceList.InsertColumn(3, _T("Amount"), CFMT_NUMBER, 100);


	m_wndMatList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndMatList.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndMatList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndMatList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndMatList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);

}
void CCPurchaseOrderPrepareDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.AddEvent(1, _T("Delete"), _OnInvoiceListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMatList.SetEvent(WE_SELCHANGE, _OnMatListSelectChangeFnc);
	m_wndMatList.SetEvent(WE_LOADDATA, _OnMatListLoadDataFnc);
	m_wndMatList.SetEvent(WE_DBLCLICK, _OnMatListDblClickFnc);
	m_wndMatList.AddEvent(1, _T("Delete"), _OnMatListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCPurchaseOrderPrepareDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CCPurchaseOrderPrepareDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCPurchaseOrderPrepareDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCPurchaseOrderPrepareDialog::SetDefaultValues(){

	m_szSupplierKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CCPurchaseOrderPrepareDialog::SetMode(int nMode){
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
void CCPurchaseOrderPrepareDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCPurchaseOrderPrepareDialog::OnSupplierSelendok(){
	 
}
/*void CCPurchaseOrderPrepareDialog::OnSupplierSetfocus(){
	
}*/
/*void CCPurchaseOrderPrepareDialog::OnSupplierKillfocus(){
	
}*/
long CCPurchaseOrderPrepareDialog::OnSupplierLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCPurchaseOrderPrepareDialog::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCPurchaseOrderPrepareDialog::OnFromDateChange(){
	
} */
/*void CCPurchaseOrderPrepareDialog::OnFromDateSetfocus(){
	
} */
/*void CCPurchaseOrderPrepareDialog::OnFromDateKillfocus(){
	
} */
int CCPurchaseOrderPrepareDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CCPurchaseOrderPrepareDialog::OnToDateChange(){
	
} */
/*void CCPurchaseOrderPrepareDialog::OnToDateSetfocus(){
	
} */
/*void CCPurchaseOrderPrepareDialog::OnToDateKillfocus(){
	
} */
int CCPurchaseOrderPrepareDialog::OnToDateCheckValue(){
	return 0;
} 
void CCPurchaseOrderPrepareDialog::OnInvoiceListDblClick(){
	
} 
void CCPurchaseOrderPrepareDialog::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCPurchaseOrderPrepareDialog::OnInvoiceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCPurchaseOrderPrepareDialog::OnInvoiceListLoadData(){
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
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCPurchaseOrderPrepareDialog::OnMatListDblClick(){
	
} 
void CCPurchaseOrderPrepareDialog::OnMatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCPurchaseOrderPrepareDialog::OnMatListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCPurchaseOrderPrepareDialog::OnMatListLoadData(){
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
void CCPurchaseOrderPrepareDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCPurchaseOrderPrepareDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCPurchaseOrderPrepareDialog::OnAddCPurchaseOrderPrepareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCPurchaseOrderPrepareDialog::OnEditCPurchaseOrderPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCPurchaseOrderPrepareDialog::OnDeleteCPurchaseOrderPrepareDialog(){
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
 		OnCancelCPurchaseOrderPrepareDialog();
 	}
	return 0;
}
int CCPurchaseOrderPrepareDialog::OnSaveCPurchaseOrderPrepareDialog(){
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
 		//OnCPurchaseOrderPrepareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCPurchaseOrderPrepareDialog::OnCancelCPurchaseOrderPrepareDialog(){
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
int CCPurchaseOrderPrepareDialog::OnCPurchaseOrderPrepareDialogListLoadData(){
	return 0;
}
