#include "HMSEelectronicDialog.h"
#include "MainFrm.h"
#include "JSON.h"
static void _OnCreateSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnCreateSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnCloseSelect();
}
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnDeleteSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEelectronicDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEelectronicDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnListRefreshItem();
}
/*static void _OnCreateDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnCreateDateChange();
} */
/*static void _OnCreateDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnCreateDateSetfocus();} */ 
/*static void _OnCreateDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnCreateDateKillfocus();
} */
static int _OnCreateDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnCreateDateCheckValue();
} 
/*static void _OnPostDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostDateChange();
} */
/*static void _OnPostDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostDateSetfocus();} */ 
/*static void _OnPostDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostDateKillfocus();
} */
static int _OnPostDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnPostDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnInvoiceNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEelectronicDialog* )pWnd)->OnInvoiceNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceNoSelendokFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnInvoiceNoSelendok();
}
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnInvoiceNoKillfocus();
}*/
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnInvoiceNoKillfocus();
}*/
static long _OnInvoiceNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnInvoiceNoLoadData();
}
/*static void _OnInvoiceNoAddNewFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnInvoiceNoAddNew();
}*/
static void _OnPostdBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEelectronicDialog* )pWnd)->OnPostdBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPostdBySelendokFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostdBySelendok();
}
/*static void _OnPostdBySetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostdByKillfocus();
}*/
/*static void _OnPostdByKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostdByKillfocus();
}*/
static long _OnPostdByLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnPostdByLoadData();
}
/*static void _OnPostdByAddNewFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPostdByAddNew();
}*/
/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnTotalCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnInvoiceAllSelectFnc(CWnd *pWnd){
	  ((CHMSEelectronicDialog*)pWnd)->OnInvoiceAllSelect();
}
static void _OnInvoicePaymentSelectFnc(CWnd *pWnd){
	  ((CHMSEelectronicDialog*)pWnd)->OnInvoicePaymentSelect();
}
static void _OnInvoiceRefundSelectFnc(CWnd *pWnd){
	  ((CHMSEelectronicDialog*)pWnd)->OnInvoiceRefundSelect();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnSearchSelect();
}
static void _OnCheckInvoiceSelectFnc(CWnd *pWnd){
	CHMSEelectronicDialog *pVw = (CHMSEelectronicDialog *)pWnd;
	pVw->OnCheckInvoiceSelect();
}
static int _OnAddHMSEelectronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnAddHMSEelectronicDialog();
} 
static int _OnEditHMSEelectronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnEditHMSEelectronicDialog();
} 
static int _OnDeleteHMSEelectronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnDeleteHMSEelectronicDialog();
} 
static int _OnSaveHMSEelectronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnSaveHMSEelectronicDialog();
} 
static int _OnCancelHMSEelectronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicDialog*)pWnd)->OnCancelHMSEelectronicDialog();
} 

static void _OnUnPostSelectFnc(CWnd *pWnd){
	 ((CHMSEelectronicDialog*)pWnd)->OnUnPostSelect();
}
static void _OnPostOneRecordSelectFnc(CWnd *pWnd)
{
	 ((CHMSEelectronicDialog*)pWnd)->OnPostOneRecordSelect();
}

