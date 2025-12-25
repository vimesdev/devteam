#include "HMSConfirmInsuranceFeesDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSConfirmInsuranceFeesDialog *pVw = (CHMSConfirmInsuranceFeesDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSConfirmInsuranceFeesDialog *pVw = (CHMSConfirmInsuranceFeesDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSConfirmInsuranceFeesDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnAddHMSConfirmInsuranceFeesDialog();
} 
static int _OnEditHMSConfirmInsuranceFeesDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnEditHMSConfirmInsuranceFeesDialog();
} 
static int _OnDeleteHMSConfirmInsuranceFeesDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnDeleteHMSConfirmInsuranceFeesDialog();
} 
static int _OnSaveHMSConfirmInsuranceFeesDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnSaveHMSConfirmInsuranceFeesDialog();
} 
static int _OnCancelHMSConfirmInsuranceFeesDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmInsuranceFeesDialog*)pWnd)->OnCancelHMSConfirmInsuranceFeesDialog();
} 
CHMSConfirmInsuranceFeesDialog::CHMSConfirmInsuranceFeesDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSConfirmInsuranceFeesDialog::~CHMSConfirmInsuranceFeesDialog(){
}
void CHMSConfirmInsuranceFeesDialog::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 640, 355);
	m_wndList.Create(this,10, 30, 635, 350); 
	m_wndApply.Create(this, _T("&Apply"), 475, 360, 555, 385);
	m_wndClose.Create(this, _T("&Close"), 560, 360, 640, 385);

}
void CHMSConfirmInsuranceFeesDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(5, _T("Ins Price"), CFMT_NUMBER, 80);

}
void CHMSConfirmInsuranceFeesDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSConfirmInsuranceFeesDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSConfirmInsuranceFeesDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSConfirmInsuranceFeesDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmInsuranceFeesDialog::SetDefaultValues(){


}
int CHMSConfirmInsuranceFeesDialog::SetMode(int nMode){
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
void CHMSConfirmInsuranceFeesDialog::OnListDblClick(){
	
} 
void CHMSConfirmInsuranceFeesDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSConfirmInsuranceFeesDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSConfirmInsuranceFeesDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("InsPrice")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSConfirmInsuranceFeesDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConfirmInsuranceFeesDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSConfirmInsuranceFeesDialog::OnAddHMSConfirmInsuranceFeesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSConfirmInsuranceFeesDialog::OnEditHMSConfirmInsuranceFeesDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSConfirmInsuranceFeesDialog::OnDeleteHMSConfirmInsuranceFeesDialog(){
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
 		OnCancelHMSConfirmInsuranceFeesDialog(); 
 	}
	return 0;
}
int CHMSConfirmInsuranceFeesDialog::OnSaveHMSConfirmInsuranceFeesDialog(){
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
 		//OnHMSConfirmInsuranceFeesDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSConfirmInsuranceFeesDialog::OnCancelHMSConfirmInsuranceFeesDialog(){
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
int CHMSConfirmInsuranceFeesDialog::OnHMSConfirmInsuranceFeesDialogListLoadData(){
	return 0;
}
