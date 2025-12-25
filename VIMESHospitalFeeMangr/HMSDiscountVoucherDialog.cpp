#include "HMSDiscountVoucherDialog.h"
#include "MainFrm.h"
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDiscountVoucherDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnRefundSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnAddHMSDiscountVoucherDialog();
} 
static int _OnEditHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnEditHMSDiscountVoucherDialog();
} 
static int _OnDeleteHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnDeleteHMSDiscountVoucherDialog();
} 
static int _OnSaveHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnSaveHMSDiscountVoucherDialog();
} 
static int _OnCancelHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnCancelHMSDiscountVoucherDialog();
} 
CHMSDiscountVoucherDialog::CHMSDiscountVoucherDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nInvoiceNo=0;
}
CHMSDiscountVoucherDialog::~CHMSDiscountVoucherDialog(){
}
void CHMSDiscountVoucherDialog::OnCreateComponents(){
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 5, 5, 105, 30);
	m_wndInvoiceNo.Create(this,110, 5, 180, 30); 
	m_wndDateLabel.Create(this, _T("Date"), 185, 5, 285, 30);
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 35, 800, 450);
	m_wndDate.Create(this,290, 5, 415, 30); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 420, 5, 520, 30);
	m_wndSerialNo.Create(this,525, 5, 610, 30); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 615, 5, 715, 30);
	m_wndReceiptNo.Create(this,720, 5, 796, 30); 
	m_wndList.Create(this,10, 60, 795, 445); 
	m_wndRefund.Create(this, _T("&Print"), 615, 455, 705, 480);
	m_wndClose.Create(this, _T("&Close"), 710, 455, 800, 480);

}
void CHMSDiscountVoucherDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceNo.SetLimitText(22);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(22);
	m_wndReceiptNo.SetCheckValue(true);

	m_wndList.SetSortHeader(false);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT||CFMT_CENTER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);	
	m_wndList.InsertColumn(6, _T("item"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(7, _T("xRowID"), CFMT_TEXT, 0);	

	m_hms_fee_refundTbl.SetTableName(_T("hms_fee_refund"));
	m_hms_fee_refundTbl.AddField(_T("HFE_ORG_ID"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_CLIENT_ID"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_CREATEDBY"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_UPDATEDDATE"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("HFE_ISACTIVE"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_DEPTID"), dfText, 7); 
	m_hms_fee_refundTbl.AddField(_T("HFE_REFIDX"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_TYPE"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("HFE_OBJECTID"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("HFE_STAFF"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_SERIALNO"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("HFE_RECEIPTNO"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("HFE_LOCKED"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("HFE_LOCKEDBY"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_LOCKEDDATE"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("HFE_POSTED"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("HFE_POSTEDBY"), dfText, 32); 
	m_hms_fee_refundTbl.AddField(_T("HFE_POSTEDDATE"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("HFE_DESC"), dfText, 254); 
	m_hms_fee_refundTbl.AddField(_T("HFE_AMOUNT"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_PATPAID"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("HFE_PRINT"), dfLong); 

}
void CHMSDiscountVoucherDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(GetMode());

	SetWindowText(_T("PHI\x1EBEU MI\x1EC4N GI\x1EA2M"));
}
void CHMSDiscountVoucherDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);

}
void CHMSDiscountVoucherDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_discount WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
		rs.GetValue(_T("HFE_SERIALNO"), m_szSerialNo);
		rs.GetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
		rs.GetValue(_T("HFE_DATE"), m_szDate);
		OnListLoadData();
	}

}
void CHMSDiscountVoucherDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_hms_fee_refundTbl.SetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_SERIALNO"), m_szSerialNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_DATE"), m_szDate);

}
void CHMSDiscountVoucherDialog::SetDefaultValues(){

	//m_nInvoiceNo=0;
	m_szDate.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;

}
int CHMSDiscountVoucherDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(FALSE);
			m_wndRefund.EnableWindow(TRUE);
 			break;
 		case VM_EDIT: 
			m_wndRefund.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
			m_wndRefund.EnableWindow(FALSE);
			break;
 		case VM_NONE: 
 			SetDefaultValues();
 			break;
 		};
		EnableControls(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSDiscountVoucherDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnDateChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDateSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDateKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnDateCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnSerialNoChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnSerialNoKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSDiscountVoucherDialog::OnListDblClick(){
	
} 
void CHMSDiscountVoucherDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
	CString szStatus, szLocked, szCreatedBy;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	szSQL.Format(_T("SELECT hfe_status, hfe_locked FROM hms_fee_discount WHERE hfe_docno = %ld AND hfe_refidx=%ld and hfe_type='E' "), m_nDocumentNo, m_nInvoiceNo);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_status"), szStatus);
		rs.GetValue(_T("hfe_locked"), szLocked);
		rs.GetValue(_T("hfe_createdby"), szCreatedBy);
		if(szCreatedBy != pMF->GetCurrentUser())
		{
			ShowMessageBox(_T("Phi\x1EBFu mi\x1EC5n gi\x1EA3m \x111\x1B0\x1EE3\x63 t\x1EA1o \x62\x1EDFi ng\x1B0\x1EDDi kh\xE1\x63. Kh\xF4ng \x63ho ph\xE9p \x78\xF3\x61"));
			return -1;
		}
		if(szStatus == _T("P") || szLocked == _T("Y"))
		{
			ShowMessageBox(_T("Cannot process with current status"));
			return -1;
		}

	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			double nLine = str2double(m_wndList.GetItemText(i, 7));
 			szSQL.Format(_T(" HMS_FEE_DISCOUNT_DELLINE_V2(%ld,%ld, %f, '%s') "),
				m_nDocumentNo, m_nInvoiceNo, nLine, pMF->GetCurrentUser()); 

 			ret += str2int(pMF->ExecDML(szSQL));
		}
	}

 	if(ret > 0){ 
 		OnListLoadData();
 	}
	else
	{
		ShowMessageBox(_T("Cannot process with current status"));
	}

	 return 0;
} 
long CHMSDiscountVoucherDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndList.BeginLoad(); 

	szSQL.Format(_T(" SELECT hfe_invoiceline_id as idx, hfe_status AS status,") \
_T("   hfe_type        AS feetype,") \
_T("   hfe_itemid      AS itemid,") \
_T("   hfe_desc        AS name,") \
_T("   hfe_unit        AS unit,") \
_T("   SUM(hfe_qty)    AS qty,") \
_T("   hfe_unitprice   AS unitprice,") \
_T("   SUM(hfe_amount) AS amount") \
_T(" FROM hms_fee_discountline") \
_T(" LEFT JOIN hms_fee_group") \
_T(" ON(hfg_id        =hfe_group)") \
_T(" WHERE hfe_docno  =%ld") \
_T(" AND hfe_invoiceno=%ld") \
_T(" GROUP BY hfg_index,") \
_T("   hfe_type,") \
_T("   hfe_status,") \
_T("   hfe_itemid,") \
_T("   hfe_desc,") \
_T("   hfe_unit,") \
_T("   hfe_unitprice, hfe_invoiceline_id ") \
_T(" ORDER BY hfg_index,") \
_T("   feetype,") \
_T("   name,") \
_T("   unit,") \
_T("   unitprice"), m_nDocumentNo, m_nInvoiceNo);

