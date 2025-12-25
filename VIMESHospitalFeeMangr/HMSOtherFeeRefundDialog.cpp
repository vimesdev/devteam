#include "HMSOtherFeeRefundDialog.h"
#include "MainFrm.h"

static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherFeeRefundDialog*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSOtherFeeRefundDialog*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOtherFeeRefundDialog*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnFeeListDeleteItem();
} 
static long _OnRefundListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherFeeRefundDialog*)pWnd)->OnRefundListLoadData();
} 
static void _OnRefundListDblClickFnc(CWnd *pWnd){
	((CHMSOtherFeeRefundDialog*)pWnd)->OnRefundListDblClick();
} 
static void _OnRefundListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOtherFeeRefundDialog*)pWnd)->OnRefundListSelectChange(nOldItem, nNewItem);
} 
static int _OnRefundListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnRefundListDeleteItem();
} 
static void _OnSelectAllSelectFnc(CWnd *pWnd){
	CHMSOtherFeeRefundDialog *pVw = (CHMSOtherFeeRefundDialog *)pWnd;
	pVw->OnSelectAllSelect();
} 
static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSOtherFeeRefundDialog *pVw = (CHMSOtherFeeRefundDialog *)pWnd;
	pVw->OnRefundSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOtherFeeRefundDialog *pVw = (CHMSOtherFeeRefundDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOtherFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnAddHMSOtherFeeRefundDialog();
} 
static int _OnEditHMSOtherFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnEditHMSOtherFeeRefundDialog();
} 
static int _OnDeleteHMSOtherFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnDeleteHMSOtherFeeRefundDialog();
} 
static int _OnSaveHMSOtherFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnSaveHMSOtherFeeRefundDialog();
} 
static int _OnCancelHMSOtherFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeRefundDialog*)pWnd)->OnCancelHMSOtherFeeRefundDialog();
} 
CHMSOtherFeeRefundDialog::CHMSOtherFeeRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 795;
	m_nDlgHeight = 615;

	SetDefaultValues();
}
CHMSOtherFeeRefundDialog::~CHMSOtherFeeRefundDialog(){
}
void CHMSOtherFeeRefundDialog::OnCreateComponents()
{
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 785, 315);
	m_wndRefundItemInfo.Create(this, _T("Refund Items fee"), 5, 350, 785, 575);
	m_wndFeeList.Create(this,10, 30, 780, 310); 
	m_wndRefundList.Create(this,10, 374, 780, 569); 
	m_wndSelectAll.Create(this, _T("Select All"), 695, 320, 785, 345);
	m_wndRefund.Create(this, _T("&Refund"), 600, 580, 690, 605);
	m_wndClose.Create(this, _T("&Close"), 695, 580, 785, 605);

}
void CHMSOtherFeeRefundDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndFeeList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndFeeList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndFeeList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndFeeList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 85);
	m_wndFeeList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);
	m_wndFeeList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);
	m_wndFeeList.InsertColumn(7, _T("FeeID"), CFMT_TEXT, 0);


	m_wndRefundList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndRefundList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndRefundList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndRefundList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndRefundList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 85);
	m_wndRefundList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndRefundList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);
	m_wndRefundList.InsertColumn(7, _T("FeeID"), CFMT_TEXT, 0);


	m_hms_fee_refundTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_refundTbl.AddField(_T("hfe_refidx"), dfLong);
	m_hms_fee_refundTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_refundTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("hfe_staff"), dfText, 15);
	m_hms_fee_refundTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_refundTbl.AddField(_T("hfe_desc"), dfText, 128);
	m_hms_fee_refundTbl.AddField(_T("hfe_org_id"), dfText, 3);
}
void CHMSOtherFeeRefundDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);

	//m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndRefundList.SetEvent(WE_SELCHANGE, _OnRefundListSelectChangeFnc);
	m_wndRefundList.SetEvent(WE_LOADDATA, _OnRefundListLoadDataFnc);
	m_wndRefundList.SetEvent(WE_DBLCLICK, _OnRefundListDblClickFnc);

	m_wndRefundList.AddEvent(1, _T("Delete"), _OnRefundListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndSelectAll.SetEvent(WE_CLICK, _OnSelectAllSelectFnc);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//SetMode(VM_NONE);

	SetMode(GetMode());
	OnFeeListLoadData();
	//m_arrFeeList.RemoveAll();
	m_arrRefund.RemoveAll();
}
void CHMSOtherFeeRefundDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOtherFeeRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOtherFeeRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOtherFeeRefundDialog::SetDefaultValues(){


}
int CHMSOtherFeeRefundDialog::SetMode(int nMode)
{
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
void CHMSOtherFeeRefundDialog::OnFeeListDblClick()
{
	int nSel = m_wndFeeList.GetCurSel();
	if (nSel < 0)
		return;

	CString szItemID;
	szItemID = m_wndFeeList.GetItemText(nSel, 6);

	if (m_arrFeeList.GetSize() > 0)
	{
		for (int i = 0; i < m_arrFeeList.GetSize(); i++)
		{
			if (m_arrFeeList[i] == szItemID)
			{
				m_arrFeeList.RemoveAt(i);
				m_arrRefund.Add(szItemID);
				OnFeeListLoadData();
				OnRefundListLoadData();
				break;
			}
		}
	}
} 
void CHMSOtherFeeRefundDialog::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOtherFeeRefundDialog::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOtherFeeRefundDialog::OnFeeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString tmpStr, szTemp;
	CString szItemID;

	m_wndFeeList.BeginLoad();
	int nCount = 0;

	for (int i = 0; i < m_arrFeeList.GetSize(); i++)
	{
		if (!szItemID.IsEmpty())
			szItemID += _T(",");
		szItemID.AppendFormat(_T("'%s'"), m_arrFeeList[i]);
	}

	if (szItemID.IsEmpty())
		szItemID.Format(_T("'0'"));

	szSQL.Format(_T(" SELECT hfe_fee_id as feeid,") \
		        _T("        hfe_status as status,") \
				_T("        HFE_DEPTID as Departmentid,") \
				_T("        hfe_type as feetype,") \
				_T("        rtrim(hfe_group,'0') as groupid,") \
				_T("        hfe_itemid as itemid,") \
				_T("        hfe_desc as name,") \
				_T("        hfe_unit as unit,") \
				_T("        sum(hfe_quantity) as quantity,") \
				_T("        hfe_unitprice as unitprice,") \
				_T("        sum(hfe_cost) as cost") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group)") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_status='P' and hfe_cost > 0 and hfe_itemid in(%s)") \
				_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_polprice, HFE_DEPTID, hfe_fee_id") \
				_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"),
				m_nDocNo, m_nInvoiceNo, szItemID);

	nCount = rs.ExecSQL(szSQL);

	int nIndex = 1;

	while (!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);

		m_wndFeeList.AddItems(
			tmpStr,
			rs.GetValue(_T("name")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("quantity")), 
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("cost")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("feeid")), NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
}
void CHMSOtherFeeRefundDialog::OnRefundListDblClick(){
	
} 
void CHMSOtherFeeRefundDialog::OnRefundListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOtherFeeRefundDialog::OnRefundListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndRefundList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szItemID = m_wndRefundList.GetItemText(nSel, 6);

	for (int i = 0; i < m_arrRefund.GetSize(); i++)
	{
		if (m_arrRefund[i] == szItemID)
		{
			m_arrRefund.RemoveAt(i);
			m_arrFeeList.Add(szItemID);
			OnFeeListLoadData();
			OnRefundListLoadData();
			break;
		}
	}

	return 0;
} 
long CHMSOtherFeeRefundDialog::OnRefundListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;
	CString szItemID;

	m_wndRefundList.BeginLoad(); 
	int nCount = 0;

	for (int i = 0; i < m_arrRefund.GetSize(); i++)
	{
		if (!szItemID.IsEmpty())
			szItemID += _T(",");
		szItemID.AppendFormat(_T("'%s'"), m_arrRefund[i]);
	}

	if (szItemID.IsEmpty())
	{
		szItemID.Format(_T("'0'"));
	}

	szSQL.Format(_T(" SELECT hfe_fee_id as feeid,") \
		        _T("        hfe_status as status,") \
				_T("        HFE_DEPTID as Departmentid,") \
				_T("        hfe_type as feetype,") \
				_T("        rtrim(hfe_group,'0') as groupid,") \
				_T("        hfe_itemid as itemid,") \
				_T("        hfe_desc as name,") \
				_T("        hfe_unit as unit,") \
				_T("        sum(hfe_quantity) as quantity,") \
				_T("        hfe_unitprice as unitprice,") \
				_T("        sum(hfe_cost) as cost") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group)") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_itemid in(%s) and hfe_cost > 0") \
				_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_polprice, hfe_deptid, hfe_fee_id") \
				_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"),
				m_nDocNo, m_nInvoiceNo, szItemID);

	//MessageBox(szSQL);

	nCount = rs.ExecSQL(szSQL);

	int nIndex = 1;

	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);

		m_wndRefundList.AddItems(
			tmpStr,
			rs.GetValue(_T("name")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("quantity")), 
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("cost")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("feeid")), NULL);
		rs.MoveNext();
	}
	m_wndRefundList.EndLoad(); 
	return nCount;
}
void CHMSOtherFeeRefundDialog::OnSelectAllSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_arrFeeList.RemoveAll();
	m_arrRefund.RemoveAll();
	CString szItemID;

	for (int i = 0; i < m_wndFeeList.GetItemCount(); i++)
	{
		szItemID = m_wndFeeList.GetItemText(i, 6);
		m_arrRefund.Add(szItemID);
	}

	for (int i = 0; i < m_wndRefundList.GetItemCount(); i++)
	{
		szItemID = m_wndRefundList.GetItemText(i, 6);
		m_arrRefund.Add(szItemID);
	}

	OnFeeListLoadData();
	OnRefundListLoadData();
} 
void CHMSOtherFeeRefundDialog::OnRefundSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;

	if (m_wndRefundList.GetItemCount() > 0)
	{
		UpdateData(TRUE);

		pMF->GetSerialInformation();

		m_hms_fee_refundTbl.SetValue(_T("hfe_type"), _T("F"));
		m_hms_fee_refundTbl.SetValue(_T("hfe_deptid"), m_szDeptID);
		m_hms_fee_refundTbl.SetValue(_T("hfe_refidx"), m_nInvoiceNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_docno"), m_nDocNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_serialno"), pMF->m_szSerialNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_receiptno"), pMF->m_nReceiptNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
		m_hms_fee_refundTbl.SetValue(_T("hfe_objectid"), m_szObjectID);

		tmpStr.Format(_T("%s %s"), pMF->m_szRecvDate, pMF->GetSysTime());
		m_hms_fee_refundTbl.SetValue(_T("hfe_date"), tmpStr);
		m_hms_fee_refundTbl.SetValue(_T("hfe_desc"), _T("6"));
		m_hms_fee_refundTbl.SetValue(_T("hfe_amount"), 0);
		m_hms_fee_refundTbl.SetValue(_T("hfe_org_id"), _T("FM"));

		szSQL.Format(_T("HMS_FEE_INPREFUND_INSERT(%s) "), m_hms_fee_refundTbl.FormatSQL());

		long nInvoiceNo = str2long(pMF->ExecDML(szSQL));

		m_nRefundInvoice = 0;

 		if (nInvoiceNo > 0)
 		{ 
			CString szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("6"));
			long nFeeID;
			long nRet;

			for (int i = 0; i < m_wndRefundList.GetItemCount(); i++)
			{
				nFeeID = str2long(m_wndRefundList.GetItemText(i, 7));

				szSQL.Format(_T("HMS_FEE_INPREFUNDLINE_INSERT(%ld, %ld, %ld, %ld, %ld, %ld, '%s', '%s', '%s', true)"),
							nFeeID, nInvoiceNo, m_nInvoiceNo, m_nPatientNo, m_nDocNo, 0, m_szDeptID, szDescription, pMF->m_szRecvDate);

				nRet = str2long(pMF->ExecDML(szSQL));
			}

			szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_class='X' WHERE hfe_invoiceno=%ld"), nInvoiceNo);
			pMF->ExecSQL(szSQL);

			m_nRefundInvoice = nInvoiceNo;

			CGuiDialog::OnOK();
		}
	}
} 
void CHMSOtherFeeRefundDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSOtherFeeRefundDialog::OnAddHMSOtherFeeRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOtherFeeRefundDialog::OnEditHMSOtherFeeRefundDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOtherFeeRefundDialog::OnDeleteHMSOtherFeeRefundDialog(){
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
 		OnCancelHMSOtherFeeRefundDialog();
 	}
	return 0;
}
int CHMSOtherFeeRefundDialog::OnSaveHMSOtherFeeRefundDialog(){
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
 		//OnHMSOtherFeeRefundDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOtherFeeRefundDialog::OnCancelHMSOtherFeeRefundDialog(){
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
int CHMSOtherFeeRefundDialog::OnHMSOtherFeeRefundDialogListLoadData(){
	return 0;
}
