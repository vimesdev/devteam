#include "PMSPrescriptionReturnList.h"
#include "MainFrame_E10.h"
#include "PMSPrescriptionReturnDialog.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionReturnList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList *)pWnd)->OnStorageAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnList *pVw = (CPMSPrescriptionReturnList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnList*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionReturnList*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListAddItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnOrderListAddItem();
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnList*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnList*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionReturnList*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnItemListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnList *pVw = (CPMSPrescriptionReturnList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnList *pVw = (CPMSPrescriptionReturnList *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnPrintDrugReturnFnc(CWnd *pWnd){
	CPMSPrescriptionReturnList *pVw = (CPMSPrescriptionReturnList *)pWnd;
	return pVw->PrintDrugReturn();
}
static int _OnPrintSaleImportFnc(CWnd *pWnd){
	CPMSPrescriptionReturnList *pVw = (CPMSPrescriptionReturnList *)pWnd;
	return pVw->PrintSaleImport();
}
static int _OnAddPMSPrescriptionReturnListFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnAddPMSPrescriptionReturnList();
} 
static int _OnEditPMSPrescriptionReturnListFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnEditPMSPrescriptionReturnList();
} 
static int _OnDeletePMSPrescriptionReturnListFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnDeletePMSPrescriptionReturnList();
} 
static int _OnSavePMSPrescriptionReturnListFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnSavePMSPrescriptionReturnList();
} 
static int _OnCancelPMSPrescriptionReturnListFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnCancelPMSPrescriptionReturnList();
} 
static int _OnRollbackReturnFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnList*)pWnd)->OnRollbackReturn();
}
CPMSPrescriptionReturnList::CPMSPrescriptionReturnList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPMSPrescriptionReturnList::~CPMSPrescriptionReturnList(){
}
void CPMSPrescriptionReturnList::OnCreateComponents(){
	m_wndOrderListInformation.Create(this, _T("Order List"), 5, 65, 810, 305);
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 310, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 295, 55);
	m_wndToDate.Create(this,300, 30, 395, 55); 
	m_wndStorageLabel.Create(this, _T("From Storage"), 400, 30, 490, 55);
	m_wndStorage.Create(this,495, 30, 775, 55); 
	m_wndRefresh.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndOrderList.Create(this,10, 90, 805, 300); 
	m_wndItemList.Create(this,10, 335, 805, 585); 
	m_wndAdd.Create(this, _T("&Create Return Order"), 660, 595, 810, 620);

}
void CPMSPrescriptionReturnList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);



	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndOrderList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Return Order ID"), CFMT_NUMBER, 100);
	m_wndOrderList.InsertColumn(2, _T("Return Date"), CFMT_DATETIME, 120);
	m_wndOrderList.InsertColumn(3, _T("Document No"), CFMT_TEXT, 90);
	m_wndOrderList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(5, _T("Age"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(6, _T("Sex"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(7, _T("Approved By"), CFMT_TEXT, 60);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(1);

	m_wndItemList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndItemList.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 175);
	m_wndItemList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndItemList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndItemList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 80);
	m_wndItemList.InsertColumn(6, _T("Prod.Country"), CFMT_TEXT, 90);
	m_wndItemList.InsertColumn(7, _T("Lot No"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(8, _T("Exp Date"), CFMT_DATE, 80);


	

	m_wndRefresh.ModifyStyle(WS_TABSTOP, 0);

}
void CPMSPrescriptionReturnList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Create Return Order"), _OnOrderListAddItemFnc);
	m_wndOrderList.AddEvent(2, _T("Print Drug Return"), _OnPrintDrugReturnFnc, 0, 0, 0);
	m_wndOrderList.AddEvent(3, _T("Print Sale Import"), _OnPrintSaleImportFnc, 0, 0, 0);
	m_wndOrderList.AddEvent(4, _T("Rollback Return"), _OnRollbackReturnFnc, 0, 0, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
//	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSPrescriptionReturnListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSPrescriptionReturnListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSPrescriptionReturnListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSPrescriptionReturnListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMSPrescriptionReturnListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_VIEW);

}
void CPMSPrescriptionReturnList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CPMSPrescriptionReturnList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionReturnList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSPrescriptionReturnList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();

}
int CPMSPrescriptionReturnList::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate = m_szToDate = pMF->GetSysDate();
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
/*void CPMSPrescriptionReturnList::OnFromDateChange(){
	
} */
/*void CPMSPrescriptionReturnList::OnFromDateSetfocus(){
	
} */
/*void CPMSPrescriptionReturnList::OnFromDateKillfocus(){
	
} */
int CPMSPrescriptionReturnList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionReturnList::OnToDateChange(){
	
} */
/*void CPMSPrescriptionReturnList::OnToDateSetfocus(){
	
} */
/*void CPMSPrescriptionReturnList::OnToDateKillfocus(){
	
} */
int CPMSPrescriptionReturnList::OnToDateCheckValue(){
	return 0;
} 
void CPMSPrescriptionReturnList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CPMSPrescriptionReturnList::OnStorageSelendok(){
	OnOrderListLoadData();
}
/*void CPMSPrescriptionReturnList::OnStorageSetfocus(){
	
}*/
/*void CPMSPrescriptionReturnList::OnStorageKillfocus(){
	
}*/
long CPMSPrescriptionReturnList::OnStorageLoadData(){
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
/*void CPMSPrescriptionReturnList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionReturnList::OnRefreshSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CPMSPrescriptionReturnList::OnOrderListDblClick(){

} 
void CPMSPrescriptionReturnList::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nNewItem, 1));
	OnItemListLoadData();
} 
int CPMSPrescriptionReturnList::OnOrderListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPMSPrescriptionReturnList();
	return 0;
} 
int CPMSPrescriptionReturnList::OnOrderListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionReturnList::OnOrderListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hpo_docno docno,") \
_T("   get_patientname(hpo_docno) pname,") \
_T("   HMS_GETAGE(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
_T("   HMS_GetSex(hp_sex)                            AS sex,") \
_T("   hpo_pharmareturnorder_id as orderid,") \
_T("   hpo_approveddate as approveddate, ") \
_T("   hpo_approvedby approvedby") \
_T(" FROM hms_pharmareturnorder") \
_T(" LEFT JOIN hms_doc ON (hd_docno = hpo_docno)") \
_T(" LEFT JOIN hms_patient ON (hp_patientno = hd_patientno)") \
_T(" WHERE trunc_date(hpo_approveddate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
_T(" AND hpo_storage_id=%d ") \
_T(" AND hpo_status = 'A'") \
_T(" AND hpo_doctype   IN ('DRO', 'RRO') "), m_szFromDate, m_szToDate, str2int(m_szStorageKey));

	nCount = rs.ExecSQL(szSQL);

	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndOrderList.AddItems(
			tmpStr, 
			rs.GetValue(_T("OrderID")), 
			rs.GetValue(_T("approvedDate")),
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("approvedby")),
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CPMSPrescriptionReturnList::OnItemListDblClick(){
	
} 
void CPMSPrescriptionReturnList::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionReturnList::OnItemListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPrescriptionReturnList::OnItemListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ") \
				_T("   product_item_id,") \
				_T("   product_name,") \
				_T("   product_uomname,") \
				_T("   product_countryname,") \
				_T("   hpol_unitprice as product_unitprice,") \
				_T("   product_lotno,") \
				_T("   product_expdate,") \
				_T("   SUM(hpol_qtyreturn)                AS product_qtyreverse,") \
				_T("   SUM(hpol_qtyreturn*hpol_unitprice) AS product_amount") \
				_T(" FROM hms_pharmareturnorder_line") \
				_T(" LEFT JOIN m_productitem_view") \
				_T(" ON(product_item_id             =hpol_product_item_id)") \
				_T(" WHERE hpol_pharmareturnorder_id=%ld ") \
				_T(" GROUP BY ") \
				_T("   product_item_id,") \
				_T("   product_name,") \
				_T("   product_uomname,") \
				_T("   product_countryname,") \
				_T("   hpol_unitprice,") \
				_T("   product_lotno,") \
				_T("   product_expdate") \
				_T(" ORDER BY product_name "), m_nOrderID);

	//Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndItemList.AddItems(
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_qtyreverse")), 
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_countryname")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("product_expdate")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CPMSPrescriptionReturnList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionReturnList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPMSPrescriptionReturnList();
} 
int CPMSPrescriptionReturnList::OnAddPMSPrescriptionReturnList(){
 //	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 //		return -1;
	UpdateData(true);
	if(m_szStorageKey.IsEmpty())
	{
		ShowMessageBox(_T("No warehouses selected"));
		return 0;
	}
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CPMSPrescriptionReturnDialog dlg(this, VM_ADD);
	dlg.m_nStorageID = str2int(m_szStorageKey);
	
	if(dlg.DoModal() == IDOK){
		OnOrderListLoadData();
	}
	return 0;
}
int CPMSPrescriptionReturnList::OnEditPMSPrescriptionReturnList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionReturnList::OnDeletePMSPrescriptionReturnList(){
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
 		OnCancelPMSPrescriptionReturnList();
 	}
	return 0;
}
int CPMSPrescriptionReturnList::OnSavePMSPrescriptionReturnList(){
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
 		//OnPMSPrescriptionReturnListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSPrescriptionReturnList::OnCancelPMSPrescriptionReturnList(){
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
int CPMSPrescriptionReturnList::OnPMSPrescriptionReturnListListLoadData(){
	return 0;
}
int CPMSPrescriptionReturnList::PrintDrugReturn(){
	CPrintForms printer;
	printer.PrintDrugReturn(m_nOrderID);
	return 0;
}

int CPMSPrescriptionReturnList::PrintSaleImport(){
	CPrintForms printer;
	printer.E10_PrintSaleImport(m_nOrderID);
	return 0;
}

int CPMSPrescriptionReturnList::OnRollbackReturn(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("10.20")))
	{
		AfxMessageBox(_T("Permission Denied."));
		return -1;
	}
	CString szSQL;
	int nRet = 0;
	if (m_nOrderID <= 0)
		return -1;
	if(ShowMessageBox(_T("Do you want to rollback this order?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("HMS_PHARMARETURNORDER_ROLLBACK(%ld)"), m_nOrderID);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
		AfxMessageBox(_T("Rollback Successfully!"));
	else if (nRet == -2)
		AfxMessageBox(_T("\x43\xF3 phi\x1EBFu \x63hi \x111\xE3 \x64uy\x1EC7t!"));
	else if (nRet == -3)
		AfxMessageBox(_T("S\x1ED1 l\x1B0\x1EE3ng trong kho kh\xF4ng \x111\x1EE7!"));
	else
		AfxMessageBox(_T("L\x1ED7i kh\xF4ng \x78\xE1\x63 \x111\x1ECBnh!"));
	return nRet;
}

void CPMSPrescriptionReturnList::OnResizeLayout() {
	AddResize(&m_wndOrderList, 100, 100);
	AddResize(&m_wndItemList, 100, 100);
	AddResize(&m_wndOrderListInformation, 100, 100);
	AddResize(&m_wndItemInformation, 100, 100);
	AddBottom(&m_wndAdd);
}