#include "FAMReceiptOrderLine.h"
#include "MainFrm.h"
#include "FAMReceiptOrderDialog.h"
#include "FAMReceiptOrderLinePopup.h"


static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMReceiptOrderLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMReceiptOrderLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
}

static int _OnItemListAddItemFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnItemListAddItem();
}

static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnItemListDeleteItem();
} 

static int _OnAddFAMReceiptOrderLineFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnAddFAMReceiptOrderLine();
} 
static int _OnEditFAMReceiptOrderLineFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnEditFAMReceiptOrderLine();
} 
static int _OnDeleteFAMReceiptOrderLineFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnDeleteFAMReceiptOrderLine();
} 
static int _OnSaveFAMReceiptOrderLineFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnSaveFAMReceiptOrderLine();
} 
static int _OnCancelFAMReceiptOrderLineFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLine*)pWnd)->OnCancelFAMReceiptOrderLine();
}

CFAMReceiptOrderLine::CFAMReceiptOrderLine(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 420;
	SetDefaultValues();
}
CFAMReceiptOrderLine::~CFAMReceiptOrderLine(){
}
void CFAMReceiptOrderLine::OnCreateComponents(){
	m_wndItemList.Create(this,0, 0, 790, 420); 

}
void CFAMReceiptOrderLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Item No"), CFMT_TEXT, 180);
	m_wndItemList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 350);
	m_wndItemList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(4, _T("Quantity"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 120);
	m_wndItemList.InsertColumn(7, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(8, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(9, _T("TransactionID"), CFMT_TEXT, 0);
	
}
void CFAMReceiptOrderLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);


	m_wndItemList.AddEvent(1, _T("Add Line"), _OnItemListAddItemFnc);
	m_wndItemList.AddEvent(0, _T("-"),NULL);
	m_wndItemList.AddEvent(2, _T("Delete Line"), _OnItemListDeleteItemFnc);

}
void CFAMReceiptOrderLine::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMReceiptOrderLine::GetDataToScreen(){
	
}
void CFAMReceiptOrderLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CFAMReceiptOrderLine::SetDefaultValues(){
}
int CFAMReceiptOrderLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			OnItemListLoadData();
 			EnableButtons(TRUE, 0, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			OnItemListLoadData();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, -1);
 			SetDefaultValues();
			//m_wndHaveSerial.EnableWindow(FALSE);
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMReceiptOrderLine::OnItemListDblClick(){
	
} 
void CFAMReceiptOrderLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	m_szOrderNo = m_wndItemList.GetItemText(nNewItem, 1);
	m_nItemID = str2long(m_wndItemList.GetItemText(nNewItem, 0));
	m_szTranLineID = m_wndItemList.GetItemText(nNewItem, 9);

} 

int CFAMReceiptOrderLine::OnItemListAddItem(){
	CFAMReceiptOrderLinePopup* newPopup = new CFAMReceiptOrderLinePopup(this, VM_ADD);
	newPopup->m_szTransactionID = m_szTransactionID;
	newPopup->ShowPopup(&m_wndItemList);
	return 0;
}
int CFAMReceiptOrderLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	CString szSQL, szRes, szUpdate;
	if(GetMode() == VM_VIEW)
		return -1;
	int nSel = m_wndItemList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szLine = m_wndItemList.GetItemText(nSel, 9);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("STORAGE_TRANSACTION_DELLINE('%s','%s')"), m_szTransactionID, szLine);
	
 	szRes = pMF->ExecDML(szSQL);
 	if(!szRes.IsEmpty()){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMReceiptOrderLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIdx;
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems();
	int nCount = 0;
	int nIdx = 1;
	szSQL.Format(_T(" SELECT stl_transactionline_id,") \
				_T("   stl_item_id,") \
				_T("   si_name  AS stl_name,") \
				_T("   si_model AS stl_model,") \
				_T("   stl_uom_id,") \
				_T("   storage_get_uomname(si_uom_id) as stl_unit,") \
				_T("   stl_unitprice,") \
				_T("   stl_amount,") \
				_T("   stl_qtyorder,") \
				_T("   stl_seri") \
				_T(" FROM storage_transactionline") \
				_T(" LEFT JOIN storage_item") \
				_T(" ON(si_item_id            = stl_item_id)") \
				_T(" WHERE stl_transaction_id = '%s'") \
				_T(" ORDER BY stl_line") ,m_szTransactionID);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIdx.Format(_T("%d"), nIdx);
		m_wndItemList.AddItems(
			szIdx,
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("stl_name")),
			rs.GetValue(_T("stl_unit")),
			rs.GetValue(_T("stl_qtyorder")),
			rs.GetValue(_T("stl_unitprice")),
			rs.GetValue(_T("stl_amount")),
			rs.GetValue(_T("stl_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("stl_transactionline_id")),NULL);
		rs.MoveNext();
		nIdx++;
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}

int CFAMReceiptOrderLine::OnAddFAMReceiptOrderLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMReceiptOrderLine::OnEditFAMReceiptOrderLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMReceiptOrderLine::OnDeleteFAMReceiptOrderLine(){
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
 		OnCancelFAMReceiptOrderLine();
 	}
	return 0;
}
int CFAMReceiptOrderLine::OnSaveFAMReceiptOrderLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
	return 0;
}
int CFAMReceiptOrderLine::OnCancelFAMReceiptOrderLine(){
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
int CFAMReceiptOrderLine::OnFAMReceiptOrderLineListLoadData(){
	return 0;
}
void CFAMReceiptOrderLine::Refresh()
{
	int nSel = m_wndItemList.GetCurSel();
	OnItemListLoadData();
	m_wndItemList.SetCurSel(nSel);
}
