#include "AdmissionFileConfigDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionFileConfigDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdmissionFileConfigDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdmissionFileConfigDialog *pVw = (CAdmissionFileConfigDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdmissionFileConfigDialog *pVw = (CAdmissionFileConfigDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnAddAdmissionFileConfigDialog();
} 
static int _OnEditAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnEditAdmissionFileConfigDialog();
} 
static int _OnDeleteAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnDeleteAdmissionFileConfigDialog();
} 
static int _OnSaveAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnSaveAdmissionFileConfigDialog();
} 
static int _OnCancelAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnCancelAdmissionFileConfigDialog();
} 
CAdmissionFileConfigDialog::CAdmissionFileConfigDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CAdmissionFileConfigDialog::~CAdmissionFileConfigDialog(){
}
void CAdmissionFileConfigDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 639, 450); 
	m_wndApply.Create(this, _T("&Apply"), 465, 455, 550, 480);
	m_wndClose.Create(this, _T("&Close"), 555, 455, 640, 480);

}
void CAdmissionFileConfigDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Department"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Report Name"), CFMT_TEXT, 250);

}
void CAdmissionFileConfigDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdmissionFileConfigDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdmissionFileConfigDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdmissionFileConfigDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdmissionFileConfigDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdmissionFileConfigDialogFnc, 0, 'T', VK_CONTROL);

}
void CAdmissionFileConfigDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CAdmissionFileConfigDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdmissionFileConfigDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdmissionFileConfigDialog::SetDefaultValues(){


}
int CAdmissionFileConfigDialog::SetMode(int nMode){
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
void CAdmissionFileConfigDialog::OnListDblClick(){
	
} 
void CAdmissionFileConfigDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionFileConfigDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdmissionFileConfigDialog::OnListLoadData(){
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
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("ReportName")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdmissionFileConfigDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionFileConfigDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionFileConfigDialog::OnAddAdmissionFileConfigDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdmissionFileConfigDialog::OnEditAdmissionFileConfigDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdmissionFileConfigDialog::OnDeleteAdmissionFileConfigDialog(){
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
 		OnCancelAdmissionFileConfigDialog(); 
 	}
	return 0;
}
int CAdmissionFileConfigDialog::OnSaveAdmissionFileConfigDialog(){
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
 		//OnAdmissionFileConfigDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdmissionFileConfigDialog::OnCancelAdmissionFileConfigDialog(){
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
int CAdmissionFileConfigDialog::OnAdmissionFileConfigDialogListLoadData(){
	return 0;
}
