#include "HMSFeeDiscountInvoiceDialog.h"
#include "MainFrm.h"
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnFeeListDeleteItem();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnSelectListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFeeDiscountInvoiceDialog *pVw = (CHMSFeeDiscountInvoiceDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountInvoiceDialog *pVw = (CHMSFeeDiscountInvoiceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddItemAllSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountInvoiceDialog *pVw = (CHMSFeeDiscountInvoiceDialog *)pWnd;
	pVw->OnAddItemAllSelect();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnAmountDiscountChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnAmountDiscountChange();
} */
/*static void _OnAmountDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnAmountDiscountSetfocus();} */ 
/*static void _OnAmountDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnAmountDiscountKillfocus();
} */
static int _OnAmountDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnAmountDiscountCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnReceiptDateCheckValue();
}

/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountInvoiceDialog *)pWnd)->OnDescriptionCheckValue();
}

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountInvoiceDialog *pVw = (CHMSFeeDiscountInvoiceDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAutoPrintSelectFnc(CWnd *pWnd){
	 ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnAutoPrintSelect();
}
static int _OnAddHMSFeeDiscountInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnAddHMSFeeDiscountInvoiceDialog();
} 
static int _OnEditHMSFeeDiscountInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnEditHMSFeeDiscountInvoiceDialog();
} 
static int _OnDeleteHMSFeeDiscountInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnDeleteHMSFeeDiscountInvoiceDialog();
} 
static int _OnSaveHMSFeeDiscountInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnSaveHMSFeeDiscountInvoiceDialog();
} 
static int _OnCancelHMSFeeDiscountInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountInvoiceDialog*)pWnd)->OnCancelHMSFeeDiscountInvoiceDialog();
} 
CHMSFeeDiscountInvoiceDialog::CHMSFeeDiscountInvoiceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 725;
	m_nDlgHeight = 615;
	SetDefaultValues();
	m_nInvoiceNo = 0;
	m_nReceiptNo  =0;
	m_bService = false;
	
}
CHMSFeeDiscountInvoiceDialog::~CHMSFeeDiscountInvoiceDialog()
{
}
void CHMSFeeDiscountInvoiceDialog::OnCreateComponents()
{
	

	m_wndGroupDiscount.Create(this, _T("Discount Items fee"), 5, 275, 715, 515);
	m_wndDetailitemsinvoiceno.Create(this, _T("Detail items invoiceno"), 5, 5, 715, 240);
	m_wndFeeList.Create(this,10, 30, 710, 235); 
	m_wndAddItemAll.Create(this, _T("&Add Item All"), 615, 245, 715, 270);
	m_wndSelectList.Create(this,10, 300, 710, 510); 
	m_wndCreatedByLabel.Create(this, _T("CreatedBy"), 5, 520, 85, 545);
	m_wndCreatedBy.Create(this,90, 520, 235, 545); 
	m_wndInvoicenoLable.Create(this, _T("InvoiceNo"), 240, 520, 340, 545);
	m_wndInvoiceNo.Create(this,345, 520, 465, 545); 
	m_wndAmountDiscountLable.Create(this, _T("Amount Discount"), 470, 520, 570, 545);
	m_wndAmountDiscount.Create(this,575, 520, 715, 545); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 5, 550, 85, 575);
	m_wndReceiptDate.Create(this,90, 550, 235, 575); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 240, 549, 340, 574);
	m_wndDescription.Create(this,345, 549, 715, 574); 
	m_wndApply.Create(this, _T("&Apply"), 435, 580, 525, 605);
	m_wndPrint.Create(this, _T("&Print"), 530, 580, 620, 605);
	m_wndCancel.Create(this, _T("&Close"), 625, 580, 715, 605);
	m_wndAutoPrint.Create(this, _T("Auto print sheet"), 5, 580, 235, 605);
}
void CHMSFeeDiscountInvoiceDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCreatedBy.SetLimitText(16);
	m_wndCreatedBy.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndAmountDiscount.SetLimitText(16);
	m_wndAmountDiscount.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptDate.SetCheckValue(true);

	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);

	
	m_wndFeeList.InsertColumn(0, _T("Index"), CFMT_TEXT||CFMT_CENTER, 50);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndFeeList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndFeeList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 100);
	m_wndFeeList.InsertColumn(4, _T("Price"), CFMT_MONEY, 100);
	m_wndFeeList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);	
	m_wndFeeList.InsertColumn(6, _T("item"), CFMT_MONEY, 0);
	m_wndFeeList.InsertColumn(7, _T("xRowID"), CFMT_TEXT, 0);

	
	m_wndSelectList.InsertColumn(0, _T("Index"), CFMT_TEXT||CFMT_CENTER, 50);
	m_wndSelectList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndSelectList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 100);
	m_wndSelectList.InsertColumn(4, _T("Price"), CFMT_MONEY, 100);
	m_wndSelectList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);	
	m_wndSelectList.InsertColumn(6, _T("item"), CFMT_MONEY, 0);
	m_wndSelectList.InsertColumn(7, _T("xRowID"), CFMT_TEXT, 0);	

	m_hms_fee_discountTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_discountTbl.AddField(_T("hfe_invoiceno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_discountTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_discountTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_discountTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_discountTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_discountTbl.AddField(_T("hfe_org_id"), dfText, 3); 
	m_hms_fee_discountTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_nDocumentNo = pMF->m_nDocumentNo;

}
void CHMSFeeDiscountInvoiceDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	//m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	
	m_wndSelectList.AddEvent(1, _T("Delete Item"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);

	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndCreatedBy.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddItemAll.SetEvent(WE_CLICK, _OnAddItemAllSelectFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndAmountDiscount.SetEvent(WE_CHANGE, _OnAmountDiscountChangeFnc);
	//m_wndAmountDiscount.SetEvent(WE_SETFOCUS, _OnAmountDiscountSetfocusFnc);
	//m_wndAmountDiscount.SetEvent(WE_KILLFOCUS, _OnAmountDiscountKillfocusFnc);
	m_wndAmountDiscount.SetEvent(WE_CHECKVALUE, _OnAmountDiscountCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);

	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAutoPrint.SetEvent(WE_CLICK, _OnAutoPrintSelectFnc);
	OnFeeListLoadData();
	SetMode(VM_ADD);
	SetWindowText(_T("PHI\x1EBEU MI\x1EC4N GI\x1EA2M"));
}
void CHMSFeeDiscountInvoiceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCreatedBy.GetDlgCtrlID(), m_szCreatedBy);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_Text(pDX, m_wndAmountDiscount.GetDlgCtrlID(), m_nAmountDiscount);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndAutoPrint.GetDlgCtrlID(), m_bAutoPrint);

}
void CHMSFeeDiscountInvoiceDialog::GetDataToScreen()
{
	
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr;
	bool bCheck = false;

	szSQL.Format(_T("SELECT * FROM hms_fee_discount WHERE hfe_docno = %ld AND hfe_refidx=%ld and hfe_type='E' "), m_nDocumentNo, m_nInvoiceNo);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_invoiceno"), m_nDiscountNo);
		rs.GetValue(_T("hfe_createdby"), m_szCreatedBy);
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		rs.GetValue(_T("hfe_desc"), tmpStr);

		tmpStr.Trim();

		for (int i = 0; i < tmpStr.GetLength(); i++)
		{
			if (!isdigit(tmpStr[i]))
			{
				bCheck = true;
				break;
			}
		}

		if (bCheck)
		{
			m_szDescription = tmpStr;
		}
		else
		{
			m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);
		}

		OnSelectListLoadData();
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_ADD);

}
void CHMSFeeDiscountInvoiceDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_discountTbl.SetValue(_T("hfe_deptid"), pMF->m_szReceiptDeptID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_type"), _T("D"));
	m_hms_fee_discountTbl.SetValue(_T("hfe_invoiceno"), m_nInvoiceNo);	
	m_hms_fee_discountTbl.SetValue(_T("hfe_patientno"), pMF->m_nPID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_szSerialNo = _T("MG");
	m_nReceiptNo = pMF->m_nReceiptNo;
	m_hms_fee_discountTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	m_hms_fee_discountTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
	m_hms_fee_discountTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
	CString tmpStr;
	tmpStr.Format(_T("%s %s"), pMF->GetSysDate(), pMF->GetSysTime());
	m_hms_fee_discountTbl.SetValue(_T("hfe_date"), tmpStr);

	if (m_szDescription.IsEmpty())
		m_hms_fee_discountTbl.SetValue(_T("hfe_desc"), _T("6"));
	else
		m_hms_fee_discountTbl.SetValue(_T("hfe_desc"), m_szDescription);

	m_hms_fee_discountTbl.SetValue(_T("hfe_amount"), m_nAmountDiscount);
	m_hms_fee_discountTbl.SetValue(_T("hfe_org_id"), pMF->GetModuleID());
	m_hms_fee_discountTbl.SetValue(_T("hfe_status"), _T("P"));
	if(m_bService)
	{
		
		m_hms_fee_discountTbl.SetValue(_T("hfe_objectid"), _T("7"));
	}

}
void CHMSFeeDiscountInvoiceDialog::SetDefaultValues(){

	m_szCreatedBy.Empty();
	//m_nInvoiceNo=0;
	m_nAmountDiscount=0;
	m_szReceiptDate.Empty();
	m_szDescription.Empty();
	m_bAutoPrint=TRUE;

}
int CHMSFeeDiscountInvoiceDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, 2, 3, -1); 
 			//SetDefaultValues();
			m_wndDescription.EnableWindow(TRUE);
 			break; 
 		case VM_EDIT:
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		};
		m_wndAddItemAll.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSFeeDiscountInvoiceDialog::OnFeeListDblClick(){
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return ;

	CString Name, Unit, Price, Qty,Amount, Idx,ItemID, tmpStr;
	Name = m_wndFeeList.GetItemText(nSel, 1);
	Unit = m_wndFeeList.GetItemText(nSel, 2);
	Qty = m_wndFeeList.GetItemText(nSel, 3);
	Price = m_wndFeeList.GetItemText(nSel, 4);
	Amount = m_wndFeeList.GetItemText(nSel, 5);	
	ItemID = m_wndFeeList.GetItemText(nSel, 6);
	Idx = m_wndFeeList.GetItemText(nSel, 7);
	m_nAmountDiscount +=ToDouble(Amount);
	tmpStr.Format(_T("%d"), m_wndSelectList.GetItemCount()+1);
	m_wndSelectList.AddItems(tmpStr,Name, Unit, Qty, Price, Amount, ItemID, Idx, NULL);
	m_wndFeeList.DeleteItem(nSel);
	m_wndSelectList.EndLoad();
	UpdateData(false);
} 
void CHMSFeeDiscountInvoiceDialog::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeDiscountInvoiceDialog::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	

	 return 0;
} 
long CHMSFeeDiscountInvoiceDialog::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	m_wndFeeList.BeginLoad(); 
	m_wndFeeList.DeleteAllItems(); 
	int nCount = 0, nIdx=0;
	CString szFeeSelected;

	szFeeSelected.Format(_T("'X'"));
	for (int i =0; i < m_wndSelectList.GetItemCount();i++)
	{
		szFeeSelected.AppendFormat(_T(",'%s'"), m_wndSelectList.GetItemText(i, 6));
	}

	szWhere.Empty();
	szWhere.AppendFormat(_T(" and hfe_itemid not in(select hfe_itemid from hms_fee_discountline where hfe_docno = %ld and (hfe_refidx=%ld or (hfe_refidx=0 and hfe_status in('O','A'))) ) "), m_nDocumentNo, m_nInvoiceNo);
	//szWhere.AppendFormat(_T(" and hfe_itemid not in(select hfe_itemid from hms_fee_Discountline where hfe_docno = %ld and hfe_refidx=%ld) "), m_nDocumentNo, m_nInvoiceNo);

	szWhere.AppendFormat(_T(" and hfe_itemid not in(%s) "), szFeeSelected);

	szWhere.AppendFormat(_T(" and hfe_category not in('Y','BQP','BBV', 'COV') ") );

	if(m_bService)
	{
		szWhere.AppendFormat(_T(" and hfe_object = 7 "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_object <> 7 "));
	}

	szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T("		hfe_fee_id as idx, ") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		//_T(" 		sum(hfe_patpaid+hfe_patdebt) as cost ") \//
		_T(" 		CASE WHEN hfe_itemid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE') OR hfe_type = 'X' THEN hfe_cost else SUM(hfe_patpaid+hfe_patdebt) end AS cost ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and (hfe_invoiceno=%ld or hfe_status in('O','A')) and (hfe_patpaid+hfe_patdebt) > 0 %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_fee_id, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_cost, hfe_deptid") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), 
		 m_nDocumentNo, m_nInvoiceNo, szWhere);
	rs.ExecSQL(szSQL);

