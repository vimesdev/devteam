#include "FAMDepreciationLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMDepreciationLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMDepreciationLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMDepreciationLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMDepreciationLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnItemNameAddNew();
}*/
static void _OnComputeDepreciationSelectFnc(CWnd *pWnd){
	CFAMDepreciationLine *pVw = (CFAMDepreciationLine *)pWnd;
	pVw->OnComputeDepreciationSelect();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDepreciationChangeFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepreciationChange();
} */
/*static void _OnDepreciationSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepreciationSetfocus();} */ 
/*static void _OnDepreciationKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnDepreciationKillfocus();
} */
static int _OnDepreciationCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine *)pWnd)->OnDepreciationCheckValue();
} 
/*static void _OnRemainingValueChangeFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnRemainingValueChange();
} */
/*static void _OnRemainingValueSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnRemainingValueSetfocus();} */ 
/*static void _OnRemainingValueKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciationLine *)pWnd)->OnRemainingValueKillfocus();
} */
static int _OnRemainingValueCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciationLine *)pWnd)->OnRemainingValueCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMDepreciationLine *pVw = (CFAMDepreciationLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMDepreciationLineFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnAddFAMDepreciationLine();
} 
static int _OnEditFAMDepreciationLineFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnEditFAMDepreciationLine();
} 
static int _OnDeleteFAMDepreciationLineFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnDeleteFAMDepreciationLine();
} 
static int _OnSaveFAMDepreciationLineFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnSaveFAMDepreciationLine();
} 
static int _OnCancelFAMDepreciationLineFnc(CWnd *pWnd){
	 return ((CFAMDepreciationLine*)pWnd)->OnCancelFAMDepreciationLine();
} 
CFAMDepreciationLine::CFAMDepreciationLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMDepreciationLine::~CFAMDepreciationLine(){
}
void CFAMDepreciationLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 320); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 325, 85, 350);
	m_wndDepartment.Create(this,90, 325, 235, 350); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 241, 325, 321, 350);
	m_wndItemName.Create(this,325, 325, 685, 350); 
	m_wndComputeDepreciation.Create(this, _T("Compute Depreciation"), 690, 325, 790, 350);
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 355, 85, 380);
	m_wndAmount.Create(this,90, 355, 235, 380); 
	m_wndDepreciationLabel.Create(this, _T("Depreciation"), 240, 355, 320, 380);
	m_wndDepreciation.Create(this,325, 355, 460, 380); 
	m_wndRemainingValueLabel.Create(this, _T("Remaining Value"), 465, 355, 545, 380);
	m_wndRemainingValue.Create(this,550, 355, 685, 380); 
	m_wndSaveItem.Create(this, _T("Save"), 690, 355, 790, 380);

}
void CFAMDepreciationLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndAmount.SetCheckValue(true);
	m_wndDepreciation.SetLimitText(16);
	m_wndDepreciation.SetCurrencyFormat(true);
	m_wndDepreciation.SetCheckValue(true);
	m_wndRemainingValue.SetLimitText(16);
	m_wndRemainingValue.SetCurrencyFormat(true);
	m_wndRemainingValue.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 120);
	m_wndItemList.InsertColumn(4, _T("Depr Value"), CFMT_MONEY, 120);
	m_wndItemList.InsertColumn(5, _T("Remaining Value"), CFMT_MONEY, 120);
	
	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Quantity"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemName.InsertColumn(6, _T("Amount"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(7, _T("Used Date"), CFMT_TEXT, 120);
	m_wndItemName.InsertColumn(8, _T("Depr Time"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(9, _T("TranLineID"), CFMT_TEXT, 0);

	m_tbl_line.SetTableName(_T("fam_depreciate_line"));
	m_tbl_line.AddField(_T("fdl_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fdl_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fdl_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fdl_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fdl_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fdl_idx"), dfLong);
	m_tbl_line.AddField(_T("fdl_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fdl_amount"), dfDouble);
	m_tbl_line.AddField(_T("fdl_deprvalue"), dfDouble);
	m_tbl_line.AddField(_T("fdl_remainvalue"), dfDouble);

}
void CFAMDepreciationLine::OnSetWindowEvents(){
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
	m_wndComputeDepreciation.SetEvent(WE_CLICK, _OnComputeDepreciationSelectFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDepreciation.SetEvent(WE_CHANGE, _OnDepreciationChangeFnc);
	//m_wndDepreciation.SetEvent(WE_SETFOCUS, _OnDepreciationSetfocusFnc);
	//m_wndDepreciation.SetEvent(WE_KILLFOCUS, _OnDepreciationKillfocusFnc);
	m_wndDepreciation.SetEvent(WE_CHECKVALUE, _OnDepreciationCheckValueFnc);
	//m_wndRemainingValue.SetEvent(WE_CHANGE, _OnRemainingValueChangeFnc);
	//m_wndRemainingValue.SetEvent(WE_SETFOCUS, _OnRemainingValueSetfocusFnc);
	//m_wndRemainingValue.SetEvent(WE_KILLFOCUS, _OnRemainingValueKillfocusFnc);
	m_wndRemainingValue.SetEvent(WE_CHECKVALUE, _OnRemainingValueCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	

}
void CFAMDepreciationLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDepreciation.GetDlgCtrlID(), m_nDepreciation);
	DDX_Text(pDX, m_wndRemainingValue.GetDlgCtrlID(), m_nRemainingValue);

}
void CFAMDepreciationLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMDepreciationLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fdl_idx), 0)+1 FROM fam_depreciate_line where fdl_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fdl_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fdl_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fdl_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fdl_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fdl_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fdl_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fdl_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fdl_amount"), m_nAmount);
	m_tbl_line.SetValue(_T("fdl_deprvalue"), m_nDepreciation);
	m_tbl_line.SetValue(_T("fdl_remainvalue"), m_nRemainingValue);
}
void CFAMDepreciationLine::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
	m_szItemNameKey.Empty();
	m_nAmount=0;
	m_nDepreciation=0;
	m_nRemainingValue=0;

}
int CFAMDepreciationLine::SetMode(int nMode){
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
 			EnableButtons(FALSE, 0, 1, -1);
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
void CFAMDepreciationLine::OnItemListDblClick(){
	
} 
void CFAMDepreciationLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
} 
int CFAMDepreciationLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_depreciate_line WHERE fdl_orderno = '%s' AND fdl_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMDepreciationLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT fdl_idx, fdl_assetno, fa_name, fdl_amount, fdl_deprvalue, fdl_remainvalue ") \
		_T(" FROM fam_depreciate_line ") \
		_T(" LEFT JOIN fam_asset ON(fdl_assetno = fa_assetno) ") \
		_T(" WHERE fdl_orderno = '%s' ORDER BY fdl_idx"), m_szOrderNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fdl_idx")),
			rs.GetValue(_T("fdl_assetno")),
			rs.GetValue(_T("fa_name")),
			rs.GetValue(_T("fdl_amount")),
			rs.GetValue(_T("fdl_deprvalue")),
			rs.GetValue(_T("fdl_remainvalue")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFAMDepreciationLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMDepreciationLine::OnDepartmentSelendok(){
	UpdateData(TRUE); 
}
/*void CFAMDepreciationLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMDepreciationLine::OnDepartmentKillfocus(){
	
}*/
long CFAMDepreciationLine::OnDepartmentLoadData(){
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
/*void CFAMDepreciationLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMDepreciationLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMDepreciationLine::OnItemNameSelendok(){
	 
}
/*void CFAMDepreciationLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMDepreciationLine::OnItemNameKillfocus(){
	
}*/
long CFAMDepreciationLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
		szWhere.Format(_T(" and stl_item_id='%s' "), m_szItemNameKey);
		//szWhere.Format(_T(" and fa_assetno = '%s' "), m_szItemNameKey);
	}
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT stl_item_id, fal_assetname, stl_qtyorder, stl_unitprice, stl_amount, stl_useddate, fal_deprtime, fal_model, stl_seri ") \
				_T(" FROM storage_transactionline ") \
				_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
				_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
				_T(" WHERE st_doctype = 'EAO' and stl_unitprice >= 30000000 %s"), szWhere);
	/*szSQL.Format(_T("SELECT st_exp_storage_id, st_imp_storage_id, fa_assetno, fa_name, fa_type, fa_useddate, fa_deprtime, ") \
				_T(" stl_unitprice, stl_amount, stl_qtyorder, stl_uom_id, stl_transactionline_id ") \
				_T(" FROM   storage_transactionline ") \
				_T(" LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T(" LEFT JOIN fam_asset ON( fa_strgtransline_id = stl_transactionline_id ) ") \
				_T(" WHERE  stl_transactionline_id IN (SELECT fa_strgtransline_id FROM   fam_asset ") \
				_T("					WHERE  fa_strgtransline_id IS NOT NULL) and fa_department = '%s' %s"), m_szDepartmentKey, szWhere);*/
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndItemName.AddItems(
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("fal_assetname")),
			rs.GetValue(_T("fal_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("stl_qtyorder")),
			rs.GetValue(_T("stl_unitprice")),
			rs.GetValue(_T("stl_amount")),
			CDate::Convert(rs.GetValue(_T("stl_useddate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("fal_deprtime")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMDepreciationLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMDepreciationLine::OnComputeDepreciationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szUseddate, szSQL, szRes, szTranLineID;
	int nDeprTime = 0;
	double nAmount = 0;
	nAmount = str2double(m_wndItemName.GetCurrent(4));
	szUseddate = m_wndItemName.GetCurrent(5);
	nDeprTime = str2int(m_wndItemName.GetCurrent(6));

	szSQL.Format(_T("FAM_DEPRECIATION_REDLINENEW('%s', %d, '%s', cast_string2date('%s'), %.0f, 'S', '', 'N')"), m_szItemNameKey, nDeprTime,
		pMF->GetCurrentUser(), CDate::Convert(szUseddate, ddmmyyyy, yyyymmdd), nAmount);
	szRes = pMF->ExecDML(szSQL);
	if(str2double(szRes) > 0)
	{ 
		m_wndSaveItem.EnableWindow(TRUE);
		m_nAmount = nAmount;
		m_nDepreciation = str2double(szRes);
		m_nRemainingValue = nAmount - m_nDepreciation;
		UpdateData(FALSE);
		m_wndSaveItem.SetFocus();
	}
} 
/*void CFAMDepreciationLine::OnAmountChange(){
	
} */
/*void CFAMDepreciationLine::OnAmountSetfocus(){
	
} */
/*void CFAMDepreciationLine::OnAmountKillfocus(){
	
} */
int CFAMDepreciationLine::OnAmountCheckValue(){
	return 0;
} 
/*void CFAMDepreciationLine::OnDepreciationChange(){
	
} */
/*void CFAMDepreciationLine::OnDepreciationSetfocus(){
	
} */
/*void CFAMDepreciationLine::OnDepreciationKillfocus(){
	
} */
int CFAMDepreciationLine::OnDepreciationCheckValue(){
	return 0;
} 
/*void CFAMDepreciationLine::OnRemainingValueChange(){
	
} */
/*void CFAMDepreciationLine::OnRemainingValueSetfocus(){
	
} */
/*void CFAMDepreciationLine::OnRemainingValueKillfocus(){
	
} */
int CFAMDepreciationLine::OnRemainingValueCheckValue(){
	return 0;
} 
void CFAMDepreciationLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMDepreciationLine();
} 
int CFAMDepreciationLine::OnAddFAMDepreciationLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMDepreciationLine::OnEditFAMDepreciationLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMDepreciationLine::OnDeleteFAMDepreciationLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFAMDepreciationLine();
 	}
	return 0;
}
int CFAMDepreciationLine::OnSaveFAMDepreciationLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}
	else{
 		
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMDepreciationLine::OnCancelFAMDepreciationLine(){
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
int CFAMDepreciationLine::OnFAMDepreciationLineListLoadData(){
	return 0;
}
