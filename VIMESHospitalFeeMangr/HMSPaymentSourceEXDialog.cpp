#include "HMSPaymentSourceEXDialog.h"
#include "MainFrm.h"
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSPaymentSourceEXDialog *pVw = (CHMSPaymentSourceEXDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentSourceEXDialog *pVw = (CHMSPaymentSourceEXDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentSourceEXDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentSourceEXDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentSourceEXDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnAddHMSPaymentSourceDialog();
} 
static int _OnEditHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnEditHMSPaymentSourceDialog();
} 
static int _OnDeleteHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnDeleteHMSPaymentSourceDialog();
} 
static int _OnSaveHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnSaveHMSPaymentSourceDialog();
} 
static int _OnCancelHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceEXDialog*)pWnd)->OnCancelHMSPaymentSourceDialog();
} 
CHMSPaymentSourceEXDialog::CHMSPaymentSourceEXDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPaymentSourceEXDialog::~CHMSPaymentSourceEXDialog(){
}
void CHMSPaymentSourceEXDialog::OnCreateComponents(){
	m_wndPaymentSource.Create(this, _T("Payment Source"), 5, 5, 600, 450);
	m_wndOK.Create(this, _T("&OK"), 437, 453, 517, 478);
	m_wndClose.Create(this, _T("&Close"), 520, 453, 600, 478);
	m_wndList.Create(this,10, 30, 595, 445); 

}
void CHMSPaymentSourceEXDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Patient Paid"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Payment Source"), CFMT_TEXT, 0);
	m_wndList.SetCheckBox(true);
	m_wndList.SetSortHeader(false);


}
void CHMSPaymentSourceEXDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

	OnListLoadData();

}
void CHMSPaymentSourceEXDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPaymentSourceEXDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentSourceEXDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentSourceEXDialog::SetDefaultValues(){


}
int CHMSPaymentSourceEXDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPaymentSourceEXDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	int nPatpaid = 0;
	int nTypeID;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		nPatpaid = 0;
		if(m_wndList.GetCheck(i))
		{
			nPatpaid = 1;

		}
		
		nTypeID = str2int(m_wndList.GetItemText(i, 1));
		tmpStr == m_wndList.GetItemText(i, 4);
		if(tmpStr == _T("TTL"))
			continue;

		szSQL.Format(_T("HMS_FEE_CHANGE_PAYSOURCE_EX(%ld, %ld, %d, '%s', %d) "),
			m_nDocumentNo, m_nInvoiceNo, nTypeID, pMF->GetCurrentUser(), nPatpaid);
		
		pMF->ExecDML(szSQL);
		//_msg(_T("%s"),szSQL);
	}
	CGuiDialog::OnOK();
} 
void CHMSPaymentSourceEXDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSPaymentSourceEXDialog::OnListDblClick(){
	
} 
void CHMSPaymentSourceEXDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentSourceEXDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentSourceEXDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	szWhere.AppendFormat(_T(" and hfe_itemid not in(select hfe_itemid from hms_fee_discountline where hfe_docno = %ld and hfe_refidx=%ld) "), m_nDocumentNo, m_nInvoiceNo);

	/*szSQL.Format(_T(" SELECT idx,") \
					_T("   description,") \
					_T("   SUM(amount) AS amount") \
					_T(" FROM") \
					_T("   (SELECT hft_id AS idx,") \
					_T("     hft_name     AS description,") \
					_T("     CASE") \
					_T("       WHEN hfe_type='V'") \
					_T("       THEN (hfe_cost -hfe_discount)") \
					_T("       WHEN hfe_type='X'") \
					_T("       THEN hfe_cost") \
					_T("       ELSE (hfe_patpaid+hfe_patdebt)") \
					_T("     END AS amount") \
					_T("   FROM hms_fee") \
					_T("   LEFT JOIN hms_fee_group") \
					_T("   ON(hfg_id =hfe_group)") \
					_T("   LEFT JOIN hms_fee_type") \
					_T("   ON(hft_id             =hfg_type_id)") \
					_T("   WHERE hfe_docno       = %ld ") \
					_T("   AND hfe_invoiceno     = %ld ") \
					_T("   AND hfe_status       IN('O','A')") \
					_T("   AND hfe_category     <> 'Y'") \
					_T("   AND ((hfe_type       <>'V'") \
					_T("   AND hfe_feegroup NOT IN('OPT_L'))") \
					_T("   OR hfe_type           ='V')") \
					_T("   AND (hfe_patpaid+hfe_patdebt) > 0") \
					_T(" %s ") \
					_T("   ) tbl") \
					_T(" GROUP BY idx,") \
					_T("   description") \
					_T(" ORDER BY idx"), m_nDocumentNo, m_nInvoiceNo, szWhere);*/
	szSQL.Format(_T(" SELECT idx,") \
				_T("   description,") \
				_T("   SUM(amount) AS amount") \
				_T(" FROM") \
				_T("   (SELECT hft_id AS idx,") \
				_T("     hft_name     AS description,") \
				_T("     CASE") \
				_T("       WHEN hfe_type='V'") \
				_T("       THEN (hfe_cost -hfe_discount)") \
				_T("       WHEN hfe_type='X'") \
				_T("       THEN hfe_cost") \
				_T("       ELSE (hfe_patpaid+hfe_patdebt)") \
				_T("     END AS amount") \
				_T("   FROM hms_fee") \
				_T("   LEFT JOIN hms_fee_group") \
				_T("   ON(hfg_id =hfe_group)") \
				_T("   LEFT JOIN hms_fee_type") \
				_T("   ON(hft_id             =hfg_type_id)") \
				_T("   LEFT JOIN hms_fee_list ON (hfe_itemid = hfl_feeid)") \
				_T("   WHERE hfe_docno       = %ld ") \
				_T("   AND hfe_invoiceno     = %ld ") \
				_T("   AND hfe_status       IN('O','A')") \
				_T("   AND hfe_category     NOT IN ('Y')") \
				_T("   AND ((hfe_type       <>'V'") \
				_T("   AND hfe_feegroup NOT IN('OPT_L'))") \
				_T("   OR hfe_type           ='V')") \
				_T("   AND (hfe_patpaid+hfe_patdebt) > 0") \
				_T("   AND NVL(hfl_categoryid, 0)  <> '501'") \
				_T(" %s ") \
				_T("   UNION ALL ") \
				_T("   SELECT 501 AS idx,") \
				_T("     CAST('Thủ thuật, phẫu thuật theo yêu cầu BN trả' AS NVARCHAR2(128)) AS description,") \
				_T("     CASE") \
				_T("       WHEN hfe_type='V'") \
				_T("       THEN (hfe_cost -hfe_discount)") \
				_T("       WHEN hfe_type='X'") \
				_T("       THEN hfe_cost") \
				_T("       ELSE (hfe_patpaid+hfe_patdebt)") \
				_T("     END AS amount") \
				_T("   FROM hms_fee") \
				_T("   LEFT JOIN hms_fee_group") \
				_T("   ON(hfg_id =hfe_group)") \
				_T("   LEFT JOIN hms_fee_type") \
				_T("   ON(hft_id             =hfg_type_id)") \
				_T("   LEFT JOIN hms_fee_list ON (hfe_itemid = hfl_feeid)") \
				_T("   WHERE hfe_docno       = %ld ") \
				_T("   AND hfe_invoiceno     = %ld ") \
				_T("   AND hfe_status       IN('O','A')") \
				_T("   AND hfe_category     NOT IN ('Y')") \
				_T("   AND ((hfe_type       <>'V'") \
				_T("   AND hfe_feegroup NOT IN('OPT_L'))") \
				_T("   OR hfe_type           ='V')") \
				_T("   AND (hfe_patpaid+hfe_patdebt) > 0") \
				_T("   AND NVL(hfl_categoryid, 0)  = '501'") \
				_T(" %s ") \
				_T("   ) tbl") \
				_T(" GROUP BY idx,") \
				_T("   description") \
				_T(" ORDER BY idx"), m_nDocumentNo, m_nInvoiceNo, szWhere, m_nDocumentNo, m_nInvoiceNo, szWhere);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	double nAmount = 0;
	double nTotalAmount =0;
	CString szidx;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("amount"), nAmount);
		rs.GetValue(_T("idx"), szidx);
		nTotalAmount += nAmount;
		nItem = m_wndList.AddItems(
			_T(""),
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), 
			_T("BN"), 
			NULL);
		m_wndList.SetCheck(nItem, TRUE);
		if (szidx == _T("501"))
		{
		m_wndList.SetSubItemBkColor(nItem, 1, RGB(202, 255, 112), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);
		m_wndList.SetSubItemBkColor(nItem, 2, RGB(202, 255, 112), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);
		}
		rs.MoveNext();
	}
	if(nTotalAmount > 0)
	{
		nItem = m_wndList.AddItems(
			_T(""),
			_T(""), 
			_T("T\x1ED5ng"), 
			ToString(nTotalAmount), 
			_T("TTL"), 
			NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSPaymentSourceEXDialog::OnAddHMSPaymentSourceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPaymentSourceEXDialog::OnEditHMSPaymentSourceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentSourceEXDialog::OnDeleteHMSPaymentSourceDialog(){
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
 		OnCancelHMSPaymentSourceDialog();
 	}
	return 0;
}
int CHMSPaymentSourceEXDialog::OnSaveHMSPaymentSourceDialog(){
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
 		//OnHMSPaymentSourceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPaymentSourceEXDialog::OnCancelHMSPaymentSourceDialog(){
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
int CHMSPaymentSourceEXDialog::OnHMSPaymentSourceDialogListLoadData(){
	return 0;
}
