#include "FAMWarehouse.h"
#include "MainFrm.h"
#include "FAMAssetDetailDlg.h"
static void _OnWarehouseTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMWarehouse* )pWnd)->OnWarehouseTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseTypeSelendokFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseTypeSelendok();
}
/*static void _OnWarehouseTypeSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseTypeKillfocus();
}*/
/*static void _OnWarehouseTypeKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseTypeKillfocus();
}*/
static long _OnWarehouseTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMWarehouse *)pWnd)->OnWarehouseTypeLoadData();
}
/*static void _OnWarehouseTypeAddNewFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseTypeAddNew();
}*/
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMWarehouse* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CFAMWarehouse *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnWarehouseAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouse *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMWarehouse *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFAMWarehouse *pVw = (CFAMWarehouse *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMWarehouse*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMWarehouse*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMWarehouse*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnItemListDeleteItem();
} 

static int _OnAddFAMWarehouseFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnAddFAMWarehouse();
} 
static int _OnEditFAMWarehouseFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnEditFAMWarehouse();
} 
static int _OnDeleteFAMWarehouseFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnDeleteFAMWarehouse();
} 
static int _OnSaveFAMWarehouseFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnSaveFAMWarehouse();
} 
static int _OnCancelFAMWarehouseFnc(CWnd *pWnd){
	 return ((CFAMWarehouse*)pWnd)->OnCancelFAMWarehouse();
} 
CFAMWarehouse::CFAMWarehouse(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMWarehouse::~CFAMWarehouse(){
}
void CFAMWarehouse::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 805, 90);
	m_wndMaintenance.Create(this, _T("Item List"), 5, 96, 805, 631);
	m_wndWarehouseTypeLabel.Create(this, _T("Warehouse Type"), 10, 30, 100, 55);
	m_wndWarehouseType.Create(this,105, 30, 385, 55); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 390, 30, 480, 55);
	m_wndWarehouse.Create(this,485, 30, 765, 55); 
	m_wndSearchNameLabel.Create(this, _T("Asset Name"), 10, 60, 100, 85);
	m_wndSearchName.Create(this,105, 60, 765, 85); 
	m_wndRefresh.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndItemList.Create(this,10, 120, 800, 625); 

}
void CFAMWarehouse::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouseType.SetCheckValue(true);
	m_wndWarehouseType.LimitText(35);
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(1024);

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndWarehouseType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouseType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 180);
	m_wndItemList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 350);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 90);
	m_wndItemList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemList.InsertColumn(6, _T("Qty OnHand"), CFMT_NUMBER, 90);
	m_wndItemList.InsertColumn(7, _T("Qty Ordered"), CFMT_NUMBER, 90);
}
void CFAMWarehouse::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouseType.SetEvent(WE_SELENDOK, _OnWarehouseTypeSelendokFnc);
	//m_wndWarehouseType.SetEvent(WE_SETFOCUS, _OnWarehouseTypeSetfocusFnc);
	//m_wndWarehouseType.SetEvent(WE_KILLFOCUS, _OnWarehouseTypeKillfocusFnc);
	m_wndWarehouseType.SetEvent(WE_SELCHANGE, _OnWarehouseTypeSelectChangeFnc);
	m_wndWarehouseType.SetEvent(WE_LOADDATA, _OnWarehouseTypeLoadDataFnc);
	//m_wndWarehouseType.SetEvent(WE_ADDNEW, _OnWarehouseTypeAddNewFnc);
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	SetMode(VM_EDIT);

}
void CFAMWarehouse::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouseType.GetDlgCtrlID(), m_szWarehouseTypeKey);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	
}
void CFAMWarehouse::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMWarehouse::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMWarehouse::SetDefaultValues(){

	m_szWarehouseTypeKey.Empty();
	m_szWarehouseKey.Empty();
	m_szSearchName.Empty();

}
int CFAMWarehouse::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, -1);
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

