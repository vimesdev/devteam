#include "HMSDailyOrderAddEntryDialog.h"
#include "MainFrm.h"
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntryDialog* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameAddNew();
}*/
static void _OnPrevOrderSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnPrevOrderSelect();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnLogListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListLoadData();
} 
static void _OnLogListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListDblClick();
} 
static void _OnLogListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListSelectChange(nOldItem, nNewItem);
} 
static int _OnLogListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnmarkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnUnmarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnAddHMSDailyOrderAddEntryDialog();
} 
static int _OnEditHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnEditHMSDailyOrderAddEntryDialog();
} 
static int _OnDeleteHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnDeleteHMSDailyOrderAddEntryDialog();
} 
static int _OnSaveHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnSaveHMSDailyOrderAddEntryDialog();
} 
static int _OnCancelHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnCancelHMSDailyOrderAddEntryDialog();
} 
CHMSDailyOrderAddEntryDialog::CHMSDailyOrderAddEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_pWndOrder = NULL;
}
CHMSDailyOrderAddEntryDialog::~CHMSDailyOrderAddEntryDialog(){
}
void CHMSDailyOrderAddEntryDialog::OnCreateComponents(){
	m_wndDrugLogsI.Create(this, _T("Drug Logs"), 5, 70, 500, 570);
	m_wndPatientList.Create(this, _T("Patient List"), 0,0,0,0);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 10, 125, 35);
	m_wndPatientName.Create(this,130, 10, 403, 35); 
	m_wndPrevOrder.Create(this, _T("Prev Order"), 408, 10, 498, 35);
	m_wndDescription.Create(this,5, 40, 498, 65); 
	m_wndLogList.Create(this,10, 95, 495, 565); 
	m_wndList.Create(this,0, 0, 0, 0); 
	m_wndMark.Create(this, _T("Mark"), 5, 575, 85, 600);
	m_wndUnmark.Create(this, _T("Unmark"), 90, 575, 170, 600);
	m_wndAdd.Create(this, _T("&Apply"), 420, 575, 500, 600);

}
void CHMSDailyOrderAddEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndPatientName.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 85);
	m_wndPatientName.InsertColumn(1, _T("Record No"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndPatientName.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(5, _T("Object"), CFMT_TEXT, 150);
	m_wndPatientName.InsertColumn(6, _T("Room"), CFMT_NUMBER, 50);
	m_wndPatientName.InsertColumn(7, _T("patientno"), CFMT_NUMBER, 0);
	m_wndPatientName.InsertColumn(8, _T("Refindex"), CFMT_NUMBER, 0);
	m_wndPatientName.InsertColumn(9, _T("objectid"), CFMT_NUMBER, 0);
	m_wndPatientName.InsertColumn(10, _T("objecttype"), CFMT_TEXT, 0);
	m_wndPatientName.Format(10, 2, 10);


	
	m_wndLogList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndLogList.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndLogList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndLogList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 50);
	m_wndLogList.InsertColumn(4, _T("Storage ID"), CFMT_NUMBER, 50);
	m_wndLogList.InsertColumn(5, _T("OnHand"), CFMT_NUMBER, 60);
	m_wndLogList.InsertColumn(6, _T(""), CFMT_TEXT, 0); //product_id
	m_wndLogList.GetHeaderControl()->SetItemHeight(2);
	m_wndLogList.SetCheckBox(true);
	m_wndLogList.SetSortHeader(false);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("Storage ID"), CFMT_NUMBER, 60);


	m_wndDescription.SetReadOnly(true);
	m_wndPrevOrder.ModifyStyle(WS_TABSTOP, 0);
	m_wndMark.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnmark.ModifyStyle(WS_TABSTOP, 0);


	m_hms_pharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_pharmaorderTbl.AddField(_T("hpo_batch_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong);
	m_hms_pharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_feetype"), dfText); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_dousage"), dfText, 128); 


}
void CHMSDailyOrderAddEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	m_wndPrevOrder.SetEvent(WE_CLICK, _OnPrevOrderSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndLogList.SetEvent(WE_SELCHANGE, _OnLogListSelectChangeFnc);
	m_wndLogList.SetEvent(WE_LOADDATA, _OnLogListLoadDataFnc);
	m_wndLogList.SetEvent(WE_DBLCLICK, _OnLogListDblClickFnc);
	m_wndLogList.AddEvent(1, _T("Delete"), _OnLogListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnmark.SetEvent(WE_CLICK, _OnUnmarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	SetMode(VM_ADD);
	OnListLoadData();

}
void CHMSDailyOrderAddEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSDailyOrderAddEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderAddEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), m_nBatchID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), m_nTransactionID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), str2long(m_szPatientNameKey));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_roomid"), m_nRoomID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_bedid"), m_nBedID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_refidx"), m_nRefIndex);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

	m_hms_pharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("D"));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_scaledrug"), 0);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_reference_id"),0);
	m_hms_pharmaorderTbl.SetValue(_T("hfo_refitem_id"), _T(""));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_feetype"), _T("CP"));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_dousage"), m_szUsage);


}
void CHMSDailyOrderAddEntryDialog::SetDefaultValues(){

//	m_szPatientNameKey.Empty();
	m_szDescription.Empty();
	m_nDays = 1;

}
int CHMSDailyOrderAddEntryDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			//SetDefaultValues();
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
void CHMSDailyOrderAddEntryDialog::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntryDialog::OnPatientNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_druglogs SET hdl_ordering='N' ") \
		_T(" WHERE hdl_docno=%ld and hdl_deptid='%s' and trunc(hdl_lastdate) < to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "),
		str2long(m_szPatientNameKey), pMF->m_szDept, m_szOrderDate);
	pMF->ExecSQL(szSQL);

	OnLogListLoadData();
}
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntryDialog::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && str2long(m_szPatientNameKey) > 0){
		szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szPatientNameKey));
	};
	m_wndPatientName.DeleteAllItems(); 
	m_wndLogList.DeleteAllItems();
	int nCount = 0;

	//szWhere.AppendFormat(_T(" and hd_object <> 7 "));
	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
