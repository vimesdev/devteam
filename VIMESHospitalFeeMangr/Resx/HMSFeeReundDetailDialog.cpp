#include "HMSFeeReundDetailDialog.h"
#include "MainFrm.h"
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReundDetailDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReundDetailDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReundDetailDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReundDetailDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeReundDetailDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeReundDetailDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeReundDetailDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSFeeReundDetailDialog *pVw = (CHMSFeeReundDetailDialog *)pWnd;
	pVw->OnRefundSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeReundDetailDialog *pVw = (CHMSFeeReundDetailDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeeReundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnAddHMSFeeReundDetailDialog();
} 
static int _OnEditHMSFeeReundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnEditHMSFeeReundDetailDialog();
} 
static int _OnDeleteHMSFeeReundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnDeleteHMSFeeReundDetailDialog();
} 
static int _OnSaveHMSFeeReundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnSaveHMSFeeReundDetailDialog();
} 
static int _OnCancelHMSFeeReundDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReundDetailDialog*)pWnd)->OnCancelHMSFeeReundDetailDialog();
} 
CHMSFeeReundDetailDialog::CHMSFeeReundDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSFeeReundDetailDialog::~CHMSFeeReundDetailDialog(){
}
void CHMSFeeReundDetailDialog::OnCreateComponents(){
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
void CHMSFeeReundDetailDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceNo.SetLimitText(22);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(22);
	m_wndReceiptNo.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 85);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);
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
	m_hms_fee_refundTbl.AddField(_T("HFE_CLASS"), dfText, 1); 
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
void CHMSFeeReundDetailDialog::OnSetWindowEvents(){
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
	SetMode(VM_NONE);

}
void CHMSFeeReundDetailDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);

}
void CHMSFeeReundDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
	rs.GetValue(_T("HFE_SERIALNO"), m_szSerialNo);
	rs.GetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
	rs.GetValue(_T("HFE_DATE"), m_szDate);

}
void CHMSFeeReundDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_refundTbl.SetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_SERIALNO"), m_szSerialNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_RECEIPTNO"), m_nReceiptNo);
	m_hms_fee_refundTbl.SetValue(_T("HFE_DATE"), m_szDate);

}
void CHMSFeeReundDetailDialog::SetDefaultValues(){

	m_nInvoiceNo=0;
	m_szDate.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;

}
int CHMSFeeReundDetailDialog::SetMode(int nMode){
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
/*void CHMSFeeReundDetailDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSFeeReundDetailDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSFeeReundDetailDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSFeeReundDetailDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSFeeReundDetailDialog::OnDateChange(){
	
} */
/*void CHMSFeeReundDetailDialog::OnDateSetfocus(){
	
} */
/*void CHMSFeeReundDetailDialog::OnDateKillfocus(){
	
} */
int CHMSFeeReundDetailDialog::OnDateCheckValue(){
	return 0;
} 
/*void CHMSFeeReundDetailDialog::OnSerialNoChange(){
	
} */
/*void CHMSFeeReundDetailDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSFeeReundDetailDialog::OnSerialNoKillfocus(){
	
} */
int CHMSFeeReundDetailDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSFeeReundDetailDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeReundDetailDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeReundDetailDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeReundDetailDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSFeeReundDetailDialog::OnListDblClick(){
	
} 
void CHMSFeeReundDetailDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeReundDetailDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeReundDetailDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSFeeReundDetailDialog::OnRefundSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeReundDetailDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeReundDetailDialog::OnAddHMSFeeReundDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeReundDetailDialog::OnEditHMSFeeReundDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeReundDetailDialog::OnDeleteHMSFeeReundDetailDialog(){
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
 		OnCancelHMSFeeReundDetailDialog();
 	}
	return 0;
}
int CHMSFeeReundDetailDialog::OnSaveHMSFeeReundDetailDialog(){
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
 		//OnHMSFeeReundDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeReundDetailDialog::OnCancelHMSFeeReundDetailDialog(){
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
int CHMSFeeReundDetailDialog::OnHMSFeeReundDetailDialogListLoadData(){
	return 0;
}
