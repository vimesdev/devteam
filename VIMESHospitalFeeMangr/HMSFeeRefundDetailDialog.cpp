#include "HMSFeeRefundDetailDialog.h"
#include "MainFrm.h"
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDetailDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDetailDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDetailDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDetailDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDetailDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeRefundDetailDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeRefundDetailDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDetailDialog *pVw = (CHMSFeeRefundDetailDialog *)pWnd;
	pVw->OnRefundSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDetailDialog *pVw = (CHMSFeeRefundDetailDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeeRefundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnAddHMSFeeRefundDetailDialog();
} 
static int _OnEditHMSFeeRefundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnEditHMSFeeRefundDetailDialog();
} 
static int _OnDeleteHMSFeeRefundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnDeleteHMSFeeRefundDetailDialog();
} 
static int _OnSaveHMSFeeRefundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnSaveHMSFeeRefundDetailDialog();
} 
static int _OnCancelHMSFeeRefundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDetailDialog*)pWnd)->OnCancelHMSFeeRefundDetailDialog();
} 
CHMSFeeRefundDetailDialog::CHMSFeeRefundDetailDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSFeeRefundDetailDialog::~CHMSFeeRefundDetailDialog(){
}
void CHMSFeeRefundDetailDialog::OnCreateComponents(){
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
	m_wndRefund.Create(this, _T("&Refund"), 615, 455, 705, 480);
	m_wndClose.Create(this, _T("&Close"), 710, 455, 800, 480);

}
void CHMSFeeRefundDetailDialog::OnInitializeComponents(){
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
	m_wndList.InsertColumn(7, _T("xRowID"), CFMT_NUMBER, 0);	

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
void CHMSFeeRefundDetailDialog::OnSetWindowEvents(){
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

	SetWindowText(_T("PHI\x1EBEU HO\xC0N TR\x1EA2"));

}
void CHMSFeeRefundDetailDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);

}
void CHMSFeeRefundDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_refund WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
		rs.GetValue(_T("HFE_SERIALNO"), m_szSerialNo);
		rs.GetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
		rs.GetValue(_T("HFE_DATE"), m_szDate);
		rs.GetValue(_T("HFE_TYPE"), m_szType);
		OnListLoadData();
	}

}
void CHMSFeeRefundDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_refundTbl.SetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_SERIALNO"), m_szSerialNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_DATE"), m_szDate);

}
void CHMSFeeRefundDetailDialog::SetDefaultValues(){

	m_nInvoiceNo=0;
	m_szDate.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;

}
int CHMSFeeRefundDetailDialog::SetMode(int nMode){
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
/*void CHMSFeeRefundDetailDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSFeeRefundDetailDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDetailDialog::OnDateChange(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnDateSetfocus(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnDateKillfocus(){
	
} */
int CHMSFeeRefundDetailDialog::OnDateCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDetailDialog::OnSerialNoChange(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnSerialNoKillfocus(){
	
} */
int CHMSFeeRefundDetailDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDetailDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeRefundDetailDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeRefundDetailDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSFeeRefundDetailDialog::OnListDblClick(){
	
} 
void CHMSFeeRefundDetailDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeRefundDetailDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szType == _T("F"))
		return 0;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	long nInvoiceLine_ID;
	int ret = 0;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			nInvoiceLine_ID = str2long(m_wndList.GetItemText(nSel, 7));
 			szSQL.Format(_T("HMS_FEE_REFUND_DELLINE_V2(%ld, %ld, %ld, '%s') "), 
				m_nDocumentNo, m_nInvoiceNo, nInvoiceLine_ID, pMF->GetCurrentUser());
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
long CHMSFeeRefundDetailDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndList.BeginLoad(); 

	szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T("		hfe_fee_refundline_id as idx, ") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_patpaid) as amount ") \
		_T(" FROM hms_fee_refundline ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_fee_refundline_id, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_deptid") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), 
		m_nDocumentNo, m_nInvoiceNo);

_fmsg(_T("%s"), szSQL);
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
void CHMSFeeRefundDetailDialog::OnRefundSelect(){
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
void CHMSFeeRefundDetailDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFeeRefundDetailDialog::OnAddHMSFeeRefundDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeRefundDetailDialog::OnEditHMSFeeRefundDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeRefundDetailDialog::OnDeleteHMSFeeRefundDetailDialog(){
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
 		OnCancelHMSFeeRefundDetailDialog();
 	}
	return 0;
}
int CHMSFeeRefundDetailDialog::OnSaveHMSFeeRefundDetailDialog(){
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
 		//OnHMSFeeRefundDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeRefundDetailDialog::OnCancelHMSFeeRefundDetailDialog(){
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
int CHMSFeeRefundDetailDialog::OnHMSFeeRefundDetailDialogListLoadData(){
	return 0;
}
