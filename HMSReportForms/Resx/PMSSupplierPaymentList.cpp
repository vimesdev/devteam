#include "PMSSupplierPaymentList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnToDateCheckValue();
} 
static void _OnImportDateSelectFnc(CWnd *pWnd){
	 ((CPMSSupplierPaymentList*)pWnd)->OnImportDateSelect();
}
/*static void _OnimpFromDateChangeFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpFromDateChange();
} */
/*static void _OnimpFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpFromDateSetfocus();} */ 
/*static void _OnimpFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpFromDateKillfocus();
} */
static int _OnimpFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnimpFromDateCheckValue();
} 
/*static void _OnimpToDateChangeFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpToDateChange();
} */
/*static void _OnimpToDateSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpToDateSetfocus();} */ 
/*static void _OnimpToDateKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnimpToDateKillfocus();
} */
static int _OnimpToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnimpToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSupplierPaymentList* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSupplierPaymentList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSupplierPaymentList* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSupplierPaymentList* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CPMSSupplierPaymentList *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CPMSSupplierPaymentList *)pWnd)->OnSourceAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMSSupplierPaymentList*)pWnd)->OnAllSelect();
}
static void _OnCashSelectFnc(CWnd *pWnd){
	  ((CPMSSupplierPaymentList*)pWnd)->OnCashSelect();
}
static void _OnTransferSelectFnc(CWnd *pWnd){
	  ((CPMSSupplierPaymentList*)pWnd)->OnTransferSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSSupplierPaymentList *pVw = (CPMSSupplierPaymentList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSSupplierPaymentList *pVw = (CPMSSupplierPaymentList *)pWnd;
	pVw->OnExportSelect();
} 
CPMSSupplierPaymentList::CPMSSupplierPaymentList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSSupplierPaymentList::~CPMSSupplierPaymentList(){
}
void CPMSSupplierPaymentList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 0);
	m_wndImportDate.Create(this, _T("Purcharge"), 10, 60, 90, 85);
	m_wndimpFromDate.Create(this,95, 60, 290, 85); 
	m_wndImportToDateLabel.Create(this, _T("Import ToDate"), 295, 60, 375, 85);
	m_wndimpToDate.Create(this,380, 60, 570, 85); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 90, 115);
	m_wndSupplier.Create(this,95, 90, 570, 115); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 120, 90, 145);
	m_wndStorage.Create(this,95, 120, 570, 145); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 150, 90, 175);
	m_wndItemGroup.Create(this,95, 150, 290, 175); 
	m_wndSourceLabel.Create(this, _T("Source"), 295, 150, 375, 175);
	m_wndSource.Create(this,380, 150, 570, 175); 
	m_wndAll.Create(this, _T("All"), 10, 185, 90, 210);
	m_wndCash.Create(this, _T("Tiền mặt"), 95, 185, 175, 210);
	m_wndTransfer.Create(this, _T("Chuyển khoản"), 180, 185, 300, 210);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 395, 185, 490, 210);
	m_wndExport.Create(this, _T("&Export"), 495, 185, 575, 210);

}
void CPMSSupplierPaymentList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndimpFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndimpFromDate.SetCheckValue(true);
	m_wndimpToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndimpToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);









}
void CPMSSupplierPaymentList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndImportDate.SetEvent(WE_CLICK, _OnImportDateSelectFnc);
	//m_wndimpFromDate.SetEvent(WE_CHANGE, _OnimpFromDateChangeFnc);
	//m_wndimpFromDate.SetEvent(WE_SETFOCUS, _OnimpFromDateSetfocusFnc);
	//m_wndimpFromDate.SetEvent(WE_KILLFOCUS, _OnimpFromDateKillfocusFnc);
	m_wndimpFromDate.SetEvent(WE_CHECKVALUE, _OnimpFromDateCheckValueFnc);
	//m_wndimpToDate.SetEvent(WE_CHANGE, _OnimpToDateChangeFnc);
	//m_wndimpToDate.SetEvent(WE_SETFOCUS, _OnimpToDateSetfocusFnc);
	//m_wndimpToDate.SetEvent(WE_KILLFOCUS, _OnimpToDateKillfocusFnc);
	m_wndimpToDate.SetEvent(WE_CHECKVALUE, _OnimpToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndCash.SetEvent(WE_CLICK, _OnCashSelectFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_NONE);

}
void CPMSSupplierPaymentList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndImportDate.GetDlgCtrlID(), m_bImportDate);
	DDX_TextEx(pDX, m_wndimpFromDate.GetDlgCtrlID(), m_szimpFromDate);
	DDX_TextEx(pDX, m_wndimpToDate.GetDlgCtrlID(), m_szimpToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndCash.GetDlgCtrlID(), m_nCash);
	DDX_Radio(pDX, m_wndTransfer.GetDlgCtrlID(), m_nTransfer);

}
void CPMSSupplierPaymentList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("ImportDate")] =  m_bImportDate;
	m_jData[_T("impFromDate")] =  m_szimpFromDate;
	m_jData[_T("impToDate")] =  m_szimpToDate;
	m_jData[_T("Supplier")] =  m_szSupplierKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("ItemGroup")] =  m_szItemGroupKey;
	m_jData[_T("Source")] =  m_szSourceKey;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("Cash")] =  m_nCash;
	m_jData[_T("Transfer")] =  m_nTransfer;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("ImportDate")].GetValue(m_bImportDate);
	m_jData[_T("impFromDate")].GetValue(m_szimpFromDate);
	m_jData[_T("impToDate")].GetValue(m_szimpToDate);
	m_jData[_T("Supplier")].GetValue(m_szSupplierKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("ItemGroup")].GetValue(m_szItemGroupKey);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("Cash")].GetValue(m_nCash);
	m_jData[_T("Transfer")].GetValue(m_nTransfer);
	}

}
void CPMSSupplierPaymentList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bImportDate=FALSE;
	m_szimpFromDate.Empty();
	m_szimpToDate.Empty();
	m_szSupplierKey.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szSourceKey.Empty();
	m_nAll=0;
	m_nCash=0;
	m_nTransfer=0;

}
int CPMSSupplierPaymentList::SetMode(int nMode){
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
/*void CPMSSupplierPaymentList::OnFromDateChange(){
	
} */
/*void CPMSSupplierPaymentList::OnFromDateSetfocus(){
	
} */
/*void CPMSSupplierPaymentList::OnFromDateKillfocus(){
	
} */
int CPMSSupplierPaymentList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSSupplierPaymentList::OnToDateChange(){
	
} */
/*void CPMSSupplierPaymentList::OnToDateSetfocus(){
	
} */
/*void CPMSSupplierPaymentList::OnToDateKillfocus(){
	
} */
int CPMSSupplierPaymentList::OnToDateCheckValue(){
	return 0;
} 
	void CPMSSupplierPaymentList::OnImportDateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPMSSupplierPaymentList::OnimpFromDateChange(){
	
} */
/*void CPMSSupplierPaymentList::OnimpFromDateSetfocus(){
	
} */
/*void CPMSSupplierPaymentList::OnimpFromDateKillfocus(){
	
} */
int CPMSSupplierPaymentList::OnimpFromDateCheckValue(){
	return 0;
} 
/*void CPMSSupplierPaymentList::OnimpToDateChange(){
	
} */
/*void CPMSSupplierPaymentList::OnimpToDateSetfocus(){
	
} */
/*void CPMSSupplierPaymentList::OnimpToDateKillfocus(){
	
} */
int CPMSSupplierPaymentList::OnimpToDateCheckValue(){
	return 0;
} 
void CPMSSupplierPaymentList::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSupplierPaymentList::OnSupplierSelendok(){
	 
}
/*void CPMSSupplierPaymentList::OnSupplierSetfocus(){
	
}*/
/*void CPMSSupplierPaymentList::OnSupplierKillfocus(){
	
}*/
long CPMSSupplierPaymentList::OnSupplierLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMSSupplierPaymentList::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSupplierPaymentList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSupplierPaymentList::OnStorageSelendok(){
	 
}
/*void CPMSSupplierPaymentList::OnStorageSetfocus(){
	
}*/
/*void CPMSSupplierPaymentList::OnStorageKillfocus(){
	
}*/
long CPMSSupplierPaymentList::OnStorageLoadData(){
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
/*void CPMSSupplierPaymentList::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSupplierPaymentList::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSupplierPaymentList::OnItemGroupSelendok(){
	 
}
/*void CPMSSupplierPaymentList::OnItemGroupSetfocus(){
	
}*/
/*void CPMSSupplierPaymentList::OnItemGroupKillfocus(){
	
}*/
long CPMSSupplierPaymentList::OnItemGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemGroupKey
};
	m_wndItemGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMSSupplierPaymentList::OnItemGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSupplierPaymentList::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSupplierPaymentList::OnSourceSelendok(){
	 
}
/*void CPMSSupplierPaymentList::OnSourceSetfocus(){
	
}*/
/*void CPMSSupplierPaymentList::OnSourceKillfocus(){
	
}*/
long CPMSSupplierPaymentList::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMSSupplierPaymentList::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSupplierPaymentList::OnAllSelect(){
	
}
void CPMSSupplierPaymentList::OnCashSelect(){
	
}
void CPMSSupplierPaymentList::OnTransferSelect(){
	
}
void CPMSSupplierPaymentList::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSupplierPaymentList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
