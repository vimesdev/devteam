#include "HMSTreatmentDrugCopyDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTreatmentDrugCopyDialog *pVw = (CHMSTreatmentDrugCopyDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentDrugCopyDialog *pVw = (CHMSTreatmentDrugCopyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentDrugCopyDialog* )pWnd)->OnPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodSelendok();
}
/*static void _OnPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodKillfocus();
}*/
/*static void _OnPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodKillfocus();
}*/
static long _OnPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodLoadData();
}
/*static void _OnPeriodAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodAddNew();
}*/
static int _OnAddHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnAddHMSTreatmentDrugCopyDialog();
} 
static int _OnEditHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnEditHMSTreatmentDrugCopyDialog();
} 
static int _OnDeleteHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnDeleteHMSTreatmentDrugCopyDialog();
} 
static int _OnSaveHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnSaveHMSTreatmentDrugCopyDialog();
} 
static int _OnCancelHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnCancelHMSTreatmentDrugCopyDialog();
} 
CHMSTreatmentDrugCopyDialog::CHMSTreatmentDrugCopyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nTreatIdx = 0;
	m_nOldTreatIdx = 0;
}
CHMSTreatmentDrugCopyDialog::~CHMSTreatmentDrugCopyDialog(){
}
void CHMSTreatmentDrugCopyDialog::OnCreateComponents(){
	m_wndOrderInfo.Create(this, _T("Order Info"), 4, 5, 219, 485);
	m_wndOrderList.Create(this,10, 30, 215, 480); 
	m_wndDrugInformation.Create(this, _T("Drug Information"), 225, 5, 960, 485);
	m_wndList.Create(this,230, 30, 955, 480); 
	m_wndApply.Create(this, _T("&Apply"), 795, 490, 875, 515);
	m_wndClose.Create(this, _T("&Close"), 880, 490, 960, 515);
	m_wndPeriodLabel.Create(this, _T("Period"), 4, 489, 84, 514);
	m_wndPeriod.Create(this,84, 489, 219, 514); 

}
void CHMSTreatmentDrugCopyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPeriod.SetCheckValue(true);
	m_wndPeriod.LimitText(35);


	m_wndOrderList.InsertColumn(0, _T("Treat Idx"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 130);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Tên thuốc /HL"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Đơn vị"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("SL Yêu cầu"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("SL Cấp"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(5, _T("SL trong kho"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(6, _T("Đường dùng"), CFMT_TEXT, 190);
	m_wndList.InsertColumn(7, _T("Tốc độ"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T(""), CFMT_TEXT, 0);//storage_id
	m_wndList.InsertColumn(9, _T(""), CFMT_TEXT, 0);//product_id
	m_wndList.InsertColumn(10, _T(""), CFMT_TEXT, 0);//indication
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);//outpatient order
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);//order_type
	
	m_wndList.SetCheckBox(true);
	m_wndList.SetSortHeader(false);

	m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_treatidx"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objecttype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objectid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfDouble); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_speed"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_usage"), dfText, 128); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_inpackage"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_indication"), dfText, 10); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_outpatient"), dfText, 1); 


	m_wndPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentDrugCopyDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
//	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndPeriod.SetEvent(WE_SELENDOK, _OnPeriodSelendokFnc);
	//m_wndPeriod.SetEvent(WE_SETFOCUS, _OnPeriodSetfocusFnc);
	//m_wndPeriod.SetEvent(WE_KILLFOCUS, _OnPeriodKillfocusFnc);
	m_wndPeriod.SetEvent(WE_SELCHANGE, _OnPeriodSelectChangeFnc);
	m_wndPeriod.SetEvent(WE_LOADDATA, _OnPeriodLoadDataFnc);
	//m_wndPeriod.SetEvent(WE_ADDNEW, _OnPeriodAddNewFnc);

	SetMode(VM_VIEW);
	
	OnOrderListLoadData();
}
void CHMSTreatmentDrugCopyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPeriod.GetDlgCtrlID(), m_szPeriodKey);

}
void CHMSTreatmentDrugCopyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentDrugCopyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentDrugCopyDialog::SetDefaultValues(){

	m_szPeriodKey = _T("0");

}
int CHMSTreatmentDrugCopyDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndPeriod.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSTreatmentDrugCopyDialog::OnOrderListDblClick(){
	
} 
void CHMSTreatmentDrugCopyDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOldTreatIdx = str2long(m_wndOrderList.GetItemText(nNewItem, 0));
	OnListLoadData();
} 
int CHMSTreatmentDrugCopyDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentDrugCopyDialog::OnOrderListLoadData(){


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	
	UpdateData(TRUE);

	int day = str2int(m_szPeriodKey);
	if(day > 0)
	{
		szWhere.AppendFormat(_T(" and trunc(hsie_date) >= sysdate-%d "), day);
	}

	szSQL.Format(_T("SELECT distinct hpo_treatidx as treatidx, hsie_date  as orderdate ") \
		_T(" FROM hms_siexam, hms_ipharmaorder ") \
		_T(" WHERE hpo_docno=%ld  and hpo_deptid='%s' and hpo_treatidx > 0 and hpo_treatidx < %ld ") \
		_T(" and hpo_docno = hsie_docno and hpo_treatidx = hsie_idx ") \
		_T(" and hpo_orderstatus <> 'C' %s ") \
		_T(" ORDER BY hsie_date "),
			m_nDocumentNo, pMF->GetDepartmentID(), m_nTreatIdx, szWhere);
_tprintf(_T("\r\n%s"), szSQL);

	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("treatidx")), 
			rs.GetValue(_T("OrderDate")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

	return 0;
}
void CHMSTreatmentDrugCopyDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, !bCheck);
} 
void CHMSTreatmentDrugCopyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	
} 
int CHMSTreatmentDrugCopyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentDrugCopyDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
/*
	szSQL.Format(_T(" SELECT storage_id,") \
_T("   product_id,") \
_T("   lineidx,") \
_T("   drugname,") \
_T("   unit,") \
_T("   qty,") \
_T("   qtyissue,") \
_T("   dousage, indication, speed, outpatient, doctype, ") \
_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS qtyavaiable") \
_T(" FROM") \
_T("   (SELECT hpo_storage_id           AS storage_id,") \
_T("     hpol_product_id                AS product_id,") \
_T("     hpol_line                      AS lineidx,") \
_T("     mp_name                        AS drugname,") \
_T("     get_uomname(mp_product_uom_id) AS unit,") \
_T("     SUM(hpol_qtyorder)             AS qty,") \
_T("     SUM(hpol_qtyissue)             AS qtyissue,") \
_T("     hpou_dousage                   AS dousage, hpou_indication_id as indication, hpou_speed as speed, ") \
_T(" hpo_outpatient_order as outpatient, hpo_doctype as doctype ") \
_T("   FROM hms_ipharmaorder") \
_T("   LEFT JOIN hms_ipharmaorderline") \
_T("   ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
_T("   LEFT JOIN hms_ipharmaorder_usage") \
_T("   ON(hpou_orderid     = hpol_orderid") \
_T("   AND hpou_product_id = hpol_product_id)") \
_T("   LEFT JOIN m_product") \
_T("   ON(hpol_product_id = mp_product_id)") \
_T("   WHERE hpo_docno    =%ld") \
_T("   AND hpo_treatidx   =%ld") \
_T("   GROUP BY hpo_storage_id,") \
_T("     hpol_product_id,") \
_T("     mp_name,") \
_T("     hpol_line,") \
_T("     mp_product_uom_id,") \
_T("     hpou_dousage, hpou_indication_id, hpou_speed, hpo_outpatient_order, hpo_doctype ") \
_T("   ) tbl") \
_T(" LEFT JOIN m_storageline") \
_T(" ON(msl_storage_id                                    = storage_id") \
_T(" AND msl_product_id                                   = product_id)") \
_T(" WHERE 1=1") \
_T(" GROUP BY storage_id,") \
_T("   product_id,") \
_T("   lineidx,") \
_T("   drugname,") \
_T("   unit,") \
_T("   qty,") \
_T("   qtyissue,") \
_T("   dousage, indication, speed, outpatient, doctype ") \
_T(" ORDER BY lineidx"), m_nDocumentNo, m_nOldTreatIdx);
*/
	szSQL.Format(_T(" SELECT storage_id,") \
_T("   product_id,") \
_T("   lineidx,") \
_T("   drugname,") \
_T("   unit,") \
_T("   qty,") \
_T("   qtyissue,") \
_T("   dousage,") \
_T("   indication,") \
_T("   speed,") \
_T("   outpatient,") \
_T("   doctype,") \
_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS qtyavaiable") \
_T(" FROM") \
_T("   (SELECT hpo_storage_id           AS storage_id,") \
_T("     hpol_product_id                AS product_id,") \
_T("     hpol_line                      AS lineidx,") \
_T("     mp_name                        AS drugname,") \
_T("     get_uomname(mp_product_uom_id) AS unit,") \
_T("     SUM(hpol_qtyorder)             AS qty,") \
_T("     SUM(hpol_qtyissue)             AS qtyissue,") \
_T("     hpou_dousage                   AS dousage,") \
_T("     hpou_indication_id             AS indication,") \
_T("     hpou_speed                     AS speed,") \
_T("     hpo_outpatient_order           AS outpatient,") \
_T("     hpo_doctype                    AS doctype") \
_T("   FROM hms_ipharmaorder") \
_T("   LEFT JOIN hms_ipharmaorderline") \
_T("   ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
_T("   LEFT JOIN hms_ipharmaorder_usage") \
_T("   ON(hpou_orderid     = hpol_orderid") \
_T("   AND hpou_product_id = hpol_product_id)") \
_T("   LEFT JOIN m_product") \
_T("   ON(hpol_product_id = mp_product_id)") \
_T("   WHERE hpo_docno    =%ld") \
_T("   AND hpo_treatidx   =%ld") \
_T("   GROUP BY hpo_storage_id,") \
_T("     hpol_product_id,") \
_T("     hpol_line ,") \
_T("     mp_name ,") \
_T("     mp_product_uom_id,") \
_T("     hpou_dousage,") \
_T("     hpou_indication_id,") \
_T("     hpou_speed ,") \
_T("     hpo_outpatient_order,") \
_T("     hpo_doctype") \
_T("   ) tbl") \
_T(" LEFT JOIN m_storageline") \
_T(" ON(msl_storage_id  = storage_id") \
_T(" AND msl_product_id = product_id)") \
_T(" WHERE product_id   > 0") \
_T(" AND qty            > 0") \
_T(" GROUP BY storage_id,") \
_T("   product_id,") \
_T("   lineidx,") \
_T("   drugname,") \
_T("   unit,") \
_T("   qty,") \
_T("   qtyissue,") \
_T("   dousage,") \
_T("   indication,") \
_T("   speed,") \
_T("   outpatient,") \
_T("   doctype") \
_T(" ORDER BY doctype DESC,") \
_T("   lineidx") , m_nDocumentNo, m_nOldTreatIdx);

_tprintf(_T("\r\n%s"), szSQL);
	CRecord rsl(&pMF->m_db);
	rsl.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex = 1;
	
	float nQty, nQtyAvaiable;
	
	while(!rsl.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(tmpStr,
			rsl.GetValue(_T("drugname")),
			rsl.GetValue(_T("unit")),
			rsl.GetValue(_T("qty")),
			rsl.GetValue(_T("qtyissue")),
			rsl.GetValue(_T("qtyavaiable")),
			rsl.GetValue(_T("dousage")),
			rsl.GetValue(_T("speed")),
			rsl.GetValue(_T("storage_id")),
			rsl.GetValue(_T("product_id")),
			rsl.GetValue(_T("indication")),
			rsl.GetValue(_T("outpatient")),
			rsl.GetValue(_T("doctype")),
			NULL);
		rsl.GetValue(_T("qtyavaiable"), nQtyAvaiable);
		rsl.GetValue(_T("qty"), nQty);

		if(nQty > nQtyAvaiable)
		{
			m_wndList.SetCheck(nItem, FALSE);
			m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 128, 64));
			m_wndList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255));
		}
		else
		{
			m_wndList.SetCheck(nItem, TRUE);
		}

		
		rsl.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSTreatmentDrugCopyDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	float nQty = 0;
	long nProductId;
	int  nStorageId;
	CString szUsage, szIndication, szOutpatient, szDocType;
	int nCount = 0;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(!m_wndList.GetCheck(i))
			continue;
		szUsage = m_wndList.GetItemText(i, 6);
		nStorageId = str2int(m_wndList.GetItemText(i, 8));
		nProductId = str2long(m_wndList.GetItemText(i, 9));
		nQty = str2float(m_wndList.GetItemText(i, 4));
		szIndication = m_wndList.GetItemText(i, 10);
		szOutpatient = m_wndList.GetItemText(i, 11);
		szDocType = m_wndList.GetItemText(i, 12);
		if(nQty <= 0)
			continue;

		m_hms_ipharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"), nStorageId);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_treatidx"), m_nTreatIdx);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_doctor"), pMF->m_szDoctor);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), szDocType == _T("CPO")? _T("C"):_T("P"));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_objecttype"), pMF->GetObjectType());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_objectid"), pMF->GetObjectID());
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"), nProductId);
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), nQty);
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_usage"), szUsage);
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_inpackage"), _T("N"));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_indication"), szIndication);
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_outpatient"), szOutpatient);

		CString szSQL;
		
		szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "), m_hms_ipharmaorderTbl.FormatSQL());
		int ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			nCount++;
		}
	}
	if(nCount > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Có [%d] mục không thêm được"), nCount);
		ShowMessageBox(szMsg);
	}
	CGuiDialog::OnOK();
	
} 
void CHMSTreatmentDrugCopyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 


