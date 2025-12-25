#include "NumberInputDialog.h"
#include "MainFrm.h"
/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CNumberInputDialog *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CNumberInputDialog *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CNumberInputDialog *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CNumberInputDialog *)pWnd)->OnValueCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CNumberInputDialog *pVw = (CNumberInputDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CNumberInputDialog *pVw = (CNumberInputDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddNumberInputDialogFnc(CWnd *pWnd){
	 return ((CNumberInputDialog*)pWnd)->OnAddNumberInputDialog();
} 
static int _OnEditNumberInputDialogFnc(CWnd *pWnd){
	 return ((CNumberInputDialog*)pWnd)->OnEditNumberInputDialog();
} 
static int _OnDeleteNumberInputDialogFnc(CWnd *pWnd){
	 return ((CNumberInputDialog*)pWnd)->OnDeleteNumberInputDialog();
} 
static int _OnSaveNumberInputDialogFnc(CWnd *pWnd){
	 return ((CNumberInputDialog*)pWnd)->OnSaveNumberInputDialog();
} 
static int _OnCancelNumberInputDialogFnc(CWnd *pWnd){
	 return ((CNumberInputDialog*)pWnd)->OnCancelNumberInputDialog();
} 
CNumberInputDialog::CNumberInputDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 225;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CNumberInputDialog::~CNumberInputDialog(){
}
void CNumberInputDialog::OnCreateComponents(){
	m_wndInputGroupBox.Create(this, _T("Enter Number"), 5, 5, 216, 60);
	m_wndValueLabel.Create(this, _T("Value"), 9, 30, 109, 55);
	m_wndValue.Create(this,114, 30, 214, 55); 
	m_wndOK.Create(this, _T("&OK"), 52, 65, 132, 90);
	m_wndClose.Create(this, _T("&Close"), 137, 65, 217, 90);

}
void CNumberInputDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndValue.SetLimitText(16);
	m_wndValue.SetCheckValue(true);

}
void CNumberInputDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CNumberInputDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndValue.GetDlgCtrlID(), m_nValue);

}
void CNumberInputDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNumberInputDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CNumberInputDialog::SetDefaultValues(){

	m_nValue=0;

}
int CNumberInputDialog::SetMode(int nMode){
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
/*void CNumberInputDialog::OnValueChange(){
	
} */
/*void CNumberInputDialog::OnValueSetfocus(){
	
} */
/*void CNumberInputDialog::OnValueKillfocus(){
	
} */
int CNumberInputDialog::OnValueCheckValue(){
	return 0;
} 
void CNumberInputDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CNumberInputDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CNumberInputDialog::OnAddNumberInputDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNumberInputDialog::OnEditNumberInputDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNumberInputDialog::OnDeleteNumberInputDialog(){
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
 		OnCancelNumberInputDialog();
 	}
	return 0;
}
int CNumberInputDialog::OnSaveNumberInputDialog(){
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
 		//OnNumberInputDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNumberInputDialog::OnCancelNumberInputDialog(){
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
int CNumberInputDialog::OnNumberInputDialogListLoadData(){
	return 0;
}
