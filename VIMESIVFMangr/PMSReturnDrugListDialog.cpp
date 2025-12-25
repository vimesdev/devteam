#include "PMSReturnDrugListDialog.h"
#include "MainFrm.h"
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnAddPMSReturnDrugListDialog();
} 
static int _OnEditPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnEditPMSReturnDrugListDialog();
} 
static int _OnDeletePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDeletePMSReturnDrugListDialog();
} 
static int _OnSavePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnSavePMSReturnDrugListDialog();
} 
static int _OnCancelPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnCancelPMSReturnDrugListDialog();
} 
CPMSReturnDrugListDialog::CPMSReturnDrugListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CPMSReturnDrugListDialog::~CPMSReturnDrugListDialog(){
}
void CPMSReturnDrugListDialog::OnCreateComponents(){
	m_wndDrugListGroup.Create(this, _T("Drug List"), 5, 5, 640, 450);
	m_wndDrugList.Create(this,10, 30, 635, 445); 
	m_wndApply.Create(this, _T("&Apply"), 475, 455, 555, 480);
	m_wndClose.Create(this, _T("&Close"), 560, 455, 640, 480);

}
void CPMSReturnDrugListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugList.InsertColumn(0, _T("Drug Name"), CFMT_TEXT, 250);
	m_wndDrugList.InsertColumn(1, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDrugList.InsertColumn(2, _T("Order Qty"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(3, _T("Return Qty"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(4, _T("Sheet ID"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(5, _T("Order ID"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(6, _T("sitemid"), CFMT_NUMBER, 0);
	m_wndDrugList.InsertColumn(7, _T("DocNo"), CFMT_NUMBER, 0);
	
	m_wndDrugList.SetCheckBox(TRUE);
	m_wndDrugList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_pms_returnorder_lineTbl.SetTableName(_T("pms_return_order_line"));
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_id"), dfText, 15); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_sitemid"), dfLong); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_qty"), dfFloat); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_docno"), dfLong); 


}
void CPMSReturnDrugListDialog::OnSetWindowEvents(){
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnDrugListLoadData();
}
void CPMSReturnDrugListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPMSReturnDrugListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSReturnDrugListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSReturnDrugListDialog::SetDefaultValues(){


}
int CPMSReturnDrugListDialog::SetMode(int nMode){
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
void CPMSReturnDrugListDialog::OnDrugListDblClick(){
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return;
	bool bCheck = !m_wndDrugList.GetCheck(nSel);
	m_wndDrugList.SetCheck(nSel, bCheck);	
	CString szItemID, szDocNo, szNewDoc;
	szItemID = m_wndDrugList.GetItemText(nSel, 6);
	if(ToLong(szItemID) <= 0)
	{
		szDocNo = m_wndDrugList.GetItemText(nSel, 7);
		for (int i =0; i < m_wndDrugList.GetItemCount(); i++){
			szNewDoc = m_wndDrugList.GetItemText(nSel, 7);
			if(szNewDoc != szDocNo)
				break;
			m_wndDrugList.SetCheck(i, bCheck);
		}
	}

} 
void CPMSReturnDrugListDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSReturnDrugListDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSReturnDrugListDialog::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldDoc, szNewDoc;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
/*	
	szSQL.Format(_T(" SELECT 	distinct hd_docno as docno,") \
_T(" 	hp_surname||' '||hp_midname||' '||hp_firstname as pname, ") \
_T(" hpo_transaction_id as sheetidx, hpo_orderid as orderid, hpol_product_item_id as sitemid, product_name as drugname, product_uomname as unit, sum(hpol_orderqty) as orderqty, sum(hpol_orderqty-hpol_issueqty) as retqty ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
_T(" WHERE hpo_storage_id=%d and hpo_deptid='%s' and hpol_issueqty < hpol_orderqty and hpol_return in('Y','R') and trunc_date(hpo_approvedate) <= trunc_date('%s') ") \
_T(" GROUP BY docno, pname, sheetidx, orderid, sitemid, drugname, unit ORDER BY pname, drugname "),
m_nStockID, pMF->m_szDept, m_szReturnDate);
*/
	szSQL.Format(_T("SELECT hdr_sheetidx as sheetidx, hdr_docno as docno,") \
		_T(" hp_surname||' '||hp_midname||' '||hp_firstname as pname, ") \
		_T(" hdr_orderid as orderid, ") \
		_T(" hdr_itemid as itemid, ") \
		_T(" hdr_sitemid as sitemid, ") \
		_T(" pmi_name as drugname, ") \
		_T(" pmi_unit as unit, ") \
		_T(" sum(hdr_orderqty) as orderqty, ") \
		_T(" sum(hdr_qty) as retqty ") \
		_T(" FROM hms_drug_return ") \
		_T(" LEFT JOIN hms_doc ON(hdr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno) ") \
		_T(" LEFT JOIN m_productitem_view ON(hdr_sitemid=product_item_id) ") \
		_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
		_T(" WHERE hdr_stockid=%d and hdr_deptid='%s' and hdr_status='O' and hdr_confirmdate <= cast_string2timestamp('%s') and hdr_qty > 0 ") \
		_T(" and hdr_confirmby='%s' ") \
		_T(" GROUP BY sheetidx, docno, pname, orderid, itemid, sitemid, drugname, unit ") \
		_T(" ORDER BY pname, drugname "), m_nStockID, pMF->m_szDept, m_szReturnDate, m_szCreatedBy);

		 
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);

	int nItem;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("docno"), szNewDoc);
		if(szOldDoc != szNewDoc)
		{
			nItem  = m_wndDrugList.AddItems(
				rs.GetValue(_T("pname")), 
				rs.GetValue(_T("docno")),
				_T(""),
				_T(""),
				rs.GetValue(_T("sheetidx")),
				rs.GetValue(_T("orderid")),
				_T(""),
				rs.GetValue(_T("docno")),
				NULL);
			m_wndDrugList.SetItemBkColor(nItem, COLOR_ACCEPT);
			szOldDoc = szNewDoc;
			m_wndDrugList.SetCheck(nItem, true);
		}
		nItem = m_wndDrugList.AddItems(
				rs.GetValue(_T("drugname")), 
				rs.GetValue(_T("unit")), 
				rs.GetValue(_T("orderqty")), 
				rs.GetValue(_T("retqty")), 
				rs.GetValue(_T("sheetidx")), 
				rs.GetValue(_T("orderid")), 
				rs.GetValue(_T("sitemid")), 
				rs.GetValue(_T("docno")),
				NULL);
		m_wndDrugList.SetCheck(nItem, true);

		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;

}
void CPMSReturnDrugListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);

	CString sheetIdx, sItemID, m_szDocNo;
	CString szSQL;
	long nOrderID=0, nDocumentNo=0;
	int nRetQty;
	int ret;
	
	pMF->BeginTransaction();

	for (int i =0; i < m_wndDrugList.GetItemCount(); i++)
	{
		sItemID = m_wndDrugList.GetItemText(i, 6);
		
		if(m_wndDrugList.GetCheck(i) && ToLong(sItemID) > 0)
		{
			nRetQty = str2int(m_wndDrugList.GetItemText(i, 3));
			sheetIdx = m_wndDrugList.GetItemText(i, 4);	
			nOrderID = ToLong(m_wndDrugList.GetItemText(i, 5));	
			nDocumentNo = str2long(m_wndDrugList.GetItemText(i, 7));
			
			szSQL.Format(_T("SELECT sum(hdr_qty) as retqty FROM hms_drug_return WHERE hdr_orderid=%ld and hdr_sitemid=%ld and hdr_status='O' "),
					nOrderID, str2long(sItemID));
			rsl.ExecSQL(szSQL);
			if(!rsl.IsEOF())
			{
				rsl.GetValue(_T("retqty"), nRetQty);
			}
			else
				nRetQty = 0;

			if(nRetQty > 0)
			{
				
				m_pms_returnorder_lineTbl.SetValue(_T("pmrol_userid"), pMF->GetCurrentUser());
				m_pms_returnorder_lineTbl.SetValue(_T("pmrol_id"), m_szSheetID);
				m_pms_returnorder_lineTbl.SetValue(_T("pmrol_sitemid"), sItemID);
				m_pms_returnorder_lineTbl.SetValue(_T("pmrol_qty"), nRetQty);
				m_pms_returnorder_lineTbl.SetValue(_T("pmrol_docno"), nDocumentNo);
				szSQL.Format(_T("SELECT pms_return_order_line_add_auto(%s)"), m_pms_returnorder_lineTbl.FormatSQL());			
	//_fmsg(_T("%s"), szSQL);
				ret = rs.ExecSQL(szSQL);
				if(ret > 0)
				{
					long nLineIdx, nSerialIdx;
					szSQL.Format(_T("SELECT * FROM hms_drug_return WHERE hdr_orderid=%ld and hdr_sitemid=%ld and hdr_status='O' "),
						nOrderID, str2long(sItemID));
	//_fmsg(_T("%s"), szSQL);

					rsl.ExecSQL(szSQL);
					while(!rsl.IsEOF()){
						rsl.GetValue(_T("hdr_serial"), nSerialIdx);
						rsl.GetValue(_T("hdr_lnidx"), nLineIdx);
						szSQL.Format(_T("UPDATE hms_drug_return SET hdr_status='S', hdr_supplementid='%s' WHERE hdr_serial =%ld"), m_szSheetID, nSerialIdx);
						pMF->ExecSQL(szSQL);
						szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_return='Y' WHERE hpol_orderid=%ld and hpol_lnidx=%ld "), nOrderID, nLineIdx);
						pMF->ExecSQL(szSQL);
						rsl.MoveNext();
					}
				}
			}
		}
	}
	
	pMF->Commit();

	CGuiDialog::OnOK();
} 
void CPMSReturnDrugListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPMSReturnDrugListDialog::OnAddPMSReturnDrugListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSReturnDrugListDialog::OnEditPMSReturnDrugListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSReturnDrugListDialog::OnDeletePMSReturnDrugListDialog(){
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
 		OnCancelPMSReturnDrugListDialog(); 
 	}
	return 0;
}
int CPMSReturnDrugListDialog::OnSavePMSReturnDrugListDialog(){
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
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPMSReturnDrugListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSReturnDrugListDialog::OnCancelPMSReturnDrugListDialog(){
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
int CPMSReturnDrugListDialog::OnPMSReturnDrugListDialogListLoadData(){
	return 0;
}