//	_msg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		m_wndFeeList.AddItems(tmpStr, 
				rs.GetValue(_T("name")),
				rs.GetValue(_T("unit")),
				rs.GetValue(_T("qty")),
				rs.GetValue(_T("unitprice")),
				rs.GetValue(_T("cost")),				
				rs.GetValue(_T("itemid")),
				rs.GetValue(_T("idx")),	NULL);		
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
}
void CHMSFeeDiscountInvoiceDialog::OnSelectListDblClick(){
	OnSelectListDeleteItem();

} 
void CHMSFeeDiscountInvoiceDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeDiscountInvoiceDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndSelectList.GetCurSel();
	if(nSel < 0) return 0 ;

	if(GetMode()== VM_VIEW) return 0;
	m_wndSelectList.DeleteItem(nSel);
	OnFeeListLoadData();
	m_nAmountDiscount =0;
	double nAmount = 0;
	for (int i =0; i < m_wndSelectList.GetItemCount(); i++)
	{
		nAmount = str2double(m_wndSelectList.GetItemText(i, 5));
		m_nAmountDiscount += nAmount;
	}
	UpdateData(FALSE);
	return 0;
} 
long CHMSFeeDiscountInvoiceDialog::OnSelectListLoadData(){
	return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndSelectList.BeginLoad(); 
	m_wndSelectList.DeleteAllItems(); 
	szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T("		hfe_fee_Discountline_id as idx, ") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost ") \
		_T(" FROM hms_fee_discountline ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_fee_Discountline_id, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_deptid") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), 
		m_nDocumentNo, m_nDiscountNo);
