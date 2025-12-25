#include "StorageImportLineInput.h"
#include "StorageImportLines.h"
#include "MainFrame_E10.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportLineInput *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportLineInput *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageImportLineInput *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportLineInput *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CStorageImportLineInput *pVw = (CStorageImportLineInput *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CStorageImportLineInput *pVw = (CStorageImportLineInput *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageImportLineInput *pVw = (CStorageImportLineInput *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportLineInput*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageImportLineInput*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageImportLineInput*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportLineInput*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CStorageImportLineInput*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageImportLineInput*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnItemListDeleteItem();
} 
static int _OnAddStorageImportLineInputFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnAddStorageImportLineInput();
} 
static int _OnEditStorageImportLineInputFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnEditStorageImportLineInput();
} 
static int _OnDeleteStorageImportLineInputFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnDeleteStorageImportLineInput();
} 
static int _OnSaveStorageImportLineInputFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnSaveStorageImportLineInput();
} 
static int _OnCancelStorageImportLineInputFnc(CWnd *pWnd){
	 return ((CStorageImportLineInput*)pWnd)->OnCancelStorageImportLineInput();
} 
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportLineInput*)pWnd)->OnQuantityCheckValue();
}
CStorageImportLineInput::CStorageImportLineInput(CWnd *pParent):
	CGuiDialog(pParent){
	m_nOrderID = 0;
	m_nRefOrderID = 0;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CStorageImportLineInput::~CStorageImportLineInput(){
}
void CStorageImportLineInput::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 350, 85, 375);
	m_wndFromDate.Create(this,90, 350, 170, 375); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 350, 255, 375);
	m_wndToDate.Create(this,260, 350, 340, 375); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 345, 350, 425, 375);
	m_wndOrderNo.Create(this,430, 350, 510, 375); 
	m_wndFind.Create(this, _T("@"), 515, 350, 545, 375);
	m_wndApply.Create(this, _T("&Apply"), 840, 350, 920, 375);
	m_wndClose.Create(this, _T("&Close"), 925, 350, 1005, 375);
	m_wndOrderList.Create(this, _T("Order List"), 5, 5, 460, 345);
	m_wndItem.Create(this, _T("Item"), 465, 5, 1005, 345);
	m_wndList.Create(this,10, 30, 455, 340);
	m_wndItemList.Create(this,470, 30, 1000, 340); 
	m_wndItemList.SetCheckBox(true);

}
void CStorageImportLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	//m_wndOrderNo.SetCheckValue(true);
	
	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Order No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Approved Date"), CFMT_DATETIME, 100);
	m_wndList.InsertColumn(4, _T("Receiver"), CFMT_TEXT, 200);


	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndItemList.InsertColumn(1, _T("Code"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 200);
	m_wndItemList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndItemList.InsertColumn(5, _T(""), CFMT_NUMBER, 0);
	m_wndItemList.InsertColumn(6, _T(""), CFMT_NUMBER, 0);
	m_wndItemList.InsertColumn(7, _T(""), CFMT_NUMBER, 0);

	m_transactionlineTbl.SetTableName(_T("m_transactionline"));
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTION_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_TRANSACTIONLINE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_ORG_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_USER_ID"), dfText, 32); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_STORAGE_TO_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_PRODUCT_ITEM_ID"), dfLong); 
	m_transactionlineTbl.AddField(_T("MTL_QTYORDER"), dfDouble);
	m_transactionlineTbl.AddField(_T("MTL_DESCRIPTION"), dfDouble);

	m_wndItemList.SetEditLabel(4, GUI_NUMBERCTRL);

}
void CStorageImportLineInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
	OnListLoadData();
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndItemList.GetEditControl(4);
	if (pCtrl)
	{
		pCtrl->SetCheckValue(true);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	}
	else 
		_tprintf(_T("\nNULL set"));


}
void CStorageImportLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CStorageImportLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageImportLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageImportLineInput::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CStorageImportLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CStorageImportLineInput::OnFromDateChange(){
	
} */
/*void CStorageImportLineInput::OnFromDateSetfocus(){
	
} */
/*void CStorageImportLineInput::OnFromDateKillfocus(){
	
} */
int CStorageImportLineInput::OnFromDateCheckValue(){
	return 0;
} 
/*void CStorageImportLineInput::OnToDateChange(){
	
} */
/*void CStorageImportLineInput::OnToDateSetfocus(){
	
} */
/*void CStorageImportLineInput::OnToDateKillfocus(){
	
} */
int CStorageImportLineInput::OnToDateCheckValue(){
	return 0;
} 
/*void CStorageImportLineInput::OnOrderNoChange(){
	
} */
/*void CStorageImportLineInput::OnOrderNoSetfocus(){
	
} */
/*void CStorageImportLineInput::OnOrderNoKillfocus(){
	
} */
int CStorageImportLineInput::OnOrderNoCheckValue(){
	return 0;
} 
void CStorageImportLineInput::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
void CStorageImportLineInput::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	int nRes = 0;
	for (int i = 0; i < m_wndItemList.GetItemCount(); i++)
	{
		if (m_wndItemList.GetCheck(i))
		{
			m_transactionlineTbl.SetValue(_T("mtl_org_id"), pMF->GetModuleID());
			m_transactionlineTbl.SetValue(_T("mtl_user_id"), pMF->GetCurrentUser());
			m_transactionlineTbl.SetValue(_T("mtl_transaction_id"), m_nOrderID);
			/*tmpStr = m_wndItemList.GetItemText(i, 7);
			m_transactionlineTbl.SetValue(_T("mtl_transactionline_id"), tmpStr);*/
			m_transactionlineTbl.SetValue(_T("mtl_storage_id"), 0);
			m_transactionlineTbl.SetValue(_T("mtl_storage_to_id"), m_nStorageID);
			tmpStr = m_wndItemList.GetItemText(i, 5);
			m_transactionlineTbl.SetValue(_T("mtl_product_id"), tmpStr);
			tmpStr = m_wndItemList.GetItemText(i, 6);
			m_transactionlineTbl.SetValue(_T("mtl_product_item_id"), tmpStr);
			tmpStr = m_wndItemList.GetItemText(i, 4);
			m_transactionlineTbl.SetValue(_T("mtl_qtyorder"), tmpStr);
			tmpStr = m_wndItemList.GetItemText(i, 7);
			m_transactionlineTbl.SetValue(_T("mtl_description"), tmpStr);
			szSQL.Format(_T("M_TRANSACTIONLINE_CREATE_IMP(%s) "), m_transactionlineTbl.FormatSQL());
			nRes += str2int(pMF->ExecDML(szSQL));
		}
	}
	if (nRes > 0)
	{
		AfxMessageBox(_T("Apply successfully."));
		CStorageImportLines *pL = (CStorageImportLines*) pMF->GetRefWindow(_T("StorageImportLines"));
		pL->OnListLoadData();
		OnItemListLoadData();
	}

} 
void CStorageImportLineInput::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CStorageImportLineInput::OnListDblClick(){
	
} 
void CStorageImportLineInput::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nRefOrderID = str2int(m_wndList.GetItemText(nNewItem, 0));
	OnItemListLoadData();
} 
int CStorageImportLineInput::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CStorageImportLineInput::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int	nIdx = 1;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szWhere.Format(_T(" AND trunc(mt_approveddate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szOrderNo.IsEmpty())
		szWhere.Format(_T(" AND mt_orderno = '%s'"), m_szOrderNo);
	if (m_nStorageID > 0)
		szWhere.AppendFormat(_T(" AND mt_storage_id = %d"), m_nStorageID);
	if (!m_szPartnerID.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szPartnerID);
	szWhere.AppendFormat(_T(" AND mt_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT mt_transaction_id id, mt_orderno orderno, mt_approveddate approveddate, ") \
				 _T(" get_partnername(mt_partner_id) receiver ") \
				 _T(" FROM m_transaction ") \
				 _T(" WHERE mt_doctype = 'EXP' AND mt_status = 'A' %s") \
				 _T(" ORDER BY mt_orderno"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			int2str(nIdx++), 
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("ApprovedDate")), 
			rs.GetValue(_T("Receiver")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CStorageImportLineInput::OnItemListDblClick(){
	
} 
void CStorageImportLineInput::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
} 
int CStorageImportLineInput::OnItemListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CStorageImportLineInput::OnItemListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndItemList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szWhere.Empty();
	if (m_nRefOrderID <=0)
		return 0;
	szWhere.AppendFormat(_T(" AND mtl_transaction_id = %d"), m_nRefOrderID);
	szSQL.Format(_T(" SELECT mtl_transactionline_id line_id, product_code code,") \
				 _T(" mtl_product_item_id itemid, mtl_product_id productid,") \
				 _T(" product_name itemname, product_uomname unit, mtl_qtydelivery quantity ") \
				 _T(" FROM m_transactionline ") \
				 _T(" LEFT JOIN m_productitem_view ON (mtl_product_item_id = product_item_id)") \
				 _T(" WHERE NVL(mtl_status, 'N') NOT IN ('O', 'R') %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("ItemName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("productid")), 
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("line_id")), 
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
int CStorageImportLineInput::OnAddStorageImportLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageImportLineInput::OnEditStorageImportLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageImportLineInput::OnDeleteStorageImportLineInput(){
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
 		OnCancelStorageImportLineInput();
 	}
	return 0;
}
int CStorageImportLineInput::OnSaveStorageImportLineInput(){
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
 		//OnStorageImportLineInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageImportLineInput::OnCancelStorageImportLineInput(){
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
int CStorageImportLineInput::OnStorageImportLineInputListLoadData(){
	return 0;
}

int CStorageImportLineInput::OnQuantityCheckValue(){
	//CString szTemp = m_wndItemList.GetItemText(m_wndItemList.GetCurSel(), 4);
	//_tprintf(_T("\nszTemp: %s"), szTemp);
	//return 0;
	int nMaxQty = 0;
	CGuiListCtrl* pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	if (pList)
		nMaxQty = str2int(pList->GetItemText(pList->GetCurSel(), 4));
	else
		_tprintf(_T("\nNULL pList"));
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) GetFocus();
	CString tmpStr;
	if (pCtrl)
	{
		pCtrl->GetWindowText(tmpStr);
		_tprintf(_T("\nnuM: %s|%d"), tmpStr, nMaxQty);
		if (str2int(tmpStr) > nMaxQty)
			return -1;
	}
	else
		_tprintf(_T("\nNULL check"));
	return 0;
}