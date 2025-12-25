#include "FAInvoice.h"
#include "MainFrm.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAInvoice*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddFAInvoiceFnc(CWnd *pWnd){
	 return ((CFAInvoice*)pWnd)->OnAddFAInvoice();
} 
static int _OnEditFAInvoiceFnc(CWnd *pWnd){
	 return ((CFAInvoice*)pWnd)->OnEditFAInvoice();
} 
static int _OnDeleteFAInvoiceFnc(CWnd *pWnd){
	 return ((CFAInvoice*)pWnd)->OnDeleteFAInvoice();
} 
static int _OnSaveFAInvoiceFnc(CWnd *pWnd){
	 return ((CFAInvoice*)pWnd)->OnSaveFAInvoice();
} 
static int _OnCancelFAInvoiceFnc(CWnd *pWnd){
	 return ((CFAInvoice*)pWnd)->OnCancelFAInvoice();
} 
CFAInvoice::CFAInvoice(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CFAInvoice::~CFAInvoice(){
}
void CFAInvoice::OnCreateComponents(){
	m_wndGeneralInfo.Create(this, _T("GeneralInfo"), 6, 6, 801, 156);
	m_wndTab.Create(this,5, 160, 800, 410); 
	m_wndAddtionInfo.Create(this, _T("AdditionInfo"), 5, 415, 800, 565);

}
void CFAInvoice::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fa_invoiceTbl.SetTableName(_T("fa_invoice"));
	m_fa_invoiceTbl.AddField(_T("FAI_INVOICE_ID"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_ORG_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_CLIENT_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_ISACTIVE"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_INVOICENO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_INVOICEDATE"), dfDateTime); 
	m_fa_invoiceTbl.AddField(_T("FAI_ACCDATE"), dfDate); 
	m_fa_invoiceTbl.AddField(_T("FAI_ISDISCOUNT"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_CURRENCY_ID"), dfText, 3); 
	m_fa_invoiceTbl.AddField(_T("FAI_EXCHANGERATE"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_DOCTYPE"), dfText, 10); 
	m_fa_invoiceTbl.AddField(_T("FAI_DOCUMENTNO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_DOCSTATUS"), dfText, 10); 
	m_fa_invoiceTbl.AddField(_T("FAI_DOCACTION"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_REFERENCE"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FAI_PROCESSING"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_PROCESSED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_POSTED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_ISPRINTED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FAI_PARTNER_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FAI_PARTNER_NAME"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FAI_PARTNER_LOCATION"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FAI_DESCRIPTION"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FAI_REASON"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FAI_NETAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_TAXAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_DISCOUNTAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_EXCHANGEAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FAI_AMOUNT"), dfLong); 

}
void CFAInvoice::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAInvoiceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAInvoiceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAInvoiceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAInvoiceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAInvoiceFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAInvoice::OnDoDataExchange(CDataExchange* pDX){

}
void CFAInvoice::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAInvoice::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAInvoice::SetDefaultValues(){


}
int CFAInvoice::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CFAInvoice::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAInvoice::OnAddFAInvoice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAInvoice::OnEditFAInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAInvoice::OnDeleteFAInvoice(){
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
 		OnCancelFAInvoice();
 	}
	return 0;
}
int CFAInvoice::OnSaveFAInvoice(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_fa_invoiceTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_fa_invoiceTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAInvoiceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAInvoice::OnCancelFAInvoice(){
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
int CFAInvoice::OnFAInvoiceListLoadData(){
	return 0;
}
