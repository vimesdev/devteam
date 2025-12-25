#include "FAInvoiceLine.h"
#include "MainFrame_E10.h"
#include "FACashInputEntry.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAInvoiceLine*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAInvoiceLine*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAInvoiceLine*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnListDeleteItem();
} 
static int _OnAddFAInvoiceLineFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnAddFAInvoiceLine();
} 
static int _OnEditFAInvoiceLineFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnEditFAInvoiceLine();
} 
static int _OnDeleteFAInvoiceLineFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnDeleteFAInvoiceLine();
} 
static int _OnSaveFAInvoiceLineFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnSaveFAInvoiceLine();
} 
static int _OnCancelFAInvoiceLineFnc(CWnd *pWnd){
	 return ((CFAInvoiceLine*)pWnd)->OnCancelFAInvoiceLine();
} 
CFAInvoiceLine::CFAInvoiceLine(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 350;
	SetDefaultValues();
	m_bExchange = false;
	m_wndParentView = NULL;
}
CFAInvoiceLine::~CFAInvoiceLine(){
}
void CFAInvoiceLine::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 795, 355); 

}
void CFAInvoiceLine::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetAutoIndex(true);
	m_wndList.InsertColumn(0, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(1, _T("Debit Acct"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Credit Acct"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_TEXT, 90);

	m_wndList.InsertColumn(4, _T("Exchange"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
}
void CFAInvoiceLine::OnSetWindowEvents(){
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
	if(m_bExchange)
	{
		m_wndList.SetColumnWidth(4, 90);
	}
	else
	{
		m_wndList.SetColumnWidth(4, 0);
	}
}
void CFAInvoiceLine::OnDoDataExchange(CDataExchange* pDX){

}
void CFAInvoiceLine::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAInvoiceLine::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFAInvoiceLine::SetDefaultValues(){


}
int CFAInvoiceLine::SetMode(int nMode){
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
void CFAInvoiceLine::OnListDblClick(){
	
} 
void CFAInvoiceLine::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CFAInvoiceLine::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	 return 0;
}

int CFAInvoiceLine::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
int CFAInvoiceLine::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
long CFAInvoiceLine::OnListLoadData(){
	if(m_bExchange)
	{
		m_wndList.SetColumnWidth(4, 90);
	}
	else
	{
		m_wndList.SetColumnWidth(4, 0);
	}
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT * FROM fa_invoiceline WHERE fil_invoiceno = %ld ORDER BY fil_line"), m_nInvoiceID);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("fil_Description")), 
			rs.GetValue(_T("fil_DebitAcct")), 
			rs.GetValue(_T("fil_CreditAcct")), 
			rs.GetValue(_T("fil_Amount")), 
			rs.GetValue(_T("fil_Exchange")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CFAInvoiceLine::OnAddFAInvoiceLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAInvoiceLine::OnEditFAInvoiceLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAInvoiceLine::OnDeleteFAInvoiceLine(){
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
 		OnCancelFAInvoiceLine();
 	}
	return 0;
}
int CFAInvoiceLine::OnSaveFAInvoiceLine(){
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
 		//OnFAInvoiceLineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAInvoiceLine::OnCancelFAInvoiceLine(){
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
int CFAInvoiceLine::OnFAInvoiceLineListLoadData(){
	return 0;
}
