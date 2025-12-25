#include "TextFieldDialog.h"
#include "GuiMainFrame.h"
/*static void _OnTextFieldChangeFnc(CWnd *pWnd){
	((CTextFieldDialog *)pWnd)->OnTextFieldChange();
} */
/*static void _OnTextFieldSetfocusFnc(CWnd *pWnd){
	((CTextFieldDialog *)pWnd)->OnTextFieldSetfocus();} */ 
/*static void _OnTextFieldKillfocusFnc(CWnd *pWnd){
	((CTextFieldDialog *)pWnd)->OnTextFieldKillfocus();
} */
static int _OnTextFieldCheckValueFnc(CWnd *pWnd){
	return ((CTextFieldDialog *)pWnd)->OnTextFieldCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CTextFieldDialog *pVw = (CTextFieldDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTextFieldDialog *pVw = (CTextFieldDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTextFieldDialogFnc(CWnd *pWnd){
	 return ((CTextFieldDialog*)pWnd)->OnAddTextFieldDialog();
} 
static int _OnEditTextFieldDialogFnc(CWnd *pWnd){
	 return ((CTextFieldDialog*)pWnd)->OnEditTextFieldDialog();
} 
static int _OnDeleteTextFieldDialogFnc(CWnd *pWnd){
	 return ((CTextFieldDialog*)pWnd)->OnDeleteTextFieldDialog();
} 
static int _OnSaveTextFieldDialogFnc(CWnd *pWnd){
	 return ((CTextFieldDialog*)pWnd)->OnSaveTextFieldDialog();
} 
static int _OnCancelTextFieldDialogFnc(CWnd *pWnd){
	 return ((CTextFieldDialog*)pWnd)->OnCancelTextFieldDialog();
} 
CTextFieldDialog::CTextFieldDialog(CWnd *pParent, bool bMultiLine):
	CGuiDialog(pParent){

	m_nDlgWidth = 472;
	m_nDlgHeight = 255;
	SetDefaultValues();
	m_bMultiline = bMultiLine;
}
CTextFieldDialog::~CTextFieldDialog(){
}
void CTextFieldDialog::OnCreateComponents(){
	m_wndTexEditGroupBox.Create(this, _T("Text Field Input"), 5, 5, 380, 110);
	m_wndTextFieldLabel.Create(this, _T("TextField"), 10, 30, 110, 55);
	if(m_bMultiline)
		m_wndTextField.Create(this,115, 30, 375, 105, TRUE, FALSE, TRUE); 
	else
	m_wndTextField.Create(this,115, 30, 375, 105); 
	m_wndOK.Create(this, _T("&OK"), 215, 115, 295, 140);
	m_wndClose.Create(this, _T("&Close"), 300, 115, 380, 140);


}
void CTextFieldDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndTextField.SetLimitText(16);
	m_wndTextField.SetCheckValue(true);

}
void CTextFieldDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//m_wndTextField.SetEvent(WE_CHANGE, _OnTextFieldChangeFnc);
	//m_wndTextField.SetEvent(WE_SETFOCUS, _OnTextFieldSetfocusFnc);
	//m_wndTextField.SetEvent(WE_KILLFOCUS, _OnTextFieldKillfocusFnc);
	m_wndTextField.SetEvent(WE_CHECKVALUE, _OnTextFieldCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CTextFieldDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTextField.GetDlgCtrlID(), m_nTextField);

}
void CTextFieldDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTextFieldDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CTextFieldDialog::SetDefaultValues(){

	m_nTextField=0;

}
int CTextFieldDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
/*void CTextFieldDialog::OnTextFieldChange(){
	
} */
/*void CTextFieldDialog::OnTextFieldSetfocus(){
	
} */
/*void CTextFieldDialog::OnTextFieldKillfocus(){
	
} */
int CTextFieldDialog::OnTextFieldCheckValue(){
	return 0;
} 
void CTextFieldDialog::OnOKSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CTextFieldDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CTextFieldDialog::OnAddTextFieldDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTextFieldDialog::OnEditTextFieldDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTextFieldDialog::OnDeleteTextFieldDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelTextFieldDialog();
 	}
	return 0;
}
int CTextFieldDialog::OnSaveTextFieldDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
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
 		//OnTextFieldDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTextFieldDialog::OnCancelTextFieldDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CTextFieldDialog::OnTextFieldDialogListLoadData(){
	return 0;
}
