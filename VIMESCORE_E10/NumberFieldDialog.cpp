#include "NumberFieldDialog.h"
#include "GuiMainFrame.h"
/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CNumberFieldDialog *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CNumberFieldDialog *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CNumberFieldDialog *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CNumberFieldDialog *)pWnd)->OnValueCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CNumberFieldDialog *pVw = (CNumberFieldDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CNumberFieldDialog *pVw = (CNumberFieldDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddNumberFieldDialogFnc(CWnd *pWnd){
	 return ((CNumberFieldDialog*)pWnd)->OnAddNumberFieldDialog();
} 
static int _OnEditNumberFieldDialogFnc(CWnd *pWnd){
	 return ((CNumberFieldDialog*)pWnd)->OnEditNumberFieldDialog();
} 
static int _OnDeleteNumberFieldDialogFnc(CWnd *pWnd){
	 return ((CNumberFieldDialog*)pWnd)->OnDeleteNumberFieldDialog();
} 
static int _OnSaveNumberFieldDialogFnc(CWnd *pWnd){
	 return ((CNumberFieldDialog*)pWnd)->OnSaveNumberFieldDialog();
} 
static int _OnCancelNumberFieldDialogFnc(CWnd *pWnd){
	 return ((CNumberFieldDialog*)pWnd)->OnCancelNumberFieldDialog();
} 
CNumberFieldDialog::CNumberFieldDialog(CWnd *pParent, CString szValueName, CString szTitle):
	CGuiDialog(pParent){
	m_szValueName = szValueName;
	m_szTitle = szTitle;
	m_nDlgWidth = 320;
	m_nDlgHeight = 126;
	SetDefaultValues();
	m_nMin = 0;
	m_nMax = 0;
	m_bHasMin = false;
	m_bHasMax = false;
}
CNumberFieldDialog::~CNumberFieldDialog(){
}
void CNumberFieldDialog::OnCreateComponents(){
	m_wndNumberFieldGroupBox.Create(this, m_szTitle, 5, 4, 216, 59);
	m_wndValueLabel.Create(this, m_szValueName, 9, 30, 109, 55);
	m_wndValue.Create(this,114, 30, 214, 55); 
	m_wndOK.Create(this, _T("&OK"), 52, 65, 132, 90);
	m_wndClose.Create(this, _T("&Close"), 137, 65, 217, 90);

}
void CNumberFieldDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndValue.SetLimitText(10);
	m_wndValue.SetCheckValue(true);

}
void CNumberFieldDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CNumberFieldDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndValue.GetDlgCtrlID(), m_nValue);

}
void CNumberFieldDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNumberFieldDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CNumberFieldDialog::SetDefaultValues(){

	m_nValue=0;

}
int CNumberFieldDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CNumberFieldDialog::OnValueChange(){
	
} */
/*void CNumberFieldDialog::OnValueSetfocus(){
	
} */
/*void CNumberFieldDialog::OnValueKillfocus(){
	
} */
int CNumberFieldDialog::OnValueCheckValue(){
	if(m_bHasMin && m_nValue < m_nMin)
		return -1;

	if(m_bHasMax && m_nValue > m_nMax)
		return -1;

	return 0;
} 
void CNumberFieldDialog::OnOKSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	if(!IsValidateData())
		return;
	CGuiDialog::OnOK();
} 
void CNumberFieldDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CNumberFieldDialog::OnAddNumberFieldDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNumberFieldDialog::OnEditNumberFieldDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNumberFieldDialog::OnDeleteNumberFieldDialog(){
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
 		OnCancelNumberFieldDialog();
 	}
	return 0;
}
int CNumberFieldDialog::OnSaveNumberFieldDialog(){
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
 		//OnNumberFieldDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNumberFieldDialog::OnCancelNumberFieldDialog(){
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
int CNumberFieldDialog::OnNumberFieldDialogListLoadData(){
	return 0;
}


CString CNumberFieldDialog::GetText()
{
	CString szText;
	szText.Format(_T("%.3f"), m_nValue);
	return szText;
}