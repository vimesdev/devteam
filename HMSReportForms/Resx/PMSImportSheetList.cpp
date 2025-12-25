#include "PMSImportSheetList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSImportSheetList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSImportSheetList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportSheetList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportSheetList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportSheetList* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportSheetList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportSheetList* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportSheetList *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMSImportSheetList *)pWnd)->OnSupplierAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMSImportSheetList*)pWnd)->OnAllSelect();
}
static void _OnInternalSelectFnc(CWnd *pWnd){
	  ((CPMSImportSheetList*)pWnd)->OnInternalSelect();
}
static void _OnKho708SelectFnc(CWnd *pWnd){
	  ((CPMSImportSheetList*)pWnd)->OnKho708Select();
}
static void _OnPaidSelectFnc(CWnd *pWnd){
	  ((CPMSImportSheetList*)pWnd)->OnPaidSelect();
}
static void _OnGroupByTypeSelectFnc(CWnd *pWnd){
	 ((CPMSImportSheetList*)pWnd)->OnGroupByTypeSelect();
}
static void _OnGeneralReportsSelectFnc(CWnd *pWnd){
	 ((CPMSImportSheetList*)pWnd)->OnGeneralReportsSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSImportSheetList *pVw = (CPMSImportSheetList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSImportSheetList *pVw = (CPMSImportSheetList *)pWnd;
	pVw->OnExportSelect();
} 
CPMSImportSheetList::CPMSImportSheetList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSImportSheetList::~CPMSImportSheetList(){
}
void CPMSImportSheetList::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 570, 120);
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 300, 60, 380, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 295, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 300, 30, 380, 55);
	m_wndToDate.Create(this,385, 30, 565, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 110, 85);
	m_wndStorage.Create(this,115, 60, 295, 85); 
	m_wndItemGroup.Create(this,385, 60, 565, 85); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 110, 115);
	m_wndSupplier.Create(this,115, 90, 565, 115); 
	m_wndAll.Create(this, _T("All"), 10, 125, 90, 150);
	m_wndInternal.Create(this, _T("Internal"), 95, 125, 175, 150);
	m_wndKho708.Create(this, _T("Kho 708"), 180, 125, 260, 150);
	m_wndPaid.Create(this, _T("Paid"), 265, 125, 365, 150);
	m_wndGroupByType.Create(this, _T("Group by Type"), 455, 125, 565, 150);
	m_wndGeneralReports.Create(this, _T("General Reports"), 10, 155, 160, 180);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 360, 155, 460, 180);
	m_wndExport.Create(this, _T("&Export"), 465, 155, 565, 180);

}
void CPMSImportSheetList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);







}
void CPMSImportSheetList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
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
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInternal.SetEvent(WE_CLICK, _OnInternalSelectFnc);
	m_wndKho708.SetEvent(WE_CLICK, _OnKho708SelectFnc);
	m_wndPaid.SetEvent(WE_CLICK, _OnPaidSelectFnc);
	m_wndGroupByType.SetEvent(WE_CLICK, _OnGroupByTypeSelectFnc);
	m_wndGeneralReports.SetEvent(WE_CLICK, _OnGeneralReportsSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_NONE);

}
void CPMSImportSheetList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInternal.GetDlgCtrlID(), m_nInternal);
	DDX_Radio(pDX, m_wndKho708.GetDlgCtrlID(), m_nKho708);
	DDX_Radio(pDX, m_wndPaid.GetDlgCtrlID(), m_nPaid);
	DDX_Check(pDX, m_wndGroupByType.GetDlgCtrlID(), m_bGroupByType);
	DDX_Check(pDX, m_wndGeneralReports.GetDlgCtrlID(), m_bGeneralReports);

}
void CPMSImportSheetList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("ItemGroup")] =  m_szItemGroupKey;
	m_jData[_T("Supplier")] =  m_szSupplierKey;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("Internal")] =  m_nInternal;
	m_jData[_T("Kho708")] =  m_nKho708;
	m_jData[_T("Paid")] =  m_nPaid;
	m_jData[_T("GroupByType")] =  m_bGroupByType;
	m_jData[_T("GeneralReports")] =  m_bGeneralReports;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("ItemGroup")].GetValue(m_szItemGroupKey);
	m_jData[_T("Supplier")].GetValue(m_szSupplierKey);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("Internal")].GetValue(m_nInternal);
	m_jData[_T("Kho708")].GetValue(m_nKho708);
	m_jData[_T("Paid")].GetValue(m_nPaid);
	m_jData[_T("GroupByType")].GetValue(m_bGroupByType);
	m_jData[_T("GeneralReports")].GetValue(m_bGeneralReports);
	}

}
void CPMSImportSheetList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szSupplierKey.Empty();
	m_nAll=0;
	m_nInternal=0;
	m_nKho708=0;
	m_nPaid=0;
	m_bGroupByType=FALSE;
	m_bGeneralReports=FALSE;

}
int CPMSImportSheetList::SetMode(int nMode){
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
/*void CPMSImportSheetList::OnFromDateChange(){
	
} */
/*void CPMSImportSheetList::OnFromDateSetfocus(){
	
} */
/*void CPMSImportSheetList::OnFromDateKillfocus(){
	
} */
int CPMSImportSheetList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSImportSheetList::OnToDateChange(){
	
} */
/*void CPMSImportSheetList::OnToDateSetfocus(){
	
} */
/*void CPMSImportSheetList::OnToDateKillfocus(){
	
} */
int CPMSImportSheetList::OnToDateCheckValue(){
	return 0;
} 
void CPMSImportSheetList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSImportSheetList::OnStorageSelendok(){
	 
}
/*void CPMSImportSheetList::OnStorageSetfocus(){
	
}*/
/*void CPMSImportSheetList::OnStorageKillfocus(){
	
}*/
long CPMSImportSheetList::OnStorageLoadData(){
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
/*void CPMSImportSheetList::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSImportSheetList::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSImportSheetList::OnItemGroupSelendok(){
	 
}
/*void CPMSImportSheetList::OnItemGroupSetfocus(){
	
}*/
/*void CPMSImportSheetList::OnItemGroupKillfocus(){
	
}*/
long CPMSImportSheetList::OnItemGroupLoadData(){
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
/*void CPMSImportSheetList::OnItemGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSImportSheetList::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSImportSheetList::OnSupplierSelendok(){
	 
}
/*void CPMSImportSheetList::OnSupplierSetfocus(){
	
}*/
/*void CPMSImportSheetList::OnSupplierKillfocus(){
	
}*/
long CPMSImportSheetList::OnSupplierLoadData(){
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
/*void CPMSImportSheetList::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSImportSheetList::OnAllSelect(){
	
}
void CPMSImportSheetList::OnInternalSelect(){
	
}
void CPMSImportSheetList::OnKho708Select(){
	
}
void CPMSImportSheetList::OnPaidSelect(){
	
}
	void CPMSImportSheetList::OnGroupByTypeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPMSImportSheetList::OnGeneralReportsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CPMSImportSheetList::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSImportSheetList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
