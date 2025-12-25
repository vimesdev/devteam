#include "StorageInventoryControlDialog.h"
#include "MainFrame_E10.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventoryControlDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnInventoyDateChangeFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnInventoyDateChange();
} */
/*static void _OnInventoyDateSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnInventoyDateSetfocus();} */ 
/*static void _OnInventoyDateKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnInventoyDateKillfocus();
} */
static int _OnInventoyDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnInventoyDateCheckValue();
} 
static void _OnIncreaseAccountingSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventoryControlDialog* )pWnd)->OnIncreaseAccountingSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIncreaseAccountingSelendokFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnIncreaseAccountingSelendok();
}
/*static void _OnIncreaseAccountingSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnIncreaseAccountingKillfocus();
}*/
/*static void _OnIncreaseAccountingKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnIncreaseAccountingKillfocus();
}*/
static long _OnIncreaseAccountingLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnIncreaseAccountingLoadData();
}
/*static void _OnIncreaseAccountingAddNewFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnIncreaseAccountingAddNew();
}*/
static void _OnDecreaseAccountingSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageInventoryControlDialog* )pWnd)->OnDecreaseAccountingSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDecreaseAccountingSelendokFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnDecreaseAccountingSelendok();
}
/*static void _OnDecreaseAccountingSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnDecreaseAccountingKillfocus();
}*/
/*static void _OnDecreaseAccountingKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnDecreaseAccountingKillfocus();
}*/
static long _OnDecreaseAccountingLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnDecreaseAccountingLoadData();
}
/*static void _OnDecreaseAccountingAddNewFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnDecreaseAccountingAddNew();
}*/
static void _OnIncludingValuesSelectFnc(CWnd *pWnd){
	 ((CStorageInventoryControlDialog*)pWnd)->OnIncludingValuesSelect();
}
static void _OnAllInStorageSelectFnc(CWnd *pWnd){
	 ((CStorageInventoryControlDialog*)pWnd)->OnAllInStorageSelect();
}
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CStorageInventoryControlDialog *pVw = (CStorageInventoryControlDialog *)pWnd;
	pVw->OnLoadDataSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageInventoryControlDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnManufactureChangeFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnManufactureChange();
} */
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnManufactureSetfocus();} */ 
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CStorageInventoryControlDialog *)pWnd)->OnManufactureKillfocus();
} */
static int _OnManufactureCheckValueFnc(CWnd *pWnd){
	return ((CStorageInventoryControlDialog *)pWnd)->OnManufactureCheckValue();
} 
static void _OnAdjustmentSelectFnc(CWnd *pWnd){
	CStorageInventoryControlDialog *pVw = (CStorageInventoryControlDialog *)pWnd;
	pVw->OnAdjustmentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageInventoryControlDialog *pVw = (CStorageInventoryControlDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageInventoryControlDialog *pVw = (CStorageInventoryControlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageInventoryControlDialogFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnAddStorageInventoryControlDialog();
} 
static int _OnEditStorageInventoryControlDialogFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnEditStorageInventoryControlDialog();
} 
static int _OnDeleteStorageInventoryControlDialogFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnDeleteStorageInventoryControlDialog();
} 
static int _OnSaveStorageInventoryControlDialogFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnSaveStorageInventoryControlDialog();
} 
static int _OnCancelStorageInventoryControlDialogFnc(CWnd *pWnd){
	 return ((CStorageInventoryControlDialog*)pWnd)->OnCancelStorageInventoryControlDialog();
} 
CStorageInventoryControlDialog::CStorageInventoryControlDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CStorageInventoryControlDialog::~CStorageInventoryControlDialog(){
}
void CStorageInventoryControlDialog::OnCreateComponents(){
	m_wndInventoryInformation.Create(this, _T("Inventory Information"), 5, 5, 1000, 90);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 30, 160, 55);
	m_wndStorage.Create(this,165, 30, 525, 55); 
	m_wndInventoyDateLabel.Create(this, _T("Inventoy Date"), 530, 30, 680, 55);
	m_wndInventoyDate.Create(this,685, 30, 835, 55); 
	m_wndIncreaseAccountingLabel.Create(this, _T("Increase Accounting"), 10, 60, 160, 85);
	m_wndIncreaseAccounting.Create(this,165, 60, 265, 85); 
	m_wndDecreaseAccountingLabel.Create(this, _T("Decrease Accounting"), 270, 60, 420, 85);
	m_wndDecreaseAccounting.Create(this,425, 60, 525, 85); 
	m_wndIncludingValues.Create(this, _T("Including Values"), 530, 60, 680, 85);
	m_wndAllInStorage.Create(this, _T("All In Storage"), 685, 60, 835, 85);
	m_wndLoadData.Create(this, _T("Load Data"), 840, 60, 940, 85);
	m_wndList.Create(this,5, 95, 1000, 565); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 5, 570, 105, 595);
	m_wndLotNo.Create(this,110, 570, 210, 595); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 215, 570, 295, 595);
	m_wndExpDate.Create(this,300, 570, 400, 595); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 405, 570, 505, 595);
	m_wndManufacture.Create(this,510, 570, 679, 595); 
	m_wndAdjustment.Create(this, _T("Adjustment"), 690, 570, 790, 595);
	m_wndPrint.Create(this, _T("&Print"), 795, 570, 895, 595);
	m_wndClose.Create(this, _T("&Close"), 900, 570, 1000, 595);

}
void CStorageInventoryControlDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndInventoyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInventoyDate.SetCheckValue(true);
	m_wndIncreaseAccounting.SetCheckValue(true);
	m_wndIncreaseAccounting.LimitText(35);
	m_wndDecreaseAccounting.SetCheckValue(true);
	m_wndDecreaseAccounting.LimitText(35);
	m_wndLotNo.SetLimitText(35);
	m_wndExpDate.SetReadOnly(TRUE);
	m_wndManufacture.SetLimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndIncreaseAccounting.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIncreaseAccounting.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDecreaseAccounting.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDecreaseAccounting.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Item No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("On Hand"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(6, _T("Inventory Qty"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(7, _T("Inventory Amount"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(8, _T("Adjustment Quantity"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(9, _T("Adjustment Amount"), CFMT_NUMBER, 90);

}
void CStorageInventoryControlDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndInventoyDate.SetEvent(WE_CHANGE, _OnInventoyDateChangeFnc);
	//m_wndInventoyDate.SetEvent(WE_SETFOCUS, _OnInventoyDateSetfocusFnc);
	//m_wndInventoyDate.SetEvent(WE_KILLFOCUS, _OnInventoyDateKillfocusFnc);
	m_wndInventoyDate.SetEvent(WE_CHECKVALUE, _OnInventoyDateCheckValueFnc);
	m_wndIncreaseAccounting.SetEvent(WE_SELENDOK, _OnIncreaseAccountingSelendokFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_SETFOCUS, _OnIncreaseAccountingSetfocusFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_KILLFOCUS, _OnIncreaseAccountingKillfocusFnc);
	m_wndIncreaseAccounting.SetEvent(WE_SELCHANGE, _OnIncreaseAccountingSelectChangeFnc);
	m_wndIncreaseAccounting.SetEvent(WE_LOADDATA, _OnIncreaseAccountingLoadDataFnc);
	//m_wndIncreaseAccounting.SetEvent(WE_ADDNEW, _OnIncreaseAccountingAddNewFnc);
	m_wndDecreaseAccounting.SetEvent(WE_SELENDOK, _OnDecreaseAccountingSelendokFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_SETFOCUS, _OnDecreaseAccountingSetfocusFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_KILLFOCUS, _OnDecreaseAccountingKillfocusFnc);
	m_wndDecreaseAccounting.SetEvent(WE_SELCHANGE, _OnDecreaseAccountingSelectChangeFnc);
	m_wndDecreaseAccounting.SetEvent(WE_LOADDATA, _OnDecreaseAccountingLoadDataFnc);
	//m_wndDecreaseAccounting.SetEvent(WE_ADDNEW, _OnDecreaseAccountingAddNewFnc);
	m_wndIncludingValues.SetEvent(WE_CLICK, _OnIncludingValuesSelectFnc);
	m_wndAllInStorage.SetEvent(WE_CLICK, _OnAllInStorageSelectFnc);
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	//m_wndManufacture.SetEvent(WE_CHANGE, _OnManufactureChangeFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_CHECKVALUE, _OnManufactureCheckValueFnc);
	m_wndAdjustment.SetEvent(WE_CLICK, _OnAdjustmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CStorageInventoryControlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndInventoyDate.GetDlgCtrlID(), m_szInventoyDate);
	DDX_TextEx(pDX, m_wndIncreaseAccounting.GetDlgCtrlID(), m_szIncreaseAccountingKey);
	DDX_TextEx(pDX, m_wndDecreaseAccounting.GetDlgCtrlID(), m_szDecreaseAccountingKey);
	DDX_Check(pDX, m_wndIncludingValues.GetDlgCtrlID(), m_bIncludingValues);
	DDX_Check(pDX, m_wndAllInStorage.GetDlgCtrlID(), m_bAllInStorage);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);

}
void CStorageInventoryControlDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageInventoryControlDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageInventoryControlDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szInventoyDate.Empty();
	m_szIncreaseAccountingKey.Empty();
	m_szDecreaseAccountingKey.Empty();
	m_bIncludingValues=FALSE;
	m_bAllInStorage=FALSE;
	m_szLotNo.Empty();
	m_szExpDate.Empty();
	m_szManufacture.Empty();

}
int CStorageInventoryControlDialog::SetMode(int nMode){
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
void CStorageInventoryControlDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnStorageSelendok(){
	 
}
/*void CStorageInventoryControlDialog::OnStorageSetfocus(){
	
}*/
/*void CStorageInventoryControlDialog::OnStorageKillfocus(){
	
}*/
long CStorageInventoryControlDialog::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CStorageInventoryControlDialog::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageInventoryControlDialog::OnInventoyDateChange(){
	
} */
/*void CStorageInventoryControlDialog::OnInventoyDateSetfocus(){
	
} */
/*void CStorageInventoryControlDialog::OnInventoyDateKillfocus(){
	
} */
int CStorageInventoryControlDialog::OnInventoyDateCheckValue(){
	return 0;
} 
void CStorageInventoryControlDialog::OnIncreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnIncreaseAccountingSelendok(){
	 
}
/*void CStorageInventoryControlDialog::OnIncreaseAccountingSetfocus(){
	
}*/
/*void CStorageInventoryControlDialog::OnIncreaseAccountingKillfocus(){
	
}*/
long CStorageInventoryControlDialog::OnIncreaseAccountingLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CStorageInventoryControlDialog::OnIncreaseAccountingAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageInventoryControlDialog::OnDecreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnDecreaseAccountingSelendok(){
	 
}
/*void CStorageInventoryControlDialog::OnDecreaseAccountingSetfocus(){
	
}*/
/*void CStorageInventoryControlDialog::OnDecreaseAccountingKillfocus(){
	
}*/
long CStorageInventoryControlDialog::OnDecreaseAccountingLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CStorageInventoryControlDialog::OnDecreaseAccountingAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
	void CStorageInventoryControlDialog::OnIncludingValuesSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CStorageInventoryControlDialog::OnAllInStorageSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CStorageInventoryControlDialog::OnLoadDataSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnListDblClick(){
	
} 
void CStorageInventoryControlDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageInventoryControlDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CStorageInventoryControlDialog::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ItemNo")), 
			rs.GetValue(_T("ItemName")), 
			rs.GetValue(_T("Uom")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("OnHand")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("InventoryQty")), 
			rs.GetValue(_T("InventoryAmount")), 
			rs.GetValue(_T("AdjustmentQuantity")), 
			rs.GetValue(_T("AdjustmentAmount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CStorageInventoryControlDialog::OnLotNoChange(){
	
} */
/*void CStorageInventoryControlDialog::OnLotNoSetfocus(){
	
} */
/*void CStorageInventoryControlDialog::OnLotNoKillfocus(){
	
} */
int CStorageInventoryControlDialog::OnLotNoCheckValue(){
	return 0;
} 
/*void CStorageInventoryControlDialog::OnExpDateChange(){
	
} */
/*void CStorageInventoryControlDialog::OnExpDateSetfocus(){
	
} */
/*void CStorageInventoryControlDialog::OnExpDateKillfocus(){
	
} */
int CStorageInventoryControlDialog::OnExpDateCheckValue(){
	return 0;
} 
/*void CStorageInventoryControlDialog::OnManufactureChange(){
	
} */
/*void CStorageInventoryControlDialog::OnManufactureSetfocus(){
	
} */
/*void CStorageInventoryControlDialog::OnManufactureKillfocus(){
	
} */
int CStorageInventoryControlDialog::OnManufactureCheckValue(){
	return 0;
} 
void CStorageInventoryControlDialog::OnAdjustmentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageInventoryControlDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageInventoryControlDialog::OnAddStorageInventoryControlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageInventoryControlDialog::OnEditStorageInventoryControlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageInventoryControlDialog::OnDeleteStorageInventoryControlDialog(){
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
 		OnCancelStorageInventoryControlDialog();
 	}
	return 0;
}
int CStorageInventoryControlDialog::OnSaveStorageInventoryControlDialog(){
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
 		//OnStorageInventoryControlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageInventoryControlDialog::OnCancelStorageInventoryControlDialog(){
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
int CStorageInventoryControlDialog::OnStorageInventoryControlDialogListLoadData(){
	return 0;
}