//_msg(_T("%s"), szSQL);
	int nCount = 0, nIdx=0;
	double nTotalAmount=0;
		m_nAmountDiscount =0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rs.GetValue(_T("cost"),nTotalAmount);
		m_nAmountDiscount += nTotalAmount;
		m_wndSelectList.AddItems(tmpStr, 
				rs.GetValue(_T("name")),
				rs.GetValue(_T("unit")),
				rs.GetValue(_T("qty")),
				rs.GetValue(_T("unitprice")),
				rs.GetValue(_T("cost")),				
				rs.GetValue(_T("itemid")),
				rs.GetValue(_T("idx")),	NULL);		
		rs.MoveNext();
	}

	m_wndSelectList.EndLoad();	
	return nCount;
}
/*void CHMSFeeDiscountInvoiceDialog::OnDocumentNoChange(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSFeeDiscountInvoiceDialog::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSFeeDiscountInvoiceDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return; 
 	if (!IsValidateData()) 
 		return; 

	CString szSQL;
	if (m_wndSelectList.GetItemCount() <= 0)
		return;
	

	m_hms_fee_discountTbl.SetValue(_T("hfe_status"), _T("O"));
	m_hms_fee_discountTbl.SetValue(_T("hfe_refidx"), m_nInvoiceNo);

	szSQL.Format(_T("HMS_FEE_DISCOUNT_CREATE_V2(%s) "), m_hms_fee_discountTbl.FormatSQL());
 	long nRefIdx = str2long(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	_tprintf(_T("\r\n%ld: %s"), nRefIdx, szSQL);	
	if (nRefIdx > 0)
	{
		int nCount = 0;
		for(int i=0; i< m_wndSelectList.GetItemCount(); i++){
			double nRowID = str2double(m_wndSelectList.GetItemText(i, 7));
			szSQL.Format(_T("HMS_FEE_DISCOUNT_CREATELINE_V2(%ld, %ld, %ld, %f) "), 
				m_nDocumentNo, nRefIdx, m_nInvoiceNo, nRowID);		
_tprintf(_T("\r\n%s"), szSQL);
 			nCount = str2long(pMF->ExecDML(szSQL));
			//_msg(_T("%s"), szSQL);
		}
	
		if(nCount > 0)
		{
			if (nCount > 0)
				pMF->PrintDiscount(nRefIdx);
		}
		else
		{
			szSQL.Format(_T("DELETE FROM hms_fee_discount WHERE hfe_docno = %ld and hfe_invoiceno=%ld "), m_nDocumentNo, nRefIdx);
			pMF->ExecSQL(szSQL);
		}
 		
		
		CGuiDialog::OnOK();		
	}
	
} 
void CHMSFeeDiscountInvoiceDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSFeeDiscountInvoiceDialog::OnAddItemAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString Name, Unit, Price, Qty,Amount, Idx,ItemID, tmpStr;
	m_nAmountDiscount=0;
	for(int i=0; i< m_wndFeeList.GetItemCount(); i++)
	{		
		Name = m_wndFeeList.GetItemText(i, 1);
		Unit = m_wndFeeList.GetItemText(i, 2);
		Qty = m_wndFeeList.GetItemText(i, 3);
		Price = m_wndFeeList.GetItemText(i, 4);
		Amount = m_wndFeeList.GetItemText(i, 5);	
		ItemID = m_wndFeeList.GetItemText(i, 6);
		Idx = m_wndFeeList.GetItemText(i, 7);		
		tmpStr.Format(_T("%d"), m_wndSelectList.GetItemCount()+1);
		m_wndSelectList.AddItems(tmpStr,Name, Unit, Qty, Price, Amount, ItemID, Idx, NULL);		
	}
	for(int i=0; i< m_wndSelectList.GetItemCount(); i++){
		Amount = m_wndSelectList.GetItemText(i, 5);
		m_nAmountDiscount +=ToDouble(Amount);
	}
	m_wndFeeList.DeleteAllItems();
	m_wndSelectList.EndLoad();
	UpdateData(false);
} 
/*void CHMSFeeDiscountInvoiceDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSFeeDiscountInvoiceDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSFeeDiscountInvoiceDialog::OnAmountDiscountChange(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnAmountDiscountSetfocus(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnAmountDiscountKillfocus(){
	
} */
int CHMSFeeDiscountInvoiceDialog::OnAmountDiscountCheckValue(){
	return 0;
} 
/*void CHMSFeeDiscountInvoiceDialog::OnReceiptDateChange(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSFeeDiscountInvoiceDialog::OnReceiptDateCheckValue(){
	return 0;
}
/*void CHMSFeeDiscountInvoiceDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeDiscountInvoiceDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeDiscountInvoiceDialog::OnDescriptionCheckValue(){
	return 0;
}
void CHMSFeeDiscountInvoiceDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintDiscount(m_nDiscountNo, true);
} 
	void CHMSFeeDiscountInvoiceDialog::OnAutoPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSFeeDiscountInvoiceDialog::OnAddHMSFeeDiscountInvoiceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeDiscountInvoiceDialog::OnEditHMSFeeDiscountInvoiceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeDiscountInvoiceDialog::OnDeleteHMSFeeDiscountInvoiceDialog(){
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
 		OnCancelHMSFeeDiscountInvoiceDialog(); 
 	}
	return 0;
}
int CHMSFeeDiscountInvoiceDialog::OnSaveHMSFeeDiscountInvoiceDialog(){
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
 		//OnHMSFeeDiscountInvoiceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFeeDiscountInvoiceDialog::OnCancelHMSFeeDiscountInvoiceDialog(){
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
int CHMSFeeDiscountInvoiceDialog::OnHMSFeeDiscountInvoiceDialogListLoadData(){
	return 0;
}
