#include "POAutoCreateItemDialog.h"
#include "MainFrame_E10.h"
#include ".\poautocreateitemdialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameCheckValue();
}
static int _OnItemNameCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnItemNameCheckValue();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnMaterialListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListLoadData();
} 
static void _OnMaterialListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListDblClick();
} 
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListDeleteItem();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListDeleteItem();
} 


static int _OnSelectedListEditQuantityFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListEditQuantity();
} 


static void _OnApplySelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog *pVw = (CPOAutoCreateItemDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog *pVw = (CPOAutoCreateItemDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnAddPOAutoCreateItemDialog();
} 
static int _OnEditPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnEditPOAutoCreateItemDialog();
} 
static int _OnDeletePOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnDeletePOAutoCreateItemDialog();
} 
static int _OnSavePOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnSavePOAutoCreateItemDialog();
} 
static int _OnCancelPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnCancelPOAutoCreateItemDialog();
} 
CPOAutoCreateItemDialog::CPOAutoCreateItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nPurchaseOrder_ID = 0;
	m_nTemplateStorage_ID = 12;
}
CPOAutoCreateItemDialog::~CPOAutoCreateItemDialog(){
}
void CPOAutoCreateItemDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 570);
	m_wndSelectedItems.Create(this, _T("Selected Items"), 480, 5, 960, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 130, 55);
	m_wndFromDate.Create(this,135, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 360, 55);
	m_wndToDate.Create(this,365, 30, 465, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 130, 85);
	m_wndDocumentNo.Create(this,135, 60, 235, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 240, 60, 360, 85);
	m_wndPatientName.Create(this,365, 60, 465, 85);

	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 90, 130, 115);
	m_wndItemName.Create(this,135, 90, 465, 115);
	
	m_wndPatientList.Create(this,10, 120, 470, 380); 
	m_wndMaterialList.Create(this,10, 385, 470, 565); 
	m_wndSelectedList.Create(this,485, 29, 955, 565); 
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);

}
void CPOAutoCreateItemDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetNotEmpty(false);

	m_wndPatientList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("YOB"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(5, _T("Department"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(6, _T("Object"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(7, _T(""), CFMT_TEXT, 0); //order_class


	m_wndMaterialList.SetSortHeader(false);
	m_wndMaterialList.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //product_id
	m_wndMaterialList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 40);
	m_wndMaterialList.InsertColumn(2, _T("Material Name"), CFMT_TEXT, 250);
	m_wndMaterialList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndMaterialList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 40);
	m_wndMaterialList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndMaterialList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 90);


	m_wndSelectedList.SetSortHeader(false);
	m_wndSelectedList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//product_id
	m_wndSelectedList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 40);
	m_wndSelectedList.InsertColumn(2, _T("Material Name"), CFMT_TEXT, 250);
	m_wndSelectedList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndSelectedList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 40);
	m_wndSelectedList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndSelectedList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 90);
	m_wndSelectedList.InsertColumn(7, _T("uomrate"), CFMT_NUMBER, 0);

	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDER_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_PURCHASE_ORDERLINE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_ORG_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_USER_ID"), dfText, 32); 
	m_purchase_orderlineTbl.AddField(_T("POL_STORAGE_ID"), dfInteger); 
	m_purchase_orderlineTbl.AddField(_T("POL_PRODUCT_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_UNITPRICE"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_QTYORDER"), dfDouble); 
	m_purchase_orderlineTbl.AddField(_T("POL_TAX_ID"), dfInteger); 
	m_purchase_orderlineTbl.AddField(_T("POL_LOTNO"), dfText, 15); 
	m_purchase_orderlineTbl.AddField(_T("POL_EXPDATE"), dfDate); 
	m_purchase_orderlineTbl.AddField(_T("POL_MANUFACTURE_ID"), dfLong); 
	m_purchase_orderlineTbl.AddField(_T("POL_RESOURCE_ID"), dfLong); 

}
void CPOAutoCreateItemDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndItemName.SetEvent(WE_CHECKVALUE, _OnItemNameCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0);
	m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
	m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
	m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
	m_wndMaterialList.AddEvent(1, _T("Delete"), _OnMaterialListDeleteItemFnc, 0);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0);
	m_wndSelectedList.AddEvent(2, _T("Edit Quantity"), _OnSelectedListEditQuantityFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_VIEW);
	OnPatientListLoadData();
	OnSelectedListLoadData();

}
void CPOAutoCreateItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemName);
}
void CPOAutoCreateItemDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPOAutoCreateItemDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	

}
void CPOAutoCreateItemDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();

}
int CPOAutoCreateItemDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPOAutoCreateItemDialog::OnFromDateChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnFromDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnFromDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnFromDateCheckValue(){
	OnPatientListLoadData();
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnToDateChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnToDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnToDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnToDateCheckValue(){
	OnPatientListLoadData();
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnDocumentNoChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnDocumentNoSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnDocumentNoKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnPatientNameChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnPatientNameSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnPatientNameKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnPatientNameCheckValue(){
	m_wndPatientList.Search(2, m_szPatientName, SEARCH_LIKE);
	return 0;
}
int CPOAutoCreateItemDialog::OnItemNameCheckValue(){
	OnPatientListLoadData();
	return 0;
} 
void CPOAutoCreateItemDialog::OnPatientListDblClick(){
	
} 
void CPOAutoCreateItemDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nDocNo = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_nOrderID = str2long(m_wndPatientList.GetItemText(nNewItem, 0));
	m_szOrderClass = m_wndPatientList.GetItemText(nNewItem, 7);
	OnMaterialListLoadData();

} 
int CPOAutoCreateItemDialog::OnPatientListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog::OnPatientListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" and hpo_docno=%ld "), m_nDocumentNo);
	}
	if(!m_szItemName.IsEmpty())
		szWhere.Format(_T(" and lower(mp_name) like '%s%s%s' "), _T("%"),m_szItemName, _T("%"));
	szSQL.Format(_T(" SELECT hpo_orderid AS orderid,") \
					_T("   hpo_docno        AS docno,") \
					_T("   trim(hp_surname") \
					_T("   ||' '") \
					_T("   ||hp_midname") \
					_T("   ||' '") \
					_T("   ||hp_firstname)                 AS pname,") \
					_T("   extract(YEAR FROM hp_birthdate) AS yearofbirth,") \
					_T("   HMS_GETSEX(hp_sex)              AS sex,") \
					_T("   hpo_deptid                      AS deptid, ") \
					_T("   HMS_GETOBJECTNAME(hd_object)              AS objectname, order_class ") \
					_T(" FROM") \
					_T("   ( ") \
					_T( " SELECT DISTINCT hpo_patientno,") \
					_T("     hpo_docno,") \
					_T("     hpo_orderid,") \
					_T("     hpo_deptid, 'I' as order_class ") \
					_T("   FROM hms_ipharmaorder ") \
					_T("   LEFT JOIN hms_ipharmaorderline ") \
					_T("   ON(hpol_orderid      =hpo_orderid)") \
					_T("   LEFT JOIN m_product ON (mp_product_id = hpol_product_id) ")
					_T("   WHERE hpo_storage_id =%d ") \
					_T("   AND hpo_locked      <>'Y'") \
					_T("   AND hpo_orderstatus  ='A'") \
					_T("   AND (hpol_processed  <>'Y' OR (hpol_processed  ='Y' AND HPOL_QTYREVERSE>0))") \
					_T("   and hpol_supplement <> 'Y'  ") \
					_T("   AND trunc(hpo_approvedate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') %s ") \
					_T("   AND hpol_product_item_id IN") \
					_T("     (SELECT DISTINCT pol_product_item_id") \
					_T("     FROM purchase_order") \
					_T("     LEFT JOIN purchase_orderline") \
					_T("     ON(pol_purchase_order_id=po_purchase_order_id)") \
					_T("     WHERE po_storage_id     =%d) ") \
					_T(" UNION ALL ") \
					_T( " SELECT DISTINCT hpo_patientno,") \
					_T("     hpo_docno,") \
					_T("     hpo_orderid,") \
					_T("     hpo_deptid, 'E' as order_class ") \
					_T("   FROM hms_pharmaorder ") \
					_T("   LEFT JOIN hms_pharmaorderline ") \
					_T("   ON(hpol_orderid      =hpo_orderid)") \
					_T("   LEFT JOIN m_product ON (mp_product_id = hpol_product_id) ")
					_T("   WHERE hpo_storage_id =%d ") \
					_T("   AND hpo_locked      <>'Y'") \
					_T("   AND hpo_orderstatus  ='A'") \
					_T("   AND (hpol_processed  <>'Y' OR (hpol_processed  ='Y' AND HPOL_QTYREVERSE>0))") \
					_T("   and hpol_supplement <> 'Y'  ") \
					_T("   AND trunc(hpo_approvedate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') %s ") \
					_T("   AND hpol_product_item_id IN") \
					_T("     (SELECT DISTINCT pol_product_item_id") \
					_T("     FROM purchase_order") \
					_T("     LEFT JOIN purchase_orderline") \
					_T("     ON(pol_purchase_order_id=po_purchase_order_id)") \
					_T("     WHERE po_storage_id     =%d) ") \
					_T("   ) tbl") \
					_T(" LEFT JOIN hms_doc on(hd_docno=hpo_docno) ") \
					_T(" LEFT JOIN hms_patient") \
					_T(" ON(hp_patientno =hpo_patientno)") \
					_T(" ORDER BY pname,") \
					_T("   docno,") \
					_T("   deptid"), m_nTemplateStorage_ID, m_szFromDate, m_szToDate, szWhere, m_nTemplateStorage_ID,
									m_nTemplateStorage_ID, m_szFromDate, m_szToDate, szWhere, m_nTemplateStorage_ID);
					_fmsg(_T("%s"), szSQL);
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;

	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex=0;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nIndex);
		m_wndPatientList.AddItems(
			rs.GetValue(_T("orderid")),  
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("PName")), 
			rs.GetValue(_T("Yearofbirth")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("order_class")),
			NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
}
void CPOAutoCreateItemDialog::OnMaterialListDblClick(){
	int nSel = m_wndMaterialList.GetCurSel();
	if(nSel < 0) return;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nProductID = str2long(m_wndMaterialList.GetItemText(nSel, 0));
	double nUnitPrice = str2double(m_wndMaterialList.GetItemText(nSel, 5));
	if(m_szOrderClass == _T("E"))
	{
		szSQL.Format(_T("PURCHASE_ORDERLINE2_CREATE_V3(%ld, %ld, %ld, %ld, %f) "),
						m_nPurchaseOrder_ID, m_nDocNo, m_nOrderID, nProductID, nUnitPrice);
	}
	else
		szSQL.Format(_T("PURCHASE_ORDERLINE2_CREATE_V2(%ld, %ld, %ld, %ld, %f) "),
						m_nPurchaseOrder_ID, m_nDocNo, m_nOrderID, nProductID, nUnitPrice);

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndMaterialList.DeleteItem(nSel);
		OnSelectedListLoadData();
		if(m_wndMaterialList.GetItemCount() <= 0)
		{
			OnPatientListLoadData();
		}
		
	}


} 
void CPOAutoCreateItemDialog::OnMaterialListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnMaterialListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog::OnMaterialListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndMaterialList.BeginLoad(); 
	int nCount = 0;
	if(!m_szItemName.IsEmpty())
		szWhere.Format(_T(" and lower(product_name) like '%s%s%s' "), _T("%"),m_szItemName, _T("%"));
	if(m_szOrderClass == _T("E"))
	{
		szSQL.Format(_T(" SELECT product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   SUM(hpol_qtyissue) AS hpol_qtyissue,") \
_T("   hpol_unitprice,") \
_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
_T(" FROM hms_pharmaorderline ") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON (product_item_id       =hpol_product_item_id)") \
_T(" AND hpol_supplement       ='N'") \
_T(" AND hpol_product_item_id IN") \
_T("   (SELECT DISTINCT pol_product_item_id") \
_T("   FROM purchase_order") \
_T("   LEFT JOIN purchase_orderline") \
_T("   ON(pol_purchase_order_id=po_purchase_order_id)") \
_T("   WHERE po_storage_id     =%d") \
_T("   )") \
_T(" WHERE hpol_orderid=%ld %s ") \
_T(" GROUP BY product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   hpol_unitprice") \
_T(" ORDER BY product_name"),  m_nTemplateStorage_ID, m_nOrderID,szWhere);
	}
	else
	{
	szSQL.Format(_T(" SELECT product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   SUM(hpol_qtyissue) AS hpol_qtyissue,") \
_T("   hpol_unitprice,") \
_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
_T(" FROM hms_ipharmaorderline ") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON (product_item_id       =hpol_product_item_id)") \
_T(" AND hpol_supplement       ='N'") \
_T(" AND hpol_product_item_id IN") \
_T("   (SELECT DISTINCT pol_product_item_id") \
_T("   FROM purchase_order") \
_T("   LEFT JOIN purchase_orderline") \
_T("   ON(pol_purchase_order_id=po_purchase_order_id)") \
_T("   WHERE po_storage_id     =%d") \
_T("   )") \
_T(" WHERE hpol_orderid=%ld %s ") \
_T(" GROUP BY product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   hpol_unitprice") \
_T(" ORDER BY product_name"),  m_nTemplateStorage_ID, m_nOrderID,szWhere);
	}
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=0;
	CString tmpStr;
	
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nIndex);
		m_wndMaterialList.AddItems(
			rs.GetValue(_T("product_id")),
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			rs.GetValue(_T("hpol_UnitPrice")), 
			rs.GetValue(_T("hpol_Amount")), NULL);
		rs.MoveNext();
	}
	
	m_wndMaterialList.EndLoad(); 
	return nCount;
}
void CPOAutoCreateItemDialog::OnSelectedListDblClick(){
	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0) return;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nProductID = str2long(m_wndSelectedList.GetItemText(nSel, 0));
	szSQL.Format(_T("PURCHASE_ORDERLINE2_REMOVE(%ld, %ld) "), m_nPurchaseOrder_ID, nProductID);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndSelectedList.DeleteItem(nSel);
		OnPatientListLoadData();
	}

} 
void CPOAutoCreateItemDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnSelectedListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0) 
		return 0;

	int ret = ShowMessageBox(_T("Do you want remove item?(Y/N)"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	CString szSQL;
	long nProductID = str2long(m_wndSelectedList.GetItemText(nSel, 0));
	
	szSQL.Format(_T("PURCHASE_ORDERLINE2_REMOVE(%ld, %ld) "), m_nPurchaseOrder_ID, nProductID);
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_wndSelectedList.DeleteItem(nSel);
		OnPatientListLoadData();
	}
	return 0;
}

