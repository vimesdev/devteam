#include "HMSCallProcessing.h"
#include "MainFrm.h"
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CHMSCallProcessing *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CHMSCallProcessing *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CHMSCallProcessing *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCallProcessing *)pWnd)->OnBarcodeCheckValue();
} 
static void _OnNextSelectFnc(CWnd *pWnd){
	CHMSCallProcessing *pVw = (CHMSCallProcessing *)pWnd;
	pVw->OnNextSelect();
} 
static void _OnBackSelectFnc(CWnd *pWnd){
	CHMSCallProcessing *pVw = (CHMSCallProcessing *)pWnd;
	pVw->OnBackSelect();
} 
static void _OnCallSelectFnc(CWnd *pWnd){
	CHMSCallProcessing *pVw = (CHMSCallProcessing *)pWnd;
	pVw->OnCallSelect();
} 
static int _OnAddHMSCallProcessingFnc(CWnd *pWnd){
	 return ((CHMSCallProcessing*)pWnd)->OnAddHMSCallProcessing();
} 
static int _OnEditHMSCallProcessingFnc(CWnd *pWnd){
	 return ((CHMSCallProcessing*)pWnd)->OnEditHMSCallProcessing();
} 
static int _OnDeleteHMSCallProcessingFnc(CWnd *pWnd){
	 return ((CHMSCallProcessing*)pWnd)->OnDeleteHMSCallProcessing();
} 
static int _OnSaveHMSCallProcessingFnc(CWnd *pWnd){
	 return ((CHMSCallProcessing*)pWnd)->OnSaveHMSCallProcessing();
} 
static int _OnCancelHMSCallProcessingFnc(CWnd *pWnd){
	 return ((CHMSCallProcessing*)pWnd)->OnCancelHMSCallProcessing();
} 
CHMSCallProcessing::CHMSCallProcessing(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCallProcessing::~CHMSCallProcessing(){
}
void CHMSCallProcessing::OnCreateComponents(){
	m_wndcontrol_5.Create(this, _T("control_5"), 110, 35, 230, 120);
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 5, 5, 105, 30);
	m_wndBarcode.Create(this,110, 5, 230, 30); 
	m_wndNext.Create(this, _T("Next"), 5, 35, 105, 60);
	m_wndBack.Create(this, _T("Back"), 5, 65, 105, 90);
	m_wndCall.Create(this, _T("Call"), 5, 95, 105, 120);

}
void CHMSCallProcessing::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBarcode.SetLimitText(35);
	m_wndBarcode.SetCheckValue(true);

}
void CHMSCallProcessing::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	m_wndNext.SetEvent(WE_CLICK, _OnNextSelectFnc);
	m_wndBack.SetEvent(WE_CLICK, _OnBackSelectFnc);
	m_wndCall.SetEvent(WE_CLICK, _OnCallSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCallProcessingFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCallProcessingFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCallProcessingFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCallProcessingFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCallProcessingFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSCallProcessing::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);

}
void CHMSCallProcessing::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Barcode")] =  m_szBarcode;
	}
	else
	{
			
	m_jData[_T("Barcode")].GetValue(m_szBarcode);
	}

}
void CHMSCallProcessing::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCallProcessing::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCallProcessing::SetDefaultValues(){

	m_szBarcode.Empty();

}
int CHMSCallProcessing::SetMode(int nMode){
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
/*void CHMSCallProcessing::OnBarcodeChange(){
	
} */
/*void CHMSCallProcessing::OnBarcodeSetfocus(){
	
} */
/*void CHMSCallProcessing::OnBarcodeKillfocus(){
	
} */
int CHMSCallProcessing::OnBarcodeCheckValue(){
	return 0;
} 
void CHMSCallProcessing::OnNextSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCallProcessing::OnBackSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCallProcessing::OnCallSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCallProcessing::OnAddHMSCallProcessing(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCallProcessing::OnEditHMSCallProcessing(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCallProcessing::OnDeleteHMSCallProcessing(){
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
 		OnCancelHMSCallProcessing();
 	}
	return 0;
}
int CHMSCallProcessing::OnSaveHMSCallProcessing(){
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
 		//OnHMSCallProcessingListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCallProcessing::OnCancelHMSCallProcessing(){
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
int CHMSCallProcessing::OnHMSCallProcessingListLoadData(){
	return 0;
}
