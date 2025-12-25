#include "HMSEditInvoiceEletronicDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEditInvoiceEletronicDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEditInvoiceEletronicDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSEditInvoiceEletronicDialog *pVw = (CHMSEditInvoiceEletronicDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditInvoiceEletronicDialog *pVw = (CHMSEditInvoiceEletronicDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEditInvoiceEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnAddHMSEditInvoiceEletronicDialog();
} 
static int _OnEditHMSEditInvoiceEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnEditHMSEditInvoiceEletronicDialog();
} 
static int _OnDeleteHMSEditInvoiceEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnDeleteHMSEditInvoiceEletronicDialog();
} 
static int _OnSaveHMSEditInvoiceEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnSaveHMSEditInvoiceEletronicDialog();
} 
static int _OnCancelHMSEditInvoiceEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSEditInvoiceEletronicDialog*)pWnd)->OnCancelHMSEditInvoiceEletronicDialog();
} 
CHMSEditInvoiceEletronicDialog::CHMSEditInvoiceEletronicDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 600;
	m_nDlgHeight = 350;
	SetDefaultValues();
}
CHMSEditInvoiceEletronicDialog::~CHMSEditInvoiceEletronicDialog(){
}
void CHMSEditInvoiceEletronicDialog::OnCreateComponents(){
	m_wndListInvoice.Create(this, _T("List Invoice"), 5, 5, 605, 355);
	m_wndList.Create(this,10, 30, 600, 350); 
	m_wndApply.Create(this, _T("&Apply"), 440, 360, 520, 385);
	m_wndClose.Create(this, _T("&Close"), 525, 360, 605, 385);

}
void CHMSEditInvoiceEletronicDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Type"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("Invoice No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Staff"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("invoicetype"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("status"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("Electronic"), CFMT_TEXT, 90);	
	m_wndList.InsertColumn(9, _T("Desc"), CFMT_TEXT, 290);	
	m_wndList.SetEditLabel(8, GUI_TEXTCTRL);
	//m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CHMSEditInvoiceEletronicDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	OnListLoadData();
	SetMode(VM_NONE);
}
void CHMSEditInvoiceEletronicDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSEditInvoiceEletronicDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSEditInvoiceEletronicDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditInvoiceEletronicDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditInvoiceEletronicDialog::SetDefaultValues(){


}
int CHMSEditInvoiceEletronicDialog::SetMode(int nMode){
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
void CHMSEditInvoiceEletronicDialog::OnListDblClick(){
	
} 
void CHMSEditInvoiceEletronicDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEditInvoiceEletronicDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEditInvoiceEletronicDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvoiceNo, szSerialNo, szType, tmpStr, szDesc, szAmount;
	CString szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	long recvno;	
	int nItem;

	szSQL.Format(_T("SELECT HFE_INVOICENO ,") \
	_T("   HFE_DEPTID ,") \
	_T("   HFE_REFIDX ,") \
	_T("   HFE_PATIENTNO ,") \
	_T("   HFE_DOCNO ,") \
	_T("   HFE_TYPE ,") \
	_T("   HFE_CLASS ,") \
	_T("   HFE_OBJECTID ,") \
	_T("   HFE_STATUS ,") \
	_T("   HFE_STAFF ,") \
	_T("   HFE_SERIALNO ,") \
	_T("   HFE_RECEIPTNO ,") \
	_T("   HFE_DATE ,") \
	_T("   HFE_LOCKED ,") \
	_T("   HFE_LOCKEDBY ,") \
	_T("   HFE_LOCKEDDATE ,") \
	_T("   HFE_POSTED ,") \
	_T("   HFE_POSTEDBY ,") \
	_T("   HFE_POSTEDDATE ,") \
	_T("   HFE_DESC ,") \
	_T("   HFE_AMOUNT ,") \
	_T("   HFE_PATPAID ,") \
	_T("   HFE_PRINT,") \
	_T("   HFE_ELECTRONIC") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfe_docno  = %ld") \
	_T(" AND hfe_status ='P'") \
	_T(" UNION ALL") \
	_T(" SELECT HFE_INVOICENO ,") \
	_T("   HFE_DEPTID ,") \
	_T("   HFE_REFIDX ,") \
	_T("   HFE_PATIENTNO ,") \
	_T("   HFE_DOCNO ,") \
	_T("   HFE_TYPE ,") \
	_T("   HFE_CLASS ,") \
	_T("   HFE_OBJECTID ,") \
	_T("   HFE_STATUS ,") \
	_T("   HFE_STAFF ,") \
	_T("   HFE_SERIALNO ,") \
	_T("   HFE_RECEIPTNO ,") \
	_T("   HFE_DATE ,") \
	_T("   HFE_LOCKED ,") \
	_T("   HFE_LOCKEDBY ,") \
	_T("   HFE_LOCKEDDATE ,") \
	_T("   HFE_POSTED ,") \
	_T("   HFE_POSTEDBY ,") \
	_T("   HFE_POSTEDDATE ,") \
	_T("   HFE_DESC ,") \
	_T("   HFE_AMOUNT ,") \
	_T("   HFE_PATPAID ,") \
	_T("   HFE_PRINT,") \
	_T("   HFE_ELECTRONIC") \
	_T(" FROM hms_fee_refund") \
	_T(" WHERE hfe_docno    = %ld") \
	_T(" AND hfe_refidx   > 0") \
	_T(" AND hfe_status ='P'") \
	_T(" AND hfe_type     = 'F'"), m_nDocumentNo, m_nDocumentNo);

	//_msg(_T("%s"), szSQL);
	CString szCategory;
	CString szReceiptDesc, m_szDescription;
	CString szStatus;
	CString szReceiptType;
	CString szInvoiceNoStr;

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 		
		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_receiptno"), recvno);
		rs.GetValue(_T("hfe_type"), szType);
		rs.GetValue(_T("hfe_status"), szStatus);		
		rs.GetValue(_T("hfe_patpaid"), szAmount);
		rs.GetValue(_T("hfe_invoiceno"), szInvoiceNoStr);

		//Phieu hoan tra
		if(szType == _T("E") || szType == _T("F") )
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

	
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hfe_invoiceno")),
			szReceiptType,
			szInvoiceNoStr,
			rs.GetValue(_T("hfe_date")), 
			szAmount,
			rs.GetValue(_T("hfe_staff")),
			rs.GetValue(_T("hfe_type")),
			rs.GetValue(_T("hfe_status")),
			rs.GetValue(_T("HFE_ELECTRONIC")),
			m_szDescription,
			NULL);
		
		if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
		{
			m_wndList.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}		

	
		rs.MoveNext();
	}
	m_wndList.EndLoad();

	return 0;
}
void CHMSEditInvoiceEletronicDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szType, szStatus;
	long nInvoiceNo;
	
	if(!pMF->CheckPermission(_T("20.10")))
	{
		ShowMessageBox(_T("Permission Denined. (20.10)"), 0);
			return;
	}

	if(ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD \x63\x1EADp nh\x1EADp l\x1EA1i tr\x1EA1ng th\xE1i \x63\xE1\x63 phi\x1EBFu \x111\x1EC3 \x78u\x1EA5t l\x1EA1i ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED\r\n \x42\x1EA1n ph\x1EA3i \x63h\x1EAF\x63 khi th\x1EF1\x63 hi\x1EC7n t\xE1\x63 v\x1EE5 n\xE0y"), MB_ICONWARNING|MB_YESNO)== IDNO)
		return;

	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{	
		szType = m_wndList.GetItemText(i, 6);
		nInvoiceNo = ToLong(m_wndList.GetItemText(i, 0));
		szStatus = m_wndList.GetItemText(i, 8);
		if(szStatus != _T("P"))
			szStatus = _T("N");

		if(szType != _T("F"))
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_electronic = '%s' WHERE hfe_docno = %ld and hfe_invoiceno = %ld"), szStatus, m_nDocumentNo, nInvoiceNo);
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_electronic = '%s' WHERE hfe_docno = %ld and hfe_invoiceno = %ld"), szStatus, m_nDocumentNo, nInvoiceNo);
		}

		pMF->ExecSQL(szSQL);	

		
	}
	OnListLoadData();

} 
void CHMSEditInvoiceEletronicDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEditInvoiceEletronicDialog::OnAddHMSEditInvoiceEletronicDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditInvoiceEletronicDialog::OnEditHMSEditInvoiceEletronicDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditInvoiceEletronicDialog::OnDeleteHMSEditInvoiceEletronicDialog(){
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
 		OnCancelHMSEditInvoiceEletronicDialog();
 	}
	return 0;
}
int CHMSEditInvoiceEletronicDialog::OnSaveHMSEditInvoiceEletronicDialog(){
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
 		//OnHMSEditInvoiceEletronicDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEditInvoiceEletronicDialog::OnCancelHMSEditInvoiceEletronicDialog(){
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
int CHMSEditInvoiceEletronicDialog::OnHMSEditInvoiceEletronicDialogListLoadData(){
	return 0;
}
