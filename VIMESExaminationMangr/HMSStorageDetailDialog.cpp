#include "HMSStorageDetailDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSStorageDetailDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSStorageDetailDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnTotalItemsChangeFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnTotalItemsChange();
} */
/*static void _OnTotalItemsSetfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnTotalItemsSetfocus();} */ 
/*static void _OnTotalItemsKillfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnTotalItemsKillfocus();
} */
static int _OnTotalItemsCheckValueFnc(CWnd *pWnd){
	return ((CHMSStorageDetailDialog *)pWnd)->OnTotalItemsCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSStorageDetailDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSStorageDetailDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSStorageDetailDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSStorageDetailDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSStorageDetailDialog *pVw = (CHMSStorageDetailDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddHMSStorageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnAddHMSStorageDetailDialog();
} 
static int _OnEditHMSStorageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnEditHMSStorageDetailDialog();
} 
static int _OnDeleteHMSStorageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnDeleteHMSStorageDetailDialog();
} 
static int _OnSaveHMSStorageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnSaveHMSStorageDetailDialog();
} 
static int _OnCancelHMSStorageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSStorageDetailDialog*)pWnd)->OnCancelHMSStorageDetailDialog();
} 
CHMSStorageDetailDialog::CHMSStorageDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSStorageDetailDialog::~CHMSStorageDetailDialog(){
}
void CHMSStorageDetailDialog::OnCreateComponents(){
	m_wndList.Create(this,10, 30, 995, 565); 
	m_wndTotalItemsLabel.Create(this, _T("Total Items"), 4, 575, 104, 600);
	m_wndTotalItems.Create(this,109, 575, 209, 600); 
	m_wndStorageLabel.Create(this, _T("Storage"), 214, 575, 314, 600);
	m_wndStorage.Create(this,319, 575, 628, 600); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 633, 575, 733, 600);
	m_wndStorageDetail.Create(this, _T("Storage Detail"), 5, 5, 1000, 570);
	m_wndSearchName.Create(this,738, 575, 958, 600); 
	m_wndSearch.Create(this, _T("@"), 963, 575, 996, 600);

}
void CHMSStorageDetailDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTotalItems.SetLimitText(16);
	m_wndTotalItems.SetReadOnly(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);
	m_wndSearchName.SetNotEmpty(false);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0);//product_item_id
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 320);
	m_wndList.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Serv Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Ins Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("Order Qty"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Expr Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(11, _T("Mfg"), CFMT_TEXT, 150);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.SetSortHeader(false);
	m_wndList.GetHeaderControl()->MergeCell(_T("Unit Price"), 0, 5, 1, 6, true);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSStorageDetailDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalItems.SetEvent(WE_CHANGE, _OnTotalItemsChangeFnc);
	//m_wndTotalItems.SetEvent(WE_SETFOCUS, _OnTotalItemsSetfocusFnc);
	//m_wndTotalItems.SetEvent(WE_KILLFOCUS, _OnTotalItemsKillfocusFnc);
	m_wndTotalItems.SetEvent(WE_CHECKVALUE, _OnTotalItemsCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	SetMode(VM_VIEW);

}
void CHMSStorageDetailDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalItems.GetDlgCtrlID(), m_nTotalItems);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CHMSStorageDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSStorageDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSStorageDetailDialog::SetDefaultValues(){

	m_nTotalItems=0;
	m_szStorageKey.Empty();
	m_szSearchName.Empty();

}
int CHMSStorageDetailDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
void CHMSStorageDetailDialog::OnListDblClick(){
	
} 
void CHMSStorageDetailDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSStorageDetailDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSStorageDetailDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	
	if(!m_szSearchName.IsEmpty()){
		szWhere.Format(_T(" and lower(product_name) like('%%'||lower('%s')||'%%') "), m_szSearchName);
	}

	szSQL.Format(_T(" SELECT product_org_id,") \
_T("   msl_product_item_id AS product_item_id,") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_saleprice1,") \
_T("   product_saleprice2,") \
_T("   SUM(msl_qtyonhand)                                       AS qtyonhand,") \
_T("   SUM(msl_qtyordered    -msl_qtypreordered-msl_qtypreordered) AS product_qtyordered,") \
_T("   SUM(product_saleprice1*msl_qtyonhand)                       AS amount1,") \
_T("   SUM(product_saleprice2*msl_qtyonhand)                       AS amount2,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename,") \
_T("   msl_isactive AS isactive") \
_T(" FROM m_storageline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id  =msl_product_item_id)") \
_T(" WHERE msl_storage_id=%d ") \
_T(" AND msl_qtyonhand   > 0 %s ") \
_T(" GROUP BY product_org_id,") \
_T("   msl_product_item_id,") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_unitprice,") \
_T("   product_saleprice1,") \
_T("   product_saleprice2,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename,") \
_T("   msl_isactive") \
_T(" ORDER BY product_org_id DESC,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_unitprice,") \
_T("   product_saleprice1"), str2int(m_szStorageKey), szWhere);