//_msg(_T("%s"), szSQL);
	int nCount = 0, nIdx=0;
	double nTotalAmount=0, nAmount=0;

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rs.GetValue(_T("amount"),nAmount);
		nTotalAmount += nAmount;
		m_wndList.AddItems(tmpStr, 
				rs.GetValue(_T("name")),
				rs.GetValue(_T("unit")),
				rs.GetValue(_T("qty")),
				rs.GetValue(_T("unitprice")),
				rs.GetValue(_T("amount")),				
				rs.GetValue(_T("itemid")),
				rs.GetValue(_T("idx")),	NULL);		
		rs.MoveNext();
	}
	
	if(nTotalAmount > 0){
		TranslateString(_T("Total Amount"), tmpStr);
		int nItem = m_wndList.AddItems(_T(""), tmpStr, _T(""), _T(""), _T(""), ToString(nTotalAmount), NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);

	}
	m_wndList.EndLoad();	
	return 0;
}
void CHMSDiscountVoucherDialog::OnRefundSelect(){
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("hms_fee_refund_post(%ld,'%s') "), m_nInvoiceNo, pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0)
	{
		CGuiDialog::OnOK();
	}
	else
	{
		ShowMessageBox(_T("Cannot refund"));
	}

} 
void CHMSDiscountVoucherDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDiscountVoucherDialog::OnAddHMSDiscountVoucherDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountVoucherDialog::OnEditHMSDiscountVoucherDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountVoucherDialog::OnDeleteHMSDiscountVoucherDialog(){
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
 		OnCancelHMSDiscountVoucherDialog();
 	}
	return 0;
}
int CHMSDiscountVoucherDialog::OnSaveHMSDiscountVoucherDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_fee_refundTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_fee_refundTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSDiscountVoucherDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountVoucherDialog::OnCancelHMSDiscountVoucherDialog(){
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
int CHMSDiscountVoucherDialog::OnHMSDiscountVoucherDialogListLoadData(){
	return 0;
}
