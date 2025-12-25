#include "FACashLineView.h"
#include "MainFrm.h"
static long _Oncontrol_0LoadDataFnc(CWnd *pWnd){
	return ((CFACashLineView*)pWnd)->Oncontrol_0LoadData();
} 
static void _Oncontrol_0DblClickFnc(CWnd *pWnd){
	((CFACashLineView*)pWnd)->Oncontrol_0DblClick();
} 
static void _Oncontrol_0SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFACashLineView*)pWnd)->Oncontrol_0SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_0DeleteItemFnc(CWnd *pWnd){
	 return ((CFACashLineView*)pWnd)->Oncontrol_0DeleteItem();
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
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFACashLineView::~CFACashLineView(){
}
void CFACashLineView::OnCreateComponents(){
	m_wndcontrol_0.Create(this,5, 5, 795, 400); 

}
void CFACashLineView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndcontrol_0.InsertColumn(0, _T("Description"), CFMT_TEXT, 300);
	m_wndcontrol_0.InsertColumn(1, _T("Debit Acct"), CFMT_TEXT, 70);
	m_wndcontrol_0.InsertColumn(2, _T("Credit Acct"), CFMT_TEXT, 70);
	m_wndcontrol_0.InsertColumn(3, _T("Amount"), CFMT_TEXT, 90);
	m_wndcontrol_0.InsertColumn(4, _T("Exchange"), CFMT_NUMBER, 90);

}
void CFACashLineView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndcontrol_0.SetEvent(WE_SELCHANGE, _Oncontrol_0SelectChangeFnc);
	m_wndcontrol_0.SetEvent(WE_LOADDATA, _Oncontrol_0LoadDataFnc);
	m_wndcontrol_0.SetEvent(WE_DBLCLICK, _Oncontrol_0DblClickFnc);
	m_wndcontrol_0.AddEvent(1, _T("Delete"), _Oncontrol_0DeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashLineViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashLineViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashLineViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashLineViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashLineViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFACashLineView::OnDoDataExchange(CDataExchange* pDX){

}
void CFACashLineView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashLineView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFACashLineView::SetDefaultValues(){


}
int CFACashLineView::SetMode(int nMode){
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
void CFACashLineView::Oncontrol_0DblClick(){
	
} 
void CFACashLineView::Oncontrol_0SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFACashLineView::Oncontrol_0DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFACashLineView::Oncontrol_0LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndcontrol_0.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_0.AddItems(
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("DebitAcct")), 
			rs.GetValue(_T("CreditAcct")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("Exchange")), NULL);
		rs.MoveNext();
	}
	m_wndcontrol_0.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CFACashLineView::OnAddFACashLineView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashLineView::OnEditFACashLineView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashLineView::OnDeleteFACashLineView(){
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
 		OnCancelFACashLineView();
 	}
	return 0;
}
int CFACashLineView::OnSaveFACashLineView(){
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
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFACashLineView::OnFACashLineViewListLoadData(){
	return 0;
}
