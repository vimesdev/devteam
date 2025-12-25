#include "HMSOperationMaterialDialog.h"
#include "MainFrm.h"
/*static void _OnOperationNameChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOperationNameChange();
} */
/*static void _OnOperationNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOperationNameSetfocus();} */ 
/*static void _OnOperationNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOperationNameKillfocus();
} */
static int _OnOperationNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnOperationNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationMaterialDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnMaxQuantityCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialDialog *pVw = (CHMSOperationMaterialDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnAddHMSOperationMaterialDialog();
} 
static int _OnEditHMSOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnEditHMSOperationMaterialDialog();
} 
static int _OnDeleteHMSOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnDeleteHMSOperationMaterialDialog();
} 
static int _OnSaveHMSOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnSaveHMSOperationMaterialDialog();
} 
static int _OnCancelHMSOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialDialog*)pWnd)->OnCancelHMSOperationMaterialDialog();
} 
CHMSOperationMaterialDialog::CHMSOperationMaterialDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CHMSOperationMaterialDialog::~CHMSOperationMaterialDialog(){
}
void CHMSOperationMaterialDialog::OnCreateComponents(){
	m_wndDrugEntry.Create(this, _T("Drug Entry"), 5, 35, 600, 465);
	m_wndOperationNameLabel.Create(this, _T("Operation Name"), 5, 5, 120, 30);
	m_wndOperationName.Create(this,125, 5, 600, 30); 
	m_wndList.Create(this,10, 60, 595, 370); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 375, 110, 400);
	m_wndStock.Create(this,115, 375, 415, 400); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 420, 375, 490, 400);
	m_wndOrderDate.Create(this,495, 375, 595, 400); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 10, 405, 110, 430);
	m_wndName.Create(this,115, 405, 415, 430); 
	m_wndQtyLabel.Create(this, _T("Qty"), 420, 405, 490, 430);
	m_wndQty.Create(this,495, 405, 535, 430); 
	m_wndMaxQuantity.Create(this,540, 405, 595, 430); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 435, 110, 460);
	m_wndNote.Create(this,115, 435, 595, 460); 
	m_wndAdd.Create(this, _T("&Add"), 5, 470, 80, 495);
	m_wndEdit.Create(this, _T("&Edit"), 85, 470, 160, 495);
	m_wndDelete.Create(this, _T("&Delete"), 165, 470, 240, 495);
	m_wndSave.Create(this, _T("&Save"), 245, 470, 320, 495);
	m_wndCancel.Create(this, _T("&Cancel"), 325, 470, 400, 495);
	m_wndClose.Create(this, _T("&Close"), 524, 470, 599, 495);

}
void CHMSOperationMaterialDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOperationName.SetLimitText(35);
	m_wndOperationName.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndNote.SetLimitText(128);
	m_wndNote.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Note"), CFMT_TEXT, 180);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Drug Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(3, _T("Generic"), CFMT_TEXT, 150);
	m_hms_pharmacyorderTbl.SetTableName(_T("hms_pharmacyorder"));
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_roomid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_bedid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_receptidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuedate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuer"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_status"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_type"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_stockid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_sheetidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_advice"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.SetTableName(_T("hms_pharmacyorderln"));
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderno"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_idx"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_itemid"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_stockline"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_name"), dfText, 35); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_unit"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_issueqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_return"), dfText, 1); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_usage"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_dose"), dfText, 35); 

}
void CHMSOperationMaterialDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOperationName.SetEvent(WE_CHANGE, _OnOperationNameChangeFnc);
	//m_wndOperationName.SetEvent(WE_SETFOCUS, _OnOperationNameSetfocusFnc);
	//m_wndOperationName.SetEvent(WE_KILLFOCUS, _OnOperationNameKillfocusFnc);
	m_wndOperationName.SetEvent(WE_CHECKVALUE, _OnOperationNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSOperationMaterialDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationName);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSOperationMaterialDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_stockid"), m_szStockKey);
	rs.GetValue(_T("hpol_name"), m_szNameKey);
	rs.GetValue(_T("hpol_orderqty"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szNote);

}
void CHMSOperationMaterialDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_stockid"), m_szStockKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_name"), m_szNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpo_usage"), m_szNote);

}
void CHMSOperationMaterialDialog::SetDefaultValues(){

	m_szOperationName.Empty();
	m_szStockKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szNote.Empty();

}
int CHMSOperationMaterialDialog::SetMode(int nMode){
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
/*void CHMSOperationMaterialDialog::OnOperationNameChange(){
	
} */
/*void CHMSOperationMaterialDialog::OnOperationNameSetfocus(){
	
} */
/*void CHMSOperationMaterialDialog::OnOperationNameKillfocus(){
	
} */
int CHMSOperationMaterialDialog::OnOperationNameCheckValue(){
	return 0;
} 
void CHMSOperationMaterialDialog::OnListDblClick(){
	
} 
void CHMSOperationMaterialDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationMaterialDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSOperationMaterialDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnStockSelendok(){
	 
}
/*void CHMSOperationMaterialDialog::OnStockSetfocus(){
	
}*/
/*void CHMSOperationMaterialDialog::OnStockKillfocus(){
	
}*/
long CHMSOperationMaterialDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStockKey
};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialDialog::OnOrderDateChange(){
	
} */
/*void CHMSOperationMaterialDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationMaterialDialog::OnOrderDateKillfocus(){
	
} */
int CHMSOperationMaterialDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationMaterialDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnNameSelendok(){
	 
}
/*void CHMSOperationMaterialDialog::OnNameSetfocus(){
	
}*/
/*void CHMSOperationMaterialDialog::OnNameKillfocus(){
	
}*/
long CHMSOperationMaterialDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("drugname/cnt")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("generic")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialDialog::OnQtyChange(){
	
} */
/*void CHMSOperationMaterialDialog::OnQtySetfocus(){
	
} */
/*void CHMSOperationMaterialDialog::OnQtyKillfocus(){
	
} */
int CHMSOperationMaterialDialog::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSOperationMaterialDialog::OnMaxQuantityChange(){
	
} */
/*void CHMSOperationMaterialDialog::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSOperationMaterialDialog::OnMaxQuantityKillfocus(){
	
} */
int CHMSOperationMaterialDialog::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CHMSOperationMaterialDialog::OnNoteChange(){
	
} */
/*void CHMSOperationMaterialDialog::OnNoteSetfocus(){
	
} */
/*void CHMSOperationMaterialDialog::OnNoteKillfocus(){
	
} */
int CHMSOperationMaterialDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSOperationMaterialDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialDialog::OnAddHMSOperationMaterialDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationMaterialDialog::OnEditHMSOperationMaterialDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationMaterialDialog::OnDeleteHMSOperationMaterialDialog(){
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
 		OnCancelHMSOperationMaterialDialog();
 	}
	return 0;
}
int CHMSOperationMaterialDialog::OnSaveHMSOperationMaterialDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_pharmacyorderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_pharmacyorderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSOperationMaterialDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationMaterialDialog::OnCancelHMSOperationMaterialDialog(){
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
int CHMSOperationMaterialDialog::OnHMSOperationMaterialDialogListLoadData(){
	return 0;
}