//_msg(_T("%s"), szSQL);	
	CString szOldOrg, szNewOrg;
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	int nIndex = 0;

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("product_org_id"), szNewOrg);
		if(szNewOrg != szOldOrg){
			if(szNewOrg == _T("PM"))
			{
				nItem = m_wndList.AddItems(_T(""), _T(""), _T("THU\x1ED0\x43"), NULL);
			}
			else
			{
				nItem = m_wndList.AddItems(_T(""), _T(""), _T("V\xC2T T\x1AF"), NULL);
			}
			szOldOrg = szNewOrg;
			m_wndList.MergeCell(nItem, 2, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			m_wndList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		
		nIndex++;
		tmpStr.Format(_T("%d"), nIndex);
		int nItem = m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("msl_product_item_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_salePrice1")), 
			rs.GetValue(_T("product_salePrice2")), 
			rs.GetValue(_T("qtyonhand")), 
			rs.GetValue(_T("product_qtyordered")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("product_ExpDate")), 
			rs.GetValue(_T("product_manufacturename")), 
			_T(""),
			NULL);
		rs.GetValue(_T("isactive"), tmpStr);
		if (tmpStr == _T("N"))
			m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	
	m_nTotalItems = nCount;
	UpdateData(false);
	return m_nTotalItems;
}
/*void CHMSStorageDetailDialog::OnTotalItemsChange(){
	
} */
/*void CHMSStorageDetailDialog::OnTotalItemsSetfocus(){
	
} */
/*void CHMSStorageDetailDialog::OnTotalItemsKillfocus(){
	
} */
int CHMSStorageDetailDialog::OnTotalItemsCheckValue(){
	return 0;
} 
void CHMSStorageDetailDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSStorageDetailDialog::OnStorageSelendok(){
	 OnListLoadData();
}
/*void CHMSStorageDetailDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSStorageDetailDialog::OnStorageKillfocus(){
	
}*/
long CHMSStorageDetailDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && str2int(m_szStorageKey)){
		szWhere.Format(_T(" and msl_storage_id=%ld "), str2int(m_szStorageKey));
	};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name ") \
		_T("FROM m_storagelist WHERE msl_dept_id='%s' and msl_type='C' %s ORDER BY msl_storage_id "), 
		pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSStorageDetailDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSStorageDetailDialog::OnSearchNameChange(){
	
} */
/*void CHMSStorageDetailDialog::OnSearchNameSetfocus(){
	
} */
/*void CHMSStorageDetailDialog::OnSearchNameKillfocus(){
	
} */
int CHMSStorageDetailDialog::OnSearchNameCheckValue(){
	OnListLoadData();
	return 1;
} 
void CHMSStorageDetailDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
int CHMSStorageDetailDialog::OnAddHMSStorageDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSStorageDetailDialog::OnEditHMSStorageDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSStorageDetailDialog::OnDeleteHMSStorageDetailDialog(){
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
 		OnCancelHMSStorageDetailDialog();
 	}
	return 0;
}
int CHMSStorageDetailDialog::OnSaveHMSStorageDetailDialog(){
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
 		//OnHMSStorageDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSStorageDetailDialog::OnCancelHMSStorageDetailDialog(){
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
int CHMSStorageDetailDialog::OnHMSStorageDetailDialogListLoadData(){
	return 0;
}
