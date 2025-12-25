#include "FAMTransferToDeptLine.h"
#include "FAMTransferToDeptDialog.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMTransferToDeptLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferToDeptLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptLine *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptLine *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptLine *pVw = (CFAMTransferToDeptLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMTransferToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnAddFAMTransferToDeptLine();
} 
static int _OnEditFAMTransferToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnEditFAMTransferToDeptLine();
} 
static int _OnDeleteFAMTransferToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnDeleteFAMTransferToDeptLine();
} 
static int _OnSaveFAMTransferToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnSaveFAMTransferToDeptLine();
} 
static int _OnCancelFAMTransferToDeptLineFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptLine*)pWnd)->OnCancelFAMTransferToDeptLine();
} 
CFAMTransferToDeptLine::CFAMTransferToDeptLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMTransferToDeptLine::~CFAMTransferToDeptLine(){
}
void CFAMTransferToDeptLine::OnCreateComponents(){
	m_wndItemList.Create(this,5, 5, 790, 320); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 5, 325, 85, 350);
	m_wndItemName.Create(this,90, 325, 545, 350); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 550, 325, 630, 350);
	m_wndQuantity.Create(this,635, 325, 715, 350); 
	m_wndSaveItem.Create(this, _T("Save"), 720, 325, 790, 350);
	
}
void CFAMTransferToDeptLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(5, _T("Quantity"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(6, _T("TransactionLineID"), CFMT_TEXT, 0);
	m_wndItemList.InsertColumn(7, _T("TransID"), CFMT_TEXT, 0);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 150);
	m_wndItemName.InsertColumn(6, _T("Quantity"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(7, _T("Type"), CFMT_TEXT, 80); 
	m_wndItemName.InsertColumn(8, _T("Fname"), CFMT_TEXT,0); 

	m_tbl_TransferLine.SetTableName(_T("fam_transfer_line"));
	m_tbl_TransferLine.AddField(_T("ftl_createdby"), dfText, 15);
	m_tbl_TransferLine.AddField(_T("ftl_createddate"), dfDateTime);
	m_tbl_TransferLine.AddField(_T("ftl_updatedby"), dfText, 15);
	m_tbl_TransferLine.AddField(_T("ftl_updateddate"), dfDateTime);
	m_tbl_TransferLine.AddField(_T("ftl_idx"), dfLong);
	m_tbl_TransferLine.AddField(_T("ftl_transferid"), dfText, 15);
	m_tbl_TransferLine.AddField(_T("ftl_assetno"), dfText, 30);
	m_tbl_TransferLine.AddField(_T("ftl_assetname"), dfText, 250);
	m_tbl_TransferLine.AddField(_T("ftl_qtylevel"), dfText, 1);

}
void CFAMTransferToDeptLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);

	if(GetMode() == VM_NONE)
		SetMode(VM_NONE);
	else if(GetMode() == VM_EDIT || GetMode() == VM_ADD)
	{
		SetMode(VM_ADD);
	}

}
void CFAMTransferToDeptLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
}
void CFAMTransferToDeptLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*CRecord rs(&pMF->m_db);
	CString szSQL, szTranID;
	int nSel = m_wndItemList.GetCurSel();
	if(nSel < 0)
		return;
	szTranID  = m_wndItemList.GetItemText(nSel, 5);
	szSQL.Format(_T(" SELECT stl_item_id, fal_assetname, stl_qtyorder ") \
			_T(" FROM storage_transactionline ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
			_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
			_T(" WHERE substr(st_doctype, 0, 1) = 'E' and stl_transaction_id = '%s' and stl_transactionline_id = '%s' "), szTranID, m_szTranLineID);
	int ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(ret > 0)
	{
		m_szItemNameKey = rs.GetValue(_T("stl_item_id"));
		m_nQuantity = str2double(rs.GetValue(_T("stl_qtyorder")));
		UpdateData(FALSE);
	}*/

}
void CFAMTransferToDeptLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMTransferToDeptLine::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_nQuantity=0;

}
int CFAMTransferToDeptLine::SetMode(int nMode){
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
 			EnableButtons(FALSE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMTransferToDeptLine::OnItemListDblClick(){
	
} 
void CFAMTransferToDeptLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	n_Idx = str2long(m_wndItemList.GetItemText(nNewItem, 0));
	szQtyLevel = m_wndItemList.GetItemText(nNewItem, 5);
	//m_szTranLineID = m_wndItemList.GetItemText(nNewItem, 4);
	//GetDataToScreen();
} 
int CFAMTransferToDeptLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szRes, szUpdate;
	if(GetMode() == VM_VIEW)
		return -1;
	int nSel = m_wndItemList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szLine = m_wndItemList.GetItemText(nSel, 6);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("STORAGE_TRANSACTION_DELLINE('%s','%s')"), m_szTransactionID, szLine);
 	szRes = pMF->ExecDML(szSQL);
 	if(!szRes.IsEmpty()){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMTransferToDeptLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIndex;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT stl_transactionline_id, row_number() over(order by stl_item_id) as idx, stl_item_id, stl_uom_id, stl_unitprice, ") \
		_T(" stl_amount, stl_qtyorder, fal_assetname, stl_transaction_id, fal_model, stl_seri") \
		_T(" FROM storage_transactionline ") \
		_T(" LEFT JOIN fam_asset_list ON(substr(stl_item_id,0,14) = fal_assetno) ") \
		_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
		_T(" WHERE stl_transaction_id = '%s'"), m_szTransactionID);
	_fmsg(_T("%s"), szSQL);
	/*szSQL.Format(_T("SELECT row_number() over(order by stl_item_id) as idx, stl_transactionline_id, stl_amount, stl_qtyorder, stl_transaction_id, ") \
		_T(" stl_item_id, (select fa_name from fam_asset where substr(fa_assetno,0,14) = stl_item_id) as faname") \
		_T(" FROM storage_transactionline ") \
		_T(" LEFT JOIN storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
		_T(" WHERE stl_transaction_id = '%s'"), m_szTransactionID);*/
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("stl_item_id")),
			rs.GetValue(_T("fal_assetname")),
			rs.GetValue(_T("fal_model")),
			rs.GetValue(_T("stl_seri")),
			rs.GetValue(_T("stl_qtyorder")),
			rs.GetValue(_T("stl_transactionline_id")), 
			rs.GetValue(_T("stl_transaction_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;

}
void CFAMTransferToDeptLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	szAssetName = m_wndItemName.GetCurrent(1);
	m_nUnitPrice = str2double(m_wndItemName.GetCurrent(2));
	m_szUnit = m_wndItemName.GetCurrent(3);
	m_szStorage = m_wndItemName.GetCurrent(6);
	m_szTranLineID = m_wndItemName.GetCurrent(7);
	
} 
void CFAMTransferToDeptLine::OnItemNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 
}
/*void CFAMTransferToDeptLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMTransferToDeptLine::OnItemNameKillfocus(){
	
}*/
long CFAMTransferToDeptLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() == VM_EDIT)
	{
		CFAMTransferToDeptDialog dlg(pMF);
		dlg.OnFromDeptSelendok();
		dlg.OnToDeptSelendok();
	}
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
		//szWhere.Format(_T(" and stl_item_id='%s' "), m_szItemNameKey);
		szWhere.Format(_T(" and fa_assetno='%s' "), m_szItemNameKey);
	}
	//m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	
	/*szSQL.Format(_T(" SELECT st_exp_storage_id, ") \
				_T("        st_imp_storage_id, ") \
				_T("        fa_assetno, ") \
				_T("        fa_name, ") \
				_T("        fa_type, ") \
				_T("        stl_unitprice, ") \
				_T("        stl_uom_id, ") \
				_T("        stl_transactionline_id, ") \
				_T("        res ") \
				_T(" FROM   (SELECT st_exp_storage_id, ") \
				_T("                st_imp_storage_id, ") \
				_T("                fa_assetno, ") \
				_T("                fa_name, ") \
				_T("                fa_type, ") \
				_T("                stl_unitprice, ") \
				_T("                stl_uom_id, ") \
				_T("                stl_transactionline_id ") \
				_T("         FROM   storage_transactionline ") \
				_T("                LEFT JOIN storage_transaction ") \
				_T("                       ON( st_transaction_id = stl_transaction_id ) ") \
				_T("                LEFT JOIN fam_asset ") \
				_T("                       ON( fa_strgtransline_id = stl_transactionline_id ) ") \
				_T("         WHERE  stl_transactionline_id IN (SELECT fa_strgtransline_id ") \
				_T("                                           FROM   fam_asset ") \
				_T("                                           WHERE  fa_strgtransline_id IS NOT NULL) and fa_department = '%s' %s)") \
				_T("        LEFT JOIN (SELECT sb_item_id, ") \
				_T("                          sb_storage_id, ") \
				_T("                          Coalesce(SUM(SB_QTYONHAND - SB_QTYORDERED - SB_QTYPREORDERED), 0) AS res ") \
				_T("                   FROM   STORAGE_BIN ") \
				_T("                   GROUP  BY sb_storage_id, ") \
				_T("                             sb_item_id) ") \
				_T("               ON ( sb_storage_id = st_imp_storage_id ") \
				_T("                    AND sb_item_id = Substr(fa_assetno, 0, 14)) WHERE res > 0"),szFromDept, szWhere );*/

	szSQL.Format(_T(" SELECT DISTINCT fa_assetno, fa_name, substr(fa_assetno,0,14) as fname, fa_type, fa_purchaseprice, fa_model, fa_serial, ") \
				_T("			(select ss_desc from sys_sel where ss_id = 'its_uom' and ss_code = fa_unit) as unit, res ") \
				_T(" FROM   fam_asset ") \
				_T("        LEFT JOIN (SELECT sb_item_id, sb_storage_id, ") \
				_T("                          Coalesce(SUM(SB_QTYONHAND - SB_QTYORDERED - SB_QTYPREORDERED), 0) AS res ") \
				_T("                   FROM   STORAGE_BIN ") \
				_T("                   GROUP  BY sb_storage_id, sb_item_id) ") \
				_T("               ON ( sb_item_id = Substr(fa_assetno, 0, 14) and sb_storage_id = fa_department) ") \
				_T(" WHERE  fa_department = '%s' %s") \
				_T("        AND res > 0 "), szFromDept, szWhere);

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems( 
			rs.GetValue(_T("fa_assetno")),
			rs.GetValue(_T("fa_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("fa_purchaseprice")),
			rs.GetValue(_T("res")),
			rs.GetValue(_T("fa_type")),
			rs.GetValue(_T("fname")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMTransferToDeptLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CFAMTransferToDeptLine::OnQuantityChange(){
	
} */
/*void CFAMTransferToDeptLine::OnQuantitySetfocus(){
	
} */
/*void CFAMTransferToDeptLine::OnQuantityKillfocus(){ 
	
} */
int CFAMTransferToDeptLine::OnQuantityCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nQuantity <= 0)
		return -1;
	return 0;
} 
void CFAMTransferToDeptLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransferToDeptLine();
} 
int CFAMTransferToDeptLine::OnAddFAMTransferToDeptLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMTransferToDeptLine::OnEditFAMTransferToDeptLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransferToDeptLine::OnDeleteFAMTransferToDeptLine(){
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
 		OnCancelFAMTransferToDeptLine();
 	}
	return 0;
}
int CFAMTransferToDeptLine::OnSaveFAMTransferToDeptLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szSQL1, szSQL2, szRes, szAddToUP, szFNo, szSeri;
	szFNo = m_wndItemName.GetCurrent(8);
	szSeri = m_wndItemName.GetCurrent(3);
	CRecord rs(&pMF->m_db);
	int m_nIndex = 0;
	int nCount = 0;
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL.Format(_T("STORAGE_TRANSACTION_CREATELTF('%s', '%s', '%s', '%s', %.0f, %.0f, ") \
			_T(" '%s', '','%s','','')"), m_szTransactionID, pMF->GetCurrentUser(), m_szItemNameKey, szAssetName, m_nQuantity, m_nUnitPrice, m_szUnit, szSeri);
	}		
 	else {
 		
 	}
	_fmsg(_T("%s"), szSQL);
	szRes = pMF->ExecDML(szSQL);
	
	if(!szRes.IsEmpty())
 	{
		szUpdate.Format(_T("INSERT INTO FAM_TEMP (ft_assetno, ft_department, ft_orderno) values ('%s','%s','%s') "), m_szItemNameKey, szToDept, pMF->m_wndTransferToDept.szTransferID);
		pMF->ExecSQL(szUpdate);
		/*szUpdate.Format(_T("UPDATE fam_asset SET fa_department = '%s' WHERE fa_assetno = '%s' "), szToDept, m_szItemNameKey);
		pMF->ExecSQL(szUpdate);*/
		OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();

		/*szSQL1.Format(_T("SELECT coalesce(max(fam_idx), 0)+1 FROM fam_usingprocess WHERE faup_assetno='%s'"), m_szItemNameKey);
		rs.ExecSQL(szSQL1);
		nCount = rs.GetIntValue();
		
		szAddToUP.Format(_T("INSERT INTO fam_usingprocess (faup_createdby, faup_createddate, faup_updatedby, faup_updateddate, faup_assetno,faup_idx, ") \
						_T(" faup_fromdate, faup_olddept, faup_newdept) values ") \
						_T(" ('%s',TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'),'%s',TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'),'%s', %ld, cast_string2date('%s'), '%s','%s') ") \
						_T(""), pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetCurrentUser(), pMF->GetSysDateTime(), m_szItemNameKey, nCount, pMF->GetSysDate(), szFromDept, szToDept);
		pMF->ExecSQL(szAddToUP);
		MessageBox(szAddToUP);*/
 	}
 	else 
 	{					  
		
 	}
 	return 0;
}
int CFAMTransferToDeptLine::OnCancelFAMTransferToDeptLine(){
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
int CFAMTransferToDeptLine::OnFAMTransferToDeptLineListLoadData(){
	return 0;
}
