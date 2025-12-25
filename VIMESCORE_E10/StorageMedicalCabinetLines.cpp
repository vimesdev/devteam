#include "StorageMedicalCabinetLines.h"
#include "MainFrame_E10.h"
#include "StorageMedicalCabinetLineInput.h"
#include "StorageMedicalCabinetDialog.h"
#include "HMSReportForms\PrintForms.h"
#include "WardMaterialReplaceDialog.h"
#include ".\storagemedicalcabinetlines.h"
#include "NumberFieldDialog.h"
#include "MaterialReplaceDialog.h"
#include "MaterialReplaceDialog_v2.h"
#include "SearchPopup_V2.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetLines*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageMedicalCabinetLines*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageMedicalCabinetLines*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListDeleteItem();
}


static int _OnListReplaceItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListReplaceItem();
}


static int _OnListRoundingItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListRoundingItem();
}

static int _OnListSkipRoundingItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListSkipRoundingItem();
}

static int _OnListDebitItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListDebitItem();
}


static int _OnListSkipDebitItemFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnListSkipDebitItem();
}


static int _OnAddStorageMedicalCabinetLinesFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnAddStorageMedicalCabinetLines();
} 
static int _OnEditStorageMedicalCabinetLinesFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnEditStorageMedicalCabinetLines();
} 
static int _OnDeleteStorageMedicalCabinetLinesFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnDeleteStorageMedicalCabinetLines();
} 
static int _OnSaveStorageMedicalCabinetLinesFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnSaveStorageMedicalCabinetLines();
} 
static int _OnCancelStorageMedicalCabinetLinesFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetLines*)pWnd)->OnCancelStorageMedicalCabinetLines();
}
static int _OnItemListSearchFnc(CWnd *pWnd)
{
	 ((CStorageMedicalCabinetLines*)pWnd)->OnItemListSearch();
	 return 0;
}
CStorageMedicalCabinetLines::CStorageMedicalCabinetLines(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 340;
	SetDefaultValues();
	SetWindowName(_T("StorageMedicalCabinetLines"));
}
CStorageMedicalCabinetLines::~CStorageMedicalCabinetLines(){
}
void CStorageMedicalCabinetLines::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,5, 5, 990, 340); 

}
void CStorageMedicalCabinetLines::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowName(_T("StorageMedicalCabinetLines"));

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transactionline_id
	m_wndList.InsertColumn(1, _T("Item Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(5, _T("Lot No"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Order Qty"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(8, _T("Delivery Qty"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(9, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(10, _T("Manufacture"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);//product_id
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);//xproduct_id
	m_wndList.InsertColumn(13, _T(""), CFMT_TEXT, 0);//product_item_id
	if(pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.InsertColumn(14, _T("Prev Debit"), CFMT_NUMBER, 40);//
		m_wndList.InsertColumn(15, _T("Curr Debit"), CFMT_NUMBER, 40);//
	}
	else
	{
		m_wndList.InsertColumn(14, _T("Debit Qty"), CFMT_NUMBER, 0);//
		m_wndList.InsertColumn(15, _T("Debit Qty"), CFMT_NUMBER, 0);//
	}

	
	m_wndList.SetSortHeader(false);

}
void CStorageMedicalCabinetLines::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	
	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
		m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc, 0);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(4, _T("Replace Item"), _OnListReplaceItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(2, _T("Cancel Line"), _OnListEditItemFnc);

		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(5, _T("Rounding"), _OnListRoundingItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(6, _T("Tìm kiếm mặt hàng"), _OnItemListSearchFnc);

/*
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(6, _T("Skip rounding"), _OnListSkipRoundingItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(7, _T("Debit"), _OnListDebitItemFnc);
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(7, _T("Skip Debit"), _OnListSkipDebitItemFnc);
*/


/*
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageMedicalCabinetLinesFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageMedicalCabinetLinesFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageMedicalCabinetLinesFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageMedicalCabinetLinesFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageMedicalCabinetLinesFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CStorageMedicalCabinetLines::OnDoDataExchange(CDataExchange* pDX){

}
void CStorageMedicalCabinetLines::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageMedicalCabinetLines::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageMedicalCabinetLines::SetDefaultValues(){


}
int CStorageMedicalCabinetLines::SetMode(int nMode){
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
void CStorageMedicalCabinetLines::OnListDblClick(){
	CPrintForms printer;
	CString szOrderNo;
	szOrderNo.Format(_T("%ld"), m_nOrderID);
	long nProduct_id, nXProductID;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	nProduct_id = str2long(m_wndList.GetItemText(nSel, 11));
	nXProductID = str2long(m_wndList.GetItemText(nSel, 12));
	if (((CStorageMedicalCabinetDialog*) m_pWndOrder)->m_szCategory == _T("D"))
	{
		OnPrintCabinetDebitDetail(_T(""), szOrderNo, nXProductID, m_nStorageID, m_szOrgID);
	}
	else
	{
		printer.PM_PrintCabinetUsageDetail(_T(""), _T(""), szOrderNo, nXProductID, _T("'B','C','M'"), m_nStorageID, m_szOrgID);
	}
	//OnListEditItem();
} 

void CStorageMedicalCabinetLines::OnPrintCabinetDebitDetail(LPCTSTR lpszOrderNo, LPCTSTR lpszTransactionString, long nProduct_id, int nStorage_ID, CString szOrgID)
{
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CString szTransactionOrderNo;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int nProduct_item_id;
	CString	szOldDate, szNewDate, szReportDate, szPrintDate;
	CString szDepartment;
	CString szRoomName, szBedName;
	CReportSection* rptDetail = NULL;
	
	if(!rpt.Init(_T("Reports/HMS/HT_DAILYDELIVERYDRUGVIEWDETAIL.RPT"), true, false) )
		return;
	
	rptDetail = rpt.GetReportHeader();

	tmpStr.Empty();
	StringUpper( pMF->m_szHealthService, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_szHospitalName, tmpStr);
	rptDetail->SetValue(_T("HospitalName"), tmpStr);

	szNewDate.Empty();
	szOldDate.Empty();
	szReportDate = rptDetail->GetValue(_T("ReportDate"));

	tmpStr.Format(szReportDate, CDate::Convert(szNewDate, yyyymmdd, ddmmyyyy));
	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	rptDetail->SetValue(_T("SheetNo"), szTransactionOrderNo);
	//Page Header	

	szSQL.Format(_T("SELECT Get_storagename(mt_storage_id)        AS storagename, ") \
	_T("       mt_storage_id, ") \
	_T("	   get_storagename(mt_storage_to_id) AS storagetoname,")
	_T("       product_id, ") \
	_T("       product_name                          AS product_name, ") \
	_T("	   case when hmt_product_id <> hmt_suppproduct_id and hmt_suppproduct_id > 0 then (select distinct mp_name from m_product where mp_product_id = hmt_suppproduct_id) else cast('' as nvarchar2(254)) end as xproduct_name, ") \
	_T("       product_uomname                       AS product_unit, ") \
	_T("       Sum(hmt_qtyissue)                     AS product_qtyorder, ") \
	_T("       Sum(hmt_qtyissue)                     AS product_qtyissue, ") \
	_T("       Sum(hmt_qtyissue * product_unitprice) AS product_amount, ") \
	_T("	   mt_orderno as order_no")
	_T(" FROM   hms_medical_transaction_debt ") \
	_T("       LEFT JOIN m_product_view ") \
	_T("              ON( product_id = hmt_product_id ) ") \
	_T("       LEFT JOIN m_transaction ") \
	_T("              ON ( mt_transaction_id = hmt_reftransaction_id ) ") \
	_T("WHERE hmt_reftransaction_id = %s ") \
	_T("       AND (hmt_suppproduct_id = %d or hmt_product_id=%ld) ") \
	_T("       AND mt_storage_id = %d ") \
	_T("GROUP  BY mt_storage_id, ") \
	_T("		  mt_storage_to_id,") \
	_T("          product_id, ") \
	_T("          hmt_product_id, ") \
	_T("          hmt_suppproduct_id, ") \
	_T("          product_name, ") \
	_T("          product_uomname, ") \
	_T("		  mt_orderno") \
	_T(" ORDER  BY mt_storage_id, ") \
	_T("          product_name, ") \
	_T("          product_unit "), 
	lpszTransactionString, nProduct_id, nProduct_id, nStorage_ID);
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"));
		return ;
	}

	CString  szName;
	rs.GetValue(_T("product_item_id"), nProduct_item_id);	
	rptDetail->SetValue(_T("Storage"), rs.GetValue(_T("storagename")));
	rptDetail->SetValue(_T("ToStorage"), rs.GetValue(_T("storagetoname")));
	rptDetail->SetValue(_T("SheetNo"), rs.GetValue(_T("order_no")));
	rs.GetValue(_T("xproduct_name"), tmpStr);
	rs.GetValue(_T("product_name"), szName);
	if(!tmpStr.IsEmpty())
		szName.AppendFormat(_T(" ->[%s]"), tmpStr);
	rptDetail->SetValue(_T("DrugName"), szName);
	rptDetail->SetValue(_T("Unit"), rs.GetValue(_T("product_unit")));
	rptDetail->SetValue(_T("Qty"), rs.GetValue(_T("product_qtyorder")));

	if(szOrgID != _T("EM"))
	{
	szSQL.Format(_T("SELECT DISTINCT orderdate, ") \
	_T("                roomname, ") \
	_T("                bedname, ") \
	_T("                pname, ") \
	_T("                docno, ") \
	_T("				recordno,") \
	_T("				get_departmentname(deptid) deptname,") \
	_T("                cardno, ") \
	_T("                objectname, ") \
	_T("                address, ") \
	_T("                yearofbirth, ") \
	_T("                hpo_storage_id, ") \
	_T("                product_name, ") \
	_T("                product_unit, ") \
	_T("                Sum(product_qtyorder) AS QtyOrder, ") \
	_T("                Sum(product_qtyissue) AS QtyIssue, ") \
	_T("				(select hst_name from hms_surgery_table where hst_idx = ho_opera_table) as table_name") \
	_T(" FROM   (SELECT hmt_docno                                       AS docno, ") \
	_T("			   hcr_recordno recordno,") \
	_T("               (select htr_deptid from hms_treatment_record where htr_docno = hmt_docno and htr_status = 'I') deptid, ") \
	_T("               hmt_medical_transaction_id                      AS orderid, ") \
	_T("               trunc(hpo_orderdate)                            AS orderdate, ") \
	_T("               Trim(hp_surname ") \
	_T("                    || ' ' ") \
	_T("                    || hp_midname ") \
	_T("                    || ' ' ") \
	_T("                    || hp_firstname)                           AS pname, ") \
	_T("               Hms_getage(trunc(hd_admitdate), hp_birthdate)   AS age, ") \
	_T("               Extract(YEAR FROM hp_birthdate)                 AS yearofbirth, ") \
	_T("               hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address, ") \
	_T("               (SELECT hrl_name ") \
	_T("                FROM   hms_roomlist ") \
	_T("                WHERE  hrl_id = hpo_roomid ") \
	_T("                       AND hrl_deptid = hpo_deptid)            AS roomname, ") \
	_T("               (SELECT hbl_name ") \
	_T("                FROM   hms_bedlist ") \
	_T("                WHERE  hbl_id = hpo_bedid ") \
	_T("                       AND hbl_roomid = hpo_roomid ") \
	_T("                       AND hbl_deptid = hpo_deptid)            AS bedname, ") \
	_T("               ho_desc                                         AS objectname, ") \
	_T("               hd_cardno                                       AS cardno, ") \
	_T("               hpo_storage_id, ") \
	_T("               product_id, ") \
	_T("               product_name                                    AS product_name, ") \
	_T("               product_uomname                                 AS product_unit, ") \
	_T("               hmt_qtyissue                                    AS product_qtyorder, ") \
	_T("               hmt_qtyissue                                    AS product_qtyissue, ") \
	_T("			   ho_opera_table") \
	_T("        FROM   hms_patient ") \
	_T("               LEFT JOIN hms_doc ") \
	_T("                      ON( hd_patientno = hp_patientno ) ") \
	_T("			   LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
	_T("               LEFT JOIN hms_medical_transaction_debt ") \
	_T("                      ON( hmt_docno = hd_docno ) ") \
	_T("               LEFT JOIN m_product_view ") \
	_T("                      ON( product_id = hmt_suppproduct_id ) ") \
	_T("               LEFT JOIN hms_object ") \
	_T("                      ON( ho_id = hd_object ) ") \
	_T("               LEFT JOIN hms_card ") \
	_T("                      ON( hc_patientno = hd_patientno ") \
	_T("                          AND hc_idx = hd_cardidx ) ") \
	_T("               LEFT JOIN hms_pharmaorder_view ") \
	_T("                      ON ( hpo_docno = hmt_docno AND hpo_orderid = hmt_orderid ) ") \
	_T("			   LEFT JOIN hms_operation ") \
	_T("					  ON (ho_docno = hpo_docno AND ho_idx = hpo_reference_id)") \
	_T("        WHERE  hmt_reftransaction_id = %s ") \
	_T("              and (hmt_suppproduct_id = %ld or hmt_product_id=%ld) ) tbl ") \
	_T("GROUP  BY orderdate, ") \
	_T("          roomname, ") \
	_T("          bedname, ") \
	_T("          pname, ") \
	_T("          docno, ") \
	_T("		  recordno,") \
	_T("		  deptid,") \
	_T("          cardno, ") \
	_T("          objectname, ") \
	_T("          address, ") \
	_T("          yearofbirth, ") \
	_T("          hpo_storage_id, ") \
	_T("          product_name, ") \
	_T("          product_unit, ") \
	_T("		  ho_opera_table") \
	_T(" ORDER  BY docno, ") \
	_T("          roomname, ") \
	_T("          bedname, ") \
	_T("          pname, ") \
	_T("          orderdate, ") \
	_T("          hpo_storage_id, ") \
	_T("          product_name, ") \
	_T("          product_unit ")
	, lpszTransactionString, nProduct_id, nProduct_id);
	}
	else
	{
szSQL.Format(_T("SELECT DISTINCT orderdate, ") \
	_T("                roomname, ") \
	_T("                bedname, ") \
	_T("                pname, ") \
	_T("                docno, ") \
	_T("				get_departmentname(deptid) deptname,") \
	_T("                cardno, ") \
	_T("                objectname, ") \
	_T("                address, ") \
	_T("                yearofbirth, ") \
	_T("                hpo_storage_id, ") \
	_T("                product_name, ") \
	_T("                product_unit, ") \
	_T("                Sum(product_qtyorder) AS QtyOrder, ") \
	_T("                Sum(product_qtyissue) AS QtyIssue ") \
	_T("FROM   (SELECT hmt_docno                                       AS docno, ") \
	_T("               (select htr_deptid from hms_treatment_record where htr_docno = hmt_docno and htr_status = 'I') AS deptid, ") \
	_T("               hmt_medical_transaction_id                      AS orderid, ") \
	_T("               trunc(hpo_orderdate)                            AS orderdate, ") \
	_T("               Trim(hp_surname ") \
	_T("                    || ' ' ") \
	_T("                    || hp_midname ") \
	_T("                    || ' ' ") \
	_T("                    || hp_firstname)                           AS pname, ") \
	_T("               Hms_getage(trunc(hd_admitdate), hp_birthdate)   AS age, ") \
	_T("               Extract(YEAR FROM hp_birthdate)                 AS yearofbirth, ") \
	_T("               hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address, ") \
	_T("               (SELECT hrl_name ") \
	_T("                FROM   hms_roomlist ") \
	_T("                WHERE  hrl_id = hpo_roomid ") \
	_T("                       AND hrl_deptid = hpo_deptid)            AS roomname, ") \
	_T("               (SELECT hbl_name ") \
	_T("                FROM   hms_bedlist ") \
	_T("                WHERE  hbl_id = hpo_bedid ") \
	_T("                       AND hbl_roomid = hpo_roomid ") \
	_T("                       AND hbl_deptid = hpo_deptid)            AS bedname, ") \
	_T("               ho_desc                                         AS objectname, ") \
	_T("               hd_cardno                                       AS cardno, ") \
	_T("               hpo_storage_id, ") \
	_T("               product_id, ") \
	_T("               product_name                                    AS product_name, ") \
	_T("               product_uomname                                 AS product_unit, ") \
	_T("               hmt_qtyissue                                    AS product_qtyorder, ") \
	_T("               hmt_qtyissue                                    AS product_qtyissue ") \
	_T("        FROM   hms_patient ") \
	_T("               LEFT JOIN hms_doc ") \
	_T("                      ON( hd_patientno = hp_patientno ) ") \
	_T("               LEFT JOIN hms_medical_transaction_debt ") \
	_T("                      ON( hmt_docno = hd_docno ) ") \
	_T("               LEFT JOIN m_product_view ") \
	_T("                      ON( product_id = hmt_suppproduct_id ) ") \
	_T("               LEFT JOIN hms_object ") \
	_T("                      ON( ho_id = hd_object ) ") \
	_T("               LEFT JOIN hms_card ") \
	_T("                      ON( hc_patientno = hd_patientno ") \
	_T("                          AND hc_idx = hd_cardidx ) ") \
	_T("               LEFT JOIN hms_pharmaorder ") \
	_T("                      ON ( hpo_orderid = hmt_orderid ) ") \
	_T("        WHERE  hmt_reftransaction_id = %s") \
	_T("               and  (hmt_suppproduct_id = %ld or hmt_product_id=%ld) ) tbl ") \
	_T("GROUP  BY orderdate, ") \
	_T("		  deptid,") \
	_T("          roomname, ") \
	_T("          bedname, ") \
	_T("          pname, ") \
	_T("          docno, ") \
	_T("          cardno, ") \
	_T("          objectname, ") \
	_T("          address, ") \
	_T("          yearofbirth, ") \
	_T("          hpo_storage_id, ") \
	_T("          product_name, ") \
	_T("          product_unit ") \
	_T("ORDER  BY docno, ") \
	_T("          roomname, ") \
	_T("          bedname, ") \
	_T("          pname, ") \
	_T("          orderdate, ") \
	_T("          hpo_storage_id, ") \
	_T("          product_name, ") \
	_T("          product_unit "),
	 lpszTransactionString, nProduct_id, nProduct_id);
	}
_fmsg(_T("%s"), szSQL);
	rsl.ExecSQL(szSQL);
	int nIdx=0;
	while(!rsl.IsEOF())
	{
		nIdx++;
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("0"), tmpStr);
		rsl.GetValue(_T("OrderDate"), tmpStr);		
		rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rsl.GetValue(_T("pname"), tmpStr);		
		rptDetail->SetValue(_T("2"), tmpStr);		
		rsl.GetValue(_T("yearofbirth"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rsl.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rsl.GetValue(_T("bedname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rsl.GetValue(_T("QtyOrder"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rsl.GetValue(_T("CardNo"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rsl.GetValue(_T("ObjectName"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rsl.GetValue(_T("Address"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rptDetail->SetValue(_T("10"), rsl.GetValue(_T("docno")));
		rptDetail->SetValue(_T("11"), rsl.GetValue(_T("recordno")));
		rptDetail->SetValue(_T("12"), rsl.GetValue(_T("deptname")));
		rptDetail->SetValue(_T("13"), rsl.GetValue(_T("table_name")));
		rsl.MoveNext();
	}
	
	CString szDate, szSysDate;	
	szSysDate = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}

void CStorageMedicalCabinetLines::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderLine = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nProduct_ID = str2long(m_wndList.GetItemText(nNewItem, 11));
	SetMode(VM_VIEW);
}

int CStorageMedicalCabinetLines::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;

	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	if(pOrder == NULL)
		return 0;
	if(!pOrder->IsAllowEdit())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}

	CStorageMedicalCabinetLineInput* newPopup = new CStorageMedicalCabinetLineInput(this, VM_ADD);
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->m_nOrderLine = m_nOrderLine;
	newPopup->m_nStorageID = m_nStorageID;
	newPopup->m_nStorageToID = m_nStorageToID;
	newPopup->ShowPopup(&m_wndList);

	return 0;
}
//#include "StorageMedicalCabinetLineReplateDialog.h"
int CStorageMedicalCabinetLines::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	//ShowMessageBox(_T("Xin lỗi nhưng nếu bạn vẫn dùng chức năng này thì hãy liên hệ với phần mềm!"));
	//return 0;
	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	if(pOrder && !pOrder->IsAllowEdit())
	{
		ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"));
		return 0;
	}

//	//
//	//dlg.m_nOrderID = m_nOrderID;
//	//dlg.m_nProduct_ID = m_nProduct_ID;
//	//dlg.m_nStorageID = m_nStorageID;
//	//dlg.m_nStorageToID = m_nStorageToID;	
//=======
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_nOrderLine = str2long(m_wndList.GetItemText(nSel, 0));
	double nDeliveryQty = str2double(m_wndList.GetItemText(nSel, 8));
	if(nDeliveryQty > 0 )
	{
		ShowMessageBox(_T("Can not process delete items"));
		return 0;
	}
	
 	
 	CString szSQL;

	szSQL.Format(_T(" SELECT COUNT(*)") \
_T(" FROM m_transactionline_ref") \
_T(" WHERE mtlr_transaction_id   = %ld") \
_T(" AND mtlr_transactionline_id = %ld"), m_nOrderID, m_nOrderLine );
	
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return -1;
	}

	//
	szSQL.Format(_T(" SELECT COUNT(*)") \
_T(" FROM m_transaction_debit") \
_T(" LEFT JOIN m_transactionline") \
_T(" ON(mtl_transaction_id      = mtd_transaction_id") \
_T(" AND mtl_product_item_id    = mtd_product_item_id)") \
_T(" WHERE mtd_transaction_id   = %ld") \
_T(" AND mtl_transactionline_id = %ld"), m_nOrderID, m_nOrderLine);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	bool bRefresh = false;
	if(pOrder->m_szTransactionTypeKey == _T("CSO") && pOrder->m_szOrderType == _T("C"))
	{
		szSQL.Format(_T("M_TRANSACTION_C_CANCELLINE(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
		bRefresh = true;
	}
	else
	{
 		szSQL.Format(_T("M_TRANSACTION_DELLINE(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );
	}
 	int ret = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("\nszSQL: %s| ret: %d\n"), szSQL, ret);
 	if(ret >= 0){
 		SetMode(VM_VIEW);
		if(bRefresh)
		{
			OnListLoadData();
		}
		else
		{
			int nSel = m_wndList.GetCurSel();
			OnListLoadData();
			m_wndList.SetCurSel(nSel);
		}
 	}
	return 0;	
}


int CStorageMedicalCabinetLines::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageMedicalCabinetLines();
	 return 0;
} 

int CStorageMedicalCabinetLines::OnListReplaceItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	CString szStatus = pOrder->GetOrderStatus();

	if (pMF->GetModuleID() == _T("MA") && pOrder->m_szCategory == _T("D"))
	{
		OnListReplaceDebt();
		return 0;
	}
	if(pOrder->m_szOrgID == pMF->GetModuleID() )
	{
		return 0;
	}
	if(szStatus != _T("S"))
      //if(szStatus != _T("S"))
	{
		ShowMessageBox(_T("Phiếu phải ở trạng thái gửi mới được phép thao tác!"));	
		return 0;
	}
	
	
	double nDeliveryQty = str2double(m_wndList.GetItemText(nSel, 8));
	if(nDeliveryQty > 0 )
	{
	//	ShowMessageBox(_T("Mặt hàng có sẵn để bổ sung, không phải thay thế"));
	//	return 0;
	}

	long nProductID, nXProductID;
	nProductID = str2long(m_wndList.GetItemText(nSel, 11));
	nXProductID = str2long(m_wndList.GetItemText(nSel, 12));
	
	if (nProductID == nXProductID)
	{
		ShowMessageBox(_T("Mặt hàng có sẵn để bổ sung, không phải thay thế"));
		return 0;
	}
	
	if (pOrder->m_szDepartmentto_ID == _T("B5") && 1==0)
	{
		CMaterialReplaceDialog_v2 dlg(this, m_nOrderID, m_nOrderLine);
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
			m_wndList.SetCurSel(nSel);
		}
	}
	else
	{
		CMaterialReplaceDialog dlg(this);
		dlg.m_nTransactionID = m_nOrderID;
		
		dlg.m_nLine = str2long(m_wndList.GetItemText(nSel, 0));
		dlg.m_nStorage_ID = m_nStorageID;
		dlg.m_nProduct_ID = nProductID;
		dlg.m_nXProduct_ID = nXProductID;
		dlg.m_nQtyOrder = str2int(m_wndList.GetItemText(nSel, 7));
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
			m_wndList.SetCurSel(nSel);
		}
	}
	return 0;
}

int CStorageMedicalCabinetLines::OnListReplaceDebt()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRect rect;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	
	double nDeliveryQty = str2double(m_wndList.GetItemText(nSel, 8));
	if(nDeliveryQty > 0 )
	{
	//	ShowMessageBox(_T("Mặt hàng có sẵn để bổ sung, không phải thay thế"));
	//	return 0;
	}

	long nProductID, nXProductID;
	nProductID = str2long(m_wndList.GetItemText(nSel, 11));
	nXProductID = str2long(m_wndList.GetItemText(nSel, 12));
	
	if (nProductID == nXProductID)
	{
		ShowMessageBox(_T("Mặt hàng có sẵn để bổ sung, không phải thay thế"));
		return 0;
	}

	CMaterialReplaceDialog dlg(this);
	dlg.m_nTransactionID = m_nOrderID;
	
	dlg.m_nLine = str2long(m_wndList.GetItemText(nSel, 0));
	dlg.m_nStorage_ID = m_nStorageID;
	dlg.m_nProduct_ID = nProductID;
	dlg.m_nXProduct_ID = nXProductID;
	dlg.m_nQtyOrder = str2int(m_wndList.GetItemText(nSel, 7));
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}
	return 0;
}

long CStorageMedicalCabinetLines::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mtl_client_id, mtl_transactionline_id, mtl_product_item_id, ") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   mtl_qtyorder  AS product_qtyorder,") \
_T("   mtl_qtydelivery  AS product_qtydelivery,") \
_T("   mtl_saleprice,") \
_T("   mtl_qtyorder*mtl_saleprice AS product_amount,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename, ") \
_T("   mtl_product_id as product_id, ") \
_T("   product_item_id, ") \
_T("   mtl_xproduct_id as xproduct_id, mtl_status,  ") \
_T(" (select sum(mtd_qtydebit) from m_transaction_debit ") \
_T(" where mtd_reftransaction_id = mtl_transaction_id and mtd_product_item_id = mtl_product_item_id) as prevqtydebit, ") \
_T(" (select sum(mtd_qtydebit) from m_transaction_debit ") \
_T(" where mtd_transaction_id = mtl_transaction_id and mtd_product_item_id = mtl_product_item_id) as qtydebit, ") \
_T("   msl_qtyonhand as qty_onhand ") \
_T(" FROM m_transactionline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id              =mtl_product_item_id)") \
_T(" LEFT JOIN m_storageline") \
_T(" ON (msl_product_item_id = product_item_id and msl_storage_id = mtl_storage_id)") \
_T(" WHERE mtl_transaction_id=%ld and mtl_product_item_id > 0 and NVL(mtl_client_id, 'XX') <> 'REP' ") \
_T(" ORDER BY product_uomindex, product_name, product_uomname,") \
_T("   mtl_saleprice"), m_nOrderID);


	nCount = rs.ExecSQL(szSQL);
	int nItem = 0, nItem1 = 1;
	double nDeliveryQty=0, nOnhandQty = 0;
	long nProductID, nXProductID;
	long nTransactionLineID;
	CString szClientID;

	while(!rs.IsEOF()){
		rs.GetValue(_T("mtl_client_id"), szClientID);
		rs.GetValue(_T("product_qtydelivery"), nDeliveryQty);
		rs.GetValue(_T("product_id"), nProductID);
		rs.GetValue(_T("xproduct_id"), nXProductID);	
		rs.GetValue(_T("qty_onhand"), nOnhandQty);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("mtl_transactionline_id")), 
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Product_expdate")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("mtl_saleprice")), 
			rs.GetValue(_T("product_qtyorder")), 
			rs.GetValue(_T("product_qtydelivery")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_manufacturename")), 
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("xproduct_id")),			
			rs.GetValue(_T("mtl_product_item_id")),	
			rs.GetValue(_T("prevqtydebit")),	
			rs.GetValue(_T("qtydebit")),
			NULL);		
			
		if(nDeliveryQty <= 0 || (nXProductID > 0 && nProductID != nXProductID)) 
		{
			m_wndList.SetSubItemBkColor(nItem, 8, RGB(255, 128, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 8, RGB(255, 255, 255), FALSE);				
		}
		if (nDeliveryQty > 0 && nDeliveryQty > nOnhandQty)
		{
			m_wndList.SetSubItemBkColor(nItem, 7, RGB(192, 192, 192));
		}
		if(szClientID == _T("TT"))
		{
			rs.GetValue(_T("mtl_transactionline_id"), nTransactionLineID);
			szSQL.Format(_T(" SELECT mtl_client_id,") \
_T("   mtl_transactionline_id,") \
_T("   product_code,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   mtl_qtyorder    AS product_qtyorder,") \
_T("   mtl_qtydelivery AS product_qtydelivery,") \
_T("   mtl_saleprice,") \
_T("   mtl_qtyorder*mtl_saleprice AS product_amount,") \
_T("   product_lotno,") \
_T("   product_expdate,") \
_T("   product_manufacturename,") \
_T("   mtl_product_id AS product_id,") \
_T("   product_item_id,") \
_T("   mtl_xproduct_id AS xproduct_id,") \
_T("   mtl_status, msl_qtyonhand as qty_onhand ") \
_T(" FROM m_transactionline") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id          =mtl_product_item_id)") \
_T(" LEFT JOIN m_storageline") \
_T(" ON (msl_product_item_id = product_item_id and msl_storage_id = mtl_storage_id)") \
_T(" WHERE mtl_transaction_id    =%ld") \
_T(" AND mtl_product_item_id     > 0") \
_T(" AND mtl_client_id           ='REP'") \
_T(" AND mtl_transactionline_id IN") \
_T("   (SELECT mtlr_reftransactionline_id") \
_T("   FROM m_transactionline_ref") \
_T("   WHERE mtlr_transactionline_id = %ld") \
_T("   )") \
_T(" ORDER BY product_uomindex,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   mtl_saleprice"), m_nOrderID, nTransactionLineID);
			rsl.ExecSQL(szSQL);
			while(!rsl.IsEOF())
			{
				rs.GetValue(_T("product_qtydelivery"), nDeliveryQty);
				rs.GetValue(_T("qty_onhand"), nOnhandQty);
				if (nDeliveryQty > 0 && nDeliveryQty > nOnhandQty)
				{
					m_wndList.SetSubItemBkColor(nItem, 7, RGB(192, 192, 192));
				}
				nItem = m_wndList.AddItems(
			rsl.GetValue(_T("mtl_transactionline_id")), 
			rsl.GetValue(_T("product_code")), 
			rsl.GetValue(_T("product_name")), 
			rsl.GetValue(_T("product_uomname")), 
			rsl.GetValue(_T("Product_expdate")), 
			rsl.GetValue(_T("product_lotno")), 
			rsl.GetValue(_T("mtl_saleprice")), 
			rsl.GetValue(_T("product_qtyorder")), 
			rsl.GetValue(_T("product_qtydelivery")), 
			rsl.GetValue(_T("product_amount")), 
			rsl.GetValue(_T("product_manufacturename")), 
			rsl.GetValue(_T("product_id")),
			rsl.GetValue(_T("xproduct_id")),			
			NULL);		
				m_wndList.SetSubItemBkColor(nItem, 8, RGB(0, 128 ,192), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 8, RGB(255, 255, 255), FALSE);				

				rsl.MoveNext();


			}
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	pOrder->m_nTotalLine = m_wndList.GetItemCount();
	pOrder->UpdateData(FALSE);
	return nCount;
	return 0;
}



int CStorageMedicalCabinetLines::OnListRoundingItem(){
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CNumberFieldDialog dlg(this, _T("Quantity"));
	float qtyorder  = str2float(m_wndList.GetItemText(nSel, 7)); 
	 float qty  = str2float(m_wndList.GetItemText(nSel, 8)); 
	dlg.m_nValue = (double) qty;
	dlg.SetMin(0);
	dlg.SetMax(ceil(qtyorder));
	if(dlg.DoModal() != IDOK)
		return 0;
	szSQL.Format(_T("M_TRANSACTIONLINE_ROUND_V2('%s', %ld, %ld, %.2f) "), pMF->GetCurrentUser(), m_nOrderID, m_nOrderLine, str2float(dlg.GetText()) );
	int nRet = str2int(pMF->ExecDML(szSQL));
	if(nRet > 0)
		OnListLoadData();
	else
	{
		ShowMessageBox(_T("Kh\xF4ng l\xE0m tr\xF2n s\x1ED1 l\x1B0\x1EE3ng \x111\x1B0\x1EE3\x63"));
	}


	return 0;
}


int CStorageMedicalCabinetLines::OnListSkipRoundingItem(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nMsg;
	nMsg = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n \x62\x1ECF l\xE0m tr\xF2n s\x1ED1 l\x1B0\x1EE3ng kh\xF4ng?(Y/N)"), MB_YESNO);
	if (nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("M_TRANSACTIONLINE_SKIPROUND(%ld, %ld) "), m_nOrderID, m_nOrderLine);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if(nRet > 0)
		OnListLoadData();
	else
	{
		ShowMessageBox(_T("Kh\xF4ng \x62\x1ECF l\xE0m tr\xF2n s\x1ED1 l\x1B0\x1EE3ng \x111\x1B0\x1EE3\x63.Ki\x1EC3m tr\x61 l\x1EA1i tr\x1EA1ng th\xE1i phi\x1EBFu"));
	}


	return 0;
}

int CStorageMedicalCabinetLines::OnListDebitItem(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nMsg;
	nMsg = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n ghi n\x1EE3 s\x1ED1 l\x1B0\x1EE3ng kh\xF4ng?(Y/N). S\x1ED1 l\x1B0\x1EE3ng s\x1EBD \x111\x1B0\x1EE3\x63 tr\x1EA3 v\x1EC1 kho\x61 v\xE0 th\xEAm v\xE0o phi\x1EBFu \x62\x1ED5 sung l\x1EA7n s\x61u"), MB_YESNO);
	if (nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("M_TRANSACTIONLINE_DEBIT(%ld, %ld) "), m_nOrderID, m_nOrderLine);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if(nRet > 0)
		OnListLoadData();
	else
	{
		ShowMessageBox(_T("Kh\xF4ng ghi n\x1EE3 \x111\x1B0\x1EE3\x63 s\x1ED1 l\x1B0\x1EE3ng"));
	}

	return 0;
}

int CStorageMedicalCabinetLines::OnListSkipDebitItem(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nMsg;
	nMsg = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n \x62\x1ECF ghi n\x1EE3 s\x1ED1 l\x1B0\x1EE3ng kh\xF4ng?(Y/N)"), MB_YESNO);
	if (nMsg == IDNO)
		return 0;
	CString szSQL;
	szSQL.Format(_T("M_TRANSACTIONLINE_SKIPDEBIT(%ld, %ld) "), m_nOrderID, m_nOrderLine);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if(nRet > 0)
		OnListLoadData();
	else
	{
		ShowMessageBox(_T("Kh\xF4ng \x62\x1ECF ghi n\x1EE3 \x111\x1B0\x1EE3\x63 s\x1ED1 l\x1B0\x1EE3ng"));
	}

	
	return 0;
}


int CStorageMedicalCabinetLines::OnAddStorageMedicalCabinetLines(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageMedicalCabinetLines::OnEditStorageMedicalCabinetLines(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageMedicalCabinetLines::OnDeleteStorageMedicalCabinetLines(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CStorageMedicalCabinetDialog* pOrder = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	if(pOrder && !pOrder->IsAllowEdit())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

	m_nOrderLine = str2long(m_wndList.GetItemText(nSel, 0));

	//Truong hop phieu tu cac khoa khac gui len
	if (pOrder->m_szOrgID != pMF->GetModuleID())
	{
		double nDeliveryQty = str2double(m_wndList.GetItemText(nSel, 8));
		if(nDeliveryQty > 0 )
		{
			ShowMessageBox(_T("Can not process delete items"));
			return 0;
		}
	
	}

 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("M_TRANSACTION_DELLINE2(%ld,%ld, '%s','%s')"), m_nOrderID, m_nOrderLine, pMF->GetModuleID(), pMF->GetCurrentUser() );


 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
 		SetMode(VM_VIEW);
		int nSel = m_wndList.GetCurSel();
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
 	}
	return 0;
}
int CStorageMedicalCabinetLines::OnSaveStorageMedicalCabinetLines(){
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
 		//OnStorageMedicalCabinetLinesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageMedicalCabinetLines::OnCancelStorageMedicalCabinetLines(){
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
int CStorageMedicalCabinetLines::OnStorageMedicalCabinetLinesListLoadData(){
	return 0;
}

void CStorageMedicalCabinetLines::Refresh(long nOrderID){
	m_nOrderID = nOrderID;
	OnListLoadData();
	GetOrderStatus();
}

CString CStorageMedicalCabinetLines::GetOrderStatus(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus, szOrgID, szCategory;

	szSQL.Format(_T("SELECT mt_status, mt_org_id, mt_category FROM m_transaction WHERE mt_transaction_id=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_status"), szStatus);
		rs.GetValue(_T("mt_category"), szCategory);
	}
	rs.GetValue(_T("mt_org_id"), szOrgID);
	if(szOrgID == pMF->GetModuleID())
	{
		m_wndList.SetMenuState(1, true);
		m_wndList.SetMenuState(3, true);
		m_wndList.SetMenuState(2, false);
		m_wndList.SetMenuState(4, false);
	}
	else
	{
		m_wndList.SetMenuState(1, false);
		m_wndList.SetMenuState(3, false);
		m_wndList.SetMenuState(2, true);
		m_wndList.SetMenuState(4, true);
	}
	if (szCategory == _T("D") && pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.SetMenuState(4, true);
	}
	return szStatus;
}
void CStorageMedicalCabinetLines::OnItemListSearch()
{
	CSearchPopup_V2 *newPopup = new CSearchPopup_V2(&m_wndList);
	newPopup->m_nSearchCol = 2;
	newPopup->ShowPopup(&m_wndList);	
}
