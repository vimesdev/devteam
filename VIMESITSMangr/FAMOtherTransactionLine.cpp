#include "FAMOtherTransactionLine.h"
#include "MainFrm.h"
#include "FAMOtherTransactionDialog.h"
#include "FAMOtherTransactionLinePopup.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMOtherTransactionLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMOtherTransactionLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListAddItemFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnItemListAddItem();
}

static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnItemListDeleteItem();
} 
static int _OnAddFAMOtherTransactionLineFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnAddFAMOtherTransactionLine();
} 
static int _OnEditFAMOtherTransactionLineFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnEditFAMOtherTransactionLine();
} 
static int _OnDeleteFAMOtherTransactionLineFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnDeleteFAMOtherTransactionLine();
} 
static int _OnSaveFAMOtherTransactionLineFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnSaveFAMOtherTransactionLine();
} 
static int _OnCancelFAMOtherTransactionLineFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLine*)pWnd)->OnCancelFAMOtherTransactionLine();
} 
CFAMOtherTransactionLine::CFAMOtherTransactionLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMOtherTransactionLine::~CFAMOtherTransactionLine(){
}
void CFAMOtherTransactionLine::OnCreateComponents(){
	m_wndItemList.Create(this,0, 0, 790, 420); 

}
void CFAMOtherTransactionLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndItemList.InsertColumn(1, _T("Item No"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 70);
	m_wndItemList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 120);
	m_wndItemList.InsertColumn(7, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(8, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(9, _T("TransactionID"), CFMT_TEXT, 0);

}
void CFAMOtherTransactionLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);


	m_wndItemList.AddEvent(1, _T("Add Line"), _OnItemListAddItemFnc);
	m_wndItemList.AddEvent(0, _T("-"),NULL);
	m_wndItemList.AddEvent(2, _T("Delete Line"), _OnItemListDeleteItemFnc);

}
void CFAMOtherTransactionLine::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMOtherTransactionLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMOtherTransactionLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMOtherTransactionLine::SetDefaultValues(){


}
int CFAMOtherTransactionLine::SetMode(int nMode){
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
void CFAMOtherTransactionLine::OnItemListDblClick(){
	
} 
void CFAMOtherTransactionLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	m_szOrderNo = m_wndItemList.GetItemText(nNewItem, 1);
	m_nItemID = str2long(m_wndItemList.GetItemText(nNewItem, 0));
	m_szTranLineID = m_wndItemList.GetItemText(nNewItem, 9);
	
} 
int CFAMOtherTransactionLine::OnItemListAddItem(){
	CFAMOtherTransactionLinePopup* newPopup = new CFAMOtherTransactionLinePopup(this, VM_ADD);
	newPopup->m_szTransactionID = m_szTransactionID;
	newPopup->m_szDocType = m_szDocType;
	newPopup->m_szToStorageID = m_szToStorageID;
	newPopup->ShowPopup(&m_wndItemList);
	return 0;
}
int CFAMOtherTransactionLine::OnItemListDeleteItem(){
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
long CFAMOtherTransactionLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T(" SELECT stl_transactionline_id,") \
_T("   stl_item_id ,") \
_T("   si_name   AS stl_name,") \
_T("   si_serial, si_model,") \
_T("   si_uom_id as stl_uom_id,") \
_T("   get_selection_desc('its_uom', si_uom_id) AS stl_unit,") \
_T("   stl_unitprice,") \
_T("   stl_amount,") \
_T("   stl_qtyorder") \
_T(" FROM storage_transactionline") \
_T(" LEFT JOIN storage_item") \
_T(" ON(si_item_id            = stl_item_id)") \
_T(" WHERE stl_transaction_id = '%s' ") \
_T(" ORDER BY stl_line"),m_szTransactionID);

	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndItemList.AddItems(
			tmpStr,
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("stl_name")),
			rs.GetValue(_T("stl_unit")),
			rs.GetValue(_T("stl_qtyorder")),
			rs.GetValue(_T("stl_unitprice")),
			rs.GetValue(_T("stl_amount")),
			rs.GetValue(_T("si_model")),
			rs.GetValue(_T("si_serial")),
			rs.GetValue(_T("stl_transactionline_id")),NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
int CFAMOtherTransactionLine::OnAddFAMOtherTransactionLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMOtherTransactionLine::OnEditFAMOtherTransactionLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMOtherTransactionLine::OnDeleteFAMOtherTransactionLine(){
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
 		OnCancelFAMOtherTransactionLine();
 	}
	return 0;
}
int CFAMOtherTransactionLine::OnSaveFAMOtherTransactionLine(){
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
 		//OnFAMOtherTransactionLineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMOtherTransactionLine::OnCancelFAMOtherTransactionLine(){
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
int CFAMOtherTransactionLine::OnFAMOtherTransactionLineListLoadData(){
	return 0;
}

void CFAMOtherTransactionLine::Refresh()
{
	int nSel = m_wndItemList.GetCurSel();
	OnItemListLoadData();
	m_wndItemList.SetCurSel(nSel);
}