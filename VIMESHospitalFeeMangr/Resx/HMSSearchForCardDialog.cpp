#include "HMSSearchForCardDialog.h"
#include "MainFrm.h"
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSSearchForCardDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSSearchForCardDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSSearchForCardDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSearchForCardDialog *)pWnd)->OnCardNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSSearchForCardDialog *pVw = (CHMSSearchForCardDialog *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSearchForCardDialog *pVw = (CHMSSearchForCardDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSearchForCardDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchForCardDialog*)pWnd)->OnAddHMSSearchForCardDialog();
} 
static int _OnEditHMSSearchForCardDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchForCardDialog*)pWnd)->OnEditHMSSearchForCardDialog();
} 
static int _OnDeleteHMSSearchForCardDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchForCardDialog*)pWnd)->OnDeleteHMSSearchForCardDialog();
} 
static int _OnSaveHMSSearchForCardDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchForCardDialog*)pWnd)->OnSaveHMSSearchForCardDialog();
} 
static int _OnCancelHMSSearchForCardDialogFnc(CWnd *pWnd){
	 return ((CHMSSearchForCardDialog*)pWnd)->OnCancelHMSSearchForCardDialog();
} 
CHMSSearchForCardDialog::CHMSSearchForCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
CHMSSearchForCardDialog::~CHMSSearchForCardDialog(){
}
void CHMSSearchForCardDialog::OnCreateComponents(){
	m_wndInputData.Create(this, _T("Input Data"), 5, 5, 320, 60);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 30, 110, 55);
	m_wndCardNo.Create(this,115, 29, 315, 54); 
	m_wndFind.Create(this, _T("&Find"), 155, 65, 235, 90);
	m_wndClose.Create(this, _T("&Close"), 240, 65, 320, 90);

}
void CHMSSearchForCardDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);

}
void CHMSSearchForCardDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSSearchForCardDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);

}
void CHMSSearchForCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSearchForCardDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSearchForCardDialog::SetDefaultValues(){

	m_szCardNo.Empty();

}
int CHMSSearchForCardDialog::SetMode(int nMode){
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
/*void CHMSSearchForCardDialog::OnCardNoChange(){
	
} */
/*void CHMSSearchForCardDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSSearchForCardDialog::OnCardNoKillfocus(){
	
} */
int CHMSSearchForCardDialog::OnCardNoCheckValue(){
	return 0;
} 
void CHMSSearchForCardDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSearchForCardDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSearchForCardDialog::OnAddHMSSearchForCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSearchForCardDialog::OnEditHMSSearchForCardDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSearchForCardDialog::OnDeleteHMSSearchForCardDialog(){
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
 		OnCancelHMSSearchForCardDialog();
 	}
	return 0;
}
int CHMSSearchForCardDialog::OnSaveHMSSearchForCardDialog(){
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
 		//OnHMSSearchForCardDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSearchForCardDialog::OnCancelHMSSearchForCardDialog(){
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
int CHMSSearchForCardDialog::OnHMSSearchForCardDialogListLoadData(){
	return 0;
}