void CFAMWarehouse::OnWarehouseTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouse.DeleteAllItems();
} 
void CFAMWarehouse::OnWarehouseTypeSelendok(){
	 
}
/*void CFAMWarehouse::OnWarehouseTypeSetfocus(){
	
}*/
/*void CFAMWarehouse::OnWarehouseTypeKillfocus(){
	
}*/
long CFAMWarehouse::OnWarehouseTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouseType.IsSearchKey() && !m_szWarehouseTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseTypeKey
};
	m_wndWarehouseType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouseType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	m_wndWarehouseType.DeleteAllItems();
	m_wndWarehouseType.AddItems(_T("dept"), _T("Khoa"));
	m_wndWarehouseType.AddItems(_T("stock"), _T("Kho"));
	return 0;
}
/*void CFAMWarehouse::OnWarehouseTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMWarehouse::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMWarehouse::OnWarehouseSelendok(){
	UpdateData(TRUE); 
}
/*void CFAMWarehouse::OnWarehouseSetfocus(){
	
}*/
/*void CFAMWarehouse::OnWarehouseKillfocus(){
	
}*/
long CFAMWarehouse::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_szWarehouseTypeKey == _T("dept"))
	{
		szWhere.AppendFormat(_T(" AND sl_type = 'dpt'"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND COALESCE(sl_type,'xxx')<>'dpt' "));
	}
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and sl_storage_id='%s' "), m_szWarehouseKey);
	}
	
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location ") \
		_T("WHERE sl_org_id IN ('%s', 'GL') %s ORDER BY sl_storage_id "), pMF->GetModuleID(), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMWarehouse::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMWarehouse::OnSearchNameChange(){
	
} */
/*void CFAMWarehouse::OnSearchNameSetfocus(){
	
} */
/*void CFAMWarehouse::OnSearchNameKillfocus(){
	
} */
int CFAMWarehouse::OnSearchNameCheckValue(){
	return 0;
} 
void CFAMWarehouse::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnItemListLoadData();
} 
void CFAMWarehouse::OnItemListDblClick(){
	CFAMAssetDetailDlg dlg(this);
	dlg.m_szCurAssetNo = m_szAssetNo;
	dlg.DoModal();
	
} 
void CFAMWarehouse::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szAssetNo = m_wndItemList.GetItemText(nNewItem, 1);
} 
int CFAMWarehouse::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMWarehouse::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndItemList.BeginLoad(); 
	szWhere.Empty();
	if(m_szWarehouseKey.IsEmpty())
	{
		return 0;
	}

	szWhere.AppendFormat(_T(" and sb_storage_id='%s' "), m_szWarehouseKey);
	if(!m_szSearchName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(si_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearchName);
	}
	szSQL.Format(_T(" SELECT sb_item_id                AS item_id,") \
				_T("   si_name                        AS item_name,") \
				_T("   STORAGE_GET_UOMNAME(si_uom_id) AS item_unit, si_model, ") \
				_T("   si_unitprice                   AS unitprice,") \
				_T("   sb_qtyonhand                   AS qtyonhand,") \
				_T("   sb_qtyordered                  AS qtyordered") \
				_T(" FROM STORAGE_BIN") \
				_T(" LEFT JOIN STORAGE_ITEM") \
				_T(" ON(SB_ITEM_ID       = SI_ITEM_ID)") \
				_T(" WHERE SB_ORG_ID='%s' %s") \
				_T(" AND SB_ISACTIVE     ='Y'") \
				_T(" AND SI_ITEM_ID     IS NOT NULL AND SB_QTYONHAND > 0") \
				_T(" ORDER BY SI_NAME"), pMF->GetModuleID(), szWhere);
	_fmsg(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		
		tmpStr.Format(_T("%d"), nIndex++);

		m_wndItemList.AddItems(
			tmpStr,
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("si_model")),
			rs.GetValue(_T("item_unit")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("qtyonhand")),
			rs.GetValue(_T("qtyordered")), 
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
	
}

int CFAMWarehouse::OnAddFAMWarehouse(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMWarehouse::OnEditFAMWarehouse(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMWarehouse::OnDeleteFAMWarehouse(){
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
 		OnCancelFAMWarehouse();
 	}
	return 0;
}
int CFAMWarehouse::OnSaveFAMWarehouse(){
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
 		//OnFAMWarehouseListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMWarehouse::OnCancelFAMWarehouse(){
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
int CFAMWarehouse::OnFAMWarehouseListLoadData(){
	return 0;
}