CHMSEelectronicDialog::CHMSEelectronicDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSEelectronicDialog::~CHMSEelectronicDialog()
{
}
void CHMSEelectronicDialog::OnCreateComponents(){
	/*m_wndGroupFilterData.Create(this, _T("Group Filter Data"), 530, 5, 1000, 90);
	m_wndGroupListInvoice.Create(this, _T("Group List Invoice"), 5, 95, 1000, 585);
	m_wndInformationSheet.Create(this, _T("Information Sheet"), 5, 5, 525, 90);	
	m_wndList.Create(this,10, 120, 995, 580); 
	m_wndCreateDateLabel.Create(this, _T("Create Date"), 10, 30, 100, 55);
	m_wndCreateDate.Create(this,105, 30, 225, 55); 
	m_wndPostDateLabel.Create(this, _T("Post Date"), 10, 60, 100, 85);
	m_wndPostDate.Create(this,105, 60, 225, 85); 
	m_wndDocumnetNoLabel.Create(this, _T("Document No"), 535, 30, 625, 55);
	m_wndDocumentNo.Create(this,630, 30, 730, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("InvoiceNo"), 230, 60, 320, 85);
	m_wndInvoiceNo.Create(this,325, 60, 520, 85); 
	m_wndPostdByLabel.Create(this, _T("Postd by"), 230, 30, 320, 55);
	m_wndPostdBy.Create(this,325, 30, 520, 55); 
	m_wndTotalLabel.Create(this, _T("Total"), 10, 590, 90, 615);
	m_wndTotal.Create(this,95, 590, 215, 615); 
	m_wndAmountLabel.Create(this, _T("Amount"), 220, 590, 310, 615);
	m_wndAmount.Create(this,315, 590, 435, 615); 
	m_wndInvoiceAll.Create(this, _T("Invoice All"), 535, 60, 685, 85);
	m_wndInvoicePayment.Create(this, _T("Invoice Payment"), 695, 60, 845, 85);
	m_wndInvoiceRefund.Create(this, _T("Invoice Refund"), 845, 60, 995, 85);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 735, 30, 845, 55);
	m_wndPatientName.Create(this,845, 30, 995, 55); 
	
	m_wndSearch.Create(this, _T("&Find"), 580, 590, 660, 615);
	m_wndCreate.Create(this, _T("&Create"), 665, 590, 745, 615);
	m_wndPost.Create(this, _T("&Post"), 750, 590, 830, 615);
	m_wndDelete.Create(this, _T("&Delete"), 835, 590, 915, 615);
	m_wndClose.Create(this, _T("&Close"), 920, 590, 1000, 615);
	m_wndCheckInvoice.Create(this, _T("&\x110\x1ED1i so\xE1t H\x110"), 440, 590, 540, 615);*/

	m_wndGroupFilterData.Create(this, _T("Group Filter Data"), 530, 5, 1000, 90);
	m_wndGroupListInvoice.Create(this, _T("Group List Invoice"), 5, 95, 1000, 585);
	m_wndInformationSheet.Create(this, _T("Information Sheet"), 5, 5, 525, 90);
	m_wndList.Create(this,10, 120, 995, 580); 
	m_wndCreateDateLabel.Create(this, _T("Create Date"), 10, 30, 100, 55);
	m_wndCreateDate.Create(this,105, 30, 225, 55); 
	m_wndPostDateLabel.Create(this, _T("Post Date"), 10, 60, 100, 85);
	m_wndPostDate.Create(this,105, 60, 225, 85); 
	m_wndDocumnetNoLabel.Create(this, _T("Document No"), 535, 30, 625, 55);
	m_wndDocumentNo.Create(this,630, 30, 730, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("InvoiceNo"), 230, 60, 320, 85);
	m_wndInvoiceNo.Create(this,325, 60, 520, 85); 
	m_wndPostdByLabel.Create(this, _T("Postd by"), 230, 30, 320, 55);
	m_wndPostdBy.Create(this,325, 30, 520, 55); 
	m_wndTotalLabel.Create(this, _T("Total"), 10, 590, 90, 615);
	m_wndTotal.Create(this,95, 590, 215, 615); 
	m_wndAmountLabel.Create(this, _T("Amount"), 220, 590, 310, 615);
	m_wndAmount.Create(this,315, 590, 435, 615); 
	m_wndInvoiceAll.Create(this, _T("Invoice All"), 535, 60, 685, 85);
	m_wndInvoicePayment.Create(this, _T("Invoice Payment"), 695, 60, 845, 85);
	m_wndInvoiceRefund.Create(this, _T("Invoice Refund"), 845, 60, 995, 85);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 735, 30, 845, 55);
	m_wndPatientName.Create(this,845, 30, 995, 55); 

	m_wndSearch.Create(this, _T("&Find"), 580, 590, 660, 615);
	m_wndCreate.Create(this, _T("&Create"), 665, 590, 745, 615);
	m_wndPost.Create(this, _T("&Post"), 750, 590, 830, 615);
	m_wndDelete.Create(this, _T("&Delete"), 835, 590, 915, 615);
	m_wndClose.Create(this, _T("&Close"), 920, 590, 1000, 615);
	m_wndCheckInvoice.Create(this, _T("&\x110\x1ED1i so\xE1t H\x110"), 440, 590, 540, 615);

	m_wndUnPost.Create(this, _T("Chưa Post"), 795, 619, 1000, 644);
	m_wndPostOneRecord.Create(this, _T("Chế độ post từng hóa đơn một"), 10, 619, 540, 644);

}
void CHMSEelectronicDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCreateDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndCreateDate.SetCheckValue(true);
	m_wndPostDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPostDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceNo.LimitText(35);
	m_wndPostdBy.SetCheckValue(true);
	m_wndPostdBy.LimitText(35);
	m_wndTotal.SetLimitText(16);
	m_wndTotal.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);

	m_wndCheckInvoice.ModifyStyle(0, WS_TABSTOP);

	m_wndPostdBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPostdBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("DocumentNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 160);	
	m_wndList.InsertColumn(2, _T("Address"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Key"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(5, _T("PKey"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Patpaid"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Patter"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Serial"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Desc"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(11, _T("Class"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(12, _T("DeptType"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(13, _T("Type"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(14, _T("TG Post"), CFMT_TEXT, 150);

	m_hms_electronicTbl.SetTableName(_T("HMS_FEE_ELECTRONICLINE"));	
	m_hms_electronicTbl.AddField(_T("HFE_ORDERID"), dfInteger);
	m_hms_electronicTbl.AddField(_T("HFE_KEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_PKEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_STATUS"), dfText, 1);
	m_hms_electronicTbl.AddField(_T("HFE_SEND_ITT"), dfText, 1);
	m_hms_electronicTbl.AddField(_T("HFE_GET_PKEY_TIME"), dfDateTime);
	
}
void CHMSEelectronicDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Refresh"), _OnListRefreshItemFnc);

	//m_wndCreateDate.SetEvent(WE_CHANGE, _OnCreateDateChangeFnc);
	//m_wndCreateDate.SetEvent(WE_SETFOCUS, _OnCreateDateSetfocusFnc);
	//m_wndCreateDate.SetEvent(WE_KILLFOCUS, _OnCreateDateKillfocusFnc);
	m_wndCreateDate.SetEvent(WE_CHECKVALUE, _OnCreateDateCheckValueFnc);
	//m_wndPostDate.SetEvent(WE_CHANGE, _OnPostDateChangeFnc);
	//m_wndPostDate.SetEvent(WE_SETFOCUS, _OnPostDateSetfocusFnc);
	//m_wndPostDate.SetEvent(WE_KILLFOCUS, _OnPostDateKillfocusFnc);
	m_wndPostDate.SetEvent(WE_CHECKVALUE, _OnPostDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndInvoiceNo.SetEvent(WE_SELENDOK, _OnInvoiceNoSelendokFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_SELCHANGE, _OnInvoiceNoSelectChangeFnc);
	m_wndInvoiceNo.SetEvent(WE_LOADDATA, _OnInvoiceNoLoadDataFnc);
	//m_wndInvoiceNo.SetEvent(WE_ADDNEW, _OnInvoiceNoAddNewFnc);
	m_wndPostdBy.SetEvent(WE_SELENDOK, _OnPostdBySelendokFnc);
	//m_wndPostdBy.SetEvent(WE_SETFOCUS, _OnPostdBySetfocusFnc);
	//m_wndPostdBy.SetEvent(WE_KILLFOCUS, _OnPostdByKillfocusFnc);
	m_wndPostdBy.SetEvent(WE_SELCHANGE, _OnPostdBySelectChangeFnc);
	m_wndPostdBy.SetEvent(WE_LOADDATA, _OnPostdByLoadDataFnc);
	//m_wndPostdBy.SetEvent(WE_ADDNEW, _OnPostdByAddNewFnc);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndTotal.SetEvent(WE_CHECKVALUE, _OnTotalCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndInvoiceAll.SetEvent(WE_CLICK, _OnInvoiceAllSelectFnc);
	m_wndInvoicePayment.SetEvent(WE_CLICK, _OnInvoicePaymentSelectFnc);
	m_wndInvoiceRefund.SetEvent(WE_CLICK, _OnInvoiceRefundSelectFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);

	m_wndCreate.SetEvent(WE_CLICK, _OnCreateSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);

	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndCheckInvoice.SetEvent(WE_CLICK, _OnCheckInvoiceSelectFnc);
	m_wndUnPost.SetEvent(WE_CLICK, _OnUnPostSelectFnc);
	m_wndPostOneRecord.SetEvent(WE_CLICK, _OnPostOneRecordSelectFnc);
	SetMode(VM_NONE);

}
void CHMSEelectronicDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCreateDate.GetDlgCtrlID(), m_szCreateDate);
	DDX_TextEx(pDX, m_wndPostDate.GetDlgCtrlID(), m_szPostDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndPostdBy.GetDlgCtrlID(), m_szPostdByKey);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Radio(pDX, m_wndInvoiceAll.GetDlgCtrlID(), m_nInvoiceAll);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX, m_wndUnPost.GetDlgCtrlID(), m_bUnPost);
	DDX_Check(pDX, m_wndPostOneRecord.GetDlgCtrlID(), m_bPostOneRecord);

}
void CHMSEelectronicDialog::UpdateJson(BOOL bSave)
{
	if(bSave)
	{
			
	m_jData[_T("CreateDate")] =  m_szCreateDate;
	m_jData[_T("PostDate")] =  m_szPostDate;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("InvoiceNo")] =  m_szInvoiceNoKey;
	m_jData[_T("PostdBy")] =  m_szPostdByKey;
	m_jData[_T("Total")] =  m_nTotal;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("InvoiceAll")] =  m_nInvoiceAll;
	m_jData[_T("InvoicePayment")] =  m_nInvoicePayment;
	m_jData[_T("InvoiceRefund")] =  m_nInvoiceRefund;
	m_jData[_T("PatientName")] =  m_szPatientName;
	}
	else
	{
			
	m_jData[_T("CreateDate")].GetValue(m_szCreateDate);
	m_jData[_T("PostDate")].GetValue(m_szPostDate);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("InvoiceNo")].GetValue(m_szInvoiceNoKey);
	m_jData[_T("PostdBy")].GetValue(m_szPostdByKey);
	m_jData[_T("Total")].GetValue(m_nTotal);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("InvoiceAll")].GetValue(m_nInvoiceAll);
	m_jData[_T("InvoicePayment")].GetValue(m_nInvoicePayment);
	m_jData[_T("InvoiceRefund")].GetValue(m_nInvoiceRefund);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	}

}
void CHMSEelectronicDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_FEE_ELECTRONIC WHERE hfe_orderid = %ld"), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("HFE_CREATEDDATE"), m_szCreateDate);
		rs.GetValue(_T("HFE_CREATEDBY"), m_szPostdByKey);
		rs.GetValue(_T("HFE_POSTEDDATE"), m_szPostDate);
		rs.GetValue(_T("HFE_DATE"), m_szCreateDate);
		rs.GetValue(_T("HFE_STATUS"), m_szStatus);
		if(m_szStatus == _T("O") || m_szStatus == _T("P"))
			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);
	}

}
void CHMSEelectronicDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEelectronicDialog::SetDefaultValues(){

	m_szCreateDate.Empty();
	m_szPostDate.Empty();
	m_nDocumentNo=0;
	m_szInvoiceNoKey.Empty();
	m_szPostdByKey.Empty();
	m_nTotal=0;
	m_nAmount=0;
	m_nInvoiceAll=0;
	m_nInvoicePayment=1;
	m_nInvoiceRefund=1;
	m_szPatientName.Empty();
	m_nInvoiceNo= 0;
	m_bUnPost=FALSE;
	m_bPostOneRecord=FALSE;

}
int CHMSEelectronicDialog::SetMode(int nMode){
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
 			EnableButtons(FALSE, 1, -1);
			if(m_szStatus == _T("P"))
			{
				m_wndPost.EnableWindow(false);
				m_wndDelete.EnableWindow(false);
			}
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 3, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDocumentNo.EnableWindow(true);
		m_wndPatientName.EnableWindow(true);
		m_wndCheckInvoice.EnableWindow(true);
		m_wndDelete.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
#include "HMSEelectronicOrderDialog.h"
void CHMSEelectronicDialog::OnCreateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	ShowMessageBox(_T("Không thể tạo dữ liệu. Chương trình tự động tạo dữ liệu lúc 20 giờ hàng ngày\r\n Tác vụ này tạm thời không hoạt động!"));
	return;
	CHMSEelectronicOrderDialog dlg(this);
	if(dlg.DoModal()==IDOK){
		m_nInvoiceNo = dlg.m_nInvoiceNo;
		GetDataToScreen();
		OnListLoadData();
	}
}

