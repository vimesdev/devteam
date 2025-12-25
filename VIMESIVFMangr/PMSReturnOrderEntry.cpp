#include "PMSReturnOrderEntry.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "PMSReturnOrder.h"

static void _OnOrderNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrderEntry* )pWnd)->OnOrderNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderNoSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnOrderNoSelendok();
}
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnOrderNoKillfocus();
}*/
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnOrderNoKillfocus();
}*/
static long _OnOrderNoLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrderEntry *)pWnd)->OnOrderNoLoadData();
}
/*static void _OnOrderNoAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnOrderNoAddNew();
}*/
static void _OnNameCntSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrderEntry* )pWnd)->OnNameCntSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameCntSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnNameCntSelendok();
}
/*static void _OnNameCntSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnNameCntKillfocus();
}*/
/*static void _OnNameCntKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnNameCntKillfocus();
}*/
static long _OnNameCntLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrderEntry *)pWnd)->OnNameCntLoadData();
}
/*static void _OnNameCntAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnNameCntAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderEntry *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrderEntry *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSReturnOrderEntry *pVw = (CPMSReturnOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSReturnOrderEntry *pVw = (CPMSReturnOrderEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSReturnOrderEntryFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderEntry*)pWnd)->OnAddPMSReturnOrderEntry();
} 
static int _OnEditPMSReturnOrderEntryFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderEntry*)pWnd)->OnEditPMSReturnOrderEntry();
} 
static int _OnDeletePMSReturnOrderEntryFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderEntry*)pWnd)->OnDeletePMSReturnOrderEntry();
} 
static int _OnSavePMSReturnOrderEntryFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderEntry*)pWnd)->OnSavePMSReturnOrderEntry();
} 
static int _OnCancelPMSReturnOrderEntryFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderEntry*)pWnd)->OnCancelPMSReturnOrderEntry();
} 
CPMSReturnOrderEntry::CPMSReturnOrderEntry(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 65;
	SetDefaultValues();
	m_szOrderNoKey.Empty();
}
CPMSReturnOrderEntry::~CPMSReturnOrderEntry(){
}
void CPMSReturnOrderEntry::OnCreateComponents(){
	m_wndAddEntry.Create(this, _T("Add Entry"), 0, 0, 780, 55);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 5, 25, 75, 50);
	m_wndOrderNo.Create(this,80, 25, 180, 50); 
	m_wndNameCntLabel.Create(this, _T("Name /Cnt"), 185, 25, 285, 50);
	m_wndNameCnt.Create(this,290, 25, 520, 50); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 525, 25, 595, 50);
	m_wndQuantity.Create(this,600, 25, 670, 51); 
	m_wndSave.Create(this, _T("&Save"), 675, 25, 745, 50);
	m_wndClose.Create(this, _T("X"), 750, 25, 775, 50);
}
void CPMSReturnOrderEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderNo.LimitText(35);
	m_wndNameCnt.SetCheckValue(true);
	m_wndQuantity.SetCheckValue(true);
	m_wndQuantity.SetLimitText(6);
	m_wndMaxQuantity.SetReadOnly(true);
	m_wndMaxQuantity.SetCurrencyFormat(true);
	m_wndOrderNo.Format(3, 0, 5);
	m_wndOrderNo.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderNo.InsertColumn(1, _T("To Stock /Department"), CFMT_TEXT, 150);
	m_wndOrderNo.InsertColumn(2, _T("Date"), CFMT_DATE, 85);
	m_wndOrderNo.InsertColumn(3, _T("Description"), CFMT_TEXT, 200);


	m_wndNameCnt.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndNameCnt.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 120);
	m_wndNameCnt.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndNameCnt.InsertColumn(3, _T("Price"), CFMT_MONEY, 70);
	m_wndNameCnt.InsertColumn(4, _T("Manufacturer"), CFMT_TEXT, 150);
	m_wndNameCnt.InsertColumn(5, _T("In Stock"), CFMT_MONEY, 70);


	m_pms_returnorder_lineTbl.SetTableName(_T("pms_return_order_line"));
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_id"), dfText, 15); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_orderno"), dfText, 15); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_sitemid"), dfLong); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_qty"), dfFloat); 

}
void CPMSReturnOrderEntry::OnSetWindowEvents(){
	m_wndOrderNo.SetEvent(WE_SELENDOK, _OnOrderNoSelendokFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_SELCHANGE, _OnOrderNoSelectChangeFnc);
	m_wndOrderNo.SetEvent(WE_LOADDATA, _OnOrderNoLoadDataFnc);
	//m_wndOrderNo.SetEvent(WE_ADDNEW, _OnOrderNoAddNewFnc);
	m_wndNameCnt.SetEvent(WE_SELENDOK, _OnNameCntSelendokFnc);
	//m_wndNameCnt.SetEvent(WE_SETFOCUS, _OnNameCntSetfocusFnc);
	//m_wndNameCnt.SetEvent(WE_KILLFOCUS, _OnNameCntKillfocusFnc);
	m_wndNameCnt.SetEvent(WE_SELCHANGE, _OnNameCntSelectChangeFnc);
	m_wndNameCnt.SetEvent(WE_LOADDATA, _OnNameCntLoadDataFnc);
	//m_wndNameCnt.SetEvent(WE_ADDNEW, _OnNameCntAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());

}
void CPMSReturnOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNoKey);
	DDX_TextEx(pDX, m_wndNameCnt.GetDlgCtrlID(), m_szNameCntKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
}
void CPMSReturnOrderEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmrol_sitemid"), m_szNameCntKey);
	rs.GetValue(_T("pmrol_qty"), m_nQuantity);

}
void CPMSReturnOrderEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_pms_returnorder_lineTbl.SetValue(_T("pmrol_userid"), pMF->GetCurrentUser());
	m_pms_returnorder_lineTbl.SetValue(_T("pmrol_id"), m_szID);
	m_pms_returnorder_lineTbl.SetValue(_T("pmrol_orderno"), m_szOrderNoKey);
	m_pms_returnorder_lineTbl.SetValue(_T("pmrol_sitemid"), m_szNameCntKey);
	m_pms_returnorder_lineTbl.SetValue(_T("pmrol_qty"), m_nQuantity);

}
void CPMSReturnOrderEntry::SetDefaultValues(){
	m_szNameCntKey.Empty();
	m_nQuantity=0;

}
int CPMSReturnOrderEntry::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			if(m_szOrderNoKey.IsEmpty())
				m_wndOrderNo.SetFocus();
			else
				m_wndNameCnt.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndNameCnt.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CPMSReturnOrderEntry::OnOrderNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrderEntry::OnOrderNoSelendok(){
	 
}
/*void CPMSReturnOrderEntry::OnOrderNoSetfocus(){
	
}*/
/*void CPMSReturnOrderEntry::OnOrderNoKillfocus(){
	
}*/
long CPMSReturnOrderEntry::OnOrderNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szType;
	if(m_wndOrderNo.IsSearchKey() && !m_szOrderNoKey.IsEmpty()){
		szWhere.Format(_T(" AND pmst_id='%s' "), m_szOrderNoKey);
	};
	szWhere.AppendFormat(_T(" AND pmst_orderdate <= '%s 23:59:59' "), m_szOrderDate.Left(10));

	m_wndOrderNo.DeleteAllItems(); 
	int nCount = 0;
	if(m_szType == _T("X"))
	{
		szSQL.Format(_T("SELECT pmst_id, (select pmsl_name from pms_stocklist WHERE pmsl_stockid=pmst_impstockid) as pmst_dest, trunc_date(pmst_orderdate) as pmst_orderdate, pmst_desc ") \
			_T(" FROM m_storage_transaction WHERE pmst_type in('A') AND mst_status = 'A' AND pmst_expstockid=%d %s ORDER BY pmst_id "), m_nStockID, szWhere);
	}
	else if(m_szType == _T("Y"))
	{
		szSQL.Format(_T("SELECT pmst_id, (select sd_name from sys_dept WHERE sd_id=pmst_deptid) as pmst_dest, trunc_date(pmst_orderdate) as pmst_orderdate, pmst_desc ") \
			_T(" FROM m_storage_transaction WHERE pmst_type ='B' AND mst_status = 'A' AND pmst_expstockid=%d %s ORDER BY pmst_id "), m_nStockID, szWhere);
	}
	else if(m_szType == _T("Z"))
	{
		szSQL.Format(_T("SELECT pmst_id, (select pmsl_name from pms_stocklist WHERE pmsl_stockid=pmst_impstockid) as pmst_dest, trunc_date(pmst_orderdate) as pmst_orderdate, pmst_desc ") \
			_T(" FROM m_storage_transaction WHERE pmst_type in('C') AND mst_status = 'A' AND pmst_expstockid=%d %s ORDER BY pmst_id "), m_nStockID, szWhere);
	}
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("pmst_orderdate"), tmpStr);
		m_wndOrderNo.AddItems(
			rs.GetValue(_T("pmst_id")), 
			rs.GetValue(_T("pmst_dest")), 
			CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), 
			rs.GetValue(_T("pmst_desc")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSReturnOrderEntry::OnOrderNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSReturnOrderEntry::OnNameCntSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrderEntry::OnNameCntSelendok(){
	UpdateData(true);
	m_nMaxQuantity = ToLong(m_wndNameCnt.GetCurrent(5));
	UpdateData(false);
}
/*void CPMSReturnOrderEntry::OnNameCntSetfocus(){
	
}*/
/*void CPMSReturnOrderEntry::OnNameCntKillfocus(){
	
}*/
long CPMSReturnOrderEntry::OnNameCntLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNameCnt.IsSearchKey() && ToLong(m_szNameCntKey) > 0){
		szWhere.Format(_T(" AND product_item_id=%ld "), ToLong(m_szNameCntKey));
	};
	m_wndNameCnt.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT product_item_id as id, ") \
		_T(" pmi_name as name, ") \
		_T(" pmi_unit as unit, ") \
		_T(" pmsi_vatprice as price,") \
		_T(" pmm_name as  mfgname, ") \
		_T(" sum(pmstl_qty-pmstl_retqty) as maxqty ") \
		_T(" FROM m_storage_transaction ") \
		_T(" LEFT JOIN m_storage_transaction_line ON(pmst_id=pmstl_id) ") \
		_T(" LEFT JOIN m_productitem_view ON(pmstl_sitemid=product_item_id) ") \
		_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
		_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
		_T(" LEFT JOIN pms_mfg ON(pmm_id=pmsi_mfgid)") \
		_T(" WHERE pmst_id='%s' AND mst_status='A' %s ") \
		_T(" GROUP BY id, name, unit, price, mfgname ") \
		_T(" ORDER BY name, unit, price") , m_szOrderNoKey, szWhere);
	//_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNameCnt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("price")), 
			rs.GetValue(_T("mfgname")), 
			rs.GetValue(_T("maxqty")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSReturnOrderEntry::OnNameCntAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSReturnOrderEntry::OnQuantityChange(){
	
} */
/*void CPMSReturnOrderEntry::OnQuantitySetfocus(){
	
} */
/*void CPMSReturnOrderEntry::OnQuantityKillfocus(){
	
} */
int CPMSReturnOrderEntry::OnQuantityCheckValue(){
	if(m_nQuantity <= 0)
		return -1;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sum(pmstl_qty) ") \
		_T(" FROM m_storage_transaction_line ") \
		_T(" WHERE pmstl_id='%s' ") \
		_T(" 	AND pmstl_sitemid=%ld"), m_szOrderNoKey, ToLong(m_szNameCntKey));
	rs.ExecSQL(szSQL);
	float nOnhandQty = (float)rs.GetDoubleValue();
	if(nOnhandQty < m_nQuantity)
	{
		CString szMsg;
		szMsg.Format(_T("Return quantity [%.2f] > distribution quantity [%.2f]"), m_nQuantity, nOnhandQty);
		m_wndQuantity.SetToolTipMessage(szMsg);
		return -1;
	}
	return 0;
} 
void CPMSReturnOrderEntry::OnSaveSelect(){
	OnSavePMSReturnOrderEntry();	
} 
void CPMSReturnOrderEntry::OnCloseSelect(){
} 
int CPMSReturnOrderEntry::OnAddPMSReturnOrderEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPMSReturnOrderEntry::OnEditPMSReturnOrderEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPMSReturnOrderEntry::OnDeletePMSReturnOrderEntry(){
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
 		OnCancelPMSReturnOrderEntry(); 
 	}
return 0;
 } 
