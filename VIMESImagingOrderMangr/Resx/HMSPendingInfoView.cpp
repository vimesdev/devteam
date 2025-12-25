#include "HMSPendingInfoView.h"
#include "MainFrm.h"
static void _OnClearSelectFnc(CWnd *pWnd){
	CHMSPendingInfoView *pVw = (CHMSPendingInfoView *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnCallSelectFnc(CWnd *pWnd){
	CHMSPendingInfoView *pVw = (CHMSPendingInfoView *)pWnd;
	pVw->OnCallSelect();
} 
static long _OnPendingListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPendingInfoView*)pWnd)->OnPendingListLoadData();
} 
static void _OnPendingListDblClickFnc(CWnd *pWnd){
	((CHMSPendingInfoView*)pWnd)->OnPendingListDblClick();
} 
static void _OnPendingListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPendingInfoView*)pWnd)->OnPendingListSelectChange(nOldItem, nNewItem);
} 
static int _OnPendingListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnPendingListDeleteItem();
} 
static long _OnCancelListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPendingInfoView*)pWnd)->OnCancelListLoadData();
} 
static void _OnCancelListDblClickFnc(CWnd *pWnd){
	((CHMSPendingInfoView*)pWnd)->OnCancelListDblClick();
} 
static void _OnCancelListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPendingInfoView*)pWnd)->OnCancelListSelectChange(nOldItem, nNewItem);
} 
static int _OnCancelListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnCancelListDeleteItem();
} 
static int _OnAddHMSPendingInfoViewFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnAddHMSPendingInfoView();
} 
static int _OnEditHMSPendingInfoViewFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnEditHMSPendingInfoView();
} 
static int _OnDeleteHMSPendingInfoViewFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnDeleteHMSPendingInfoView();
} 
static int _OnSaveHMSPendingInfoViewFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnSaveHMSPendingInfoView();
} 
static int _OnCancelHMSPendingInfoViewFnc(CWnd *pWnd){
	 return ((CHMSPendingInfoView*)pWnd)->OnCancelHMSPendingInfoView();
} 
CHMSPendingInfoView::CHMSPendingInfoView(){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSPendingInfoView::~CHMSPendingInfoView(){
}
void CHMSPendingInfoView::OnCreateComponents(){
	m_wndPending.Create(this, _T("Pending"), 5, 35, 505, 215);
	m_wndClear.Create(this, _T("Clear"), 90, 5, 170, 30);
	m_wndCancel.Create(this, _T("Cancel"), 509, 36, 1010, 216);
	m_wndCall.Create(this, _T("Call"), 5, 5, 85, 30);
	m_wndPendingList.Create(this,10, 62, 500, 212); 
	m_wndCancelList.Create(this,515, 60, 1005, 210); 

}
void CHMSPendingInfoView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndPendingList.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 100);
	m_wndPendingList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPendingList.InsertColumn(2, _T("Recept No"), CFMT_TEXT, 70);


	m_wndCancelList.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 100);
	m_wndCancelList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndCancelList.InsertColumn(2, _T("Recept No"), CFMT_TEXT, 70);

}
void CHMSPendingInfoView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	m_wndCall.SetEvent(WE_CLICK, _OnCallSelectFnc);
	m_wndPendingList.SetEvent(WE_SELCHANGE, _OnPendingListSelectChangeFnc);
	m_wndPendingList.SetEvent(WE_LOADDATA, _OnPendingListLoadDataFnc);
	m_wndPendingList.SetEvent(WE_DBLCLICK, _OnPendingListDblClickFnc);
	m_wndPendingList.AddEvent(1, _T("Delete"), _OnPendingListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndCancelList.SetEvent(WE_SELCHANGE, _OnCancelListSelectChangeFnc);
	m_wndCancelList.SetEvent(WE_LOADDATA, _OnCancelListLoadDataFnc);
	m_wndCancelList.SetEvent(WE_DBLCLICK, _OnCancelListDblClickFnc);
	m_wndCancelList.AddEvent(1, _T("Delete"), _OnCancelListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPendingInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPendingInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPendingInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPendingInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPendingInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPendingInfoView::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPendingInfoView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPendingInfoView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPendingInfoView::SetDefaultValues(){


}
int CHMSPendingInfoView::SetMode(int nMode){
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
void CHMSPendingInfoView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPendingInfoView::OnCallSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPendingInfoView::OnPendingListDblClick(){
	
} 
void CHMSPendingInfoView::OnPendingListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPendingInfoView::OnPendingListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPendingInfoView::OnPendingListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPendingList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPendingList.AddItems(
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("ReceptNo")), NULL);
		rs.MoveNext();
	}
	m_wndPendingList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPendingInfoView::OnCancelListDblClick(){
	
} 
void CHMSPendingInfoView::OnCancelListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPendingInfoView::OnCancelListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPendingInfoView::OnCancelListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCancelList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCancelList.AddItems(
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("ReceptNo")), NULL);
		rs.MoveNext();
	}
	m_wndCancelList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPendingInfoView::OnAddHMSPendingInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPendingInfoView::OnEditHMSPendingInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPendingInfoView::OnDeleteHMSPendingInfoView(){
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
 		OnCancelHMSPendingInfoView();
 	}
	return 0;
}
int CHMSPendingInfoView::OnSaveHMSPendingInfoView(){
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
 		//OnHMSPendingInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPendingInfoView::OnCancelHMSPendingInfoView(){
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
int CHMSPendingInfoView::OnHMSPendingInfoViewListLoadData(){
	return 0;
}