void CHMSEelectronicDialog::OnUnPostSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}

void CHMSEelectronicDialog::OnPostOneRecordSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

int CHMSEelectronicDialog::OnPostPayment(int nLimit)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='A'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey =0") \
	_T(" %s") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nInvoiceNo, szWhere);
	
	
	szDataJson.Format(_T("["));

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
		
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;
				
		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	szPatter = _T("02GTTT0/001");
	szSerial = _T("KB/17E");
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);

	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		//printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{		
			char szBuff[1025];
			int nread = 0;
			memset(szBuff, '\0', 1024);
			while ((nread = pFile->Read(szBuff, 1024)) > 0)
			{
				szBuff[nread] = '\0';
				szResponse.AppendFormat("%s", szBuff);
			}
			
			JSONVALUE j;
			CString szKey, szFKey;	
			CString szResponse1;
			szResponse1 = (LPCSTR)szResponse;
			if(!szResponse1.IsEmpty())
			{	
				j.Parse(szResponse1);				
				JSONVALUE  j2, j3, j4;		
				std::wstring strData;
				CString tmpStr, tmpStr1;		

				for(int i = 0; i< j.Size(); i++){
					
					j2 = j.At(i);
					
					j3 = j2["Key"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szKey = tmpStr;

					j3 = j2["Fkey"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szFKey = tmpStr;
					
					if(str2double(szFKey) > 0)
					{
						//m_hms_electronicTbl.SetValue(_T("hfe_key"), szKey); 
						m_hms_electronicTbl.SetValue(_T("hfe_pkey"), szFKey);
						m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
						m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
						
						szWhere.Format(_T("WHERE hfe_orderid = %ld AND hfe_key=%s"), m_nInvoiceNo, szKey);
						szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
						szSQL += szWhere;
						//_msg(_T("%s"), szSQL);
						pMF->ExecSQL(szSQL);

						nRow ++;
					}
					
					//_tprintf(_T("\r\n%d, Key:%s, Fkey:%s"), i, szKey, szFKey);			
					m_szTitle.Format(_T("Key = %s, FKey = %s"), szKey, szFKey);
				}		
			}
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	

	return nRow;
}
int CHMSEelectronicDialog::OnPostDrug(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='D'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey =0") \
	_T(" %s ") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nInvoiceNo, szWhere);
	
	rs.ExecSQL(szSQL);

	szDataJson.Format(_T("["));
	
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern1, pMF->m_szInvSerial1);
	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{			
			char szBuff[1025];
			int nread = 0;
			memset(szBuff, '\0', 1024);
			while ((nread = pFile->Read(szBuff, 1024)) > 0)
			{
				szBuff[nread] = '\0';
				szResponse.AppendFormat("%s", szBuff);
			}
		
			JSONVALUE j;
			CString szKey, szFKey;	
			CString szResponse1;

			szResponse1 = (LPCSTR)szResponse;
			if(!szResponse1.IsEmpty())
			{	
				_tprintf(_T("\r\n%s"), szResponse1);	
				j.Parse(szResponse1);				
				JSONVALUE  j2, j3, j4;		
				std::wstring strData;
				CString tmpStr, tmpStr1;		

				for(int i = 0; i< j.Size(); i++){
					
					j2 = j.At(i);
					
					j3 = j2["Key"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szKey = tmpStr;

					j3 = j2["Fkey"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szFKey = tmpStr;
					
					if(str2double(szFKey) > 0)
					{
						//m_hms_electronicTbl.SetValue(_T("hfe_key"), szKey); 
						m_hms_electronicTbl.SetValue(_T("hfe_pkey"), szFKey);
						m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
						m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
						szWhere.Format(_T("WHERE hfe_orderid = %ld AND hfe_key=%s"), m_nInvoiceNo, szKey);
						szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
						szSQL += szWhere;
						//_msg(_T("%s"), szSQL);
						pMF->ExecSQL(szSQL);
						
						nRow ++;
					}
					
					_tprintf(_T("\r\n%d, Key:%s, Fkey:%s"), i, szKey, szFKey);
					m_szTitle.Format(_T("Key:%s, Fkey:%s"), szKey, szFKey);
				}
			}
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}

	return nRow;
}
int CHMSEelectronicDialog::OnPostRefund(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS newkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_pkey AS idpkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype, HFE_KEY_REF AS keyref") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='R'") \
	_T(" AND hfe_status = 'O' %s ") \
	//_T(" AND hfe_pkey =0") \//
	_T(" ORDER BY hfe_type,") \
	_T(" hfe_depttype,") \
	_T(" hfe_docno"), m_nInvoiceNo, szWhere);
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("keyref"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;
		
		rs.GetValue(_T("newkey"), tmpStr);
		jbuilder[_T("NewKey")]= tmpStr;

		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	
	//szURL.Format(_T("%s/proceed?username=%s&password=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword);
	//szURL.Format(_T("%s"), _T(" http://10.0.0.199:9005/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);
	szURL.Format(_T("%s?username=%s&password=%s"), _T("http://10.0.0.199/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword);
	
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
        //_msg(_T("%s, %s"), szDataJson, szURL);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	double nKey = 0, nFKey = 0;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2double(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2double(tmpStr);
			
			if(nFKey > 0)
			{
				m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
				szWhere.Format(_T(" WHERE hfe_orderid = %ld AND hfe_key=%.0f"), m_nInvoiceNo, nKey);
				szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
				szSQL += szWhere;
				//_msg(_T("%s"), szSQL);
				pMF->ExecSQL(szSQL);
			//	OnPostRefund_ITT(nKey);

				nRow ++;
			}
			else
			{
				ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
		}
	}

	return nRow;

}
int CHMSEelectronicDialog::OnPostPayment_ITT(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
	long nArrayKey[301];
	long nKey=0;
	for(int i =0; i < 301 ; i++)
	{
		nArrayKey[i]=0;
	}
	CString szArrayKey;
		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='A'") \
	_T(" AND hfe_status = 'P'") \
	_T(" AND hfe_pkey > 0") \
	_T(" AND nvl(HFE_SEND_ITT,'N') <>'Y' ") \
	_T(" %s") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nInvoiceNo, szWhere);
	
	
	szDataJson.Format(_T("["));

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	int n=0;
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("idkey"), tmpStr);
		nKey = str2long(tmpStr);
		
		nArrayKey[n] =nKey;
		n++;
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
		
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;
				
		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	szPatter = _T("02GTTT0/001");
	szSerial = _T("KB/17E");
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("http://10.0.0.199/api/bv108/republish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);

	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		//printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{		
			szArrayKey.Empty();
			for(int i=0; i < 301; i++)
			{
				if(nArrayKey[i] >0)
				{
					if(!szArrayKey.IsEmpty())
						szArrayKey.AppendFormat(_T(","));

					szArrayKey.AppendFormat(_T("%ld"),nArrayKey[i]);
				}
			}
						
			szSQL.Format(_T("Update hms_fee_electronicline set HFE_SEND_ITT='Y'  WHERE hfe_orderid = %ld AND hfe_key in (%s)"), m_nInvoiceNo, szArrayKey);
			
			n= pMF->ExecSQL(szSQL);

				
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		//ShowMessageBox(szMsg);
	}	

	return nRow;
}
int CHMSEelectronicDialog::OnPostDrug_ITT(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;

	long nArrayKey[301];
	long nKey=0;
	for(int i =0; i < 301 ; i++)
	{
		nArrayKey[i]=0;
	}
	CString szArrayKey;

		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='D'") \
	_T(" AND hfe_status = 'P'") \
	_T(" AND hfe_pkey > 0") \
	_T(" AND nvl(HFE_SEND_ITT,'N') <>'Y' ") \
	_T(" %s ") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nInvoiceNo, szWhere);
	
	rs.ExecSQL(szSQL);

	szDataJson.Format(_T("["));
	
	if(rs.IsEOF())
		return -1;
	int n=0;
	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		nKey = str2long(tmpStr);
		
		nArrayKey[n] =nKey;
		n++;
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("http://10.0.0.199/api/bv108/republish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern1, pMF->m_szInvSerial1);
	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{	
			szArrayKey.Empty();
			for(int i=0; i < 301; i++)
			{
				if(nArrayKey[i] >0)
				{
					if(!szArrayKey.IsEmpty())
						szArrayKey.AppendFormat(_T(","));

					szArrayKey.AppendFormat(_T("%ld"),nArrayKey[i]);
				}
			}
						
			szSQL.Format(_T("Update hms_fee_electronicline set HFE_SEND_ITT='Y'  WHERE hfe_orderid = %ld AND hfe_key in (%s)"), m_nInvoiceNo, szArrayKey);
			n= pMF->ExecSQL(szSQL);


			
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		//ShowMessageBox(szMsg);
	}

	return nRow;
}
int CHMSEelectronicDialog::OnPostRefund_ITT(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;

	long nArrayKey[301];
	long nKey=0;
	for(int i =0; i < 301 ; i++)
	{
		nArrayKey[i]=0;
	}
	CString szArrayKey;
		
	tmpStr = _T("0");
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_pkey AS idpkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='R'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey > 0") \
	_T(" AND nvl(HFE_SEND_ITT,'N') <>'Y' ") \
	_T(" %s ") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nInvoiceNo, szWhere);
	
	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	if(rs.IsEOF())
		return -1;
	
	int n=0;
	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		nKey = str2long(tmpStr);
		nArrayKey[n] =nKey;
		n++;


		rs.GetValue(_T("idpkey"), tmpStr);
		
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	
	CString szURL;
	
	szURL.Format(_T("http://10.0.0.199/api/bv108/proceed?username=%s&password=%s"), m_szInvUserID, m_szInvPassword);
	
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
//_msg(_T("%s, %s"), szDataJson, szURL);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			szArrayKey.Empty();
			for(int i=0; i < 301; i++)
			{
				if(nArrayKey[i] >0)
				{
					if(!szArrayKey.IsEmpty())
						szArrayKey.AppendFormat(_T(","));

					szArrayKey.AppendFormat(_T("%ld"),nArrayKey[i]);
				}
			}
						
			szSQL.Format(_T("Update hms_fee_electronicline set HFE_SEND_ITT='Y'  WHERE hfe_orderid = %ld AND hfe_key in (%s)"), m_nInvoiceNo, szArrayKey);
			n= pMF->ExecSQL(szSQL);
			
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		//_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}
	return nRow;

}
#include "HMSEletronicConfirmDialog.h"

void CHMSEelectronicDialog::OnPostSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nCount =0, nPayment = 0, nDrug = 0, nRefund =0, nLimit =0,nPost=0;
	CString szSQL, szMsg, tmpStr;
	CRecord rs(&pMF->m_db);
	UpdateData();

	szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONIC WHERE HFE_ORDERID <> %ld AND HFE_STATUS = 'O' "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		szSQL.Format(_T("SELECT hfe_orderid, hfe_date FROM HMS_FEE_ELECTRONIC WHERE HFE_ORDERID <> %ld AND HFE_STATUS = 'O' "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{	
			if(!tmpStr.IsEmpty())
				tmpStr.AppendFormat(_T(", "));

			tmpStr.AppendFormat(_T("[S\x1ED1 phi\x1EBFu:%s ng\xE0y: %s]"),rs.GetValue(_T("hfe_orderid")),  rs.GetValue(_T("hfe_date")).Left(10));			
			rs.MoveNext();
		}

		tmpStr.AppendFormat(_T("\r\n"));
		szMsg.Format(_T("\x110\x61ng t\x1ED3n t\x1EA1i \x63\xE1\x63 phi\x1EBFu \x111\xE3 t\x1EA1o \x64\x1EEF li\x1EC7u nh\x1B0ng \x63h\x1B0\x61 POST l\xEAn h\x1EC7 th\x1ED1ng H\x110 \r\n %s \r\n \x42\x1EA1n ph\x1EA3i POST h\x1EBFt \x63\xE1\x63 phi\x1EBFu tr\xEAn"), tmpStr);

		ShowMessageBox( szMsg, MB_ICONERROR|MB_OK);
		//return;
	}

	CHMSEletronicConfirmDialog dlg;
	dlg.m_szDoctor = pMF->GetCurrentUser();

	if(dlg.DoModal() != IDOK)
		return;

	m_szInvUserID = dlg.m_szDoctor;
	m_szInvPassword = dlg.m_szConfirmPassword;

	if(!pMF->UpdateUserInvoice(dlg.m_szDoctor, dlg.m_wndDoctor.GetCurrent(1), dlg.m_szConfirmPassword))
	{
		ShowMessageBox(_T("Kh\xF4ng \x111\x1ED3ng \x62\x1ED9 \x111\x1B0\x1EE3\x63 th\xF4ng tin ng\x1B0\x1EDDi s\x1EED \x64\x1EE5ng"), MB_ICONERROR|MB_OK);
		return;
	}	
			
	szSQL.Format(_T(" SELECT SUM(Payment) AS Payment,") \
	_T("   SUM(Drug)         AS Drug,") \
	_T("   SUM(Refund)       AS Refund") \
	_T(" FROM") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'A'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Payment,") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'D'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Drug,") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'R'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Refund") \
	_T("   FROM HMS_FEE_ELECTRONICLINE") \
	_T("   WHERE hfe_orderid = %ld") \
	_T("   AND hfe_status    = 'O'") \
	//_T("   AND hfe_pkey      =0") \//
	_T("   AND (hfe_pkey      =0 OR (hfe_pkey > 0 AND hfe_depttype = 'R')) ") \
	_T("   GROUP BY hfe_depttype") \
	_T(" ) "), m_nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("Payment"), nPayment);
		rs.GetValue(_T("Drug"), nDrug);
		rs.GetValue(_T("Refund"), nRefund);
	}

	pMF->BeginWaitCursor();

	_tprintf(_T("\r\nPayment:%d, Drug:%d, Refund:%d"), nPayment, nDrug, nRefund);
			
	// Gioi han so luong ban ghi moi lan post
	// Nếu post tự động mà lỗi 1 số bản ghi theo lô --> chuyển sang chế độ chỉ post 1 hóa đơn 1
	if (m_bPostOneRecord)
		{
		nLimit = 1;
		}
	else
		{
		nLimit = 300;
		}	

	if(nPayment > nLimit)
		nPost = ceil((double)nPayment/nLimit);
	else
		nPost = 1;

	//Post Hoa don thu phi benh nhan
	for(int n = 0; n < nPost; n++)
	{
		_tprintf(_T("\r\nOnPostPayment:%d"), n);
		//szMsg.Format(_T("POST \x43hi ph\xED kh\xE1m \x62\x1EC7nh l\x1EA7n: %d"), n);
		//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
		nCount = OnPostPayment(nLimit);
	}

	//Post hoa don thu phi tien thuoc ngoai tru

	if(nDrug > nLimit)
		nPost = ceil((double)nDrug/nLimit);
	else
		nPost = 1;


	for(int n = 0; n < nPost; n++)
	{
		_tprintf(_T("\r\nOnPostDrug:%d"), n);
		//szMsg.Format(_T("POST \x43hi ph\xED thu\x1ED1\x63 l\x1EA7n: %d"), n);
		//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
		nCount += OnPostDrug(nLimit);
	}
	
	//Post phieu dieu chinh
	if(nRefund > nLimit)
		nPost = ceil((double)nRefund/nLimit);
	else
		nPost = 1;
	for(int n = 0; n < nPost; n++)
	{
		_tprintf(_T("\r\nOnPostRefund:%d"), n);
		nCount += OnPostRefund(nLimit);
	}
		
	pMF->EndWaitCursor();

	if(nCount > 0)
	{
		szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONICLINE  WHERE hfe_orderid = %ld AND hfe_status = 'O' AND hfe_pkey =0 "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <=0 )
		{
			szSQL.Format(_T("UPDATE hms_fee_electronic SET hfe_status = 'P', HFE_POSTEDBY='%s' WHERE hfe_orderid =%ld AND hfe_status ='O'"), pMF->GetCurrentUser(), m_nInvoiceNo);
			pMF->ExecSQL(szSQL);
		}	
		GetDataToScreen();
		OnListLoadData();
	}
	else
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return;
	}

	//// post sang ben server moi cua ITT 16/06/2020 longpt
	////Post Hoa don thu phi benh nhan
	//for(int n = 0; n < nPost; n++)
	//{
	//	_tprintf(_T("\r\nOnPostPayment:%d"), n);
	//	//szMsg.Format(_T("POST \x43hi ph\xED kh\xE1m \x62\x1EC7nh l\x1EA7n: %d"), n);
	//	//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
	//	nCount = OnPostPayment_ITT(nLimit);
	//}
	////Post hoa don thu phi tien thuoc ngoai tru

	//if(nDrug > nLimit)
	//	nPost = ceil((double)nDrug/nLimit);
	//else
	//	nPost = 1;

	//for(int n = 0; n < nPost; n++)
	//{
	//	_tprintf(_T("\r\nOnPostDrug:%d"), n);
	//	//szMsg.Format(_T("POST \x43hi ph\xED thu\x1ED1\x63 l\x1EA7n: %d"), n);
	//	//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
	//	nCount += OnPostDrug_ITT(nLimit);
	//}
	//
	////Post phieu dieu chinh
	//if(nRefund > nLimit)
	//	nPost = ceil((double)nRefund/nLimit);
	//else
	//	nPost = 1;
	//for(int n = 0; n < nPost; n++)
	//{
	//	_tprintf(_T("\r\nOnPostRefund:%d"), n);
	//	nCount += OnPostRefund_ITT(nLimit);
	//}


	

} 
void CHMSEelectronicDialog::OnCloseSelect(){
	OnCancel();
}
void CHMSEelectronicDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szMsg;
	
	szMsg.Format(_T("T\xE1\x63 v\x1EE5 s\x1EBD \x78o\xE1 m\x1ECDi \x64\x1EEF li\x1EC7u ho\xE1 \x111\x1A1n \x111\xE3 t\x1EA1o tr\xEAn s\x1ED1 phi\x1EBFu [%d]. \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 th\x1EF1\x63 hi\x1EC7n kh\xF4ng?"), m_nInvoiceNo);
	if(ShowMessageBox(szMsg, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return;

	szSQL.Format(_T("HMS_ELECTRONIC_DELETE(%ld, '%s')"), m_nInvoiceNo, pMF->GetCurrentUser());
	int ret = ToInt(pMF->ExecDML(szSQL));
 	if(ret <= 0){
		if(ret == -10)
		{
			ShowMessageBox(_T("\x42\x1EA1n kh\xF4ng ph\x1EA3i ng\x1B0\x1EDDi t\x1EA1o phi\x1EBFu. Kh\xF4ng th\x1EC3 \x78o\xE1 \x111\x1B0\x1EE3\x63 phi\x1EBFu"), MB_OK|MB_ICONQUESTION);
			return;
		}

		if(ret == -1)
		{
			ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x111\x1B0\x1EE3\x63 POST l\xEAn h\x1EC7 th\x1ED1ng. Kh\xF4ng th\x1EC3 \x78o\xE1 phi\x1EBFu"), MB_OK|MB_ICONQUESTION);
			return;
		}
 	}
} 
void CHMSEelectronicDialog::OnListDblClick(){
	
} 
void CHMSEelectronicDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEelectronicDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
int CHMSEelectronicDialog::OnListRefreshItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	 return 0;
} 
long CHMSEelectronicDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;

	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	
	UpdateData(true);
	m_nTotal = 0;
	m_nAmount = 0;
	
	if(m_nInvoiceAll == 0)
	{
		szWhere.Format(_T(""));
	}

	if(m_nInvoiceAll == 1){
		szWhere.Format(_T(" AND hfe_type = 'P'"));
	}

	if(m_nInvoiceAll == 2){
		szWhere.Format(_T(" AND hfe_type = 'R'"));
	}

	if(m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" AND hfe_docno = %ld"), m_nDocumentNo);
	}
	
	if (m_bUnPost)
	{
		szWhere.AppendFormat(_T(" AND f2.HFE_STATUS = 'O'"));
	}

	szSQL.Format(_T(" SELECT hfe_docno as docno,") \
	_T("   f2.HFE_KEY as Key,") \
	_T("   f2.HFE_PATIENTNO as patientno,") \
	_T("   f2.HFE_CUSNAME as pname,") \
	_T("   f2.HFE_CUSADDRESS as address,") \
	_T("   f2.HFE_PKEY as pkey,") \
	_T("   f2.HFE_AMOUNT as Amount,") \
	_T("   f2.HFE_PATPAID as patpaid,") \
	_T("   f2.HFE_TYPE as type,") \
	_T("   f2.HFE_DESC,") \
	_T("   f2.HFE_CLASS,") \
	_T("   f2.hfe_depttype as depttype,") \
	_T("   f2.hfe_lockeddate as posdate, ") \
	_T("   f2.HFE_PATTER,") \
	_T("   f2.HFE_SERIAL,") \
	_T("   to_char(f2.HFE_GET_PKEY_TIME, 'DD/MM/YYYY HH24:MI') as posttime") \
	_T(" FROM HMS_FEE_ELECTRONIC f1") \
	_T(" LEFT JOIN HMS_FEE_ELECTRONICLINE f2") \
	_T(" ON(f2.hfe_orderid    =f1.hfe_orderid)") \
	_T(" WHERE f1.hfe_orderid = %ld %s") \
	_T(" ORDER BY f2.hfe_type, hfe_depttype, docno  "), m_nInvoiceNo, szWhere);