void CHMSTreatmentDrugCopyDialog::OnPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDrugCopyDialog::OnPeriodSelendok(){
	UpdateData(TRUE);
	OnOrderListLoadData();
	UpdateData(FALSE);
}
/*void CHMSTreatmentDrugCopyDialog::OnPeriodSetfocus(){
	
}*/
/*void CHMSTreatmentDrugCopyDialog::OnPeriodKillfocus(){
	
}*/
long CHMSTreatmentDrugCopyDialog::OnPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndPeriod.DeleteAllItems(); 
	if(m_wndPeriod.IsSearchKey())
	{
		if(m_szPeriodKey == _T("5"))
		{
			m_wndPeriod.AddItems(_T("5"), _T("Trước 5 ngày"), NULL);
			return 1;
		}
		if(m_szPeriodKey == _T("15"))
		{
			m_wndPeriod.AddItems(_T("15"), _T("Trước 15 ngày"), NULL);
			return 1;
		}
		if(m_szPeriodKey == _T("30"))
		{
			m_wndPeriod.AddItems(_T("30"), _T("Trước 30 ngày"), NULL);	
			return 1;
		}
	}


	m_wndPeriod.AddItems(_T("0"), _T("Tất cả"), NULL);
	m_wndPeriod.AddItems(_T("5"), _T("Trước 5 ngày"), NULL);
	m_wndPeriod.AddItems(_T("15"), _T("Trước 15 ngày"), NULL);
	m_wndPeriod.AddItems(_T("30"), _T("Trước 30 ngày"), NULL);	
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriod.IsSearchKey() && !m_szPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPeriodKey
};
	m_wndPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentDrugCopyDialog::OnPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


int CHMSTreatmentDrugCopyDialog::OnAddHMSTreatmentDrugCopyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnEditHMSTreatmentDrugCopyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentDrugCopyDialog::OnDeleteHMSTreatmentDrugCopyDialog(){
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
 		OnCancelHMSTreatmentDrugCopyDialog();
 	}
	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnSaveHMSTreatmentDrugCopyDialog(){
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
 		//OnHMSTreatmentDrugCopyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnCancelHMSTreatmentDrugCopyDialog(){
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
int CHMSTreatmentDrugCopyDialog::OnHMSTreatmentDrugCopyDialogListLoadData(){
	return 0;
}
