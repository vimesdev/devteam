#include "FAInvoice.h"
#include "MainFrame_E10.h"
#include ".\fainvoice.h"

#define PANE_HEADER_HEIGHT	30
#define PANE_FOOTER_HEIGHT	40
#define PANE_HEADER_BKCOLOR	RGB(235, 235, 235)
#define PANE_HEADER_TEXTCOLOR RGB(128, 128, 128)
#define PANE_FOOTER_BKCOLOR	RGB(100, 100, 100)
#define PANE_FOOTER_TEXTCOLOR RGB(255 ,255 , 255)


static void _OnButtonSelectFnc(CWnd *pWnd){
	CFAInvoice *pVw = (CFAInvoice *)pWnd;
	pVw->OnButtonSelect();
}




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
CFAInvoice::CFAInvoice(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nInvoiceID = 0;
	m_rsInvoice = NULL;
	SetAutoCalcSize(false);
	m_szDocType.Empty();
}
CFAInvoice::~CFAInvoice(){
	if(m_rsInvoice) delete m_rsInvoice;
}
void CFAInvoice::OnCreateComponents(){
	
}
void CFAInvoice::OnInitializeComponents(){

	
	CreateButton(_T("&Add"), 80);
	CreateButton(_T("&Edit"), 80);
	CreateButton(_T("&Delete"), 80);
	CreateButton(_T("&Save"), 80);
	CreateButton(_T("&Discard"), 80);
	CreateButton(_T("Pr&int"), 80);
	CreateButton(_T("FA_POST"), 80);
	CreateButton(_T("&Close"), 80);


	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_fa_invoiceTbl.SetTableName(_T("fa_invoice"));
	m_fa_invoiceTbl.AddField(_T("FI_INVOICE_ID"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_ORG_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_CLIENT_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_ISACTIVE"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_INVOICENO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_INVOICEDATE"), dfDateTime); 
	m_fa_invoiceTbl.AddField(_T("FI_ACCTDATE"), dfDate); 
	m_fa_invoiceTbl.AddField(_T("FI_ISDISCOUNT"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_CURRENCY_ID"), dfText, 3); 
	m_fa_invoiceTbl.AddField(_T("FI_EXCHANGERATE"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_DOCTYPE"), dfText, 10); 
	m_fa_invoiceTbl.AddField(_T("FI_DOCUMENTNO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_DOCSTATUS"), dfText, 10); 
	m_fa_invoiceTbl.AddField(_T("FI_DOCACTION"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_REFERENCE"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_PROCESSING"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_PROCESSED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_POSTED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_ISPRINTED"), dfText, 1); 
	m_fa_invoiceTbl.AddField(_T("FI_PARTNER_ID"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_PARTNER_NAME"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_PARTNER_LOCATION"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_DESCRIPTION"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_REASON"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_NETAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_TAXAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_DISCOUNTAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_EXCHANGEAMOUNT"), dfLong); 
	m_fa_invoiceTbl.AddField(_T("FI_AMOUNT"), dfLong); 

}
void CFAInvoice::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_rsInvoice = new CRecord(&pMF->m_db);

	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

	for (int i =0; i < m_Buttons.GetCount(); i++)
	{
		CGuiButton* pBtn = (CGuiButton*)m_Buttons[i];
		pBtn->SetEvent(WE_CLICK, _OnButtonSelectFnc);
	}

}
void CFAInvoice::OnDoDataExchange(CDataExchange* pDX){

}
void CFAInvoice::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAInvoice::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" WHERE fi_invoice_id=%ld "), m_nInvoiceID);
	m_fa_invoiceTbl.Open(&pMF->m_db, szWhere);
	m_fa_invoiceTbl.SetValue(_T("fi_updatedby"), pMF->GetCurrentUser());
	m_fa_invoiceTbl.SetValue(_T("fi_updateddate"), pMF->GetSysDateTime());


}
void CFAInvoice::SetDefaultValues(){


}
int CFAInvoice::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAInvoice::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CFAInvoice::OnAddFAInvoice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAInvoice::OnEditFAInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAInvoice::OnDeleteFAInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CFAInvoice::OnFAInvoiceListLoadData(){
	return 0;
}



void CFAInvoice::RecalcLayout(){
	CRect rect, rc;
	CGuiDialog::GetClientRect(&rect);
	
	rc = rect;
	rc.top = rc.bottom - PANE_FOOTER_HEIGHT;
	rc.right = rc.left + PANE_FOOTER_HEIGHT;
	rc.DeflateRect(2, 2, 2, 2);

	rc = rect;
	rc.top = rc.bottom - PANE_FOOTER_HEIGHT;
	rc.left = rc.right;
	rc.DeflateRect(2, 2, 2, 2);
	for (int i = (int)m_Buttons.GetCount()-1; i >=0; i--)
	{
		CWnd *pButton = m_Buttons[i];
		CRect rcButton;
		pButton->GetWindowRect(&rcButton);
		rc.left = rc.right - rcButton.Width();
		
		pButton->MoveWindow(rc);
		rc.OffsetRect(-1*rc.Width()-1, 0);
	}
	
	rc = rect;
	rc.top += PANE_HEADER_HEIGHT;
	rc.bottom -= PANE_FOOTER_HEIGHT;
	for (int i =0; i < m_sectionWnds.GetCount(); i++)
	{
		CWnd *pWnd =  m_sectionWnds[i];
		int nHeight = m_sectionHeights[i];
		if(pWnd)
		{
			rc.bottom = rc.top+nHeight;
			pWnd->MoveWindow(rc);
			rc.OffsetRect(0, rc.Height());
		}
	}
	
}

void CFAInvoice::OnButtonSelect()
{
	for (int i =0; i < m_Buttons.GetCount(); i++)
	{
		CGuiButton* pBtn = (CGuiButton*) m_Buttons[i];
		if(pBtn == GetFocus())
		{
			OnButtonClick(i);
			break;
		}
	}
}


void CFAInvoice::OnButtonClick(int nIndex){
}


CGuiButton* CFAInvoice::CreateButton(LPCTSTR lpszCaption, int nWidth)
{
	CRect rc(0, 0, nWidth, 25);
	CGuiButton* newBtn = new CGuiButton();
	newBtn->Create(this, lpszCaption, rc);
	m_Buttons.Add(newBtn);
	return newBtn;
}


BEGIN_MESSAGE_MAP(CFAInvoice, CGuiDialog)
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CFAInvoice::OnSize(UINT nType, int cx, int cy)
{
	CGuiDialog::OnSize(nType, cx, cy);

	RecalcLayout();
}


void CFAInvoice::AddSection(CWnd *pWnd, int nHeight)
{
	m_sectionWnds.Add(pWnd);
	m_sectionHeights.Add(nHeight);
}


void CFAInvoice::SetSectionHeight(int nIndex, int nHeight)
{
	if(nIndex < 0 || nIndex > m_sectionHeights.GetCount())
		return;
	m_sectionHeights.SetAt(nIndex, nHeight);
}

long CFAInvoice::GetInvoiceID()
{
	return m_nInvoiceID;
}

CDbfMap* CFAInvoice::GetDbf()
{
	return &m_fa_invoiceTbl;
}

void CFAInvoice::LoadData(long nInvoiceID)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	m_nInvoiceID = nInvoiceID;
	szSQL.Format(_T("SELECT * FROM fa_invoice WHERE fi_invoice_id = %ld "), m_nInvoiceID);
_tprintf(_T("\r\n%s"), szSQL);
	if(m_rsInvoice == NULL)
	{
		m_rsInvoice = new CRecord(&pMF->m_db);
	}
	if(m_rsInvoice == NULL)
		return;
	m_rsInvoice->ExecSQL(szSQL);
	if(m_rsInvoice->IsEOF())
		m_nInvoiceID = 0;
}

long CFAInvoice::CreateNewInvoice()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("FA_INVOICE_CREATE('%s', '%s', '%s','%s') "),
		pMF->GetModuleID(), _T(""), pMF->GetCurrentUser(), m_szDocType);
	m_nInvoiceID = str2long(pMF->ExecDML(szSQL));
	if(m_nInvoiceID <= 0)
	{
		ShowMessageBox(_T("Cannot create new invoice"));
		return 0;
	}
	return m_nInvoiceID;
	
}

void CFAInvoice::CancelInvoice()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("DELETE FROM FA_INVOICE WHERE fi_invoice_id =%ld and fi_docaction='TMP' "), m_nInvoiceID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		szSQL.Format(_T("DELETE FROM FA_INVOICELINE WHERE fil_invoice_id =%ld "), m_nInvoiceID);
		pMF->ExecSQL(szSQL);

	}
	int nMode = GetMode();
	if(nMode == VM_EDIT)
		SetMode(VM_VIEW);
	else
		SetMode(VM_NONE);

}
CString CFAInvoice::GetDocType()
{
	return m_szDocType;
}


CString CFAInvoice::GetPostedStatus()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT fi_posted FROM fa_invoice WHERE fi_invoice_id = %ld "), m_nInvoiceID);
	rs.ExecSQL(szSQL);
	m_szStatus.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fi_posted"), m_szStatus);
	}
	return m_szStatus;
}




CGuiButton* CFAInvoice::GetButton(int nIndex)
{
	if(nIndex < 0 || nIndex >= m_Buttons.GetCount())
		return NULL;
	return (CGuiButton*) m_Buttons[nIndex];
}

void CFAInvoice::UpdatePostedLabel()
{
	CString szPostedLabel;
		CString szPosted = GetPostedStatus();
		if(szPosted == _T("Y"))
		{
			TranslateString(_T("FA_UNPOST"), szPostedLabel);
		}
		else
		{
			TranslateString(_T("FA_POST"), szPostedLabel);

		}
		CGuiButton* pWndPosted = GetButton(6);

		pWndPosted->SetWindowText(szPostedLabel);

}