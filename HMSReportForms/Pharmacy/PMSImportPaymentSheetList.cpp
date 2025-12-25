#include "stdafx.h"
#include "PMSImportPaymentSheetList.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnToDateCheckValue();
} 
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnPaymentDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportPaymentSheetList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportPaymentSheetList* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSImportPaymentSheetList* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMSImportPaymentSheetList *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMSImportPaymentSheetList *)pWnd)->OnSupplierAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMSImportPaymentSheetList*)pWnd)->OnAllSelect();
}
static void _OnInternalSelectFnc(CWnd *pWnd){
	  ((CPMSImportPaymentSheetList*)pWnd)->OnInternalSelect();
}
static void _OnKho708SelectFnc(CWnd *pWnd){
	  ((CPMSImportPaymentSheetList*)pWnd)->OnKho708Select();
}
static void _OnPaidSelectFnc(CWnd *pWnd){
	  ((CPMSImportPaymentSheetList*)pWnd)->OnPaidSelect();
}
static void _OnGroupByTypeSelectFnc(CWnd *pWnd){
	 ((CPMSImportPaymentSheetList*)pWnd)->OnGroupByTypeSelect();
}
static void _OnGeneralReportsSelectFnc(CWnd *pWnd){
	 ((CPMSImportPaymentSheetList*)pWnd)->OnGeneralReportsSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSImportPaymentSheetList *pVw = (CPMSImportPaymentSheetList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSImportPaymentSheetList *pVw = (CPMSImportPaymentSheetList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSImportPaymentSheetListFnc(CWnd *pWnd){
	 return ((CPMSImportPaymentSheetList*)pWnd)->OnAddPMSImportPaymentSheetList();
} 
static int _OnEditPMSImportPaymentSheetListFnc(CWnd *pWnd){
	 return ((CPMSImportPaymentSheetList*)pWnd)->OnEditPMSImportPaymentSheetList();
} 
static int _OnDeletePMSImportPaymentSheetListFnc(CWnd *pWnd){
	 return ((CPMSImportPaymentSheetList*)pWnd)->OnDeletePMSImportPaymentSheetList();
} 
static int _OnSavePMSImportPaymentSheetListFnc(CWnd *pWnd){
	 return ((CPMSImportPaymentSheetList*)pWnd)->OnSavePMSImportPaymentSheetList();
} 
static int _OnCancelPMSImportPaymentSheetListFnc(CWnd *pWnd){
	 return ((CPMSImportPaymentSheetList*)pWnd)->OnCancelPMSImportPaymentSheetList();
} 
CPMSImportPaymentSheetList::CPMSImportPaymentSheetList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSImportPaymentSheetList::~CPMSImportPaymentSheetList(){
}
void CPMSImportPaymentSheetList::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 145);
	
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 295, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 300, 30, 380, 55);
	m_wndToDate.Create(this,385, 30, 565, 55); 
	
	m_wndPaymentDateLabel.Create(this, _T("Payment Date"), 10, 60, 110, 85);
	m_wndPaymentDate.Create(this,115, 60, 295, 85); 


	m_wndStorageLabel.Create(this, _T("Storage"), 10, 90, 110, 115);
	m_wndStorage.SetCheckBox(TRUE);
	m_wndStorage.Create(this,115, 90, 295, 115); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 300, 90, 380, 115);
	m_wndItemGroup.Create(this,385, 90, 565, 115); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 120, 110, 150);
	m_wndSupplier.Create(this,115, 120, 565, 150); 
	m_wndAll.Create(this, _T("All"), 10, 155, 90, 180);
	m_wndInternal.Create(this, _T("Internal"), 95, 155, 175, 180);
	m_wndKho708.Create(this, _T("Kho 708"), 180, 155, 260, 180);
	m_wndPaid.Create(this, _T("Paid"), 265, 155, 365, 180);
	m_wndGroupByType.Create(this, _T("Group by Type"), 455, 155, 565, 180);
	m_wndGeneralReports.Create(this, _T("General Reports"), 10, 185, 160, 210);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 360, 185, 460, 210);
	m_wndExport.Create(this, _T("&Export"), 465, 185, 565, 210);

}
void CPMSImportPaymentSheetList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndPaymentDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 170);

	m_wndItemGroup.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


}
void CPMSImportPaymentSheetList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSImportPaymentSheetListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSImportPaymentSheetListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSImportPaymentSheetListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSImportPaymentSheetListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMSImportPaymentSheetListFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	m_szPaymentDate = pMF->GetSysDate() + _T(" 23:59");;
	UpdateData(false);

}
void CPMSImportPaymentSheetList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
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
void CPMSImportPaymentSheetList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSImportPaymentSheetList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSImportPaymentSheetList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szSupplierKey.Empty();
	m_nAll=0;
	m_nInternal=1;
	m_nKho708=1;
	m_nPaid=1;
	m_bGroupByType=FALSE;
	m_bGeneralReports=FALSE;

}
int CPMSImportPaymentSheetList::SetMode(int nMode){
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
/*void CPMSImportPaymentSheetList::OnFromDateChange(){
	
} */
/*void CPMSImportPaymentSheetList::OnFromDateSetfocus(){
	
} */
/*void CPMSImportPaymentSheetList::OnFromDateKillfocus(){
	
} */
int CPMSImportPaymentSheetList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSImportPaymentSheetList::OnToDateChange(){
	
} */
/*void CPMSImportPaymentSheetList::OnToDateSetfocus(){
	
} */
/*void CPMSImportPaymentSheetList::OnToDateKillfocus(){
	
} */
int CPMSImportPaymentSheetList::OnToDateCheckValue(){
	return 0;
} 
int CPMSImportPaymentSheetList::OnPaymentDateCheckValue(){
	return 0;
} 
void CPMSImportPaymentSheetList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSImportPaymentSheetList::OnStorageSelendok(){
	 
}
/*void CPMSImportPaymentSheetList::OnStorageSetfocus(){
	
}*/
/*void CPMSImportPaymentSheetList::OnStorageKillfocus(){
	
}*/
long CPMSImportPaymentSheetList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
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
/*void CPMSImportPaymentSheetList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSImportPaymentSheetList::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSImportPaymentSheetList::OnItemGroupSelendok(){
	 
}
/*void CPMSImportPaymentSheetList::OnItemGroupSetfocus(){
	
}*/
/*void CPMSImportPaymentSheetList::OnItemGroupKillfocus(){
	
}*/
long CPMSImportPaymentSheetList::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
		_T("                 product_type_name ") \
		_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
		_T("                ELSE mpt_product_type_id ") \
		_T("                END product_type_id, ") \
		_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
		_T("                ELSE mpt_name ") \
		_T("                END product_type_name ") \
		_T("         FROM   m_product_type ") \
		_T("         WHERE  mpt_org_id = '%s' ") \
		_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
		_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndItemGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSImportPaymentSheetList::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSImportPaymentSheetList::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSImportPaymentSheetList::OnSupplierSelendok(){
	 
}
/*void CPMSImportPaymentSheetList::OnSupplierSetfocus(){
	
}*/
/*void CPMSImportPaymentSheetList::OnSupplierKillfocus(){
	
}*/
long CPMSImportPaymentSheetList::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
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
/*void CPMSImportPaymentSheetList::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSImportPaymentSheetList::OnAllSelect(){
	
}
void CPMSImportPaymentSheetList::OnInternalSelect(){
	
}
void CPMSImportPaymentSheetList::OnKho708Select(){
	
}
void CPMSImportPaymentSheetList::OnPaidSelect(){
	
}
	void CPMSImportPaymentSheetList::OnGroupByTypeSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CPMSImportPaymentSheetList::OnGeneralReportsSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CPMSImportPaymentSheetList::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	//if(!m_bGeneralReports)
	//{
		OnPrint();
	//}
	//else
	//{
	//	OnPrint1();
	//}
} 
void CPMSImportPaymentSheetList::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	//if(!m_bGeneralReports)
	//{
		OnExport();
	/*}
	else
	{
		OnExport1();
	}*/
}
void CPMSImportPaymentSheetList::OnPrint(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL, *rptFooter = NULL;
	CString szSQL, tmpStr, szField, szTemp;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldGroup, szNewGroup, szStorages;
	double nTmp = 0;
	double nGrpAmt = 0, nTtlAmt = 0,nTtlAmt1=0,nGrpAmt1=0, nGrpAmt2 = 0, nTtlAmt2 = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKEPHIEUNHAP_THANHTOAN.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("To\xE0n \x62\x1ED9");
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(1);
		}
	}
	if (!szStorages.IsEmpty())
		rptHeader->SetValue(_T("StockName"), szStorages);
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
	// 	if (!m_szTypeKey.IsEmpty())
	// 		rptHeader->SetValue(_T("Type"), m_wndType.GetCurrent(1));
	// 	else
	// 		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		if (m_bGroupByType)
			tmpStr = _T("product_groupid");
		else
			tmpStr = _T("dept");
		rs.GetValue(tmpStr, szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				rptDetail->SetValue(_T("s5"), ToString(nGrpAmt));
				rptDetail->SetValue(_T("s8"), ToString(nGrpAmt2));
				rptDetail->SetValue(_T("s9"), ToString(nGrpAmt1));
				nTtlAmt += nGrpAmt;
				nTtlAmt2 += nGrpAmt2;
				nTtlAmt1 += nGrpAmt1;
				nGrpAmt = 0;
				nGrpAmt2 = 0;
				nGrpAmt1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				if (m_bGroupByType)
					tmpStr = rs.GetValue(_T("product_groupname"));
				else
					tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			nIdx = 1;
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("ordno")));
		rs.GetValue(_T("impdte"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept")));
		rs.GetValue(_T("ttlamt"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.GetValue(_T("ttNo"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		nGrpAmt2 += str2double(tmpStr);

		rs.GetValue(_T("ttpayment"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nGrpAmt1 += str2double(tmpStr);

		rs.GetValue(_T("paymentdate"), tmpStr);
		rptDetail->SetValue(_T("10"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rptDetail->SetValue(_T("7"), rs.GetValue(_T("invno")));
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
		//rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt2);
		rptDetail->SetValue(_T("s8"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt1);
		rptDetail->SetValue(_T("s9"), tmpStr);
		nTtlAmt += nGrpAmt;
		nTtlAmt2 += nGrpAmt2;
		nTtlAmt1 += nGrpAmt1;
		nGrpAmt = 0;
		nGrpAmt2 = 0;
		nGrpAmt1=0;
	}
	if (nTtlAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt2);
		rptDetail->SetValue(_T("s8"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt1);
		rptDetail->SetValue(_T("s9"), tmpStr);
	}
	////Footer
	//rptFooter = rpt.GetReportFooter();

	//	szSQL = GetQueryString1();
	//	rs.ExecSQL(szSQL);
	//	if (!rs.IsEOF())
	//	{
	//		//l1..l4
	//		int nIdx = 1;
	//		for (int i = 0; i < rs.GetFieldCount(); i++)
	//		{
	//			szTemp = rs.GetFieldName(i);
	//			szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
	//			rs.GetValue(szField, nTmp);
	//			if (nTmp > 0)
	//			{
	//				tmpStr.Format(_T("l%d"), nIdx);
	//				TranslateString(szField, szTemp);
	//				rptFooter->SetValue(tmpStr, szTemp);
	//				tmpStr.Format(_T("s%d"), nIdx);
	//				FormatCurrency(nTmp, szTemp);
	//				szTemp += _T(" \x111\x1ED3ng.");
	//				rptFooter->SetValue(tmpStr, szTemp);
	//				nIdx++;
	//			}
	//		}
	//	}

	//	szSQL = GetQueryString3();
	//	rs.ExecSQL(szSQL);
	//	if (!rs.IsEOF())
	//	{
	//		//l1..l4
	//		int nIdx = 1;
	//		for (int i = 0; i < rs.GetFieldCount(); i++)
	//		{
	//			szTemp = rs.GetFieldName(i);
	//			szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
	//			rs.GetValue(szField, nTmp);
	//			if (nTmp > 0)
	//			{
	//				tmpStr.Format(_T("t%d"), nIdx);
	//				TranslateString(szField, szTemp);
	//				rptFooter->SetValue(tmpStr, szTemp);
	//				tmpStr.Format(_T("x%d"), nIdx);
	//				FormatCurrency(nTmp, szTemp);
	//				szTemp += _T(" \x111\x1ED3ng.");
	//				rptFooter->SetValue(tmpStr, szTemp);
	//				nIdx++;
	//			}
	//		}
	//	}
	rptFooter = rpt.GetReportFooter();
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPMSImportPaymentSheetList::OnPrint1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL, *rptFooter = NULL;
	CString szSQL, tmpStr, szField, szTemp;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldGroup, szNewGroup, szStorages;
	double nTmp = 0;
	double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKETONGHOPPHIEUNHAP.RPT")))
		return;
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("To\xE0n \x62\x1ED9");
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(1);
		}
	}
	if (!szStorages.IsEmpty())
		rptHeader->SetValue(_T("StockName"), szStorages);
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept")));
		rs.GetValue(_T("ttlamt"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.GetValue(_T("payment"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nGrpAmt2 += str2double(tmpStr);
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt2);
		rptDetail->SetValue(_T("s6"), tmpStr);
	}
	//Footer
	rptFooter = rpt.GetReportFooter();

		szSQL = GetQueryString1();
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			//l1..l4
			int nIdx = 1;
			for (int i = 0; i < rs.GetFieldCount(); i++)
			{
				szTemp = rs.GetFieldName(i);
				szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
				rs.GetValue(szField, nTmp);
				if (nTmp > 0)
				{
					tmpStr.Format(_T("l%d"), nIdx);
					TranslateString(szField, szTemp);
					rptFooter->SetValue(tmpStr, szTemp);
					tmpStr.Format(_T("s%d"), nIdx);
					FormatCurrency(nTmp, szTemp);
					szTemp += _T(" \x111\x1ED3ng.");
					rptFooter->SetValue(tmpStr, szTemp);
					nIdx++;
				}
			}
		}
		szSQL = GetQueryString3();
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			//l1..l4
			int nIdx = 1;
			for (int i = 0; i < rs.GetFieldCount(); i++)
			{
				szTemp = rs.GetFieldName(i);
				szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
				rs.GetValue(szField, nTmp);
				if (nTmp > 0)
				{
					tmpStr.Format(_T("t%d"), nIdx);
					TranslateString(szField, szTemp);
					rptFooter->SetValue(tmpStr, szTemp);
					tmpStr.Format(_T("x%d"), nIdx);
					FormatCurrency(nTmp, szTemp);
					szTemp += _T(" \x111\x1ED3ng.");
					rptFooter->SetValue(tmpStr, szTemp);
					nIdx++;
				}
			}
		}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
void CPMSImportPaymentSheetList::OnExport(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldGroup, szNewGroup;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 40);
	xls.SetColumnWidth(4, 30);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow+1, 3);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow+2, 7);
	xls.SetCellText(nCol, nRow+2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU NH\x1EACP"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow+3, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 4;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedRows(nCol+4, nRow, 2);
	xls.SetCellMergedRows(nCol+5, nRow, 2);
	xls.SetCellMergedRows(nCol+6, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("Phi\x1EBFu nh\x1EADp"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow+1, _T("S\x1ED1 \x63h\x1EE9ng t\x1EEB"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow+1, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("Ngu\x1ED3n h\xE0ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow, _T("N\x1EE3"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		if (m_bGroupByType)
			tmpStr = _T("product_groupid");
		else
			tmpStr = _T("dept");

		rs.GetValue(tmpStr, szNewGroup);

		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
				xls.SetCellText(nCol+4, nRow, ToString(nGrpAmt), FMT_NUMBER1, true);
				xls.SetCellText(nCol+5, nRow, ToString(nGrpAmt2), FMT_NUMBER1, true);
				nTtlAmt += nGrpAmt;
				nTtlAmt2 += nGrpAmt2;
				nGrpAmt = 0;
				nGrpAmt2 = 0;
				nRow++;
			}
			if (m_bGroupByType)
				rs.GetValue(_T("product_groupname"), tmpStr);
			else
				tmpStr = szNewGroup;
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			nRow++;
			szOldGroup = szNewGroup;
			nIdx = 1;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("ordno")), FMT_TEXT);
		rs.GetValue(_T("impdte"), tmpStr);
		xls.SetCellText(nCol+2, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		rs.GetValue(_T("ttlamt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		if(rs.GetValue(_T("payment")) == _T("N"))
		{
			xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
			nGrpAmt2 += str2double(tmpStr);
		}
		xls.SetCellText(nCol+6, nRow, rs.GetValue(_T("invno")), FMT_TEXT);
		rs.MoveNext();
		nRow++;
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
		nTtlAmt += nGrpAmt;
		tmpStr.Format(_T("%f"), nGrpAmt2);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1, true);
		nTtlAmt2 += nGrpAmt2;
		nRow++;
	}
	if (nTtlAmt > 0)
	{
		xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nTtlAmt);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTtlAmt2);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGKETSUDUNGTHUOCTAIDONVI.xls"));
} 

void CPMSImportPaymentSheetList::OnExport1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldGroup, szNewGroup;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 70);
	xls.SetColumnWidth(2, 40);
	xls.SetColumnWidth(3, 40);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow+1, 2);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow+2, 4);
	xls.SetCellText(nCol, nRow+2, _T("\x42\x1EA2NG K\xCA T\x1ED4NG H\x1EE2P PHI\x1EBEU NH\x1EACP"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow+3, 4);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 4;
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("\x43\xF4ng ty"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("N\x1EE3"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		rs.GetValue(_T("ttlamt"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		rs.GetValue(_T("payment"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt2 += str2double(tmpStr);
		rs.MoveNext();
		nRow++;
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 2);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nGrpAmt2);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGKETSUDUNGTHUOCTAIDONVI.xls"));
}
int CPMSImportPaymentSheetList::OnAddPMSImportPaymentSheetList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSImportPaymentSheetList::OnEditPMSImportPaymentSheetList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSImportPaymentSheetList::OnDeletePMSImportPaymentSheetList(){
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
 		OnCancelPMSImportPaymentSheetList();
 	}
	return 0;
}
int CPMSImportPaymentSheetList::OnSavePMSImportPaymentSheetList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMSImportPaymentSheetListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSImportPaymentSheetList::OnCancelPMSImportPaymentSheetList(){
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
int CPMSImportPaymentSheetList::OnPMSImportPaymentSheetListListLoadData(){
	return 0;
}
CString CPMSImportPaymentSheetList::GetQueryString(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages, szCondition;

	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
	}
	
	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}
	
	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());

	if (m_bGroupByType)
		szCondition = _T(" product_groupid, product_groupname,");

	if(m_nAll == 0)
		szWhere.Format(_T(" "));
	/*if(m_nInternal == 0)
		szWhere.Format(_T("WHERE resouces = 'I'"));
	if(m_nKho708 == 0)
		szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
	if(m_nPaid == 0)
		szWhere.Format(_T("WHERE resouces = 'P'"));*/

	szSQL.Format(_T(" SELECT doctype,") \
		_T("   ordno,") \
		_T("   invno,") \
		_T("   deptid,") \
		_T("   dept,") \
		_T("   impdte, %s") \
		_T("   ROUND(SUM(ttlamt), 0) AS ttlamt,") \
		_T("   ROUND(sum(ttpayment),0) as ttpayment, ") \
		_T("   ROUND(sum(ttNo),0) as ttNo, ") \
		_T("	paymentdate, ") \
		_T("   payment") \
		_T(" FROM") \
		_T("  (  SELECT po_doctype as doctype,") \
		_T("     po_orderno as ordno ,") \
		_T("     po_invoiceno as invno,") \
		_T("     po_partner_id as deptid,") \
		_T("     Get_partnername(po_partner_id) as dept,") \
		_T("     TRUNC(po_approveddate) as impdte,") \
		_T("     pol_qtyimport*product_taxprice as ttlamt,") \
		_T("     NVL(po_saleperson_id, 'P'),") \
		_T("	 case when po_payment ='Y' and pp_acctdate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
		_T("	 then pol_qtyimport*product_taxprice else 0 end as ttpayment, ") \
		_T("	 case when po_payment ='Y' and pp_acctdate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
		_T("	 then trunc(pp_acctdate) else null end as paymentdate, ") \
		_T("	 case when  pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') or  po_payment <>'Y' ") \
		_T("	 then pol_qtyimport*product_taxprice else 0 end as ttNo, ") \
		_T("	 po_payment as payment") \
		_T("   FROM purchase_order") \
		_T("	LEFT JOIN purchase_payment ON (po_refpayment_id=pp_purchase_payment_id)") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A' and po_saleperson_id='P' %s") \
		_T("   ) %s") \
		_T(" GROUP BY doctype,") \
		_T("   ordno,") \
		_T("   invno,") \
		_T("   deptid,") \
		_T("   dept,") \
		_T("   impdte, %s") \
		_T("   payment,paymentdate ") \
		_T(" ORDER BY doctype, %s") \
		_T("   dept, impdte"), szCondition,m_szPaymentDate,m_szPaymentDate,m_szPaymentDate, szPurchaseWhere, szWhere, szCondition, szCondition);
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}

CString CPMSImportPaymentSheetList::GetQueryString1(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages, szCondition;

	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"), szStorages, szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
	}

	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}

	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());

	if(m_nAll == 0)
		szWhere.Format(_T(" "));
	if(m_nInternal == 0)
		szWhere.Format(_T("WHERE resouces = 'I'"));
	if(m_nKho708 == 0)
		szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
	if(m_nPaid == 0)
		szWhere.Format(_T("WHERE resouces = 'P'"));

	szSQL.Format(_T(" SELECT ROUND(SUM(noibo), 0) AS noibo,") \
		_T("   ROUND(SUM(kho708), 0)     AS kho708,") \
		_T("   ROUND(SUM(thanhtoan), 0)  AS thanhtoan") \
		_T(" FROM") \
		_T("   (SELECT mtl_qtydelivery*product_taxprice AS noibo,") \
		_T("     CASE") \
		_T("       WHEN mt_department_id IN ('708')") \
		_T("       THEN mtl_qtydelivery   *product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS kho708,") \
		_T("     0   AS thanhtoan,") \
		_T("     mt_department_id                     AS deptid,") \
		_T("     CAST ('I' AS NVARCHAR2(1))       AS resouces") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( mtl_product_item_id = product_item_id )") \
		_T("   WHERE mt_status          = 'A'") \
		_T("   AND (mt_doctype IN('IMP', 'DRO', 'CRO') OR (mt_doctype = 'MOV' AND mt_storage_id NOT IN (%s))) %s") \
		_T("   UNION ALL") \
		_T("   SELECT") \
		_T("     CASE") \
		_T("       WHEN NVL(po_saleperson_id, 'P') = 'I'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS noibo,") \
		_T("     CASE") \
		_T("       WHEN NVL(po_saleperson_id, 'P') = 'I'") \
		_T("       AND po_partner_id    IN ('708')") \
		_T("       THEN pol_qtyimport     *product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS kho708,") \
		_T("     CASE") \
		_T("       WHEN NVL(po_saleperson_id, 'P') = 'P'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS thanhtoan,") \
		_T("     po_partner_id,") \
		_T("     NVL(po_saleperson_id, 'P')") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A' %s") \
		_T("   ) tbl %s"), szStorages, szTransactionWhere, szPurchaseWhere, szWhere);
	_fmsg(_T("%s"),szSQL);
	
	return szSQL;

}

CString CPMSImportPaymentSheetList::GetQueryString3(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages, szCondition;

	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"), szStorages, szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
	}

	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}

	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());

	if(m_nAll == 0)
		szWhere.Format(_T(" "));
	if(m_nInternal == 0)
		szWhere.Format(_T("WHERE resouces = 'I'"));
	if(m_nKho708 == 0)
		szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
	if(m_nPaid == 0)
		szWhere.Format(_T("WHERE resouces = 'P'"));

	szSQL.Format(_T(" SELECT ROUND(SUM(thuoc), 0) AS drug,") \
		_T("   ROUND(SUM(hoachat), 0)    AS chemicals,") \
		_T("   ROUND(SUM(bbg), 0)        AS cotton,") \
		_T("   ROUND(SUM(duoclieu), 0)   AS herb,") \
		_T("   ROUND(SUM(tpdd), 0)       AS compound,") \
		_T("   ROUND(SUM(ycu), 0)        AS instrument,") \
		_T("   ROUND(SUM(tpcn),0)       AS tpcn ") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     CASE") \
		_T("       WHEN (instr(product_producttype, 'A11') > 0") \
		_T("       OR product_producttype IN ('A1400', 'A6000'))") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS thuoc,") \
		_T("     CASE") \
		_T("       WHEN instr(product_producttype, 'A12') > 0") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS hoachat,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1500'") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS bbg,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1302'") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS duoclieu,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1301'") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS tpdd,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1600'") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS ycu,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1700'") \
		_T("       THEN mtl_qtydelivery * product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS tpcn,") \
		_T("     mt_department_id           AS deptid,") \
		_T("     CAST ('I' AS NVARCHAR2(1)) AS resouces") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id = mtl_product_item_id)") \
		_T("   WHERE mt_status          = 'A'") \
		_T("   AND (mt_doctype         IN('IMP', 'DRO', 'CRO')") \
		_T("   OR (mt_doctype           = 'MOV'") \
		_T("   AND mt_storage_id NOT   IN (%s))) %s") \
		_T("   UNION ALL") \
		_T("   SELECT") \
		_T("     CASE") \
		_T("       WHEN (instr(product_producttype, 'A11') > 0") \
		_T("       OR product_producttype IN ('A1400', 'A6000'))") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS thuoc,") \
		_T("     CASE") \
		_T("       WHEN instr(product_producttype, 'A12') > 0") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS hoachat,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1500'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS bbg,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1302'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS duoclieu,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1301'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS tpdd,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1600'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS ycu,") \
		_T("     CASE") \
		_T("       WHEN product_producttype = 'A1700'") \
		_T("       THEN pol_qtyimport*product_taxprice") \
		_T("       ELSE 0") \
		_T("     END AS tpcn,") \
		_T("     po_partner_id,") \
		_T("     NVL(po_saleperson_id, 'P')") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id = pol_product_item_id)") \
		_T("   WHERE po_status      = 'A' %s") \
		_T("   ) tbl %s"), szStorages, szTransactionWhere, szPurchaseWhere, szWhere);
	
	return szSQL;
}

