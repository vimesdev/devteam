#include "HMSPatientMaterialOperationEntry.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnStorageAddNew();
}*/
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnPatientNameAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnOperationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnOperationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationSelendok();
}
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationKillfocus();
}*/
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationKillfocus();
}*/
static long _OnOperationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationLoadData();
}
/*static void _OnOperationAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOperationAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientMaterialOperationEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientMaterialOperationEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientMaterialOperationEntry *pVw = (CHMSPatientMaterialOperationEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientMaterialOperationEntry *pVw = (CHMSPatientMaterialOperationEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnAddHMSPatientMaterialOperationEntry();
} 
static int _OnEditHMSPatientMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnEditHMSPatientMaterialOperationEntry();
} 
static int _OnDeleteHMSPatientMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnDeleteHMSPatientMaterialOperationEntry();
} 
static int _OnSaveHMSPatientMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnSaveHMSPatientMaterialOperationEntry();
} 
static int _OnCancelHMSPatientMaterialOperationEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientMaterialOperationEntry*)pWnd)->OnCancelHMSPatientMaterialOperationEntry();
} 
CHMSPatientMaterialOperationEntry::CHMSPatientMaterialOperationEntry(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPatientMaterialOperationEntry::~CHMSPatientMaterialOperationEntry(){
}
void CHMSPatientMaterialOperationEntry::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 5, 105, 30);
	m_wndStorage.Create(this,110, 5, 390, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 390, 60); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 395, 35, 470, 60);
	m_wndDocumentNo.Create(this,475, 35, 575, 60); 
	m_wndOperationLabel.Create(this, _T("Operation"), 5, 65, 105, 90);
	m_wndOperation.Create(this,110, 65, 575, 90); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 395, 6, 470, 31);
	m_wndOrderDate.Create(this,475, 5, 575, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 95, 105, 120);
	m_wndName.Create(this,110, 95, 390, 120); 
	m_wndQtyLabel.Create(this, _T("Qty"), 395, 95, 470, 120);
	m_wndQty.Create(this,475, 95, 515, 120); 
	m_wndMaxQuantity.Create(this,520, 95, 575, 120); 
	m_wndSave.Create(this, _T("&Save"), 475, 125, 540, 150);
	m_wndClose.Create(this, _T("X"), 545, 125, 575, 150);

}
void CHMSPatientMaterialOperationEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(1024);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOperation.SetCheckValue(true);
	m_wndOperation.LimitText(1024);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);









}
void CHMSPatientMaterialOperationEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndOperation.SetEvent(WE_SELENDOK, _OnOperationSelendokFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_SELCHANGE, _OnOperationSelectChangeFnc);
	m_wndOperation.SetEvent(WE_LOADDATA, _OnOperationLoadDataFnc);
	//m_wndOperation.SetEvent(WE_ADDNEW, _OnOperationAddNewFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientMaterialOperationEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientMaterialOperationEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientMaterialOperationEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientMaterialOperationEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientMaterialOperationEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientMaterialOperationEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperationKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);

}
void CHMSPatientMaterialOperationEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientMaterialOperationEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientMaterialOperationEntry::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szPatientNameKey.Empty();
	m_szDocumentNo.Empty();
	m_szOperationKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;

}
int CHMSPatientMaterialOperationEntry::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMSPatientMaterialOperationEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnStorageSelendok(){
	 
}
/*void CHMSPatientMaterialOperationEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnStorageKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnStorageLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientMaterialOperationEntry::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientMaterialOperationEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnPatientNameSelendok(){
	 
}
/*void CHMSPatientMaterialOperationEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && !m_szPatientNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPatientNameKey
};
	m_wndPatientName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientMaterialOperationEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientMaterialOperationEntry::OnDocumentNoChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnOperationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnOperationSelendok(){
	 
}
/*void CHMSPatientMaterialOperationEntry::OnOperationSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnOperationKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnOperationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperation.IsSearchKey() && !m_szOperationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOperationKey
};
	m_wndOperation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientMaterialOperationEntry::OnOperationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientMaterialOperationEntry::OnOrderDateChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnNameSelendok(){
	 
}
/*void CHMSPatientMaterialOperationEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPatientMaterialOperationEntry::OnNameKillfocus(){
	
}*/
long CHMSPatientMaterialOperationEntry::OnNameLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientMaterialOperationEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtyChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnQtyKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPatientMaterialOperationEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSPatientMaterialOperationEntry::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPatientMaterialOperationEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientMaterialOperationEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientMaterialOperationEntry::OnAddHMSPatientMaterialOperationEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientMaterialOperationEntry::OnEditHMSPatientMaterialOperationEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientMaterialOperationEntry::OnDeleteHMSPatientMaterialOperationEntry(){
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
 		OnCancelHMSPatientMaterialOperationEntry();
 	}
	return 0;
}
int CHMSPatientMaterialOperationEntry::OnSaveHMSPatientMaterialOperationEntry(){
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
 		//OnHMSPatientMaterialOperationEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientMaterialOperationEntry::OnCancelHMSPatientMaterialOperationEntry(){
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
int CHMSPatientMaterialOperationEntry::OnHMSPatientMaterialOperationEntryListLoadData(){
	return 0;
}
