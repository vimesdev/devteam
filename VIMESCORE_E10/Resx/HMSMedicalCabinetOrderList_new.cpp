#include "HMSMedicalCabinetOrderList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetOrderList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetOrderList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnFromStorageAddNew();
}*/
/*static void _OnOrderNOChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnOrderNOChange();
} */
/*static void _OnOrderNOSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnOrderNOSetfocus();} */ 
/*static void _OnOrderNOKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList *)pWnd)->OnOrderNOKillfocus();
} */
static int _OnOrderNOCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList *)pWnd)->OnOrderNOCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrderList *pVw = (CHMSMedicalCabinetOrderList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnListDeleteItem();
} 
static void _OnAllOrdersSelectFnc(CWnd *pWnd){
	  ((CHMSMedicalCabinetOrderList*)pWnd)->OnAllOrdersSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CHMSMedicalCabinetOrderList*)pWnd)->OnOpeningSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CHMSMedicalCabinetOrderList*)pWnd)->OnApprovedSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrderList *pVw = (CHMSMedicalCabinetOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrderList *pVw = (CHMSMedicalCabinetOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrderList *pVw = (CHMSMedicalCabinetOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrderList *pVw = (CHMSMedicalCabinetOrderList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSMedicalCabinetOrderListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnAddHMSMedicalCabinetOrderList();
} 
static int _OnEditHMSMedicalCabinetOrderListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnEditHMSMedicalCabinetOrderList();
} 
static int _OnDeleteHMSMedicalCabinetOrderListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnDeleteHMSMedicalCabinetOrderList();
} 
static int _OnSaveHMSMedicalCabinetOrderListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnSaveHMSMedicalCabinetOrderList();
} 
static int _OnCancelHMSMedicalCabinetOrderListFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrderList*)pWnd)->OnCancelHMSMedicalCabinetOrderList();
} 
CHMSMedicalCabinetOrderList::CHMSMedicalCabinetOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMedicalCabinetOrderList::~CHMSMedicalCabinetOrderList(){
}
void CHMSMedicalCabinetOrderList::OnCreateComponents(){
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
void CHMSMedicalCabinetOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(35);
//	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
//	m_wndToDepartment.SetCheckValue(true);
	m_wndToDepartment.LimitText(16);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndToDepartment.Format(2, 0, 15, 0);


	m_wndList.SetAutoIndex(true);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("ORDERTYPE"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("ORDERDATE"), CFMT_DATE, 125);
	m_wndList.InsertColumn(4, _T("Approval Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(5, _T("From Storage"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Department"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(8, _T("Amount"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Description"), CFMT_TEXT, 200);

	m_wndList.GetHeaderControl()->SetItemHeight(1);

}

void CHMSMedicalCabinetOrderList::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSMedicalCabinetOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSMedicalCabinetOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSMedicalCabinetOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSMedicalCabinetOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSMedicalCabinetOrderListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSMedicalCabinetOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_Text(pDX, m_wndOrderNO.GetDlgCtrlID(), m_szOrderNO);
	DDX_Radio(pDX, m_wndAllOrders.GetDlgCtrlID(), m_nAllOrders);
	DDX_Radio(pDX, m_wndOpening.GetDlgCtrlID(), m_nOpening);
	DDX_Radio(pDX, m_wndApproved.GetDlgCtrlID(), m_nApproved);

}
void CHMSMedicalCabinetOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CHMSMedicalCabinetOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CHMSMedicalCabinetOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey.Empty();
	m_szFromStorageKey.Empty();
	m_szToDepartmentKey.Empty();
	m_nStatus=0;
}

int CHMSMedicalCabinetOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
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

/*void CHMSMedicalCabinetOrderList::OnFromDateChange(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnFromDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnFromDateKillfocus(){
	
} */
int CHMSMedicalCabinetOrderList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CHMSMedicalCabinetOrderList::OnToDateChange(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnToDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnToDateKillfocus(){
	
} */
int CHMSMedicalCabinetOrderList::OnToDateCheckValue(){
	return 0;
}
 
void CHMSMedicalCabinetOrderList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CHMSMedicalCabinetOrderList::OnTransactionTypeSelendok(){
	 
}

/*void CHMSMedicalCabinetOrderList::OnTransactionTypeSetfocus(){
	
}*/
/*void CHMSMedicalCabinetOrderList::OnTransactionTypeKillfocus(){
	
}*/
long CHMSMedicalCabinetOrderList::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('DDO', 'DPO','DMO') "));

	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szFilter);

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

/*void CHMSMedicalCabinetOrderList::OnTransactionTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMedicalCabinetOrderList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CHMSMedicalCabinetOrderList::OnFromStorageSelendok(){
	 
}

/*void CHMSMedicalCabinetOrderList::OnFromStorageSetfocus(){
	
}*/
/*void CHMSMedicalCabinetOrderList::OnFromStorageKillfocus(){
	
}*/
long CHMSMedicalCabinetOrderList::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szToDepartmentKey) > 0)
		szWhere.Format(_T(" AND msl_storage_id<>%d "), str2int(m_szToDepartmentKey));
	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}

