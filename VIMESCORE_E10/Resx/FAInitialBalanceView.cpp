#include "FAInitialBalanceView.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAInitialBalanceView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAInitialBalanceView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAInitialBalanceView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnListDeleteItem();
} 
static long _OnDetailListLoadDataFnc(CWnd *pWnd){
	return ((CFAInitialBalanceView*)pWnd)->OnDetailListLoadData();
} 
static void _OnDetailListDblClickFnc(CWnd *pWnd){
	((CFAInitialBalanceView*)pWnd)->OnDetailListDblClick();
} 
static void _OnDetailListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAInitialBalanceView*)pWnd)->OnDetailListSelectChange(nOldItem, nNewItem);
} 
static int _OnDetailListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnDetailListDeleteItem();
} 
static int _OnAddFAInitialBalanceViewFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnAddFAInitialBalanceView();
} 
static int _OnEditFAInitialBalanceViewFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnEditFAInitialBalanceView();
} 
static int _OnDeleteFAInitialBalanceViewFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnDeleteFAInitialBalanceView();
} 
static int _OnSaveFAInitialBalanceViewFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnSaveFAInitialBalanceView();
} 
static int _OnCancelFAInitialBalanceViewFnc(CWnd *pWnd){
	 return ((CFAInitialBalanceView*)pWnd)->OnCancelFAInitialBalanceView();
} 
CFAInitialBalanceView::CFAInitialBalanceView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAInitialBalanceView::~CFAInitialBalanceView(){
}
void CFAInitialBalanceView::OnCreateComponents(){
	m_wndFAInitialBalance.Create(this, _T("FAInitialBalance"), 5, 5, 800, 415);
	m_wndDetailGroup.Create(this, _T("DetailGroup"), 5, 420, 800, 602);
	m_wndList.Create(this,10, 30, 795, 410); 
	m_wndDetailList.Create(this,10, 444, 795, 594); 

}
void CFAInitialBalanceView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Account No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Account Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Debit"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(3, _T("Credit"), CFMT_MONEY, 100);


	m_wndDetailList.InsertColumn(0, _T("Chapter"), CFMT_TEXT, 300);
	m_wndDetailList.InsertColumn(1, _T("Debit"), CFMT_MONEY, 100);
	m_wndDetailList.InsertColumn(2, _T("Credit"), CFMT_MONEY, 100);

}
void CFAInitialBalanceView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDetailList.SetEvent(WE_SELCHANGE, _OnDetailListSelectChangeFnc);
	m_wndDetailList.SetEvent(WE_LOADDATA, _OnDetailListLoadDataFnc);
	m_wndDetailList.SetEvent(WE_DBLCLICK, _OnDetailListDblClickFnc);
	m_wndDetailList.AddEvent(1, _T("Delete"), _OnDetailListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAInitialBalanceViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAInitialBalanceViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAInitialBalanceViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAInitialBalanceViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAInitialBalanceViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAInitialBalanceView::OnDoDataExchange(CDataExchange* pDX){

}
void CFAInitialBalanceView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAInitialBalanceView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAInitialBalanceView::SetDefaultValues(){


}
int CFAInitialBalanceView::SetMode(int nMode){
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
void CFAInitialBalanceView::OnListDblClick(){
	
} 
void CFAInitialBalanceView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAInitialBalanceView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAInitialBalanceView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("AccountNo")), 
			rs.GetValue(_T("AccountName")), 
			rs.GetValue(_T("Debit")), 
			rs.GetValue(_T("Credit")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CFAInitialBalanceView::OnDetailListDblClick(){
	
} 
void CFAInitialBalanceView::OnDetailListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAInitialBalanceView::OnDetailListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAInitialBalanceView::OnDetailListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDetailList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDetailList.AddItems(
			rs.GetValue(_T("Chapter")), 
			rs.GetValue(_T("Debit")), 
			rs.GetValue(_T("Credit")), NULL);
		rs.MoveNext();
	}
	m_wndDetailList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CFAInitialBalanceView::OnAddFAInitialBalanceView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAInitialBalanceView::OnEditFAInitialBalanceView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAInitialBalanceView::OnDeleteFAInitialBalanceView(){
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
 		OnCancelFAInitialBalanceView();
 	}
	return 0;
}
int CFAInitialBalanceView::OnSaveFAInitialBalanceView(){
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
 		//OnFAInitialBalanceViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAInitialBalanceView::OnCancelFAInitialBalanceView(){
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
int CFAInitialBalanceView::OnFAInitialBalanceViewListLoadData(){
	return 0;
}
