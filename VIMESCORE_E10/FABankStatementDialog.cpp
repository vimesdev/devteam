#include "FABankStatementDialog.h"
#include "MainFrame_E10.h"
#include "FABankStatementInputEntry.h"

static int _OnAddFABankStatementDialogFnc(CWnd *pWnd){
	 return ((CFABankStatementDialog*)pWnd)->OnAddFABankStatementDialog();
} 
static int _OnEditFABankStatementDialogFnc(CWnd *pWnd){
	 return ((CFABankStatementDialog*)pWnd)->OnEditFABankStatementDialog();
} 
static int _OnDeleteFABankStatementDialogFnc(CWnd *pWnd){
	 return ((CFABankStatementDialog*)pWnd)->OnDeleteFABankStatementDialog();
} 
static int _OnSaveFABankStatementDialogFnc(CWnd *pWnd){
	 return ((CFABankStatementDialog*)pWnd)->OnSaveFABankStatementDialog();
} 
static int _OnCancelFABankStatementDialogFnc(CWnd *pWnd){
	 return ((CFABankStatementDialog*)pWnd)->OnCancelFABankStatementDialog();
} 
CFABankStatementDialog::CFABankStatementDialog(CWnd *pParent, CString szDocType, long nInvoiceID, int nMode):
	CFAInvoice(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nInvoiceID = nInvoiceID;
	m_szDocType = szDocType;
	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CFABankStatementDialog::~CFABankStatementDialog(){
}
void CFABankStatementDialog::OnCreateComponents(){
	CFAInvoice::OnCreateComponents();
	m_wndGeneralView.m_szDocType = m_szDocType;

	
	m_wndGeneralView.Create(this);
	m_wndLines.Create(this);
	m_wndLines.m_wndParentView = this;
//	m_wndAdditionalInfoView.Create(this);
	m_wndTab.Create(this);
	m_wndTab.ModifyStyle(0, WS_TABSTOP);
	
	AddSection(&m_wndGeneralView, m_wndGeneralView.GetHeight());

	m_wndTab.Add(_T("FA_ACCOUNTING"), &m_wndLines);
//	m_wndTab.Add(_T("FA_ADDTIONINFORMATION"), &m_wndAdditionalInfoView);

	AddSection(&m_wndTab, 300);

	m_wndLines.m_wndParentView = this;
	
	m_wndTab.SetCurSel(0);
	
}
void CFABankStatementDialog::OnInitializeComponents(){
	CFAInvoice::OnInitializeComponents();

	m_fa_invoiceTbl.AddField(_T("FI_BANKACCOUNT_NO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_BANKNAME"), dfText, 254); 
	m_fa_invoiceTbl.AddField(_T("FI_PBANKACCOUNT_NO"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_PBANKNAME"), dfText, 254);
	m_fa_invoiceTbl.AddField(_T("FI_IDCARD"), dfText, 20); 
	m_fa_invoiceTbl.AddField(_T("FI_ISSUEDATE"), dfDate); 
	m_fa_invoiceTbl.AddField(_T("FI_ISSUEPLACE"), dfText, 254); 


	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	

}
void CFABankStatementDialog::OnSetWindowEvents(){
	CFAInvoice::OnSetWindowEvents();

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	SetMode(VM_NONE);

	
	m_wndLines.m_nInvoiceID = m_nInvoiceID;
	m_wndGeneralView.OnInitDialog();
	//m_wndAdditionalInfoView.OnInitDialog();
	m_wndLines.OnInitDialog();
	
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
		UpdatePostedLabel();
	}
	SetMode(nMode);

	RecalcLayout();
}
void CFABankStatementDialog::OnDoDataExchange(CDataExchange* pDX){
	CFAInvoice::OnDoDataExchange(pDX);

}
void CFABankStatementDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(m_nInvoiceID > 0)
	{
		LoadData(m_nInvoiceID);
		m_wndGeneralView.GetData(m_rsInvoice);
		m_wndLines.m_nInvoiceID = m_nInvoiceID;
	}
}
void CFABankStatementDialog::GetScreenToData(){
	CFAInvoice::GetScreenToData();
	m_wndGeneralView.SetData(&m_fa_invoiceTbl);

}
void CFABankStatementDialog::SetDefaultValues(){


}
int CFABankStatementDialog::SetMode(int nMode){
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
			CreateNewInvoice();
			GetDataToScreen();
			m_wndGeneralView.SetMode(VM_EDIT);
//			m_wndAdditionalInfoView.SetMode(VM_EDIT);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndGeneralView.SetMode(VM_EDIT);
	//		m_wndAdditionalInfoView.SetMode(VM_EDIT);
 			break;
 		case VM_VIEW: 
			
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndGeneralView.SetMode(VM_VIEW);
//			m_wndAdditionalInfoView.SetMode(VM_VIEW);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0,  -1);
 			SetDefaultValues();
			m_wndGeneralView.SetMode(VM_NONE);
//			m_wndAdditionalInfoView.SetMode(VM_NONE);
 			break;
 		};

		
 		UpdateData(FALSE);
 		return nOldMode;
}
int CFABankStatementDialog::OnAddFABankStatementDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankStatementDialog::OnEditFABankStatementDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankStatementDialog::OnDeleteFABankStatementDialog(){
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
 		OnCancelFABankStatementDialog();
 	}
	return 0;
}
int CFABankStatementDialog::OnSaveFABankStatementDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	CString szWhere;
	m_fa_invoiceTbl.SetValue(_T("fi_docaction"), _T("SAVED"));
 	szWhere.Format(_T(" WHERE fi_invoice_id=%ld"), m_nInvoiceID);
 	szSQL = m_fa_invoiceTbl.GetUpdateSQL(_T("fi_invoice_id,fi_createdby,fi_createddate"));
 	szSQL += szWhere;
 	
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		int nMode = GetMode();
 		SetMode(VM_VIEW);
		if(nMode == VM_ADD)
		{
			m_wndLines.m_nInvoiceID = m_nInvoiceID;
			m_wndLines.OnListAddItem();
		}

 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankStatementDialog::OnCancelFABankStatementDialog(){
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
int CFABankStatementDialog::OnFABankStatementDialogListLoadData(){
	return 0;
}



void CFABankStatementDialog::OnButtonClick(int nIndex)
{
	
	switch(nIndex)
	{
	case 0://add
		OnAdd();
		break;
	case 1: //edit
		OnEdit();
		break;
	case 2: //delete
		OnDelete();
		break;
	case 3: //save
		OnSave();
		break;
	case 4: //cancel
		OnDiscard();
		break;
	case 5:
		OnPrint();
		break;
	case 6:
		OnPost();
		break;
	case 7:
		OnClose();
		break;
	};
}


void CFABankStatementDialog::OnAdd()
{
	SetMode(VM_ADD);
}
void CFABankStatementDialog::OnEdit()
{
	SetMode(VM_EDIT);
}
void CFABankStatementDialog::OnDelete()
{
	
}
void CFABankStatementDialog::OnSave()
{
	OnSaveFABankStatementDialog();
}

void CFABankStatementDialog::OnDiscard()
{
	CancelInvoice();
	m_wndGeneralView.OnCancelFABankStatementGeneralView();
	SetMode(m_wndGeneralView.GetMode());

}

void CFABankStatementDialog::OnPrint()
{

}

void CFABankStatementDialog::OnPost()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	int ret = ShowMessageBox(_T("Do you want to post"), MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return;
	szSQL.Format(_T("FA_INVOICE_POST(%ld, '%s') "), m_nInvoiceID, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret >  0)
	{
		UpdatePostedLabel();
		return;

	}
	else
	{
		ShowMessageBox(_T("Post failed"));
	}
}



void CFABankStatementDialog::OnClose()
{
	CGuiDialog::OnCancel();
	CancelInvoice();
}





void CFABankStatementDialog::OnTaxIncluded(BOOL bFlag)
{
	m_wndLines.SetTaxIncluded(bFlag);
}