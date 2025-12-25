#include "FAMLiquidatedLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMLiquidatedLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMLiquidatedLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMLiquidatedLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMLiquidatedLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMLiquidatedLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMLiquidatedLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMLiquidatedLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnRemainingValueChangeFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnRemainingValueChange();
} */
/*static void _OnRemainingValueSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnRemainingValueSetfocus();} */ 
/*static void _OnRemainingValueKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnRemainingValueKillfocus();
} */
static int _OnRemainingValueCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidatedLine *)pWnd)->OnRemainingValueCheckValue();
} 
/*static void _OnLiquidationCostChangeFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnLiquidationCostChange();
} */
/*static void _OnLiquidationCostSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnLiquidationCostSetfocus();} */ 
/*static void _OnLiquidationCostKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedLine *)pWnd)->OnLiquidationCostKillfocus();
} */
static int _OnLiquidationCostCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidatedLine *)pWnd)->OnLiquidationCostCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMLiquidatedLine *pVw = (CFAMLiquidatedLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMLiquidatedLineFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnAddFAMLiquidatedLine();
} 
static int _OnEditFAMLiquidatedLineFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnEditFAMLiquidatedLine();
} 
static int _OnDeleteFAMLiquidatedLineFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnDeleteFAMLiquidatedLine();
} 
static int _OnSaveFAMLiquidatedLineFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnSaveFAMLiquidatedLine();
} 
static int _OnCancelFAMLiquidatedLineFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedLine*)pWnd)->OnCancelFAMLiquidatedLine();
} 
CFAMLiquidatedLine::CFAMLiquidatedLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMLiquidatedLine::~CFAMLiquidatedLine(){
}
void CFAMLiquidatedLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 320); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 325, 85, 350);
	m_wndDepartment.Create(this,90, 325, 300, 350); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 305, 325, 415, 350);
	m_wndItemName.Create(this,420, 325, 790, 350); 
	m_wndRemainingValueLabel.Create(this, _T("Remaining Value"), 5, 355, 85, 380);
	m_wndRemainingValue.Create(this,90, 355, 300, 380); 
	m_wndLiquidationCostLabel.Create(this, _T("Liquidation Cost"), 305, 355, 415, 380);
	m_wndLiquidationCost.Create(this,420, 355, 630, 380); 
	m_wndSaveItem.Create(this, _T("+"), 710, 355, 790, 380);
}
void CFAMLiquidatedLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRemainingValue.SetLimitText(16);
	m_wndRemainingValue.SetCheckValue(true);
	m_wndRemainingValue.SetCurrencyFormat(TRUE);
	m_wndLiquidationCost.SetLimitText(16);
	m_wndLiquidationCost.SetCheckValue(true);
	m_wndLiquidationCost.SetCurrencyFormat(TRUE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(5, _T("Made in"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(6, _T("Liquidation Cost"), CFMT_MONEY, 200);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Remaining Value"), CFMT_MONEY, 120);

	m_tbl_line.SetTableName(_T("fam_liquidated_line"));
	m_tbl_line.AddField(_T("fll_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fll_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fll_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fll_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fll_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fll_idx"), dfLong);
	m_tbl_line.AddField(_T("fll_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fll_name"), dfText, 250);
	m_tbl_line.AddField(_T("fll_tranline_id"), dfText, 30);
	m_tbl_line.AddField(_T("fll_cost"), dfDouble);

}
void CFAMLiquidatedLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndRemainingValue.SetEvent(WE_CHANGE, _OnRemainingValueChangeFnc);
	//m_wndRemainingValue.SetEvent(WE_SETFOCUS, _OnRemainingValueSetfocusFnc);
	//m_wndRemainingValue.SetEvent(WE_KILLFOCUS, _OnRemainingValueKillfocusFnc);
	m_wndRemainingValue.SetEvent(WE_CHECKVALUE, _OnRemainingValueCheckValueFnc);
	//m_wndLiquidationCost.SetEvent(WE_CHANGE, _OnLiquidationCostChangeFnc);
	//m_wndLiquidationCost.SetEvent(WE_SETFOCUS, _OnLiquidationCostSetfocusFnc);
	//m_wndLiquidationCost.SetEvent(WE_KILLFOCUS, _OnLiquidationCostKillfocusFnc);
	m_wndLiquidationCost.SetEvent(WE_CHECKVALUE, _OnLiquidationCostCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);

}
void CFAMLiquidatedLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndRemainingValue.GetDlgCtrlID(), m_nRemainingValue);
	DDX_Text(pDX, m_wndLiquidationCost.GetDlgCtrlID(), m_nLiquidationCost);
}
void CFAMLiquidatedLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMLiquidatedLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fll_idx), 0)+1 FROM fam_liquidated_line where fll_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fll_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fll_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fll_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fll_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fll_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fll_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fll_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fll_name"), m_szName);
	m_tbl_line.SetValue(_T("fll_tranline_id"), szTranLineID);
	m_tbl_line.SetValue(_T("fll_cost"), m_nLiquidationCost);

}
void CFAMLiquidatedLine::SetDefaultValues(){

	m_szItemNameKey.Empty();
	//m_szDepartmentKey.Empty();
	m_nLiquidationCost = 0;
	m_nRemainingValue = 0;

}
int CFAMLiquidatedLine::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, -1);
			OnItemListLoadData();
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
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMLiquidatedLine::OnItemListDblClick(){
	
} 
void CFAMLiquidatedLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
	
} 
int CFAMLiquidatedLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_liquidated_line WHERE fll_orderno = '%s' AND fll_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMLiquidatedLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fll_idx, fll_assetno, fll_name, fll_cost, fa_model, fa_serial, fa_madein ") \
		_T(" FROM fam_liquidated_line ") \
		_T(" LEFT JOIN fam_asset ON(fll_assetno = fa_assetno) ") \
		_T(" WHERE fll_orderno = '%s' ORDER BY fll_idx"), m_szOrderNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fll_idx")),
			rs.GetValue(_T("fll_assetno")), 
			rs.GetValue(_T("fll_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			rs.GetValue(_T("fa_madein")),
			rs.GetValue(_T("fll_cost")),NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;

}
void CFAMLiquidatedLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CFAMLiquidatedLine::OnItemNameSelendok(){
	m_szName = m_wndItemName.GetCurrent(1);
	m_szItemNameKey = m_wndItemName.GetCurrent(0);
	m_nRemainingValue = str2long(m_wndItemName.GetCurrent(4));
	m_wndRemainingValue.EnableWindow(FALSE);
	szTranLineID = m_wndItemName.GetCurrent(5);
	UpdateData(FALSE);

}
/*void CFAMLiquidatedLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMLiquidatedLine::OnItemNameKillfocus(){
	
}*/
long CFAMLiquidatedLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIdx;
	m_wndItemName.BeginWaitCursor();
	int nCount = 0;
	if(!m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and st_imp_storage_id = '%s'"), m_szDepartmentKey);
		szWhere.AppendFormat(_T(" and fa_department = '%s'"), m_szDepartmentKey);
	}
	if(!m_szItemNameKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fa_assetno = '%s'"), m_szItemNameKey);
	}
	/*szSQL.Format(_T(" SELECT stl_transactionline_id, stl_item_id, fal_assetname, stl_qtyorder, stl_unitprice, stl_amount,") \
				_T(" fdl_deprvalue, fdl_remainvalue, stl_useddate, fal_deprtime, fal_model, (select ss_desc from sys_sel where ss_id = 'fam_uom' and ss_code = fal_unit) as unit ") \
				_T(" FROM storage_transactionline ") \
				_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
				_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
				_T(" LEFT JOIN fam_depreciate_line ON(fdl_assetno = stl_item_id) ") \
				_T(" WHERE st_doctype = 'EAO' %s "), szWhere); 
	/*szSQL.Format(_T(" SELECT sb_storage_id, sb_item_id, fal_assetname, fal_model, fal_unit ") \
			_T(" FROM storage_bin ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = sb_item_id) ") \
			_T(" WHERE 1=1 %s "), szWhere);*/
	szSQL.Format(_T(" SELECT fa_assetno, fa_name, fa_model, (select ss_desc from sys_sel where ss_id = 'its_uom' and ss_code = fa_unit) as unit, fdl_remainvalue ") \
			_T(" FROM fam_asset ") \
			_T(" LEFT JOIN fam_depreciate_line ON(fdl_assetno = fa_assetno) ") \
			_T(" WHERE 1=1 %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("fa_assetno")),
			rs.GetValue(_T("fa_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("fdl_remainvalue")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemName.EndWaitCursor(); 
	return nCount;
}
/*void CFAMLiquidatedLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMLiquidatedLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMLiquidatedLine();
} 
void CFAMLiquidatedLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMLiquidatedLine::OnDepartmentSelendok(){
	UpdateData(TRUE); 
}
/*void CFAMLiquidatedLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMLiquidatedLine::OnDepartmentKillfocus(){
	
}*/
long CFAMLiquidatedLine::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMLiquidatedLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMLiquidatedLine::OnRemainingValueChange(){
	
} */
/*void CFAMLiquidatedLine::OnRemainingValueSetfocus(){
	
} */
/*void CFAMLiquidatedLine::OnRemainingValueKillfocus(){
	
} */
int CFAMLiquidatedLine::OnRemainingValueCheckValue(){
	return 0;
} 
/*void CFAMLiquidatedLine::OnLiquidationCostChange(){
	
} */
/*void CFAMLiquidatedLine::OnLiquidationCostSetfocus(){
	
} */
/*void CFAMLiquidatedLine::OnLiquidationCostKillfocus(){
	
} */
int CFAMLiquidatedLine::OnLiquidationCostCheckValue(){
	if(m_nLiquidationCost < 0)
		return -1;
	return 0;
} 
int CFAMLiquidatedLine::OnAddFAMLiquidatedLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMLiquidatedLine::OnEditFAMLiquidatedLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMLiquidatedLine::OnDeleteFAMLiquidatedLine(){
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
 		OnCancelFAMLiquidatedLine();
 	}
	return 0;
}
int CFAMLiquidatedLine::OnSaveFAMLiquidatedLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if(m_nLiquidationCost < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate;
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}
 	else{
		
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		//szUpdate.Format(_T("UPDATE fam_asset SET fa_department = null, fa_ustatus = 'L' WHERE fa_assetno = '%s'"), m_szItemNameKey);
		//pMF->ExecSQL(szUpdate);
		OnItemListLoadData();
		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
 	}
 	else
 	{
 	}

 	return ret;
}
int CFAMLiquidatedLine::OnCancelFAMLiquidatedLine(){
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
int CFAMLiquidatedLine::OnFAMLiquidatedLineListLoadData(){
	return 0;
}
