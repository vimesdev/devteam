#include "StoragePreorderDialog.h"
#include "MainFrm.h"
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnOrderedQuantityChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityChange();
} */
/*static void _OnOrderedQuantitySetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantitySetfocus();} */ 
/*static void _OnOrderedQuantityKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityKillfocus();
} */
static int _OnOrderedQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityCheckValue();
} 
/*static void _OnPreorderQuantityChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityChange();
} */
/*static void _OnPreorderQuantitySetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantitySetfocus();} */ 
/*static void _OnPreorderQuantityKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityKillfocus();
} */
static int _OnPreorderQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CStoragePreorderDialog *pVw = (CStoragePreorderDialog *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStoragePreorderDialog *pVw = (CStoragePreorderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnAddStoragePreorderDialog();
} 
static int _OnEditStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnEditStoragePreorderDialog();
} 
static int _OnDeleteStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnDeleteStoragePreorderDialog();
} 
static int _OnSaveStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnSaveStoragePreorderDialog();
} 
static int _OnCancelStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnCancelStoragePreorderDialog();
} 
CStoragePreorderDialog::CStoragePreorderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 280;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CStoragePreorderDialog::~CStoragePreorderDialog(){
}
void CStoragePreorderDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Item Information"), 5, 5, 270, 120);
	m_wndOnHandLabel.Create(this, _T("Onhand Quantity"), 10, 30, 160, 55);
	m_wndOnHand.Create(this,165, 30, 265, 55); 
	m_wndOrderedQuantityLabel.Create(this, _T("Ordered quantity"), 10, 60, 160, 85);
	m_wndOrderedQuantity.Create(this,165, 60, 265, 85); 
	m_wndPreorderQuantityLabel.Create(this, _T("Preorder quantity"), 10, 90, 160, 115);
	m_wndPreorderQuantity.Create(this,165, 90, 265, 115); 
	m_wndOk.Create(this, _T("&Ok"), 105, 125, 185, 150);
	m_wndClose.Create(this, _T("&Close"), 190, 125, 270, 150);

}
void CStoragePreorderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOnHand.SetLimitText(16);
	m_wndOnHand.SetCheckValue(true);
	m_wndOrderedQuantity.SetLimitText(16);
	m_wndOrderedQuantity.SetCheckValue(true);
	m_wndPreorderQuantity.SetLimitText(16);
	m_wndPreorderQuantity.SetCheckValue(true);

}
void CStoragePreorderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	//m_wndOrderedQuantity.SetEvent(WE_CHANGE, _OnOrderedQuantityChangeFnc);
	//m_wndOrderedQuantity.SetEvent(WE_SETFOCUS, _OnOrderedQuantitySetfocusFnc);
	//m_wndOrderedQuantity.SetEvent(WE_KILLFOCUS, _OnOrderedQuantityKillfocusFnc);
	m_wndOrderedQuantity.SetEvent(WE_CHECKVALUE, _OnOrderedQuantityCheckValueFnc);
	//m_wndPreorderQuantity.SetEvent(WE_CHANGE, _OnPreorderQuantityChangeFnc);
	//m_wndPreorderQuantity.SetEvent(WE_SETFOCUS, _OnPreorderQuantitySetfocusFnc);
	//m_wndPreorderQuantity.SetEvent(WE_KILLFOCUS, _OnPreorderQuantityKillfocusFnc);
	m_wndPreorderQuantity.SetEvent(WE_CHECKVALUE, _OnPreorderQuantityCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CStoragePreorderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndOrderedQuantity.GetDlgCtrlID(), m_nOrderedQuantity);
	DDX_Text(pDX, m_wndPreorderQuantity.GetDlgCtrlID(), m_nPreorderQuantity);

}
void CStoragePreorderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStoragePreorderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CStoragePreorderDialog::SetDefaultValues(){

	m_nOnHand=0;
	m_nOrderedQuantity=0;
	m_nPreorderQuantity=0;

}
int CStoragePreorderDialog::SetMode(int nMode){
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
/*void CStoragePreorderDialog::OnOnHandChange(){
	
} */
/*void CStoragePreorderDialog::OnOnHandSetfocus(){
	
} */
/*void CStoragePreorderDialog::OnOnHandKillfocus(){
	
} */
int CStoragePreorderDialog::OnOnHandCheckValue(){
	return 0;
} 
/*void CStoragePreorderDialog::OnOrderedQuantityChange(){
	
} */
/*void CStoragePreorderDialog::OnOrderedQuantitySetfocus(){
	
} */
/*void CStoragePreorderDialog::OnOrderedQuantityKillfocus(){
	
} */
int CStoragePreorderDialog::OnOrderedQuantityCheckValue(){
	return 0;
} 
/*void CStoragePreorderDialog::OnPreorderQuantityChange(){
	
} */
/*void CStoragePreorderDialog::OnPreorderQuantitySetfocus(){
	
} */
/*void CStoragePreorderDialog::OnPreorderQuantityKillfocus(){
	
} */
int CStoragePreorderDialog::OnPreorderQuantityCheckValue(){
	return 0;
} 
void CStoragePreorderDialog::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStoragePreorderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStoragePreorderDialog::OnAddStoragePreorderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStoragePreorderDialog::OnEditStoragePreorderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStoragePreorderDialog::OnDeleteStoragePreorderDialog(){
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
 		OnCancelStoragePreorderDialog();
 	}
	return 0;
}
int CStoragePreorderDialog::OnSaveStoragePreorderDialog(){
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
 		//OnStoragePreorderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStoragePreorderDialog::OnCancelStoragePreorderDialog(){
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
int CStoragePreorderDialog::OnStoragePreorderDialogListLoadData(){
	return 0;
}
