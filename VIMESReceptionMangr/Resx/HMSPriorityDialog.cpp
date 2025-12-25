#include "HMSPriorityDialog.h"
#include "MainFrm.h"
static void _OnLevel1SelectFnc(CWnd *pWnd){
	  ((CHMSPriorityDialog*)pWnd)->OnLevel1Select();
}
static void _OnLevel2SelectFnc(CWnd *pWnd){
	  ((CHMSPriorityDialog*)pWnd)->OnLevel2Select();
}
static void _OnLevel3SelectFnc(CWnd *pWnd){
	  ((CHMSPriorityDialog*)pWnd)->OnLevel3Select();
}
static void _OnNormalSelectFnc(CWnd *pWnd){
	  ((CHMSPriorityDialog*)pWnd)->OnNormalSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPriorityDialog *pVw = (CHMSPriorityDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPriorityDialog *pVw = (CHMSPriorityDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPriorityDialogFnc(CWnd *pWnd){
	 return ((CHMSPriorityDialog*)pWnd)->OnAddHMSPriorityDialog();
} 
static int _OnEditHMSPriorityDialogFnc(CWnd *pWnd){
	 return ((CHMSPriorityDialog*)pWnd)->OnEditHMSPriorityDialog();
} 
static int _OnDeleteHMSPriorityDialogFnc(CWnd *pWnd){
	 return ((CHMSPriorityDialog*)pWnd)->OnDeleteHMSPriorityDialog();
} 
static int _OnSaveHMSPriorityDialogFnc(CWnd *pWnd){
	 return ((CHMSPriorityDialog*)pWnd)->OnSaveHMSPriorityDialog();
} 
static int _OnCancelHMSPriorityDialogFnc(CWnd *pWnd){
	 return ((CHMSPriorityDialog*)pWnd)->OnCancelHMSPriorityDialog();
} 
CHMSPriorityDialog::CHMSPriorityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 175;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CHMSPriorityDialog::~CHMSPriorityDialog(){
}
void CHMSPriorityDialog::OnCreateComponents(){
	m_wndPriorityLevel.Create(this, _T("Priority Level"), 5, 5, 165, 151);
	m_wndLevel1.Create(this, _T("Level1 (Emergency)"), 10, 30, 160, 55);
	m_wndLevel2.Create(this, _T("Level2"), 10, 60, 160, 85);
	m_wndLevel3.Create(this, _T("Level3"), 10, 90, 160, 115);
	m_wndNormal.Create(this, _T("Normal"), 10, 120, 160, 145);
	m_wndApply.Create(this, _T("&Apply"), 10, 156, 85, 181);
	m_wndCancel.Create(this, _T("&Cancel"), 90, 156, 165, 181);

}
void CHMSPriorityDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CHMSPriorityDialog::OnSetWindowEvents(){
	m_wndLevel1.SetEvent(WE_CLICK, _OnLevel1SelectFnc);
	m_wndLevel2.SetEvent(WE_CLICK, _OnLevel2SelectFnc);
	m_wndLevel3.SetEvent(WE_CLICK, _OnLevel3SelectFnc);
	m_wndNormal.SetEvent(WE_CLICK, _OnNormalSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPriorityDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndLevel1.GetDlgCtrlID(), m_nLevel1);
	DDX_Radio(pDX, m_wndLevel2.GetDlgCtrlID(), m_nLevel2);
	DDX_Radio(pDX, m_wndLevel3.GetDlgCtrlID(), m_nLevel3);
	DDX_Radio(pDX, m_wndNormal.GetDlgCtrlID(), m_nNormal);

}
void CHMSPriorityDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPriorityDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriorityDialog::SetDefaultValues(){

	m_nLevel1=0;
	m_nLevel2=0;
	m_nLevel3=0;
	m_nNormal=0;

}
int CHMSPriorityDialog::SetMode(int nMode){
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
void CHMSPriorityDialog::OnLevel1Select(){
	
}
void CHMSPriorityDialog::OnLevel2Select(){
	
}
void CHMSPriorityDialog::OnLevel3Select(){
	
}
void CHMSPriorityDialog::OnNormalSelect(){
	
}
void CHMSPriorityDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriorityDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriorityDialog::OnAddHMSPriorityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPriorityDialog::OnEditHMSPriorityDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriorityDialog::OnDeleteHMSPriorityDialog(){
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
 		OnCancelHMSPriorityDialog(); 
 	}
	return 0;
}
int CHMSPriorityDialog::OnSaveHMSPriorityDialog(){
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
 		//OnHMSPriorityDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPriorityDialog::OnCancelHMSPriorityDialog(){
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
int CHMSPriorityDialog::OnHMSPriorityDialogListLoadData(){
	return 0;
}
