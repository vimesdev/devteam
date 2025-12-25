#include "HMSServicePackageEditQuantityDialog.h"
#include "MainFrm.h"
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageEditQuantityDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnRealQtyChangeFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnRealQtyChange();
} */
/*static void _OnRealQtySetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnRealQtySetfocus();} */ 
/*static void _OnRealQtyKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnRealQtyKillfocus();
} */
static int _OnRealQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageEditQuantityDialog *)pWnd)->OnRealQtyCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageEditQuantityDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageEditQuantityDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSServicePackageEditQuantityDialog *pVw = (CHMSServicePackageEditQuantityDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSServicePackageEditQuantityDialog *pVw = (CHMSServicePackageEditQuantityDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSServicePackageEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageEditQuantityDialog*)pWnd)->OnAddHMSServicePackageEditQuantityDialog();
} 
static int _OnEditHMSServicePackageEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageEditQuantityDialog*)pWnd)->OnEditHMSServicePackageEditQuantityDialog();
} 
static int _OnDeleteHMSServicePackageEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageEditQuantityDialog*)pWnd)->OnDeleteHMSServicePackageEditQuantityDialog();
} 
static int _OnSaveHMSServicePackageEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageEditQuantityDialog*)pWnd)->OnSaveHMSServicePackageEditQuantityDialog();
} 
static int _OnCancelHMSServicePackageEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageEditQuantityDialog*)pWnd)->OnCancelHMSServicePackageEditQuantityDialog();
} 
CHMSServicePackageEditQuantityDialog::CHMSServicePackageEditQuantityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 425;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSServicePackageEditQuantityDialog::~CHMSServicePackageEditQuantityDialog(){
}
void CHMSServicePackageEditQuantityDialog::OnCreateComponents(){
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 5, 105, 30);
	m_wndQuantity.Create(this,110, 5, 210, 30); 
	m_wndRealQtyLabel.Create(this, _T("RealQty"), 213, 6, 313, 31);
	m_wndRealQty.Create(this,318, 6, 418, 31); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 35, 105, 60);
	m_wndReason.Create(this,110, 35, 418, 60); 
	m_wndOK.Create(this, _T("&OK"), 255, 65, 335, 90);
	m_wndCancel.Create(this, _T("&Cancel"), 340, 65, 420, 90);

}
void CHMSServicePackageEditQuantityDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndQuantity.SetLimitText(16);
	m_wndRealQty.SetLimitText(16);
	m_wndRealQty.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);

}
void CHMSServicePackageEditQuantityDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndRealQty.SetEvent(WE_CHANGE, _OnRealQtyChangeFnc);
	//m_wndRealQty.SetEvent(WE_SETFOCUS, _OnRealQtySetfocusFnc);
	//m_wndRealQty.SetEvent(WE_KILLFOCUS, _OnRealQtyKillfocusFnc);
	m_wndRealQty.SetEvent(WE_CHECKVALUE, _OnRealQtyCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSServicePackageEditQuantityDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndRealQty.GetDlgCtrlID(), m_nRealQty);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CHMSServicePackageEditQuantityDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("RealQty")] =  m_nRealQty;
	m_jData[_T("Reason")] =  m_szReason;
	}
	else
	{
			
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("RealQty")].GetValue(m_nRealQty);
	m_jData[_T("Reason")].GetValue(m_szReason);
	}

}
void CHMSServicePackageEditQuantityDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageEditQuantityDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageEditQuantityDialog::SetDefaultValues(){

	m_nQuantity=0;
	m_nRealQty=0;
	m_szReason.Empty();

}
int CHMSServicePackageEditQuantityDialog::SetMode(int nMode){
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
/*void CHMSServicePackageEditQuantityDialog::OnQuantityChange(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnQuantityKillfocus(){
	
} */
int CHMSServicePackageEditQuantityDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSServicePackageEditQuantityDialog::OnRealQtyChange(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnRealQtySetfocus(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnRealQtyKillfocus(){
	
} */
int CHMSServicePackageEditQuantityDialog::OnRealQtyCheckValue(){
	return 0;
} 
/*void CHMSServicePackageEditQuantityDialog::OnReasonChange(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnReasonSetfocus(){
	
} */
/*void CHMSServicePackageEditQuantityDialog::OnReasonKillfocus(){
	
} */
int CHMSServicePackageEditQuantityDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSServicePackageEditQuantityDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageEditQuantityDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageEditQuantityDialog::OnAddHMSServicePackageEditQuantityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageEditQuantityDialog::OnEditHMSServicePackageEditQuantityDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageEditQuantityDialog::OnDeleteHMSServicePackageEditQuantityDialog(){
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
 		OnCancelHMSServicePackageEditQuantityDialog();
 	}
	return 0;
}
int CHMSServicePackageEditQuantityDialog::OnSaveHMSServicePackageEditQuantityDialog(){
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
 		//OnHMSServicePackageEditQuantityDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageEditQuantityDialog::OnCancelHMSServicePackageEditQuantityDialog(){
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
int CHMSServicePackageEditQuantityDialog::OnHMSServicePackageEditQuantityDialogListLoadData(){
	return 0;
}
