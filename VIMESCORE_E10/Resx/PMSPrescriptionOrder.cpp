#include "PMSPrescriptionOrder.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionOrder* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStorageAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrder *pVw = (CPMSPrescriptionOrder *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionOrder*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrder *pVw = (CPMSPrescriptionOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnIssueSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrder *pVw = (CPMSPrescriptionOrder *)pWnd;
	pVw->OnIssueSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSPrescriptionOrder *pVw = (CPMSPrescriptionOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnShowDetailForItemsSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionOrder*)pWnd)->OnShowDetailForItemsSelect();
}
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionOrder *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionOrder *)pWnd)->OnTotalAmountCheckValue();
} 
static int _OnAddPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnAddPMSPrescriptionOrder();
} 
static int _OnEditPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnEditPMSPrescriptionOrder();
} 
static int _OnDeletePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnDeletePMSPrescriptionOrder();
} 
static int _OnSavePMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnSavePMSPrescriptionOrder();
} 
static int _OnCancelPMSPrescriptionOrderFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionOrder*)pWnd)->OnCancelPMSPrescriptionOrder();
} 
CPMSPrescriptionOrder::CPMSPrescriptionOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSPrescriptionOrder::~CPMSPrescriptionOrder(){
}
void CPMSPrescriptionOrder::OnCreateComponents(){
	m_wndPatientProfiles.Create(this, _T("Patient Profile"), 5, 95, 810, 265);
	m_wndOrderLine.Create(this, _T("OrderLine"), 5, 270, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndStorageLabel.Create(this, _T("Storage"), 470, 30, 570, 55);
	m_wndStorage.Create(this,575, 30, 775, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 60, 110, 85);
	m_wndStatus.Create(this,115, 60, 235, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 340, 55);
	m_wndToDate.Create(this,345, 30, 465, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 240, 60, 340, 85);
	m_wndName.Create(this,345, 60, 465, 85); 
	m_wndDocNoLabel.Create(this, _T("Doc/Order No"), 470, 60, 570, 85);
	m_wndDocNo.Create(this,575, 60, 675, 85); 
	m_wndOrderNo.Create(this,680, 60, 775, 85); 
	m_wndFind.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndPatientList.Create(this,10, 120, 805, 260); 
	m_wndDrugList.Create(this,10, 295, 805, 585); 
	m_wndPrint.Create(this, _T("&Print"), 5, 595, 95, 620);
	m_wndIssue.Create(this, _T("&Issue"), 100, 595, 190, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 195, 595, 285, 620);
	m_wndShowDetailForItems.Create(this, _T("Show detail"), 290, 595, 445, 620);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 570, 595, 670, 620);
	m_wndTotalAmount.Create(this,675, 595, 810, 620); 

}
void CPMSPrescriptionOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);









}
void CPMSPrescriptionOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndIssue.SetEvent(WE_CLICK, _OnIssueSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndShowDetailForItems.SetEvent(WE_CLICK, _OnShowDetailForItemsSelectFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSPrescriptionOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSPrescriptionOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSPrescriptionOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSPrescriptionOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMSPrescriptionOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPMSPrescriptionOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Check(pDX, m_wndShowDetailForItems.GetDlgCtrlID(), m_bShowDetailForItems);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CPMSPrescriptionOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSPrescriptionOrder::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szStatusKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szName.Empty();
	m_nDocNo=0;
	m_nOrderNo=0;
	m_bShowDetailForItems=FALSE;
	m_nTotalAmount=0;

}
int CPMSPrescriptionOrder::SetMode(int nMode){
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
void CPMSPrescriptionOrder::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrder::OnStorageSelendok(){
	 
}
/*void CPMSPrescriptionOrder::OnStorageSetfocus(){
	
}*/
/*void CPMSPrescriptionOrder::OnStorageKillfocus(){
	
}*/
long CPMSPrescriptionOrder::OnStorageLoadData(){
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
/*void CPMSPrescriptionOrder::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrder::OnStatusSelendok(){
	 
}
/*void CPMSPrescriptionOrder::OnStatusSetfocus(){
	
}*/
/*void CPMSPrescriptionOrder::OnStatusKillfocus(){
	
}*/
long CPMSPrescriptionOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMSPrescriptionOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSPrescriptionOrder::OnFromDateChange(){
	
} */
/*void CPMSPrescriptionOrder::OnFromDateSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnFromDateKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrder::OnToDateChange(){
	
} */
/*void CPMSPrescriptionOrder::OnToDateSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnToDateKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnToDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrder::OnNameChange(){
	
} */
/*void CPMSPrescriptionOrder::OnNameSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnNameKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnNameCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrder::OnDocNoChange(){
	
} */
/*void CPMSPrescriptionOrder::OnDocNoSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnDocNoKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnDocNoCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionOrder::OnOrderNoChange(){
	
} */
/*void CPMSPrescriptionOrder::OnOrderNoSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnOrderNoKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnOrderNoCheckValue(){
	return 0;
} 
void CPMSPrescriptionOrder::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrder::OnPatientListDblClick(){
	
} 
void CPMSPrescriptionOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionOrder::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionOrder::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPMSPrescriptionOrder::OnDrugListDblClick(){
	
} 
void CPMSPrescriptionOrder::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionOrder::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionOrder::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPMSPrescriptionOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrder::OnIssueSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CPMSPrescriptionOrder::OnShowDetailForItemsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPMSPrescriptionOrder::OnTotalAmountChange(){
	
} */
/*void CPMSPrescriptionOrder::OnTotalAmountSetfocus(){
	
} */
/*void CPMSPrescriptionOrder::OnTotalAmountKillfocus(){
	
} */
int CPMSPrescriptionOrder::OnTotalAmountCheckValue(){
	return 0;
} 
int CPMSPrescriptionOrder::OnAddPMSPrescriptionOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSPrescriptionOrder::OnEditPMSPrescriptionOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionOrder::OnDeletePMSPrescriptionOrder(){
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
 		OnCancelPMSPrescriptionOrder();
 	}
	return 0;
}
int CPMSPrescriptionOrder::OnSavePMSPrescriptionOrder(){
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
 		//OnPMSPrescriptionOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSPrescriptionOrder::OnCancelPMSPrescriptionOrder(){
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
int CPMSPrescriptionOrder::OnPMSPrescriptionOrderListLoadData(){
	return 0;
}
