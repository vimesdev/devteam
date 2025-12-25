#include "HMSTransactionList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransactionList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransactionList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransactionList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransactionList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransactionList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransactionList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnFromStorageAddNew();
}*/
/*static void _OnOrderNOChangeFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnOrderNOChange();
} */
/*static void _OnOrderNOSetfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnOrderNOSetfocus();} */ 
/*static void _OnOrderNOKillfocusFnc(CWnd *pWnd){
	((CHMSTransactionList *)pWnd)->OnOrderNOKillfocus();
} */
static int _OnOrderNOCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransactionList *)pWnd)->OnOrderNOCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSTransactionList *pVw = (CHMSTransactionList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransactionList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTransactionList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTransactionList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnListDeleteItem();
} 
static void _OnAllOrdersSelectFnc(CWnd *pWnd){
	  ((CHMSTransactionList*)pWnd)->OnAllOrdersSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CHMSTransactionList*)pWnd)->OnOpeningSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CHMSTransactionList*)pWnd)->OnApprovedSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CHMSTransactionList *pVw = (CHMSTransactionList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTransactionList *pVw = (CHMSTransactionList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTransactionList *pVw = (CHMSTransactionList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTransactionList *pVw = (CHMSTransactionList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSTransactionListFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnAddHMSTransactionList();
} 
static int _OnEditHMSTransactionListFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnEditHMSTransactionList();
} 
static int _OnDeleteHMSTransactionListFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnDeleteHMSTransactionList();
} 
static int _OnSaveHMSTransactionListFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnSaveHMSTransactionList();
} 
static int _OnCancelHMSTransactionListFnc(CWnd *pWnd){
	 return ((CHMSTransactionList*)pWnd)->OnCancelHMSTransactionList();
} 
CHMSTransactionList::CHMSTransactionList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTransactionList::~CHMSTransactionList(){
}
void CHMSTransactionList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 795, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 795, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 295, 55);
	m_wndToDate.Create(this,300, 30, 395, 55); 
	m_wndTransactionTyleLabel.Create(this, _T("Type"), 400, 30, 490, 55);
	m_wndTransactionType.Create(this,495, 30, 760, 55); 
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 60, 100, 85);
	m_wndFromStorage.Create(this,105, 60, 395, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 400, 60, 490, 85);
	m_wndOrderNO.Create(this,495, 60, 760, 85); 
	m_wndRefresh.Create(this, _T("@"), 765, 60, 790, 85);
	m_wndList.Create(this,10, 120, 790, 565); 
	m_wndAllOrders.Create(this, _T("All Orders"), 5, 575, 105, 600);
	m_wndOpening.Create(this, _T("Opening"), 110, 575, 210, 600);
	m_wndApproved.Create(this, _T("Approved"), 215, 575, 315, 600);
	m_wndView.Create(this, _T("&View"), 465, 575, 545, 600);
	m_wndAdd.Create(this, _T("&Add"), 550, 575, 630, 600);
	m_wndEdit.Create(this, _T("&Edit"), 635, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 800, 600);

}
void CHMSTransactionList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(1024);
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(1024);
	m_wndOrderNO.SetLimitText(1024);
	m_wndOrderNO.SetCheckValue(true);







}
void CHMSTransactionList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	//m_wndOrderNO.SetEvent(WE_CHANGE, _OnOrderNOChangeFnc);
	//m_wndOrderNO.SetEvent(WE_SETFOCUS, _OnOrderNOSetfocusFnc);
	//m_wndOrderNO.SetEvent(WE_KILLFOCUS, _OnOrderNOKillfocusFnc);
	m_wndOrderNO.SetEvent(WE_CHECKVALUE, _OnOrderNOCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAllOrders.SetEvent(WE_CLICK, _OnAllOrdersSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTransactionListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTransactionListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTransactionListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTransactionListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTransactionListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSTransactionList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_Text(pDX, m_wndOrderNO.GetDlgCtrlID(), m_szOrderNO);
	DDX_Radio(pDX, m_wndAllOrders.GetDlgCtrlID(), m_nAllOrders);
	DDX_Radio(pDX, m_wndOpening.GetDlgCtrlID(), m_nOpening);
	DDX_Radio(pDX, m_wndApproved.GetDlgCtrlID(), m_nApproved);

}
void CHMSTransactionList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTransactionList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTransactionList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey.Empty();
	m_szFromStorageKey.Empty();
	m_szOrderNO.Empty();
	m_nAllOrders=0;
	m_nOpening=0;
	m_nApproved=0;

}
int CHMSTransactionList::SetMode(int nMode){
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
/*void CHMSTransactionList::OnFromDateChange(){
	
} */
/*void CHMSTransactionList::OnFromDateSetfocus(){
	
} */
/*void CHMSTransactionList::OnFromDateKillfocus(){
	
} */
int CHMSTransactionList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSTransactionList::OnToDateChange(){
	
} */
/*void CHMSTransactionList::OnToDateSetfocus(){
	
} */
/*void CHMSTransactionList::OnToDateKillfocus(){
	
} */
int CHMSTransactionList::OnToDateCheckValue(){
	return 0;
} 
void CHMSTransactionList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnTransactionTypeSelendok(){
	 
}
/*void CHMSTransactionList::OnTransactionTypeSetfocus(){
	
}*/
/*void CHMSTransactionList::OnTransactionTypeKillfocus(){
	
}*/
long CHMSTransactionList::OnTransactionTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransactionType.IsSearchKey() && !m_szTransactionTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransactionTypeKey
};
	m_wndTransactionType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransactionType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTransactionList::OnTransactionTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTransactionList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnFromStorageSelendok(){
	 
}
/*void CHMSTransactionList::OnFromStorageSetfocus(){
	
}*/
/*void CHMSTransactionList::OnFromStorageKillfocus(){
	
}*/
long CHMSTransactionList::OnFromStorageLoadData(){
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
/*void CHMSTransactionList::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTransactionList::OnOrderNOChange(){
	
} */
/*void CHMSTransactionList::OnOrderNOSetfocus(){
	
} */
/*void CHMSTransactionList::OnOrderNOKillfocus(){
	
} */
int CHMSTransactionList::OnOrderNOCheckValue(){
	return 0;
} 
void CHMSTransactionList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnListDblClick(){
	
} 
void CHMSTransactionList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTransactionList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTransactionList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTransactionList::OnAllOrdersSelect(){
	
}
void CHMSTransactionList::OnOpeningSelect(){
	
}
void CHMSTransactionList::OnApprovedSelect(){
	
}
void CHMSTransactionList::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransactionList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTransactionList::OnAddHMSTransactionList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTransactionList::OnEditHMSTransactionList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTransactionList::OnDeleteHMSTransactionList(){
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
 		OnCancelHMSTransactionList();
 	}
	return 0;
}
int CHMSTransactionList::OnSaveHMSTransactionList(){
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
 		//OnHMSTransactionListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTransactionList::OnCancelHMSTransactionList(){
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
int CHMSTransactionList::OnHMSTransactionListListLoadData(){
	return 0;
}
