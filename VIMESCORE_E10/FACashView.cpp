#include "FACashView.h"
#include "MainFrame_E10.h"
#include "FACashInputEntry.h"
//#include "VIMESCORE_E10/VIMESCORE_E10R/FAPrintForm.h"

static int _OnAddFACashDialogFnc(CWnd *pWnd){
	 return ((CFACashDialog*)pWnd)->OnAddFACashDialog();
} 
static int _OnEditFACashDialogFnc(CWnd *pWnd){
	 return ((CFACashDialog*)pWnd)->OnEditFACashDialog();
} 
static int _OnDeleteFACashDialogFnc(CWnd *pWnd){
	 return ((CFACashDialog*)pWnd)->OnDeleteFACashDialog();
} 
static int _OnSaveFACashDialogFnc(CWnd *pWnd){
	 return ((CFACashDialog*)pWnd)->OnSaveFACashDialog();
} 
static int _OnCancelFACashDialogFnc(CWnd *pWnd){
	 return ((CFACashDialog*)pWnd)->OnCancelFACashDialog();
} 
CFACashDialog::CFACashDialog(CWnd *pParent, CString szDocType, long nInvoiceID, int nMode):
	CFAInvoice(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nInvoiceID = nInvoiceID;
	m_szDocType = szDocType;
	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CFACashDialog::~CFACashDialog(){
}
void CFACashDialog::OnCreateComponents(){
	CFAInvoice::OnCreateComponents();
	m_wndGeneralView.m_szDocType = m_szDocType;

	
	m_wndGeneralView.Create(this);
	m_wndLines.Create(this);
	m_wndLines.m_wndParentView = this;
	m_wndTab.Create(this);
	m_wndTab.ModifyStyle(0, WS_TABSTOP);
	
	AddSection(&m_wndGeneralView, m_wndGeneralView.GetHeight());

	m_wndTab.Add(_T("FA_ACCOUNTING"), &m_wndLines);
	AddSection(&m_wndTab, 355);

	m_wndLines.m_wndParentView = this;

	
}
void CFACashDialog::OnInitializeComponents(){
	CFAInvoice::OnInitializeComponents();
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	

}
void CFACashDialog::OnSetWindowEvents(){
	CFAInvoice::OnSetWindowEvents();

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	SetMode(VM_NONE);

	
	m_wndLines.m_nInvoiceID = m_nInvoiceID;
	m_wndGeneralView.OnInitDialog();
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
void CFACashDialog::OnDoDataExchange(CDataExchange* pDX){
	CFAInvoice::OnDoDataExchange(pDX);

}
void CFACashDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(m_nInvoiceID > 0)
	{
		LoadData(m_nInvoiceID);
		m_wndGeneralView.GetData(m_rsInvoice);
		m_wndLines.m_nInvoiceID = m_nInvoiceID;
	}
}
void CFACashDialog::GetScreenToData(){
	CFAInvoice::GetScreenToData();
	m_wndGeneralView.SetData(&m_fa_invoiceTbl);

}
void CFACashDialog::SetDefaultValues(){


}
int CFACashDialog::SetMode(int nMode){
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
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndGeneralView.SetMode(VM_EDIT);
 			break;
 		case VM_VIEW: 
			
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndGeneralView.SetMode(VM_VIEW);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0,  -1);
 			SetDefaultValues();
			m_wndGeneralView.SetMode(VM_NONE);
 			break;
 		};

		
 		UpdateData(FALSE);
 		return nOldMode;
}
int CFACashDialog::OnAddFACashDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashDialog::OnEditFACashDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashDialog::OnDeleteFACashDialog(){
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
 		OnCancelFACashDialog();
 	}
	return 0;
}
int CFACashDialog::OnSaveFACashDialog(){
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
int CFACashDialog::OnCancelFACashDialog(){
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
int CFACashDialog::OnFACashDialogListLoadData(){
	return 0;
}



void CFACashDialog::OnButtonClick(int nIndex)
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


void CFACashDialog::OnAdd()
{
	SetMode(VM_ADD);
}
void CFACashDialog::OnEdit()
{
	SetMode(VM_EDIT);
}
void CFACashDialog::OnDelete()
{
	OnDeleteFACashDialog();
}
void CFACashDialog::OnSave()
{
	OnSaveFACashDialog();
}

void CFACashDialog::OnDiscard()
{
	CancelInvoice();
	m_wndGeneralView.OnCancelFACashGeneralView();
	SetMode(m_wndGeneralView.GetMode());

}

void CFACashDialog::OnPrint()
{
//	CFAPrintForm printer;
//	printer.CASH_PrintReceipt(m_nInvoiceID);
}

void CFACashDialog::OnPost()
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



void CFACashDialog::OnClose()
{
	CGuiDialog::OnCancel();
	CancelInvoice();
}





void CFACashDialog::OnTaxIncluded(bool bFlag)
{
	m_wndLines.SetTaxIncluded(bFlag);
}