_T("   hp_patientno           AS patientno,") \
_T("   htr_recordno           AS recordno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                     AS pname,") \
_T("   hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
_T("   HMS_GETSEX(hp_sex)                                  AS sex,") \
_T("   htr_idx                                             AS refidx,") \
_T("   hd_object                                           AS objectid,") \
_T("   HMS_GetObjectName(hd_object)                        AS objectname,") \
_T("   hms_getobjecttype(hd_object)                        AS objecttype") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(htr_docno      =hd_docno)") \
_T(" WHERE (htr_deptid ='%s'") \
_T(" OR htr_ctdeptid   ='%s')") \
_T(" AND htr_status    ='I'") \
_T(" ORDER BY pname,") \
_T("   docno "), pMF->m_szDept, pMF->m_szDept, szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("recordno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("objectid")),
			rs.GetValue(_T("objecttype")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyOrderAddEntryDialog::OnPrevOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionChange(){
	
} */
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDailyOrderAddEntryDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSDailyOrderAddEntryDialog::OnLogListDblClick(){
	
} 
void CHMSDailyOrderAddEntryDialog::OnLogListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntryDialog::OnLogListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderAddEntryDialog::OnLogListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(TRUE);

	szSQL.Format(_T(" SELECT msl_storage_id                                 AS storage_id,") \
_T("   hdl_product_id                                      AS product_id,") \
_T("   mp_name                                             AS product_name,") \
_T(" adu_name as product_uomname, ") \
_T("   hdl_qty                                             AS qtyorder,") \
_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS qtyonhand") \
_T(" FROM hms_druglogs") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno=hdl_docno)") \
_T(" LEFT JOIN m_storage_default") \
_T(" ON(msd_object_id=CAST(hd_object AS INTEGER))") \
_T(" LEFT JOIN m_storageline") \
_T(" ON(msd_storage_id  =msl_storage_id") \
_T(" AND msl_product_id =hdl_product_id)") \
_T(" LEFT JOIN m_product") \
_T(" ON(mp_product_id     =hdl_product_id)") \
_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id) ") \
_T(" WHERE hdl_docno=%ld and hdl_deptid='%s' and hdl_ordering='N' and trunc(sysdate) between hdl_startdate and hdl_enddate and msl_storage_id > 0") \
_T(" GROUP BY msl_storage_id,") \
_T("   hdl_product_id,") \
_T("   mp_name,") \
_T(" adu_name, ") \
_T("   hdl_qty") \
_T(" ORDER BY product_name"), str2long(m_szPatientNameKey), pMF->m_szDept);

	m_wndLogList.BeginLoad(); 
	int nCount = 0;
	CString tmpStr;
	int nIndex=1;
	float nQtyOrder;
	double nQtyOnHand;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("qtyorder"), nQtyOrder);
		rs.GetValue(_T("qtyonhand"), nQtyOnHand);
		int nItem = m_wndLogList.AddItems(
			tmpStr, 
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("Qtyorder")), 
			rs.GetValue(_T("Storage_ID")), 
			rs.GetValue(_T("QtyOnhand")), 
			rs.GetValue(_T("product_id")), 
			NULL);
		m_wndLogList.SetCheck(nItem, TRUE);
		if(nQtyOrder > nQtyOnHand)
		{
			m_wndLogList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
			m_wndLogList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndLogList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSDailyOrderAddEntryDialog::OnListDblClick(){
	
} 
void CHMSDailyOrderAddEntryDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntryDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderAddEntryDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	szSQL.Format(_T(" SELECT hpo_docno,") \
_T("   hpo_orderid,") \
_T("   hpo_storage_id,") \
_T("   hpo_orderdate") \
_T(" FROM hms_ipharmaorder") \
_T(" WHERE hpo_batch_id=%ld"), m_nBatchID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hpo_docno")), 
			rs.GetValue(_T("hpo_orderid")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("StorageID")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSDailyOrderAddEntryDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndLogList.GetItemCount(); i++)
	{
		m_wndLogList.SetCheck(i, TRUE);
	}

	
} 
void CHMSDailyOrderAddEntryDialog::OnUnmarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndLogList.GetItemCount(); i++)
	{
		m_wndLogList.SetCheck(i, FALSE);
	}
	
} 
void CHMSDailyOrderAddEntryDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	if(m_szPatientNameKey.IsEmpty())
		return;
