#include "StorageAdjustmentDialog.h"
#include "MainFrame_E10.h"
#include "QuantityAdjustmentDialog.h"
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
static void _OnIncreaseAccountingSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageAdjustmentDialog* )pWnd)->OnIncreaseAccountingSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIncreaseAccountingSelendokFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnIncreaseAccountingSelendok();
}
/*static void _OnIncreaseAccountingSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnIncreaseAccountingKillfocus();
}*/
/*static void _OnIncreaseAccountingKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnIncreaseAccountingKillfocus();
}*/
static long _OnIncreaseAccountingLoadDataFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnIncreaseAccountingLoadData();
}
/*static void _OnIncreaseAccountingAddNewFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnIncreaseAccountingAddNew();
}*/
static void _OnDecreaseAccountingSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageAdjustmentDialog* )pWnd)->OnDecreaseAccountingSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDecreaseAccountingSelendokFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnDecreaseAccountingSelendok();
}
/*static void _OnDecreaseAccountingSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnDecreaseAccountingKillfocus();
}*/
/*static void _OnDecreaseAccountingKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnDecreaseAccountingKillfocus();
}*/
static long _OnDecreaseAccountingLoadDataFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnDecreaseAccountingLoadData();
}
/*static void _OnDecreaseAccountingAddNewFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnDecreaseAccountingAddNew();
}*/
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
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnManufactureChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnManufactureChange();
} */
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnManufactureSetfocus();} */ 
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnManufactureKillfocus();
} */
static int _OnManufactureCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnManufactureCheckValue();
} 
static void _OnAdjustmentSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnAdjustmentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageAdjustmentDialog *pVw = (CStorageAdjustmentDialog *)pWnd;
	pVw->OnPrintSelect();
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
	m_nDlgWidth = 1019;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CStorageAdjustmentDialog::~CStorageAdjustmentDialog(){
}
void CStorageAdjustmentDialog::OnCreateComponents(){
	m_wndInventoryItems.Create(this, _T("Inventory Items"), 5, 65, 1000, 565);
	m_wndInventoryInformation.Create(this, _T("Inventory Information"), 5, 5, 1000, 60);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 29, 85, 54);
	m_wndStorage.Create(this,90, 29, 390, 54); 
	m_wndInventoryDateLabel.Create(this, _T("Inventoy Date"), 395, 29, 490, 54);
	m_wndInventoryDate.Create(this,495, 29, 620, 54); 
	m_wndLoadData.Create(this, _T("Load Data"), 625, 29, 725, 54);
	m_wndList.Create(this,10, 90, 995, 560); 
	/*m_wndLotNoLabel.Create(this, _T("Lot No"), 7, 570, 107, 595);
	m_wndLotNo.Create(this,112, 570, 212, 595); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 217, 570, 297, 595);
	m_wndExpDate.Create(this,302, 570, 402, 595); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 407, 570, 507, 595);
	m_wndManufacture.Create(this,512, 570, 681, 595); */
	m_wndAdjustment.Create(this, _T("Adjustment"), 686, 570, 786, 595);
	m_wndPrint.Create(this, _T("&Print"), 791, 570, 891, 595);
	m_wndClose.Create(this, _T("&Close"), 896, 570, 996, 595);

}
void CStorageAdjustmentDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	
	m_wndInventoryDate.SetReadOnly(TRUE);
	/*m_wndIncreaseAccounting.SetCheckValue(true);
	m_wndIncreaseAccounting.LimitText(35);
	m_wndDecreaseAccounting.SetCheckValue(true);
	m_wndDecreaseAccounting.LimitText(35);*/
	m_wndLotNo.SetLimitText(35);
	m_wndLotNo.SetCheckValue(true);
	
	m_wndExpDate.SetCheckValue(true);
	m_wndManufacture.SetLimitText(35);
	m_wndManufacture.SetCheckValue(true);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	//m_wndIncreaseAccounting.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndIncreaseAccounting.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	//m_wndDecreaseAccounting.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndDecreaseAccounting.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Item No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("On Hand"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Inventory Qty"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Adjustment Quantity"), CFMT_MONEY, 90);
	m_wndList.GetHeaderControl()->SetItemHeight(1);


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

	/*m_wndLotNo.SetReadOnly(TRUE);
	m_wndManufacture.SetReadOnly(TRUE);
	m_wndExpDate.SetReadOnly(TRUE);*/

}
void CStorageAdjustmentDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndInventoryDate.SetEvent(WE_CHANGE, _OnInventoryDateChangeFnc);
	//m_wndInventoryDate.SetEvent(WE_SETFOCUS, _OnInventoryDateSetfocusFnc);
	//m_wndInventoryDate.SetEvent(WE_KILLFOCUS, _OnInventoryDateKillfocusFnc);
	m_wndInventoryDate.SetEvent(WE_CHECKVALUE, _OnInventoryDateCheckValueFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_SELENDOK, _OnIncreaseAccountingSelendokFnc);
	////m_wndIncreaseAccounting.SetEvent(WE_SETFOCUS, _OnIncreaseAccountingSetfocusFnc);
	////m_wndIncreaseAccounting.SetEvent(WE_KILLFOCUS, _OnIncreaseAccountingKillfocusFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_SELCHANGE, _OnIncreaseAccountingSelectChangeFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_LOADDATA, _OnIncreaseAccountingLoadDataFnc);
	////m_wndIncreaseAccounting.SetEvent(WE_ADDNEW, _OnIncreaseAccountingAddNewFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_SELENDOK, _OnDecreaseAccountingSelendokFnc);
	////m_wndDecreaseAccounting.SetEvent(WE_SETFOCUS, _OnDecreaseAccountingSetfocusFnc);
	////m_wndDecreaseAccounting.SetEvent(WE_KILLFOCUS, _OnDecreaseAccountingKillfocusFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_SELCHANGE, _OnDecreaseAccountingSelectChangeFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_LOADDATA, _OnDecreaseAccountingLoadDataFnc);
	////m_wndDecreaseAccounting.SetEvent(WE_ADDNEW, _OnDecreaseAccountingAddNewFnc);
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	////m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	////m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	////m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	//m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	////m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	////m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	////m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	//m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	////m_wndManufacture.SetEvent(WE_CHANGE, _OnManufactureChangeFnc);
	////m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	////m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	//m_wndManufacture.SetEvent(WE_CHECKVALUE, _OnManufactureCheckValueFnc);
	m_wndAdjustment.SetEvent(WE_CLICK, _OnAdjustmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndInventoryDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	OnListLoadData();
	int nMode = GetMode();
	if(nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);
}
void CStorageAdjustmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndInventoryDate.GetDlgCtrlID(), m_szInventoryDate);
	//DDX_TextEx(pDX, m_wndIncreaseAccounting.GetDlgCtrlID(), m_szIncreaseAccountingKey);
	//DDX_TextEx(pDX, m_wndDecreaseAccounting.GetDlgCtrlID(), m_szDecreaseAccountingKey);
	/*DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);*/

}
void CStorageAdjustmentDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

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
	m_szIncreaseAccountingKey.Empty();
	m_szDecreaseAccountingKey.Empty();
	m_szLotNo.Empty();
	m_szExpDate.Empty();
	m_szManufacture.Empty();

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
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_szInventoryDate = pMF->GetSysDateTime();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndLoadData.EnableWindow(TRUE);
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
void CStorageAdjustmentDialog::OnIncreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnIncreaseAccountingSelendok(){
	 
}
/*void CStorageAdjustmentDialog::OnIncreaseAccountingSetfocus(){
	
}*/
/*void CStorageAdjustmentDialog::OnIncreaseAccountingKillfocus(){
	
}*/
long CStorageAdjustmentDialog::OnIncreaseAccountingLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadAccountList(&m_wndIncreaseAccounting, m_szIncreaseAccountingKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIncreaseAccounting.IsSearchKey() && !m_szIncreaseAccountingKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szIncreaseAccountingKey
};
	m_wndIncreaseAccounting.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIncreaseAccounting.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageAdjustmentDialog::OnIncreaseAccountingAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageAdjustmentDialog::OnDecreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnDecreaseAccountingSelendok(){
	 
}
/*void CStorageAdjustmentDialog::OnDecreaseAccountingSetfocus(){
	
}*/
/*void CStorageAdjustmentDialog::OnDecreaseAccountingKillfocus(){
	
}*/
long CStorageAdjustmentDialog::OnDecreaseAccountingLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadAccountList(&m_wndDecreaseAccounting, m_szDecreaseAccountingKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDecreaseAccounting.IsSearchKey() && !m_szDecreaseAccountingKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDecreaseAccountingKey
};
	m_wndDecreaseAccounting.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDecreaseAccounting.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageAdjustmentDialog::OnDecreaseAccountingAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageAdjustmentDialog::OnLoadDataSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvDate, szCurrDate;

	if(!IsValidateData())
 		return;

	
	szSQL.Format(_T("M_INVENTORY_CREATE(%s)"), m_m_inventoryTbl.FormatSQL());
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0){
		OnListLoadData();
	}
} 
void CStorageAdjustmentDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	CQuantityAdjustmentDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		RecalcQty(nSel);
	}
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
	

	szSQL.Format(_T(" SELECT product_item_id,") \
				_T("   product_code,") \
				_T("   product_name,") \
				_T("   product_uomname,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1,") \
				_T("   product_saleprice2,") \
				_T("   product_saleprice3,") \
				_T("   mil_qtycount,") \
				_T("   mil_qtybook,") \
				_T("   product_unitprice*mil_qtybook AS amount,") \
				_T("   product_unitprice*mil_qtycount AS stockamount,") \
				_T("   product_lotno,") \
				_T("   product_expdate,") \
				_T("   product_manufacturename") \
				_T(" FROM m_inventoryline") \
				_T(" LEFT JOIN m_productitem_view") \
				_T(" ON(product_item_id    =mil_product_item_id)") \
				_T(" WHERE mil_inventory_id=%ld %s ") \
				_T(" AND mil_qtycount     > 0") \
				_T(" ORDER BY product_name,") \
				_T("   product_purchase_uomname,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1"),  str2int(m_szStorageKey), szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_unitPrice")),
			rs.GetValue(_T("product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mil_qtybook")), 
			rs.GetValue(_T("mil_qtycount")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return 0;
}
/*void CStorageAdjustmentDialog::OnLotNoChange(){
	
} */
/*void CStorageAdjustmentDialog::OnLotNoSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnLotNoKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnLotNoCheckValue(){
	return 0;
} 
/*void CStorageAdjustmentDialog::OnExpDateChange(){
	
} */
/*void CStorageAdjustmentDialog::OnExpDateSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnExpDateKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnExpDateCheckValue(){
	return 0;
} 
/*void CStorageAdjustmentDialog::OnManufactureChange(){
	
} */
/*void CStorageAdjustmentDialog::OnManufactureSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnManufactureKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnManufactureCheckValue(){
	return 0;
} 
void CStorageAdjustmentDialog::OnAdjustmentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		
} 
void CStorageAdjustmentDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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

void CStorageAdjustmentDialog::RecalcQty(int nSel){
	long nPrice = ToLong(m_wndList.GetItemText(nSel, 3));
	long nOnhandQty = ToLong(m_wndList.GetItemText(nSel, 4));
	long nAdjustmentQty = m_nInventoryQty - nOnhandQty;
	long double nInventoryAmt = m_nInventoryQty*nPrice;
	long double nAdjustmentAmt = nAdjustmentQty*nPrice;
	m_wndList.SetItemText(nSel, 6, ToString(m_nInventoryQty));
	m_wndList.SetItemText(nSel, 7, ToString(nInventoryAmt));
	m_wndList.SetItemText(nSel, 8, ToString(nAdjustmentQty));
	m_wndList.SetItemText(nSel, 9, ToString(nAdjustmentAmt));
}

BOOL CStorageAdjustmentDialog::PreTranslateMessage(MSG* pMsg){
	if (pMsg->message == WM_KEYDOWN)
		if (pMsg->wParam == VK_SPACE)
			if (pMsg->hwnd == m_wndList.GetSafeHwnd())
			{
				OnListDblClick();
				return CWnd::PreTranslateMessage(pMsg);
			}
	return CGuiDialog::PreTranslateMessage(pMsg);
}