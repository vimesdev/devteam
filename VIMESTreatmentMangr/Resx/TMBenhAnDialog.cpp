#include "TMBenhAnDialog.h"
#include "MainFrm.h"
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnAddTMBenhAnDialog();
} 
static int _OnEditTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnEditTMBenhAnDialog();
} 
static int _OnDeleteTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnDeleteTMBenhAnDialog();
} 
static int _OnSaveTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnSaveTMBenhAnDialog();
} 
static int _OnCancelTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnCancelTMBenhAnDialog();
} 
CTMBenhAnDialog::CTMBenhAnDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 725;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CTMBenhAnDialog::~CTMBenhAnDialog(){
}
void CTMBenhAnDialog::OnCreateComponents(){
	m_wndSave.Create(this, _T("&Save"), 472, 615, 552, 640);
	m_wndPrint.Create(this, _T("&Print"), 557, 615, 637, 640);
	m_wndClose.Create(this, _T("&Close"), 640, 615, 720, 640);

}
void CTMBenhAnDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMBenhAnDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CTMBenhAnDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CTMBenhAnDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CTMBenhAnDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMBenhAnDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMBenhAnDialog::SetDefaultValues(){


}
int CTMBenhAnDialog::SetMode(int nMode){
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
void CTMBenhAnDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMBenhAnDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMBenhAnDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMBenhAnDialog::OnAddTMBenhAnDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMBenhAnDialog::OnEditTMBenhAnDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMBenhAnDialog::OnDeleteTMBenhAnDialog(){
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
 		OnCancelTMBenhAnDialog();
 	}
	return 0;
}
int CTMBenhAnDialog::OnSaveTMBenhAnDialog(){
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
 		//OnTMBenhAnDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMBenhAnDialog::OnCancelTMBenhAnDialog(){
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
int CTMBenhAnDialog::OnTMBenhAnDialogListLoadData(){
	return 0;
}
