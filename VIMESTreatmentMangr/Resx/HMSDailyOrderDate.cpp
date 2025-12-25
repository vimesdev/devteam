#include "HMSDailyOrderDate.h"
#include "MainFrm.h"
static long _OnOrderDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderDate*)pWnd)->OnOrderDateLoadData();
} 
static void _OnOrderDateDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderDate*)pWnd)->OnOrderDateDblClick();
} 
static void _OnOrderDateSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderDate*)pWnd)->OnOrderDateSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderDateDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnOrderDateDeleteItem();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderDate *pVw = (CHMSDailyOrderDate *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyOrderDate *pVw = (CHMSDailyOrderDate *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnAddHMSDailyOrderDate();
} 
static int _OnEditHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnEditHMSDailyOrderDate();
} 
static int _OnDeleteHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnDeleteHMSDailyOrderDate();
} 
static int _OnSaveHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnSaveHMSDailyOrderDate();
} 
static int _OnCancelHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnCancelHMSDailyOrderDate();
} 
CHMSDailyOrderDate::CHMSDailyOrderDate(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 215;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CHMSDailyOrderDate::~CHMSDailyOrderDate(){
}
void CHMSDailyOrderDate::OnCreateComponents(){
	m_wndOrderDateList.Create(this, _T("Order Date List"), 5, 5, 205, 125);
	m_wndOrderDate.Create(this,10, 30, 200, 120); 
	m_wndOk.Create(this, _T("&Ok"), 50, 130, 125, 155);
	m_wndCancel.Create(this, _T("&Cancel"), 130, 130, 205, 155);

}
void CHMSDailyOrderDate::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndOrderDate.InsertColumn(0, _T("Date"), CFMT_DATE, 180);

}
void CHMSDailyOrderDate::OnSetWindowEvents(){
	m_wndOrderDate.SetEvent(WE_SELCHANGE, _OnOrderDateSelectChangeFnc);
	m_wndOrderDate.SetEvent(WE_LOADDATA, _OnOrderDateLoadDataFnc);
	m_wndOrderDate.SetEvent(WE_DBLCLICK, _OnOrderDateDblClickFnc);
	m_wndOrderDate.AddEvent(1, _T("Delete"), _OnOrderDateDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSDailyOrderDate::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDailyOrderDate::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderDate::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderDate::SetDefaultValues(){


}
int CHMSDailyOrderDate::SetMode(int nMode){
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
void CHMSDailyOrderDate::OnOrderDateDblClick(){
	
} 
void CHMSDailyOrderDate::OnOrderDateSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderDate::OnOrderDateDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderDate::OnOrderDateLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderDate.BeginLoad(); 
	m_wndOrderDate.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderDate.AddItems(
			rs.GetValue(_T("Date")), NULL);
		rs.MoveNext();
	}
	m_wndOrderDate.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDailyOrderDate::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderDate::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderDate::OnAddHMSDailyOrderDate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDailyOrderDate::OnEditHMSDailyOrderDate(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderDate::OnDeleteHMSDailyOrderDate(){
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
 		OnCancelHMSDailyOrderDate(); 
 	}
	return 0;
}
int CHMSDailyOrderDate::OnSaveHMSDailyOrderDate(){
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
 		//OnHMSDailyOrderDateListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDailyOrderDate::OnCancelHMSDailyOrderDate(){
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
int CHMSDailyOrderDate::OnHMSDailyOrderDateListLoadData(){
	return 0;
}