_msg(_T("%s"), m_szPatientNameKey);
	OnSaveHMSDailyOrderAddEntryDialog();
} 
int CHMSDailyOrderAddEntryDialog::OnAddHMSDailyOrderAddEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnEditHMSDailyOrderAddEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderAddEntryDialog::OnDeleteHMSDailyOrderAddEntryDialog(){
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
 		OnCancelHMSDailyOrderAddEntryDialog();
 	}
	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnSaveHMSDailyOrderAddEntryDialog(){
 	if(GetMode() != VM_ADD)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	bool bAddFlag = false;
	long nOrderID;
	float nQty;
	long nProductID;
	long nDocumentNo;

	//Kiem tra neu doi tuong dich vu thi gan loai phieu=S
	CString szObjectType=_T("I");
	int nObjectID = str2int(m_wndPatientName.GetCurrent(9));
	if(nObjectID == 7)
		szObjectType = _T("S");
	
	m_nPatientNo = str2long(m_wndPatientName.GetCurrent(7));
	nDocumentNo = str2long(m_szPatientNameKey);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	for (int n =0; n < m_wndLogList.GetItemCount(); n++)
	{
		if(!m_wndLogList.GetCheck(n))
			continue;
		m_nStorageID = str2long(m_wndLogList.GetItemText(n, 4));
		nQty = str2float(m_wndLogList.GetItemText(n, 3));
		nProductID = str2long(m_wndLogList.GetItemText(n, 6));

		long nTransactionID = ((CHMSDailyOrderView*)m_pWndOrder)->GetTransactionID(m_nStorageID, szObjectType);
		m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), m_nBatchID);
		m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), nTransactionID);
		m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);	
		m_hms_pharmaorderTbl.SetValue(_T("hpol_qtyorder"), nQty);	
		m_hms_pharmaorderTbl.SetValue(_T("hpol_product_id"), nProductID);	
		
		for (int i=0; i < m_nDays; i++)
		{
			CDate odate;
			odate.ParseDate(m_szOrderDate);
			odate += i;
			CString szOrderDate = odate.GetDate();
			szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());

			m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), szOrderDate);

			
			szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE(%s) "), m_hms_pharmaorderTbl.FormatSQL());
	
			nOrderID = str2long(pMF->ExecDML(szSQL));
			if(nOrderID > 0)
			{
				CString szSQL;
				szSQL.Format(_T("UPDATE hms_druglogs ") \
					_T("SET hdl_ordering='Y', hdl_lastdate=sysdate ") \
					_T("WHERE hdl_docno=%ld and hdl_deptid='%s' ") \
					_T(" and hdl_product_id=%ld "), nDocumentNo, pMF->m_szDept, nProductID);
				pMF->ExecSQL(szSQL);

			}
			
		}
	}
	OnLogListLoadData();
	OnListLoadData();
	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnCancelHMSDailyOrderAddEntryDialog(){
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
int CHMSDailyOrderAddEntryDialog::OnHMSDailyOrderAddEntryDialogListLoadData(){
	return 0;
}
