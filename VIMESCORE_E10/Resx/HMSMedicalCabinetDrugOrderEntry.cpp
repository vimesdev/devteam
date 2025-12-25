#include "HMSMedicalCabinetDrugOrderEntry.h"
#include "MainFrm.h"
static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrugOrderEntry *pVw = (CHMSMedicalCabinetDrugOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrugOrderEntry *pVw = (CHMSMedicalCabinetDrugOrderEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnAddHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnEditHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnEditHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnDeleteHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnDeleteHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnSaveHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnSaveHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnCancelHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnCancelHMSMedicalCabinetDrugOrderEntry();
} 
CHMSMedicalCabinetDrugOrderEntry::CHMSMedicalCabinetDrugOrderEntry(){

	m_nDlgWidth = 565;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSMedicalCabinetDrugOrderEntry::~CHMSMedicalCabinetDrugOrderEntry(){
}
void CHMSMedicalCabinetDrugOrderEntry::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Patient Name"), 5, 5, 105, 30);
	m_wndDocumentNo.Create(this,110, 5, 370, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 375, 5, 450, 30);
	m_wndOrderDate.Create(this,455, 5, 550, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 35, 105, 60);
	m_wndName.Create(this,110, 35, 370, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 375, 35, 450, 60);
	m_wndQty.Create(this,455, 35, 495, 60); 
	m_wndMaxQuantity.Create(this,500, 35, 550, 60); 
	m_wndSave.Create(this, _T("&Save"), 455, 66, 520, 91);
	m_wndClose.Create(this, _T("X"), 525, 66, 550, 91);

}
void CHMSMedicalCabinetDrugOrderEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.LimitText(1024);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);





}
void CHMSMedicalCabinetDrugOrderEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetEvent(WE_SELENDOK, _OnDocumentNoSelendokFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_SELCHANGE, _OnDocumentNoSelectChangeFnc);
	m_wndDocumentNo.SetEvent(WE_LOADDATA, _OnDocumentNoLoadDataFnc);
	//m_wndDocumentNo.SetEvent(WE_ADDNEW, _OnDocumentNoAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSMedicalCabinetDrugOrderEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSMedicalCabinetDrugOrderEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSMedicalCabinetDrugOrderEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSMedicalCabinetDrugOrderEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSMedicalCabinetDrugOrderEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSMedicalCabinetDrugOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNoKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);

}
void CHMSMedicalCabinetDrugOrderEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetDrugOrderEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinetDrugOrderEntry::SetDefaultValues(){

	m_szDocumentNoKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;

}
int CHMSMedicalCabinetDrugOrderEntry::SetMode(int nMode){
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
void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSelendok(){
	 
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDocumentNo.IsSearchKey() && !m_szDocumentNoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDocumentNoKey
};
	m_wndDocumentNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocumentNo.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrugOrderEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnNameSelendok(){
	 
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnNameLoadData(){
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
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtyChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtySetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtyKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrugOrderEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetDrugOrderEntry::OnAddHMSMedicalCabinetDrugOrderEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMedicalCabinetDrugOrderEntry::OnEditHMSMedicalCabinetDrugOrderEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetDrugOrderEntry::OnDeleteHMSMedicalCabinetDrugOrderEntry(){
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
 		OnCancelHMSMedicalCabinetDrugOrderEntry();
 	}
	return 0;
}
int CHMSMedicalCabinetDrugOrderEntry::OnSaveHMSMedicalCabinetDrugOrderEntry(){
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
 		//OnHMSMedicalCabinetDrugOrderEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSMedicalCabinetDrugOrderEntry::OnCancelHMSMedicalCabinetDrugOrderEntry(){
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
int CHMSMedicalCabinetDrugOrderEntry::OnHMSMedicalCabinetDrugOrderEntryListLoadData(){
	return 0;
}
