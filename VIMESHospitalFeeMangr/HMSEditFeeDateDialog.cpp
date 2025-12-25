#include "HMSEditFeeDateDialog.h"
#include "MainFrm.h"

/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditFeeDateDialog *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditFeeDateDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSEditFeeDateDialog *pVw = (CHMSEditFeeDateDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditFeeDateDialog *pVw = (CHMSEditFeeDateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEditFeeDateDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEditFeeDateDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEditFeeDateDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSEditFeeDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnAddHMSEditFeeDateDialog();
} 
static int _OnEditHMSEditFeeDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnEditHMSEditFeeDateDialog();
} 
static int _OnDeleteHMSEditFeeDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnDeleteHMSEditFeeDateDialog();
} 
static int _OnSaveHMSEditFeeDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnSaveHMSEditFeeDateDialog();
} 
static int _OnCancelHMSEditFeeDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditFeeDateDialog*)pWnd)->OnCancelHMSEditFeeDateDialog();
} 
CHMSEditFeeDateDialog::CHMSEditFeeDateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 530;
	m_nDlgHeight = 285;
	SetDefaultValues();
}
CHMSEditFeeDateDialog::~CHMSEditFeeDateDialog(){
}
void CHMSEditFeeDateDialog::OnCreateComponents()
{
	m_wndEditFeeDateInfo.Create(this, _T("Edit Fee Receive Date"), 5, 5, 520, 245);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 75, 55);
	m_wndDocNo.Create(this,80, 30, 230, 55); 
	m_wndDateLabel.Create(this, _T("Invoice Date"), 235, 30, 315, 55);
	m_wndDate.Create(this,320, 30, 430, 55); 
	m_wndUpdate.Create(this, _T("&Update"), 435, 30, 515, 55);
	m_wndClose.Create(this, _T("&Close"), 440, 250, 520, 275);
	m_wndList.Create(this,10, 60, 515, 240); 

}
void CHMSEditFeeDateDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Invoice No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Created Date"), CFMT_DATETIME, 110);
	m_wndList.InsertColumn(2, _T("Updated Date"), CFMT_DATETIME, 110);
	m_wndList.InsertColumn(3, _T("Invoice Date"), CFMT_DATETIME, 110);
	m_wndList.InsertColumn(4, _T("Locked Date"), CFMT_DATETIME, 110);

	m_hms_fee_invoiceTbl.SetTableName(_T("hms_fee_invoice"));
	m_hms_fee_invoiceTbl.AddField(_T("hfe_createddate"), dfDateTime);
	m_hms_fee_invoiceTbl.AddField(_T("hfe_updateddate"), dfDateTime);
	m_hms_fee_invoiceTbl.AddField(_T("hfe_date"), dfDateTime);
	m_hms_fee_invoiceTbl.AddField(_T("hfe_lockeddate"), dfDateTime);
}
void CHMSEditFeeDateDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//SetMode(VM_NONE);

	SetWindowFont(&m_wndDocNo, GetFaceName(), GetFaceSize() + 2, true);
	m_wndDocNo.SetTextColor(RGB(255, 0, 0));
}
void CHMSEditFeeDateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);

}
void CHMSEditFeeDateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditFeeDateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditFeeDateDialog::SetDefaultValues(){

	m_nDocNo=0;
	m_szDate.Empty();

}
int CHMSEditFeeDateDialog::SetMode(int nMode){
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
/*void CHMSEditFeeDateDialog::OnDocNoChange(){
	
} */
/*void CHMSEditFeeDateDialog::OnDocNoSetfocus(){
	
} */
/*void CHMSEditFeeDateDialog::OnDocNoKillfocus(){
	
} */
int CHMSEditFeeDateDialog::OnDocNoCheckValue()
{
	UpdateData(TRUE);

	OnListLoadData();

	return 1;
} 
/*void CHMSEditFeeDateDialog::OnDateChange(){
	
} */
/*void CHMSEditFeeDateDialog::OnDateSetfocus(){
	
} */
/*void CHMSEditFeeDateDialog::OnDateKillfocus(){
	
} */
int CHMSEditFeeDateDialog::OnDateCheckValue(){
	return 0;
} 
void CHMSEditFeeDateDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nInvoiceNo;
	int nSel;

	if (m_wndList.GetItemCount() == 0)
		return;

	if (m_wndList.GetItemCount() == 1)
	{
		nInvoiceNo = ToLong(m_wndList.GetItemText(0, 0));
	}
	else
	{
		nSel = m_wndList.GetCurSel();
		if (nSel < 0)
			return;
	}

	pMF->BeginTransaction();

	m_hms_fee_invoiceTbl.SetValue(_T("hfe_createddate"), m_szDate);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_updateddate"), m_szDate);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_date"), m_szDate);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_lockeddate"), m_szDate);

	szSQL = m_hms_fee_invoiceTbl.GetUpdateSQL();
	CString szWhere;
 	szWhere.Format(_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND hfe_type='I' AND hfe_status='P' "),
		           m_nDocNo, nInvoiceNo);
	//MessageBox(szSQL);
	szSQL += szWhere;

	int ret = pMF->ExecSQL(szSQL);

	if (ret <= 0)
	{
		ShowMessageBox(_T("Error while updating value!"), MB_ICONERROR | MB_OK);
		pMF->Rollback();
	}

	pMF->Commit();
	OnListLoadData();
} 
void CHMSEditFeeDateDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSEditFeeDateDialog::OnListDblClick(){
	
} 
void CHMSEditFeeDateDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	m_szDate = m_wndList.GetItemText(nSel, 3);
	UpdateData(FALSE);
} 
int CHMSEditFeeDateDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEditFeeDateDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hfe_invoiceno as invoiceno, ") \
		         _T("hfe_createddate as createddate, ") \
				 _T("hfe_updateddate as updateddate, ") \
				 _T("hfe_date as invoicedate, ") \
				 _T("hfe_lockeddate as lockeddate ") \
				 _T("FROM hms_fee_invoice ") \
				 _T("WHERE hfe_docno=%ld and hfe_status='P' and hfe_type='I'"), m_nDocNo);

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("CreatedDate")), 
			rs.GetValue(_T("UpdatedDate")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("LockedDate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSEditFeeDateDialog::OnAddHMSEditFeeDateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditFeeDateDialog::OnEditHMSEditFeeDateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditFeeDateDialog::OnDeleteHMSEditFeeDateDialog(){
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
 		OnCancelHMSEditFeeDateDialog();
 	}
	return 0;
}
int CHMSEditFeeDateDialog::OnSaveHMSEditFeeDateDialog(){
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
 		//OnHMSEditFeeDateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEditFeeDateDialog::OnCancelHMSEditFeeDateDialog(){
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
int CHMSEditFeeDateDialog::OnHMSEditFeeDateDialogListLoadData(){
	return 0;
}
