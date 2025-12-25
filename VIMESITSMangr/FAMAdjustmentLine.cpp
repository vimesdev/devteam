#include "FAMAdjustmentLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAdjustmentLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMAdjustmentLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAdjustmentLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAdjustmentLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMAdjustmentLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAdjustmentLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMAdjustmentLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnOldCostChangeFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnOldCostChange();
} */
/*static void _OnOldCostSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnOldCostSetfocus();} */ 
/*static void _OnOldCostKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnOldCostKillfocus();
} */
static int _OnOldCostCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustmentLine *)pWnd)->OnOldCostCheckValue();
} 
/*static void _OnNewCostChangeFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnNewCostChange();
} */
/*static void _OnNewCostSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnNewCostSetfocus();} */ 
/*static void _OnNewCostKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentLine *)pWnd)->OnNewCostKillfocus();
} */
static int _OnNewCostCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustmentLine *)pWnd)->OnNewCostCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMAdjustmentLine *pVw = (CFAMAdjustmentLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMAdjustmentLineFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnAddFAMAdjustmentLine();
} 
static int _OnEditFAMAdjustmentLineFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnEditFAMAdjustmentLine();
} 
static int _OnDeleteFAMAdjustmentLineFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnDeleteFAMAdjustmentLine();
} 
static int _OnSaveFAMAdjustmentLineFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnSaveFAMAdjustmentLine();
} 
static int _OnCancelFAMAdjustmentLineFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentLine*)pWnd)->OnCancelFAMAdjustmentLine();
} 
CFAMAdjustmentLine::CFAMAdjustmentLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAdjustmentLine::~CFAMAdjustmentLine(){
}
void CFAMAdjustmentLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 320); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 325, 85, 350);
	m_wndDepartment.Create(this,90, 325, 300, 350); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 305, 325, 415, 350);
	m_wndItemName.Create(this,420, 325, 790, 350); 
	m_wndOldCostLabel.Create(this, _T("Old Cost"), 5, 355, 85, 380);
	m_wndOldCost.Create(this,90, 355, 300, 380); 
	m_wndNewCostLabel.Create(this, _T("New Cost"), 305, 355, 415, 380);
	m_wndNewCost.Create(this,420, 355, 630, 380); 
	m_wndSaveItem.Create(this, _T("Save"), 710, 355, 790, 380);

}
void CFAMAdjustmentLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndOldCost.SetLimitText(1024);
	m_wndOldCost.SetCheckValue(true);
	m_wndNewCost.SetLimitText(1024);
	m_wndNewCost.SetCheckValue(true);
	m_wndOldCost.SetCurrencyFormat(TRUE);
	m_wndNewCost.SetCurrencyFormat(TRUE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(5, _T("Old Cost"), CFMT_MONEY, 120);
	m_wndItemList.InsertColumn(6, _T("New Cost"), CFMT_MONEY, 120);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Purchase Price"), CFMT_MONEY, 120);
	m_wndItemName.InsertColumn(6, _T("TranLineID"), CFMT_TEXT, 0);
	m_wndItemName.InsertColumn(7, _T("DeprTime"), CFMT_TEXT, 0);
	m_wndItemName.InsertColumn(8, _T("Useddate"), CFMT_TEXT, 0);

	m_tbl_line.SetTableName(_T("fam_adjustment_line"));
	m_tbl_line.AddField(_T("fajl_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fajl_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fajl_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fajl_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fajl_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fajl_idx"), dfLong);
	m_tbl_line.AddField(_T("fajl_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fajl_name"), dfText, 250);
	m_tbl_line.AddField(_T("fajl_tranline_id"), dfText, 30);
	m_tbl_line.AddField(_T("fajl_oldcost"), dfDouble);
	m_tbl_line.AddField(_T("fajl_newcost"), dfDouble);
	
}
void CFAMAdjustmentLine::OnSetWindowEvents(){
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
	//m_wndOldCost.SetEvent(WE_CHANGE, _OnOldCostChangeFnc);
	//m_wndOldCost.SetEvent(WE_SETFOCUS, _OnOldCostSetfocusFnc);
	//m_wndOldCost.SetEvent(WE_KILLFOCUS, _OnOldCostKillfocusFnc);
	m_wndOldCost.SetEvent(WE_CHECKVALUE, _OnOldCostCheckValueFnc);
	//m_wndNewCost.SetEvent(WE_CHANGE, _OnNewCostChangeFnc);
	//m_wndNewCost.SetEvent(WE_SETFOCUS, _OnNewCostSetfocusFnc);
	//m_wndNewCost.SetEvent(WE_KILLFOCUS, _OnNewCostKillfocusFnc);
	m_wndNewCost.SetEvent(WE_CHECKVALUE, _OnNewCostCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	
}
void CFAMAdjustmentLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndOldCost.GetDlgCtrlID(), m_nOldCost);
	DDX_Text(pDX, m_wndNewCost.GetDlgCtrlID(), m_nNewCost);

}
void CFAMAdjustmentLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAdjustmentLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fajl_idx), 0)+1 FROM fam_adjustment_line where fajl_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fajl_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fajl_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fajl_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fajl_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fajl_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fajl_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fajl_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fajl_name"), m_szName);
	m_tbl_line.SetValue(_T("fajl_tranline_id"), szTranLineID);
	m_tbl_line.SetValue(_T("fajl_oldcost"), m_nOldCost);
	m_tbl_line.SetValue(_T("fajl_newcost"), m_nNewCost);

}
void CFAMAdjustmentLine::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
	m_szItemNameKey.Empty();
	m_nOldCost=0;
	m_nNewCost=0;

}
int CFAMAdjustmentLine::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMAdjustmentLine::OnItemListDblClick(){
	
} 
void CFAMAdjustmentLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
} 
int CFAMAdjustmentLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_adjustment_line WHERE fajl_orderno = '%s' AND fajl_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMAdjustmentLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT * FROM fam_adjustment_line WHERE fajl_orderno = '%s' ORDER BY fajl_idx"), m_szOrderNo);
	szSQL.Format(_T("SELECT fajl_idx, fajl_assetno, fajl_name, fajl_oldcost, fajl_newcost, fa_model, fa_serial ") \
		_T(" FROM fam_adjustment_line ") \
		_T(" LEFT JOIN fam_asset ON(fa_assetno = fajl_assetno) ") \
		_T(" WHERE fajl_orderno = '%s' ORDER BY fajl_idx "), m_szOrderNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fajl_idx")),
			rs.GetValue(_T("fajl_assetno")),
			rs.GetValue(_T("fajl_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			rs.GetValue(_T("fajl_oldcost")),
			rs.GetValue(_T("fajl_newcost")),NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFAMAdjustmentLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAdjustmentLine::OnDepartmentSelendok(){
	UpdateData(TRUE); 
}
/*void CFAMAdjustmentLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMAdjustmentLine::OnDepartmentKillfocus(){
	
}*/
long CFAMAdjustmentLine::OnDepartmentLoadData(){
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
/*void CFAMAdjustmentLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAdjustmentLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAdjustmentLine::OnItemNameSelendok(){
	m_szName = m_wndItemName.GetCurrent(1);
	m_szItemNameKey = m_wndItemName.GetCurrent(0);
	m_nOldCost = str2double(m_wndItemName.GetCurrent(4));
	m_wndOldCost.EnableWindow(FALSE);
	szTranLineID = m_wndItemName.GetCurrent(5);
	m_nDeprTime = str2long(m_wndItemName.GetCurrent(6));
	m_szUsedate = m_wndItemName.GetCurrent(7);
	UpdateData(FALSE);
}
/*void CFAMAdjustmentLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMAdjustmentLine::OnItemNameKillfocus(){
	
}*/
long CFAMAdjustmentLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIdx;
	int nCount = 0;
	if(!m_szItemNameKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and stl_item_id='%s' "), m_szItemNameKey);
	}
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_imp_storage_id = '%s'"), m_szDepartmentKey);
	}
	szSQL.Format(_T(" SELECT stl_transactionline_id, stl_item_id, fal_assetname, stl_qtyorder, stl_unitprice, stl_amount, stl_seri,") \
				_T(" stl_useddate, fal_deprtime, fal_model, (select ss_desc from sys_sel where ss_id = 'its_uom' and ss_code = fal_unit) as unit ") \
				_T(" FROM storage_transactionline ") \
				_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
				_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
				_T(" WHERE st_doctype = 'EAO' %s "), szWhere); 
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("fal_assetname")),
			rs.GetValue(_T("fal_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("stl_unitprice")),
			rs.GetValue(_T("stl_transactionline_id")),
			rs.GetValue(_T("fal_deprtime")),
			rs.GetValue(_T("stl_useddate")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAdjustmentLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAdjustmentLine::OnOldCostChange(){
	
} */
/*void CFAMAdjustmentLine::OnOldCostSetfocus(){
	
} */
/*void CFAMAdjustmentLine::OnOldCostKillfocus(){
	
} */
int CFAMAdjustmentLine::OnOldCostCheckValue(){
	return 0;
} 
/*void CFAMAdjustmentLine::OnNewCostChange(){
	
} */
/*void CFAMAdjustmentLine::OnNewCostSetfocus(){
	
} */
/*void CFAMAdjustmentLine::OnNewCostKillfocus(){
	
} */
int CFAMAdjustmentLine::OnNewCostCheckValue(){
	if(m_nNewCost < 0)
		return -1;
	return 0;
} 
void CFAMAdjustmentLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int result = ShowMessage(0, MB_YESNO, _T("Purchase price has been change! Depreciation must be recalculate. Do you want to continue?"));
	switch(result){
		case IDYES:
			/*szSQL.Format(_T("delete from fam_depreciation where fad_assetno = '%s' and fad_tranline_id = '%s'"), m_szItemNameKey, szTranLineID);
			pMF->ExecSQL(szSQL);*/
			OnSaveFAMAdjustmentLine();
			break;
		case IDNO:
			return;
			break;
	}
} 
int CFAMAdjustmentLine::OnAddFAMAdjustmentLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAdjustmentLine::OnEditFAMAdjustmentLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAdjustmentLine::OnDeleteFAMAdjustmentLine(){
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
 		OnCancelFAMAdjustmentLine();
 	}
	return 0;
}
int CFAMAdjustmentLine::OnSaveFAMAdjustmentLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}


 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		szSQL.Format(_T("UPDATE fam_asset SET fa_purchaseprice = %.0f ") \
			_T(" WHERE fa_strgtransline_id = '%s' and fa_assetno = '%s'"), m_nNewCost,szTranLineID, m_szItemNameKey);
		pMF->ExecSQL(szSQL);
		
		szSQL.Format(_T("FAM_DEPRECIATION_REDLINENEW('%s', %d, '%s', cast_string2date('%s'), %.0f, 'S', '%s', 'Y')"), m_szItemNameKey, m_nDeprTime,
			pMF->GetCurrentUser(), CDate::Convert(m_szUsedate, ddmmyyyy, yyyymmdd), m_nNewCost, szTranLineID);
		pMF->ExecDML(szSQL);

 		OnItemListLoadData();
		SetMode(VM_ADD);

		m_wndItemName.SetFocus();
 	}
 	else
 	{
 	}
 	return ret; 

}
int CFAMAdjustmentLine::OnCancelFAMAdjustmentLine(){
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
int CFAMAdjustmentLine::OnFAMAdjustmentLineListLoadData(){
	return 0;
}
