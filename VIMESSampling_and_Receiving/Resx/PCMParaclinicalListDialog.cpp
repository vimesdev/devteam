#include "PCMParaclinicalListDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPCMParaclinicalListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPCMParaclinicalListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPCMParaclinicalListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPCMParaclinicalListDialog *pVw = (CPCMParaclinicalListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPCMParaclinicalListDialog *pVw = (CPCMParaclinicalListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPCMParaclinicalListDialogFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnAddPCMParaclinicalListDialog();
} 
static int _OnEditPCMParaclinicalListDialogFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnEditPCMParaclinicalListDialog();
} 
static int _OnDeletePCMParaclinicalListDialogFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnDeletePCMParaclinicalListDialog();
} 
static int _OnSavePCMParaclinicalListDialogFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnSavePCMParaclinicalListDialog();
} 
static int _OnCancelPCMParaclinicalListDialogFnc(CWnd *pWnd){
	 return ((CPCMParaclinicalListDialog*)pWnd)->OnCancelPCMParaclinicalListDialog();
} 
CPCMParaclinicalListDialog::CPCMParaclinicalListDialog(){

	m_nDlgWidth = 510;
	m_nDlgHeight = 460;
	SetDefaultValues();
}
CPCMParaclinicalListDialog::~CPCMParaclinicalListDialog(){
}
void CPCMParaclinicalListDialog::OnCreateComponents(){
	m_wndParaclinicalItems.Create(this, _T("Para-clinical items"), 5, 5, 505, 425);
	m_wndList.Create(this,10, 28, 500, 418); 
	m_wndApply.Create(this, _T("&Apply"), 361, 430, 431, 452);
	m_wndClose.Create(this, _T("&Close"), 436, 430, 506, 452);

}
void CPCMParaclinicalListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 360);

}
void CPCMParaclinicalListDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CPCMParaclinicalListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPCMParaclinicalListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPCMParaclinicalListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPCMParaclinicalListDialog::SetDefaultValues(){


}
int CPCMParaclinicalListDialog::SetMode(int nMode){ 
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
void CPCMParaclinicalListDialog::OnListDblClick(){
	
} 
void CPCMParaclinicalListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPCMParaclinicalListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPCMParaclinicalListDialog::OnListLoadData(){
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
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPCMParaclinicalListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMParaclinicalListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPCMParaclinicalListDialog::OnAddPCMParaclinicalListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add PCMParaclinicalListDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPCMParaclinicalListDialog::OnEditPCMParaclinicalListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit PCMParaclinicalListDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPCMParaclinicalListDialog::OnDeletePCMParaclinicalListDialog(){
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
 		OnCancelPCMParaclinicalListDialog(); 
 	}
return 0;
 } 
int CPCMParaclinicalListDialog::OnSavePCMParaclinicalListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnPCMParaclinicalListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPCMParaclinicalListDialog::OnCancelPCMParaclinicalListDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CPCMParaclinicalListDialog::OnPCMParaclinicalListDialogListLoadData(){
	return 0;
}