#include "POAutoEditQuantityDialog.h"

int CPOAutoCreateItemDialog::OnSelectedListEditQuantity(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nProduct_ID;
	

	nProduct_ID = str2long(m_wndSelectedList.GetItemText(nSel, 0));


	CPOAutoEditQuantityDialog dlg(this);
	dlg.m_nPurchaseOrder_ID = m_nPurchaseOrder_ID;
	dlg.m_nProduct_ID = nProduct_ID;
	if(dlg.DoModal() == IDOK)
	{
	}
	OnSelectedListLoadData();
	return 0;
}


long CPOAutoCreateItemDialog::OnSelectedListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_uomrate, ") \
_T("   sum(pol_qty) as pol_qty, ") \
_T("   ceil(product_unitprice/product_uomrate) as product_unitprice, ") \
_T(" sum(pol_qty*ceil(product_unitprice/product_uomrate)) as product_amount ") \
_T(" FROM purchase_orderline2") \
_T(" LEFT JOIN m_product_view") \
_T(" ON(pol_product_id          =product_id)") \
_T(" WHERE pol_purchase_order_id=%ld and pol_processed='N' ") \
_T(" GROUP BY product_id, product_name, product_uomname, product_uomrate, product_unitprice ") \
_T(" ORDER BY product_name"), m_nPurchaseOrder_ID);

	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	int nIndex=0;
	double nAmount = 0;
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nIndex);
		m_wndSelectedList.AddItems(
			rs.GetValue(_T("product_id")), 
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("pol_qty")), 
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_uomrate")), 
			NULL);
		nAmount += str2double(rs.GetValue(_T("product_amount")));
		rs.MoveNext();
	}

	if(nAmount > 0)
	{
		nIndex = m_wndSelectedList.AddItems(_T(""), _T(""), _T("T\x1ED5ng ti\x1EC1n"), _T(""), _T(""), _T(""), ToString(nAmount), NULL);
		m_wndSelectedList.SetItemTextColor(nIndex, RGB(0, 0, 255), FALSE);
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;

	return 0;
}
void CPOAutoCreateItemDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int uomrate = 0;
	int qty;
	CString szMsg;
	for (int i =0; i < m_wndSelectedList.GetItemCount(); i++)
	{
		uomrate = str2int(m_wndSelectedList.GetItemText(i, 7));
		if(uomrate > 1)
		{
			qty = str2int(m_wndSelectedList.GetItemText(i, 4));
			if(qty % uomrate != 0)
			{
				szMsg.Format(_T("M\x1EB7t h\xE0ng [%s] kh\xF4ng \x111\x1EE7 s\x1ED5 l\x1B0\x1EE3ng quy \x111\x1ED5i(%\x64 -> %\x64)"),
					m_wndSelectedList.GetItemText(i, 2), qty, uomrate);
				ShowMessageBox(szMsg);
				return;
			}
		}
	}
	szSQL.Format(_T("PURCHASE_ORDERLINE2_APPLY(%ld, %d) "), m_nPurchaseOrder_ID, m_nTemplateStorage_ID);
	int ret = str2int(pMF->ExecDML(szSQL));
	OnSelectedListLoadData();
	if(m_wndSelectedList.GetItemCount() <= 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CPOAutoCreateItemDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_wndSelectedList.GetItemCount() > 0){
		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i m\x1EE5\x63 v\x1EADt t\x1EF1 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn.\r\n\x42\x1EA1n ph\x1EA3i [\xC1p \x64\x1EE5ng] tr\x1B0\x1EDB\x63 khi \x111\xF3ng \x63\x1EED\x61 s\x1ED5"));
		return;
	}
	CGuiDialog::OnCancel();
} 
int CPOAutoCreateItemDialog::OnAddPOAutoCreateItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPOAutoCreateItemDialog::OnEditPOAutoCreateItemDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPOAutoCreateItemDialog::OnDeletePOAutoCreateItemDialog(){
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
 		OnCancelPOAutoCreateItemDialog();
 	}
	return 0;
}
int CPOAutoCreateItemDialog::OnSavePOAutoCreateItemDialog(){
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
 		//OnPOAutoCreateItemDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPOAutoCreateItemDialog::OnCancelPOAutoCreateItemDialog(){
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
int CPOAutoCreateItemDialog::OnPOAutoCreateItemDialogListLoadData(){
	return 0;
}

BOOL CPOAutoCreateItemDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_ESCAPE){
			if(m_wndSelectedList.GetItemCount() > 0){
				CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
				CString szSQL;
				for (int i =0; i < m_wndSelectedList.GetItemCount(); i++)
				{
					long nProductID = str2long(m_wndSelectedList.GetItemText(i, 0));
					szSQL.Format(_T("PURCHASE_ORDERLINE2_REMOVE(%ld, %ld) "), m_nPurchaseOrder_ID, nProductID);
					pMF->ExecDML(szSQL);
				}
				m_wndSelectedList.DeleteAllItems();

			}

		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
BEGIN_MESSAGE_MAP(CPOAutoCreateItemDialog, CGuiDialog)
	ON_WM_CLOSE()
END_MESSAGE_MAP()

void CPOAutoCreateItemDialog::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	if(m_wndSelectedList.GetItemCount() > 0){
	//	ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i m\x1EE5\x63 v\x1EADt t\x1EF1 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn.\r\n\x42\x1EA1n ph\x1EA3i [\xC1p \x64\x1EE5ng] tr\x1B0\x1EDB\x63 khi \x111\xF3ng \x63\x1EED\x61 s\x1ED5"));
	//	return;
		CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
		CString szSQL;
		for (int i =0; i < m_wndSelectedList.GetItemCount(); i++)
		{
			long nProductID = str2long(m_wndSelectedList.GetItemText(i, 0));
			szSQL.Format(_T("PURCHASE_ORDERLINE2_REMOVE(%ld, %ld) "), m_nPurchaseOrder_ID, nProductID);
			pMF->ExecDML(szSQL);
		}
		m_wndSelectedList.DeleteAllItems();

	}
	CGuiDialog::OnClose();
}