//_msg(_T("%s"), szSQL);
	m_wndList.BeginLoad(); 
	int nCount = 0;	

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_nTotal ++;
		m_nAmount = m_nAmount + str2long(rs.GetValue(_T("amount")));
		
		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			if (szShortName != m_szPatientName)
			{
				if (!szFirstName.IsEmpty() && szFirstName != szFirstName2){
					rs.MoveNext();
					continue;
				}
			}

				
			if(!szSurName.IsEmpty() && szSurName != szSurName2){
				rs.MoveNext();
				continue;
			}

			if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
				rs.MoveNext();
				continue;
			}			
		}

		m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("address")), 
			CDate::Convert(rs.GetValue(_T("posdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("key")), 
			rs.GetValue(_T("pkey")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("patpaid")),
			rs.GetValue(_T("HFE_PATTER")),
			rs.GetValue(_T("HFE_SERIAL")),
			rs.GetValue(_T("HFE_DESC")),
			rs.GetValue(_T("HFE_CLASS")),
			rs.GetValue(_T("depttype")),
			rs.GetValue(_T("type")), 
			rs.GetValue(_T("posttime")),NULL);		
		rs.MoveNext();
	}
	
	m_wndList.EndLoad(); 

	UpdateData(false);
	return nCount;

}
/*void CHMSEelectronicDialog::OnCreateDateChange(){
	
} */
/*void CHMSEelectronicDialog::OnCreateDateSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnCreateDateKillfocus(){
	
} */
int CHMSEelectronicDialog::OnCreateDateCheckValue(){
	return 0;
} 
/*void CHMSEelectronicDialog::OnPostDateChange(){
	
} */
/*void CHMSEelectronicDialog::OnPostDateSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnPostDateKillfocus(){
	
} */
int CHMSEelectronicDialog::OnPostDateCheckValue(){
	return 0;
} 
/*void CHMSEelectronicDialog::OnDocumentNoChange(){
	
} */
/*void CHMSEelectronicDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSEelectronicDialog::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CHMSEelectronicDialog::OnInvoiceNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEelectronicDialog::OnInvoiceNoSelendok(){
	 
}
/*void CHMSEelectronicDialog::OnInvoiceNoSetfocus(){
	
}*/
/*void CHMSEelectronicDialog::OnInvoiceNoKillfocus(){
	
}*/
long CHMSEelectronicDialog::OnInvoiceNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceNo.IsSearchKey() && !m_szInvoiceNoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceNoKey
};
	m_wndInvoiceNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceNo.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSEelectronicDialog::OnInvoiceNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEelectronicDialog::OnPostdBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEelectronicDialog::OnPostdBySelendok(){
	 
}
/*void CHMSEelectronicDialog::OnPostdBySetfocus(){
	
}*/
/*void CHMSEelectronicDialog::OnPostdByKillfocus(){
	
}*/
long CHMSEelectronicDialog::OnPostdByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPostdBy.IsSearchKey() && !m_szPostdByKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szPostdByKey);
	}
	m_wndPostdBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 %s ORDER BY id "), szWhere);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPostdBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEelectronicDialog::OnPostdByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEelectronicDialog::OnTotalChange(){
	
} */
/*void CHMSEelectronicDialog::OnTotalSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnTotalKillfocus(){
	
} */
int CHMSEelectronicDialog::OnTotalCheckValue(){
	return 0;
} 
/*void CHMSEelectronicDialog::OnAmountChange(){
	
} */
/*void CHMSEelectronicDialog::OnAmountSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnAmountKillfocus(){
	
} */
int CHMSEelectronicDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSEelectronicDialog::OnInvoiceAllSelect(){
	OnListLoadData();
}
void CHMSEelectronicDialog::OnInvoicePaymentSelect(){
	OnListLoadData();
}
void CHMSEelectronicDialog::OnInvoiceRefundSelect(){
	OnListLoadData();
}
/*void CHMSEelectronicDialog::OnPatientNameChange(){
	
} */
/*void CHMSEelectronicDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSEelectronicDialog::OnPatientNameKillfocus(){
	
} */
int CHMSEelectronicDialog::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
#include "HMSEelectronicListDialog.h"
void CHMSEelectronicDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSEelectronicListDialog dlg(this);	
	if(dlg.DoModal() == IDOK)
	{
		m_nInvoiceNo = dlg.m_nInvoiceNo;		
		GetDataToScreen();
		OnListLoadData();
	}
} 


#include "HMSPOSTEelectronicControlDialog.h"
void CHMSEelectronicDialog::OnCheckInvoiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSPOSTEelectronicControlDialog dlg(this);	
	if(dlg.DoModal() == IDOK)
	{		
	
	}
} 


int CHMSEelectronicDialog::OnAddHMSEelectronicDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);

	return 0;
}
int CHMSEelectronicDialog::OnEditHMSEelectronicDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEelectronicDialog::OnDeleteHMSEelectronicDialog(){
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
 		OnCancelHMSEelectronicDialog();
 	}
	return 0;
}
int CHMSEelectronicDialog::OnSaveHMSEelectronicDialog(){
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
 		//OnHMSEelectronicDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEelectronicDialog::OnCancelHMSEelectronicDialog(){
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
int CHMSEelectronicDialog::OnHMSEelectronicDialogListLoadData(){
	return 0;
}
