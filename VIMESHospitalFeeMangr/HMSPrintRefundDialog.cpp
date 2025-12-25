#include "HMSPrintRefundDialog.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrintRefundDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrintRefundDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrintRefundDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrintRefundDialog *pVw = (CHMSPrintRefundDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrintRefundDialog *pVw = (CHMSPrintRefundDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrintRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnAddHMSPrintRefundDialog();
} 
static int _OnEditHMSPrintRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnEditHMSPrintRefundDialog();
} 
static int _OnDeleteHMSPrintRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnDeleteHMSPrintRefundDialog();
} 
static int _OnSaveHMSPrintRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnSaveHMSPrintRefundDialog();
}
static int _OnCancelHMSPrintRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintRefundDialog*)pWnd)->OnCancelHMSPrintRefundDialog();
}

static int _OnPrintRefundFnc(CWnd *pWnd){
	return ((CHMSPrintRefundDialog*)pWnd)->OnPrintRefund();
}

CHMSPrintRefundDialog::CHMSPrintRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CHMSPrintRefundDialog::~CHMSPrintRefundDialog(){
}
void CHMSPrintRefundDialog::OnCreateComponents()
{
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 430, 215);
	m_wndList.Create(this,10, 30, 425, 210); 
	m_wndPrint.Create(this, _T("&Print"), 225, 220, 325, 245);
	m_wndClose.Create(this, _T("&Close"), 330, 220, 430, 245);

}
void CHMSPrintRefundDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Receipt No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_MONEY, 120);

	m_hms_invfeectlTbl.SetTableName(_T("hms_invfeectl"));
	m_hms_invfeectlTbl.AddField(_T("hifc_userid"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvdate"), dfDate); 
	m_hms_invfeectlTbl.AddField(_T("hifc_examfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_drugfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_pcmsfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_advance"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_refund"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_remission"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_objects"), dfText, 15); 

}
void CHMSPrintRefundDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Print"), _OnPrintRefundFnc);

	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	SetMode(GetMode());
	OnListLoadData();

	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
	}
}
void CHMSPrintRefundDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPrintRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrintRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrintRefundDialog::SetDefaultValues(){


}
int CHMSPrintRefundDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
void CHMSPrintRefundDialog::OnListDblClick(){
	
} 
void CHMSPrintRefundDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrintRefundDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrintRefundDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" select hfe_docno as docno,") \
				_T("        hfe_invoiceno as invoiceno,") \
				_T("        hfe_refidx as refidx,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hfe_amount as amount") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_fee_refund on(hfe_docno=hd_docno)") \
				_T(" where hfe_docno=%ld and hfe_refidx=%ld"),
				m_nDocNo, m_nInvoiceNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("invoiceno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSPrintRefundDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	long nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	//pMF->PrintRefund(nInvoiceNo, true, false, true);
	pMF->PrintDetailRefundInvoice(nInvoiceNo, true, true);
} 
void CHMSPrintRefundDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSPrintRefundDialog::OnAddHMSPrintRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPrintRefundDialog::OnEditHMSPrintRefundDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrintRefundDialog::OnDeleteHMSPrintRefundDialog(){
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
 		OnCancelHMSPrintRefundDialog(); 
 	}
	return 0;
}
int CHMSPrintRefundDialog::OnSaveHMSPrintRefundDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_invfeectlTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_invfeectlTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrintRefundDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrintRefundDialog::OnCancelHMSPrintRefundDialog(){
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
int CHMSPrintRefundDialog::OnHMSPrintRefundDialogListLoadData(){
	return 0;
}

int CHMSPrintRefundDialog::OnPrintRefund()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	OnPrintSelect();
	return 0;
}