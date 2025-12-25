#include "EditUnitPriceDialog.h"
#include "MainFrame_E10.h"
#include "PMSPrescriptionOrderIN.h"
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CEditUnitPriceDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CEditUnitPriceDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CEditUnitPriceDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CEditUnitPriceDialog *)pWnd)->OnUnitPriceCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CEditUnitPriceDialog *pVw = (CEditUnitPriceDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CEditUnitPriceDialog *pVw = (CEditUnitPriceDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddEditUnitPriceDialogFnc(CWnd *pWnd){
	 return ((CEditUnitPriceDialog*)pWnd)->OnAddEditUnitPriceDialog();
} 
static int _OnEditEditUnitPriceDialogFnc(CWnd *pWnd){
	 return ((CEditUnitPriceDialog*)pWnd)->OnEditEditUnitPriceDialog();
} 
static int _OnDeleteEditUnitPriceDialogFnc(CWnd *pWnd){
	 return ((CEditUnitPriceDialog*)pWnd)->OnDeleteEditUnitPriceDialog();
} 
static int _OnSaveEditUnitPriceDialogFnc(CWnd *pWnd){
	 return ((CEditUnitPriceDialog*)pWnd)->OnSaveEditUnitPriceDialog();
} 
static int _OnCancelEditUnitPriceDialogFnc(CWnd *pWnd){
	 return ((CEditUnitPriceDialog*)pWnd)->OnCancelEditUnitPriceDialog();
} 
CEditUnitPriceDialog::CEditUnitPriceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEditUnitPriceDialog::~CEditUnitPriceDialog(){
}
void CEditUnitPriceDialog::OnCreateComponents(){
	m_wndEditUnitPrice.Create(this, _T("Edit Unit Price"), 5, 5, 260, 60);
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 10, 30, 90, 55);
	m_wndUnitPrice.Create(this,95, 30, 255, 55); 
	m_wndOK.Create(this, _T("&OK"), 95, 65, 175, 90);
	m_wndDiscard.Create(this, _T("&Discard"), 180, 65, 260, 90);

}
void CEditUnitPriceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);

}
void CEditUnitPriceDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(VM_EDIT);

}
void CEditUnitPriceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);

}
void CEditUnitPriceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEditUnitPriceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CEditUnitPriceDialog::SetDefaultValues(){

	m_nUnitPrice=0;

}
int CEditUnitPriceDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CEditUnitPriceDialog::OnUnitPriceChange(){
	
} */
/*void CEditUnitPriceDialog::OnUnitPriceSetfocus(){
	
} */
/*void CEditUnitPriceDialog::OnUnitPriceKillfocus(){
	
} */
int CEditUnitPriceDialog::OnUnitPriceCheckValue(){
	return 0;
} 
void CEditUnitPriceDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(true);
	szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_unitprice = %ld WHERE hpol_orderid = %ld AND hpol_product_id = %ld AND hpol_unitprice = %ld"), m_nUnitPrice, m_nOrderID, m_nProductID, m_nOldPrice);
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes > 0)
	{
		((CPMSPrescriptionOrderIN*) m_pWnd)->OnDrugListLoadData();
		CGuiDialog::OnOK();
	}
} 
void CEditUnitPriceDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
int CEditUnitPriceDialog::OnAddEditUnitPriceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEditUnitPriceDialog::OnEditEditUnitPriceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEditUnitPriceDialog::OnDeleteEditUnitPriceDialog(){
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
 		OnCancelEditUnitPriceDialog();
 	}
	return 0;
}
int CEditUnitPriceDialog::OnSaveEditUnitPriceDialog(){
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
 		//OnEditUnitPriceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEditUnitPriceDialog::OnCancelEditUnitPriceDialog(){
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
int CEditUnitPriceDialog::OnEditUnitPriceDialogListLoadData(){
	return 0;
}
