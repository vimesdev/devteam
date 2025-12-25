#include "CFAMReceiptOrderDialog.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCFAMReceiptOrderDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCFAMReceiptOrderDialog* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCFAMReceiptOrderDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCFAMReceiptOrderDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCFAMReceiptOrderDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCFAMReceiptOrderDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCFAMReceiptOrderDialog *pVw = (CCFAMReceiptOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCFAMReceiptOrderDialogFnc(CWnd *pWnd){
	 return ((CCFAMReceiptOrderDialog*)pWnd)->OnAddCFAMReceiptOrderDialog();
} 
static int _OnEditCFAMReceiptOrderDialogFnc(CWnd *pWnd){
	 return ((CCFAMReceiptOrderDialog*)pWnd)->OnEditCFAMReceiptOrderDialog();
} 
static int _OnDeleteCFAMReceiptOrderDialogFnc(CWnd *pWnd){
	 return ((CCFAMReceiptOrderDialog*)pWnd)->OnDeleteCFAMReceiptOrderDialog();
} 
static int _OnSaveCFAMReceiptOrderDialogFnc(CWnd *pWnd){
	 return ((CCFAMReceiptOrderDialog*)pWnd)->OnSaveCFAMReceiptOrderDialog();
} 
static int _OnCancelCFAMReceiptOrderDialogFnc(CWnd *pWnd){
	 return ((CCFAMReceiptOrderDialog*)pWnd)->OnCancelCFAMReceiptOrderDialog();
} 
CCFAMReceiptOrderDialog::CCFAMReceiptOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCFAMReceiptOrderDialog::~CCFAMReceiptOrderDialog(){
}
void CCFAMReceiptOrderDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 795, 120);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 265, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 270, 30, 370, 55);
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

}
void CCFAMReceiptOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(1024);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);
	m_wndInvoiceNo.SetLimitText(1024);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);







}
void CCFAMReceiptOrderDialog::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndLineTab.SetEvent(WE_SELCHANGE, _OnLineTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCFAMReceiptOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CCFAMReceiptOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCFAMReceiptOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCFAMReceiptOrderDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szWarehouseKey.Empty();
	m_szSourceKey.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szNote.Empty();
	m_szStatusKey.Empty();

}
int CCFAMReceiptOrderDialog::SetMode(int nMode){
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
/*void CCFAMReceiptOrderDialog::OnOrderNoChange(){
	
} */
/*void CCFAMReceiptOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CCFAMReceiptOrderDialog::OnOrderNoKillfocus(){
	
} */
int CCFAMReceiptOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CCFAMReceiptOrderDialog::OnOrderDateChange(){
	
} */
/*void CCFAMReceiptOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CCFAMReceiptOrderDialog::OnOrderDateKillfocus(){
	
} */
int CCFAMReceiptOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CCFAMReceiptOrderDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnWarehouseSelendok(){
	 
}
/*void CCFAMReceiptOrderDialog::OnWarehouseSetfocus(){
	
}*/
/*void CCFAMReceiptOrderDialog::OnWarehouseKillfocus(){
	
}*/
long CCFAMReceiptOrderDialog::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseKey
};
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCFAMReceiptOrderDialog::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCFAMReceiptOrderDialog::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnSourceSelendok(){
	 
}
/*void CCFAMReceiptOrderDialog::OnSourceSetfocus(){
	
}*/
/*void CCFAMReceiptOrderDialog::OnSourceKillfocus(){
	
}*/
long CCFAMReceiptOrderDialog::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCFAMReceiptOrderDialog::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCFAMReceiptOrderDialog::OnInvoiceNoChange(){
	
} */
/*void CCFAMReceiptOrderDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CCFAMReceiptOrderDialog::OnInvoiceNoKillfocus(){
	
} */
int CCFAMReceiptOrderDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CCFAMReceiptOrderDialog::OnInvoiceDateChange(){
	
} */
/*void CCFAMReceiptOrderDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CCFAMReceiptOrderDialog::OnInvoiceDateKillfocus(){
	
} */
int CCFAMReceiptOrderDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CCFAMReceiptOrderDialog::OnNoteChange(){
	
} */
/*void CCFAMReceiptOrderDialog::OnNoteSetfocus(){
	
} */
/*void CCFAMReceiptOrderDialog::OnNoteKillfocus(){
	
} */
int CCFAMReceiptOrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CCFAMReceiptOrderDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnStatusSelendok(){
	 
}
/*void CCFAMReceiptOrderDialog::OnStatusSetfocus(){
	
}*/
/*void CCFAMReceiptOrderDialog::OnStatusKillfocus(){
	
}*/
long CCFAMReceiptOrderDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCFAMReceiptOrderDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCFAMReceiptOrderDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFAMReceiptOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCFAMReceiptOrderDialog::OnAddCFAMReceiptOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCFAMReceiptOrderDialog::OnEditCFAMReceiptOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCFAMReceiptOrderDialog::OnDeleteCFAMReceiptOrderDialog(){
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
 		OnCancelCFAMReceiptOrderDialog();
 	}
	return 0;
}
int CCFAMReceiptOrderDialog::OnSaveCFAMReceiptOrderDialog(){
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
 		//OnCFAMReceiptOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCFAMReceiptOrderDialog::OnCancelCFAMReceiptOrderDialog(){
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
int CCFAMReceiptOrderDialog::OnCFAMReceiptOrderDialogListLoadData(){
	return 0;
}