/*void CHMSMedicalCabinetOrderList::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetOrderList::OnOrderNOChange(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnOrderNOSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrderList::OnOrderNOKillfocus(){
	
} */
int CHMSMedicalCabinetOrderList::OnOrderNOCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetOrderList::OnRefreshSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
}
 
void CHMSMedicalCabinetOrderList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
}
 
void CHMSMedicalCabinetOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
}
 
int CHMSMedicalCabinetOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CHMSMedicalCabinetOrderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szStatus, szApprovedDate;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_id=%d "), ToInt(m_szFromStorageKey));
	}

	if(!m_szToDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND mt_department_to_id='%s' "), m_szToDepartmentKey);
	}

	szWhere.AppendFormat(_T(" and mt_org_id IN('GL','%s') "), pMF->GetModuleID());

	szWhere.AppendFormat(_T(" and mt_doctype in('DPO', 'DDO','DMO') "));


	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	mt_approveddate,") \
				_T(" 	GET_STORAGENAME(mt_storage_id) as mt_fromstorage, ") \
				_T(" 	mt_department_to_id as mt_department,") \
				_T(" 	mt_deliverydate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_totalamount, ")\
				_T("	mt_createdby, ")\
				_T("	GET_DOCTYPE(mt_doctype) as doctype ")\
				_T("   FROM m_transaction") \
				_T(" WHERE trunc_date(mt_orderdate) BETWEEN cast_string2date('%s') AND cast_string2date('%s') ") \
				_T(" %s ") \
				_T(" ORDER BY mt_orderdate "), 
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
////_fmsg_T("%s"), szSQL);
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mt_status"), szStatus);
		if(szStatus == _T("A"))
		{
			rs.GetValue(_T("mt_approveddate"), szApprovedDate);
		}
		else
		{
			szApprovedDate.Empty();
		}

		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("mt_transaction_id")), 
			rs.GetValue(_T("doctype")), 
			rs.GetValue(_T("mt_orderno")), 
			rs.GetValue(_T("mt_orderdate")), 
			szApprovedDate, 
			rs.GetValue(_T("mt_fromstorage")), 
			rs.GetValue(_T("mt_department")), 
			rs.GetValue(_T("mt_status")), 
			rs.GetValue(_T("mt_amount")), 
			rs.GetValue(_T("mt_createdby")),
			rs.GetValue(_T("mt_description")),      			
			 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CHMSMedicalCabinetOrderList::OnAllOrdersSelect(){
	
}

void CHMSMedicalCabinetOrderList::OnOpeningSelect(){
	
}

void CHMSMedicalCabinetOrderList::OnApprovedSelect(){
	
}

void CHMSMedicalCabinetOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}

	CStorageTransactionDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
 
void CHMSMedicalCabinetOrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageTransactionDialog dlg(pMF, VM_ADD);
	dlg.m_szTransactionTypeKey = _T("DPO");
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
 
void CHMSMedicalCabinetOrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageTransactionDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
 
void CHMSMedicalCabinetOrderList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetOrderList::OnAddHMSMedicalCabinetOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CHMSMedicalCabinetOrderList::OnEditHMSMedicalCabinetOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CHMSMedicalCabinetOrderList::OnDeleteHMSMedicalCabinetOrderList(){
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
 		OnCancelHMSMedicalCabinetOrderList(); 
 	}
	return 0;
}

int CHMSMedicalCabinetOrderList::OnSaveHMSMedicalCabinetOrderList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_dm_purchaseorderlnTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_dm_purchaseorderlnTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSMedicalCabinetOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CHMSMedicalCabinetOrderList::OnCancelHMSMedicalCabinetOrderList(){
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
 
int CHMSMedicalCabinetOrderList::OnHMSMedicalCabinetOrderListListLoadData(){
	return 0;
}

