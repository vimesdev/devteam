#include "FACashLineView.h"
#include "MainFrame_E10.h"
#include "FACashInputEntry.h"
#include "FAInvoice.h"
#include ".\facashlineview.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFACashLineView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFACashLineView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFACashLineView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnListDeleteItem();
} 
static int _OnAddFACashLineViewFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnAddFACashLineView();
} 
static int _OnEditFACashLineViewFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnEditFACashLineView();
} 
static int _OnDeleteFACashLineViewFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnDeleteFACashLineView();
} 
static int _OnSaveFACashLineViewFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnSaveFACashLineView();
} 
static int _OnCancelFACashLineViewFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->OnCancelFACashLineView();
} 
CFACashLineView::CFACashLineView(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 350;
	SetDefaultValues();
	m_bExchange = false;
	m_bIsTaxIncluded = true;
	m_wndParentView = NULL;
	m_nInvoiceID = 0;

}
CFACashLineView::~CFACashLineView(){
}
void CFACashLineView::OnCreateComponents(){
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,5, 5, 795, 355); 

}
void CFACashLineView::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);//line
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Debit Acct"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Credit Acct"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Exchange"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Tax Acct"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("Tax Rate"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("Tax Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T(""), CFMT_MONEY, 20);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
}
void CFACashLineView::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc);
	
	SetMode(VM_NONE);
	RecalcColumnWidths();

	OnListLoadData();
}
void CFACashLineView::OnDoDataExchange(CDataExchange* pDX){

}
void CFACashLineView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashLineView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFACashLineView::SetDefaultValues(){


}
int CFACashLineView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFACashLineView::OnListDblClick(){
	
} 
void CFACashLineView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nInvoiceLine_ID = str2long( m_wndList.GetItemText(nNewItem, 0));
	
} 
int CFACashLineView::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CFAInvoice *pInvoice = (CFAInvoice*) m_wndParentView;

	if(pInvoice == NULL || pInvoice->GetPostedStatus() != _T("N"))
		return -1;
	
	long nInvoiceID = pInvoice->m_nInvoiceID;

	if(nInvoiceID <= 0)
		return 0;

	CFACashInputEntry *newPopup = new CFACashInputEntry(this, pInvoice->GetDocType(), nInvoiceID, VM_ADD, m_bIsTaxIncluded);
	newPopup->ShowPopup(&m_wndList);
	 return 0;
}

int CFACashLineView::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;


	CFAInvoice *pInvoice = (CFAInvoice*) m_wndParentView;

	if(pInvoice == NULL || pInvoice->GetPostedStatus() != _T("N"))
		return -1;
	
	long nInvoiceID = pInvoice->m_nInvoiceID;
	m_nInvoiceLine_ID  = str2long(m_wndList.GetItemText(nSel, 0));
	if(nInvoiceID <= 0)
		return 0;

	CFACashInputEntry *newPopup = new CFACashInputEntry(this, pInvoice->GetDocType(), nInvoiceID, VM_EDIT, m_bIsTaxIncluded);
	newPopup->m_nInvoiceLine_ID = m_nInvoiceLine_ID;
	newPopup->ShowPopup(&m_wndList);
	 return 0;
}
int CFACashLineView::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;


	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	m_nInvoiceLine_ID = str2long( m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("FA_INVOICE_DELLINE(%ld, %ld, '%s') "), m_nInvoiceID, m_nInvoiceLine_ID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		m_wndList.DeleteItem(nSel);
	}

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_nInvoiceLine_ID = str2long( m_wndList.GetItemText(i, 0));
			szSQL.Format(_T("FA_INVOICE_DELLINE(%ld, %ld, '%s') "), m_nInvoiceID, m_nInvoiceLine_ID, pMF->GetCurrentUser());
			int ret = str2int(pMF->ExecDML(szSQL));
			if(ret <= 0)
			{
				switch(ret)
				{
				case 0:
					break;
				case -1:
					break;
				case -2000:
					break;
				}
				return 0;
			}
		}
	}
	OnListLoadData();
	return 1;
}
long CFACashLineView::OnListLoadData(){
	
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT * FROM fa_invoiceline WHERE fil_invoice_id = %ld ORDER BY fil_line"), m_nInvoiceID);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%s: %d"), szSQL, nCount);

	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("fil_invoiceline_id")), 
			rs.GetValue(_T("fil_Description")), 
			rs.GetValue(_T("fil_Debit_Acct")), 
			rs.GetValue(_T("fil_Credit_Acct")), 
			rs.GetValue(_T("fil_Amount")), 
			rs.GetValue(_T("FIL_EXCHANGEAMOUNT")), 
			rs.GetValue(_T("fil_Tax_acct")),
			rs.GetValue(_T("fil_TaxRate")),
			rs.GetValue(_T("FIL_TAXAMOUNT")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CFACashLineView::OnAddFACashLineView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashLineView::OnEditFACashLineView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashLineView::OnDeleteFACashLineView(){
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
 		OnCancelFACashLineView();
 	}
	return 0;
}
int CFACashLineView::OnSaveFACashLineView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnFACashLineViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFACashLineView::OnCancelFACashLineView(){
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
int CFACashLineView::OnFACashLineViewListLoadData(){
	return 0;
}

LRESULT CFACashLineView::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(message == WM_REFRESH)
	{
		OnListLoadData();
		return 0;
	}
	return CGuiView::WindowProc(message, wParam, lParam);
}


void CFACashLineView::RecalcColumnWidths()
{
	if(m_bExchange)
	{
		m_wndList.SetColumnWidth(5, 90);
	}
	else
	{
		m_wndList.SetColumnWidth(5, 0);
	}

	if(m_bIsTaxIncluded)
	{
		m_wndList.SetColumnWidth(6, 70);
		m_wndList.SetColumnWidth(7, 50);
		m_wndList.SetColumnWidth(8, 80);
		m_wndList.SetColumnWidth(9, 80);
	}
	else
	{
		m_wndList.SetColumnWidth(6, 0);
		m_wndList.SetColumnWidth(7, 0);
		m_wndList.SetColumnWidth(8, 0);
		m_wndList.SetColumnWidth(9, 0);
	}
}


void CFACashLineView::SetTaxIncluded(bool bFlag)
{
	m_bIsTaxIncluded = bFlag;
	RecalcColumnWidths();
}