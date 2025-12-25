#include "KQXQUANG.h"
#include "MainFrm.h"
/*static void _OncdxqChangeFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OncdxqChange();
} */
/*static void _OncdxqSetfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OncdxqSetfocus();} */ 
/*static void _OncdxqKillfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OncdxqKillfocus();
} */
static int _OncdxqCheckValueFnc(CWnd *pWnd){
	return ((CKQXQUANG *)pWnd)->OncdxqCheckValue();
} 
/*static void _On1ChangeFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->On1Change();
} */
/*static void _On1SetfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->On1Setfocus();} */ 
/*static void _On1KillfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->On1Killfocus();
} */
static int _On1CheckValueFnc(CWnd *pWnd){
	return ((CKQXQUANG *)pWnd)->On1CheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CKQXQUANG *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CKQXQUANG *)pWnd)->OnConclusionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CKQXQUANG *pVw = (CKQXQUANG *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CKQXQUANG *pVw = (CKQXQUANG *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CKQXQUANG *pVw = (CKQXQUANG *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CKQXQUANG *pVw = (CKQXQUANG *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddKQXQUANGFnc(CWnd *pWnd){
	 return ((CKQXQUANG*)pWnd)->OnAddKQXQUANG();
} 
static int _OnEditKQXQUANGFnc(CWnd *pWnd){
	 return ((CKQXQUANG*)pWnd)->OnEditKQXQUANG();
} 
static int _OnDeleteKQXQUANGFnc(CWnd *pWnd){
	 return ((CKQXQUANG*)pWnd)->OnDeleteKQXQUANG();
} 
static int _OnSaveKQXQUANGFnc(CWnd *pWnd){
	 return ((CKQXQUANG*)pWnd)->OnSaveKQXQUANG();
} 
static int _OnCancelKQXQUANGFnc(CWnd *pWnd){
	 return ((CKQXQUANG*)pWnd)->OnCancelKQXQUANG();
} 
CKQXQUANG::CKQXQUANG(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 435;
	SetDefaultValues();
}
CKQXQUANG::~CKQXQUANG(){
}
void CKQXQUANG::OnCreateComponents(){
	m_wndchuandoansieuam.Create(this, _T("ChuÈn ®o¸n l©m sµng"), 5, 5, 133, 35);
	m_wndcdxq.Create(this,143, 5, 595, 35); 
	m_wnd1.Create(this,143, 39, 595, 177); 
	m_wndConclusion.Create(this,143, 180, 595, 391); 
	m_wndLabel_24.Create(this, _T("M« t¶ h×nh ¶nh:"), 5, 39, 133, 61);
	m_wndLabel_26.Create(this, _T("K?t luËn X quang:"), 5, 186, 133, 208);
	m_wndUpdate.Create(this, _T("&Update"), 280, 396, 355, 421);
	m_wndSave.Create(this, _T("&Save"), 360, 396, 435, 421);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 396, 515, 421);
	m_wndPrint.Create(this, _T("&Print"), 520, 396, 595, 421);

}
void CKQXQUANG::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndcdxq.SetLimitText(35);
	m_wndcdxq.SetCheckValue(true);
	m_wnd1.SetMultiLine(TRUE);
	m_wnd1.SetLimitText(35);
	m_wnd1.SetCheckValue(true);
	m_wndConclusion.SetMultiLine(TRUE);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);

}
void CKQXQUANG::OnSetWindowEvents(){
	//m_wndcdxq.SetEvent(WE_CHANGE, _OncdxqChangeFnc);
	//m_wndcdxq.SetEvent(WE_SETFOCUS, _OncdxqSetfocusFnc);
	//m_wndcdxq.SetEvent(WE_KILLFOCUS, _OncdxqKillfocusFnc);
	m_wndcdxq.SetEvent(WE_CHECKVALUE, _OncdxqCheckValueFnc);
	//m_wnd1.SetEvent(WE_CHANGE, _On1ChangeFnc);
	//m_wnd1.SetEvent(WE_SETFOCUS, _On1SetfocusFnc);
	//m_wnd1.SetEvent(WE_KILLFOCUS, _On1KillfocusFnc);
	m_wnd1.SetEvent(WE_CHECKVALUE, _On1CheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

}
void CKQXQUANG::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndcdxq.GetDlgCtrlID(), m_szcdxq);
	DDX_Text(pDX, m_wnd1.GetDlgCtrlID(), m_sz1);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CKQXQUANG::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CKQXQUANG::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CKQXQUANG::SetDefaultValues(){

	m_szcdxq.Empty();
	m_sz1.Empty();
	m_szConclusion.Empty();

}
int CKQXQUANG::SetMode(int nMode){
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
/*void CKQXQUANG::OncdxqChange(){
	
} */
/*void CKQXQUANG::OncdxqSetfocus(){
	
} */
/*void CKQXQUANG::OncdxqKillfocus(){
	
} */
int CKQXQUANG::OncdxqCheckValue(){
	return 0;
} 
/*void CKQXQUANG::On1Change(){
	
} */
/*void CKQXQUANG::On1Setfocus(){
	
} */
/*void CKQXQUANG::On1Killfocus(){
	
} */
int CKQXQUANG::On1CheckValue(){
	return 0;
} 
/*void CKQXQUANG::OnConclusionChange(){
	
} */
/*void CKQXQUANG::OnConclusionSetfocus(){
	
} */
/*void CKQXQUANG::OnConclusionKillfocus(){
	
} */
int CKQXQUANG::OnConclusionCheckValue(){
	return 0;
} 
void CKQXQUANG::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CKQXQUANG::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CKQXQUANG::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CKQXQUANG::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CKQXQUANG::OnAddKQXQUANG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CKQXQUANG::OnEditKQXQUANG(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CKQXQUANG::OnDeleteKQXQUANG(){
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
 		OnCancelKQXQUANG(); 
 	}
	return 0;
}
int CKQXQUANG::OnSaveKQXQUANG(){
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
 		//OnKQXQUANGListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CKQXQUANG::OnCancelKQXQUANG(){
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
int CKQXQUANG::OnKQXQUANGListLoadData(){
	return 0;
}
