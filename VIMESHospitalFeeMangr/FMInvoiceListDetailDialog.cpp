#include "FMInvoiceListDetailDialog.h"
#include "MainFrm.h"
static long _OnInvoiceListDetailLoadDataFnc(CWnd *pWnd){
	return ((CFMInvoiceListDetailDialog*)pWnd)->OnInvoiceListDetailLoadData();
} 
static void _OnInvoiceListDetailDblClickFnc(CWnd *pWnd){
	((CFMInvoiceListDetailDialog*)pWnd)->OnInvoiceListDetailDblClick();
} 
static void _OnInvoiceListDetailSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInvoiceListDetailDialog*)pWnd)->OnInvoiceListDetailSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDetailDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnInvoiceListDetailDeleteItem();
} 
static int _OnAddFMInvoiceListDetailDialogFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnAddFMInvoiceListDetailDialog();
} 
static int _OnEditFMInvoiceListDetailDialogFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnEditFMInvoiceListDetailDialog();
} 
static int _OnDeleteFMInvoiceListDetailDialogFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnDeleteFMInvoiceListDetailDialog();
} 
static int _OnSaveFMInvoiceListDetailDialogFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnSaveFMInvoiceListDetailDialog();
} 
static int _OnCancelFMInvoiceListDetailDialogFnc(CWnd *pWnd){
	 return ((CFMInvoiceListDetailDialog*)pWnd)->OnCancelFMInvoiceListDetailDialog();
} 
CFMInvoiceListDetailDialog::CFMInvoiceListDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 850;
	m_nDlgHeight = 500;
	SetDefaultValues();
}
CFMInvoiceListDetailDialog::~CFMInvoiceListDetailDialog()
{
}
void CFMInvoiceListDetailDialog::OnCreateComponents(){
	m_wndDetailInvoiceList.Create(this, _T("Detail Invoice List"), 7, 6, 850, 496);
	m_wndInvoiceListDetail.Create(this,13, 29, 850, 490); 

}
void CFMInvoiceListDetailDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceListDetail.InsertColumn(0, _T("id"), CFMT_TEXT, 0);
	m_wndInvoiceListDetail.InsertColumn(1, _T("Index"), CFMT_NUMBER, 40);
	m_wndInvoiceListDetail.InsertColumn(2, _T("Type"), CFMT_TEXT, 35);
	m_wndInvoiceListDetail.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 65);
	m_wndInvoiceListDetail.InsertColumn(4, _T("Date"), CFMT_DATE, 80);
	m_wndInvoiceListDetail.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndInvoiceListDetail.InsertColumn(6, _T("Paid"), CFMT_MONEY, 90);
	m_wndInvoiceListDetail.InsertColumn(7, _T("Staff"), CFMT_TEXT, 100);
	m_wndInvoiceListDetail.InsertColumn(8, _T("Posteddate"), CFMT_DATETIME, 120);
	m_wndInvoiceListDetail.InsertColumn(9, _T("CashID"), CFMT_TEXT, 150);
	m_wndInvoiceListDetail.InsertColumn(10, _T("Dept"), CFMT_TEXT, 80);
	m_wndInvoiceListDetail.InsertColumn(11, _T("Type"), CFMT_TEXT, 0);
	m_wndInvoiceListDetail.InsertColumn(12, _T("TT hóa đơn"), CFMT_TEXT, 50);
	m_wndInvoiceListDetail.InsertColumn(13, _T("Class"), CFMT_TEXT, 0);
	m_wndInvoiceListDetail.InsertColumn(14, _T("TT phí"), CFMT_TEXT, 50);
	m_wndInvoiceListDetail.ModifyStyle(0, LVS_NOSORTHEADER);


}
void CFMInvoiceListDetailDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceListDetail.SetEvent(WE_SELCHANGE, _OnInvoiceListDetailSelectChangeFnc);
	m_wndInvoiceListDetail.SetEvent(WE_LOADDATA, _OnInvoiceListDetailLoadDataFnc);
	m_wndInvoiceListDetail.SetEvent(WE_DBLCLICK, _OnInvoiceListDetailDblClickFnc);
	//m_wndInvoiceListDetail.AddEvent(1, _T("Delete"), _OnInvoiceListDetailDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);
	GetDataToScreen();

}
void CFMInvoiceListDetailDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CFMInvoiceListDetailDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CFMInvoiceListDetailDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvoiceNo, szSerialNo, szType, tmpStr, szDesc, szAmount, szDepositAmount;
	CString szWhere;
	m_wndInvoiceListDetail.BeginLoad(); 
	int nCount = 0;
	int nIndex=1;
	long recvno;	
	int nItem;

	if (pMF->IsInPatient())
	{
		szWhere.Format(_T(" and hfe_class IN('A','E','I','X','R') "));
	}
	else
	{
		szWhere.Format(_T(" and hfe_class IN ('E','X','I') "));
	}

	szSQL.Format(_T("SELECT * FROM HMS_FEE_INVOICE_VIEW_DETAIL LEFT JOIN fa_cash ON (hfe_cash_id=fac_cash_id) left join hms_doc ON (hfe_docno=hd_docno)") \

		_T("WHERE hfe_docno=%ld and (hfe_status in('P','R','C','A') or (hfe_type='D' and hfe_status='O') ) %s ORDER BY hfe_date, hfe_invoiceno "), 
		 m_nDocumentNo, szWhere);

	
	CString szCategory;
	CString szReceiptDesc, m_szDescription;
	CString szStatus;
	CString szReceiptType;
	CString szInvoiceNoStr;

	nCount = rs.ExecSQL(szSQL);

    //_msg(_T("%s"), szSQL);



	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_receiptno"), recvno);
		rs.GetValue(_T("hfe_type"), szType);
		rs.GetValue(_T("hfe_status"), szStatus);		
		rs.GetValue(_T("hfe_patpaid"), szAmount);
		rs.GetValue(_T("hfe_patpaid"), szDepositAmount);
		rs.GetValue(_T("hfe_invoiceno"), szInvoiceNoStr);
		if(szStatus == _T("C"))
		{
			szInvoiceNoStr.Format(_T("Đã hủy"));
		}

	/*	if(str2double(szAmount) <= 0)
			rs.GetValue(_T("hfe_amount"), szAmount);*/

		//Phieu tam ung
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
			szReceiptDesc.Format(_T("[TU]%ld"), recvno);
			szReceiptType = _T("TU");
			rs.GetValue(_T("hfe_amount"), szAmount);
			rs.GetValue(_T("hfe_patpaid"), szDepositAmount);
		}
		//Phieu hoan tra
		else if(szType == _T("E") || szType == _T("F") )
		{
			szReceiptDesc.Format(_T("[PT]%ld"), recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else if(szType == _T("V"))
		{
			szReceiptDesc.Format(_T("[PC]%ld"), recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else if(szType == _T("G"))
		{
			szReceiptDesc.Format(_T("[%s]%ld"), szSerialNo, recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		//Phieu mien giam
		else if(szType == _T("D"))
		{
			szReceiptDesc.Format(_T("[MG]%ld"), recvno);
			szReceiptType = _T("MG");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else
		{
			szReceiptDesc.Format(_T("[PT]%ld"), recvno);
			szReceiptType = _T("PT");
		}

		rs.GetValue(_T("hfe_desc"), tmpStr);

		if (tmpStr.GetLength() >= 2)
			m_szDescription = tmpStr;
		else
			m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);

		
		if(szStatus == _T("C"))
		{
			szReceiptDesc.AppendFormat(_T("(Đã hủy)"));
		}
		//tmpStr.Format(_T("%d"), nIndex++);
		nItem = m_wndInvoiceListDetail.AddItems(
			rs.GetValue(_T("hfe_invoiceno")),
			rs.GetValue(_T("HFE_TREATTIME")),
			szReceiptType,
			szInvoiceNoStr,
			rs.GetValue(_T("hfe_date")), 
			szAmount,
			szDepositAmount,
			rs.GetValue(_T("hfe_staff")),
			rs.GetValue(_T("hfe_posteddate")),
			rs.GetValue(_T("fac_invoiceno")),
			rs.GetValue(_T("HFE_DEPTID")),
			rs.GetValue(_T("hfe_type")),
			rs.GetValue(_T("hfe_status")),
			rs.GetValue(_T("hfe_class")),
			rs.GetValue(_T("HDF_ACCEPTEDFEE")),
			NULL);
		//Phieu tam ung
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
			m_wndInvoiceListDetail.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndInvoiceListDetail.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			if(szStatus == _T("R"))
			{
				m_wndInvoiceListDetail.SetSubItemBkColor(nItem, 2, RGB(255, 128, 64), FALSE);
				m_wndInvoiceListDetail.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);
			}
		}

		if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
		{
			m_wndInvoiceListDetail.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}
		//Phieu mien giam
		if(szType == _T("D"))
		{
			m_wndInvoiceListDetail.SetItemBkColor(nItem, RGB(200, 200, 255), FALSE);
		}

		if(szType == _T("G"))
		{
			m_wndInvoiceListDetail.SetSubItemBkColor(nItem, 0, RGB(64, 128, 192), FALSE);
			m_wndInvoiceListDetail.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
		}

		if(szStatus == _T("C"))
		{
			m_wndInvoiceListDetail.SetSubItemBkColor(nItem, 2, RGB(255, 0, 0), FALSE);
			m_wndInvoiceListDetail.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);

		}
		rs.MoveNext();
	}
	m_wndInvoiceListDetail.EndLoad();	


}
void CFMInvoiceListDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMInvoiceListDetailDialog::SetDefaultValues(){


}
int CFMInvoiceListDetailDialog::SetMode(int nMode){
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
void CFMInvoiceListDetailDialog::OnInvoiceListDetailDblClick(){
	
} 
void CFMInvoiceListDetailDialog::OnInvoiceListDetailSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMInvoiceListDetailDialog::OnInvoiceListDetailDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInvoiceListDetailDialog::OnInvoiceListDetailLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInvoiceListDetail.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceListDetail.AddItems(
		rs.MoveNext();
	}
	m_wndInvoiceListDetail.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CFMInvoiceListDetailDialog::OnAddFMInvoiceListDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInvoiceListDetailDialog::OnEditFMInvoiceListDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInvoiceListDetailDialog::OnDeleteFMInvoiceListDetailDialog(){
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
 		OnCancelFMInvoiceListDetailDialog();
 	}
	return 0;
}
int CFMInvoiceListDetailDialog::OnSaveFMInvoiceListDetailDialog(){
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
 		//OnFMInvoiceListDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInvoiceListDetailDialog::OnCancelFMInvoiceListDetailDialog(){
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
int CFMInvoiceListDetailDialog::OnFMInvoiceListDetailDialogListLoadData(){
	return 0;
}
