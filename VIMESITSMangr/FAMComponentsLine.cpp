#include "FAMComponentsLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMComponentsLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMComponentsLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMComponentsLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMComponentsLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMComponentsLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnNameCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsLine *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsLine *)pWnd)->OnUnitCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMComponentsLine *pVw = (CFAMComponentsLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMComponentsLineFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnAddFAMComponentsLine();
} 
static int _OnEditFAMComponentsLineFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnEditFAMComponentsLine();
} 
static int _OnDeleteFAMComponentsLineFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnDeleteFAMComponentsLine();
} 
static int _OnSaveFAMComponentsLineFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnSaveFAMComponentsLine();
} 
static int _OnCancelFAMComponentsLineFnc(CWnd *pWnd){
	 return ((CFAMComponentsLine*)pWnd)->OnCancelFAMComponentsLine();
} 
CFAMComponentsLine::CFAMComponentsLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMComponentsLine::~CFAMComponentsLine(){
}
void CFAMComponentsLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 290); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 295, 85, 320);
	m_wndDepartment.Create(this,90, 295, 275, 320); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 280, 295, 360, 320);
	m_wndItemName.Create(this,365, 295, 790, 320); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 325, 85, 350);
	m_wndName.Create(this,90, 325, 275, 350); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 280, 325, 360, 350);
	m_wndQuantity.Create(this,365, 325, 415, 350); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 420, 325, 500, 350);
	m_wndUnitPrice.Create(this,505, 325, 595, 350); 
	m_wndAmountLabel.Create(this, _T("Amount"), 600, 325, 680, 350);
	m_wndAmount.Create(this,685, 325, 790, 350); 
	m_wndUnitLabel.Create(this, _T("Unit"), 5, 355, 85, 380);
	m_wndUnit.Create(this,90, 355, 275, 380); 
	m_wndSaveItem.Create(this, _T("+"), 710, 355, 790, 380);

}
void CFAMComponentsLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.LimitText(35);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndUnitPrice.SetCurrencyFormat(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndUnit.SetLimitText(35);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Accessories Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemList.InsertColumn(5, _T("Quantity"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 100);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Type"), CFMT_TEXT, 50);

	m_tbl_line.SetTableName(_T("fam_components_line"));
	m_tbl_line.AddField(_T("fcl_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fcl_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fcl_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fcl_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fcl_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fcl_idx"), dfLong);
	m_tbl_line.AddField(_T("fcl_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fcl_name"), dfText, 250);
	m_tbl_line.AddField(_T("fcl_unit"), dfText, 30);
	m_tbl_line.AddField(_T("fcl_qty"), dfDouble);
	m_tbl_line.AddField(_T("fcl_unitprice"), dfDouble);
	m_tbl_line.AddField(_T("fcl_money"), dfDouble);

}
void CFAMComponentsLine::OnSetWindowEvents(){
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
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	
}
void CFAMComponentsLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);

}
void CFAMComponentsLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMComponentsLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szQty;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fcl_idx), 0)+1 FROM fam_components_line where fcl_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fcl_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fcl_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fcl_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fcl_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fcl_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fcl_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fcl_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fcl_name"), m_szName);
	m_tbl_line.SetValue(_T("fcl_unit"), m_szUnit);
	m_tbl_line.SetValue(_T("fcl_unitprice"), m_nUnitPrice);
	m_tbl_line.SetValue(_T("fcl_qty"), m_nQuantity);
	m_tbl_line.SetValue(_T("fcl_money"), m_nAmount);

}
void CFAMComponentsLine::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
	m_szItemNameKey.Empty();
	m_szName.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nAmount=0;
	m_szUnit.Empty();

}
int CFAMComponentsLine::SetMode(int nMode){
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
void CFAMComponentsLine::OnItemListDblClick(){
	
} 
void CFAMComponentsLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
} 
int CFAMComponentsLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_components_line WHERE fcl_orderno = '%s' AND fcl_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMComponentsLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_components_line WHERE fcl_orderno = '%s' ORDER BY fcl_idx"), m_szOrderNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fcl_idx")),
			rs.GetValue(_T("fcl_assetno")), 
			rs.GetValue(_T("fcl_name")), 
			rs.GetValue(_T("fcl_unit")),
			rs.GetValue(_T("fcl_unitprice")),
			rs.GetValue(_T("fcl_qty")),
			rs.GetValue(_T("fcl_money")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFAMComponentsLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMComponentsLine::OnDepartmentSelendok(){
	 UpdateData(TRUE);
}
/*void CFAMComponentsLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMComponentsLine::OnDepartmentKillfocus(){
	
}*/
long CFAMComponentsLine::OnDepartmentLoadData(){
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
/*void CFAMComponentsLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMComponentsLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szTranID = m_wndItemName.GetCurrent(5);
} 
void CFAMComponentsLine::OnItemNameSelendok(){
	 
}
/*void CFAMComponentsLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMComponentsLine::OnItemNameKillfocus(){
	
}*/
long CFAMComponentsLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIdx;
	m_wndItemName.BeginWaitCursor(); 
	int nCount = 0;
	if(!m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and sb_storage_id = '%s'"), m_szDepartmentKey);
		szWhere.Format(_T(" and fa_department = '%s' "), m_szDepartmentKey);
	}
	if(!m_szItemNameKey.IsEmpty())
	{
		szWhere.Format(_T(" and fa_assetno = '%s' "), m_szItemNameKey);
	}
	/*szSQL.Format(_T(" SELECT sb_storage_id, sb_item_id, fal_assetname, fal_model, fal_type,(select ss_desc from sys_sel where ss_id = 'fam_uom' and ss_code = fal_unit) as unit ") \
			_T(" FROM storage_bin ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = sb_item_id) ") \
			_T(" WHERE 1=1 %s "), szWhere);*/
	szSQL.Format(_T(" SELECT fa_assetno, fa_name, fa_model, fa_type, fa_model, fa_serial,") \
			_T(" (select ss_desc from sys_sel where ss_id = 'its_uom' and ss_code = fa_unit) as unit ") \
			_T(" FROM fam_asset ") \
			_T(" WHERE 1=1 %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("fa_assetno")),
			rs.GetValue(_T("fa_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("fa_type")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemName.EndWaitCursor(); 
	return nCount;
}
/*void CFAMComponentsLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMComponentsLine::OnNameChange(){
	
} */
/*void CFAMComponentsLine::OnNameSetfocus(){
	
} */
/*void CFAMComponentsLine::OnNameKillfocus(){
	
} */
int CFAMComponentsLine::OnNameCheckValue(){
	return 0;
} 
/*void CFAMComponentsLine::OnQuantityChange(){
	
} */
/*void CFAMComponentsLine::OnQuantitySetfocus(){
	
} */
/*void CFAMComponentsLine::OnQuantityKillfocus(){
	
} */
int CFAMComponentsLine::OnQuantityCheckValue(){
	return 0;
} 
/*void CFAMComponentsLine::OnUnitPriceChange(){
	
} */
/*void CFAMComponentsLine::OnUnitPriceSetfocus(){
	
} */
/*void CFAMComponentsLine::OnUnitPriceKillfocus(){
	
} */
int CFAMComponentsLine::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CFAMComponentsLine::OnAmountChange(){
	
} */
/*void CFAMComponentsLine::OnAmountSetfocus(){
	
} */
/*void CFAMComponentsLine::OnAmountKillfocus(){
	
} */
int CFAMComponentsLine::OnAmountCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;
	m_nAmount = m_nUnitPrice*m_nQuantity;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMComponentsLine::OnUnitChange(){
	
} */
/*void CFAMComponentsLine::OnUnitSetfocus(){
	
} */
/*void CFAMComponentsLine::OnUnitKillfocus(){
	
} */
int CFAMComponentsLine::OnUnitCheckValue(){
	return 0;
} 
void CFAMComponentsLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMComponentsLine();
} 
int CFAMComponentsLine::OnAddFAMComponentsLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMComponentsLine::OnEditFAMComponentsLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMComponentsLine::OnDeleteFAMComponentsLine(){
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
 		OnCancelFAMComponentsLine();
 	}
	return 0;
}
int CFAMComponentsLine::OnSaveFAMComponentsLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szSQL1, szUpdate;
	int nCount =0;
	CRecord rs(&pMF->m_db);
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}
 	else {
 		
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		szSQL1.Format(_T("SELECT coalesce(max(faac_idx), 0)+1 FROM fam_accessories where faac_assetno='%s'"), m_szItemNameKey);
		rs.ExecSQL(szSQL1);
		nCount = rs.GetIntValue();
		
		szUpdate.Format(_T(" INSERT INTO fam_accessories(faac_createdby,faac_createddate,faac_updatedby,faac_updateddate,faac_assetno,faac_idx,faac_name,faac_unit,faac_quantity,faac_price) ") \
			_T("VALUES ('%s',TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'),'%s',TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'),'%s',%d,'%s','%s', %.0f,%.0f )"),
			pMF->GetCurrentUser(), pMF->GetSysDateTime(),pMF->GetCurrentUser(), pMF->GetSysDateTime(),m_szItemNameKey,nCount,m_szName,m_szUnit,m_nQuantity,m_nAmount);
		pMF->ExecSQL(szUpdate);	
 		OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMComponentsLine::OnCancelFAMComponentsLine(){
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
int CFAMComponentsLine::OnFAMComponentsLineListLoadData(){
	return 0;
}
