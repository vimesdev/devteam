#include "HMSPatientDrugMaterialBedEntry.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugMaterialBedEntry* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnStorageAddNew();
}*/
static void _OnMultipleDaySelectFnc(CWnd *pWnd){
	 ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnMultipleDaySelect();
}
/*static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDaysChange();
} */
/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDaysCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugMaterialBedEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnPatientNameAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDrugMaterialBedEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDrugMaterialBedEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientDrugMaterialBedEntry *pVw = (CHMSPatientDrugMaterialBedEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientDrugMaterialBedEntry *pVw = (CHMSPatientDrugMaterialBedEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientDrugMaterialBedEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnAddHMSPatientDrugMaterialBedEntry();
} 
static int _OnEditHMSPatientDrugMaterialBedEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnEditHMSPatientDrugMaterialBedEntry();
} 
static int _OnDeleteHMSPatientDrugMaterialBedEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnDeleteHMSPatientDrugMaterialBedEntry();
} 
static int _OnSaveHMSPatientDrugMaterialBedEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnSaveHMSPatientDrugMaterialBedEntry();
} 
static int _OnCancelHMSPatientDrugMaterialBedEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientDrugMaterialBedEntry*)pWnd)->OnCancelHMSPatientDrugMaterialBedEntry();
} 
CHMSPatientDrugMaterialBedEntry::CHMSPatientDrugMaterialBedEntry(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPatientDrugMaterialBedEntry::~CHMSPatientDrugMaterialBedEntry(){
}
void CHMSPatientDrugMaterialBedEntry::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Storage"), 395, 5, 470, 30);
	m_wndStorage.Create(this,475, 5, 575, 30); 
	m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 105, 30);
	m_wndDays.Create(this,110, 5, 160, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 105, 60);
	m_wndPatientName.Create(this,110, 35, 390, 60); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 395, 35, 470, 60);
	m_wndDocumentNo.Create(this,475, 35, 575, 60); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 165, 5, 255, 30);
	m_wndOrderDate.Create(this,260, 5, 390, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 65, 105, 90);
	m_wndName.Create(this,110, 65, 390, 90); 
	m_wndQtyLabel.Create(this, _T("Qty"), 395, 65, 470, 90);
	m_wndQty.Create(this,475, 65, 515, 90); 
	m_wndMaxQuantity.Create(this,520, 65, 575, 90); 
	m_wndSave.Create(this, _T("&Save"), 475, 95, 540, 120);
	m_wndClose.Create(this, _T("X"), 545, 95, 575, 120);

}
void CHMSPatientDrugMaterialBedEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndDays.SetLimitText(1024);
	m_wndDays.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(1024);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);







}
void CHMSPatientDrugMaterialBedEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
	//m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDrugMaterialBedEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDrugMaterialBedEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDrugMaterialBedEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDrugMaterialBedEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDrugMaterialBedEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDrugMaterialBedEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);

}
void CHMSPatientDrugMaterialBedEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDrugMaterialBedEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDrugMaterialBedEntry::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_bMultipleDay=FALSE;
	m_nDays=0;
	m_szPatientNameKey.Empty();
	m_szDocumentNo.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;

}
int CHMSPatientDrugMaterialBedEntry::SetMode(int nMode){
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
void CHMSPatientDrugMaterialBedEntry::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugMaterialBedEntry::OnStorageSelendok(){
	 
}
/*void CHMSPatientDrugMaterialBedEntry::OnStorageSetfocus(){
	
}*/
/*void CHMSPatientDrugMaterialBedEntry::OnStorageKillfocus(){
	
}*/
long CHMSPatientDrugMaterialBedEntry::OnStorageLoadData(){
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
/*void CHMSPatientDrugMaterialBedEntry::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSPatientDrugMaterialBedEntry::OnMultipleDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientDrugMaterialBedEntry::OnDaysChange(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnDaysSetfocus(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnDaysKillfocus(){
	
} */
int CHMSPatientDrugMaterialBedEntry::OnDaysCheckValue(){
	return 0;
} 
void CHMSPatientDrugMaterialBedEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugMaterialBedEntry::OnPatientNameSelendok(){
	 
}
/*void CHMSPatientDrugMaterialBedEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSPatientDrugMaterialBedEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSPatientDrugMaterialBedEntry::OnPatientNameLoadData(){
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
/*void CHMSPatientDrugMaterialBedEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDrugMaterialBedEntry::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugMaterialBedEntry::OnOrderDateChange(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPatientDrugMaterialBedEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPatientDrugMaterialBedEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugMaterialBedEntry::OnNameSelendok(){
	 
}
/*void CHMSPatientDrugMaterialBedEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPatientDrugMaterialBedEntry::OnNameKillfocus(){
	
}*/
long CHMSPatientDrugMaterialBedEntry::OnNameLoadData(){
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
/*void CHMSPatientDrugMaterialBedEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnQtyChange(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnQtySetfocus(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnQtyKillfocus(){
	
} */
int CHMSPatientDrugMaterialBedEntry::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPatientDrugMaterialBedEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPatientDrugMaterialBedEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSPatientDrugMaterialBedEntry::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPatientDrugMaterialBedEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDrugMaterialBedEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDrugMaterialBedEntry::OnAddHMSPatientDrugMaterialBedEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDrugMaterialBedEntry::OnEditHMSPatientDrugMaterialBedEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDrugMaterialBedEntry::OnDeleteHMSPatientDrugMaterialBedEntry(){
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
 		OnCancelHMSPatientDrugMaterialBedEntry();
 	}
	return 0;
}
int CHMSPatientDrugMaterialBedEntry::OnSaveHMSPatientDrugMaterialBedEntry(){
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
 		//OnHMSPatientDrugMaterialBedEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDrugMaterialBedEntry::OnCancelHMSPatientDrugMaterialBedEntry(){
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
int CHMSPatientDrugMaterialBedEntry::OnHMSPatientDrugMaterialBedEntryListLoadData(){
	return 0;
}