int CPMSReturnOrderEntry::OnSavePMSReturnOrderEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("SELECT pms_return_order_line_add(%s)"), m_pms_returnorder_lineTbl.FormatSQL());
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		szSQL.Format(_T("SELECT pms_return_order_line_update(%s)"), m_pms_returnorder_lineTbl.FormatSQL());
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		((CPMSReturnOrder*)GetParent())->OnListLoadData();
 		SetMode(VM_ADD); 
		m_wndNameCnt.SetFocus();
 	} 
 	return ret; 
}
int CPMSReturnOrderEntry::OnCancelPMSReturnOrderEntry(){
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
int CPMSReturnOrderEntry::OnPMSReturnOrderEntryListLoadData(){
	return 0;
}

BOOL CPMSReturnOrderEntry::PreTranslateMessage(MSG* pMsg)
{
	switch(pMsg->message){
		case WM_LBUTTONDBLCLK:
		case WM_LBUTTONDOWN:
		case WM_RBUTTONDOWN:
		case WM_MOUSEMOVE:
			return FALSE;
		case WM_KEYDOWN:
			if(pMsg->wParam == VK_ESCAPE){
				OnCancelPMSReturnOrderEntry();
			}break;
	};

	return CGuiView::PreTranslateMessage(pMsg);
}

