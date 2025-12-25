#include "POAutoCreateItemDialog_HC.h"
#include "MainFrame_E10.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnItemNameChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnItemNameChange();
} */
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnItemNameSetfocus();} */ 
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC *)pWnd)->OnItemNameKillfocus();
} */
static int _OnItemNameCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC *)pWnd)->OnItemNameCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog_HC *pVw = (CPOAutoCreateItemDialog_HC *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog_HC *pVw = (CPOAutoCreateItemDialog_HC *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnFindSelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog_HC *pVw = (CPOAutoCreateItemDialog_HC *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnMaterialListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnMaterialListLoadData();
} 
static void _OnMaterialListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC*)pWnd)->OnMaterialListDblClick();
} 
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog_HC*)pWnd)->OnMaterialListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnMaterialListDeleteItem();
} 
static int _OnMaterialListSelectAllFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnMaterialListSelectAll();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog_HC*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog_HC*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnSelectedListDeleteItem();
} 
static int _OnSelectedListDeselectAllFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnSelectedListDeselectAll();
} 
static int _OnAddPOAutoCreateItemDialog_HCFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnAddPOAutoCreateItemDialog_HC();
} 
static int _OnEditPOAutoCreateItemDialog_HCFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnEditPOAutoCreateItemDialog_HC();
} 
static int _OnDeletePOAutoCreateItemDialog_HCFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnDeletePOAutoCreateItemDialog_HC();
} 
static int _OnSavePOAutoCreateItemDialog_HCFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnSavePOAutoCreateItemDialog_HC();
} 
static int _OnCancelPOAutoCreateItemDialog_HCFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog_HC*)pWnd)->OnCancelPOAutoCreateItemDialog_HC();
} 
CPOAutoCreateItemDialog_HC::CPOAutoCreateItemDialog_HC(CWnd *pParent, long nOrderID, CString szStorageID, CString szSupplierKey):
	CGuiDialog(pParent), m_nOrderID(nOrderID), m_szSupplierKey(szSupplierKey), m_szStorageID(szStorageID){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPOAutoCreateItemDialog_HC::~CPOAutoCreateItemDialog_HC(){
}
void CPOAutoCreateItemDialog_HC::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 130, 55);
	m_wndFromDate.Create(this,135, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 360, 55);
	m_wndToDate.Create(this,365, 30, 470, 55); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 60, 130, 85);
	m_wndSelectedItems.Create(this, _T("Selected Items"), 480, 5, 960, 570);
	m_wndItemName.Create(this,135, 60, 430, 85); 
	m_wndFind.Create(this, _T("@"), 435, 60, 470, 85);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 570);
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);
	m_wndMaterialList.Create(this,10, 90, 470, 565); 
	m_wndSelectedList.Create(this,485, 30, 955, 565); 

}
void CPOAutoCreateItemDialog_HC::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndItemName.SetLimitText(1024);
	m_wndItemName.SetCheckValue(true);

	m_wndMaterialList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndMaterialList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 50);
	m_wndMaterialList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndMaterialList.InsertColumn(3, _T("Price"), CFMT_NUMBER, 100);
	m_wndMaterialList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 50);

	m_wndSelectedList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndSelectedList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndSelectedList.InsertColumn(3, _T("Price"), CFMT_NUMBER, 100);
	m_wndSelectedList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 50);
}
void CPOAutoCreateItemDialog_HC::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndItemName.SetEvent(WE_CHANGE, _OnItemNameChangeFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_CHECKVALUE, _OnItemNameCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
	m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
	m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
	m_wndMaterialList.AddEvent(1, _T("Select all"), _OnMaterialListSelectAllFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectedList.AddEvent(0, _T("-"));
	m_wndSelectedList.AddEvent(2, _T("Deselect all"), _OnSelectedListDeselectAllFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
}
void CPOAutoCreateItemDialog_HC::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemName);

}
void CPOAutoCreateItemDialog_HC::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("ItemName")] =  m_szItemName;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("ItemName")].GetValue(m_szItemName);
	}

}
void CPOAutoCreateItemDialog_HC::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPOAutoCreateItemDialog_HC::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPOAutoCreateItemDialog_HC::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemName.Empty();

}
int CPOAutoCreateItemDialog_HC::SetMode(int nMode){
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
/*void CPOAutoCreateItemDialog_HC::OnFromDateChange(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnFromDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnFromDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog_HC::OnFromDateCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog_HC::OnToDateChange(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnToDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnToDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog_HC::OnToDateCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog_HC::OnItemNameChange(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnItemNameSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog_HC::OnItemNameKillfocus(){
	
} */
int CPOAutoCreateItemDialog_HC::OnItemNameCheckValue(){
	return 0;
} 
void CPOAutoCreateItemDialog_HC::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nProductItemID, nQty;
	int nRet = 0;
	pMF->BeginTransaction();
	for (int i = 0; i < m_wndSelectedList.GetItemCount(); i++)
	{
		nProductItemID = str2long(m_wndSelectedList.GetItemText(i, 0));
		nQty = str2long(m_wndSelectedList.GetItemText(i, 4));
		szSQL.Format(_T("PURCHASE_ORDER_CREATELINE_AUTO(%ld, %ld, %ld, '%s', '%s')")
			, m_nOrderID, nProductItemID, nQty, pMF->GetModuleID(), pMF->GetCurrentUser());
		nRet = str2int(pMF->ExecDML(szSQL));
		if (nRet <= 0)
		{
			pMF->Rollback();
			return;
		}
	}
	pMF->Commit();
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CPOAutoCreateItemDialog_HC::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CPOAutoCreateItemDialog_HC::OnMaterialListDblClick(){
	int nSel = m_wndMaterialList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	MoveItem(&m_wndMaterialList, &m_wndSelectedList, nSel);
} 
void CPOAutoCreateItemDialog_HC::OnMaterialListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog_HC::OnMaterialListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog_HC::OnMaterialListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndMaterialList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	if (!m_szItemName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(product_name) like chr(37)||lower('%s')||chr(37)"), m_szItemName);
	}
	szSQL.Format(_T("SELECT    product_item_id,") \
	_T("          product_name,") \
	_T("          product_unitprice,") \
	_T("          sum(export_qty) as export_qty") \
	_T(" FROM      v_export") \
	_T(" LEFT JOIN m_productitem_view ON ( sitemid = product_item_id )") \
	_T(" WHERE     storage_id = %s AND trunc(approved_date) between to_date('%s', 'yyyy/mm/dd') and to_date('%s', 'yyyy/mm/dd') AND PRODUCT_BPARTNERID = '%s' %s") \
	_T(" GROUP BY product_item_id, product_name, product_unitprice") \
	, m_szStorageID, m_szFromDate, m_szToDate, m_szSupplierKey, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterialList.AddItems(
			rs.GetValue(_T("product_item_id")),
			int2str(nIdx++),
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_unitprice")),
			rs.GetValue(_T("export_qty")),
			NULL);
		rs.MoveNext();
	}
	m_wndMaterialList.EndLoad(); 
	return nCount;
}
void CPOAutoCreateItemDialog_HC::OnSelectedListDblClick(){
	
} 
void CPOAutoCreateItemDialog_HC::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog_HC::OnSelectedListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndSelectedList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	MoveItem(&m_wndSelectedList, &m_wndMaterialList, nSel);
	return 0;
} 
long CPOAutoCreateItemDialog_HC::OnSelectedListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPOAutoCreateItemDialog_HC::OnAddPOAutoCreateItemDialog_HC(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPOAutoCreateItemDialog_HC::OnEditPOAutoCreateItemDialog_HC(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPOAutoCreateItemDialog_HC::OnDeletePOAutoCreateItemDialog_HC(){
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
 		OnCancelPOAutoCreateItemDialog_HC();
 	}
	return 0;
}
int CPOAutoCreateItemDialog_HC::OnSavePOAutoCreateItemDialog_HC(){
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
 		//OnPOAutoCreateItemDialog_HCListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPOAutoCreateItemDialog_HC::OnCancelPOAutoCreateItemDialog_HC(){
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
int CPOAutoCreateItemDialog_HC::OnPOAutoCreateItemDialog_HCListLoadData(){
	return 0;
}

void CPOAutoCreateItemDialog_HC::OnFindSelect()
{
	UpdateData();
	OnMaterialListLoadData();
	m_wndSelectedList.DeleteAllItems();
}

int CPOAutoCreateItemDialog_HC::OnMaterialListSelectAll()
{
	int nCount = m_wndMaterialList.GetItemCount();
	for (int i = 0; i < nCount; i++)
	{
		MoveItem(&m_wndMaterialList, &m_wndSelectedList, 0);
	}
	return 0;
}

int CPOAutoCreateItemDialog_HC::OnSelectedListDeselectAll()
{
	int nCount = m_wndSelectedList.GetItemCount();
	for (int i = 0; i < nCount; i++)
	{
		MoveItem(&m_wndSelectedList, &m_wndMaterialList, 0);
	}
	return 0;
}

int	CPOAutoCreateItemDialog_HC::MoveItem(CGuiListCtrl* pFromList, CGuiListCtrl* pToList, int nIdx)
{
	ITEM_INFO item={};
	if (pFromList->GetItemCount() <= nIdx)
	{
		return -1;
	}
	int nItem = -1, nMaxIdx = str2int(pToList->GetItemText(pToList->GetItemCount()-1, 1));
	item.szItemID = pFromList->GetItemText(nIdx, 0);
	item.szIdx = pFromList->GetItemText(nIdx, 1);
	item.szName = pFromList->GetItemText(nIdx, 2);
	item.szPrice = pFromList->GetItemText(nIdx, 3);
	item.szOrderQty = pFromList->GetItemText(nIdx, 4);
	nItem = pToList->AddItems(item.szItemID, item.szIdx, item.szName, item.szPrice, item.szOrderQty, NULL);
	if (nItem >= 0)
	{
		pFromList->DeleteItem(nIdx);
		pToList->EndLoad();
	}
	return nItem;
}