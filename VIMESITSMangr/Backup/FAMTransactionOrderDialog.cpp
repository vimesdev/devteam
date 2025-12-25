#include "FAMTransactionOrderDialog.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderDialog* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnStatusCheckValue();
}
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMTransactionOrderDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnAddFAMTransactionOrderDialog();
} 
static int _OnEditFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnEditFAMTransactionOrderDialog();
} 
static int _OnDeleteFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnDeleteFAMTransactionOrderDialog();
} 
static int _OnSaveFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnSaveFAMTransactionOrderDialog();
} 
static int _OnCancelFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnCancelFAMTransactionOrderDialog();
} 
CFAMTransactionOrderDialog::CFAMTransactionOrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_bRefresh = false;
	CGuiDialog::SetMode(nMode);
}
CFAMTransactionOrderDialog::~CFAMTransactionOrderDialog(){
}
void CFAMTransactionOrderDialog::OnCreateComponents(){
	
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 795, 120);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 265, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDER_DATE"), 270, 30, 370, 55);
	m_wndOrderDate.Create(this,375, 30, 522, 55); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 527, 30, 637, 55);
	m_wndWarehouse.Create(this,642, 30, 792, 55); 
	m_wndSourceLabel.Create(this, _T("Source"), 10, 60, 110, 85);
	m_wndSource.Create(this,115, 60, 265, 85); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 270, 60, 370, 85);
	m_wndInvoiceNo.Create(this,375, 60, 522, 85); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 527, 60, 637, 85);
	m_wndInvoiceDate.Create(this,642, 60, 792, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 110, 115);
	m_wndNote.Create(this,115, 90, 522, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 527, 90, 637, 115);
	m_wndStatus.Create(this,642, 90, 792, 115); 
	m_wndLineTab.Create(this,5, 125, 795, 570); 
	m_wndAdd.Create(this, _T("Add"), 210, 575, 290, 600);
	m_wndEdit.Create(this, _T("Edit"), 295, 575, 375, 600);
	m_wndSave.Create(this, _T("Save"), 380, 575, 460, 600);
	m_wndCancel.Create(this, _T("Cancel"), 465, 575, 545, 600);
	m_wndPrint.Create(this, _T("Print"), 550, 575, 630, 600);
	m_wndImport.Create(this, _T("&Import"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("Close"), 720, 575, 800, 600);

	m_wndROL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndROL);
	m_wndROL.OnInitDialog();
	m_wndROL.SetMode(VM_NONE);


}
void CFAMTransactionOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetReadOnly(TRUE);
	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndSource.SetCheckValue(true);
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(35);
	m_wndNote.SetLimitText(1024);
	m_wndStatus.SetReadOnly(TRUE);
	
	
	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_transactionTbl.SetTableName(_T("storage_transaction"));
	m_transactionTbl.AddField(_T("st_org_id"), dfText, 3);
	m_transactionTbl.AddField(_T("st_orderno"), dfText, 15);
	m_transactionTbl.AddField(_T("st_orderdate"), dfDateTime);
	m_transactionTbl.AddField(_T("st_imp_storage_id"), dfText, 15);
	m_transactionTbl.AddField(_T("st_imp_department_id"), dfText, 7);
	m_transactionTbl.AddField(_T("st_source"), dfText, 15);
	m_transactionTbl.AddField(_T("st_invoiceno"), dfText, 15);
	m_transactionTbl.AddField(_T("st_invoicedate"), dfDate);
	m_transactionTbl.AddField(_T("st_note"), dfText, 254);
	m_transactionTbl.AddField(_T("st_processing"), dfText, 1);
	
	


}
void CFAMTransactionOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	m_wndLineTab.SetEvent(WE_SELCHANGE, _OnLineTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(nMode);
	
}
void CFAMTransactionOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);

}
void CFAMTransactionOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_imp_storage_id, ") \
		_T(" st_source, st_invoiceno, st_invoicedate, st_status, st_note ") \
		_T(" FROM storage_transaction WHERE st_transaction_id = '%s'"), m_szTransactionID);
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_orderno"), m_szOrderNo);
		rs.GetValue(_T("st_orderdate"), m_szOrderDate);
		rs.GetValue(_T("st_imp_storage_id"), m_szWarehouseKey);
		
		rs.GetValue(_T("st_source"), m_szSourceKey);
		rs.GetValue(_T("st_invoiceno"), m_szInvoiceNo);
		rs.GetValue(_T("st_invoicedate"), m_szInvoiceDate);
		rs.GetValue(_T("st_status"), m_szStatus);
		rs.GetValue(_T("st_note"), m_szNote);
		if(m_szInvoiceNo.IsEmpty())
		{
			m_szInvoiceDate.Empty();
		}
		UpdateData(FALSE);
		m_wndROL.m_szTransactionID = m_szTransactionID;
		m_wndROL.OnItemListLoadData();
	}
}
void CFAMTransactionOrderDialog::GetScreenToData(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_transactionTbl.SetValue(_T("st_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("st_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("st_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("st_invoiceno"), m_szInvoiceNo);
	m_transactionTbl.SetValue(_T("st_invoicedate"), m_szInvoiceDate);
	m_transactionTbl.SetValue(_T("st_imp_storage_id"), m_szWarehouseKey);
	m_transactionTbl.SetValue(_T("st_imp_department_id"), pMF->m_szDepartment);
	m_transactionTbl.SetValue(_T("st_source"), m_szSourceKey);
	m_transactionTbl.SetValue(_T("st_note"), m_szNote);
	m_transactionTbl.SetValue(_T("st_processing"), _T("S"));

}
void CFAMTransactionOrderDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szWarehouseKey.Empty();
	m_szSourceKey.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szNote.Empty();
	m_szInvoiceNo.Empty();
	m_szSourceKey.Empty();

}
int CFAMTransactionOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			CreateNewOrder();

			m_wndROL.m_szOrderNo = m_szOrderNo;
			m_wndROL.Refresh();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndWarehouse.EnableWindow(FALSE);
			m_wndSource.EnableWindow(FALSE);
			m_wndROL.SetMode(VM_EDIT);
			m_wndROL.m_szTransactionID = m_szTransactionID;
			m_wndROL.m_szOrderNo = m_szOrderNo;
 			break;
 		case VM_VIEW: 
			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(m_szStatus == _T("P"))
				m_wndImport.EnableWindow(FALSE);
			m_wndROL.m_szTransactionID = m_szTransactionID;
			m_wndROL.m_szOrderNo = m_szOrderNo;
			m_wndEdit.EnableWindow(TRUE);
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
/*void CFAMTransactionOrderDialog::OnOrderNoChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderNoKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnOrderDateChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderDateKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CFAMTransactionOrderDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnWarehouseSelendok(){
	UpdateData(TRUE);

}
/*void CFAMTransactionOrderDialog::OnWarehouseSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnWarehouseKillfocus(){
	
}*/
long CFAMTransactionOrderDialog::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and NVL(sl_type,'WA') = 'WA' "));
	return pMF->LoadWarehouseList(&m_wndWarehouse, m_szWarehouseKey, szFilter);
/*
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szWarehouseKey);
	}
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name ") \
		_T(" FROM storage_location ") \
		_T(" WHERE sl_org_id = '%s'  %s ORDER BY sl_storage_id "), 
		pMF->GetModuleID(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CFAMTransactionOrderDialog::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransactionOrderDialog::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnSourceSelendok(){
	 
}
/*void CFAMTransactionOrderDialog::OnSourceSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnSourceKillfocus(){
	
}*/
long CFAMTransactionOrderDialog::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSourceList(&m_wndSource, m_szSourceKey);
	/*
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty())
	{
		szWhere.Format(_T(" AND fase_id='%s' "), m_szSourceKey);
	}
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fase_id AS id, fase_desc AS description ") \
		_T(" FROM fam_sources ") \
		_T(" WHERE fam_org_id='%s' %s ORDER BY fase_id"), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
	*/
}

/*void CFAMTransactionOrderDialog::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnInvoiceDateChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceDateKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnNoteChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnNoteSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnNoteKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnStatusChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnStatusSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnStatusKillfocus(){
	
}*/
int CFAMTransactionOrderDialog::OnStatusCheckValue(){
	return 0;
}
void CFAMTransactionOrderDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("P"))
	{
		OnEditFAMTransactionOrderDialog();
	}
	else
		MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
} 
void CFAMTransactionOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL2, tmpStr, szTemp, szDate, szOrderID, szSource, szInvoiceNo;
	long double nGroupTotal;
	long double nTotal;
	double nCost, nUPrice;
	int nIndex = 1;

	szSQL2.Format(_T("SELECT st_orderid, (select fase_desc from fam_sources where fase_id = st_source) as fsource, st_invoiceno ") \
		_T(" FROM storage_transaction WHERE st_doctype = 'IPO' and st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);
	szOrderID = rs1.GetValue(_T("st_orderid"));
	szSource =  rs1.GetValue(_T("fsource"));
	szInvoiceNo = rs1.GetValue(_T("st_invoiceno"));

	szSQL.Format(_T("SELECT stl_item_id, fal_assetname, stl_uom_id,  stl_unitprice, stl_qtyorder, stl_amount, st_orderid, fal_model, stl_seri ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN fam_asset_list ON( fal_assetno = stl_item_id ) ") \
				_T("WHERE     st_doctype = 'IPO' and st_transaction_id = '%s'"), m_szTransactionID);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUNHAPKHO.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("OrderNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndWarehouse.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szInvoiceNo);
	rpt.GetReportHeader()->SetValue(_T("InvoiceDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("Source"), szSource);
	rpt.GetReportHeader()->SetValue(_T("ReferenceNo"),szOrderID);
	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fal_assetname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fal_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("stl_seri"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_uom_id"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("expdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("6"), szTemp);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("stl_unitprice"), nUPrice);
		FormatCurrency(nUPrice, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("stl_amount"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		nGroupTotal += nCost;

		rs.MoveNext();
	}
	if(nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if(nTotal > 0)
	{
		//FormatCurrency(nTotal+(nTotal*0.1), tmpStr);
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}

	CString szMoney;
	tmpStr.Replace(_T("."), _T(""));
	MoneyToString(tmpStr, szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), int2str(nIndex-1));
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMTransactionOrderDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_POST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
		pMF->ExecDML(szSQL);
		m_szStatus.Format(_T("P"));
		SetMode(VM_VIEW);
		m_wndROL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMTransactionOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("STORAGE_TRANSACTION_DISCARD('%s')"), m_szTransactionID);
	pMF->ExecDML(szSQL);
	pMF->m_wndReceiptOrder.OnOrderListLoadData();
	OnCancel();
} 

int CFAMTransactionOrderDialog::OnAddFAMTransactionOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndROL.SetMode(VM_ADD);
	return 0;
}
int CFAMTransactionOrderDialog::OnEditFAMTransactionOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransactionOrderDialog::OnDeleteFAMTransactionOrderDialog(){
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
 		OnCancelFAMTransactionOrderDialog();
 	}
	return 0;
}
int CFAMTransactionOrderDialog::OnSaveFAMTransactionOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if(m_szWarehouseKey.IsEmpty())
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExceptions;
	if(m_szStatus != _T("O"))
		szExceptions.Format(_T("st_org_id,st_orderno,st_orderdate,st_status,st_transaction_id,st_imp_storage_id,st_source"));

	szSQL.Format(_T("%s"), m_transactionTbl.GetUpdateSQL(szExceptions));
	szSQL.AppendFormat(_T(" WHERE st_transaction_id='%s' "), m_szTransactionID);

 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
		}
		else{
			m_wndROL.SetMode(VM_ADD);
			SetMode(VM_VIEW);
		}
		m_bRefresh = true;
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMTransactionOrderDialog::OnCancelFAMTransactionOrderDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
		m_wndROL.SetMode(VM_NONE);
 	} 
 	else 
 	{
		m_wndROL.Refresh();
		m_wndROL.SetDefaultValues();
		SetMode(VM_NONE);
 	}
 	return 0;
} 
int CFAMTransactionOrderDialog::OnFAMTransactionOrderDialogListLoadData(){
	return 0;
}


void CFAMTransactionOrderDialog::CreateNewOrder()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,szResDetail;
	int res;
	szSQL.Format(_T("STORAGE_TRANSACTION_CREATE('ITS', '', '%s', 'IPO')"), pMF->GetCurrentUser());
	pMF->ExecDMLEx(szSQL, res, szResDetail);
	if(res < 0)
	{
		ShowMessageBox(szResDetail);
		return ;
	}
	m_szTransactionID = szResDetail;
	GetDataToScreen();

}