CString CPMSImportPaymentSheetList::GetQueryString2(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages, szCondition;

	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"), szStorages, szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
	}

	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}

	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());

	if (m_bGroupByType)
		szCondition = _T(" product_groupid, product_groupname,");

	if(m_nAll == 0)
		szWhere.Format(_T(" "));
	if(m_nInternal == 0)
		szWhere.Format(_T("WHERE resouces = 'I'"));
	if(m_nKho708 == 0)
		szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
	if(m_nPaid == 0)
		szWhere.Format(_T("WHERE resouces = 'P'"));

	szSQL.Format(_T(" SELECT dept,") \
		_T(" ROUND(SUM(ttlamt), 0) AS ttlamt,") \
		_T(" ROUND(SUM(payment), 0) AS payment") \
		_T(" FROM") \
		_T(" (SELECT dept,") \
		_T(" ttlamt,") \
		_T(" CASE") \
		_T(" WHEN payment = 'N'") \
		_T(" THEN ttlamt") \
		_T(" ELSE 0") \
		_T(" END payment") \
		_T(" FROM") \
		_T(" (") \
		_T("   SELECT mt_doctype                     AS doctype,") \
		_T("     mt_orderno                           AS ordno,") \
		_T("     CAST(0 AS NVARCHAR2(1))              AS invno,") \
		_T("     mt_department_id                     AS deptid,") \
		_T("     Get_departmentname(mt_department_id) AS dept,") \
		_T("     TRUNC(mt_approveddate)               AS impdte,") \
		_T("     product_groupid,") \
		_T("     product_groupname,") \
		_T("     mtl_qtydelivery*product_taxprice AS ttlamt,") \
		_T("     CAST ('I' AS NVARCHAR2(1))       AS resouces,") \
		_T("	 CAST ('Y' AS NVARCHAR2(1))		  AS payment ") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( mtl_product_item_id = product_item_id )") \
		_T("   WHERE mt_status          = 'A'") \
		_T("   AND (mt_doctype IN('IMP', 'DRO', 'CRO') OR (mt_doctype = 'MOV' AND mt_storage_id NOT IN (%s))) %s") \
		_T("   UNION ALL") \
		_T("   SELECT po_doctype,") \
		_T("     po_orderno,") \
		_T("     po_invoiceno,") \
		_T("     po_partner_id,") \
		_T("     Get_partnername(po_partner_id),") \
		_T("     TRUNC(po_approveddate),") \
		_T("     product_groupid,") \
		_T("     product_groupname,") \
		_T("     pol_qtyimport*product_taxprice,") \
		_T("     NVL(po_saleperson_id, 'P'),") \
		_T("	 po_payment") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A' %s") \
		_T("   ) %s") \
		_T("   )") \
		_T(" GROUP BY dept") \
		_T(" ORDER BY dept"), szStorages, szTransactionWhere, szPurchaseWhere, szWhere);
	return szSQL;
}
