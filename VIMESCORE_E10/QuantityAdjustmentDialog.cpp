#include "QuantityAdjustmentDialog.h"
#include "MainFrame_E10.h"
#include "StorageAdjustmentDialog.h"
/*static void _OnRealInventoryQuantityChangeFnc(CWnd *pWnd){
	((CQuantityAdjustmentDialog *)pWnd)->OnRealInventoryQuantityChange();
} */
/*static void _OnRealInventoryQuantitySetfocusFnc(CWnd *pWnd){
	((CQuantityAdjustmentDialog *)pWnd)->OnRealInventoryQuantitySetfocus();} */ 
/*static void _OnRealInventoryQuantityKillfocusFnc(CWnd *pWnd){
	((CQuantityAdjustmentDialog *)pWnd)->OnRealInventoryQuantityKillfocus();
} */
static int _OnRealInventoryQuantityCheckValueFnc(CWnd *pWnd){
	return ((CQuantityAdjustmentDialog *)pWnd)->OnRealInventoryQuantityCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CQuantityAdjustmentDialog *pVw = (CQuantityAdjustmentDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CQuantityAdjustmentDialog *pVw = (CQuantityAdjustmentDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddQuantityAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CQuantityAdjustmentDialog*)pWnd)->OnAddQuantityAdjustmentDialog();
} 
static int _OnEditQuantityAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CQuantityAdjustmentDialog*)pWnd)->OnEditQuantityAdjustmentDialog();
} 
static int _OnDeleteQuantityAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CQuantityAdjustmentDialog*)pWnd)->OnDeleteQuantityAdjustmentDialog();
} 
static int _OnSaveQuantityAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CQuantityAdjustmentDialog*)pWnd)->OnSaveQuantityAdjustmentDialog();
} 
static int _OnCancelQuantityAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CQuantityAdjustmentDialog*)pWnd)->OnCancelQuantityAdjustmentDialog();
} 
CQuantityAdjustmentDialog::CQuantityAdjustmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CQuantityAdjustmentDialog::~CQuantityAdjustmentDialog(){
}
void CQuantityAdjustmentDialog::OnCreateComponents(){
	m_wndInventoryQuantity.Create(this, _T("Inventory Quantity"), 5, 5, 245, 60);
	m_wndRealInventoryQuantityLabel.Create(this, _T("Real Inventory Quantity"), 10, 30, 150, 55);
	m_wndRealInventoryQuantity.Create(this,155, 30, 240, 55); 
	m_wndOK.Create(this, _T("&OK"), 80, 65, 160, 90);
	m_wndDiscard.Create(this, _T("&Discard"), 165, 65, 245, 90);

}
void CQuantityAdjustmentDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndRealInventoryQuantity.SetLimitText(16);
	m_wndRealInventoryQuantity.SetCheckValue(true);

}
void CQuantityAdjustmentDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndRealInventoryQuantity.SetEvent(WE_CHANGE, _OnRealInventoryQuantityChangeFnc);
	//m_wndRealInventoryQuantity.SetEvent(WE_SETFOCUS, _OnRealInventoryQuantitySetfocusFnc);
	//m_wndRealInventoryQuantity.SetEvent(WE_KILLFOCUS, _OnRealInventoryQuantityKillfocusFnc);
	m_wndRealInventoryQuantity.SetEvent(WE_CHECKVALUE, _OnRealInventoryQuantityCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(VM_ADD);

}
void CQuantityAdjustmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRealInventoryQuantity.GetDlgCtrlID(), m_nRealInventoryQuantity);

}
void CQuantityAdjustmentDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CQuantityAdjustmentDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CQuantityAdjustmentDialog::SetDefaultValues(){

	m_nRealInventoryQuantity=0;

}
int CQuantityAdjustmentDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CQuantityAdjustmentDialog::OnRealInventoryQuantityChange(){
	
} */
/*void CQuantityAdjustmentDialog::OnRealInventoryQuantitySetfocus(){
	
} */
/*void CQuantityAdjustmentDialog::OnRealInventoryQuantityKillfocus(){
	
} */
int CQuantityAdjustmentDialog::OnRealInventoryQuantityCheckValue(){
	return 0;
} 
void CQuantityAdjustmentDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CQuantityAdjustmentDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CQuantityAdjustmentDialog::OnAddQuantityAdjustmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CQuantityAdjustmentDialog::OnEditQuantityAdjustmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CQuantityAdjustmentDialog::OnDeleteQuantityAdjustmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelQuantityAdjustmentDialog();
 	}
	return 0;
}
int CQuantityAdjustmentDialog::OnSaveQuantityAdjustmentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnQuantityAdjustmentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CQuantityAdjustmentDialog::OnCancelQuantityAdjustmentDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CQuantityAdjustmentDialog::OnQuantityAdjustmentDialogListLoadData(){
	return 0;
}
