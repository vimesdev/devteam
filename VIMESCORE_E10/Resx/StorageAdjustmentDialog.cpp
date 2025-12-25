#include "StorageAdjustmentDialog.h"
#include "MainFrm.h"
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
/*static void _OnInventoyDateChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoyDateChange();
} */
/*static void _OnInventoyDateSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoyDateSetfocus();} */ 
/*static void _OnInventoyDateKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnInventoyDateKillfocus();
} */
static int _OnInventoyDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnInventoyDateCheckValue();
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
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CStorageAdjustmentDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CStorageAdjustmentDialog *)pWnd)->OnNameCheckValue();
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
CStorageAdjustmentDialog::CStorageAdjustmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

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
	m_wndStorage.Create(this,115, 30, 660, 55); 
	m_wndInventoyDateLabel.Create(this, _T("Inventoy Date"), 665, 30, 765, 55);
	m_wndInventoyDate.Create(this,770, 30, 895, 55); 
	m_wndLoadData.Create(this, _T("Load Data"), 900, 30, 995, 55);
	m_wndList.Create(this,10, 90, 995, 560); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 570, 110, 595);
	m_wndName.Create(this,115, 570, 660, 595); 
	m_wndAdjustment.Create(this, _T("Adjustment"), 665, 570, 770, 595);
	m_wndPrint.Create(this, _T("&Print"), 775, 570, 880, 595);
	m_wndClose.Create(this, _T("&Close"), 885, 570, 990, 595);

}
void CStorageAdjustmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndInventoyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInventoyDate.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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
	m_m_inventoryTbl.SetTableName(_T("m_inventory"));
	m_m_inventoryTbl.AddField(_T("MI_INVENTORY_ID"), dfLong); 
	m_m_inventoryTbl.AddField(_T("MI_CLIENT_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_ORG_ID"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_ISACTIVE"), dfText, 1); 
	m_m_inventoryTbl.AddField(_T("MI_CREATEDDATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_CREATEDBY"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_UPDATEDDATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_UPDATEDBY"), dfText, 20); 
	m_m_inventoryTbl.AddField(_T("MI_ORDERNO"), dfText, 15); 
	m_m_inventoryTbl.AddField(_T("MI_DESCRIPTION"), dfText, 254); 
	m_m_inventoryTbl.AddField(_T("MI_STORAGE_ID"), dfLong); 
	m_m_inventoryTbl.AddField(_T("MI_DATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_POSTED"), dfText, 60); 
	m_m_inventoryTbl.AddField(_T("MI_POSTEDDATE"), dfDateTime); 
	m_m_inventoryTbl.AddField(_T("MI_PROCESSED"), dfText, 1); 
	m_m_inventoryTbl.AddField(_T("MI_STATUS"), dfText, 1); 
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

}
void CStorageAdjustmentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdjustment.SetEvent(WE_CLICK, _OnAdjustmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CStorageAdjustmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndInventoyDate.GetDlgCtrlID(), m_szInventoyDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CStorageAdjustmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageAdjustmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CStorageAdjustmentDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szInventoyDate.Empty();
	m_szName.Empty();

}
int CStorageAdjustmentDialog::SetMode(int nMode){
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
void CStorageAdjustmentDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnStorageSelendok(){
	 
}
/*void CStorageAdjustmentDialog::OnStorageSetfocus(){
	
}*/
/*void CStorageAdjustmentDialog::OnStorageKillfocus(){
	
}*/
long CStorageAdjustmentDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CStorageAdjustmentDialog::OnInventoyDateChange(){
	
} */
/*void CStorageAdjustmentDialog::OnInventoyDateSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnInventoyDateKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnInventoyDateCheckValue(){
	return 0;
} 
void CStorageAdjustmentDialog::OnLoadDataSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnListDblClick(){
	
} 
void CStorageAdjustmentDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStorageAdjustmentDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CStorageAdjustmentDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CStorageAdjustmentDialog::OnNameChange(){
	
} */
/*void CStorageAdjustmentDialog::OnNameSetfocus(){
	
} */
/*void CStorageAdjustmentDialog::OnNameKillfocus(){
	
} */
int CStorageAdjustmentDialog::OnNameCheckValue(){
	return 0;
} 
void CStorageAdjustmentDialog::OnAdjustmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageAdjustmentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStorageAdjustmentDialog::OnAddStorageAdjustmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageAdjustmentDialog::OnEditStorageAdjustmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageAdjustmentDialog::OnDeleteStorageAdjustmentDialog(){
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
 		OnCancelStorageAdjustmentDialog();
 	}
	return 0;
}
int CStorageAdjustmentDialog::OnSaveStorageAdjustmentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_m_inventoryTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_m_inventoryTbl.GetUpdateSQL(_T("createdby,createddate"));
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
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CStorageAdjustmentDialog::OnStorageAdjustmentDialogListLoadData(){
	return 0;
}
