#include "CStorageMovementList.h"
#include "MainFrm.h"
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCStorageMovementList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CCStorageMovementList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCStorageMovementList* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CCStorageMovementList *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToStorageAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCStorageMovementList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCStorageMovementList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CCStorageMovementList *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCStorageMovementList *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCStorageMovementList *pVw = (CCStorageMovementList *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	 ((CCStorageMovementList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	 ((CCStorageMovementList*)pWnd)->OnOpeningSelect();
}
static void _OnSendedSelectFnc(CWnd *pWnd){
	 ((CCStorageMovementList*)pWnd)->OnSendedSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	 ((CCStorageMovementList*)pWnd)->OnApprovedSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CCStorageMovementList *pVw = (CCStorageMovementList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCStorageMovementList *pVw = (CCStorageMovementList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCStorageMovementList *pVw = (CCStorageMovementList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCStorageMovementList *pVw = (CCStorageMovementList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddCStorageMovementListFnc(CWnd *pWnd){
	 return ((CCStorageMovementList*)pWnd)->OnAddCStorageMovementList();
} 
static int _OnEditCStorageMovementListFnc(CWnd *pWnd){
	 return ((CCStorageMovementList*)pWnd)->OnEditCStorageMovementList();
} 
static int _OnDeleteCStorageMovementListFnc(CWnd *pWnd){
	 return ((CCStorageMovementList*)pWnd)->OnDeleteCStorageMovementList();
} 
static int _OnSaveCStorageMovementListFnc(CWnd *pWnd){
	 return ((CCStorageMovementList*)pWnd)->OnSaveCStorageMovementList();
} 
static int _OnCancelCStorageMovementListFnc(CWnd *pWnd){
	 return ((CCStorageMovementList*)pWnd)->OnCancelCStorageMovementList();
} 
CCStorageMovementList::CCStorageMovementList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCStorageMovementList::~CCStorageMovementList(){
}
void CCStorageMovementList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 795, 90);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 100, 55);
	m_wndFromStorage.Create(this,105, 30, 395, 55); 
	m_wndToStorageLabel.Create(this, _T("To Storage"), 400, 30, 490, 55);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 795, 570);
	m_wndToStorage.Create(this,495, 30, 760, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 395, 85); 
	m_wndOrderNoLabel.Create(this, _T("OrderNo"), 400, 60, 490, 85);
	m_wndOrderNo.Create(this,495, 60, 760, 85); 
	m_wndRefresh.Create(this, _T("@"), 765, 60, 790, 85);
	m_wndAll.Create(this, _T("All"), 5, 575, 95, 600);
	m_wndOpening.Create(this, _T("Opening"), 100, 575, 190, 600);
	m_wndSended.Create(this, _T("Sended"), 195, 575, 285, 600);
	m_wndApproved.Create(this, _T("Approved"), 290, 575, 380, 600);
	m_wndView.Create(this, _T("&View"), 465, 575, 545, 600);
	m_wndAdd.Create(this, _T("&Add"), 550, 575, 630, 600);
	m_wndEdit.Create(this, _T("&Edit"), 635, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 800, 600);

}
void CCStorageMovementList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(1024);
	m_wndToStorage.SetCheckValue(true);
	m_wndToStorage.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);





}
void CCStorageMovementList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToStorage.SetEvent(WE_SELENDOK, _OnToStorageSelendokFnc);
	//m_wndToStorage.SetEvent(WE_SETFOCUS, _OnToStorageSetfocusFnc);
	//m_wndToStorage.SetEvent(WE_KILLFOCUS, _OnToStorageKillfocusFnc);
	m_wndToStorage.SetEvent(WE_SELCHANGE, _OnToStorageSelectChangeFnc);
	m_wndToStorage.SetEvent(WE_LOADDATA, _OnToStorageLoadDataFnc);
	//m_wndToStorage.SetEvent(WE_ADDNEW, _OnToStorageAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndSended.SetEvent(WE_CLICK, _OnSendedSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCStorageMovementListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCStorageMovementListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCStorageMovementListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCStorageMovementListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCStorageMovementListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCStorageMovementList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);
	DDX_Check(pDX, m_wndOpening.GetDlgCtrlID(), m_bOpening);
	DDX_Check(pDX, m_wndSended.GetDlgCtrlID(), m_bSended);
	DDX_Check(pDX, m_wndApproved.GetDlgCtrlID(), m_bApproved);

}
void CCStorageMovementList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCStorageMovementList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCStorageMovementList::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();
	m_bAll=FALSE;
	m_bOpening=FALSE;
	m_bSended=FALSE;
	m_bApproved=FALSE;

}
int CCStorageMovementList::SetMode(int nMode){
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
void CCStorageMovementList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCStorageMovementList::OnFromStorageSelendok(){
	 
}
/*void CCStorageMovementList::OnFromStorageSetfocus(){
	
}*/
/*void CCStorageMovementList::OnFromStorageKillfocus(){
	
}*/
long CCStorageMovementList::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStorage.IsSearchKey() && !m_szFromStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromStorageKey
};
	m_wndFromStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCStorageMovementList::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCStorageMovementList::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCStorageMovementList::OnToStorageSelendok(){
	 
}
/*void CCStorageMovementList::OnToStorageSetfocus(){
	
}*/
/*void CCStorageMovementList::OnToStorageKillfocus(){
	
}*/
long CCStorageMovementList::OnToStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToStorage.IsSearchKey() && !m_szToStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szToStorageKey
};
	m_wndToStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCStorageMovementList::OnToStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCStorageMovementList::OnFromDateChange(){
	
} */
/*void CCStorageMovementList::OnFromDateSetfocus(){
	
} */
/*void CCStorageMovementList::OnFromDateKillfocus(){
	
} */
int CCStorageMovementList::OnFromDateCheckValue(){
	return 0;
} 
/*void CCStorageMovementList::OnToDateChange(){
	
} */
/*void CCStorageMovementList::OnToDateSetfocus(){
	
} */
/*void CCStorageMovementList::OnToDateKillfocus(){
	
} */
int CCStorageMovementList::OnToDateCheckValue(){
	return 0;
} 
/*void CCStorageMovementList::OnOrderNoChange(){
	
} */
/*void CCStorageMovementList::OnOrderNoSetfocus(){
	
} */
/*void CCStorageMovementList::OnOrderNoKillfocus(){
	
} */
int CCStorageMovementList::OnOrderNoCheckValue(){
	return 0;
} 
void CCStorageMovementList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CCStorageMovementList::OnAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCStorageMovementList::OnOpeningSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCStorageMovementList::OnSendedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCStorageMovementList::OnApprovedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCStorageMovementList::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCStorageMovementList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCStorageMovementList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCStorageMovementList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCStorageMovementList::OnAddCStorageMovementList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCStorageMovementList::OnEditCStorageMovementList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCStorageMovementList::OnDeleteCStorageMovementList(){
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
 		OnCancelCStorageMovementList();
 	}
	return 0;
}
int CCStorageMovementList::OnSaveCStorageMovementList(){
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
 		//OnCStorageMovementListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCStorageMovementList::OnCancelCStorageMovementList(){
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
int CCStorageMovementList::OnCStorageMovementListListLoadData(){
	return 0;
}
