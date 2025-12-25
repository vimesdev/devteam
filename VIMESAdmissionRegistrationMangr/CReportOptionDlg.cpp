#include "CReportOptionDlg.h"
#include "MainFrm.h"
static void _OnReport1SelectFnc(CWnd *pWnd){
	  ((CCReportOptionDlg*)pWnd)->OnReport1Select();
}
static void _OnReport2SelectFnc(CWnd *pWnd){
	  ((CCReportOptionDlg*)pWnd)->OnReport2Select();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CCReportOptionDlg *pVw = (CCReportOptionDlg *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCReportOptionDlg *pVw = (CCReportOptionDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCReportOptionDlgFnc(CWnd *pWnd){
	 return ((CCReportOptionDlg*)pWnd)->OnAddCReportOptionDlg();
} 
static int _OnEditCReportOptionDlgFnc(CWnd *pWnd){
	 return ((CCReportOptionDlg*)pWnd)->OnEditCReportOptionDlg();
} 
static int _OnDeleteCReportOptionDlgFnc(CWnd *pWnd){
	 return ((CCReportOptionDlg*)pWnd)->OnDeleteCReportOptionDlg();
} 
static int _OnSaveCReportOptionDlgFnc(CWnd *pWnd){
	 return ((CCReportOptionDlg*)pWnd)->OnSaveCReportOptionDlg();
} 
static int _OnCancelCReportOptionDlgFnc(CWnd *pWnd){
	 return ((CCReportOptionDlg*)pWnd)->OnCancelCReportOptionDlg();
} 
CCReportOptionDlg::CCReportOptionDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CCReportOptionDlg::~CCReportOptionDlg(){
}
void CCReportOptionDlg::OnCreateComponents(){
	m_wndReportOption.Create(this, _T("Report Option"), 5, 5, 315, 120);
	m_wndReport1.Create(this, m_szReportName1, 10, 30, 310, 55);
	m_wndReport2.Create(this, m_szReportName2, 10, 60, 310, 85);
	m_wndApply.Create(this, _T("&Apply"), 155, 90, 230, 115);
	m_wndClose.Create(this, _T("&Close"), 235, 90, 310, 115);

}
void CCReportOptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CCReportOptionDlg::OnSetWindowEvents(){
	m_wndReport1.SetEvent(WE_CLICK, _OnReport1SelectFnc);
	m_wndReport2.SetEvent(WE_CLICK, _OnReport2SelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CCReportOptionDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndReport1.GetDlgCtrlID(), m_nReportOption);


}
void CCReportOptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCReportOptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCReportOptionDlg::SetDefaultValues(){
	m_nReportOption = 0;

}
int CCReportOptionDlg::SetMode(int nMode){
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
void CCReportOptionDlg::OnReport1Select(){
	
}
void CCReportOptionDlg::OnReport2Select(){
	
}
void CCReportOptionDlg::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CCReportOptionDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCReportOptionDlg::OnAddCReportOptionDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCReportOptionDlg::OnEditCReportOptionDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCReportOptionDlg::OnDeleteCReportOptionDlg(){
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
 		OnCancelCReportOptionDlg(); 
 	}
	return 0;
}
int CCReportOptionDlg::OnSaveCReportOptionDlg(){
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
 		//OnCReportOptionDlgListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCReportOptionDlg::OnCancelCReportOptionDlg(){
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
int CCReportOptionDlg::OnCReportOptionDlgListLoadData(){
	return 0;
}
