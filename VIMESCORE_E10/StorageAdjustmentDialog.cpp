#include "StorageAdjustmentDialog.h"
#include "MainFrame_E10.h"
#include "QuantityAdjustmentDialog.h"
#include "HMSReportForms/PrintForms.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageAdjustmentDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnStorageLoadData();
}

static int _OnCheckLastInventoryFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnCheckLastInventory();
}

/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnInventoryDateChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoryDateChange();
} */
/*static void _OnInventoryDateSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoryDateSetfocus();} */ 
/*static void _OnInventoryDateKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoryDateKillfocus();
} */
static int _OnInventoryDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnInventoryDateCheckValue();
} 
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnLoadDataSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageAdjustmentDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnListDeleteItem();
} 

static void _OnNameChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameChange();
} 
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnNameCheckValue();
}


static void _OnAdjQuantityChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd->GetParent())->OnAdjQuantityChange();
} 
/*static void _OnAdjQuantitySetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd->GetParent())->OnAdjQuantitySetfocus();} */ 
/*static void _OnAdjQuantityKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd->GetParent())->OnAdjQuantityKillfocus();
} */
static int _OnAdjQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd->GetParent())->OnAdjQuantityCheckValue();
}
static void _OnAdjustmentSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnAdjustmentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintStockExportSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnPrintStockExportSelect();
} 
static void _OnPrintStockImportSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnPrintStockImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnAddStorageAdjustmentDialog();
} 
static int _OnEditStorageAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnEditStorageAdjustmentDialog();
} 
static int _OnDeleteStorageAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnDeleteStorageAdjustmentDialog();
} 
static int _OnSaveStorageAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnSaveStorageAdjustmentDialog();
} 
static int _OnCancelStorageAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CStorageAdjustmentDialog*)pWnd)->OnCancelStorageAdjustmentDialog();
} 
CStorageAdjustmentDialog::CStorageAdjustmentDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CStorageAdjustmentDialog::~CStorageAdjustmentDialog(){
}
void CStorageAdjustmentDialog::OnCreateComponents(){
	m_wndInventoryInformation.Create(this, _T("Inventory Information"), 5, 5, 1000, 60);
	m_wndInventoryItems.Create(this, _T("Inventory Items"), 5, 65, 1000, 565);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 30, 110, 55);
	m_wndStorage.Create(this,115, 30, 460, 55); 
	m_wndGetLastInventory.Create(this, _T("Last Inventory"), 465, 30, 660, 55);
	m_wndInventoryDateLabel.Create(this, _T("Inventory Date"), 665, 30, 765, 55);
	m_wndInventoryDate.Create(this,770, 30, 895, 55); 
	m_wndLoadData.Create(this, _T("Create Order"), 900, 30, 995, 55);
	m_wndNameLabel.Create(this, _T("Name"), 10, 570, 110, 595);
	m_wndName.Create(this,115, 570, 365, 595); 
	//m_wndDelete.Create(this, _T("Delete"), 370, 570, 450, 595);
	m_wndAdjustment.Create(this, _T("Adjustment"), 455, 570, 560, 595);
	m_wndPrint.Create(this, _T("&Print"), 565, 570, 670, 595);
	m_wndPrintStockExport.Create(this, _T("Print Stock Export"), 675, 570, 780, 595);
	m_wndPrintStockImport.Create(this, _T("Print Stock Import"), 785, 570, 890, 595);
	m_wndClose.Create(this, _T("&Close"), 895, 570, 1000, 595);
	m_wndList.Create(this,10, 90, 995, 560); 

}
void CStorageAdjustmentDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	
	m_wndInventoryDate.SetReadOnly(TRUE);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//LineID
	m_wndList.InsertColumn(1, _T("Item No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Exp Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(6, _T("Lot No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("On Hand"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Inventory Qty"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Adjustment Quantity"), CFMT_MONEY, 90);
	m_wndList.GetHeaderControl()->SetItemHeight(1);

	m_wndList.SetEditLabel(8, GUI_NUMBERCTRL);

	

	m_m_inventoryTbl.SetTableName(_T("m_inventory"));
//	m_m_inventoryTbl.AddField(_T("MI_INVENTORY_ID"), dfLong); 
//	m_m_inventoryTbl.AddField(_T("MI_CLIENT_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_ORG_ID"), dfText, 20); 
//	m_m_inventoryTbl.AddField(_T("MI_ISACTIVE"), dfText, 1); 
//	m_m_inventoryTbl.AddField(_T("MI_CREATEDDATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_CREATEDBY"), dfText, 20); 
//	m_m_inventoryTbl.AddField(_T("MI_UPDATEDDATE"), dfDateTime); 
//	m_m_inventoryTbl.AddField(_T("MI_UPDATEDBY"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_ORDERNO"), dfText, 15); 
//	m_m_inventoryTbl.AddField(_T("MI_DATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_DESCRIPTION"), dfText, 254); 
	m_m_inventoryTbl.AddField(_T("MI_STORAGE_ID"), dfLong); 
/*
	m_m_inventoryTbl.AddField(_T("MI_POSTED"), dfText, 60); 
	m_m_inventoryTbl.AddField(_T("MI_POSTEDDATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_PROCESSED"), dfText, 1); 
//	m_m_inventoryTbl.AddField(_T("MI_STATUS"), dfText, 1); 
	m_m_inventoryTbl.AddField(_T("MI_UPDATEQTY"), dfText, 1); 
	m_m_inventoryTbl.AddField(_T("MI_GENERATELIST"), dfText, 1); 
	m_m_inventoryTbl.AddField(_T("MI_ASSET_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_USER1_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION1"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER2_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION2"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER3_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION3"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER4_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION4"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER5_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION5"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER6_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION6"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER7_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION7"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER8_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION8"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER9_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION9"), dfText, 128); 
	m_m_inventoryTbl.AddField(_T("MI_USER10_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_POSITION10"), dfText, 128); 
*/

	
}

void CStorageAdjustmentDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	
	m_wndGetLastInventory.SetEvent(WE_CLICK, _OnCheckLastInventoryFnc);

	//m_wndInventoryDate.SetEvent(WE_CHANGE, _OnInventoryDateChangeFnc);
	//m_wndInventoryDate.SetEvent(WE_SETFOCUS, _OnInventoryDateSetfocusFnc);
	//m_wndInventoryDate.SetEvent(WE_KILLFOCUS, _OnInventoryDateKillfocusFnc);
	m_wndInventoryDate.SetEvent(WE_CHECKVALUE, _OnInventoryDateCheckValueFnc);
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdjustment.SetEvent(WE_CLICK, _OnAdjustmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintStockExport.SetEvent(WE_CLICK, _OnPrintStockExportSelectFnc);
	m_wndPrintStockImport.SetEvent(WE_CLICK, _OnPrintStockImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(8);
	if(pCtrl)
	{
	//	pCtrl->SetEvent(WE_CHANGE, _OnAdjQuantityChangeFnc);
	//	pCtrl->SetEvent(WE_SETFOCUS, _OnAdjQuantitySetfocusFnc);
	//	pCtrl->SetEvent(WE_KILLFOCUS, _OnAdjQuantityKillfocusFnc);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnAdjQuantityCheckValueFnc);
	}

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();

	SetMode(GetMode());

	OnListLoadData();

}
void CStorageAdjustmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndInventoryDate.GetDlgCtrlID(), m_szInventoryDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndGetLastInventory.GetDlgCtrlID(), m_bCheckLastInventory);

}
void CStorageAdjustmentDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_inventory WHERE mi_inventory_id=%ld "), m_nID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("mi_orderno"), m_szOrderNo);
		rs.GetValue(_T("mi_description"), m_szDescription);
		rs.GetValue(_T("mi_storage_id"), m_szStorageKey);
		rs.GetValue(_T("mi_date"), m_szInventoryDate);
		rs.GetValue(_T("mi_status"), m_szStatus);
	}

}

void CStorageAdjustmentDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_m_inventoryTbl.SetValue(_T("mi_org_id"), pMF->GetModuleID());
	m_m_inventoryTbl.SetValue(_T("mi_createdby"), pMF->GetCurrentUser());
	m_m_inventoryTbl.SetValue(_T("MI_ORDERNO"), m_szOrderNo);
	m_m_inventoryTbl.SetValue(_T("MI_DATE"), m_szInventoryDate);
	m_m_inventoryTbl.SetValue(_T("MI_DESCRIPTION"),m_szDescription);
	m_m_inventoryTbl.SetValue(_T("MI_STORAGE_ID"), m_szStorageKey);
	

}

void CStorageAdjustmentDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
//	m_szInventoryDate.Empty();
	m_bCheckLastInventory = FALSE;

}

int CStorageAdjustmentDialog::SetMode(int nMode){
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
			m_szInventoryDate = pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGEADJUSTMENT_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 5, -1);
			m_szInventoryDate = pMF->GetSysDateTime();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;

 		};

		if (m_szStatus != _T("O")) 
		{
			m_wndAdjustment.EnableWindow(FALSE);
			if (m_szStatus == _T("A"))
			{
				m_wndPrint.EnableWindow(TRUE);
				m_wndPrintStockExport.EnableWindow(TRUE);
				m_wndPrintStockImport.EnableWindow(TRUE);
			}
		}
		m_wndLoadData.EnableWindow(TRUE);
		m_wndName.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}

void CStorageAdjustmentDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageAdjustmentDialog::OnStorageSelendok(){
	 
}

/*void CStorageAdjustmentDialog::OnStorageSetfocus(){
	
}*/
/*void CStorageAdjustmentDialog::OnStorageKillfocus(){
	
}*/
long CStorageAdjustmentDialog::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CStorageAdjustmentDialog::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageAdjustmentDialog::OnInventoryDateChange(){
	
} */
/*void CStorageAdjustmentDialog::OnInventoryDateSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnInventoryDateKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnInventoryDateCheckValue(){
	return 0;
} 
void CStorageAdjustmentDialog::OnLoadDataSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvDate, szCurrDate;
	CString szStatus  = GetOrderStatus();
	if(szStatus == _T("A"))
		return;

	if(!IsValidateData())
 		return;

	if(!pMF->CheckPermission(_T("10.15")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}
	

	szSQL.Format(_T("SELECT count(*) FROM m_inventory WHERE mi_storage_id=%ld and mi_status='O' "), str2int(m_szStorageKey));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		int nRet = ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i phi\x1EBFu \x111i\x1EC1u \x63h\x1EC9nh \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 \x64uy\x1EC7t. \x42\x1EA1n \x63\xF3 mu\x1ED1n t\x1EA1o phi\x1EBFu \x111i\x1EC1u \x63h\x1EC9nh m\x1EDBi kh\xF4ng?(Y/N)"), MB_YESNO);
		if (nRet == IDNO)
			return;
	}
	
	szSQL.Format(_T("M_INVENTORY_CREATE(%s)"), m_m_inventoryTbl.FormatSQL());
	long res = str2long(pMF->ExecDML(szSQL));
//_msg(_T("%ld"), res);
	if(res > 0){
		ShowMessageBox(_T("Create inventory completed"));
		m_nID = res;
		GetDataToScreen();
		SetMode(VM_VIEW);
		OnListLoadData();
	}
}
 
void CStorageAdjustmentDialog::OnListDblClick(){
//	AdjustmentQty();
}
 
void CStorageAdjustmentDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CStorageAdjustmentDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CStorageAdjustmentDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.Empty();
	
	if(m_bCheckLastInventory)
	{
		szWhere.AppendFormat(_T(" and mil_qtyonhand > 0 "));
	}
	szSQL.Format(_T(" SELECT mil_inventoryline_id, ") \
				_T(" product_item_id,") \
				_T("   product_code,") \
				_T("   product_name,") \
				_T("   product_uomname,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1,") \
				_T("   product_saleprice2,") \
				_T("   product_saleprice3,") \
				_T("   mil_qtyonhand,") \
				_T("   mil_qtybook,") \
				_T("   mil_qtyadj,") \
				_T("   product_unitprice*mil_qtyonhand AS onhand_amount,") \
				_T("   product_unitprice*mil_qtybook AS book_amount,") \
				_T("   product_unitprice*mil_qtyadj AS adj_amount,") \
				_T("   product_lotno,") \
				_T("   product_expdate,") \
				_T("   product_manufacturename") \
				_T(" FROM m_inventoryline") \
				_T(" LEFT JOIN m_productitem_view") \
				_T(" ON(product_item_id    =mil_product_item_id)") \
				_T(" WHERE mil_inventory_id=%ld %s ") \
				_T(" ORDER BY product_name,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1"), m_nID, szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("mil_inventoryline_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_unitPrice")),
			rs.GetValue(_T("product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mil_qtyonhand")), 
			rs.GetValue(_T("mil_qtybook")), 
			rs.GetValue(_T("mil_qtyadj")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return 0;
}

void CStorageAdjustmentDialog::OnNameChange(){
	UpdateData(true);
	m_wndList.Search(2, m_szName, SEARCH_LIKE);
} 
/*void CStorageAdjustmentDialog::OnNameSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnNameKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnNameCheckValue(){
	return 0;
}


void CStorageAdjustmentDialog::OnAdjQuantityChange(){
} 
/*void CStorageAdjustmentDialog::OnAdjQuantitySetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnAdjQuantityKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnAdjQuantityCheckValue(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CGuiNumberCtrl* pCtrl  = (CGuiNumberCtrl *)m_wndList.GetEditControl(8);
	if(pCtrl == NULL)
		return 0;
	double nOnhand = str2double(m_wndList.GetItemText(nSel, 7));
	pCtrl->GetWindowText(tmpStr);
	double nBookQty = str2double(tmpStr);
	double nAdjQty = nBookQty-nOnhand;
	m_wndList.SetItemText(nSel, 9, ToString(nAdjQty));
	

//	if(nAdjQty != 0)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		long nLineID;
		CString szSQL, szStatus;
		nLineID = str2long(m_wndList.GetItemText(nSel, 0));
		szSQL.Format(_T("UPDATE m_inventoryline SET mil_qtybook=%f, mil_qtyadj=%f ") \
			_T("WHERE mil_inventory_id=%ld and mil_inventoryline_id=%ld "), nBookQty, nAdjQty, m_nID, nLineID);
	_tprintf(_T("\r\n%s"), szSQL);
		pMF->ExecSQL(szSQL);	
	}
	return 0;
}
void CStorageAdjustmentDialog::OnAdjustmentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nLineID;
	
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		nLineID = str2long(m_wndList.GetItemText(i, 0));
		double nQtyBook = str2double(m_wndList.GetItemText(i, 8));
	
		if(nQtyBook < 0)
		{
			ShowMessageBox(_T("Quantity on book must be >=0 "));
			m_wndList.SetFocus();
			m_wndList.SetCurSel(i);
			return;
		}

		double nOnhand = str2double(m_wndList.GetItemText(i, 7));
		double nAdjQty = nQtyBook-nOnhand;


		szSQL.Format(_T("UPDATE m_inventoryline SET mil_qtybook=%f, mil_qtyadj=%f ") \
			_T("WHERE mil_inventory_id=%ld and mil_inventoryline_id=%ld "), nQtyBook, nAdjQty, m_nID, nLineID);

		pMF->ExecSQL(szSQL);	

	}

	//pMF->CheckPermission(
	int ret = ShowMessageBox(_T("Do you want to approval order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return;
	
	pMF->BeginWaitCursor();

	szSQL.Format(_T("M_INVENTORY_APPROVAL(%ld, '%s','%s') "), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	
	pMF->EndWaitCursor();

	if(ret > 0){
		ShowMessageBox(_T("Approval completed"));
		m_wndAdjustment.EnableWindow(FALSE);
	}
	else
	{
		ShowMessageBox(_T("Cannot approval order"));
	}
}
 
void CStorageAdjustmentDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate;
	long double nTotal = 0;
	szReportName = _T("Reports\\HMS\\PMS_BIENBANKIEMKETHUOC.RPT");
	if (!rpt.Init(szReportName))
		return;
	rptHeader = rpt.GetReportHeader();
	
	//Member
	szSQL.Format(_T("SELECT mm_id id, mm_title title, mm_name name FROM m_member ORDER BY mm_id"));
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("Title%d"), nIdx);
		rptHeader->SetValue(tmpStr, rs.GetValue(_T("title")));
		tmpStr.Format(_T("Member%d"), nIdx);
		rptHeader->SetValue(tmpStr, rs.GetValue(_T("name")));
		nIdx++;
		rs.MoveNext();
	}
	nIdx = 1;
	szSQL.Format(_T(" SELECT    product_name, ") \
	_T("           product_uomname, ") \
	_T("           product_countryname, ") \
	_T("           product_expdate, ") \
	_T("           product_lotno, ") \
	_T("           mil_qtyonhand, ") \
	_T("           CASE WHEN Nvl(msl_category, 'Z') = 'S' THEN product_saleprice1 ") \
	_T("           ELSE product_taxprice ") \
	_T("           END AS price, ") \
	_T("           CASE WHEN mil_qtyadj < 0 THEN -1 * mil_qtyadj ") \
	_T("           ELSE 0 ") \
	_T("           END excess, ") \
	_T("           CASE WHEN mil_qtyadj > 0 THEN mil_qtyadj ") \
	_T("           ELSE 0 ") \
	_T("           END lack, ") \
	_T("           mil_qtybook ") \
	_T(" FROM      m_inventory ") \
	_T(" LEFT JOIN m_inventoryline ON ( mi_inventory_id = mil_inventory_id ) ") \
	_T(" LEFT JOIN m_storagelist ON ( msl_storage_id = mi_storage_id ) ") \
	_T(" LEFT JOIN m_productitem_view ON ( mil_product_item_id = product_item_id ) ") \
	_T(" WHERE     mil_inventory_id = %ld  AND mi_status = 'A'") \
	_T(" ORDER BY product_name,") \
	_T("   product_expdate, ") \
	_T("   product_unitprice,") \
	_T("   product_saleprice1"), m_nID);
	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(_T("Ng\xE0y: %s"), CDate::Convert(m_szInventoryDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("product_name")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("product_uomname")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("product_countryname")));
			rs.GetValue(_T("product_expdate"), tmpStr);
			rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_lotno")));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("mil_qtyonhand")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("price")));
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("excess")));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("lack")));
			rptDetail->SetValue(_T("12"), rs.GetValue(_T("mil_qtybook")));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	
}

void CStorageAdjustmentDialog::OnPrintStockExportSelect(){
	CPrintForms printer;
	printer.E10_PrintAdjustmentExport(m_nID);
}

void CStorageAdjustmentDialog::OnPrintStockImportSelect(){
	CPrintForms printer;
	printer.E10_PrintAdjustmentImport(m_nID);
}

void CStorageAdjustmentDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
int CStorageAdjustmentDialog::OnAddStorageAdjustmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CStorageAdjustmentDialog::OnEditStorageAdjustmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CStorageAdjustmentDialog::OnDeleteStorageAdjustmentDialog(){
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
 		OnCancelStorageAdjustmentDialog();
 	}
	return 0;
}

int CStorageAdjustmentDialog::OnSaveStorageAdjustmentDialog(){
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
 		//OnStorageAdjustmentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CStorageAdjustmentDialog::OnCancelStorageAdjustmentDialog(){
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
 
int CStorageAdjustmentDialog::OnStorageAdjustmentDialogListLoadData(){
	return 0;
}


void CStorageAdjustmentDialog::AdjustmentQty(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;

	CQuantityAdjustmentDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		double nOnhandQty = str2double(m_wndList.GetItemText(nSel, 6));
		double nBookQty = dlg.m_nRealInventoryQuantity;
		double nAdjQty = nBookQty-nOnhandQty;
		m_wndList.SetItemText(nSel, 8, ToString(nAdjQty));

	}
}

BOOL CStorageAdjustmentDialog::PreTranslateMessage(MSG* pMsg){
	if (pMsg->message == WM_KEYDOWN)
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndList.GetSafeHwnd())
			{
				OnListDblClick();
			}
		}
		if(pMsg->wParam == VK_F2){
			CString szStatus;
			szStatus = GetOrderStatus();
			if(szStatus == _T("O"))
			{
				m_wndName.SetFocus();
				m_wndName.SetSel(0, m_szName.GetLength());
			}
			else
			{
				m_wndList.CancelEditLabel();
				m_wndList.SetAllowEdit(false);
				return FALSE;
			}
		}
	return CGuiDialog::PreTranslateMessage(pMsg);
}

int CStorageAdjustmentDialog::OnCheckLastInventory()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
}

CString CStorageAdjustmentDialog::GetOrderStatus()
{

	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	CString szStatus;
	szStatus.Empty();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT mi_status FROM m_inventory WHERE mi_inventory_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mi_status"), szStatus);
	}
	return szStatus;
}