#include "PACSEditDefaultValuesDialog.h"
#include "MainFrm.h"
/*static void _OnDefaultValuesChangeFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnDefaultValuesChange();
} */
/*static void _OnDefaultValuesSetfocusFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnDefaultValuesSetfocus();} */ 
/*static void _OnDefaultValuesKillfocusFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnDefaultValuesKillfocus();
} */
static int _OnDefaultValuesCheckValueFnc(CWnd *pWnd){
	return ((CPACSEditDefaultValuesDialog *)pWnd)->OnDefaultValuesCheckValue();
} 
/*static void _OnValuesOfComboBoxChangeFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnValuesOfComboBoxChange();
} */
/*static void _OnValuesOfComboBoxSetfocusFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnValuesOfComboBoxSetfocus();} */ 
/*static void _OnValuesOfComboBoxKillfocusFnc(CWnd *pWnd){
	((CPACSEditDefaultValuesDialog *)pWnd)->OnValuesOfComboBoxKillfocus();
} */
static int _OnValuesOfComboBoxCheckValueFnc(CWnd *pWnd){
	return ((CPACSEditDefaultValuesDialog *)pWnd)->OnValuesOfComboBoxCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSEditDefaultValuesDialog *pVw = (CPACSEditDefaultValuesDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSEditDefaultValuesDialog *pVw = (CPACSEditDefaultValuesDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPACSEditDefaultValuesDialogFnc(CWnd *pWnd){
	 return ((CPACSEditDefaultValuesDialog*)pWnd)->OnAddPACSEditDefaultValuesDialog();
} 
static int _OnEditPACSEditDefaultValuesDialogFnc(CWnd *pWnd){
	 return ((CPACSEditDefaultValuesDialog*)pWnd)->OnEditPACSEditDefaultValuesDialog();
} 
static int _OnDeletePACSEditDefaultValuesDialogFnc(CWnd *pWnd){
	 return ((CPACSEditDefaultValuesDialog*)pWnd)->OnDeletePACSEditDefaultValuesDialog();
} 
static int _OnSavePACSEditDefaultValuesDialogFnc(CWnd *pWnd){
	 return ((CPACSEditDefaultValuesDialog*)pWnd)->OnSavePACSEditDefaultValuesDialog();
} 
static int _OnCancelPACSEditDefaultValuesDialogFnc(CWnd *pWnd){
	 return ((CPACSEditDefaultValuesDialog*)pWnd)->OnCancelPACSEditDefaultValuesDialog();
} 
CPACSEditDefaultValuesDialog::CPACSEditDefaultValuesDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CPACSEditDefaultValuesDialog::~CPACSEditDefaultValuesDialog(){
}
void CPACSEditDefaultValuesDialog::OnCreateComponents(){
	m_wndDefaultValuesLabel.Create(this, _T("Default Values"), 5, 5, 161, 30);
	m_wndDefaultValues.Create(this,166, 4, 616, 129); 
	m_wndValuesOfComboBoxLabel.Create(this, _T("Values of ComboBox"), 5, 134, 161, 159);
	m_wndValuesOfComboBox.Create(this,166, 134, 616, 259); 
	m_wndSave.Create(this, _T("&Save"), 450, 264, 530, 289);
	m_wndCancel.Create(this, _T("&Cancel"), 535, 264, 615, 289);

}
void CPACSEditDefaultValuesDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDefaultValues.SetLimitText(35);
	m_wndDefaultValues.SetCheckValue(true);
	m_wndValuesOfComboBox.SetLimitText(35);
	m_wndValuesOfComboBox.SetCheckValue(true);

}
void CPACSEditDefaultValuesDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDefaultValues.SetEvent(WE_CHANGE, _OnDefaultValuesChangeFnc);
	//m_wndDefaultValues.SetEvent(WE_SETFOCUS, _OnDefaultValuesSetfocusFnc);
	//m_wndDefaultValues.SetEvent(WE_KILLFOCUS, _OnDefaultValuesKillfocusFnc);
	m_wndDefaultValues.SetEvent(WE_CHECKVALUE, _OnDefaultValuesCheckValueFnc);
	//m_wndValuesOfComboBox.SetEvent(WE_CHANGE, _OnValuesOfComboBoxChangeFnc);
	//m_wndValuesOfComboBox.SetEvent(WE_SETFOCUS, _OnValuesOfComboBoxSetfocusFnc);
	//m_wndValuesOfComboBox.SetEvent(WE_KILLFOCUS, _OnValuesOfComboBoxKillfocusFnc);
	m_wndValuesOfComboBox.SetEvent(WE_CHECKVALUE, _OnValuesOfComboBoxCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CPACSEditDefaultValuesDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDefaultValues.GetDlgCtrlID(), m_szDefaultValues);
	DDX_Text(pDX, m_wndValuesOfComboBox.GetDlgCtrlID(), m_szValuesOfComboBox);

}
void CPACSEditDefaultValuesDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSEditDefaultValuesDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSEditDefaultValuesDialog::SetDefaultValues(){

	m_szDefaultValues.Empty();
	m_szValuesOfComboBox.Empty();

}
int CPACSEditDefaultValuesDialog::SetMode(int nMode){
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
/*void CPACSEditDefaultValuesDialog::OnDefaultValuesChange(){
	
} */
/*void CPACSEditDefaultValuesDialog::OnDefaultValuesSetfocus(){
	
} */
/*void CPACSEditDefaultValuesDialog::OnDefaultValuesKillfocus(){
	
} */
int CPACSEditDefaultValuesDialog::OnDefaultValuesCheckValue(){
	return 0;
} 
/*void CPACSEditDefaultValuesDialog::OnValuesOfComboBoxChange(){
	
} */
/*void CPACSEditDefaultValuesDialog::OnValuesOfComboBoxSetfocus(){
	
} */
/*void CPACSEditDefaultValuesDialog::OnValuesOfComboBoxKillfocus(){
	
} */
int CPACSEditDefaultValuesDialog::OnValuesOfComboBoxCheckValue(){
	return 0;
} 
void CPACSEditDefaultValuesDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSEditDefaultValuesDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSEditDefaultValuesDialog::OnAddPACSEditDefaultValuesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSEditDefaultValuesDialog::OnEditPACSEditDefaultValuesDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSEditDefaultValuesDialog::OnDeletePACSEditDefaultValuesDialog(){
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
 		OnCancelPACSEditDefaultValuesDialog();
 	}
	return 0;
}
int CPACSEditDefaultValuesDialog::OnSavePACSEditDefaultValuesDialog(){
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
 		//OnPACSEditDefaultValuesDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSEditDefaultValuesDialog::OnCancelPACSEditDefaultValuesDialog(){
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
int CPACSEditDefaultValuesDialog::OnPACSEditDefaultValuesDialogListLoadData(){
	return 0;
}
