#include "GuiInputDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CGuiInputDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CGuiInputDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CGuiInputDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CGuiInputDialog *pVw = (CGuiInputDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CGuiInputDialog *pVw = (CGuiInputDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddGuiInputDialogFnc(CWnd *pWnd){
	 return ((CGuiInputDialog*)pWnd)->OnAddGuiInputDialog();
} 
static int _OnEditGuiInputDialogFnc(CWnd *pWnd){
	 return ((CGuiInputDialog*)pWnd)->OnEditGuiInputDialog();
} 
static int _OnDeleteGuiInputDialogFnc(CWnd *pWnd){
	 return ((CGuiInputDialog*)pWnd)->OnDeleteGuiInputDialog();
} 
static int _OnSaveGuiInputDialogFnc(CWnd *pWnd){
	 return ((CGuiInputDialog*)pWnd)->OnSaveGuiInputDialog();
} 
static int _OnCancelGuiInputDialogFnc(CWnd *pWnd){
	 return ((CGuiInputDialog*)pWnd)->OnCancelGuiInputDialog();
} 
CGuiInputDialog::CGuiInputDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CGuiInputDialog::~CGuiInputDialog(){
}
void CGuiInputDialog::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 400, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 395, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 395, 85); 
	m_wndApply.Create(this, _T("&Apply"), 235, 95, 315, 120);
	m_wndClose.Create(this, _T("&Close"), 320, 95, 400, 120);

}
void CGuiInputDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);

}
void CGuiInputDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CGuiInputDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CGuiInputDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CGuiInputDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CGuiInputDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CGuiInputDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();

}
int CGuiInputDialog::SetMode(int nMode){
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
/*void CGuiInputDialog::OnIDChange(){
	
} */
/*void CGuiInputDialog::OnIDSetfocus(){
	
} */
/*void CGuiInputDialog::OnIDKillfocus(){
	
} */
int CGuiInputDialog::OnIDCheckValue(){
	return 0;
} 
/*void CGuiInputDialog::OnNameChange(){
	
} */
/*void CGuiInputDialog::OnNameSetfocus(){
	
} */
/*void CGuiInputDialog::OnNameKillfocus(){
	
} */
int CGuiInputDialog::OnNameCheckValue(){
	return 0;
} 
void CGuiInputDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGuiInputDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CGuiInputDialog::OnAddGuiInputDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGuiInputDialog::OnEditGuiInputDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGuiInputDialog::OnDeleteGuiInputDialog(){
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
 		OnCancelGuiInputDialog();
 	}
	return 0;
}
int CGuiInputDialog::OnSaveGuiInputDialog(){
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
 		//OnGuiInputDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CGuiInputDialog::OnCancelGuiInputDialog(){
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
int CGuiInputDialog::OnGuiInputDialogListLoadData(){
	return 0;
}
